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

// Function: sub_003993F0
// Address: 0x3993f0 - 0x399494
void sub_003993F0_0x3993f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003993F0_0x3993f0");
#endif

    switch (ctx->pc) {
        case 0x399414u: goto label_399414;
        case 0x399424u: goto label_399424;
        case 0x399460u: goto label_399460;
        case 0x39947cu: goto label_39947c;
        default: break;
    }

    ctx->pc = 0x3993f0u;

    // 0x3993f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3993f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3993f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3993f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3993f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3993f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3993fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3993fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x399404: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x399404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x399408: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x399408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39940c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39940Cu;
    SET_GPR_U32(ctx, 31, 0x399414u);
    ctx->pc = 0x399410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39940Cu;
    // 0x399410: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39940Cu, 0x399414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399414u;
label_399414:
    // 0x399414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399418: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x399418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x39941c: 0xc096988  jal         func_25A620
    ctx->pc = 0x39941Cu;
    SET_GPR_U32(ctx, 31, 0x399424u);
    ctx->pc = 0x399420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39941Cu;
    // 0x399420: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x39941Cu, 0x399424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399424u;
label_399424:
    // 0x399424: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x399424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x399428: 0x0  nop
    ctx->pc = 0x399428u;
    // NOP
    // 0x39942c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x39942cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x399430: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x399430u;
    {
        const bool branch_taken_0x399430 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x399430) {
            ctx->pc = 0x399480u;
            goto label_399480;
        }
    }
    ctx->pc = 0x399438u;
    // 0x399438: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x399438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x39943c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39943cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x399440: 0x0  nop
    ctx->pc = 0x399440u;
    // NOP
    // 0x399444: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x399444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x399448: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x399448u;
    {
        const bool branch_taken_0x399448 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399448u;
        // 0x39944c: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399448) {
            ctx->pc = 0x399468u;
            goto label_399468;
        }
    }
    ctx->pc = 0x399450u;
    // 0x399450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x399454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399458: 0xc0f04c8  jal         func_3C1320
    ctx->pc = 0x399458u;
    SET_GPR_U32(ctx, 31, 0x399460u);
    ctx->pc = 0x39945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399458u;
    // 0x39945c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1320u, 0x399458u, 0x399460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399460u;
label_399460:
    // 0x399460: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x399460u;
    {
        const bool branch_taken_0x399460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399460) {
            ctx->pc = 0x399480u;
            goto label_399480;
        }
    }
    ctx->pc = 0x399468u;
label_399468:
    // 0x399468: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x399468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x39946c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39946cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x399470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399474: 0xc0f04c8  jal         func_3C1320
    ctx->pc = 0x399474u;
    SET_GPR_U32(ctx, 31, 0x39947Cu);
    ctx->pc = 0x399478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399474u;
    // 0x399478: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1320u, 0x399474u, 0x39947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39947Cu;
label_39947c:
    // 0x39947c: 0x0  nop
    ctx->pc = 0x39947cu;
    // NOP
label_399480:
    // 0x399480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39948c: 0x3e00008  jr          $ra
    ctx->pc = 0x39948Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39948Cu;
        // 0x399490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39948Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399494u;
}
