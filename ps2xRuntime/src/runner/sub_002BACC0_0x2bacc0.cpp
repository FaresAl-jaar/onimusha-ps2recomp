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

// Function: sub_002BACC0
// Address: 0x2bacc0 - 0x2baec4
void sub_002BACC0_0x2bacc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BACC0_0x2bacc0");
#endif

    switch (ctx->pc) {
        case 0x2bace4u: goto label_2bace4;
        case 0x2bada0u: goto label_2bada0;
        case 0x2badc4u: goto label_2badc4;
        case 0x2bae0cu: goto label_2bae0c;
        default: break;
    }

    ctx->pc = 0x2bacc0u;

    // 0x2bacc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bacc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bacc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bacc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bacc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bacc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2baccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bacccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bacd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bacd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bacd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bacd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bacd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bacd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bacdc: 0xc0b222c  jal         func_2C88B0
    ctx->pc = 0x2BACDCu;
    SET_GPR_U32(ctx, 31, 0x2BACE4u);
    ctx->pc = 0x2BACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACDCu;
    // 0x2bace0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C88B0u, 0x2BACDCu, 0x2BACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACE4u;
label_2bace4:
    // 0x2bace4: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2BACE4u;
    {
        const bool branch_taken_0x2bace4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bace4) {
            ctx->pc = 0x2BAEA8u;
            goto label_2baea8;
        }
    }
    ctx->pc = 0x2BACECu;
    // 0x2bacec: 0x86440086  lh          $a0, 0x86($s2)
    ctx->pc = 0x2bacecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x2bacf0: 0x92420039  lbu         $v0, 0x39($s2)
    ctx->pc = 0x2bacf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x2bacf4: 0x863000c2  lh          $s0, 0xC2($s1)
    ctx->pc = 0x2bacf4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2bacf8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2bacf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2bacfc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bad00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bad04: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bad04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bad08: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2bad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2bad0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bad10: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2bad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bad14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BAD14u;
    {
        const bool branch_taken_0x2bad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD14u;
        // 0x2bad18: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad14) {
            ctx->pc = 0x2BAD48u;
            goto label_2bad48;
        }
    }
    ctx->pc = 0x2BAD1Cu;
    // 0x2bad1c: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x2bad1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2bad20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bad20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bad24: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2bad24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2bad28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bad2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bad30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bad34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bad34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bad38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bad3c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bad40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BAD40u;
    {
        const bool branch_taken_0x2bad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD40u;
        // 0x2bad44: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad40) {
            ctx->pc = 0x2BAD70u;
            goto label_2bad70;
        }
    }
    ctx->pc = 0x2BAD48u;
label_2bad48:
    // 0x2bad48: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x2bad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2bad4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bad4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bad50: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2bad50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2bad54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bad54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bad58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bad58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bad5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bad60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bad60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bad64: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2bad64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bad68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bad6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bad6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bad70:
    // 0x2bad70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bad74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bad74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bad78: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2bad78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2bad7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bad7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bad80: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x2bad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x2bad84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bad88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bad88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bad8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bad8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bad90: 0x0  nop
    ctx->pc = 0x2bad90u;
    // NOP
    // 0x2bad94: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2bad94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bad98: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2BAD98u;
    SET_GPR_U32(ctx, 31, 0x2BADA0u);
    ctx->pc = 0x2BAD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD98u;
    // 0x2bad9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2BAD98u, 0x2BADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADA0u;
label_2bada0:
    // 0x2bada0: 0xc642009c  lwc1        $f2, 0x9C($s2)
    ctx->pc = 0x2bada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bada4: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2bada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bada8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bada8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2badac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2badacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2badb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2badb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2badb4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2badb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2badb8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2badb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2badbc: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2BADBCu;
    SET_GPR_U32(ctx, 31, 0x2BADC4u);
    ctx->pc = 0x2BADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADBCu;
    // 0x2badc0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2BADBCu, 0x2BADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADC4u;
label_2badc4:
    // 0x2badc4: 0xc642009c  lwc1        $f2, 0x9C($s2)
    ctx->pc = 0x2badc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2badc8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2badc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2badcc: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2badccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2badd0: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2badd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2badd4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2badd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2badd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2badd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2baddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2baddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bade0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2bade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bade4: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2bade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2bade8: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2bade8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2badec: 0x8c660094  lw          $a2, 0x94($v1)
    ctx->pc = 0x2badecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2badf0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2badf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2badf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2badf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2badf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2badf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2badfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2badfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bae00: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bae04: 0xc0ae8b8  jal         func_2BA2E0
    ctx->pc = 0x2BAE04u;
    SET_GPR_U32(ctx, 31, 0x2BAE0Cu);
    ctx->pc = 0x2BAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE04u;
    // 0x2bae08: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2E0u, 0x2BAE04u, 0x2BAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE0Cu;
