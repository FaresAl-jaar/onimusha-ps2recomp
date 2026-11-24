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

// Function: sub_00394250
// Address: 0x394250 - 0x3942b8
void sub_00394250_0x394250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394250_0x394250");
#endif

    switch (ctx->pc) {
        case 0x394280u: goto label_394280;
        case 0x3942a4u: goto label_3942a4;
        default: break;
    }

    ctx->pc = 0x394250u;

    // 0x394250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x394254: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x394254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x394258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39425c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x39425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x394260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x394264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x394264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x394268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39426c: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x39426cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x394270: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x394270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x394274: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x394274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x394278: 0xc0e4da0  jal         func_393680
    ctx->pc = 0x394278u;
    SET_GPR_U32(ctx, 31, 0x394280u);
    ctx->pc = 0x39427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394278u;
    // 0x39427c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393680u, 0x394278u, 0x394280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394280u;
label_394280:
    // 0x394280: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x394280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x394284: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x394284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x394288: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x394288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x39428c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x39428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x394290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394298: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x394298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39429c: 0xc0e50cc  jal         func_394330
    ctx->pc = 0x39429Cu;
    SET_GPR_U32(ctx, 31, 0x3942A4u);
    ctx->pc = 0x3942A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39429Cu;
    // 0x3942a0: 0xac23fc90  sw          $v1, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394330u, 0x39429Cu, 0x3942A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3942A4u;
label_3942a4:
    // 0x3942a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3942a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3942a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3942a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3942ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3942acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3942b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3942B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3942B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942B0u;
        // 0x3942b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3942B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3942B8u;
}
