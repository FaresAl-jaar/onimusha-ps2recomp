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

// Function: sub_003F1040
// Address: 0x3f1040 - 0x3f11f0
void sub_003F1040_0x3f1040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1040_0x3f1040");
#endif

    switch (ctx->pc) {
        case 0x3f1040u: goto label_3f1040;
        case 0x3f1044u: goto label_3f1044;
        case 0x3f1048u: goto label_3f1048;
        case 0x3f104cu: goto label_3f104c;
        case 0x3f1050u: goto label_3f1050;
        case 0x3f1054u: goto label_3f1054;
        case 0x3f1058u: goto label_3f1058;
        case 0x3f105cu: goto label_3f105c;
        case 0x3f1060u: goto label_3f1060;
        case 0x3f1064u: goto label_3f1064;
        case 0x3f1068u: goto label_3f1068;
        case 0x3f106cu: goto label_3f106c;
        case 0x3f1070u: goto label_3f1070;
        case 0x3f1074u: goto label_3f1074;
        case 0x3f1078u: goto label_3f1078;
        case 0x3f107cu: goto label_3f107c;
        case 0x3f1080u: goto label_3f1080;
        case 0x3f1084u: goto label_3f1084;
        case 0x3f1088u: goto label_3f1088;
        case 0x3f108cu: goto label_3f108c;
        case 0x3f1090u: goto label_3f1090;
        case 0x3f1094u: goto label_3f1094;
        case 0x3f1098u: goto label_3f1098;
        case 0x3f109cu: goto label_3f109c;
        case 0x3f10a0u: goto label_3f10a0;
        case 0x3f10a4u: goto label_3f10a4;
        case 0x3f10a8u: goto label_3f10a8;
        case 0x3f10acu: goto label_3f10ac;
        case 0x3f10b0u: goto label_3f10b0;
        case 0x3f10b4u: goto label_3f10b4;
        case 0x3f10b8u: goto label_3f10b8;
        case 0x3f10bcu: goto label_3f10bc;
        case 0x3f10c0u: goto label_3f10c0;
        case 0x3f10c4u: goto label_3f10c4;
        case 0x3f10c8u: goto label_3f10c8;
        case 0x3f10ccu: goto label_3f10cc;
        case 0x3f10d0u: goto label_3f10d0;
        case 0x3f10d4u: goto label_3f10d4;
        case 0x3f10d8u: goto label_3f10d8;
        case 0x3f10dcu: goto label_3f10dc;
        case 0x3f10e0u: goto label_3f10e0;
        case 0x3f10e4u: goto label_3f10e4;
        case 0x3f10e8u: goto label_3f10e8;
        case 0x3f10ecu: goto label_3f10ec;
        case 0x3f10f0u: goto label_3f10f0;
        case 0x3f10f4u: goto label_3f10f4;
        case 0x3f10f8u: goto label_3f10f8;
        case 0x3f10fcu: goto label_3f10fc;
        case 0x3f1100u: goto label_3f1100;
        case 0x3f1104u: goto label_3f1104;
        case 0x3f1108u: goto label_3f1108;
        case 0x3f110cu: goto label_3f110c;
        case 0x3f1110u: goto label_3f1110;
        case 0x3f1114u: goto label_3f1114;
        case 0x3f1118u: goto label_3f1118;
        case 0x3f111cu: goto label_3f111c;
        case 0x3f1120u: goto label_3f1120;
        case 0x3f1124u: goto label_3f1124;
        case 0x3f1128u: goto label_3f1128;
        case 0x3f112cu: goto label_3f112c;
        case 0x3f1130u: goto label_3f1130;
        case 0x3f1134u: goto label_3f1134;
        case 0x3f1138u: goto label_3f1138;
        case 0x3f113cu: goto label_3f113c;
        case 0x3f1140u: goto label_3f1140;
        case 0x3f1144u: goto label_3f1144;
        case 0x3f1148u: goto label_3f1148;
        case 0x3f114cu: goto label_3f114c;
        case 0x3f1150u: goto label_3f1150;
        case 0x3f1154u: goto label_3f1154;
        case 0x3f1158u: goto label_3f1158;
        case 0x3f115cu: goto label_3f115c;
        case 0x3f1160u: goto label_3f1160;
        case 0x3f1164u: goto label_3f1164;
        case 0x3f1168u: goto label_3f1168;
        case 0x3f116cu: goto label_3f116c;
        case 0x3f1170u: goto label_3f1170;
        case 0x3f1174u: goto label_3f1174;
        case 0x3f1178u: goto label_3f1178;
        case 0x3f117cu: goto label_3f117c;
        case 0x3f1180u: goto label_3f1180;
        case 0x3f1184u: goto label_3f1184;
        case 0x3f1188u: goto label_3f1188;
        case 0x3f118cu: goto label_3f118c;
        case 0x3f1190u: goto label_3f1190;
        case 0x3f1194u: goto label_3f1194;
        case 0x3f1198u: goto label_3f1198;
        case 0x3f119cu: goto label_3f119c;
        case 0x3f11a0u: goto label_3f11a0;
        case 0x3f11a4u: goto label_3f11a4;
        case 0x3f11a8u: goto label_3f11a8;
        case 0x3f11acu: goto label_3f11ac;
        case 0x3f11b0u: goto label_3f11b0;
        case 0x3f11b4u: goto label_3f11b4;
        case 0x3f11b8u: goto label_3f11b8;
        case 0x3f11bcu: goto label_3f11bc;
        case 0x3f11c0u: goto label_3f11c0;
        case 0x3f11c4u: goto label_3f11c4;
        case 0x3f11c8u: goto label_3f11c8;
        case 0x3f11ccu: goto label_3f11cc;
        case 0x3f11d0u: goto label_3f11d0;
        case 0x3f11d4u: goto label_3f11d4;
        case 0x3f11d8u: goto label_3f11d8;
        case 0x3f11dcu: goto label_3f11dc;
        case 0x3f11e0u: goto label_3f11e0;
        case 0x3f11e4u: goto label_3f11e4;
        case 0x3f11e8u: goto label_3f11e8;
        case 0x3f11ecu: goto label_3f11ec;
        default: break;
    }

    ctx->pc = 0x3f1040u;

