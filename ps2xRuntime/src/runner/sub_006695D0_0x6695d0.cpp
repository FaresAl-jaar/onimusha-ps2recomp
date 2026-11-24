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

// Function: sub_006695D0
// Address: 0x6695d0 - 0x6695f4
void sub_006695D0_0x6695d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006695D0_0x6695d0");
#endif

    ctx->pc = 0x6695d0u;

    // 0x6695d0: 0x5f524d54  .word       0x5F524D54                   # bgtzl       $k0, . + 4 + (0x4D54 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6695D0u;
    {
        const bool branch_taken_0x6695d0 = (GPR_S64(ctx, 26) > 0);
        if (branch_taken_0x6695d0) {
            ctx->pc = 0x6695D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6695D0u;
            // 0x6695d4: 0x4843  sra         $t1, $zero, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x67CB24u;
            return;
        }
    }
    ctx->pc = 0x6695D8u;
    // 0x6695d8: 0x5f524d54  .word       0x5F524D54                   # bgtzl       $k0, . + 4 + (0x4D54 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6695D8u;
    {
        const bool branch_taken_0x6695d8 = (GPR_S64(ctx, 26) > 0);
        if (branch_taken_0x6695d8) {
            ctx->pc = 0x6695DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6695D8u;
            // 0x6695dc: 0x4b4c43  .word       0x004B4C43                   # sra         $t1, $t3, 17 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 11), 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x67CB2Cu;
            return;
        }
    }
    ctx->pc = 0x6695E0u;
    // 0x6695e0: 0x3343410a  andi        $v1, $k0, 0x410A
    ctx->pc = 0x6695e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 26) & (uint64_t)(uint16_t)16650);
    // 0x6695e4: 0x20564e43  addi        $s6, $v0, 0x4E43
    ctx->pc = 0x6695e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
    // 0x6695e8: 0x2e726556  sltiu       $s2, $s3, 0x6556
    ctx->pc = 0x6695e8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25942) ? 1 : 0);
    // 0x6695ec: 0x35302e31  ori         $s0, $t1, 0x2E31
    ctx->pc = 0x6695ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11825);
    // 0x6695f0: 0x69754220  ldl         $s5, 0x4220($t3)
    ctx->pc = 0x6695f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    ctx->pc = 0x6695f4u;
}
