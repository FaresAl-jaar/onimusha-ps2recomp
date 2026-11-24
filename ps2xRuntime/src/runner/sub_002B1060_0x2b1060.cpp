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

// Function: sub_002B1060
// Address: 0x2b1060 - 0x2b1780
void sub_002B1060_0x2b1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1060_0x2b1060");
#endif

    switch (ctx->pc) {
        case 0x2b1204u: goto label_2b1204;
        default: break;
    }

    ctx->pc = 0x2b1060u;

    // 0x2b1060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b1064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b1064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b1068: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b1068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b106c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2b106cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2b1070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1074: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2b1074u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b1078: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2b1078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b107c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b107cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b1080: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2b1080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2b1084: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1084u;
    {
        const bool branch_taken_0x2b1084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1084) {
            ctx->pc = 0x2B1098u;
            goto label_2b1098;
        }
    }
    ctx->pc = 0x2B108Cu;
    // 0x2b108c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b108cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b1090: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2B1090u;
    {
        const bool branch_taken_0x2b1090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1090u;
        // 0x2b1094: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1090) {
            ctx->pc = 0x2B1108u;
            goto label_2b1108;
        }
    }
    ctx->pc = 0x2B1098u;
label_2b1098:
    // 0x2b1098: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b109c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2b109cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b10a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B10A0u;
    {
        const bool branch_taken_0x2b10a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10A0u;
        // 0x2b10a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10a0) {
            ctx->pc = 0x2B10B4u;
            goto label_2b10b4;
        }
    }
    ctx->pc = 0x2B10A8u;
    // 0x2b10a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b10a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B10ACu;
    {
        const bool branch_taken_0x2b10ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10ACu;
        // 0x2b10b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10ac) {
            ctx->pc = 0x2B10CCu;
            goto label_2b10cc;
        }
    }
    ctx->pc = 0x2B10B4u;
label_2b10b4:
    // 0x2b10b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b10b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b10b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b10b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b10bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b10bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10c0: 0x0  nop
    ctx->pc = 0x2b10c0u;
    // NOP
    // 0x2b10c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b10c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b10c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b10c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b10cc:
    // 0x2b10cc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B10CCu;
    {
        const bool branch_taken_0x2b10cc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10CCu;
        // 0x2b10d0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10cc) {
            ctx->pc = 0x2B10E0u;
            goto label_2b10e0;
        }
    }
    ctx->pc = 0x2B10D4u;
    // 0x2b10d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b10d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B10D8u;
    {
        const bool branch_taken_0x2b10d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10D8u;
        // 0x2b10dc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10d8) {
            ctx->pc = 0x2B10F8u;
            goto label_2b10f8;
        }
    }
    ctx->pc = 0x2B10E0u;
label_2b10e0:
    // 0x2b10e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b10e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b10e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b10e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b10e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b10e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b10ec: 0x0  nop
    ctx->pc = 0x2b10ecu;
    // NOP
    // 0x2b10f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b10f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b10f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b10f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b10f8:
    // 0x2b10f8: 0x0  nop
    ctx->pc = 0x2b10f8u;
    // NOP
    // 0x2b10fc: 0x0  nop
    ctx->pc = 0x2b10fcu;
    // NOP
    // 0x2b1100: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2b1100u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2b1104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b1108:
    // 0x2b1108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b110c: 0x0  nop
    ctx->pc = 0x2b110cu;
    // NOP
    // 0x2b1110: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2b1110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1114: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1114u;
    {
        const bool branch_taken_0x2b1114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1114) {
            ctx->pc = 0x2B1120u;
            goto label_2b1120;
        }
    }
    ctx->pc = 0x2B111Cu;
    // 0x2b111c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b111cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2b1120:
    // 0x2b1120: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2b1120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2b1124: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1124u;
    {
        const bool branch_taken_0x2b1124 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1124u;
        // 0x2b1128: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1124) {
            ctx->pc = 0x2B1138u;
            goto label_2b1138;
        }
    }
    ctx->pc = 0x2B112Cu;
    // 0x2b112c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b112cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1130: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1130u;
    {
        const bool branch_taken_0x2b1130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1130u;
        // 0x2b1134: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1130) {
            ctx->pc = 0x2B1150u;
            goto label_2b1150;
        }
    }
    ctx->pc = 0x2B1138u;
