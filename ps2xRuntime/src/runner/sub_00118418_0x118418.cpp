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

// Function: sub_00118418
// Address: 0x118418 - 0x118480
void sub_00118418_0x118418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118418_0x118418");
#endif

    switch (ctx->pc) {
        case 0x11842cu: goto label_11842c;
        case 0x118450u: goto label_118450;
        case 0x118458u: goto label_118458;
        case 0x118460u: goto label_118460;
        default: break;
    }

    ctx->pc = 0x118418u;

    // 0x118418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11841c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x118420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118424: 0xc043824  jal         func_10E090
    ctx->pc = 0x118424u;
    SET_GPR_U32(ctx, 31, 0x11842Cu);
    ctx->pc = 0x118428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118424u;
    // 0x118428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E090u, 0x118424u, 0x11842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11842Cu;
label_11842c:
    // 0x11842c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118430: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118434: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x118434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x118438: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x118438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11843c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11843cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x118440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118444: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x118444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x118448: 0xc043820  jal         func_10E080
    ctx->pc = 0x118448u;
    SET_GPR_U32(ctx, 31, 0x118450u);
    ctx->pc = 0x11844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118448u;
    // 0x11844c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E080u, 0x118448u, 0x118450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118450u;
label_118450:
    // 0x118450: 0xc043824  jal         func_10E090
    ctx->pc = 0x118450u;
    SET_GPR_U32(ctx, 31, 0x118458u);
    ctx->pc = 0x118454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118450u;
    // 0x118454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E090u, 0x118450u, 0x118458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118458u;
label_118458:
    // 0x118458: 0xc043820  jal         func_10E080
    ctx->pc = 0x118458u;
    SET_GPR_U32(ctx, 31, 0x118460u);
    ctx->pc = 0x11845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118458u;
    // 0x11845c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E080u, 0x118458u, 0x118460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118460u;
label_118460:
    // 0x118460: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x118460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x118464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118468: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x118468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x11846c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11846cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118470: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x118470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x118474: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x118474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x118478: 0x3e00008  jr          $ra
    ctx->pc = 0x118478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118478u;
        // 0x11847c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118480u;
}
