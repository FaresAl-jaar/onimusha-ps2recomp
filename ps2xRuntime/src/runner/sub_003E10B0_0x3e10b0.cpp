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

// Function: sub_003E10B0
// Address: 0x3e10b0 - 0x3e1264
void sub_003E10B0_0x3e10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E10B0_0x3e10b0");
#endif

    switch (ctx->pc) {
        case 0x3e11d8u: goto label_3e11d8;
        case 0x3e11ecu: goto label_3e11ec;
        case 0x3e1214u: goto label_3e1214;
        case 0x3e123cu: goto label_3e123c;
        case 0x3e1254u: goto label_3e1254;
        default: break;
    }

    ctx->pc = 0x3e10b0u;

    // 0x3e10b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e10b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e10b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e10b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e10bc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3e10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3e10c0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3e10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3e10c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e10c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e10c8: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x3E10C8u;
    {
        const bool branch_taken_0x3e10c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10C8u;
        // 0x3e10cc: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10c8) {
            ctx->pc = 0x3E1258u;
            goto label_3e1258;
        }
    }
    ctx->pc = 0x3E10D0u;
    // 0x3e10d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e10d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e10d4: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x3E10D4u;
    {
        const bool branch_taken_0x3e10d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e10d4) {
            ctx->pc = 0x3E1258u;
            goto label_3e1258;
        }
    }
    ctx->pc = 0x3E10DCu;
    // 0x3e10dc: 0x8f858cf4  lw          $a1, -0x730C($gp)
    ctx->pc = 0x3e10dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e10e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e10e4: 0x80a30390  lb          $v1, 0x390($a1)
    ctx->pc = 0x3e10e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x3e10e8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E10E8u;
    {
        const bool branch_taken_0x3e10e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e10e8) {
            ctx->pc = 0x3E1100u;
            goto label_3e1100;
        }
    }
    ctx->pc = 0x3E10F0u;
    // 0x3e10f0: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x3E10F0u;
    {
        const bool branch_taken_0x3e10f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e10f0) {
            ctx->pc = 0x3E1258u;
            goto label_3e1258;
        }
    }
    ctx->pc = 0x3E10F8u;
    // 0x3e10f8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3E10F8u;
    {
        const bool branch_taken_0x3e10f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e10f8) {
            ctx->pc = 0x3E1258u;
            goto label_3e1258;
        }
    }
    ctx->pc = 0x3E1100u;
label_3e1100:
    // 0x3e1100: 0x80a30391  lb          $v1, 0x391($a1)
    ctx->pc = 0x3e1100u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 913)));
    // 0x3e1104: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1104u;
    {
        const bool branch_taken_0x3e1104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3E1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1104u;
        // 0x3e1108: 0x24a60391  addiu       $a2, $a1, 0x391 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 913));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1104) {
            ctx->pc = 0x3E1128u;
            goto label_3e1128;
        }
    }
    ctx->pc = 0x3E110Cu;
    // 0x3e110c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E110Cu;
    {
        const bool branch_taken_0x3e110c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e110c) {
            ctx->pc = 0x3E1120u;
            goto label_3e1120;
        }
    }
    ctx->pc = 0x3E1114u;
    // 0x3e1114: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3E1114u;
    {
        const bool branch_taken_0x3e1114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1114) {
            ctx->pc = 0x3E1258u;
            goto label_3e1258;
        }
    }
    ctx->pc = 0x3E111Cu;
    // 0x3e111c: 0x0  nop
    ctx->pc = 0x3e111cu;
    // NOP
label_3e1120:
    // 0x3e1120: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3e1120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e1124: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e1124u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e1128:
    // 0x3e1128: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3e1128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3e112c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1130: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e1130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e1134: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3e1134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e1138: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e1138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e113c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e113cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1140: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e1140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3e1144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1148: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e1148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e114c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e114cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1150: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1154: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1154u;
    {
        const bool branch_taken_0x3e1154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1154) {
            ctx->pc = 0x3E116Cu;
            goto label_3e116c;
        }
    }
    ctx->pc = 0x3E115Cu;
    // 0x3e115c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e115cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1160: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e1164: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1164u;
    {
        const bool branch_taken_0x3e1164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1164) {
            ctx->pc = 0x3E1184u;
            goto label_3e1184;
        }
    }
    ctx->pc = 0x3E116Cu;