label_2b1138:
    // 0x2b1138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b113c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b113cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b1140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1144: 0x0  nop
    ctx->pc = 0x2b1144u;
    // NOP
    // 0x2b1148: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2b1148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b114c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b114cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b1150:
    // 0x2b1150: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2b1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b1154: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1154u;
    {
        const bool branch_taken_0x2b1154 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1154u;
        // 0x2b1158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1154) {
            ctx->pc = 0x2B1168u;
            goto label_2b1168;
        }
    }
    ctx->pc = 0x2B115Cu;
    // 0x2b115c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b115cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1160: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1160u;
    {
        const bool branch_taken_0x2b1160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1160u;
        // 0x2b1164: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1160) {
            ctx->pc = 0x2B1180u;
            goto label_2b1180;
        }
    }
    ctx->pc = 0x2B1168u;
label_2b1168:
    // 0x2b1168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b116c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b116cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b1170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1174: 0x0  nop
    ctx->pc = 0x2b1174u;
    // NOP
    // 0x2b1178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b1178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b117c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b117cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b1180:
    // 0x2b1180: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x2b1180u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b1184: 0x84a7002c  lh          $a3, 0x2C($a1)
    ctx->pc = 0x2b1184u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2b1188: 0x84a60028  lh          $a2, 0x28($a1)
    ctx->pc = 0x2b1188u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2b118c: 0x84a3002e  lh          $v1, 0x2E($a1)
    ctx->pc = 0x2b118cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x2b1190: 0x84a2002a  lh          $v0, 0x2A($a1)
    ctx->pc = 0x2b1190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x2b1194: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2b1194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b1198: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2b1198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b119c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2b119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b11a0: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2b11a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b11a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b11a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b11a8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x2b11a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2b11ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b11acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b11b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b11b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b11b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b11b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b11b8: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x2b11b8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b11bc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2b11bcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b11c0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b11c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b11c4: 0x0  nop
    ctx->pc = 0x2b11c4u;
    // NOP
    // 0x2b11c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b11c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b11cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b11ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b11d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b11d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b11d4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b11d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b11d8: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2b11d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b11dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b11dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b11e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b11e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b11e4: 0x0  nop
    ctx->pc = 0x2b11e4u;
    // NOP
    // 0x2b11e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b11e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b11ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b11ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b11f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b11f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b11f4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2b11f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b11f8: 0x46021d80  add.s       $f22, $f3, $f2
    ctx->pc = 0x2b11f8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b11fc: 0xc0ac140  jal         func_2B0500
    ctx->pc = 0x2B11FCu;
    SET_GPR_U32(ctx, 31, 0x2B1204u);
    ctx->pc = 0x2B1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11FCu;
    // 0x2b1200: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0500u, 0x2B11FCu, 0x2B1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1204u;
