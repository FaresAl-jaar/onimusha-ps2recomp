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

// Function: sub_00335450
// Address: 0x335450 - 0x3354b0
void sub_00335450_0x335450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335450_0x335450");
#endif

    switch (ctx->pc) {
        case 0x335484u: goto label_335484;
        default: break;
    }

    ctx->pc = 0x335450u;

    // 0x335450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33545c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33545cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335460: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x335460u;
    {
        const bool branch_taken_0x335460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335460u;
        // 0x335464: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335460) {
            ctx->pc = 0x3354A0u;
            goto label_3354a0;
        }
    }
    ctx->pc = 0x335468u;
    // 0x335468: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x335468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33546c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33546cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x335470: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x335470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x335474: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x335474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x335478: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x335478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x33547c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33547Cu;
    SET_GPR_U32(ctx, 31, 0x335484u);
    ctx->pc = 0x335480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33547Cu;
    // 0x335480: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33547Cu, 0x335484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335484u;
label_335484:
    // 0x335484: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x335484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x335488: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x335488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33548c: 0x248481b0  addiu       $a0, $a0, -0x7E50
    ctx->pc = 0x33548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    // 0x335490: 0x24638870  addiu       $v1, $v1, -0x7790
    ctx->pc = 0x335490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
    // 0x335494: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x335494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x335498: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x335498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33549c: 0x0  nop
    ctx->pc = 0x33549cu;
    // NOP
label_3354a0:
    // 0x3354a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3354a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3354a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3354a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3354a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3354A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3354ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354A8u;
        // 0x3354ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3354A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3354B0u;
}
