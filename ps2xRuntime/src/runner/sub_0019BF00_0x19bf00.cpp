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

// Function: sub_0019BF00
// Address: 0x19bf00 - 0x19c330
void sub_0019BF00_0x19bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BF00_0x19bf00");
#endif

    switch (ctx->pc) {
        case 0x19bf80u: goto label_19bf80;
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1d8u: goto label_19c1d8;
        case 0x19c310u: goto label_19c310;
        default: break;
    }

    ctx->pc = 0x19bf00u;

    // 0x19bf00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19bf04: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x19bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x19bf08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19bf0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19bf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19bf10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19bf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19bf14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19bf14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19bf1c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19bf20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bf24: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19bf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19bf2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19bf30: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x19bf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19bf34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x19bf34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf38: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x19bf38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19bf3c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x19bf3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf40: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BF40u;
    {
        const bool branch_taken_0x19bf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF40u;
        // 0x19bf44: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf40) {
            ctx->pc = 0x19BF50u;
            goto label_19bf50;
        }
    }
    ctx->pc = 0x19BF48u;
    // 0x19bf48: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x19BF48u;
    {
        const bool branch_taken_0x19bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf48) {
            ctx->pc = 0x19C310u;
            goto label_19c310;
        }
    }
    ctx->pc = 0x19BF50u;
label_19bf50:
    // 0x19bf50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19bf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19bf54: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x19bf54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x19bf58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bf5c: 0x1462009a  bne         $v1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x19BF5Cu;
    {
        const bool branch_taken_0x19bf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF5Cu;
        // 0x19bf60: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf5c) {
            ctx->pc = 0x19C1C8u;
            goto label_19c1c8;
        }
    }
    ctx->pc = 0x19BF64u;
    // 0x19bf64: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x19bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x19bf68: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bf6c: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x19BF6Cu;
    {
        const bool branch_taken_0x19bf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF6Cu;
        // 0x19bf70: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf6c) {
            ctx->pc = 0x19C1C8u;
            goto label_19c1c8;
        }
    }
    ctx->pc = 0x19BF74u;
    // 0x19bf74: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x19bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x19bf78: 0xc05e360  jal         func_178D80
    ctx->pc = 0x19BF78u;
    SET_GPR_U32(ctx, 31, 0x19BF80u);
    ctx->pc = 0x19BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF78u;
    // 0x19bf7c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x19BF78u, 0x19BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF80u;
label_19bf80:
    // 0x19bf80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf84: 0x10a000e2  beqz        $a1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x19BF84u;
    {
        const bool branch_taken_0x19bf84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf84) {
            ctx->pc = 0x19C310u;
            goto label_19c310;
        }
    }
    ctx->pc = 0x19BF8Cu;
    // 0x19bf8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19bf90: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19bf94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19bf98: 0x3c034438  lui         $v1, 0x4438
    ctx->pc = 0x19bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17464 << 16));
    // 0x19bf9c: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x19bf9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19bfa0: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x19bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
    // 0x19bfa4: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x19bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x19bfa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bfac: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x19bfacu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x19bfb0: 0x34820114  ori         $v0, $a0, 0x114
    ctx->pc = 0x19bfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)276);
    // 0x19bfb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bfb8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19bfbc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x19bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x19bfc0: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x19bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x19bfc4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19bfc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19bfc8: 0xa4a20014  sh          $v0, 0x14($a1)
    ctx->pc = 0x19bfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x19bfcc: 0xa4b30016  sh          $s3, 0x16($a1)
    ctx->pc = 0x19bfccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 19));
    // 0x19bfd0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x19bfd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19bfd4: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x19bfd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19bfd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19bfdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bfdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bfe0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19bfe4: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x19bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x19bfe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bfe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19bfec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19bff0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19bff4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19bff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19bff8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19bffc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19bffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19c000: 0x0  nop
    ctx->pc = 0x19c000u;
    // NOP
    // 0x19c004: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x19c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x19c008: 0x324c0  sll         $a0, $v1, 19
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x19c00c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c010: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x19c010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x19c014: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19c014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19c018: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19c01c: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x19c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x19c020: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x19c020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19c024: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x19c024u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c028: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19c02c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c030: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x19c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x19c034: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19c034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19c038: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c03c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c040: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x19c040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x19c044: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19c044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19c048: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19c04c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x19c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x19c050: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x19c050u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c054: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x19c054u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c058: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x19c058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19c05c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19c060: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c068: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19c06c: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x19c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x19c070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c074: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19c074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19c078: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19c078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c07c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19c080: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c084: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19c084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19c088: 0x0  nop
    ctx->pc = 0x19c088u;
    // NOP
    // 0x19c08c: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x19c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x19c090: 0x324c0  sll         $a0, $v1, 19
    ctx->pc = 0x19c090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x19c094: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c098: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x19c098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x19c09c: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19c09cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19c0a0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19c0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19c0a4: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x19c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x19c0a8: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x19c0a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19c0ac: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x19c0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c0b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19c0b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c0b8: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x19c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x19c0bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19c0c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19c0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c0c4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c0c8: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x19c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x19c0cc: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19c0ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19c0d0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19c0d4: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x19c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x19c0d8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x19c0d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c0dc: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x19c0dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c0e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c0e4: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c0e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c0ec: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x19c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x19c0f0: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x19c0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c0f4: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x19c0f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c0f8: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x19c0f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c0fc: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c100: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c104: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c108: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c10c: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x19c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x19c110: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x19c110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c114: 0x9604000e  lhu         $a0, 0xE($s0)
    ctx->pc = 0x19c114u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c118: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x19c118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c11c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19c120: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c124: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x19c124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x19c128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c12c: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x19c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x19c130: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x19c130u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c134: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x19c134u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c138: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x19c138u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c13c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x19c13cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c140: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19c140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19c144: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19c148: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c14c: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c150: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c154: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x19c154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
    // 0x19c158: 0x92040015  lbu         $a0, 0x15($s0)
    ctx->pc = 0x19c158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x19c15c: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x19c15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x19c160: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c164: 0x92060014  lbu         $a2, 0x14($s0)
    ctx->pc = 0x19c164u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19c168: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x19c168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x19c16c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c170: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c174: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x19c174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x19c178: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19c178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19c17c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c180: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19c180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x19c184: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x19c184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c188: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C188u;
    {
        const bool branch_taken_0x19c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c188) {
            ctx->pc = 0x19C1B0u;
            goto label_19c1b0;
        }
    }
    ctx->pc = 0x19C190u;
    // 0x19c190: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c194: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x19c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x19c198: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19c19c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c1a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19c1a4: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c1a8: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x19c1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x19c1ac: 0x0  nop
    ctx->pc = 0x19c1acu;
    // NOP
