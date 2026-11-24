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

// Function: sub_00127418
// Address: 0x127418 - 0x1274a0
void sub_00127418_0x127418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127418_0x127418");
#endif

    switch (ctx->pc) {
        case 0x127454u: goto label_127454;
        case 0x127490u: goto label_127490;
        default: break;
    }

    ctx->pc = 0x127418u;

    // 0x127418: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x127418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12741c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x127420: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x127420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x127424: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x127424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x127428: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x127428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x12742c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12742cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127430: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x127430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x127434: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x127434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x127438: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x127438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x12743c: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x12743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x127440: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x127440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x127444: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x127444u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x127448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x127448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12744c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x12744Cu;
    SET_GPR_U32(ctx, 31, 0x127454u);
    ctx->pc = 0x127450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12744Cu;
    // 0x127450: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x12744Cu, 0x127454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127454u;
label_127454:
    // 0x127454: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x127454u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x127458: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x127458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12745c: 0x8dee6048  lw          $t6, 0x6048($t7)
    ctx->pc = 0x12745cu;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x406048u));
    // 0x127460: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x127460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127464: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x127464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x127468: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x127468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12746c: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x12746cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x127470: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x127470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x127474: 0x25ef7410  addiu       $t7, $t7, 0x7410
    ctx->pc = 0x127474u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 29712));
    // 0x127478: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x127478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x12747c: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x12747cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x127480: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x127480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127484: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x127484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x127488: 0xc04acb2  jal         func_12B2C8
    ctx->pc = 0x127488u;
    SET_GPR_U32(ctx, 31, 0x127490u);
    ctx->pc = 0x12748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127488u;
    // 0x12748c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B2C8u, 0x127488u, 0x127490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127490u;
label_127490:
    // 0x127490: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x127490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127494: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x127494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x127498: 0x3e00008  jr          $ra
    ctx->pc = 0x127498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127498u;
        // 0x12749c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1274A0u;
}
