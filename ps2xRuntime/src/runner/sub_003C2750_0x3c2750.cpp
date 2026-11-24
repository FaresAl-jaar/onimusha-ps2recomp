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

// Function: sub_003C2750
// Address: 0x3c2750 - 0x3c27b8
void sub_003C2750_0x3c2750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2750_0x3c2750");
#endif

    switch (ctx->pc) {
        case 0x3c2784u: goto label_3c2784;
        default: break;
    }

    ctx->pc = 0x3c2750u;

    // 0x3c2750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c2750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c2754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c2754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c2758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c2758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c275c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c275cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2760: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C2760u;
    {
        const bool branch_taken_0x3c2760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2760u;
        // 0x3c2764: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2760) {
            ctx->pc = 0x3C27A8u;
            goto label_3c27a8;
        }
    }
    ctx->pc = 0x3C2768u;
    // 0x3c2768: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c276c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3c276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3c2770: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3c2770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3c2774: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c2774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c2778: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3c2778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3c277c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3C277Cu;
    SET_GPR_U32(ctx, 31, 0x3C2784u);
    ctx->pc = 0x3C2780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C277Cu;
    // 0x3c2780: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3C277Cu, 0x3C2784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2784u;
label_3c2784:
    // 0x3c2784: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3c2784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3c2788: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3c2788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3c278c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3c278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3c2790: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3c2790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3c2794: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c2794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c2798: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3c2798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3c279c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3c279cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3c27a0: 0x2463a670  addiu       $v1, $v1, -0x5990
    ctx->pc = 0x3c27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944368));
    // 0x3c27a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c27a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3c27a8:
    // 0x3c27a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c27a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c27ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c27acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c27b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C27B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C27B0u;
        // 0x3c27b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C27B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C27B8u;
}
