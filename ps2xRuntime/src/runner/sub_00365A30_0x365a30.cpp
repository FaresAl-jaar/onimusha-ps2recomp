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

// Function: sub_00365A30
// Address: 0x365a30 - 0x365a98
void sub_00365A30_0x365a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365A30_0x365a30");
#endif

    switch (ctx->pc) {
        case 0x365a64u: goto label_365a64;
        default: break;
    }

    ctx->pc = 0x365a30u;

    // 0x365a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x365a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x365a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a40: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x365A40u;
    {
        const bool branch_taken_0x365a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x365A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A40u;
        // 0x365a44: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365a40) {
            ctx->pc = 0x365A88u;
            goto label_365a88;
        }
    }
    ctx->pc = 0x365A48u;
    // 0x365a48: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x365a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x365a4c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x365a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x365a50: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x365a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x365a54: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x365a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x365a58: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x365a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x365a5c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x365A5Cu;
    SET_GPR_U32(ctx, 31, 0x365A64u);
    ctx->pc = 0x365A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A5Cu;
    // 0x365a60: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x365A5Cu, 0x365A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A64u;
label_365a64:
    // 0x365a64: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x365a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x365a68: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x365a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x365a6c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x365a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x365a70: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x365a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x365a74: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x365a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x365a78: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x365a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x365a7c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x365a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x365a80: 0x246394c0  addiu       $v1, $v1, -0x6B40
    ctx->pc = 0x365a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939840));
    // 0x365a84: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x365a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_365a88:
    // 0x365a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x365a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365a90: 0x3e00008  jr          $ra
    ctx->pc = 0x365A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A90u;
        // 0x365a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365A98u;
}
