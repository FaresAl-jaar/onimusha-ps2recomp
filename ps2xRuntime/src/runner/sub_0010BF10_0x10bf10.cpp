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

// Function: sub_0010BF10
// Address: 0x10bf10 - 0x10bf7c
void sub_0010BF10_0x10bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BF10_0x10bf10");
#endif

    switch (ctx->pc) {
        case 0x10bf6cu: goto label_10bf6c;
        default: break;
    }

    ctx->pc = 0x10bf10u;

    // 0x10bf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bf14: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x10bf14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bf1c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BF1Cu;
    {
        const bool branch_taken_0x10bf1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bf1c) {
            ctx->pc = 0x10BF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BF1Cu;
            // 0x10bf20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF24u;
            goto label_10bf24;
        }
    }
    ctx->pc = 0x10BF24u;
label_10bf24:
    // 0x10bf24: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x10bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10bf28: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x10bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10bf2c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10bf30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10bf34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10bf38: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x10bf38u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10bf3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10bf40: 0x1012  mflo        $v0
    ctx->pc = 0x10bf40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10bf44: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x10bf44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10bf48: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x10bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10bf4c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x10bf4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10bf50: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BF50u;
    {
        const bool branch_taken_0x10bf50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bf50) {
            ctx->pc = 0x10BF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BF50u;
            // 0x10bf54: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF60u;
            goto label_10bf60;
        }
    }
    ctx->pc = 0x10BF58u;
    // 0x10bf58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10BF58u;
    {
        const bool branch_taken_0x10bf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF58u;
        // 0x10bf5c: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf58) {
            ctx->pc = 0x10BF70u;
            goto label_10bf70;
        }
    }
    ctx->pc = 0x10BF60u;
label_10bf60:
    // 0x10bf60: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x10bf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf64: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10BF64u;
    SET_GPR_U32(ctx, 31, 0x10BF6Cu);
    ctx->pc = 0x10BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF64u;
    // 0x10bf68: 0x24a522f8  addiu       $a1, $a1, 0x22F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10BF64u, 0x10BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF6Cu;
label_10bf6c:
    // 0x10bf6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10bf6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bf70:
    // 0x10bf70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bf74: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF74u;
        // 0x10bf78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BF7Cu;
}
