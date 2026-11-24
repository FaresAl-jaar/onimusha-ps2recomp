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

// Function: sub_003BCA20
// Address: 0x3bca20 - 0x3bcb8c
void sub_003BCA20_0x3bca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCA20_0x3bca20");
#endif

    switch (ctx->pc) {
        case 0x3bca58u: goto label_3bca58;
        case 0x3bcb08u: goto label_3bcb08;
        case 0x3bcb18u: goto label_3bcb18;
        default: break;
    }

    ctx->pc = 0x3bca20u;

    // 0x3bca20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bca24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bca28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bca2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bca30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bca34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bca38: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bca38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bca3c: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3bca3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3bca40: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BCA40u;
    {
        const bool branch_taken_0x3bca40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA40u;
        // 0x3bca44: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca40) {
            ctx->pc = 0x3BCA68u;
            goto label_3bca68;
        }
    }
    ctx->pc = 0x3BCA48u;
    // 0x3bca48: 0x864600c2  lh          $a2, 0xC2($s2)
    ctx->pc = 0x3bca48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3bca4c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x3bca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x3bca50: 0xc0a2640  jal         func_289900
    ctx->pc = 0x3BCA50u;
    SET_GPR_U32(ctx, 31, 0x3BCA58u);
    ctx->pc = 0x3BCA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCA50u;
    // 0x3bca54: 0x24a50cc0  addiu       $a1, $a1, 0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289900u, 0x3BCA50u, 0x3BCA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCA58u;
label_3bca58:
    // 0x3bca58: 0x8e4207c0  lw          $v0, 0x7C0($s2)
    ctx->pc = 0x3bca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x3bca5c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3BCA5Cu;
    {
        const bool branch_taken_0x3bca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA5Cu;
        // 0x3bca60: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca5c) {
            ctx->pc = 0x3BCB70u;
            goto label_3bcb70;
        }
    }
    ctx->pc = 0x3BCA64u;
    // 0x3bca64: 0x0  nop
    ctx->pc = 0x3bca64u;
    // NOP
label_3bca68:
    // 0x3bca68: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bca6c: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x3bca6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bca70: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x3bca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bca74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3bca74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bca78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3bca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3bca7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3bca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3bca80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bca80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bca84: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bca84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bca88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3bca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3bca8c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BCA8Cu;
    {
        const bool branch_taken_0x3bca8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCA8Cu;
        // 0x3bca90: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bca8c) {
            ctx->pc = 0x3BCAC0u;
            goto label_3bcac0;
        }
    }
    ctx->pc = 0x3BCA94u;
    // 0x3bca94: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3bca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3bca98: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3bca98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bca9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BCA9Cu;
    {
        const bool branch_taken_0x3bca9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bca9c) {
            ctx->pc = 0x3BCAB8u;
            goto label_3bcab8;
        }
    }
    ctx->pc = 0x3BCAA4u;
    // 0x3bcaa4: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x3bcaa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x3bcaa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bcaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bcaac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BCAACu;
    {
        const bool branch_taken_0x3bcaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bcaac) {
            ctx->pc = 0x3BCAC0u;
            goto label_3bcac0;
        }
    }
    ctx->pc = 0x3BCAB4u;
    // 0x3bcab4: 0x0  nop
    ctx->pc = 0x3bcab4u;
    // NOP
label_3bcab8:
    // 0x3bcab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3bcab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcabc: 0x0  nop
    ctx->pc = 0x3bcabcu;
    // NOP
label_3bcac0:
    // 0x3bcac0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3BCAC0u;
    {
        const bool branch_taken_0x3bcac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcac0) {
            ctx->pc = 0x3BCAF0u;
            goto label_3bcaf0;
        }
    }
    ctx->pc = 0x3BCAC8u;
    // 0x3bcac8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3bcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3bcacc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3bcaccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bcad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BCAD0u;
    {
        const bool branch_taken_0x3bcad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcad0) {
            ctx->pc = 0x3BCAE8u;
            goto label_3bcae8;
        }
    }
    ctx->pc = 0x3BCAD8u;
    // 0x3bcad8: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x3bcad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3bcadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bcadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bcae0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BCAE0u;
    {
        const bool branch_taken_0x3bcae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bcae0) {
            ctx->pc = 0x3BCAF0u;
            goto label_3bcaf0;
        }
    }
    ctx->pc = 0x3BCAE8u;
