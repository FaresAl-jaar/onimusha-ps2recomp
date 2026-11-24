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

// Function: sub_0039E740
// Address: 0x39e740 - 0x39e7a8
void sub_0039E740_0x39e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E740_0x39e740");
#endif

    switch (ctx->pc) {
        case 0x39e774u: goto label_39e774;
        default: break;
    }

    ctx->pc = 0x39e740u;

    // 0x39e740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39e744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39e748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39e748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39e74c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e750: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x39E750u;
    {
        const bool branch_taken_0x39e750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E750u;
        // 0x39e754: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e750) {
            ctx->pc = 0x39E798u;
            goto label_39e798;
        }
    }
    ctx->pc = 0x39E758u;
    // 0x39e758: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39e758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39e75c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x39e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x39e760: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x39e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x39e764: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39e764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39e768: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x39e768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x39e76c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x39E76Cu;
    SET_GPR_U32(ctx, 31, 0x39E774u);
    ctx->pc = 0x39E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E76Cu;
    // 0x39e770: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x39E76Cu, 0x39E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E774u;
label_39e774:
    // 0x39e774: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39e774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x39e778: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x39e778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x39e77c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x39e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x39e780: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x39e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x39e784: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39e784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39e788: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39e788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x39e78c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x39e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x39e790: 0x2463a060  addiu       $v1, $v1, -0x5FA0
    ctx->pc = 0x39e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942816));
    // 0x39e794: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39e794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_39e798:
    // 0x39e798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39e79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x39E7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7A0u;
        // 0x39e7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E7A8u;
}
