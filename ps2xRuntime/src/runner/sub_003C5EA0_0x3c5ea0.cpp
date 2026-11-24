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

// Function: sub_003C5EA0
// Address: 0x3c5ea0 - 0x3c6048
void sub_003C5EA0_0x3c5ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5EA0_0x3c5ea0");
#endif

    switch (ctx->pc) {
        case 0x3c5ec8u: goto label_3c5ec8;
        case 0x3c5edcu: goto label_3c5edc;
        case 0x3c5f38u: goto label_3c5f38;
        case 0x3c5fdcu: goto label_3c5fdc;
        default: break;
    }

    ctx->pc = 0x3c5ea0u;

    // 0x3c5ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c5ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c5ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c5ea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c5ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c5eac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c5eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c5eb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5eb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c5eb8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c5ebc: 0x8e4505b0  lw          $a1, 0x5B0($s2)
    ctx->pc = 0x3c5ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x3c5ec0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C5EC0u;
    SET_GPR_U32(ctx, 31, 0x3C5EC8u);
    ctx->pc = 0x3C5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5EC0u;
    // 0x3c5ec4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C5EC0u, 0x3C5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5EC8u;
label_3c5ec8:
    // 0x3c5ec8: 0x8e450500  lw          $a1, 0x500($s2)
    ctx->pc = 0x3c5ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x3c5ecc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c5ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c5ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5ed4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C5ED4u;
    SET_GPR_U32(ctx, 31, 0x3C5EDCu);
    ctx->pc = 0x3C5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5ED4u;
    // 0x3c5ed8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C5ED4u, 0x3C5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5EDCu;
label_3c5edc:
    // 0x3c5edc: 0x92440509  lbu         $a0, 0x509($s2)
    ctx->pc = 0x3c5edcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1289)));
    // 0x3c5ee0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c5ee4: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x3C5EE4u;
    {
        const bool branch_taken_0x3c5ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5EE4u;
        // 0x3c5ee8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ee4) {
            ctx->pc = 0x3C6030u;
            goto label_3c6030;
        }
    }
    ctx->pc = 0x3C5EECu;
    // 0x3c5eec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c5eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5ef0: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3C5EF0u;
    {
        const bool branch_taken_0x3c5ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c5ef0) {
            ctx->pc = 0x3C5F88u;
            goto label_3c5f88;
        }
    }
    ctx->pc = 0x3C5EF8u;
    // 0x3c5ef8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5EF8u;
    {
        const bool branch_taken_0x3c5ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5ef8) {
            ctx->pc = 0x3C5F08u;
            goto label_3c5f08;
        }
    }
    ctx->pc = 0x3C5F00u;
    // 0x3c5f00: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3C5F00u;
    {
        const bool branch_taken_0x3c5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5f00) {
            ctx->pc = 0x3C6030u;
            goto label_3c6030;
        }
    }
    ctx->pc = 0x3C5F08u;
label_3c5f08:
    // 0x3c5f08: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3C5F08u;
    {
        const bool branch_taken_0x3c5f08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5f08) {
            ctx->pc = 0x3C5F78u;
            goto label_3c5f78;
        }
    }
    ctx->pc = 0x3C5F10u;
    // 0x3c5f10: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3c5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3c5f14: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x3c5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3c5f18: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x3c5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3c5f1c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c5f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c5f20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3c5f20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3c5f24: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5f28: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3c5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3c5f2c: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x3c5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3c5f30: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3C5F30u;
    SET_GPR_U32(ctx, 31, 0x3C5F38u);
    ctx->pc = 0x3C5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5F30u;
    // 0x3c5f34: 0x8c650088  lw          $a1, 0x88($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3C5F30u, 0x3C5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5F38u;
