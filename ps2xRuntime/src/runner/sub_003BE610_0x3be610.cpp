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

// Function: sub_003BE610
// Address: 0x3be610 - 0x3be690
void sub_003BE610_0x3be610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE610_0x3be610");
#endif

    switch (ctx->pc) {
        case 0x3be644u: goto label_3be644;
        case 0x3be66cu: goto label_3be66c;
        default: break;
    }

    ctx->pc = 0x3be610u;

    // 0x3be610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3be610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3be614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3be614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3be618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3be618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3be61c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3be61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3be620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3be620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be624: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be628: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE628u;
    {
        const bool branch_taken_0x3be628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE628u;
        // 0x3be62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be628) {
            ctx->pc = 0x3BE650u;
            goto label_3be650;
        }
    }
    ctx->pc = 0x3BE630u;
    // 0x3be630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be634: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3be634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3be638: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be63c: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE63Cu;
    SET_GPR_U32(ctx, 31, 0x3BE644u);
    ctx->pc = 0x3BE640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE63Cu;
    // 0x3be640: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE63Cu, 0x3BE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE644u;
label_3be644:
    // 0x3be644: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BE644u;
    {
        const bool branch_taken_0x3be644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be644) {
            ctx->pc = 0x3BE670u;
            goto label_3be670;
        }
    }
    ctx->pc = 0x3BE64Cu;
    // 0x3be64c: 0x0  nop
    ctx->pc = 0x3be64cu;
    // NOP
label_3be650:
    // 0x3be650: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be65c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3be65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3be660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be664: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE664u;
    SET_GPR_U32(ctx, 31, 0x3BE66Cu);
    ctx->pc = 0x3BE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE664u;
    // 0x3be668: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE664u, 0x3BE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE66Cu;
label_3be66c:
    // 0x3be66c: 0x0  nop
    ctx->pc = 0x3be66cu;
    // NOP
label_3be670:
    // 0x3be670: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3be670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3be674: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3be674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3be678: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3be678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3be67c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3be67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3be680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3be680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3be684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3be684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be688: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE688u;
        // 0x3be68c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE690u;
}
