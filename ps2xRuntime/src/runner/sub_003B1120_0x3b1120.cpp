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

// Function: sub_003B1120
// Address: 0x3b1120 - 0x3b1188
void sub_003B1120_0x3b1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1120_0x3b1120");
#endif

    switch (ctx->pc) {
        case 0x3b1154u: goto label_3b1154;
        default: break;
    }

    ctx->pc = 0x3b1120u;

    // 0x3b1120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b1124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b1128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b112c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b112cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1130: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B1130u;
    {
        const bool branch_taken_0x3b1130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1130u;
        // 0x3b1134: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1130) {
            ctx->pc = 0x3B1178u;
            goto label_3b1178;
        }
    }
    ctx->pc = 0x3B1138u;
    // 0x3b1138: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b1138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b113c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3b113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3b1140: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3b1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3b1144: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b1144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3b1148: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3b1148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3b114c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3B114Cu;
    SET_GPR_U32(ctx, 31, 0x3B1154u);
    ctx->pc = 0x3B1150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B114Cu;
    // 0x3b1150: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3B114Cu, 0x3B1154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1154u;
label_3b1154:
    // 0x3b1154: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b1154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b1158: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3b1158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3b115c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3b115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3b1160: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3b1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3b1164: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b1164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3b1168: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b1168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b116c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3b116cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3b1170: 0x2463a450  addiu       $v1, $v1, -0x5BB0
    ctx->pc = 0x3b1170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943824));
    // 0x3b1174: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3b1174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3b1178:
    // 0x3b1178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b117c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b117cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1180: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1180u;
        // 0x3b1184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1188u;
}
