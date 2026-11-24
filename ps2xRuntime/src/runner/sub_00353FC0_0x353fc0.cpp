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

// Function: sub_00353FC0
// Address: 0x353fc0 - 0x354028
void sub_00353FC0_0x353fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353FC0_0x353fc0");
#endif

    switch (ctx->pc) {
        case 0x353ff4u: goto label_353ff4;
        default: break;
    }

    ctx->pc = 0x353fc0u;

    // 0x353fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x353fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x353fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x353fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fd0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x353FD0u;
    {
        const bool branch_taken_0x353fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353FD0u;
        // 0x353fd4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353fd0) {
            ctx->pc = 0x354018u;
            goto label_354018;
        }
    }
    ctx->pc = 0x353FD8u;
    // 0x353fd8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x353fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x353fdc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x353fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x353fe0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x353fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x353fe4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x353fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x353fe8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x353fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x353fec: 0xc09d694  jal         func_275A50
    ctx->pc = 0x353FECu;
    SET_GPR_U32(ctx, 31, 0x353FF4u);
    ctx->pc = 0x353FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353FECu;
    // 0x353ff0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x353FECu, 0x353FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FF4u;
label_353ff4:
    // 0x353ff4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x353ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x353ff8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x353ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x353ffc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x353ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x354000: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x354000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x354004: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x354004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x354008: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x354008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x35400c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x35400cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x354010: 0x24638f20  addiu       $v1, $v1, -0x70E0
    ctx->pc = 0x354010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938400));
    // 0x354014: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x354014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_354018:
    // 0x354018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35401c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35401cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354020: 0x3e00008  jr          $ra
    ctx->pc = 0x354020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354020u;
        // 0x354024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354028u;
}
