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

// Function: sub_0015CB90
// Address: 0x15cb90 - 0x15cd48
void sub_0015CB90_0x15cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CB90_0x15cb90");
#endif

    switch (ctx->pc) {
        case 0x15cbc4u: goto label_15cbc4;
        default: break;
    }

    ctx->pc = 0x15cb90u;

    // 0x15cb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15cb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15cb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15cba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cba4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15cba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cba8: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x15cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x15cbac: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x15cbacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15cbb0: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x15cbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x15cbb4: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x15cbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15cbb8: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x15cbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x15cbbc: 0xc05972c  jal         func_165CB0
    ctx->pc = 0x15CBBCu;
    SET_GPR_U32(ctx, 31, 0x15CBC4u);
    ctx->pc = 0x15CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBBCu;
    // 0x15cbc0: 0xa0820012  sb          $v0, 0x12($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CB0u, 0x15CBBCu, 0x15CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CBC4u;
label_15cbc4:
    // 0x15cbc4: 0x86050024  lh          $a1, 0x24($s0)
    ctx->pc = 0x15cbc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x15cbc8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15cbcc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15cbd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15cbd4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15cbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15cbd8: 0xa625002c  sh          $a1, 0x2C($s1)
    ctx->pc = 0x15cbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x15cbdc: 0xa224004e  sb          $a0, 0x4E($s1)
    ctx->pc = 0x15cbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x15cbe0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x15cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15cbe4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x15cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15cbe8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15cbec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15cbf0: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x15cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x15cbf4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15cbf8: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x15cbf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15cbfc: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x15cbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x15cc00: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15cc04: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15cc08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15cc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15cc0c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15cc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15cc10: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15cc14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15cc18: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15cc1c: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15cc20: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x15cc20u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15cc24: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15cc28: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x15cc28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15cc2c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15cc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cc30: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15cc34: 0x94680050  lhu         $t0, 0x50($v1)
    ctx->pc = 0x15cc34u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15cc38: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CC38u;
    {
        const bool branch_taken_0x15cc38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cc38) {
            ctx->pc = 0x15CC48u;
            goto label_15cc48;
        }
    }
    ctx->pc = 0x15CC40u;
    // 0x15cc40: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15CC40u;
    {
        const bool branch_taken_0x15cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC40u;
        // 0x15cc44: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc40) {
            ctx->pc = 0x15CCF8u;
            goto label_15ccf8;
        }
    }
    ctx->pc = 0x15CC48u;
label_15cc48:
    // 0x15cc48: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15cc48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15cc4c: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x15cc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15cc50: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x15cc50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15cc54: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15CC54u;
    {
        const bool branch_taken_0x15cc54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cc54) {
            ctx->pc = 0x15CC78u;
            goto label_15cc78;
        }
    }
    ctx->pc = 0x15CC5Cu;
    // 0x15cc5c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15cc60: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15cc64: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CC64u;
    {
        const bool branch_taken_0x15cc64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cc64) {
            ctx->pc = 0x15CC78u;
            goto label_15cc78;
        }
    }
    ctx->pc = 0x15CC6Cu;
    // 0x15cc6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15CC6Cu;
    {
        const bool branch_taken_0x15cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC6Cu;
        // 0x15cc70: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc6c) {
            ctx->pc = 0x15CCF8u;
            goto label_15ccf8;
        }
    }
    ctx->pc = 0x15CC74u;
    // 0x15cc74: 0x0  nop
    ctx->pc = 0x15cc74u;
    // NOP
label_15cc78:
    // 0x15cc78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cc7c: 0xa22600a8  sb          $a2, 0xA8($s1)
    ctx->pc = 0x15cc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 6));
    // 0x15cc80: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15cc84: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x15cc84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x15cc88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CC88u;
    {
        const bool branch_taken_0x15cc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cc88) {
            ctx->pc = 0x15CCB0u;
            goto label_15ccb0;
        }
    }
    ctx->pc = 0x15CC90u;
    // 0x15cc90: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x15cc90u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cc94: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x15cc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x15cc98: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x15cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x15cc9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15cc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15cca0: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x15cca0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cca4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15CCA4u;
    {
        const bool branch_taken_0x15cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCA4u;
        // 0x15cca8: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cca4) {
            ctx->pc = 0x15CCF8u;
            goto label_15ccf8;
        }
    }
    ctx->pc = 0x15CCACu;
    // 0x15ccac: 0x0  nop
    ctx->pc = 0x15ccacu;
    // NOP
label_15ccb0:
    // 0x15ccb0: 0xa22600a9  sb          $a2, 0xA9($s1)
    ctx->pc = 0x15ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 6));
    // 0x15ccb4: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x15ccb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15ccb8: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x15ccbc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x15ccbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15ccc0: 0xa22500aa  sb          $a1, 0xAA($s1)
    ctx->pc = 0x15ccc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 5));
    // 0x15ccc4: 0xa22700ab  sb          $a3, 0xAB($s1)
    ctx->pc = 0x15ccc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 7));
    // 0x15ccc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CCC8u;
    {
        const bool branch_taken_0x15ccc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCC8u;
        // 0x15cccc: 0xa22400ac  sb          $a0, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccc8) {
            ctx->pc = 0x15CCD8u;
            goto label_15ccd8;
        }
    }
    ctx->pc = 0x15CCD0u;
    // 0x15ccd0: 0xa22600ac  sb          $a2, 0xAC($s1)
    ctx->pc = 0x15ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 6));
    // 0x15ccd4: 0x0  nop
    ctx->pc = 0x15ccd4u;
    // NOP
label_15ccd8:
    // 0x15ccd8: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15ccd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15ccdc: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x15ccdcu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x15cce0: 0x0  nop
    ctx->pc = 0x15cce0u;
    // NOP
    // 0x15cce4: 0x0  nop
    ctx->pc = 0x15cce4u;
    // NOP
    // 0x15cce8: 0x2010  mfhi        $a0
    ctx->pc = 0x15cce8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15ccec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15ccecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15ccf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ccf4: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15ccf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_15ccf8:
    // 0x15ccf8: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15ccfc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15cd00: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x15cd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x15cd04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd08: 0xa6230048  sh          $v1, 0x48($s1)
    ctx->pc = 0x15cd08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cd0c: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x15cd0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15cd10: 0xa623004a  sh          $v1, 0x4A($s1)
    ctx->pc = 0x15cd10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cd14: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x15cd14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x15cd18: 0xa623004c  sh          $v1, 0x4C($s1)
    ctx->pc = 0x15cd18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cd1c: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x15cd1cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15cd20: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x15cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15cd24: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x15cd24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x15cd28: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x15cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x15cd2c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x15cd2cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15cd30: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x15cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x15cd34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15cd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cd3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cd40: 0x3e00008  jr          $ra
    ctx->pc = 0x15CD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD40u;
        // 0x15cd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CD48u;
}