label_3f1040:
    // 0x3f1040: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f1040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3f1044:
    // 0x3f1044: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f1044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f1048:
    // 0x3f1048: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3f1048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f104c:
    // 0x3f104c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f104cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f1050:
    // 0x3f1050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f1054:
    // 0x3f1054: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f1054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f1058:
    // 0x3f1058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f105c:
    // 0x3f105c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3f105cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f1060:
    // 0x3f1060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f1064:
    // 0x3f1064: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3f1064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3f1068:
    // 0x3f1068: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f1068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f106c:
    // 0x3f106c: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x3f106cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3f1070:
    // 0x3f1070: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f1070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f1074:
    // 0x3f1074: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f1074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f1078:
    // 0x3f1078: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f1078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f107c:
    // 0x3f107c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3f107cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3f1080:
    // 0x3f1080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1084:
    // 0x3f1084: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f1084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f1088:
    // 0x3f1088: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f1088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f108c:
    // 0x3f108c: 0xc0a4408  jal         func_291020
label_3f1090:
    if (ctx->pc == 0x3F1090u) {
        ctx->pc = 0x3F1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F108Cu;
        // 0x3f1090: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1094u;
        goto label_3f1094;
    }
    ctx->pc = 0x3F108Cu;
    SET_GPR_U32(ctx, 31, 0x3F1094u);
    ctx->pc = 0x3F1090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F108Cu;
    // 0x3f1090: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3F108Cu, 0x3F1094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1094u;
label_3f1094:
    // 0x3f1094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1098:
    // 0x3f1098: 0xc0a43fc  jal         func_290FF0
label_3f109c:
    if (ctx->pc == 0x3F109Cu) {
        ctx->pc = 0x3F109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1098u;
        // 0x3f109c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F10A0u;
        goto label_3f10a0;
    }
    ctx->pc = 0x3F1098u;
    SET_GPR_U32(ctx, 31, 0x3F10A0u);
    ctx->pc = 0x3F109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1098u;
    // 0x3f109c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3F1098u, 0x3F10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F10A0u;
label_3f10a0:
    // 0x3f10a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f10a4:
    // 0x3f10a4: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3f10a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3f10a8:
    // 0x3f10a8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f10a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f10ac:
    // 0x3f10ac: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3f10acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3f10b0:
    // 0x3f10b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f10b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f10b4:
    // 0x3f10b4: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3f10b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f10b8:
    // 0x3f10b8: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3f10b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3f10bc:
    // 0x3f10bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f10bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f10c0:
    // 0x3f10c0: 0xc0510e0  jal         func_144380