label_3e116c:
    // 0x3e116c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e116cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e1170: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e1170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e1174: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1178: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e117c: 0x0  nop
    ctx->pc = 0x3e117cu;
    // NOP
    // 0x3e1180: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3e1180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3e1184:
    // 0x3e1184: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1184u;
    {
        const bool branch_taken_0x3e1184 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3E1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1184u;
        // 0x3e1188: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1184) {
            ctx->pc = 0x3E1198u;
            goto label_3e1198;
        }
    }
    ctx->pc = 0x3E118Cu;
    // 0x3e118c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e118cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1190u;
    {
        const bool branch_taken_0x3e1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1190u;
        // 0x3e1194: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1190) {
            ctx->pc = 0x3E11B0u;
            goto label_3e11b0;
        }
    }
    ctx->pc = 0x3E1198u;
label_3e1198:
    // 0x3e1198: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3e1198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e119c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e119cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e11a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e11a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e11a4: 0x0  nop
    ctx->pc = 0x3e11a4u;
    // NOP
    // 0x3e11a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e11a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e11ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e11acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e11b0:
    // 0x3e11b0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x3e11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x3e11b4: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x3e11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e11b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3e11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3e11bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e11bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e11c0: 0x0  nop
    ctx->pc = 0x3e11c0u;
    // NOP
    // 0x3e11c4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3e11c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e11c8: 0x0  nop
    ctx->pc = 0x3e11c8u;
    // NOP
    // 0x3e11cc: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3e11ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e11d0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E11D0u;
    SET_GPR_U32(ctx, 31, 0x3E11D8u);
    ctx->pc = 0x3E11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E11D0u;
    // 0x3e11d4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E11D0u, 0x3E11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E11D8u;
label_3e11d8:
    // 0x3e11d8: 0x8f848cf4  lw          $a0, -0x730C($gp)
    ctx->pc = 0x3e11d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e11dc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3e11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e11e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3e11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e11e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E11E4u;
    {
        const bool branch_taken_0x3e11e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11E4u;
        // 0x3e11e8: 0xe4800398  swc1        $f0, 0x398($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e11e4) {
            ctx->pc = 0x3E1208u;
            goto label_3e1208;
        }
    }
    ctx->pc = 0x3E11ECu;
label_3e11ec:
    // 0x3e11ec: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e11ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e11f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e11f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e11f8: 0x0  nop
    ctx->pc = 0x3e11f8u;
    // NOP
    // 0x3e11fc: 0x0  nop
    ctx->pc = 0x3e11fcu;
    // NOP
    // 0x3e1200: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E1200u;
    {
        const bool branch_taken_0x3e1200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1200) {
            ctx->pc = 0x3E11ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e11ec;
        }
    }
    ctx->pc = 0x3E1208u;
label_3e1208:
    // 0x3e1208: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x3e1208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e120c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3E120Cu;
    SET_GPR_U32(ctx, 31, 0x3E1214u);
    ctx->pc = 0x3E1210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E120Cu;
    // 0x3e1210: 0xc44c0398  lwc1        $f12, 0x398($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3E120Cu, 0x3E1214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1214u;
label_3e1214:
    // 0x3e1214: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e1214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3e1218: 0x8f838cf4  lw          $v1, -0x730C($gp)
    ctx->pc = 0x3e1218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e121c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e121cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1220: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3e1220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e1224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e1224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1228: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3e1228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3e122c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3e122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3e1230: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e1230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e1234: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3E1234u;
    SET_GPR_U32(ctx, 31, 0x3E123Cu);
    ctx->pc = 0x3E1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1234u;
    // 0x3e1238: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3E1234u, 0x3E123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E123Cu;
label_3e123c:
    // 0x3e123c: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x3e123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e1240: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3e1240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e1244: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e1244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1248: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e1248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e124c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3E124Cu;
    SET_GPR_U32(ctx, 31, 0x3E1254u);
    ctx->pc = 0x3E1250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E124Cu;
    // 0x3e1250: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3E124Cu, 0x3E1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1254u;
label_3e1254:
    // 0x3e1254: 0x0  nop
    ctx->pc = 0x3e1254u;
    // NOP
label_3e1258:
    // 0x3e1258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e125c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E125Cu;
        // 0x3e1260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E125Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1264u;
}