label_2b1204:
    // 0x2b1204: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2b1204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2b1208: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x2b1208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x2b120c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1210: 0x346400c0  ori         $a0, $v1, 0xC0
    ctx->pc = 0x2b1210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x2b1214: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2b1214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b1218: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2b1218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2b121c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b121cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b1220: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b1220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b1224: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x2b1224u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x2b1228: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2b1228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2b122c: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2b122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2b1230: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2b1230u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2b1234: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2b1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b1238: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2b1238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b123c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2b123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1240: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x2b1240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b1244: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2b1244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2b1248: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x2b1248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2b124c: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x2b124cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2b1250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b1250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1254: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2b1254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b1258: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2b1258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b125c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x2b125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2b1260: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2b1260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b1264: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x2b1264u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x2b1268: 0x2404037c  addiu       $a0, $zero, 0x37C
    ctx->pc = 0x2b1268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x2b126c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2b126cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2b1270: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2b1270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b1274: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x2b1274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x2b1278: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2b1278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b127c: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x2b127cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x2b1280: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2b1280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b1284: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x2b1284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x2b1288: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x2b1288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2b128c: 0xdc2af230  ld          $t2, -0xDD0($at)
    ctx->pc = 0x2b128cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 1), 4294963760)));
    // 0x2b1290: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x2b1294: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2b1294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b1298: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2b1298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2b129c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2b129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b12a0: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2b12a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b12a4: 0xfe0a0030  sd          $t2, 0x30($s0)
    ctx->pc = 0x2b12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 10));
    // 0x2b12a8: 0xfe090038  sd          $t1, 0x38($s0)
    ctx->pc = 0x2b12a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 9));
    // 0x2b12ac: 0xfe000040  sd          $zero, 0x40($s0)
    ctx->pc = 0x2b12acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 0));
    // 0x2b12b0: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x2b12b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x2b12b4: 0x93a6003f  lbu         $a2, 0x3F($sp)
    ctx->pc = 0x2b12b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x2b12b8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2b12b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2b12bc: 0x34c60064  ori         $a2, $a2, 0x64
    ctx->pc = 0x2b12bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)100);
    // 0x2b12c0: 0xfe060050  sd          $a2, 0x50($s0)
    ctx->pc = 0x2b12c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 6));
    // 0x2b12c4: 0xfe070058  sd          $a3, 0x58($s0)
    ctx->pc = 0x2b12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 7));
    // 0x2b12c8: 0xfe040060  sd          $a0, 0x60($s0)
    ctx->pc = 0x2b12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 4));
    // 0x2b12cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B12CCu;
    {
        const bool branch_taken_0x2b12cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12CCu;
        // 0x2b12d0: 0xfe030068  sd          $v1, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12cc) {
            ctx->pc = 0x2B12E0u;
            goto label_2b12e0;
        }
    }
    ctx->pc = 0x2B12D4u;
    // 0x2b12d4: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x2b12d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b12d8: 0x450100cf  bc1t        . + 4 + (0xCF << 2)
    ctx->pc = 0x2B12D8u;
    {
        const bool branch_taken_0x2b12d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b12d8) {
            ctx->pc = 0x2B1618u;
            goto label_2b1618;
        }
    }
    ctx->pc = 0x2B12E0u;
