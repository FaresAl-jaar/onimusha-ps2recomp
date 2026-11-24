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

// Function: sub_002FFF10
// Address: 0x2fff10 - 0x2fff78
void sub_002FFF10_0x2fff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFF10_0x2fff10");
#endif

    switch (ctx->pc) {
        case 0x2fff44u: goto label_2fff44;
        default: break;
    }

    ctx->pc = 0x2fff10u;

    // 0x2fff10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fff14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fff18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fff1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fff1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fff20: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FFF20u;
    {
        const bool branch_taken_0x2fff20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF20u;
        // 0x2fff24: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff20) {
            ctx->pc = 0x2FFF68u;
            goto label_2fff68;
        }
    }
    ctx->pc = 0x2FFF28u;
    // 0x2fff28: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2fff28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2fff2c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2fff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2fff30: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x2fff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x2fff34: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2fff34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2fff38: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x2fff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x2fff3c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2FFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF44u);
    ctx->pc = 0x2FFF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF3Cu;
    // 0x2fff40: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2FFF3Cu, 0x2FFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF44u;
label_2fff44:
    // 0x2fff44: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2fff44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2fff48: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2fff48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2fff4c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x2fff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x2fff50: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x2fff54: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2fff54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2fff58: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2fff58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2fff5c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x2fff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x2fff60: 0x24638060  addiu       $v1, $v1, -0x7FA0
    ctx->pc = 0x2fff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934624));
    // 0x2fff64: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2fff64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_2fff68:
    // 0x2fff68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fff68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fff6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fff6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fff70: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF70u;
        // 0x2fff74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFF78u;
}
