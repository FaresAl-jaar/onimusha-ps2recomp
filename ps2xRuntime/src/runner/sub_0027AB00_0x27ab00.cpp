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

// Function: sub_0027AB00
// Address: 0x27ab00 - 0x27ae30
void sub_0027AB00_0x27ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AB00_0x27ab00");
#endif

    switch (ctx->pc) {
        case 0x27abf8u: goto label_27abf8;
        case 0x27ac48u: goto label_27ac48;
        case 0x27ad50u: goto label_27ad50;
        case 0x27adc0u: goto label_27adc0;
        case 0x27ae0cu: goto label_27ae0c;
        default: break;
    }

    ctx->pc = 0x27ab00u;

    // 0x27ab00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27ab04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ab08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27ab0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27ab10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27ab10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ab18: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27ab18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27ab1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27ab1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27ab20: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x27ab20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27ab24: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AB24u;
    {
        const bool branch_taken_0x27ab24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB24u;
        // 0x27ab28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab24) {
            ctx->pc = 0x27AB38u;
            goto label_27ab38;
        }
    }
    ctx->pc = 0x27AB2Cu;
    // 0x27ab2c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x27AB2Cu;
    {
        const bool branch_taken_0x27ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB2Cu;
        // 0x27ab30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab2c) {
            ctx->pc = 0x27AE10u;
            goto label_27ae10;
        }
    }
    ctx->pc = 0x27AB34u;
    // 0x27ab34: 0x0  nop
    ctx->pc = 0x27ab34u;
    // NOP
label_27ab38:
    // 0x27ab38: 0xc64107b8  lwc1        $f1, 0x7B8($s2)
    ctx->pc = 0x27ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ab3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27ab3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab40: 0x0  nop
    ctx->pc = 0x27ab40u;
    // NOP
    // 0x27ab44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27ab44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ab48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27AB48u;
    {
        const bool branch_taken_0x27ab48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB48u;
        // 0x27ab4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab48) {
            ctx->pc = 0x27AB58u;
            goto label_27ab58;
        }
    }
    ctx->pc = 0x27AB50u;
    // 0x27ab50: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x27AB50u;
    {
        const bool branch_taken_0x27ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ab50) {
            ctx->pc = 0x27AE10u;
            goto label_27ae10;
        }
    }
    ctx->pc = 0x27AB58u;
label_27ab58:
    // 0x27ab58: 0x962229d6  lhu         $v0, 0x29D6($s1)
    ctx->pc = 0x27ab58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10710)));
    // 0x27ab5c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AB5Cu;
    {
        const bool branch_taken_0x27ab5c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB5Cu;
        // 0x27ab60: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab5c) {
            ctx->pc = 0x27AB70u;
            goto label_27ab70;
        }
    }
    ctx->pc = 0x27AB64u;
    // 0x27ab64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ab64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27AB68u;
    {
        const bool branch_taken_0x27ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB68u;
        // 0x27ab6c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab68) {
            ctx->pc = 0x27AB88u;
            goto label_27ab88;
        }
    }
    ctx->pc = 0x27AB70u;
label_27ab70:
    // 0x27ab70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27ab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27ab74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27ab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27ab78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ab78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab7c: 0x0  nop
    ctx->pc = 0x27ab7cu;
    // NOP
    // 0x27ab80: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x27ab80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x27ab84: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x27ab84u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_27ab88:
    // 0x27ab88: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AB88u;
    {
        const bool branch_taken_0x27ab88 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB88u;
        // 0x27ab8c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab88) {
            ctx->pc = 0x27AB9Cu;
            goto label_27ab9c;
        }
    }
    ctx->pc = 0x27AB90u;
    // 0x27ab90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27ab90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27AB94u;
    {
        const bool branch_taken_0x27ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB94u;
        // 0x27ab98: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab94) {
            ctx->pc = 0x27ABB4u;
            goto label_27abb4;
        }
    }
    ctx->pc = 0x27AB9Cu;
