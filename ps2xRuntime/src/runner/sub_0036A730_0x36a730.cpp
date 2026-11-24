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

// Function: sub_0036A730
// Address: 0x36a730 - 0x36a7a4
void sub_0036A730_0x36a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A730_0x36a730");
#endif

    switch (ctx->pc) {
        case 0x36a744u: goto label_36a744;
        default: break;
    }

    ctx->pc = 0x36a730u;

    // 0x36a730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a73c: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x36A73Cu;
    SET_GPR_U32(ctx, 31, 0x36A744u);
    ctx->pc = 0x36A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A73Cu;
    // 0x36a740: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x36A73Cu, 0x36A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A744u;
label_36a744:
    // 0x36a744: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36A744u;
    {
        const bool branch_taken_0x36a744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a744) {
            ctx->pc = 0x36A778u;
            goto label_36a778;
        }
    }
    ctx->pc = 0x36A74Cu;
    // 0x36a74c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x36a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x36a750: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x36a750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x36a754: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A754u;
    {
        const bool branch_taken_0x36a754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a754) {
            ctx->pc = 0x36A768u;
            goto label_36a768;
        }
    }
    ctx->pc = 0x36A75Cu;
    // 0x36a75c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36A75Cu;
    {
        const bool branch_taken_0x36a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A75Cu;
        // 0x36a760: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a75c) {
            ctx->pc = 0x36A778u;
            goto label_36a778;
        }
    }
    ctx->pc = 0x36A764u;
    // 0x36a764: 0x0  nop
    ctx->pc = 0x36a764u;
    // NOP
label_36a768:
    // 0x36a768: 0x2c830004  sltiu       $v1, $a0, 0x4
    ctx->pc = 0x36a768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x36a76c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36A76Cu;
    {
        const bool branch_taken_0x36a76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a76c) {
            ctx->pc = 0x36A778u;
            goto label_36a778;
        }
    }
    ctx->pc = 0x36A774u;
    // 0x36a774: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x36a774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36a778:
    // 0x36a778: 0x90420043  lbu         $v0, 0x43($v0)
    ctx->pc = 0x36a778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 67)));
    // 0x36a77c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x36a77cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36a780: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x36a780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x36a784: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x36A784u;
    {
        const bool branch_taken_0x36a784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a784) {
            ctx->pc = 0x36A790u;
            goto label_36a790;
        }
    }
    ctx->pc = 0x36A78Cu;
    // 0x36a78c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36a790:
    // 0x36a790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a79c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A79Cu;
        // 0x36a7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A7A4u;
}