label_2b12e0:
    // 0x2b12e0: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x2b12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x2b12e4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2b12e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b12e8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2b12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2b12ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b12ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b12f0: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x2b12f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
    // 0x2b12f4: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2b12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2b12f8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2b12f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b12fc: 0x46141042  mul.s       $f1, $f2, $f20
    ctx->pc = 0x2b12fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2b1300: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x2b1300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x2b1304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1308: 0x4605b283  div.s       $f10, $f22, $f5
    ctx->pc = 0x2b1308u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[22], ctx->f[5]); }
    // 0x2b130c: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x2b130cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2b1310: 0x46171002  mul.s       $f0, $f2, $f23
    ctx->pc = 0x2b1310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x2b1314: 0x46040303  div.s       $f12, $f0, $f4
    ctx->pc = 0x2b1314u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x2b1318: 0x460a2002  mul.s       $f0, $f4, $f10
    ctx->pc = 0x2b1318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x2b131c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2b131cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b1320: 0x0  nop
    ctx->pc = 0x2b1320u;
    // NOP
    // 0x2b1324: 0x460d12c1  sub.s       $f11, $f2, $f13
    ctx->pc = 0x2b1324u;
    ctx->f[11] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x2b1328: 0x46030383  div.s       $f14, $f0, $f3
    ctx->pc = 0x2b1328u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x2b132c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b132cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1330: 0x0  nop
    ctx->pc = 0x2b1330u;
    // NOP
    // 0x2b1334: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x2b1334u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1338: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
    ctx->pc = 0x2B1338u;
    {
        const bool branch_taken_0x2b1338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1338u;
        // 0x2b133c: 0x460c1201  sub.s       $f8, $f2, $f12 (Delay Slot)
        ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1338) {
            ctx->pc = 0x2B14F8u;
            goto label_2b14f8;
        }
    }
    ctx->pc = 0x2B1340u;
    // 0x2b1340: 0x0  nop
    ctx->pc = 0x2b1340u;
    // NOP
    // 0x2b1344: 0x0  nop
    ctx->pc = 0x2b1344u;
    // NOP
    // 0x2b1348: 0x4605a983  div.s       $f6, $f21, $f5
    ctx->pc = 0x2b1348u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[21], ctx->f[5]); }
    // 0x2b134c: 0x24020254  addiu       $v0, $zero, 0x254
    ctx->pc = 0x2b134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
    // 0x2b1350: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2b1350u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2b1354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b1354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1358: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2b1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2b135c: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x2b135cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x2b1360: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b1360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1364: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x2b1364u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1368: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b136c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2b136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b1370: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x2b1370u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x2b1374: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b1374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1378: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b1378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b137c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2b137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b1380: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x2b1380u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x2b1384: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1388: 0x93a7003d  lbu         $a3, 0x3D($sp)
    ctx->pc = 0x2b1388u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x2b138c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1390: 0x93a9003c  lbu         $t1, 0x3C($sp)
    ctx->pc = 0x2b1390u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b1394: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b1394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1398: 0x93a4003e  lbu         $a0, 0x3E($sp)
    ctx->pc = 0x2b1398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x2b139c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b13a0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b13a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b13a8: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x2b13a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b13ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2b13acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b13b0: 0x34482000  ori         $t0, $v0, 0x2000
    ctx->pc = 0x2b13b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2b13b4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b13b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b13b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b13b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2b13bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b13bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b13c0: 0x71a38  dsll        $v1, $a3, 8
    ctx->pc = 0x2b13c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 8);
    // 0x2b13c4: 0x1233825  or          $a3, $t1, $v1
    ctx->pc = 0x2b13c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2b13c8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2b13c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2b13cc: 0x3c093f60  lui         $t1, 0x3F60
    ctx->pc = 0x2b13ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16224 << 16));
    // 0x2b13d0: 0x352a8000  ori         $t2, $t1, 0x8000
    ctx->pc = 0x2b13d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x2b13d4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2b13d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2b13d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2b13d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b13dc: 0x3c043a80  lui         $a0, 0x3A80
    ctx->pc = 0x2b13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14976 << 16));
    // 0x2b13e0: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x2b13e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x2b13e4: 0x3c033b00  lui         $v1, 0x3B00
    ctx->pc = 0x2b13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15104 << 16));
    // 0x2b13e8: 0xfca60028  sd          $a2, 0x28($a1)
    ctx->pc = 0x2b13e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 6));
    // 0x2b13ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b13f0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2b13f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2b13f4: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2b13f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2b13f8: 0x3c067900  lui         $a2, 0x7900
    ctx->pc = 0x2b13f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30976 << 16));
    // 0x2b13fc: 0x7683c  dsll32      $t5, $a3, 0
    ctx->pc = 0x2b13fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2b1400: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x2b1400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2b1404: 0x34c77000  ori         $a3, $a2, 0x7000
    ctx->pc = 0x2b1404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28672);
    // 0x2b1408: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x2b1408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x2b140c: 0x34c69000  ori         $a2, $a2, 0x9000
    ctx->pc = 0x2b140cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
    // 0x2b1410: 0x70076389  pcpyld      $t4, $zero, $a3
    ctx->pc = 0x2b1410u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x2b1414: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x2b1414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x2b1418: 0x70063b89  pcpyld      $a3, $zero, $a2
    ctx->pc = 0x2b1418u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x2b141c: 0x460301c3  div.s       $f7, $f0, $f3
    ctx->pc = 0x2b141cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x2b1420: 0x34068700  ori         $a2, $zero, 0x8700
    ctx->pc = 0x2b1420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x2b1424: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2b1424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2b1428: 0x34c97000  ori         $t1, $a2, 0x7000
    ctx->pc = 0x2b1428u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28672);
    // 0x2b142c: 0x12d4825  or          $t1, $t1, $t5
    ctx->pc = 0x2b142cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 13));
    // 0x2b1430: 0x34c69000  ori         $a2, $a2, 0x9000
    ctx->pc = 0x2b1430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
    // 0x2b1434: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x2b1434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x2b1438: 0x70094b89  pcpyld      $t1, $zero, $t1
    ctx->pc = 0x2b1438u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x2b143c: 0x70063389  pcpyld      $a2, $zero, $a2
    ctx->pc = 0x2b143cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x2b1440: 0x460e4082  mul.s       $f2, $f8, $f14
    ctx->pc = 0x2b1440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[14]);
    // 0x2b1444: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2b1444u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1448: 0x46064242  mul.s       $f9, $f8, $f6
    ctx->pc = 0x2b1448u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2b144c: 0x46020941  sub.s       $f5, $f1, $f2
    ctx->pc = 0x2b144cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2b1450: 0x460e6042  mul.s       $f1, $f12, $f14
    ctx->pc = 0x2b1450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x2b1454: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b1454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b1458: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2b1458u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b145c: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x2b145cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b1460: 0x460a6842  mul.s       $f1, $f13, $f10
    ctx->pc = 0x2b1460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x2b1464: 0x46012200  add.s       $f8, $f4, $f1
    ctx->pc = 0x2b1464u;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b1468: 0x460768c2  mul.s       $f3, $f13, $f7
    ctx->pc = 0x2b1468u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
    // 0x2b146c: 0x460a5842  mul.s       $f1, $f11, $f10
    ctx->pc = 0x2b146cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x2b1470: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2b1470u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1474: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x2b1474u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x2b1478: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x2b1478u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b147c: 0x46094041  sub.s       $f1, $f8, $f9
    ctx->pc = 0x2b147cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x2b1480: 0xe4a10030  swc1        $f1, 0x30($a1)
    ctx->pc = 0x2b1480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2b1484: 0x46071040  add.s       $f1, $f2, $f7
    ctx->pc = 0x2b1484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2b1488: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x2b1488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2b148c: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x2b148cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
    // 0x2b1490: 0x46094000  add.s       $f0, $f8, $f9
    ctx->pc = 0x2b1490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x2b1494: 0xfcac0040  sd          $t4, 0x40($a1)
    ctx->pc = 0x2b1494u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 12));
    // 0x2b1498: 0xfcab0048  sd          $t3, 0x48($a1)
    ctx->pc = 0x2b1498u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 11));
    // 0x2b149c: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x2b149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x2b14a0: 0x46032840  add.s       $f1, $f5, $f3
    ctx->pc = 0x2b14a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2b14a4: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x2b14a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x2b14a8: 0x46066182  mul.s       $f6, $f12, $f6
    ctx->pc = 0x2b14a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2b14ac: 0xfca20058  sd          $v0, 0x58($a1)
    ctx->pc = 0x2b14acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 2));
    // 0x2b14b0: 0xfca90060  sd          $t1, 0x60($a1)
    ctx->pc = 0x2b14b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 9));
    // 0x2b14b4: 0xfcab0068  sd          $t3, 0x68($a1)
    ctx->pc = 0x2b14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 11));
    // 0x2b14b8: 0x46032801  sub.s       $f0, $f5, $f3
    ctx->pc = 0x2b14b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2b14bc: 0x460620c1  sub.s       $f3, $f4, $f6
    ctx->pc = 0x2b14bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2b14c0: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x2b14c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x2b14c4: 0xe4a30070  swc1        $f3, 0x70($a1)
    ctx->pc = 0x2b14c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x2b14c8: 0xe4a20074  swc1        $f2, 0x74($a1)
    ctx->pc = 0x2b14c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x2b14cc: 0xfca20078  sd          $v0, 0x78($a1)
    ctx->pc = 0x2b14ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 2));
    // 0x2b14d0: 0x46062040  add.s       $f1, $f4, $f6
    ctx->pc = 0x2b14d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2b14d4: 0xfca70080  sd          $a3, 0x80($a1)
    ctx->pc = 0x2b14d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 128), GPR_U64(ctx, 7));
    // 0x2b14d8: 0xfcab0088  sd          $t3, 0x88($a1)
    ctx->pc = 0x2b14d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 136), GPR_U64(ctx, 11));
    // 0x2b14dc: 0xe4a10090  swc1        $f1, 0x90($a1)
    ctx->pc = 0x2b14dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 144), bits); }
    // 0x2b14e0: 0xe4a00094  swc1        $f0, 0x94($a1)
    ctx->pc = 0x2b14e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
    // 0x2b14e4: 0xfca20098  sd          $v0, 0x98($a1)
    ctx->pc = 0x2b14e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 152), GPR_U64(ctx, 2));
    // 0x2b14e8: 0xfca600a0  sd          $a2, 0xA0($a1)
    ctx->pc = 0x2b14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 160), GPR_U64(ctx, 6));
    // 0x2b14ec: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2B14ECu;
    {
        const bool branch_taken_0x2b14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14ECu;
        // 0x2b14f0: 0xfcab00a8  sd          $t3, 0xA8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 168), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14ec) {
            ctx->pc = 0x2B16F0u;
            goto label_2b16f0;
        }
    }
    ctx->pc = 0x2B14F4u;
    // 0x2b14f4: 0x0  nop
    ctx->pc = 0x2b14f4u;
    // NOP