label_3bcae8:
    // 0x3bcae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bcae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcaec: 0x0  nop
    ctx->pc = 0x3bcaecu;
    // NOP
label_3bcaf0:
    // 0x3bcaf0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3BCAF0u;
    {
        const bool branch_taken_0x3bcaf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcaf0) {
            ctx->pc = 0x3BCB50u;
            goto label_3bcb50;
        }
    }
    ctx->pc = 0x3BCAF8u;
    // 0x3bcaf8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BCAF8u;
    {
        const bool branch_taken_0x3bcaf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCAF8u;
        // 0x3bcafc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcaf8) {
            ctx->pc = 0x3BCB40u;
            goto label_3bcb40;
        }
    }
    ctx->pc = 0x3BCB00u;
    // 0x3bcb00: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3BCB00u;
    SET_GPR_U32(ctx, 31, 0x3BCB08u);
    ctx->pc = 0x3BCB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCB00u;
    // 0x3bcb04: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3BCB00u, 0x3BCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCB08u;
label_3bcb08:
    // 0x3bcb08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3bcb08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3bcb0c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3bcb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bcb10: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3BCB10u;
    SET_GPR_U32(ctx, 31, 0x3BCB18u);
    ctx->pc = 0x3BCB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCB10u;
    // 0x3bcb14: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3BCB10u, 0x3BCB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCB18u;
label_3bcb18:
    // 0x3bcb18: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3bcb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bcb1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3BCB1Cu;
    {
        const bool branch_taken_0x3bcb1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bcb1c) {
            ctx->pc = 0x3BCB30u;
            goto label_3bcb30;
        }
    }
    ctx->pc = 0x3BCB24u;
    // 0x3bcb24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3bcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bcb28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BCB28u;
    {
        const bool branch_taken_0x3bcb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB28u;
        // 0x3bcb2c: 0xae4207c0  sw          $v0, 0x7C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcb28) {
            ctx->pc = 0x3BCB38u;
            goto label_3bcb38;
        }
    }
    ctx->pc = 0x3BCB30u;
label_3bcb30:
    // 0x3bcb30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bcb34: 0xae4207c0  sw          $v0, 0x7C0($s2)
    ctx->pc = 0x3bcb34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 2));
label_3bcb38:
    // 0x3bcb38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3BCB38u;
    {
        const bool branch_taken_0x3bcb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB38u;
        // 0x3bcb3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcb38) {
            ctx->pc = 0x3BCB70u;
            goto label_3bcb70;
        }
    }
    ctx->pc = 0x3BCB40u;
label_3bcb40:
    // 0x3bcb40: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3bcb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bcb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bcb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bcb48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BCB48u;
    {
        const bool branch_taken_0x3bcb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB48u;
        // 0x3bcb4c: 0xae4307c0  sw          $v1, 0x7C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcb48) {
            ctx->pc = 0x3BCB70u;
            goto label_3bcb70;
        }
    }
    ctx->pc = 0x3BCB50u;
label_3bcb50:
    // 0x3bcb50: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BCB50u;
    {
        const bool branch_taken_0x3bcb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcb50) {
            ctx->pc = 0x3BCB68u;
            goto label_3bcb68;
        }
    }
    ctx->pc = 0x3BCB58u;
    // 0x3bcb58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3bcb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bcb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bcb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bcb60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BCB60u;
    {
        const bool branch_taken_0x3bcb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB60u;
        // 0x3bcb64: 0xae4307c0  sw          $v1, 0x7C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcb60) {
            ctx->pc = 0x3BCB70u;
            goto label_3bcb70;
        }
    }
    ctx->pc = 0x3BCB68u;
label_3bcb68:
    // 0x3bcb68: 0xae4007c0  sw          $zero, 0x7C0($s2)
    ctx->pc = 0x3bcb68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 0));
    // 0x3bcb6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bcb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcb70:
    // 0x3bcb70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bcb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bcb74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bcb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bcb78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bcb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bcb7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bcb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bcb80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bcb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bcb84: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCB84u;
        // 0x3bcb88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCB8Cu;
}