label_27ab9c:
    // 0x27ab9c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27ab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27aba0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27aba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27aba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aba8: 0x0  nop
    ctx->pc = 0x27aba8u;
    // NOP
    // 0x27abac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27abacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27abb0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27abb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27abb4:
    // 0x27abb4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27abb4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27abb8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x27abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x27abbc: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x27abbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27abc0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x27abc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27abc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27abc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27abc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27abcc: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x27ABCCu;
    {
        const bool branch_taken_0x27abcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABCCu;
        // 0x27abd0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abcc) {
            ctx->pc = 0x27ACF0u;
            goto label_27acf0;
        }
    }
    ctx->pc = 0x27ABD4u;
    // 0x27abd4: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x27abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x27abd8: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x27abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x27abdc: 0x924429d0  lbu         $a0, 0x29D0($s2)
    ctx->pc = 0x27abdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10704)));
    // 0x27abe0: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x27abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x27abe4: 0x9063005f  lbu         $v1, 0x5F($v1)
    ctx->pc = 0x27abe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 95)));
    // 0x27abe8: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x27abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x27abec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27abf0: 0xc0bd100  jal         func_2F4400
    ctx->pc = 0x27ABF0u;
    SET_GPR_U32(ctx, 31, 0x27ABF8u);
    ctx->pc = 0x27ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ABF0u;
    // 0x27abf4: 0x24500110  addiu       $s0, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4400u, 0x27ABF0u, 0x27ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ABF8u;
label_27abf8:
    // 0x27abf8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27abf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27abfc: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x27abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x27ac00: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x27ac00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27ac04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27ac08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ac08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ac0c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AC0Cu;
    {
        const bool branch_taken_0x27ac0c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC0Cu;
        // 0x27ac10: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac0c) {
            ctx->pc = 0x27AC20u;
            goto label_27ac20;
        }
    }
    ctx->pc = 0x27AC14u;
    // 0x27ac14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27ac14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ac18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27AC18u;
    {
        const bool branch_taken_0x27ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC18u;
        // 0x27ac1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac18) {
            ctx->pc = 0x27AC3Cu;
            goto label_27ac3c;
        }
    }
    ctx->pc = 0x27AC20u;
label_27ac20:
    // 0x27ac20: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x27ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x27ac24: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27ac28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27ac28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27ac2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ac2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ac30: 0x0  nop
    ctx->pc = 0x27ac30u;
    // NOP
    // 0x27ac34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ac34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27ac38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27ac38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27ac3c:
    // 0x27ac3c: 0x924429d0  lbu         $a0, 0x29D0($s2)
    ctx->pc = 0x27ac3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10704)));
    // 0x27ac40: 0xc0bd100  jal         func_2F4400
    ctx->pc = 0x27AC40u;
    SET_GPR_U32(ctx, 31, 0x27AC48u);
    ctx->pc = 0x27AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC40u;
    // 0x27ac44: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4400u, 0x27AC40u, 0x27AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC48u;
label_27ac48:
    // 0x27ac48: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x27ac48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27ac4c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x27ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac50: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27ac54: 0x24422880  addiu       $v0, $v0, 0x2880
    ctx->pc = 0x27ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10368));
    // 0x27ac58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27ac5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27ac60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ac64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ac68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27ac68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ac6c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AC6Cu;
    {
        const bool branch_taken_0x27ac6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC6Cu;
        // 0x27ac70: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac6c) {
            ctx->pc = 0x27AC88u;
            goto label_27ac88;
        }
    }
    ctx->pc = 0x27AC74u;
    // 0x27ac74: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x27ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27ac78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ac7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27ac80: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x27ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac84: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x27ac84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_27ac88:
    // 0x27ac88: 0x8602008c  lh          $v0, 0x8C($s0)
    ctx->pc = 0x27ac88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x27ac8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ac8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ac90: 0x0  nop
    ctx->pc = 0x27ac90u;
    // NOP
    // 0x27ac94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ac94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27ac98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AC98u;
    {
        const bool branch_taken_0x27ac98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC98u;
        // 0x27ac9c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac98) {
            ctx->pc = 0x27ACC0u;
            goto label_27acc0;
        }
    }
    ctx->pc = 0x27ACA0u;
    // 0x27aca0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x27aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27aca4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27aca8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27acac: 0x8442008c  lh          $v0, 0x8C($v0)
    ctx->pc = 0x27acacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x27acb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27acb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27acb4: 0x0  nop
    ctx->pc = 0x27acb4u;
    // NOP
    // 0x27acb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27acb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27acbc: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x27acbcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_27acc0:
    // 0x27acc0: 0x824207bd  lb          $v0, 0x7BD($s2)
    ctx->pc = 0x27acc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1981)));
    // 0x27acc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27acc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27acc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27acc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27accc: 0x0  nop
    ctx->pc = 0x27acccu;
    // NOP
    // 0x27acd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27acd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27acd4: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x27acd4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x27acd8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x27acd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27acdc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x27ACDCu;
    {
        const bool branch_taken_0x27acdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27acdc) {
            ctx->pc = 0x27AD40u;
            goto label_27ad40;
        }
    }
    ctx->pc = 0x27ACE4u;
    // 0x27ace4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27ACE4u;
    {
        const bool branch_taken_0x27ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACE4u;
        // 0x27ace8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ace4) {
            ctx->pc = 0x27AD40u;
            goto label_27ad40;
        }
    }
    ctx->pc = 0x27ACECu;
    // 0x27acec: 0x0  nop
    ctx->pc = 0x27acecu;
    // NOP