label_2b14f8:
    // 0x2b14f8: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x2b14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x2b14fc: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2b14fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2b1500: 0x3c0b3a80  lui         $t3, 0x3A80
    ctx->pc = 0x2b1500u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)14976 << 16));
    // 0x2b1504: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2b1504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2b1508: 0x3c0a3b00  lui         $t2, 0x3B00
    ctx->pc = 0x2b1508u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15104 << 16));
    // 0x2b150c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1510: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x2b1510u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x2b1514: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2b1514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b1518: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2b1518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2b151c: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x2b151cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x2b1520: 0x460a6942  mul.s       $f5, $f13, $f10
    ctx->pc = 0x2b1520u;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x2b1524: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b1524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1528: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2b1528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b152c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b152cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1530: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b1534: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x2b1534u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x2b1538: 0x93a7003d  lbu         $a3, 0x3D($sp)
    ctx->pc = 0x2b1538u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x2b153c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1540: 0x93a6003e  lbu         $a2, 0x3E($sp)
    ctx->pc = 0x2b1540u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x2b1544: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1548: 0x93a8003c  lbu         $t0, 0x3C($sp)
    ctx->pc = 0x2b1548u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b154c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2b154cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1550: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b1550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b1554: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2b1554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b1558: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b1558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2b155c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x2b155cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2b1560: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2b1560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b1564: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x2b1564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x2b1568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b156c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2b156cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2b1570: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2b1570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2b1574: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2b1574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2b1578: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2b1578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2b157c: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x2b157cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x2b1580: 0x448b2000  mtc1        $t3, $f4
    ctx->pc = 0x2b1580u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b1584: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x2b1584u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x2b1588: 0x460e6082  mul.s       $f2, $f12, $f14
    ctx->pc = 0x2b1588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x2b158c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b1590: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b1590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1594: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2b1594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b1598: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x2b159c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2b159cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b15a0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x2b15a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x2b15a4: 0x483825  or          $a3, $v0, $t0
    ctx->pc = 0x2b15a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2b15a8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2b15a8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15ac: 0x3c023f60  lui         $v0, 0x3F60
    ctx->pc = 0x2b15acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16224 << 16));
    // 0x2b15b0: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2b15b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2b15b4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x2b15b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2b15b8: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x2b15b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x2b15bc: 0x70073b89  pcpyld      $a3, $zero, $a3
    ctx->pc = 0x2b15bcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x2b15c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b15c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2b15c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b15c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b15c8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x2b15c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x2b15cc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2b15ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2b15d0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x2b15d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2b15d4: 0xe4a40030  swc1        $f4, 0x30($a1)
    ctx->pc = 0x2b15d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2b15d8: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x2b15d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2b15dc: 0xfca90038  sd          $t1, 0x38($a1)
    ctx->pc = 0x2b15dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 9));
    // 0x2b15e0: 0x460a58c2  mul.s       $f3, $f11, $f10
    ctx->pc = 0x2b15e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x2b15e4: 0xfca70040  sd          $a3, 0x40($a1)
    ctx->pc = 0x2b15e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 7));
    // 0x2b15e8: 0xfca60048  sd          $a2, 0x48($a1)
    ctx->pc = 0x2b15e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 6));
    // 0x2b15ec: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2b15ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b15f0: 0x460e4042  mul.s       $f1, $f8, $f14
    ctx->pc = 0x2b15f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[14]);
    // 0x2b15f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b15f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15f8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2b15f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2b15fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b15fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b1600: 0xe4a20050  swc1        $f2, 0x50($a1)
    ctx->pc = 0x2b1600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x2b1604: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x2b1604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x2b1608: 0xfca90058  sd          $t1, 0x58($a1)
    ctx->pc = 0x2b1608u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 9));
    // 0x2b160c: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x2b160cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
    // 0x2b1610: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2B1610u;
    {
        const bool branch_taken_0x2b1610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1610u;
        // 0x2b1614: 0xfca60068  sd          $a2, 0x68($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1610) {
            ctx->pc = 0x2B16F0u;
            goto label_2b16f0;
        }
    }
    ctx->pc = 0x2B1618u;
