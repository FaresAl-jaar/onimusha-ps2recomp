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

// Function: sub_0035CE10
// Address: 0x35ce10 - 0x35ce78
void sub_0035CE10_0x35ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CE10_0x35ce10");
#endif

    switch (ctx->pc) {
        case 0x35ce44u: goto label_35ce44;
        default: break;
    }

    ctx->pc = 0x35ce10u;

    // 0x35ce10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ce14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ce18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ce1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ce1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce20: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35CE20u;
    {
        const bool branch_taken_0x35ce20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE20u;
        // 0x35ce24: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce20) {
            ctx->pc = 0x35CE68u;
            goto label_35ce68;
        }
    }
    ctx->pc = 0x35CE28u;
    // 0x35ce28: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x35ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x35ce2c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x35ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x35ce30: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x35ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x35ce34: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x35ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x35ce38: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x35ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x35ce3c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x35CE3Cu;
    SET_GPR_U32(ctx, 31, 0x35CE44u);
    ctx->pc = 0x35CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE3Cu;
    // 0x35ce40: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x35CE3Cu, 0x35CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE44u;
label_35ce44:
    // 0x35ce44: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x35ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x35ce48: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x35ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x35ce4c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x35ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x35ce50: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x35ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x35ce54: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x35ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x35ce58: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x35ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x35ce5c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x35ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x35ce60: 0x24639110  addiu       $v1, $v1, -0x6EF0
    ctx->pc = 0x35ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938896));
    // 0x35ce64: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x35ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_35ce68:
    // 0x35ce68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35ce68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ce6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ce6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ce70: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE70u;
        // 0x35ce74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CE78u;
}
