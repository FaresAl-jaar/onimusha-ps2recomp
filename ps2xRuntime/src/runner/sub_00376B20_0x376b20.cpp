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

// Function: sub_00376B20
// Address: 0x376b20 - 0x376b88
void sub_00376B20_0x376b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376B20_0x376b20");
#endif

    switch (ctx->pc) {
        case 0x376b54u: goto label_376b54;
        default: break;
    }

    ctx->pc = 0x376b20u;

    // 0x376b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x376b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b30: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x376B30u;
    {
        const bool branch_taken_0x376b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x376B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B30u;
        // 0x376b34: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b30) {
            ctx->pc = 0x376B78u;
            goto label_376b78;
        }
    }
    ctx->pc = 0x376B38u;
    // 0x376b38: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x376b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x376b3c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x376b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x376b40: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x376b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x376b44: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x376b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x376b48: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x376b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x376b4c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x376B4Cu;
    SET_GPR_U32(ctx, 31, 0x376B54u);
    ctx->pc = 0x376B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B4Cu;
    // 0x376b50: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x376B4Cu, 0x376B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B54u;
label_376b54:
    // 0x376b54: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x376b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x376b58: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x376b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x376b5c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x376b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x376b60: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x376b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x376b64: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x376b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x376b68: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x376b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x376b6c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x376b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x376b70: 0x24639840  addiu       $v1, $v1, -0x67C0
    ctx->pc = 0x376b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940736));
    // 0x376b74: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x376b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_376b78:
    // 0x376b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376b80: 0x3e00008  jr          $ra
    ctx->pc = 0x376B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B80u;
        // 0x376b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376B88u;
}