label_2b1618:
    // 0x2b1618: 0x24030356  addiu       $v1, $zero, 0x356
    ctx->pc = 0x2b1618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x2b161c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2b161cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2b1620: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x2b1620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2b1624: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x2b1624u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x2b1628: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2b1628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b162c: 0xfca00010  sd          $zero, 0x10($a1)
    ctx->pc = 0x2b162cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x2b1630: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2b1630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1634: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2b1634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1638: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2b1638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b163c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x2b163cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x2b1640: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2b1640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b1644: 0x93aa003d  lbu         $t2, 0x3D($sp)
    ctx->pc = 0x2b1644u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x2b1648: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2b1648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b164c: 0x93ab003c  lbu         $t3, 0x3C($sp)
    ctx->pc = 0x2b164cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b1650: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x2b1650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1654: 0x93a9003e  lbu         $t1, 0x3E($sp)
    ctx->pc = 0x2b1654u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x2b1658: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2b1658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b165c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2b165cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b1660: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b1660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b1664: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2b1664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2b1668: 0x864025  or          $t0, $a0, $a2
    ctx->pc = 0x2b1668u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2b166c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2b166cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2b1670: 0xa2238  dsll        $a0, $t2, 8
    ctx->pc = 0x2b1670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << 8);
    // 0x2b1674: 0x34670008  ori         $a3, $v1, 0x8
    ctx->pc = 0x2b1674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2b1678: 0x1645025  or          $t2, $t3, $a0
    ctx->pc = 0x2b1678u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x2b167c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b167cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b1680: 0x92438  dsll        $a0, $t1, 16
    ctx->pc = 0x2b1680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << 16);
    // 0x2b1684: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b1684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b1688: 0x8a4825  or          $t1, $a0, $t2
    ctx->pc = 0x2b1688u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x2b168c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b168cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1690: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2b1690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b1694: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x2b1694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2b1698: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x2b1698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x2b169c: 0xfca80020  sd          $t0, 0x20($a1)
    ctx->pc = 0x2b169cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 8));
    // 0x2b16a0: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x2b16a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x2b16a4: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x2b16a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x2b16a8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2b16a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b16ac: 0xfca70030  sd          $a3, 0x30($a1)
    ctx->pc = 0x2b16acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 7));
    // 0x2b16b0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x2b16b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2b16b4: 0xfca60038  sd          $a2, 0x38($a1)
    ctx->pc = 0x2b16b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 6));
    // 0x2b16b8: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x2b16b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x2b16bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b16c0: 0x3c020e08  lui         $v0, 0xE08
    ctx->pc = 0x2b16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3592 << 16));
    // 0x2b16c4: 0xfca30048  sd          $v1, 0x48($a1)
    ctx->pc = 0x2b16c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 3));
    // 0x2b16c8: 0x34422008  ori         $v0, $v0, 0x2008
    ctx->pc = 0x2b16c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8200);
    // 0x2b16cc: 0xfca20050  sd          $v0, 0x50($a1)
    ctx->pc = 0x2b16ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    // 0x2b16d0: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x2b16d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x2b16d4: 0xfca60058  sd          $a2, 0x58($a1)
    ctx->pc = 0x2b16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 6));
    // 0x2b16d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b16d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2b16dc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x2b16dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x2b16e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b16e4: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x2b16e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2b16e8: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x2b16e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
    // 0x2b16ec: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x2b16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
