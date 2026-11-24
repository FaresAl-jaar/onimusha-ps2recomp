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

// Function: sub_00104DC8
// Address: 0x104dc8 - 0x104e18
void sub_00104DC8_0x104dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104DC8_0x104dc8");
#endif

    ctx->pc = 0x104dc8u;

    // 0x104dc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104dcc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x104dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x104dd0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x104dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104dd4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x104dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x104dd8: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x104dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x104ddc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x104de0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x104de4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x104de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x104de8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x104dec: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x104decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x104df0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x104df0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x104df4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x104DF4u;
    {
        const bool branch_taken_0x104df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104df4) {
            ctx->pc = 0x104DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DF4u;
            // 0x104df8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x104DFCu;
            goto label_104dfc;
        }
    }
    ctx->pc = 0x104DFCu;
label_104dfc:
    // 0x104dfc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x104dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x104e00: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x104e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x104e04: 0x1012  mflo        $v0
    ctx->pc = 0x104e04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x104e08: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x104e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x104e0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x104e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x104e10: 0x3e00008  jr          $ra
    ctx->pc = 0x104E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E10u;
        // 0x104e14: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104E18u;
}
