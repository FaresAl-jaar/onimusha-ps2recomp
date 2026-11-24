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

// Function: sub_00334CD0
// Address: 0x334cd0 - 0x334d30
void sub_00334CD0_0x334cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334CD0_0x334cd0");
#endif

    switch (ctx->pc) {
        case 0x334d04u: goto label_334d04;
        default: break;
    }

    ctx->pc = 0x334cd0u;

    // 0x334cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x334cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x334cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x334cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ce0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x334CE0u;
    {
        const bool branch_taken_0x334ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CE0u;
        // 0x334ce4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ce0) {
            ctx->pc = 0x334D20u;
            goto label_334d20;
        }
    }
    ctx->pc = 0x334CE8u;
    // 0x334ce8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x334ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x334cec: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x334cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x334cf0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x334cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x334cf4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x334cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x334cf8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x334cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x334cfc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x334CFCu;
    SET_GPR_U32(ctx, 31, 0x334D04u);
    ctx->pc = 0x334D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CFCu;
    // 0x334d00: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x334CFCu, 0x334D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D04u;
label_334d04:
    // 0x334d04: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x334d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x334d08: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x334d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x334d0c: 0x248481b0  addiu       $a0, $a0, -0x7E50
    ctx->pc = 0x334d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    // 0x334d10: 0x24638840  addiu       $v1, $v1, -0x77C0
    ctx->pc = 0x334d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936640));
    // 0x334d14: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x334d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x334d18: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x334d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x334d1c: 0x0  nop
    ctx->pc = 0x334d1cu;
    // NOP
label_334d20:
    // 0x334d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x334d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334d28: 0x3e00008  jr          $ra
    ctx->pc = 0x334D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D28u;
        // 0x334d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334D30u;
}
