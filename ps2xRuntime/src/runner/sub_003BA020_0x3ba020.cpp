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

// Function: sub_003BA020
// Address: 0x3ba020 - 0x3ba360
void sub_003BA020_0x3ba020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA020_0x3ba020");
#endif

    switch (ctx->pc) {
        case 0x3ba050u: goto label_3ba050;
        case 0x3ba090u: goto label_3ba090;
        case 0x3ba0d8u: goto label_3ba0d8;
        case 0x3ba128u: goto label_3ba128;
        case 0x3ba154u: goto label_3ba154;
        case 0x3ba194u: goto label_3ba194;
        case 0x3ba1ccu: goto label_3ba1cc;
        case 0x3ba2d0u: goto label_3ba2d0;
        default: break;
    }

    ctx->pc = 0x3ba020u;

    // 0x3ba020: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ba020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3ba024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ba024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ba028: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ba028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ba02c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ba02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ba030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ba030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ba034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ba038: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3ba038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3ba03c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ba03cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ba040: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x3ba040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x3ba044: 0x8e4507c0  lw          $a1, 0x7C0($s2)
    ctx->pc = 0x3ba044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x3ba048: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3BA048u;
    SET_GPR_U32(ctx, 31, 0x3BA050u);
    ctx->pc = 0x3BA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA048u;
    // 0x3ba04c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3BA048u, 0x3BA050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA050u;
label_3ba050:
    // 0x3ba050: 0x92432b5a  lbu         $v1, 0x2B5A($s2)
    ctx->pc = 0x3ba050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11098)));
    // 0x3ba054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ba054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba058: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ba058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ba05c: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3BA05Cu;
    {
        const bool branch_taken_0x3ba05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ba05c) {
            ctx->pc = 0x3BA240u;
            goto label_3ba240;
        }
    }
    ctx->pc = 0x3BA064u;
    // 0x3ba064: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ba064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ba068: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BA068u;
    {
        const bool branch_taken_0x3ba068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA068u;
        // 0x3ba06c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba068) {
            ctx->pc = 0x3BA0E0u;
            goto label_3ba0e0;
        }
    }
    ctx->pc = 0x3BA070u;
    // 0x3ba070: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA070u;
    {
        const bool branch_taken_0x3ba070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ba070) {
            ctx->pc = 0x3BA080u;
            goto label_3ba080;
        }
    }
    ctx->pc = 0x3BA078u;
    // 0x3ba078: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x3BA078u;
    {
        const bool branch_taken_0x3ba078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba078) {
            ctx->pc = 0x3BA340u;
            goto label_3ba340;
        }
    }
    ctx->pc = 0x3BA080u;
label_3ba080:
    // 0x3ba080: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3BA080u;
    {
        const bool branch_taken_0x3ba080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA080u;
        // 0x3ba084: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba080) {
            ctx->pc = 0x3BA0E0u;
            goto label_3ba0e0;
        }
    }
    ctx->pc = 0x3BA088u;
    // 0x3ba088: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BA088u;
    SET_GPR_U32(ctx, 31, 0x3BA090u);
    ctx->pc = 0x3BA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA088u;
    // 0x3ba08c: 0x26452b60  addiu       $a1, $s2, 0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BA088u, 0x3BA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA090u;
label_3ba090:
    // 0x3ba090: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3ba090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3ba094: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3ba094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3ba098: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ba098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ba09c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3ba09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3ba0a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ba0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ba0a4: 0x86452b5e  lh          $a1, 0x2B5E($s2)
    ctx->pc = 0x3ba0a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11102)));
    // 0x3ba0a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3ba0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ba0ac: 0x240600e3  addiu       $a2, $zero, 0xE3
    ctx->pc = 0x3ba0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x3ba0b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3ba0b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3ba0b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba0b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ba0b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ba0b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ba0bc: 0x0  nop
    ctx->pc = 0x3ba0bcu;
    // NOP
    // 0x3ba0c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3ba0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ba0c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ba0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3ba0c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3ba0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3ba0cc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3ba0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ba0d0: 0xc096750  jal         func_259D40
    ctx->pc = 0x3BA0D0u;
    SET_GPR_U32(ctx, 31, 0x3BA0D8u);
    ctx->pc = 0x3BA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA0D0u;
    // 0x3ba0d4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259D40u, 0x3BA0D0u, 0x3BA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA0D8u;