label_3c5f38:
    // 0x3c5f38: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x3c5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x3c5f3c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3c5f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3c5f40: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3c5f40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c5f44: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c5f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c5f48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c5f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5f4c: 0x0  nop
    ctx->pc = 0x3c5f4cu;
    // NOP
    // 0x3c5f50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c5f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c5f54: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c5f54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c5f58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5f58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c5f5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c5f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c5f60: 0x0  nop
    ctx->pc = 0x3c5f60u;
    // NOP
    // 0x3c5f64: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3c5f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c5f68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c5f68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c5f6c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c5f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c5f70: 0xa64300c2  sh          $v1, 0xC2($s2)
    ctx->pc = 0x3c5f70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c5f74: 0x0  nop
    ctx->pc = 0x3c5f74u;
    // NOP
label_3c5f78:
    // 0x3c5f78: 0xa64000c0  sh          $zero, 0xC0($s2)
    ctx->pc = 0x3c5f78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c5f7c: 0x92430509  lbu         $v1, 0x509($s2)
    ctx->pc = 0x3c5f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1289)));
    // 0x3c5f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c5f84: 0xa2430509  sb          $v1, 0x509($s2)
    ctx->pc = 0x3c5f84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1289), (uint8_t)GPR_U32(ctx, 3));
label_3c5f88:
    // 0x3c5f88: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3c5f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3c5f8c: 0xc6420570  lwc1        $f2, 0x570($s2)
    ctx->pc = 0x3c5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c5f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5f94: 0xc640056c  lwc1        $f0, 0x56C($s2)
    ctx->pc = 0x3c5f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5f98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c5f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c5f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c5f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5fa0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x3C5FA0u;
    {
        const bool branch_taken_0x3c5fa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5fa0) {
            ctx->pc = 0x3C6020u;
            goto label_3c6020;
        }
    }
    ctx->pc = 0x3C5FA8u;
    // 0x3c5fa8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C5FA8u;
    {
        const bool branch_taken_0x3c5fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5fa8) {
            ctx->pc = 0x3C6030u;
            goto label_3c6030;
        }
    }
    ctx->pc = 0x3C5FB0u;
    // 0x3c5fb0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3c5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3c5fb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c5fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5fb8: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x3c5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3c5fbc: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x3c5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3c5fc0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3c5fc0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c5fc4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3c5fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3c5fc8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5fcc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3c5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3c5fd0: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x3c5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3c5fd4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3C5FD4u;
    SET_GPR_U32(ctx, 31, 0x3C5FDCu);
    ctx->pc = 0x3C5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5FD4u;
    // 0x3c5fd8: 0x8c650088  lw          $a1, 0x88($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3C5FD4u, 0x3C5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5FDCu;
label_3c5fdc:
    // 0x3c5fdc: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x3c5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x3c5fe0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3c5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3c5fe4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3c5fe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c5fe8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c5fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c5fec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c5fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c5ff0: 0x0  nop
    ctx->pc = 0x3c5ff0u;
    // NOP
    // 0x3c5ff4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c5ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c5ff8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c5ff8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c5ffc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c5ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c6000: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c6000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3c6004: 0x0  nop
    ctx->pc = 0x3c6004u;
    // NOP
    // 0x3c6008: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3c6008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c600c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c600cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c6010: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3c6010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3c6014: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6014u;
    {
        const bool branch_taken_0x3c6014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6014u;
        // 0x3c6018: 0xa64300c2  sh          $v1, 0xC2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6014) {
            ctx->pc = 0x3C6030u;
            goto label_3c6030;
        }
    }
    ctx->pc = 0x3C601Cu;
    // 0x3c601c: 0x0  nop
    ctx->pc = 0x3c601cu;
    // NOP
label_3c6020:
    // 0x3c6020: 0x92430509  lbu         $v1, 0x509($s2)
    ctx->pc = 0x3c6020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1289)));
    // 0x3c6024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c6024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c6028: 0xa2430509  sb          $v1, 0x509($s2)
    ctx->pc = 0x3c6028u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1289), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c602c: 0x0  nop
    ctx->pc = 0x3c602cu;
    // NOP
label_3c6030:
    // 0x3c6030: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c6030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c6034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c6034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c603c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c603cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6040: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6040u;
        // 0x3c6044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6048u;
}
