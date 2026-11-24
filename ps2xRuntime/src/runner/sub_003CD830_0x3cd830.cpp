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

// Function: sub_003CD830
// Address: 0x3cd830 - 0x3cd898
void sub_003CD830_0x3cd830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD830_0x3cd830");
#endif

    switch (ctx->pc) {
        case 0x3cd864u: goto label_3cd864;
        default: break;
    }

    ctx->pc = 0x3cd830u;

    // 0x3cd830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cd830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cd834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cd834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cd838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cd83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cd83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd840: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CD840u;
    {
        const bool branch_taken_0x3cd840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD840u;
        // 0x3cd844: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd840) {
            ctx->pc = 0x3CD888u;
            goto label_3cd888;
        }
    }
    ctx->pc = 0x3CD848u;
    // 0x3cd848: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cd848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cd84c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3cd84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3cd850: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3cd850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3cd854: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3cd854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3cd858: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3cd858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3cd85c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3CD85Cu;
    SET_GPR_U32(ctx, 31, 0x3CD864u);
    ctx->pc = 0x3CD860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD85Cu;
    // 0x3cd860: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3CD85Cu, 0x3CD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD864u;
label_3cd864:
    // 0x3cd864: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3cd864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3cd868: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3cd868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3cd86c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3cd86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3cd870: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3cd870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3cd874: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3cd874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3cd878: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3cd878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3cd87c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3cd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3cd880: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x3cd880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x3cd884: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3cd884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3cd888:
    // 0x3cd888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cd888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd890: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD890u;
        // 0x3cd894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD898u;
}