label_3ba0d8:
    // 0x3ba0d8: 0xa6422b5e  sh          $v0, 0x2B5E($s2)
    ctx->pc = 0x3ba0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11102), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ba0dc: 0x0  nop
    ctx->pc = 0x3ba0dcu;
    // NOP
label_3ba0e0:
    // 0x3ba0e0: 0x86452b5e  lh          $a1, 0x2B5E($s2)
    ctx->pc = 0x3ba0e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11102)));
    // 0x3ba0e4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3ba0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3ba0e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ba0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3ba0ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3ba0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3ba0f0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3ba0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ba0f4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3ba0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3ba0f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ba0f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ba0fc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3ba0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3ba100: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3ba100u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ba104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba108: 0x0  nop
    ctx->pc = 0x3ba108u;
    // NOP
    // 0x3ba10c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ba10cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ba110: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ba110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ba114: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3ba114u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3ba118: 0x0  nop
    ctx->pc = 0x3ba118u;
    // NOP
    // 0x3ba11c: 0x0  nop
    ctx->pc = 0x3ba11cu;
    // NOP
    // 0x3ba120: 0xc096784  jal         func_259E10
    ctx->pc = 0x3BA120u;
    SET_GPR_U32(ctx, 31, 0x3BA128u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3BA120u, 0x3BA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA128u;
label_3ba128:
    // 0x3ba128: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3BA128u;
    {
        const bool branch_taken_0x3ba128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA128u;
        // 0x3ba12c: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba128) {
            ctx->pc = 0x3BA158u;
            goto label_3ba158;
        }
    }
    ctx->pc = 0x3BA130u;
    // 0x3ba130: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3ba130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ba134: 0x26422b60  addiu       $v0, $s2, 0x2B60
    ctx->pc = 0x3ba134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3ba138: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3ba138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ba13c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3ba13cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ba140: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3ba140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3ba144: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3ba144u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3ba148: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3ba148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3ba14c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x3BA14Cu;
    SET_GPR_U32(ctx, 31, 0x3BA154u);
    ctx->pc = 0x3BA150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA14Cu;
    // 0x3ba150: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x3BA14Cu, 0x3BA154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA154u;
label_3ba154:
    // 0x3ba154: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ba154u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ba158:
    // 0x3ba158: 0x92422b5c  lbu         $v0, 0x2B5C($s2)
    ctx->pc = 0x3ba158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11100)));
    // 0x3ba15c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x3ba15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3ba160: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA160u;
    {
        const bool branch_taken_0x3ba160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba160) {
            ctx->pc = 0x3BA180u;
            goto label_3ba180;
        }
    }
    ctx->pc = 0x3BA168u;
    // 0x3ba168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ba168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba16c: 0x0  nop
    ctx->pc = 0x3ba16cu;
    // NOP
    // 0x3ba170: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3ba170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba174: 0x45010072  bc1t        . + 4 + (0x72 << 2)
    ctx->pc = 0x3BA174u;
    {
        const bool branch_taken_0x3ba174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba174) {
            ctx->pc = 0x3BA340u;
            goto label_3ba340;
        }
    }
    ctx->pc = 0x3BA17Cu;
    // 0x3ba17c: 0x0  nop
    ctx->pc = 0x3ba17cu;
    // NOP
label_3ba180:
    // 0x3ba180: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3ba180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3ba184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ba184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ba188: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ba188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ba18c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3BA18Cu;
    SET_GPR_U32(ctx, 31, 0x3BA194u);
    ctx->pc = 0x3BA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA18Cu;
    // 0x3ba190: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3BA18Cu, 0x3BA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA194u;
