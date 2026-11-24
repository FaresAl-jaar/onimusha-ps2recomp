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

// Function: sub_00360AC0
// Address: 0x360ac0 - 0x360bbc
void sub_00360AC0_0x360ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360AC0_0x360ac0");
#endif

    switch (ctx->pc) {
        case 0x360af0u: goto label_360af0;
        case 0x360b14u: goto label_360b14;
        case 0x360b68u: goto label_360b68;
        case 0x360b9cu: goto label_360b9c;
        default: break;
    }

    ctx->pc = 0x360ac0u;

    // 0x360ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x360ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x360ac4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x360ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x360ac8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x360ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x360acc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x360ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360ad4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x360ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360adc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x360adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ae0: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x360AE0u;
    {
        const bool branch_taken_0x360ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x360AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360AE0u;
        // 0x360ae4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360ae0) {
            ctx->pc = 0x360BA0u;
            goto label_360ba0;
        }
    }
    ctx->pc = 0x360AE8u;
    // 0x360ae8: 0xc0d8c94  jal         func_363250
    ctx->pc = 0x360AE8u;
    SET_GPR_U32(ctx, 31, 0x360AF0u);
    ctx->pc = 0x360AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360AE8u;
    // 0x360aec: 0x86530004  lh          $s3, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363250u, 0x360AE8u, 0x360AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360AF0u;
label_360af0:
    // 0x360af0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x360af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x360af4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x360af4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x360af8: 0x16630029  bne         $s3, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x360AF8u;
    {
        const bool branch_taken_0x360af8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x360af8) {
            ctx->pc = 0x360BA0u;
            goto label_360ba0;
        }
    }
    ctx->pc = 0x360B00u;
    // 0x360b00: 0x82421fb7  lb          $v0, 0x1FB7($s2)
    ctx->pc = 0x360b00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8119)));
    // 0x360b04: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x360B04u;
    {
        const bool branch_taken_0x360b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360B04u;
        // 0x360b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360b04) {
            ctx->pc = 0x360B70u;
            goto label_360b70;
        }
    }
    ctx->pc = 0x360B0Cu;
    // 0x360b0c: 0xc0a6a38  jal         func_29A8E0
    ctx->pc = 0x360B0Cu;
    SET_GPR_U32(ctx, 31, 0x360B14u);
    ctx->pc = 0x360B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B0Cu;
    // 0x360b10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A8E0u, 0x360B0Cu, 0x360B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B14u;
label_360b14:
    // 0x360b14: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x360b14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x360b18: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x360b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x360b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360b20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b24: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x360b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360b28: 0x86421fb4  lh          $v0, 0x1FB4($s2)
    ctx->pc = 0x360b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8116)));
    // 0x360b2c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x360b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x360b30: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x360b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x360b34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x360b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x360b38: 0x0  nop
    ctx->pc = 0x360b38u;
    // NOP
    // 0x360b3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x360b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x360b40: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x360b40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x360b44: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x360b44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x360b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360b4c: 0x0  nop
    ctx->pc = 0x360b4cu;
    // NOP
    // 0x360b50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x360b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x360b58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x360b58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x360b5c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x360b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x360b60: 0xc0d819c  jal         func_360670
    ctx->pc = 0x360B60u;
    SET_GPR_U32(ctx, 31, 0x360B68u);
    ctx->pc = 0x360B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B60u;
    // 0x360b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360670u, 0x360B60u, 0x360B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B68u;
label_360b68:
    // 0x360b68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x360B68u;
    {
        const bool branch_taken_0x360b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360b68) {
            ctx->pc = 0x360BA0u;
            goto label_360ba0;
        }
    }
    ctx->pc = 0x360B70u;
label_360b70:
    // 0x360b70: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x360b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x360b74: 0x86421fb4  lh          $v0, 0x1FB4($s2)
    ctx->pc = 0x360b74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8116)));
    // 0x360b78: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x360b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x360b7c: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x360b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x360b80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360b88: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x360b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x360b8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x360b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360b90: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x360b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x360b94: 0xc0d819c  jal         func_360670
    ctx->pc = 0x360B94u;
    SET_GPR_U32(ctx, 31, 0x360B9Cu);
    ctx->pc = 0x360B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360B94u;
    // 0x360b98: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360670u, 0x360B94u, 0x360B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360B9Cu;
label_360b9c:
    // 0x360b9c: 0x0  nop
    ctx->pc = 0x360b9cu;
    // NOP
label_360ba0:
    // 0x360ba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x360ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360ba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x360BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360BB4u;
        // 0x360bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360BBCu;
}
