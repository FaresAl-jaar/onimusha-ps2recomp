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

// Function: sub_001635F0
// Address: 0x1635f0 - 0x1637a8
void sub_001635F0_0x1635f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001635F0_0x1635f0");
#endif

    switch (ctx->pc) {
        case 0x163624u: goto label_163624;
        default: break;
    }

    ctx->pc = 0x1635f0u;

    // 0x1635f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1635f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1635f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1635f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1635f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1635f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1635fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1635fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x163604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163608: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x163608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x16360c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x16360cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x163610: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x163610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x163614: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x163614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x163618: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x163618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x16361c: 0xc05972c  jal         func_165CB0
    ctx->pc = 0x16361Cu;
    SET_GPR_U32(ctx, 31, 0x163624u);
    ctx->pc = 0x163620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16361Cu;
    // 0x163620: 0xa0820012  sb          $v0, 0x12($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CB0u, 0x16361Cu, 0x163624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163624u;
label_163624:
    // 0x163624: 0x86050024  lh          $a1, 0x24($s0)
    ctx->pc = 0x163624u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163628: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x163628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x16362c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x163630: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163634: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x163634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x163638: 0xa625002c  sh          $a1, 0x2C($s1)
    ctx->pc = 0x163638u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x16363c: 0xa224004e  sb          $a0, 0x4E($s1)
    ctx->pc = 0x16363cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x163640: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x163640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x163644: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x163644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x163648: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x163648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16364c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16364cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163650: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x163650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x163654: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x163654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x163658: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x163658u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x16365c: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x16365cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x163660: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x163660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x163664: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x163664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x163668: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16366c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x16366cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x163670: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x163670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163674: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x163674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x163678: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x163678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x16367c: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x16367cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x163680: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x163680u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x163684: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x163684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x163688: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x163688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x16368c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x16368cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x163690: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x163690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x163694: 0x94680050  lhu         $t0, 0x50($v1)
    ctx->pc = 0x163694u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x163698: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163698u;
    {
        const bool branch_taken_0x163698 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x163698) {
            ctx->pc = 0x1636A8u;
            goto label_1636a8;
        }
    }
    ctx->pc = 0x1636A0u;
    // 0x1636a0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1636A0u;
    {
        const bool branch_taken_0x1636a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A0u;
        // 0x1636a4: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636a0) {
            ctx->pc = 0x163758u;
            goto label_163758;
        }
    }
    ctx->pc = 0x1636A8u;
label_1636a8:
    // 0x1636a8: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x1636a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x1636ac: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x1636acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1636b0: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x1636b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1636b4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1636B4u;
    {
        const bool branch_taken_0x1636b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1636b4) {
            ctx->pc = 0x1636D8u;
            goto label_1636d8;
        }
    }
    ctx->pc = 0x1636BCu;
    // 0x1636bc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1636bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1636c0: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x1636c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1636c4: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1636C4u;
    {
        const bool branch_taken_0x1636c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1636c4) {
            ctx->pc = 0x1636D8u;
            goto label_1636d8;
        }
    }
    ctx->pc = 0x1636CCu;
    // 0x1636cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1636CCu;
    {
        const bool branch_taken_0x1636cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636CCu;
        // 0x1636d0: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636cc) {
            ctx->pc = 0x163758u;
            goto label_163758;
        }
    }
    ctx->pc = 0x1636D4u;
    // 0x1636d4: 0x0  nop
    ctx->pc = 0x1636d4u;
    // NOP
label_1636d8:
    // 0x1636d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1636d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1636dc: 0xa22600a8  sb          $a2, 0xA8($s1)
    ctx->pc = 0x1636dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 6));
    // 0x1636e0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1636e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1636e4: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1636e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1636e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1636E8u;
    {
        const bool branch_taken_0x1636e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1636e8) {
            ctx->pc = 0x163710u;
            goto label_163710;
        }
    }
    ctx->pc = 0x1636F0u;
    // 0x1636f0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1636f0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636f4: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x1636f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x1636f8: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x1636f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x1636fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1636fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163700: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x163700u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x163704: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x163704u;
    {
        const bool branch_taken_0x163704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163704u;
        // 0x163708: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163704) {
            ctx->pc = 0x163758u;
            goto label_163758;
        }
    }
    ctx->pc = 0x16370Cu;
    // 0x16370c: 0x0  nop
    ctx->pc = 0x16370cu;
    // NOP
label_163710:
    // 0x163710: 0xa22600a9  sb          $a2, 0xA9($s1)
    ctx->pc = 0x163710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 6));
    // 0x163714: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x163714u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x163718: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x163718u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x16371c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x16371cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x163720: 0xa22500aa  sb          $a1, 0xAA($s1)
    ctx->pc = 0x163720u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 5));
    // 0x163724: 0xa22700ab  sb          $a3, 0xAB($s1)
    ctx->pc = 0x163724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 7));
    // 0x163728: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163728u;
    {
        const bool branch_taken_0x163728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163728u;
        // 0x16372c: 0xa22400ac  sb          $a0, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163728) {
            ctx->pc = 0x163738u;
            goto label_163738;
        }
    }
    ctx->pc = 0x163730u;
    // 0x163730: 0xa22600ac  sb          $a2, 0xAC($s1)
    ctx->pc = 0x163730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 6));
    // 0x163734: 0x0  nop
    ctx->pc = 0x163734u;
    // NOP
label_163738:
    // 0x163738: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x163738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x16373c: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x16373cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x163740: 0x0  nop
    ctx->pc = 0x163740u;
    // NOP
    // 0x163744: 0x0  nop
    ctx->pc = 0x163744u;
    // NOP
    // 0x163748: 0x2010  mfhi        $a0
    ctx->pc = 0x163748u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16374c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16374cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x163750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163754: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x163754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_163758:
    // 0x163758: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16375c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x163760: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x163764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163768: 0xa6230048  sh          $v1, 0x48($s1)
    ctx->pc = 0x163768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x16376c: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x16376cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x163770: 0xa623004a  sh          $v1, 0x4A($s1)
    ctx->pc = 0x163770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x163774: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x163778: 0xa623004c  sh          $v1, 0x4C($s1)
    ctx->pc = 0x163778u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x16377c: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x16377cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163780: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x163780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x163784: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x163784u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x163788: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x163788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x16378c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x16378cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163790: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x163790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x163794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x163794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16379c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16379cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1637a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1637A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1637A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637A0u;
        // 0x1637a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1637A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1637A8u;
}
