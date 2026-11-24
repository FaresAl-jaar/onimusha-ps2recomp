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

// Function: sub_00289010
// Address: 0x289010 - 0x289090
void sub_00289010_0x289010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289010_0x289010");
#endif

    switch (ctx->pc) {
        case 0x289038u: goto label_289038;
        case 0x289050u: goto label_289050;
        default: break;
    }

    ctx->pc = 0x289010u;

    // 0x289010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x289010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x289014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x289014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x289018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x289018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28901c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x289020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x289024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289028: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x289028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28902c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x28902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x289030: 0xc096988  jal         func_25A620
    ctx->pc = 0x289030u;
    SET_GPR_U32(ctx, 31, 0x289038u);
    ctx->pc = 0x289034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289030u;
    // 0x289034: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x289030u, 0x289038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289038u;
label_289038:
    // 0x289038: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x289038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x28903c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289044: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x289044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x289048: 0xc096908  jal         func_25A420
    ctx->pc = 0x289048u;
    SET_GPR_U32(ctx, 31, 0x289050u);
    ctx->pc = 0x28904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289048u;
    // 0x28904c: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x289048u, 0x289050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289050u;
label_289050:
    // 0x289050: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x289050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289054: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x289054u;
    {
        const bool branch_taken_0x289054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289054) {
            ctx->pc = 0x289070u;
            goto label_289070;
        }
    }
    ctx->pc = 0x28905Cu;
    // 0x28905c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x28905cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289064u;
    {
        const bool branch_taken_0x289064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289064u;
        // 0x289068: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289064) {
            ctx->pc = 0x289078u;
            goto label_289078;
        }
    }
    ctx->pc = 0x28906Cu;
    // 0x28906c: 0x0  nop
    ctx->pc = 0x28906cu;
    // NOP
label_289070:
    // 0x289070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289074: 0x0  nop
    ctx->pc = 0x289074u;
    // NOP
label_289078:
    // 0x289078: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x289078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28907c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28907cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289080: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x289080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x289084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289088: 0x3e00008  jr          $ra
    ctx->pc = 0x289088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289088u;
        // 0x28908c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289090u;
}