label_3ba194:
    // 0x3ba194: 0x26432b60  addiu       $v1, $s2, 0x2B60
    ctx->pc = 0x3ba194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3ba198: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3ba198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ba19c: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3ba19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3ba1a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3ba1a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ba1a4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3ba1a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ba1a8: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3ba1a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3ba1ac: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3ba1acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3ba1b0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ba1b4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3ba1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3ba1b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ba1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba1bc: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x3ba1bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x3ba1c0: 0x26462b60  addiu       $a2, $s2, 0x2B60
    ctx->pc = 0x3ba1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3ba1c4: 0xc0bc804  jal         func_2F2010
    ctx->pc = 0x3BA1C4u;
    SET_GPR_U32(ctx, 31, 0x3BA1CCu);
    ctx->pc = 0x3BA1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA1C4u;
    // 0x3ba1c8: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2010u, 0x3BA1C4u, 0x3BA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA1CCu;
label_3ba1cc:
    // 0x3ba1cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3ba1d0: 0x92442b5c  lbu         $a0, 0x2B5C($s2)
    ctx->pc = 0x3ba1d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11100)));
    // 0x3ba1d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ba1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ba1d8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ba1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ba1dc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ba1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ba1e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ba1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba1e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ba1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ba1ec: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3ba1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ba1f0: 0xa2422b5c  sb          $v0, 0x2B5C($s2)
    ctx->pc = 0x3ba1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11100), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ba1f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ba1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba1f8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ba1f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ba1fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ba1fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ba200: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ba200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba204: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA204u;
    {
        const bool branch_taken_0x3ba204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba204) {
            ctx->pc = 0x3BA21Cu;
            goto label_3ba21c;
        }
    }
    ctx->pc = 0x3BA20Cu;
    // 0x3ba20c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba20cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba210: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BA214u;
    {
        const bool branch_taken_0x3ba214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA214u;
        // 0x3ba218: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba214) {
            ctx->pc = 0x3BA238u;
            goto label_3ba238;
        }
    }
    ctx->pc = 0x3BA21Cu;
label_3ba21c:
    // 0x3ba21c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba21cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba220: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ba220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ba224: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba228: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba22c: 0x0  nop
    ctx->pc = 0x3ba22cu;
    // NOP
    // 0x3ba230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ba230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ba234: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3ba234u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ba238:
    // 0x3ba238: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3BA238u;
    {
        const bool branch_taken_0x3ba238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba238) {
            ctx->pc = 0x3BA340u;
            goto label_3ba340;
        }
    }
    ctx->pc = 0x3BA240u;
