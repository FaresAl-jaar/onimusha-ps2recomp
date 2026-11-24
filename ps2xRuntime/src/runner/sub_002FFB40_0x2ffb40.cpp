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

// Function: sub_002FFB40
// Address: 0x2ffb40 - 0x2ffba8
void sub_002FFB40_0x2ffb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFB40_0x2ffb40");
#endif

    switch (ctx->pc) {
        case 0x2ffb74u: goto label_2ffb74;
        default: break;
    }

    ctx->pc = 0x2ffb40u;

    // 0x2ffb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ffb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ffb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ffb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ffb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb50: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FFB50u;
    {
        const bool branch_taken_0x2ffb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB50u;
        // 0x2ffb54: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb50) {
            ctx->pc = 0x2FFB98u;
            goto label_2ffb98;
        }
    }
    ctx->pc = 0x2FFB58u;
    // 0x2ffb58: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ffb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ffb5c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2ffb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2ffb60: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x2ffb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x2ffb64: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ffb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ffb68: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x2ffb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x2ffb6c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2FFB6Cu;
    SET_GPR_U32(ctx, 31, 0x2FFB74u);
    ctx->pc = 0x2FFB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB6Cu;
    // 0x2ffb70: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2FFB6Cu, 0x2FFB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB74u;
label_2ffb74:
    // 0x2ffb74: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2ffb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2ffb78: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2ffb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2ffb7c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x2ffb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x2ffb80: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x2ffb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x2ffb84: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ffb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ffb88: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2ffb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2ffb8c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x2ffb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x2ffb90: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x2ffb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x2ffb94: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ffb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_2ffb98:
    // 0x2ffb98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ffb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffb9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBA0u;
        // 0x2ffba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFBA8u;
}
