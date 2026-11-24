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

// Function: sub_003479F0
// Address: 0x3479f0 - 0x347ac0
void sub_003479F0_0x3479f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003479F0_0x3479f0");
#endif

    switch (ctx->pc) {
        case 0x347a2cu: goto label_347a2c;
        case 0x347a40u: goto label_347a40;
        case 0x347a9cu: goto label_347a9c;
        default: break;
    }

    ctx->pc = 0x3479f0u;

    // 0x3479f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3479f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3479f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3479f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3479f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3479f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3479fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3479fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x347a00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x347a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x347a08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x347a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347a10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x347a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347a18: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x347a18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x347a1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x347a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a24: 0xc099b04  jal         func_266C10
    ctx->pc = 0x347A24u;
    SET_GPR_U32(ctx, 31, 0x347A2Cu);
    ctx->pc = 0x347A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A24u;
    // 0x347a28: 0x26317920  addiu       $s1, $s1, 0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x347A24u, 0x347A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A2Cu;
label_347a2c:
    // 0x347a2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a30: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x347A30u;
    {
        const bool branch_taken_0x347a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A30u;
        // 0x347a34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a30) {
            ctx->pc = 0x347AA0u;
            goto label_347aa0;
        }
    }
    ctx->pc = 0x347A38u;
    // 0x347a38: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x347A38u;
    SET_GPR_U32(ctx, 31, 0x347A40u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x347A38u, 0x347A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A40u;
label_347a40:
    // 0x347a40: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x347a40u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a44: 0x3c064500  lui         $a2, 0x4500
    ctx->pc = 0x347a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17664 << 16));
    // 0x347a48: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x347a48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x347a4c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x347a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x347a50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x347a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x347a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x347a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a5c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x347a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a60: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x347a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a68: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x347a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x347a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a70: 0x0  nop
    ctx->pc = 0x347a70u;
    // NOP
    // 0x347a74: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x347a74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x347a78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x347a7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x347a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x347a80: 0x0  nop
    ctx->pc = 0x347a80u;
    // NOP
    // 0x347a84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x347a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x347a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x347a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x347a8c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x347a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x347a90: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x347a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x347a94: 0xc0ab47c  jal         func_2AD1F0
    ctx->pc = 0x347A94u;
    SET_GPR_U32(ctx, 31, 0x347A9Cu);
    ctx->pc = 0x347A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A94u;
    // 0x347a98: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD1F0u, 0x347A94u, 0x347A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A9Cu;
label_347a9c:
    // 0x347a9c: 0x0  nop
    ctx->pc = 0x347a9cu;
    // NOP
label_347aa0:
    // 0x347aa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x347aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x347aa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x347aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347aa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x347AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AB8u;
        // 0x347abc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347AC0u;
}
