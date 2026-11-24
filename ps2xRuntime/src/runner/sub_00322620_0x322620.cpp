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

// Function: sub_00322620
// Address: 0x322620 - 0x32268c
void sub_00322620_0x322620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322620_0x322620");
#endif

    switch (ctx->pc) {
        case 0x322664u: goto label_322664;
        case 0x32266cu: goto label_32266c;
        default: break;
    }

    ctx->pc = 0x322620u;

    // 0x322620: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x322620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x322624: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322628: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x322628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32262c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32262cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322630: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x322630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x322634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322638: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x322638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32263c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32263cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x322640: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32264c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x322650: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x322650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x322654: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x322654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x322658: 0x618821  addu        $s1, $v1, $at
    ctx->pc = 0x322658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x32265c: 0xc0cfae0  jal         func_33EB80
    ctx->pc = 0x32265Cu;
    SET_GPR_U32(ctx, 31, 0x322664u);
    ctx->pc = 0x322660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32265Cu;
    // 0x322660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB80u, 0x32265Cu, 0x322664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322664u;
label_322664:
    // 0x322664: 0xc0c8344  jal         func_320D10
    ctx->pc = 0x322664u;
    SET_GPR_U32(ctx, 31, 0x32266Cu);
    ctx->pc = 0x322668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322664u;
    // 0x322668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D10u, 0x322664u, 0x32266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32266Cu;
label_32266c:
    // 0x32266c: 0xae30004c  sw          $s0, 0x4C($s1)
    ctx->pc = 0x32266cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
    // 0x322670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322674: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x322674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x322678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32267c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32267cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322684: 0x3e00008  jr          $ra
    ctx->pc = 0x322684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322684u;
        // 0x322688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32268Cu;
}
