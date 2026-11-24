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

// Function: sub_00344FA0
// Address: 0x344fa0 - 0x345008
void sub_00344FA0_0x344fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344FA0_0x344fa0");
#endif

    switch (ctx->pc) {
        case 0x344fd4u: goto label_344fd4;
        default: break;
    }

    ctx->pc = 0x344fa0u;

    // 0x344fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344fb0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x344FB0u;
    {
        const bool branch_taken_0x344fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FB0u;
        // 0x344fb4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fb0) {
            ctx->pc = 0x344FF8u;
            goto label_344ff8;
        }
    }
    ctx->pc = 0x344FB8u;
    // 0x344fb8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x344fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x344fbc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x344fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x344fc0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x344fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x344fc4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x344fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x344fc8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x344fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x344fcc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x344FCCu;
    SET_GPR_U32(ctx, 31, 0x344FD4u);
    ctx->pc = 0x344FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344FCCu;
    // 0x344fd0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x344FCCu, 0x344FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344FD4u;
label_344fd4:
    // 0x344fd4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x344fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x344fd8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x344fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x344fdc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x344fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x344fe0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x344fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x344fe4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x344fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x344fe8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x344fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x344fec: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x344fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x344ff0: 0x24638c00  addiu       $v1, $v1, -0x7400
    ctx->pc = 0x344ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937600));
    // 0x344ff4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x344ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_344ff8:
    // 0x344ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345000: 0x3e00008  jr          $ra
    ctx->pc = 0x345000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345000u;
        // 0x345004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345008u;
}