label_19c1b0:
    // 0x19c1b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19c1b4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x19c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x19c1b8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x19C1B8u;
    SET_GPR_U32(ctx, 31, 0x19C1C0u);
    ctx->pc = 0x19C1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1B8u;
    // 0x19c1bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x19C1B8u, 0x19C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1C0u;
label_19c1c0:
    // 0x19c1c0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x19C1C0u;
    {
        const bool branch_taken_0x19c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1c0) {
            ctx->pc = 0x19C310u;
            goto label_19c310;
        }
    }
    ctx->pc = 0x19C1C8u;
label_19c1c8:
    // 0x19c1c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x19c1cc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x19c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x19c1d0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x19C1D0u;
    SET_GPR_U32(ctx, 31, 0x19C1D8u);
    ctx->pc = 0x19C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1D0u;
    // 0x19c1d4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x19C1D0u, 0x19C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1D8u;
label_19c1d8:
    // 0x19c1d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1dc: 0x10a0004c  beqz        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x19C1DCu;
    {
        const bool branch_taken_0x19c1dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1dc) {
            ctx->pc = 0x19C310u;
            goto label_19c310;
        }
    }
    ctx->pc = 0x19C1E4u;
    // 0x19c1e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19c1e8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19c1ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19c1f0: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x19c1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c1f4: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x19c1f8: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x19c1f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x19c1fc: 0x34630116  ori         $v1, $v1, 0x116
    ctx->pc = 0x19c1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)278);
    // 0x19c200: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c204: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19c204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19c208: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x19c20c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x19c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x19c210: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19c210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19c214: 0xa4a20014  sh          $v0, 0x14($a1)
    ctx->pc = 0x19c214u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c218: 0xa4b30016  sh          $s3, 0x16($a1)
    ctx->pc = 0x19c218u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 19));
    // 0x19c21c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x19c21cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19c220: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x19c220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c224: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x19c224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19c228: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19c22c: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x19c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x19c230: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c234: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x19c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x19c238: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19c238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19c23c: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x19c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x19c240: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c244: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x19c244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x19c248: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19c248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19c24c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19c24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x19c250: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x19c250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x19c254: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x19c254u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c258: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x19c258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c25c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c260: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c264: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c268: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x19c268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x19c26c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x19c26cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c270: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x19c270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c274: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c278: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c27c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c280: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x19c280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x19c284: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x19c284u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c288: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x19c288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c28c: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x19c28cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c290: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x19c290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c294: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19c294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19c298: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19c29c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c2a0: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c2a4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c2a8: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x19c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x19c2ac: 0x92040015  lbu         $a0, 0x15($s0)
    ctx->pc = 0x19c2acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x19c2b0: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x19c2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x19c2b4: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c2b8: 0x92060014  lbu         $a2, 0x14($s0)
    ctx->pc = 0x19c2b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19c2bc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x19c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x19c2c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c2c4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c2c8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x19c2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x19c2cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19c2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19c2d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c2d4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x19c2d8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x19c2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c2dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C2DCu;
    {
        const bool branch_taken_0x19c2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2dc) {
            ctx->pc = 0x19C300u;
            goto label_19c300;
        }
    }
    ctx->pc = 0x19C2E4u;
    // 0x19c2e4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c2e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x19c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x19c2ec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19c2f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c2f4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19c2f8: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c2fc: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x19c2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
label_19c300:
    // 0x19c300: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19c304: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x19c308: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x19C308u;
    SET_GPR_U32(ctx, 31, 0x19C310u);
    ctx->pc = 0x19C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C308u;
    // 0x19c30c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x19C308u, 0x19C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C310u;
label_19c310:
    // 0x19c310: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19c310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c314: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19c314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c318: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c318u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c31c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c328: 0x3e00008  jr          $ra
    ctx->pc = 0x19C328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C328u;
        // 0x19c32c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C330u;
}
