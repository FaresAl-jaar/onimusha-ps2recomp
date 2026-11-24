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

// Function: sub_0034C470
// Address: 0x34c470 - 0x34c4d8
void sub_0034C470_0x34c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C470_0x34c470");
#endif

    switch (ctx->pc) {
        case 0x34c4a4u: goto label_34c4a4;
        default: break;
    }

    ctx->pc = 0x34c470u;

    // 0x34c470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34c474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34c478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34c47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c480: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34C480u;
    {
        const bool branch_taken_0x34c480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C480u;
        // 0x34c484: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c480) {
            ctx->pc = 0x34C4C8u;
            goto label_34c4c8;
        }
    }
    ctx->pc = 0x34C488u;
    // 0x34c488: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34c488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34c48c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x34c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x34c490: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x34c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x34c494: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34c494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34c498: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x34c498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x34c49c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x34C49Cu;
    SET_GPR_U32(ctx, 31, 0x34C4A4u);
    ctx->pc = 0x34C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C49Cu;
    // 0x34c4a0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x34C49Cu, 0x34C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4A4u;
label_34c4a4:
    // 0x34c4a4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34c4a8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x34c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x34c4ac: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x34c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x34c4b0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x34c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x34c4b4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34c4b8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34c4bc: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x34c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x34c4c0: 0x24638e00  addiu       $v1, $v1, -0x7200
    ctx->pc = 0x34c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938112));
    // 0x34c4c4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_34c4c8:
    // 0x34c4c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34c4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x34C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C4D0u;
        // 0x34c4d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C4D8u;
}
