#pragma once

#include "ps2x/iop/iop_host.h"
#include "ps2x/iop/iop_types.h"

#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace ps2x::iop
{
    class IopSubsystem
    {
    public:
        explicit IopSubsystem(IopHost &host);
        ~IopSubsystem();

        IopSubsystem(const IopSubsystem &) = delete;
        IopSubsystem &operator=(const IopSubsystem &) = delete;
        IopSubsystem(IopSubsystem &&) noexcept;
        IopSubsystem &operator=(IopSubsystem &&) noexcept;

        void reset();

        [[nodiscard]] ModuleLoadResult loadModule(std::string_view path, const void *arguments = nullptr, uint32_t argumentSize = 0);
        [[nodiscard]] ModuleLoadResult loadModuleBuffer(uint32_t guestAddress, const void *arguments = nullptr, uint32_t argumentSize = 0);
        [[nodiscard]] bool stopModule(int32_t moduleId, int32_t *result = nullptr);
        void runEeCycles(uint64_t eeCycles) noexcept;

        // The runtime can time the actual IOP execution separately from the small EE checkpoints.
        [[nodiscard]] uint64_t takeDueIopCycles(uint64_t eeCycles) noexcept
        {
            constexpr uint64_t eeCyclesPerIopCycle = 8;
            constexpr uint64_t minimumBatch = 256;
            const uint64_t total = m_eeCycleCarry + eeCycles;
            if (total < minimumBatch * eeCyclesPerIopCycle)
            {
                m_eeCycleCarry = total;
                return 0;
            }
            m_eeCycleCarry = total % eeCyclesPerIopCycle;
            return total / eeCyclesPerIopCycle;
        }
        void runIopCycles(uint64_t cycles) noexcept;

        [[nodiscard]] RpcAbi selectRpcAbi(const RpcAbiRequest &request) const;
        [[nodiscard]] bool canBindRpc(uint32_t sid) const noexcept;
        [[nodiscard]] RpcResult handleRpc(const RpcRequest &request);
        void onSifTransfer(const SifTransfer &transfer);

        // Physical IOP RAM access shared by the emulator, SIF DMA, and HLE services. Addresses are IOP addresses.
        [[nodiscard]] uint32_t allocateMemory(uint32_t size, uint32_t alignment = 16u);
        [[nodiscard]] bool freeMemory(uint32_t address);
        [[nodiscard]] bool readMemory(uint32_t address, void *destination, size_t size) const;
        [[nodiscard]] bool writeMemory(uint32_t address, const void *source, size_t size);
        [[nodiscard]] bool zeroMemory(uint32_t address, size_t size);
        [[nodiscard]] bool isMemoryRange(uint32_t address, size_t size) const;

        [[nodiscard]] DebugSnapshot debugSnapshot() const;

    private:
        uint64_t m_eeCycleCarry = 0;
        class Impl;
        std::unique_ptr<Impl> m_impl;
    };
}