label_2bae0c:
    // 0x2bae0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BAE0Cu;
    {
        const bool branch_taken_0x2bae0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae0c) {
            ctx->pc = 0x2BAE48u;
            goto label_2bae48;
        }
    }
    ctx->pc = 0x2BAE14u;
    // 0x2bae14: 0x92430039  lbu         $v1, 0x39($s2)
    ctx->pc = 0x2bae14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x2bae18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bae18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bae1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAE1Cu;
    {
        const bool branch_taken_0x2bae1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae1c) {
            ctx->pc = 0x2BAE38u;
            goto label_2bae38;
        }
    }
    ctx->pc = 0x2BAE24u;
    // 0x2bae24: 0x86430084  lh          $v1, 0x84($s2)
    ctx->pc = 0x2bae24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x2bae28: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2bae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2bae2c: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x2bae2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bae30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAE30u;
    {
        const bool branch_taken_0x2bae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE30u;
        // 0x2bae34: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae30) {
            ctx->pc = 0x2BAE48u;
            goto label_2bae48;
        }
    }
    ctx->pc = 0x2BAE38u;
label_2bae38:
    // 0x2bae38: 0x86430084  lh          $v1, 0x84($s2)
    ctx->pc = 0x2bae38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x2bae3c: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2bae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2bae40: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x2bae40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bae44: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2bae44u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_2bae48:
    // 0x2bae48: 0xa22004ee  sb          $zero, 0x4EE($s1)
    ctx->pc = 0x2bae48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bae4c: 0x9244005e  lbu         $a0, 0x5E($s2)
    ctx->pc = 0x2bae4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
    // 0x2bae50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bae54: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BAE54u;
    {
        const bool branch_taken_0x2bae54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE54u;
        // 0x2bae58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae54) {
            ctx->pc = 0x2BAE98u;
            goto label_2bae98;
        }
    }
    ctx->pc = 0x2BAE5Cu;
    // 0x2bae5c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BAE5Cu;
    {
        const bool branch_taken_0x2bae5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bae5c) {
            ctx->pc = 0x2BAE98u;
            goto label_2bae98;
        }
    }
    ctx->pc = 0x2BAE64u;
    // 0x2bae64: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BAE64u;
    {
        const bool branch_taken_0x2bae64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE64u;
        // 0x2bae68: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae64) {
            ctx->pc = 0x2BAE98u;
            goto label_2bae98;
        }
    }
    ctx->pc = 0x2BAE6Cu;
    // 0x2bae6c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAE6Cu;
    {
        const bool branch_taken_0x2bae6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bae6c) {
            ctx->pc = 0x2BAE80u;
            goto label_2bae80;
        }
    }
    ctx->pc = 0x2BAE74u;
    // 0x2bae74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BAE74u;
    {
        const bool branch_taken_0x2bae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae74) {
            ctx->pc = 0x2BAE98u;
            goto label_2bae98;
        }
    }
    ctx->pc = 0x2BAE7Cu;
    // 0x2bae7c: 0x0  nop
    ctx->pc = 0x2bae7cu;
    // NOP
label_2bae80:
    // 0x2bae80: 0xa63004ec  sh          $s0, 0x4EC($s1)
    ctx->pc = 0x2bae80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1260), (uint16_t)GPR_U32(ctx, 16));
    // 0x2bae84: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x2bae84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x2bae88: 0x34630440  ori         $v1, $v1, 0x440
    ctx->pc = 0x2bae88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1088);
    // 0x2bae8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAE8Cu;
    {
        const bool branch_taken_0x2bae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE8Cu;
        // 0x2bae90: 0xfe230500  sd          $v1, 0x500($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae8c) {
            ctx->pc = 0x2BAEA8u;
            goto label_2baea8;
        }
    }
    ctx->pc = 0x2BAE94u;
    // 0x2bae94: 0x0  nop
    ctx->pc = 0x2bae94u;
    // NOP
label_2bae98:
    // 0x2bae98: 0xa63004ec  sh          $s0, 0x4EC($s1)
    ctx->pc = 0x2bae98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1260), (uint16_t)GPR_U32(ctx, 16));
    // 0x2bae9c: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x2bae9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x2baea0: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2baea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2baea4: 0xfe230500  sd          $v1, 0x500($s1)
    ctx->pc = 0x2baea4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 3));
label_2baea8:
    // 0x2baea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2baea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2baeac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2baeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2baeb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2baeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2baeb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2baeb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2baeb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2baeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEBCu;
        // 0x2baec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAEC4u;
}
