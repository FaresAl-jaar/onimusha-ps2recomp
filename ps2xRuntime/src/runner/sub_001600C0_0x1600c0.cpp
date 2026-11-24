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

// Function: sub_001600C0
// Address: 0x1600c0 - 0x160278
void sub_001600C0_0x1600c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001600C0_0x1600c0");
#endif

    switch (ctx->pc) {
        case 0x1600f4u: goto label_1600f4;
        default: break;
    }

    ctx->pc = 0x1600c0u;

    // 0x1600c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1600c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1600c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1600c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1600c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1600c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1600cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1600ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1600d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1600d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1600d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600d8: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x1600d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x1600dc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1600dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1600e0: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x1600e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x1600e4: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1600e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1600e8: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x1600e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1600ec: 0xc05972c  jal         func_165CB0
    ctx->pc = 0x1600ECu;
    SET_GPR_U32(ctx, 31, 0x1600F4u);
    ctx->pc = 0x1600F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600ECu;
    // 0x1600f0: 0xa0820012  sb          $v0, 0x12($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CB0u, 0x1600ECu, 0x1600F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600F4u;
label_1600f4:
    // 0x1600f4: 0x86050024  lh          $a1, 0x24($s0)
    ctx->pc = 0x1600f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1600f8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1600f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1600fc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1600fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x160100: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160104: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x160104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x160108: 0xa625002c  sh          $a1, 0x2C($s1)
    ctx->pc = 0x160108u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x16010c: 0xa224004e  sb          $a0, 0x4E($s1)
    ctx->pc = 0x16010cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x160110: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x160110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x160114: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x160114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x160118: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x160118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16011c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x160120: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x160120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x160124: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x160128: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x160128u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x16012c: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x16012cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x160130: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x160130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x160134: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x160134u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x160138: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16013c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x160140: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x160140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x160144: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160148: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x160148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x16014c: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x16014cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x160150: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x160154: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x160154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x160158: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x160158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x16015c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x16015cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x160160: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x160160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x160164: 0x94680050  lhu         $t0, 0x50($v1)
    ctx->pc = 0x160164u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x160168: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160168u;
    {
        const bool branch_taken_0x160168 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x160168) {
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x160170u;
    // 0x160170: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x160170u;
    {
        const bool branch_taken_0x160170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160170u;
        // 0x160174: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160170) {
            ctx->pc = 0x160228u;
            goto label_160228;
        }
    }
    ctx->pc = 0x160178u;
label_160178:
    // 0x160178: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x160178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x16017c: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x16017cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x160180: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x160180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x160184: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x160184u;
    {
        const bool branch_taken_0x160184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x160184) {
            ctx->pc = 0x1601A8u;
            goto label_1601a8;
        }
    }
    ctx->pc = 0x16018Cu;
    // 0x16018c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x160190: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x160194: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160194u;
    {
        const bool branch_taken_0x160194 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x160194) {
            ctx->pc = 0x1601A8u;
            goto label_1601a8;
        }
    }
    ctx->pc = 0x16019Cu;
    // 0x16019c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16019Cu;
    {
        const bool branch_taken_0x16019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16019Cu;
        // 0x1601a0: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16019c) {
            ctx->pc = 0x160228u;
            goto label_160228;
        }
    }
    ctx->pc = 0x1601A4u;
    // 0x1601a4: 0x0  nop
    ctx->pc = 0x1601a4u;
    // NOP
label_1601a8:
    // 0x1601a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1601ac: 0xa22600a8  sb          $a2, 0xA8($s1)
    ctx->pc = 0x1601acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 6));
    // 0x1601b0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1601b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1601b4: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1601b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1601b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1601B8u;
    {
        const bool branch_taken_0x1601b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601b8) {
            ctx->pc = 0x1601E0u;
            goto label_1601e0;
        }
    }
    ctx->pc = 0x1601C0u;
    // 0x1601c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1601c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1601c4: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x1601c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x1601c8: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x1601c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x1601cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1601ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1601d0: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x1601d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x1601d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1601D4u;
    {
        const bool branch_taken_0x1601d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601D4u;
        // 0x1601d8: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601d4) {
            ctx->pc = 0x160228u;
            goto label_160228;
        }
    }
    ctx->pc = 0x1601DCu;
    // 0x1601dc: 0x0  nop
    ctx->pc = 0x1601dcu;
    // NOP
label_1601e0:
    // 0x1601e0: 0xa22600a9  sb          $a2, 0xA9($s1)
    ctx->pc = 0x1601e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 6));
    // 0x1601e4: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x1601e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x1601e8: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x1601e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x1601ec: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1601ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1601f0: 0xa22500aa  sb          $a1, 0xAA($s1)
    ctx->pc = 0x1601f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 5));
    // 0x1601f4: 0xa22700ab  sb          $a3, 0xAB($s1)
    ctx->pc = 0x1601f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 7));
    // 0x1601f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1601F8u;
    {
        const bool branch_taken_0x1601f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1601FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601F8u;
        // 0x1601fc: 0xa22400ac  sb          $a0, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601f8) {
            ctx->pc = 0x160208u;
            goto label_160208;
        }
    }
    ctx->pc = 0x160200u;
    // 0x160200: 0xa22600ac  sb          $a2, 0xAC($s1)
    ctx->pc = 0x160200u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 6));
    // 0x160204: 0x0  nop
    ctx->pc = 0x160204u;
    // NOP
label_160208:
    // 0x160208: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x160208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x16020c: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x16020cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x160210: 0x0  nop
    ctx->pc = 0x160210u;
    // NOP
    // 0x160214: 0x0  nop
    ctx->pc = 0x160214u;
    // NOP
    // 0x160218: 0x2010  mfhi        $a0
    ctx->pc = 0x160218u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16021c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16021cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x160220: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x160224: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x160224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_160228:
    // 0x160228: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x160228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16022c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x16022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x160230: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x160234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160238: 0xa6230048  sh          $v1, 0x48($s1)
    ctx->pc = 0x160238u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x16023c: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x160240: 0xa623004a  sh          $v1, 0x4A($s1)
    ctx->pc = 0x160240u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x160244: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x160244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x160248: 0xa623004c  sh          $v1, 0x4C($s1)
    ctx->pc = 0x160248u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x16024c: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x16024cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160250: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x160254: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x160254u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x160258: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x160258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x16025c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x16025cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160260: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x160260u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x160264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x160264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16026c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16026cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160270: 0x3e00008  jr          $ra
    ctx->pc = 0x160270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160270u;
        // 0x160274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160278u;
}
