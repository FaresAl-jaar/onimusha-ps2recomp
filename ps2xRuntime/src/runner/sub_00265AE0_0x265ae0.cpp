#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265AE0
// Address: 0x265ae0 - 0x265b28
void sub_00265AE0_0x265ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265AE0_0x265ae0");
#endif

    ctx->pc = 0x265ae0u;

    // 0x265ae0: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x265ae0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265ae4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x265ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ae8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x265ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x265aec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x265aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x265af0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x265af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x265af4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x265af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x265af8: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x265af8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x265afc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x265afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x265b00: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x265b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x265b04: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x265b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x265b08: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x265b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x265b0c: 0xe48c0028  swc1        $f12, 0x28($a0)
    ctx->pc = 0x265b0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x265b10: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x265b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x265b14: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x265b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x265b18: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x265b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x265b1c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x265b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x265b20: 0x3e00008  jr          $ra
    ctx->pc = 0x265B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B20u;
        // 0x265b24: 0xe48c003c  swc1        $f12, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265B28u;
}