label_27acf0:
    // 0x27acf0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x27acf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27acf4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27acf8: 0x24422876  addiu       $v0, $v0, 0x2876
    ctx->pc = 0x27acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10358));
    // 0x27acfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27ad00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27ad04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ad08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ad0c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x27ad0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ad10: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AD10u;
    {
        const bool branch_taken_0x27ad10 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD10u;
        // 0x27ad14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad10) {
            ctx->pc = 0x27AD24u;
            goto label_27ad24;
        }
    }
    ctx->pc = 0x27AD18u;
    // 0x27ad18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ad18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27AD1Cu;
    {
        const bool branch_taken_0x27ad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD1Cu;
        // 0x27ad20: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad1c) {
            ctx->pc = 0x27AD3Cu;
            goto label_27ad3c;
        }
    }
    ctx->pc = 0x27AD24u;
label_27ad24:
    // 0x27ad24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27ad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27ad28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27ad28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27ad2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ad2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ad30: 0x0  nop
    ctx->pc = 0x27ad30u;
    // NOP
    // 0x27ad34: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x27ad34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x27ad38: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x27ad38u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_27ad3c:
    // 0x27ad3c: 0x0  nop
    ctx->pc = 0x27ad3cu;
    // NOP
label_27ad40:
    // 0x27ad40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27ad44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27ad44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27ad48: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x27AD48u;
    SET_GPR_U32(ctx, 31, 0x27AD50u);
    ctx->pc = 0x27AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD48u;
    // 0x27ad4c: 0x4615a301  sub.s       $f12, $f20, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x27AD48u, 0x27AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD50u;
label_27ad50:
    // 0x27ad50: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x27ad50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27ad54: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x27ad58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27ad58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27ad5c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x27ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x27ad60: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x27ad60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27ad64: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x27ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x27ad68: 0x24a52880  addiu       $a1, $a1, 0x2880
    ctx->pc = 0x27ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    // 0x27ad6c: 0x24844390  addiu       $a0, $a0, 0x4390
    ctx->pc = 0x27ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    // 0x27ad70: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x27ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27ad74: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x27ad74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27ad78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ad7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ad80: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x27ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27ad84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ad88: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27ad8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x27ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27ad90: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x27ad90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ad94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27ad94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ad98: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x27ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x27ad9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27ada0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ada4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ada8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27adac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27adb0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x27adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27adb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27adb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27adb8: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x27ADB8u;
    SET_GPR_U32(ctx, 31, 0x27ADC0u);
    ctx->pc = 0x27ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADB8u;
    // 0x27adbc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x27ADB8u, 0x27ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADC0u;
label_27adc0:
    // 0x27adc0: 0xc64207b8  lwc1        $f2, 0x7B8($s2)
    ctx->pc = 0x27adc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27adc4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27adc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27adc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27adcc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x27adccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x27add0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27add0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27add4: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x27add4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x27add8: 0xc62307b4  lwc1        $f3, 0x7B4($s1)
    ctx->pc = 0x27add8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27addc: 0x246360d0  addiu       $v1, $v1, 0x60D0
    ctx->pc = 0x27addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24784));
    // 0x27ade0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27ade0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27ade4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ade8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27adec: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27adf0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27adf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27adf4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27adf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27adf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27adf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27adfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27adfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27ae00: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x27ae00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x27ae04: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x27AE04u;
    SET_GPR_U32(ctx, 31, 0x27AE0Cu);
    ctx->pc = 0x27AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE04u;
    // 0x27ae08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x27AE04u, 0x27AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE0Cu;
label_27ae0c:
    // 0x27ae0c: 0x0  nop
    ctx->pc = 0x27ae0cu;
    // NOP
label_27ae10:
    // 0x27ae10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27ae10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ae14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ae14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ae18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ae1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ae1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ae20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ae24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ae24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ae28: 0x3e00008  jr          $ra
    ctx->pc = 0x27AE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE28u;
        // 0x27ae2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AE30u;
}
