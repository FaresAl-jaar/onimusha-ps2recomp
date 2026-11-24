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

// Function: sub_003D4600
// Address: 0x3d4600 - 0x3d4668
void sub_003D4600_0x3d4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4600_0x3d4600");
#endif

    switch (ctx->pc) {
        case 0x3d4634u: goto label_3d4634;
        default: break;
    }

    ctx->pc = 0x3d4600u;

    // 0x3d4600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d4600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d4604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d4604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d4608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d4608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d460c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4610: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D4610u;
    {
        const bool branch_taken_0x3d4610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4610u;
        // 0x3d4614: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4610) {
            ctx->pc = 0x3D4658u;
            goto label_3d4658;
        }
    }
    ctx->pc = 0x3D4618u;
    // 0x3d4618: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d4618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d461c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3d461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3d4620: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3d4620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3d4624: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d4624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d4628: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3d4628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3d462c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3D462Cu;
    SET_GPR_U32(ctx, 31, 0x3D4634u);
    ctx->pc = 0x3D4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D462Cu;
    // 0x3d4630: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3D462Cu, 0x3D4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4634u;
label_3d4634:
    // 0x3d4634: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d4634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d4638: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3d4638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3d463c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3d463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3d4640: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3d4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3d4644: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d4644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3d4648: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d4648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d464c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3d464cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3d4650: 0x2463ac90  addiu       $v1, $v1, -0x5370
    ctx->pc = 0x3d4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945936));
    // 0x3d4654: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3d4654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3d4658:
    // 0x3d4658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d4658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d465c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d465cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4660: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4660u;
        // 0x3d4664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4668u;
}