label_3f10c4:
    if (ctx->pc == 0x3F10C4u) {
        ctx->pc = 0x3F10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F10C0u;
        // 0x3f10c4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F10C8u;
        goto label_3f10c8;
    }
    ctx->pc = 0x3F10C0u;
    SET_GPR_U32(ctx, 31, 0x3F10C8u);
    ctx->pc = 0x3F10C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F10C0u;
    // 0x3f10c4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3F10C0u, 0x3F10C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F10C8u;
label_3f10c8:
    // 0x3f10c8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3f10c8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f10cc:
    // 0x3f10cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f10ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f10d0:
    // 0x3f10d0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3f10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3f10d4:
    // 0x3f10d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f10d8:
    // 0x3f10d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3f10d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f10dc:
    // 0x3f10dc: 0x2405021e  addiu       $a1, $zero, 0x21E
    ctx->pc = 0x3f10dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
label_3f10e0:
    // 0x3f10e0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3f10e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f10e4:
    // 0x3f10e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f10e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f10e8:
    // 0x3f10e8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f10ec:
    // 0x3f10ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f10ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3f10f0:
    // 0x3f10f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f10f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f10f4:
    // 0x3f10f4: 0x0  nop
    ctx->pc = 0x3f10f4u;
    // NOP
label_3f10f8:
    // 0x3f10f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f10f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3f10fc:
    // 0x3f10fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f10fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f1100:
    // 0x3f1100: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f1100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f1104:
    // 0x3f1104: 0x0  nop
    ctx->pc = 0x3f1104u;
    // NOP
label_3f1108:
    // 0x3f1108: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f1108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f110c:
    // 0x3f110c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f110cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f1110:
    // 0x3f1110: 0xc0d0484  jal         func_341210
label_3f1114:
    if (ctx->pc == 0x3F1114u) {
        ctx->pc = 0x3F1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1110u;
        // 0x3f1114: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1118u;
        goto label_3f1118;
    }
    ctx->pc = 0x3F1110u;
    SET_GPR_U32(ctx, 31, 0x3F1118u);
    ctx->pc = 0x3F1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1110u;
    // 0x3f1114: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F1110u, 0x3F1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1118u;
label_3f1118:
    // 0x3f1118: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3f1118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3f111c:
    // 0x3f111c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f111cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f1120:
    // 0x3f1120: 0x320f809  jalr        $t9
label_3f1124:
    if (ctx->pc == 0x3F1124u) {
        ctx->pc = 0x3F1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1120u;
        // 0x3f1124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1128u;
        goto label_3f1128;
    }
    ctx->pc = 0x3F1120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1128u);
        ctx->pc = 0x3F1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1120u;
        // 0x3f1124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1120u, 0x3F1128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1128u;
label_3f1128:
    // 0x3f1128: 0xc0d0494  jal         func_341250
label_3f112c:
    if (ctx->pc == 0x3F112Cu) {
        ctx->pc = 0x3F112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1128u;
        // 0x3f112c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1130u;
        goto label_3f1130;
    }
    ctx->pc = 0x3F1128u;
    SET_GPR_U32(ctx, 31, 0x3F1130u);
    ctx->pc = 0x3F112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1128u;
    // 0x3f112c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x3F1128u, 0x3F1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1130u;
label_3f1130:
    // 0x3f1130: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3f1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_3f1134:
    // 0x3f1134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1138:
    // 0x3f1138: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3f1138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_3f113c:
    // 0x3f113c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3f113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f1140:
    // 0x3f1140: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3f1140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3f1144:
    // 0x3f1144: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3f1144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3f1148:
    // 0x3f1148: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3f1148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3f114c:
    // 0x3f114c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3f114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3f1150:
    // 0x3f1150: 0xc0d04e4  jal         func_341390
label_3f1154:
    if (ctx->pc == 0x3F1154u) {
        ctx->pc = 0x3F1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1150u;
        // 0x3f1154: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1158u;
        goto label_3f1158;
    }
    ctx->pc = 0x3F1150u;
    SET_GPR_U32(ctx, 31, 0x3F1158u);
    ctx->pc = 0x3F1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1150u;
    // 0x3f1154: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x3F1150u, 0x3F1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1158u;
