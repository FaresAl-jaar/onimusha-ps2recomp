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

// Function: sub_002F10E0
// Address: 0x2f10e0 - 0x2f1150
void sub_002F10E0_0x2f10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F10E0_0x2f10e0");
#endif

    switch (ctx->pc) {
        case 0x2f1110u: goto label_2f1110;
        case 0x2f1134u: goto label_2f1134;
        default: break;
    }

    ctx->pc = 0x2f10e0u;

    // 0x2f10e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f10e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f10e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f10e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f10e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f10ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f10ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f10f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f10f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f10f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f10f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f10f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f10fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1100: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f1100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1104: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f1104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1108: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F1108u;
    SET_GPR_U32(ctx, 31, 0x2F1110u);
    ctx->pc = 0x2F110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1108u;
    // 0x2f110c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F1108u, 0x2F1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1110u;
label_2f1110:
    // 0x2f1110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f1114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1118: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f1118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f111c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f111cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1124: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1128: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f1128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f112c: 0xc0d500c  jal         func_354030
    ctx->pc = 0x2F112Cu;
    SET_GPR_U32(ctx, 31, 0x2F1134u);
    ctx->pc = 0x2F1130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F112Cu;
    // 0x2f1130: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354030u, 0x2F112Cu, 0x2F1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1134u;
label_2f1134:
    // 0x2f1134: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f113c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f113cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1148: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1148u;
        // 0x2f114c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1150u;
}
