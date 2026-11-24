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

// Function: sub_002F1070
// Address: 0x2f1070 - 0x2f10e0
void sub_002F1070_0x2f1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1070_0x2f1070");
#endif

    switch (ctx->pc) {
        case 0x2f10a0u: goto label_2f10a0;
        case 0x2f10c4u: goto label_2f10c4;
        default: break;
    }

    ctx->pc = 0x2f1070u;

    // 0x2f1070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1074: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f1074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f107c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1080: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f1080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1088: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f108c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1090: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f1090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1094: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f1094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1098: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F1098u;
    SET_GPR_U32(ctx, 31, 0x2F10A0u);
    ctx->pc = 0x2F109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1098u;
    // 0x2f109c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F1098u, 0x2F10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F10A0u;
label_2f10a0:
    // 0x2f10a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f10a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f10a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f10a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f10acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f10b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f10b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f10b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10b8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2f10b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f10bc: 0xc0d4a24  jal         func_352890
    ctx->pc = 0x2F10BCu;
    SET_GPR_U32(ctx, 31, 0x2F10C4u);
    ctx->pc = 0x2F10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10BCu;
    // 0x2f10c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352890u, 0x2F10BCu, 0x2F10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F10C4u;
label_2f10c4:
    // 0x2f10c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f10c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f10c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f10c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f10cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f10ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f10d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f10d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f10d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f10d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f10d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F10D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10D8u;
        // 0x2f10dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F10D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F10E0u;
}
