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

// Function: sub_002F3460
// Address: 0x2f3460 - 0x2f34d4
void sub_002F3460_0x2f3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3460_0x2f3460");
#endif

    switch (ctx->pc) {
        case 0x2f34a0u: goto label_2f34a0;
        case 0x2f34b4u: goto label_2f34b4;
        case 0x2f34c4u: goto label_2f34c4;
        default: break;
    }

    ctx->pc = 0x2f3460u;

    // 0x2f3460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f3464: 0x3c03008e  lui         $v1, 0x8E
    ctx->pc = 0x2f3464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)142 << 16));
    // 0x2f3468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f3468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f346c: 0x27878ac4  addiu       $a3, $gp, -0x753C
    ctx->pc = 0x2f346cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937284));
    // 0x2f3470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3474: 0x2463bb80  addiu       $v1, $v1, -0x4480
    ctx->pc = 0x2f3474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949760));
    // 0x2f3478: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2f3478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2f347c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3480: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2f3480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2f3484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3488: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x2f3488u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f348c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f348cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3490: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2f3490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2f3494: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f3494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f3498: 0xc049590  jal         func_125640
    ctx->pc = 0x2F3498u;
    SET_GPR_U32(ctx, 31, 0x2F34A0u);
    ctx->pc = 0x2F349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3498u;
    // 0x2f349c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2F3498u, 0x2F34A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34A0u;
label_2f34a0:
    // 0x2f34a0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2f34a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f34a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34a8: 0x2484bb80  addiu       $a0, $a0, -0x4480
    ctx->pc = 0x2f34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949760));
    // 0x2f34ac: 0xc049590  jal         func_125640
    ctx->pc = 0x2F34ACu;
    SET_GPR_U32(ctx, 31, 0x2F34B4u);
    ctx->pc = 0x2F34B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34ACu;
    // 0x2f34b0: 0x240622d4  addiu       $a2, $zero, 0x22D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8916));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2F34ACu, 0x2F34B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34B4u;
label_2f34b4:
    // 0x2f34b4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2f34b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f34b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34bc: 0xc049590  jal         func_125640
    ctx->pc = 0x2F34BCu;
    SET_GPR_U32(ctx, 31, 0x2F34C4u);
    ctx->pc = 0x2F34C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34BCu;
    // 0x2f34c0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2F34BCu, 0x2F34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34C4u;
label_2f34c4:
    // 0x2f34c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f34c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f34c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f34c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f34cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F34CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34CCu;
        // 0x2f34d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F34CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F34D4u;
}
