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

// Function: sub_00264740
// Address: 0x264740 - 0x2647a0
void sub_00264740_0x264740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264740_0x264740");
#endif

    switch (ctx->pc) {
        case 0x264774u: goto label_264774;
        case 0x26478cu: goto label_26478c;
        default: break;
    }

    ctx->pc = 0x264740u;

    // 0x264740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26474c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264758: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x264758u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x26475c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26475cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264760: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x264760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x264764: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x264764u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x264768: 0x92270161  lbu         $a3, 0x161($s1)
    ctx->pc = 0x264768u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 353)));
    // 0x26476c: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x26476Cu;
    SET_GPR_U32(ctx, 31, 0x264774u);
    ctx->pc = 0x264770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26476Cu;
    // 0x264770: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x26476Cu, 0x264774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264774u;
label_264774:
    // 0x264774: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x264774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x264778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26477c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26477cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264784: 0xc0b2658  jal         func_2C9960
    ctx->pc = 0x264784u;
    SET_GPR_U32(ctx, 31, 0x26478Cu);
    ctx->pc = 0x264788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264784u;
    // 0x264788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9960u, 0x264784u, 0x26478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26478Cu;
label_26478c:
    // 0x26478c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264798: 0x3e00008  jr          $ra
    ctx->pc = 0x264798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264798u;
        // 0x26479c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2647A0u;
}
