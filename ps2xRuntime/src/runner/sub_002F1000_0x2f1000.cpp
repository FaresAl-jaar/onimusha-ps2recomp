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

// Function: sub_002F1000
// Address: 0x2f1000 - 0x2f1070
void sub_002F1000_0x2f1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1000_0x2f1000");
#endif

    switch (ctx->pc) {
        case 0x2f1030u: goto label_2f1030;
        case 0x2f1054u: goto label_2f1054;
        default: break;
    }

    ctx->pc = 0x2f1000u;

    // 0x2f1000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f1004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f1008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f100c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f1010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1018: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f101c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1020: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f1020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1024: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f1024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1028: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F1028u;
    SET_GPR_U32(ctx, 31, 0x2F1030u);
    ctx->pc = 0x2F102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1028u;
    // 0x2f102c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F1028u, 0x2F1030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1030u;
label_2f1030:
    // 0x2f1030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1034: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f1034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1038: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f1038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f103c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f103cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1044: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1048: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2f1048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f104c: 0xc0d4cec  jal         func_3533B0
    ctx->pc = 0x2F104Cu;
    SET_GPR_U32(ctx, 31, 0x2F1054u);
    ctx->pc = 0x2F1050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F104Cu;
    // 0x2f1050: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3533B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3533B0u, 0x2F104Cu, 0x2F1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1054u;
label_2f1054:
    // 0x2f1054: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1058: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f105c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f105cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1068: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1068u;
        // 0x2f106c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1070u;
}
