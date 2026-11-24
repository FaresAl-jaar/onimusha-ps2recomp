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

// Function: sub_003A3360
// Address: 0x3a3360 - 0x3a3404
void sub_003A3360_0x3a3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3360_0x3a3360");
#endif

    switch (ctx->pc) {
        case 0x3a3384u: goto label_3a3384;
        case 0x3a3394u: goto label_3a3394;
        case 0x3a33d0u: goto label_3a33d0;
        case 0x3a33ecu: goto label_3a33ec;
        default: break;
    }

    ctx->pc = 0x3a3360u;

    // 0x3a3360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a3364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a3364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a3368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a336c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a336cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a3374: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3a3374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a3378: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3a3378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3a337c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3A337Cu;
    SET_GPR_U32(ctx, 31, 0x3A3384u);
    ctx->pc = 0x3A3380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A337Cu;
    // 0x3a3380: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3A337Cu, 0x3A3384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3384u;
label_3a3384:
    // 0x3a3384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a3384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3388: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3a3388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3a338c: 0xc096988  jal         func_25A620
    ctx->pc = 0x3A338Cu;
    SET_GPR_U32(ctx, 31, 0x3A3394u);
    ctx->pc = 0x3A3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A338Cu;
    // 0x3a3390: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3A338Cu, 0x3A3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3394u;
label_3a3394:
    // 0x3a3394: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a3394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3398: 0x0  nop
    ctx->pc = 0x3a3398u;
    // NOP
    // 0x3a339c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3a339cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a33a0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x3A33A0u;
    {
        const bool branch_taken_0x3a33a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a33a0) {
            ctx->pc = 0x3A33F0u;
            goto label_3a33f0;
        }
    }
    ctx->pc = 0x3A33A8u;
    // 0x3a33a8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3a33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3a33ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a33acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a33b0: 0x0  nop
    ctx->pc = 0x3a33b0u;
    // NOP
    // 0x3a33b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a33b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a33b8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3A33B8u;
    {
        const bool branch_taken_0x3a33b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A33B8u;
        // 0x3a33bc: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a33b8) {
            ctx->pc = 0x3A33D8u;
            goto label_3a33d8;
        }
    }
    ctx->pc = 0x3A33C0u;
    // 0x3a33c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a33c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a33c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a33c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a33c8: 0xc0f04c8  jal         func_3C1320
    ctx->pc = 0x3A33C8u;
    SET_GPR_U32(ctx, 31, 0x3A33D0u);
    ctx->pc = 0x3A33CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A33C8u;
    // 0x3a33cc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1320u, 0x3A33C8u, 0x3A33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A33D0u;
label_3a33d0:
    // 0x3a33d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A33D0u;
    {
        const bool branch_taken_0x3a33d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a33d0) {
            ctx->pc = 0x3A33F0u;
            goto label_3a33f0;
        }
    }
    ctx->pc = 0x3A33D8u;
label_3a33d8:
    // 0x3a33d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3a33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3a33dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a33dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a33e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a33e4: 0xc0f04c8  jal         func_3C1320
    ctx->pc = 0x3A33E4u;
    SET_GPR_U32(ctx, 31, 0x3A33ECu);
    ctx->pc = 0x3A33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A33E4u;
    // 0x3a33e8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1320u, 0x3A33E4u, 0x3A33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A33ECu;
label_3a33ec:
    // 0x3a33ec: 0x0  nop
    ctx->pc = 0x3a33ecu;
    // NOP
label_3a33f0:
    // 0x3a33f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a33f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a33f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a33f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a33f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a33f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a33fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A33FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A33FCu;
        // 0x3a3400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A33FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3404u;
}