label_3f1158:
    // 0x3f1158: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x3f1158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_3f115c:
    // 0x3f115c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f115cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1160:
    // 0x3f1160: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3f1160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f1164:
    // 0x3f1164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f1164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1168:
    // 0x3f1168: 0xc09ae2c  jal         func_26B8B0
label_3f116c:
    if (ctx->pc == 0x3F116Cu) {
        ctx->pc = 0x3F116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1168u;
        // 0x3f116c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1170u;
        goto label_3f1170;
    }
    ctx->pc = 0x3F1168u;
    SET_GPR_U32(ctx, 31, 0x3F1170u);
    ctx->pc = 0x3F116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1168u;
    // 0x3f116c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x3F1168u, 0x3F1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1170u;
label_3f1170:
    // 0x3f1170: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x3f1170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
label_3f1174:
    // 0x3f1174: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x3f1174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3f1178:
    // 0x3f1178: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f1178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_3f117c:
    // 0x3f117c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f117cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3f1180:
    // 0x3f1180: 0xa6022ad0  sh          $v0, 0x2AD0($s0)
    ctx->pc = 0x3f1180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10960), (uint16_t)GPR_U32(ctx, 2));
label_3f1184:
    // 0x3f1184: 0xc0d0a58  jal         func_342960
label_3f1188:
    if (ctx->pc == 0x3F1188u) {
        ctx->pc = 0x3F1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1184u;
        // 0x3f1188: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F118Cu;
        goto label_3f118c;
    }
    ctx->pc = 0x3F1184u;
    SET_GPR_U32(ctx, 31, 0x3F118Cu);
    ctx->pc = 0x3F1188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1184u;
    // 0x3f1188: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342960u, 0x3F1184u, 0x3F118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F118Cu;
label_3f118c:
    // 0x3f118c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1190:
    // 0x3f1190: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3f1190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3f1194:
    // 0x3f1194: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f1194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f1198:
    // 0x3f1198: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3f1198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3f119c:
    // 0x3f119c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x3f119cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_3f11a0:
    // 0x3f11a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f11a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f11a4:
    // 0x3f11a4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3f11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3f11a8:
    // 0x3f11a8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3f11a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f11ac:
    // 0x3f11ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3f11acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3f11b0:
    // 0x3f11b0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x3f11b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3f11b4:
    // 0x3f11b4: 0xc0d071c  jal         func_341C70
label_3f11b8:
    if (ctx->pc == 0x3F11B8u) {
        ctx->pc = 0x3F11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11B4u;
        // 0x3f11b8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F11BCu;
        goto label_3f11bc;
    }
    ctx->pc = 0x3F11B4u;
    SET_GPR_U32(ctx, 31, 0x3F11BCu);
    ctx->pc = 0x3F11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F11B4u;
    // 0x3f11b8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C70u, 0x3F11B4u, 0x3F11BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F11BCu;
label_3f11bc:
    // 0x3f11bc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3f11bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3f11c0:
    // 0x3f11c0: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x3f11c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
label_3f11c4:
    // 0x3f11c4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3f11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_3f11c8:
    // 0x3f11c8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f11c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3f11cc:
    // 0x3f11cc: 0xc0e3668  jal         func_38D9A0
label_3f11d0:
    if (ctx->pc == 0x3F11D0u) {
        ctx->pc = 0x3F11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11CCu;
        // 0x3f11d0: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F11D4u;
        goto label_3f11d4;
    }
    ctx->pc = 0x3F11CCu;
    SET_GPR_U32(ctx, 31, 0x3F11D4u);
    ctx->pc = 0x3F11D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F11CCu;
    // 0x3f11d0: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x3F11CCu, 0x3F11D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F11D4u;
label_3f11d4:
    // 0x3f11d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f11d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f11d8:
    // 0x3f11d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f11d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f11dc:
    // 0x3f11dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f11dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f11e0:
    // 0x3f11e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f11e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f11e4:
    // 0x3f11e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f11e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f11e8:
    // 0x3f11e8: 0x3e00008  jr          $ra
label_3f11ec:
    if (ctx->pc == 0x3F11ECu) {
        ctx->pc = 0x3F11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11E8u;
        // 0x3f11ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F11F0u;
        goto label_fallthrough_0x3f11e8;
    }
    ctx->pc = 0x3F11E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11E8u;
        // 0x3f11ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F11E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f11e8:
    ctx->pc = 0x3F11F0u;
}
