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

// Function: sub_00372280
// Address: 0x372280 - 0x3723bc
void sub_00372280_0x372280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372280_0x372280");
#endif

    switch (ctx->pc) {
        case 0x3722d0u: goto label_3722d0;
        case 0x3723a8u: goto label_3723a8;
        default: break;
    }

    ctx->pc = 0x372280u;

    // 0x372280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x372284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x372284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x372288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37228c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x372290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372294: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x372294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x372298: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x372298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x37229c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x37229cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3722a0: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x3722A0u;
    {
        const bool branch_taken_0x3722a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722A0u;
        // 0x3722a4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722a0) {
            ctx->pc = 0x3723A8u;
            goto label_3723a8;
        }
    }
    ctx->pc = 0x3722A8u;
    // 0x3722a8: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x3722a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3722ac: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3722acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3722b0: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x3722b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3722b4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3722b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3722b8: 0x96280004  lhu         $t0, 0x4($s1)
    ctx->pc = 0x3722b8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3722bc: 0x24847064  addiu       $a0, $a0, 0x7064
    ctx->pc = 0x3722bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28772));
    // 0x3722c0: 0x96290006  lhu         $t1, 0x6($s1)
    ctx->pc = 0x3722c0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3722c4: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x3722c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x3722c8: 0xc09c720  jal         func_271C80
    ctx->pc = 0x3722C8u;
    SET_GPR_U32(ctx, 31, 0x3722D0u);
    ctx->pc = 0x3722CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3722C8u;
    // 0x3722cc: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x3722C8u, 0x3722D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3722D0u;
label_3722d0:
    // 0x3722d0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x3722d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3722d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3722D4u;
    {
        const bool branch_taken_0x3722d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3722D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722D4u;
        // 0x3722d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722d4) {
            ctx->pc = 0x3722E8u;
            goto label_3722e8;
        }
    }
    ctx->pc = 0x3722DCu;
    // 0x3722dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3722dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3722e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3722E0u;
    {
        const bool branch_taken_0x3722e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3722E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3722E0u;
        // 0x3722e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3722e0) {
            ctx->pc = 0x372300u;
            goto label_372300;
        }
    }
    ctx->pc = 0x3722E8u;
label_3722e8:
    // 0x3722e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3722e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3722ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3722ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3722f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3722f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3722f4: 0x0  nop
    ctx->pc = 0x3722f4u;
    // NOP
    // 0x3722f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3722f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3722fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3722fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_372300:
    // 0x372300: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x372300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x372304: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x372304u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x372308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37230c: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x37230cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x372310: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x372310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x372314: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x372314u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372318: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x372318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x37231c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x37231cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372320: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x372320u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372324: 0x0  nop
    ctx->pc = 0x372324u;
    // NOP
    // 0x372328: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x372328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37232c: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x37232cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x372330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x372330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x372334: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x372334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372338: 0x0  nop
    ctx->pc = 0x372338u;
    // NOP
    // 0x37233c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x37233cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x372340: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x372340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x372344: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x372344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x372348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37234c: 0x0  nop
    ctx->pc = 0x37234cu;
    // NOP
    // 0x372350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x372350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372354: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x372354u;
    {
        const bool branch_taken_0x372354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372354) {
            ctx->pc = 0x372360u;
            goto label_372360;
        }
    }
    ctx->pc = 0x37235Cu;
    // 0x37235c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x37235cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_372360:
    // 0x372360: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x372360u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x372364: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x372364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x372368: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x372368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37236c: 0x3449ffee  ori         $t1, $v0, 0xFFEE
    ctx->pc = 0x37236cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x372370: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x372370u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x372374: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x372374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x372378: 0x3406fff5  ori         $a2, $zero, 0xFFF5
    ctx->pc = 0x372378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x37237c: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x37237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x372380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x372380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372384: 0x0  nop
    ctx->pc = 0x372384u;
    // NOP
    // 0x372388: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x372388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x37238c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x37238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x372390: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x372390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x372394: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x372394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x372398: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x372398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37239c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x37239cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3723a0: 0xc09c538  jal         func_2714E0
    ctx->pc = 0x3723A0u;
    SET_GPR_U32(ctx, 31, 0x3723A8u);
    ctx->pc = 0x3723A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723A0u;
    // 0x3723a4: 0x2467fffd  addiu       $a3, $v1, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714E0u, 0x3723A0u, 0x3723A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723A8u;
label_3723a8:
    // 0x3723a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3723a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3723ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3723acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3723b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3723b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3723b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3723B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3723B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723B4u;
        // 0x3723b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3723B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3723BCu;
}
