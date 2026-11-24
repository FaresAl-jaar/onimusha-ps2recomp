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

// Function: sub_00143600
// Address: 0x143600 - 0x143684
void sub_00143600_0x143600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143600_0x143600");
#endif

    switch (ctx->pc) {
        case 0x143630u: goto label_143630;
        case 0x143650u: goto label_143650;
        default: break;
    }

    ctx->pc = 0x143600u;

    // 0x143600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x143600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x143604: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x143604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x143608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14360c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143610: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x143610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14361c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143620: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143620u;
    {
        const bool branch_taken_0x143620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143620u;
        // 0x143624: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143620) {
            ctx->pc = 0x143668u;
            goto label_143668;
        }
    }
    ctx->pc = 0x143628u;
    // 0x143628: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x143628u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14362c: 0x0  nop
    ctx->pc = 0x14362cu;
    // NOP
label_143630:
    // 0x143630: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x143630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x143634: 0x14700008  bne         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143634u;
    {
        const bool branch_taken_0x143634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x143638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143634u;
        // 0x143638: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143634) {
            ctx->pc = 0x143658u;
            goto label_143658;
        }
    }
    ctx->pc = 0x14363Cu;
    // 0x14363c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143640: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x143640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143644: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x143644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143648: 0xc050f58  jal         func_143D60
    ctx->pc = 0x143648u;
    SET_GPR_U32(ctx, 31, 0x143650u);
    ctx->pc = 0x14364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143648u;
    // 0x14364c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D60u, 0x143648u, 0x143650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143650u;
label_143650:
    // 0x143650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143650u;
    {
        const bool branch_taken_0x143650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143650) {
            ctx->pc = 0x143660u;
            goto label_143660;
        }
    }
    ctx->pc = 0x143658u;
label_143658:
    // 0x143658: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14365c: 0x0  nop
    ctx->pc = 0x14365cu;
    // NOP
label_143660:
    // 0x143660: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x143660u;
    {
        const bool branch_taken_0x143660 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x143664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143660u;
        // 0x143664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143660) {
            ctx->pc = 0x143630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143630;
        }
    }
    ctx->pc = 0x143668u;
label_143668:
    // 0x143668: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x143668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14366c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14366cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14367c: 0x3e00008  jr          $ra
    ctx->pc = 0x14367Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14367Cu;
        // 0x143680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14367Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143684u;
}
