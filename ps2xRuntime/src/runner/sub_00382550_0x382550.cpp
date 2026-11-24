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

// Function: sub_00382550
// Address: 0x382550 - 0x3825ec
void sub_00382550_0x382550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382550_0x382550");
#endif

    switch (ctx->pc) {
        case 0x382574u: goto label_382574;
        case 0x382584u: goto label_382584;
        case 0x382594u: goto label_382594;
        case 0x3825a4u: goto label_3825a4;
        case 0x3825a8u: goto label_3825a8;
        case 0x3825b4u: goto label_3825b4;
        case 0x3825d8u: goto label_3825d8;
        default: break;
    }

    ctx->pc = 0x382550u;

    // 0x382550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x382554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38255c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x38255cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x382560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x382564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38256c: 0xc049590  jal         func_125640
    ctx->pc = 0x38256Cu;
    SET_GPR_U32(ctx, 31, 0x382574u);
    ctx->pc = 0x382570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38256Cu;
    // 0x382570: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x38256Cu, 0x382574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382574u;
label_382574:
    // 0x382574: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x382574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x382578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38257c: 0xc049590  jal         func_125640
    ctx->pc = 0x38257Cu;
    SET_GPR_U32(ctx, 31, 0x382584u);
    ctx->pc = 0x382580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38257Cu;
    // 0x382580: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x38257Cu, 0x382584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382584u;
label_382584:
    // 0x382584: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x382584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x382588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38258c: 0xc049590  jal         func_125640
    ctx->pc = 0x38258Cu;
    SET_GPR_U32(ctx, 31, 0x382594u);
    ctx->pc = 0x382590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38258Cu;
    // 0x382590: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x38258Cu, 0x382594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382594u;
label_382594:
    // 0x382594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382598: 0x27858398  addiu       $a1, $gp, -0x7C68
    ctx->pc = 0x382598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935448));
    // 0x38259c: 0xc0e0bb0  jal         func_382EC0
    ctx->pc = 0x38259Cu;
    SET_GPR_U32(ctx, 31, 0x3825A4u);
    ctx->pc = 0x3825A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38259Cu;
    // 0x3825a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382EC0u, 0x38259Cu, 0x3825A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3825A4u;
label_3825a4:
    // 0x3825a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3825a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3825a8:
    // 0x3825a8: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x3825a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3825ac: 0xc0e0dac  jal         func_3836B0
    ctx->pc = 0x3825ACu;
    SET_GPR_U32(ctx, 31, 0x3825B4u);
    ctx->pc = 0x3825B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3825ACu;
    // 0x3825b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3836B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3836B0u, 0x3825ACu, 0x3825B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3825B4u;
label_3825b4:
    // 0x3825b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3825b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3825b8: 0x2a020024  slti        $v0, $s0, 0x24
    ctx->pc = 0x3825b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x3825bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3825BCu;
    {
        const bool branch_taken_0x3825bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3825bc) {
            ctx->pc = 0x3825A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825a8;
        }
    }
    ctx->pc = 0x3825C4u;
    // 0x3825c4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3825c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3825c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3825c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3825cc: 0x24a5c170  addiu       $a1, $a1, -0x3E90
    ctx->pc = 0x3825ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951280));
    // 0x3825d0: 0xc0e0bb0  jal         func_382EC0
    ctx->pc = 0x3825D0u;
    SET_GPR_U32(ctx, 31, 0x3825D8u);
    ctx->pc = 0x3825D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3825D0u;
    // 0x3825d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382EC0u, 0x3825D0u, 0x3825D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3825D8u;
label_3825d8:
    // 0x3825d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3825d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3825dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3825dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3825e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3825e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3825e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3825E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3825E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825E4u;
        // 0x3825e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3825E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3825ECu;
}
