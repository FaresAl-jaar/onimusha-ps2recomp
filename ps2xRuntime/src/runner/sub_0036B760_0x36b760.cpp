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

// Function: sub_0036B760
// Address: 0x36b760 - 0x36b7c8
void sub_0036B760_0x36b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B760_0x36b760");
#endif

    switch (ctx->pc) {
        case 0x36b794u: goto label_36b794;
        default: break;
    }

    ctx->pc = 0x36b760u;

    // 0x36b760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36b764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36b768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36b76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b770: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x36B770u;
    {
        const bool branch_taken_0x36b770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B770u;
        // 0x36b774: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b770) {
            ctx->pc = 0x36B7B8u;
            goto label_36b7b8;
        }
    }
    ctx->pc = 0x36B778u;
    // 0x36b778: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36b778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36b77c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x36b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x36b780: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x36b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x36b784: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x36b784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36b788: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x36b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x36b78c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x36B78Cu;
    SET_GPR_U32(ctx, 31, 0x36B794u);
    ctx->pc = 0x36B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B78Cu;
    // 0x36b790: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x36B78Cu, 0x36B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B794u;
label_36b794:
    // 0x36b794: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x36b794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x36b798: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x36b798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x36b79c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x36b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x36b7a0: 0x248481e0  addiu       $a0, $a0, -0x7E20
    ctx->pc = 0x36b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    // 0x36b7a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x36b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36b7a8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x36b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x36b7ac: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x36b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x36b7b0: 0x24639670  addiu       $v1, $v1, -0x6990
    ctx->pc = 0x36b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940272));
    // 0x36b7b4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x36b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_36b7b8:
    // 0x36b7b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36b7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x36B7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B7C0u;
        // 0x36b7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B7C8u;
}