label_2b16f0:
    // 0x2b16f0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2b16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2b16f4: 0x344300c0  ori         $v1, $v0, 0xC0
    ctx->pc = 0x2b16f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2b16f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b16f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b16fc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2b16fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2b1700: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2b1704: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2b1704u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2b1708: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2b1708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2b170c: 0x8c29f014  lw          $t1, -0xFEC($at)
    ctx->pc = 0x2b170cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F014u));
    // 0x2b1710: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b1710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b1714: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2b1714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2b1718: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b1718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b171c: 0x3466020b  ori         $a2, $v1, 0x20B
    ctx->pc = 0x2b171cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)523);
    // 0x2b1720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b1720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b1724: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2b1724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b1728: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x2b1728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b172c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2b172cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2b1730: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x2b1730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2b1734: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2b1734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b1738: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b1738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b173c: 0xdd290040  ld          $t1, 0x40($t1)
    ctx->pc = 0x2b173cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x2b1740: 0xfe090010  sd          $t1, 0x10($s0)
    ctx->pc = 0x2b1740u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 9));
    // 0x2b1744: 0xfe080018  sd          $t0, 0x18($s0)
    ctx->pc = 0x2b1744u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 8));
    // 0x2b1748: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x2b1748u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x2b174c: 0xfe070028  sd          $a3, 0x28($s0)
    ctx->pc = 0x2b174cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 7));
    // 0x2b1750: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x2b1750u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x2b1754: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x2b1754u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x2b1758: 0xfe040040  sd          $a0, 0x40($s0)
    ctx->pc = 0x2b1758u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 4));
    // 0x2b175c: 0xfe030048  sd          $v1, 0x48($s0)
    ctx->pc = 0x2b175cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 3));
    // 0x2b1760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b1760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1764: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2b1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b1768: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b1768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b176c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2b176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b1770: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2b1770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b1774: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b1774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b1778: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1778u;
        // 0x2b177c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1780u;
}
