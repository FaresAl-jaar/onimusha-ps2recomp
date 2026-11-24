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

// Function: sub_0027F210
// Address: 0x27f210 - 0x27f3c4
void sub_0027F210_0x27f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F210_0x27f210");
#endif

    switch (ctx->pc) {
        case 0x27f2a0u: goto label_27f2a0;
        case 0x27f2b0u: goto label_27f2b0;
        case 0x27f2c0u: goto label_27f2c0;
        case 0x27f300u: goto label_27f300;
        default: break;
    }

    ctx->pc = 0x27f210u;

    // 0x27f210: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x27f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x27f214: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x27f214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x27f218: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27f218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27f21c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f220: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27f220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x27f224: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x27f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27f228: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x27f22c: 0x24830194  addiu       $v1, $a0, 0x194
    ctx->pc = 0x27f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x27f230: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27f230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27f234: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x27f234u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f238: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27f23c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x27f23cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f240: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27f244: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x27f244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f248: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27f24c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27f24cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f250: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27f250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27f254: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27f258: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f25c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27f25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f260: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27f260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f264: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x27f264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x27f268: 0x8c840194  lw          $a0, 0x194($a0)
    ctx->pc = 0x27f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x27f26c: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x27F26Cu;
    {
        const bool branch_taken_0x27f26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F26Cu;
        // 0x27f270: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f26c) {
            ctx->pc = 0x27F390u;
            goto label_27f390;
        }
    }
    ctx->pc = 0x27F274u;
    // 0x27f274: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x27f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x27f278: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x27f278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x27f27c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27f280: 0x90960005  lbu         $s6, 0x5($a0)
    ctx->pc = 0x27f280u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x27f284: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x27f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x27f288: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27f288u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27f28c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27f28cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27f290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f294: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x27f294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27f298: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x27F298u;
    SET_GPR_U32(ctx, 31, 0x27F2A0u);
    ctx->pc = 0x27F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F298u;
    // 0x27f29c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x27F298u, 0x27F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2A0u;
label_27f2a0:
    // 0x27f2a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27f2a8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x27F2A8u;
    SET_GPR_U32(ctx, 31, 0x27F2B0u);
    ctx->pc = 0x27F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2A8u;
    // 0x27f2ac: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x27F2A8u, 0x27F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2B0u;
label_27f2b0:
    // 0x27f2b0: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x27f2b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27f2b4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x27F2B4u;
    {
        const bool branch_taken_0x27f2b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2B4u;
        // 0x27f2b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2b4) {
            ctx->pc = 0x27F390u;
            goto label_27f390;
        }
    }
    ctx->pc = 0x27F2BCu;
    // 0x27f2bc: 0x0  nop
    ctx->pc = 0x27f2bcu;
    // NOP
label_27f2c0:
    // 0x27f2c0: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x27f2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x27f2c4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x27F2C4u;
    {
        const bool branch_taken_0x27f2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f2c4) {
            ctx->pc = 0x27F378u;
            goto label_27f378;
        }
    }
    ctx->pc = 0x27F2CCu;
    // 0x27f2cc: 0x97888924  lhu         $t0, -0x76DC($gp)
    ctx->pc = 0x27f2ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27f2d0: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27f2d4: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x27f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x27f2d8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x27f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x27f2dc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27f2e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27f2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2e4: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x27f2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27f2e8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x27f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27f2ec: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x27f2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x27f2f0: 0xa7828924  sh          $v0, -0x76DC($gp)
    ctx->pc = 0x27f2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936868), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f2f4: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x27f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x27f2f8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x27F2F8u;
    SET_GPR_U32(ctx, 31, 0x27F300u);
    ctx->pc = 0x27F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2F8u;
    // 0x27f2fc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x27F2F8u, 0x27F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F300u;
label_27f300:
    // 0x27f300: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x27f300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27f304: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F304u;
    {
        const bool branch_taken_0x27f304 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F304u;
        // 0x27f308: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f304) {
            ctx->pc = 0x27F318u;
            goto label_27f318;
        }
    }
    ctx->pc = 0x27F30Cu;
    // 0x27f30c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27f30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F310u;
    {
        const bool branch_taken_0x27f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F310u;
        // 0x27f314: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f310) {
            ctx->pc = 0x27F330u;
            goto label_27f330;
        }
    }
    ctx->pc = 0x27F318u;
label_27f318:
    // 0x27f318: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27f318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27f31c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27f31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27f320: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27f320u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f324: 0x0  nop
    ctx->pc = 0x27f324u;
    // NOP
    // 0x27f328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f32c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27f32cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27f330:
    // 0x27f330: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27f330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27f334: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x27f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x27f338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f33c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27f33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27f340: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x27f340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x27f344: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x27f344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x27f348: 0xa23e0005  sb          $fp, 0x5($s1)
    ctx->pc = 0x27f348u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 30));
    // 0x27f34c: 0xa2350004  sb          $s5, 0x4($s1)
    ctx->pc = 0x27f34cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 21));
    // 0x27f350: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x27f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27f354: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x27f354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x27f358: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x27f358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f35c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f360: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x27f360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x27f364: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x27f364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x27f368: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x27f368u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27f36c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x27f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x27f370: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x27f370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f374: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x27f374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_27f378:
    // 0x27f378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27f378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27f37c: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x27f37cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27f380: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x27f380u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x27f384: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x27F384u;
    {
        const bool branch_taken_0x27f384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F384u;
        // 0x27f388: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f384) {
            ctx->pc = 0x27F2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f2c0;
        }
    }
    ctx->pc = 0x27F38Cu;
    // 0x27f38c: 0x0  nop
    ctx->pc = 0x27f38cu;
    // NOP
label_27f390:
    // 0x27f390: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27f394: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27f394u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f398: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f39c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27f39cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f3a0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27f3a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f3a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27f3a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f3a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27f3a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f3ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27f3acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f3b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27f3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f3b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27f3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f3b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3BCu;
        // 0x27f3c0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F3C4u;
}
