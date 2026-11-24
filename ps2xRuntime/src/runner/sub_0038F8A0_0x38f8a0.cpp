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

// Function: sub_0038F8A0
// Address: 0x38f8a0 - 0x38f908
void sub_0038F8A0_0x38f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F8A0_0x38f8a0");
#endif

    switch (ctx->pc) {
        case 0x38f8d4u: goto label_38f8d4;
        default: break;
    }

    ctx->pc = 0x38f8a0u;

    // 0x38f8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f8b0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38F8B0u;
    {
        const bool branch_taken_0x38f8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8B0u;
        // 0x38f8b4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f8b0) {
            ctx->pc = 0x38F8F8u;
            goto label_38f8f8;
        }
    }
    ctx->pc = 0x38F8B8u;
    // 0x38f8b8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38f8bc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x38f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x38f8c0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x38f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x38f8c4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38f8c8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x38f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x38f8cc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x38F8CCu;
    SET_GPR_U32(ctx, 31, 0x38F8D4u);
    ctx->pc = 0x38F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F8CCu;
    // 0x38f8d0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x38F8CCu, 0x38F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F8D4u;
label_38f8d4:
    // 0x38f8d4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x38f8d8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x38f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x38f8dc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x38f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x38f8e0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x38f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x38f8e4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38f8e8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x38f8ec: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x38f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x38f8f0: 0x24639ca0  addiu       $v1, $v1, -0x6360
    ctx->pc = 0x38f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941856));
    // 0x38f8f4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_38f8f8:
    // 0x38f8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f900: 0x3e00008  jr          $ra
    ctx->pc = 0x38F900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F900u;
        // 0x38f904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F908u;
}
