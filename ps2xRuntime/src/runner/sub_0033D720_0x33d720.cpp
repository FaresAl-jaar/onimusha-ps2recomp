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

// Function: sub_0033D720
// Address: 0x33d720 - 0x33d79c
void sub_0033D720_0x33d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D720_0x33d720");
#endif

    switch (ctx->pc) {
        case 0x33d748u: goto label_33d748;
        case 0x33d758u: goto label_33d758;
        default: break;
    }

    ctx->pc = 0x33d720u;

    // 0x33d720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33d724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33d728: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x33d72c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33d730: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33d730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33d734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33d738: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33d738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d73c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33d73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d740: 0xc096988  jal         func_25A620
    ctx->pc = 0x33D740u;
    SET_GPR_U32(ctx, 31, 0x33D748u);
    ctx->pc = 0x33D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D740u;
    // 0x33d744: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x33D740u, 0x33D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D748u;
label_33d748:
    // 0x33d748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d750: 0xc096988  jal         func_25A620
    ctx->pc = 0x33D750u;
    SET_GPR_U32(ctx, 31, 0x33D758u);
    ctx->pc = 0x33D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D750u;
    // 0x33d754: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x33D750u, 0x33D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D758u;
label_33d758:
    // 0x33d758: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x33d758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d75c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x33D75Cu;
    {
        const bool branch_taken_0x33d75c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d75c) {
            ctx->pc = 0x33D778u;
            goto label_33d778;
        }
    }
    ctx->pc = 0x33D764u;
    // 0x33d764: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x33d764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33d768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33d768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d76c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33D76Cu;
    {
        const bool branch_taken_0x33d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D76Cu;
        // 0x33d770: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d76c) {
            ctx->pc = 0x33D780u;
            goto label_33d780;
        }
    }
    ctx->pc = 0x33D774u;
    // 0x33d774: 0x0  nop
    ctx->pc = 0x33d774u;
    // NOP
label_33d778:
    // 0x33d778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d77c: 0x0  nop
    ctx->pc = 0x33d77cu;
    // NOP
label_33d780:
    // 0x33d780: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33d780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33d784: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33d784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d788: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33d78c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33d78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33d790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d794: 0x3e00008  jr          $ra
    ctx->pc = 0x33D794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D794u;
        // 0x33d798: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D79Cu;
}
