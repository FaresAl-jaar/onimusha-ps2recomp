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

// Function: sub_003ADB20
// Address: 0x3adb20 - 0x3adb9c
void sub_003ADB20_0x3adb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADB20_0x3adb20");
#endif

    switch (ctx->pc) {
        case 0x3adb48u: goto label_3adb48;
        case 0x3adb58u: goto label_3adb58;
        default: break;
    }

    ctx->pc = 0x3adb20u;

    // 0x3adb20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3adb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3adb24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3adb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3adb28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3adb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3adb2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3adb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3adb30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3adb30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3adb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3adb38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3adb38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3adb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb40: 0xc096988  jal         func_25A620
    ctx->pc = 0x3ADB40u;
    SET_GPR_U32(ctx, 31, 0x3ADB48u);
    ctx->pc = 0x3ADB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB40u;
    // 0x3adb44: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3ADB40u, 0x3ADB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB48u;
label_3adb48:
    // 0x3adb48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3adb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb50: 0xc096988  jal         func_25A620
    ctx->pc = 0x3ADB50u;
    SET_GPR_U32(ctx, 31, 0x3ADB58u);
    ctx->pc = 0x3ADB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB50u;
    // 0x3adb54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3ADB50u, 0x3ADB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB58u;
label_3adb58:
    // 0x3adb58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3adb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adb5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3ADB5Cu;
    {
        const bool branch_taken_0x3adb5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adb5c) {
            ctx->pc = 0x3ADB78u;
            goto label_3adb78;
        }
    }
    ctx->pc = 0x3ADB64u;
    // 0x3adb64: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3adb64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3adb68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3adb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ADB6Cu;
    {
        const bool branch_taken_0x3adb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB6Cu;
        // 0x3adb70: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb6c) {
            ctx->pc = 0x3ADB80u;
            goto label_3adb80;
        }
    }
    ctx->pc = 0x3ADB74u;
    // 0x3adb74: 0x0  nop
    ctx->pc = 0x3adb74u;
    // NOP
label_3adb78:
    // 0x3adb78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3adb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3adb7c: 0x0  nop
    ctx->pc = 0x3adb7cu;
    // NOP
label_3adb80:
    // 0x3adb80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3adb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3adb84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3adb84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3adb88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3adb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3adb8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3adb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3adb90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3adb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3adb94: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB94u;
        // 0x3adb98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADB9Cu;
}