label_3ba240:
    // 0x3ba240: 0x92422b5c  lbu         $v0, 0x2B5C($s2)
    ctx->pc = 0x3ba240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11100)));
    // 0x3ba244: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x3ba244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3ba248: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x3BA248u;
    {
        const bool branch_taken_0x3ba248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA248u;
        // 0x3ba24c: 0x26432b60  addiu       $v1, $s2, 0x2B60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba248) {
            ctx->pc = 0x3BA340u;
            goto label_3ba340;
        }
    }
    ctx->pc = 0x3BA250u;
    // 0x3ba250: 0x26422b70  addiu       $v0, $s2, 0x2B70
    ctx->pc = 0x3ba250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11120));
    // 0x3ba254: 0x26442b60  addiu       $a0, $s2, 0x2B60
    ctx->pc = 0x3ba254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3ba258: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3ba258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ba25c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3ba25cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ba260: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3ba260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3ba264: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3ba264u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3ba268: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x3ba268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x3ba26c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3ba26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ba270: 0xc42467e8  lwc1        $f4, 0x67E8($at)
    ctx->pc = 0x3ba270u;
    { uint32_t bits = FAST_READ32(0x4067E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ba274: 0xc6412b78  lwc1        $f1, 0x2B78($s2)
    ctx->pc = 0x3ba274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba278: 0xc6422b70  lwc1        $f2, 0x2B70($s2)
    ctx->pc = 0x3ba278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba27c: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x3ba27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x3ba280: 0xc42377e8  lwc1        $f3, 0x77E8($at)
    ctx->pc = 0x3ba280u;
    { uint32_t bits = FAST_READ32(0x4077E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ba284: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3ba284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3ba288: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x3ba288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3ba28c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3ba28cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ba290: 0xe6412b70  swc1        $f1, 0x2B70($s2)
    ctx->pc = 0x3ba290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11120), bits); }
    // 0x3ba294: 0xc6412b74  lwc1        $f1, 0x2B74($s2)
    ctx->pc = 0x3ba294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba298: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x3ba298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3ba29c: 0xe6412b74  swc1        $f1, 0x2B74($s2)
    ctx->pc = 0x3ba29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11124), bits); }
    // 0x3ba2a0: 0xc6412b78  lwc1        $f1, 0x2B78($s2)
    ctx->pc = 0x3ba2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba2a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3ba2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3ba2a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3ba2a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba2ac: 0xe6402b78  swc1        $f0, 0x2B78($s2)
    ctx->pc = 0x3ba2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11128), bits); }
    // 0x3ba2b0: 0xc6402b7c  lwc1        $f0, 0x2B7C($s2)
    ctx->pc = 0x3ba2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba2b4: 0xe6402b7c  swc1        $f0, 0x2B7C($s2)
    ctx->pc = 0x3ba2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11132), bits); }
    // 0x3ba2b8: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3ba2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3ba2bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ba2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba2c0: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x3ba2c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x3ba2c4: 0x26462b60  addiu       $a2, $s2, 0x2B60
    ctx->pc = 0x3ba2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    // 0x3ba2c8: 0xc0bc804  jal         func_2F2010
    ctx->pc = 0x3BA2C8u;
    SET_GPR_U32(ctx, 31, 0x3BA2D0u);
    ctx->pc = 0x3BA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA2C8u;
    // 0x3ba2cc: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2010u, 0x3BA2C8u, 0x3BA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA2D0u;
label_3ba2d0:
    // 0x3ba2d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3ba2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3ba2d4: 0x92442b5c  lbu         $a0, 0x2B5C($s2)
    ctx->pc = 0x3ba2d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11100)));
    // 0x3ba2d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ba2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ba2dc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ba2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ba2e0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ba2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ba2e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ba2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ba2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba2ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ba2ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ba2f0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3ba2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ba2f4: 0xa2422b5c  sb          $v0, 0x2B5C($s2)
    ctx->pc = 0x3ba2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11100), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ba2f8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ba2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ba2fc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ba2fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ba300: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ba300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ba304: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ba304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba308: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA308u;
    {
        const bool branch_taken_0x3ba308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba308) {
            ctx->pc = 0x3BA320u;
            goto label_3ba320;
        }
    }
    ctx->pc = 0x3BA310u;
    // 0x3ba310: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba314: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba318: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BA318u;
    {
        const bool branch_taken_0x3ba318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA318u;
        // 0x3ba31c: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba318) {
            ctx->pc = 0x3BA33Cu;
            goto label_3ba33c;
        }
    }
    ctx->pc = 0x3BA320u;
label_3ba320:
    // 0x3ba320: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ba320u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ba324: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ba324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ba328: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ba32c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ba32cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ba330: 0x0  nop
    ctx->pc = 0x3ba330u;
    // NOP
    // 0x3ba334: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ba334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ba338: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3ba338u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ba33c:
    // 0x3ba33c: 0x0  nop
    ctx->pc = 0x3ba33cu;
    // NOP
label_3ba340:
    // 0x3ba340: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ba340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba344: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ba344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ba348: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ba348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ba34c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ba34cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ba350: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ba350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ba354: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ba354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba358: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA358u;
        // 0x3ba35c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA360u;
}
