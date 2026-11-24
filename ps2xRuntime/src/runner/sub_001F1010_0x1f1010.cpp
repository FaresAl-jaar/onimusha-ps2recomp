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

// Function: sub_001F1010
// Address: 0x1f1010 - 0x1f1284
void sub_001F1010_0x1f1010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1010_0x1f1010");
#endif

    switch (ctx->pc) {
        case 0x1f1040u: goto label_1f1040;
        case 0x1f10c8u: goto label_1f10c8;
        case 0x1f113cu: goto label_1f113c;
        case 0x1f1170u: goto label_1f1170;
        case 0x1f11b8u: goto label_1f11b8;
        case 0x1f1220u: goto label_1f1220;
        case 0x1f1244u: goto label_1f1244;
        default: break;
    }

    ctx->pc = 0x1f1010u;

    // 0x1f1010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f1014: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f1014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f1018: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f1018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1f101c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f1020: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f1020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1024: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f1024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f1028: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f1028u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f102c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f1030: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f1034: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1f1034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1038: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1f1038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f103c: 0x0  nop
    ctx->pc = 0x1f103cu;
    // NOP
label_1f1040:
    // 0x1f1040: 0x92230700  lbu         $v1, 0x700($s1)
    ctx->pc = 0x1f1040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x1f1044: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1F1044u;
    {
        const bool branch_taken_0x1f1044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1044) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F104Cu;
    // 0x1f104c: 0x96230730  lhu         $v1, 0x730($s1)
    ctx->pc = 0x1f104cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1840)));
    // 0x1f1050: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1f1050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1f1054: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1F1054u;
    {
        const bool branch_taken_0x1f1054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1054u;
        // 0x1f1058: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1054) {
            ctx->pc = 0x1F1228u;
            goto label_1f1228;
        }
    }
    ctx->pc = 0x1F105Cu;
    // 0x1f105c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f105cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1060: 0x8c24a300  lw          $a0, -0x5D00($at)
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943488)));
    // 0x1f1064: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1F1064u;
    {
        const bool branch_taken_0x1f1064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1064) {
            ctx->pc = 0x1F11B0u;
            goto label_1f11b0;
        }
    }
    ctx->pc = 0x1F106Cu;
    // 0x1f106c: 0x862507c2  lh          $a1, 0x7C2($s1)
    ctx->pc = 0x1f106cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1986)));
    // 0x1f1070: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1f1070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1f1074: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f1074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f1078: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1f1078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x1f107c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f107cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1080: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1f1080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1084: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f1084u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1f1088: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f1088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f108c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f108cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1090: 0x9427a3d6  lhu         $a3, -0x5C2A($at)
    ctx->pc = 0x1f1090u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f1094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1098: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f1098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f109c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1f109cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f10a0: 0x0  nop
    ctx->pc = 0x1f10a0u;
    // NOP
    // 0x1f10a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f10a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1f10a8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1f10a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1f10ac: 0xc2900a  movz        $s2, $a2, $v0
    ctx->pc = 0x1f10acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
    // 0x1f10b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f10b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f10b4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1f10b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f10b8: 0x0  nop
    ctx->pc = 0x1f10b8u;
    // NOP
    // 0x1f10bc: 0x0  nop
    ctx->pc = 0x1f10bcu;
    // NOP
    // 0x1f10c0: 0xc096784  jal         func_259E10
    ctx->pc = 0x1F10C0u;
    SET_GPR_U32(ctx, 31, 0x1F10C8u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x1F10C0u, 0x1F10C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10C8u;
label_1f10c8:
    // 0x1f10c8: 0x7a220720  lq          $v0, 0x720($s1)
    ctx->pc = 0x1f10c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1824)));
    // 0x1f10cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f10ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f10d0: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f10d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1f10d4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1f10d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1f10d8: 0x8c22a3c8  lw          $v0, -0x5C38($at)
    ctx->pc = 0x1f10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
    // 0x1f10dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F10DCu;
    {
        const bool branch_taken_0x1f10dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10DCu;
        // 0x1f10e0: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10dc) {
            ctx->pc = 0x1F1140u;
            goto label_1f1140;
        }
    }
    ctx->pc = 0x1F10E4u;
    // 0x1f10e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f10e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f10e8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f10e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f10ec: 0x8023a3a0  lb          $v1, -0x5C60($at)
    ctx->pc = 0x1f10ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943648)));
    // 0x1f10f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f10f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f10f4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f10f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f10f8: 0x8022a380  lb          $v0, -0x5C80($at)
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943616)));
    // 0x1f10fc: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F10FCu;
    {
        const bool branch_taken_0x1f10fc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1f10fc) {
            ctx->pc = 0x1F1140u;
            goto label_1f1140;
        }
    }
    ctx->pc = 0x1F1104u;
    // 0x1f1104: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1f1104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1f1108: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1f1108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1f110c: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F110Cu;
    {
        const bool branch_taken_0x1f110c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x1f110c) {
            ctx->pc = 0x1F1140u;
            goto label_1f1140;
        }
    }
    ctx->pc = 0x1F1114u;
    // 0x1f1114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f1118: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1f1118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1f111c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1f111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f1120: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f1120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f1124: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x1f1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1f1128: 0x26260720  addiu       $a2, $s1, 0x720
    ctx->pc = 0x1f1128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x1f112c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f1130: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1f1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1f1134: 0xc041442  jal         func_105108
    ctx->pc = 0x1F1134u;
    SET_GPR_U32(ctx, 31, 0x1F113Cu);
    ctx->pc = 0x1F1138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1134u;
    // 0x1f1138: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1F1134u, 0x1F113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F113Cu;
label_1f113c:
    // 0x1f113c: 0x0  nop
    ctx->pc = 0x1f113cu;
    // NOP
label_1f1140:
    // 0x1f1140: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1f1140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f1144: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f1144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1f1148: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f1148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f114c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1f114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1f1150: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1f1150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1f1154: 0x92250703  lbu         $a1, 0x703($s1)
    ctx->pc = 0x1f1154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1795)));
    // 0x1f1158: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1f1158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f115c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f115cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1160: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1f1160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1164: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1168: 0xc097ed8  jal         func_25FB60
    ctx->pc = 0x1F1168u;
    SET_GPR_U32(ctx, 31, 0x1F1170u);
    ctx->pc = 0x1F116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1168u;
    // 0x1f116c: 0x27ab0080  addiu       $t3, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FB60u, 0x1F1168u, 0x1F1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1170u;
label_1f1170:
    // 0x1f1170: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1174: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1174u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1178: 0xac22a300  sw          $v0, -0x5D00($at)
    ctx->pc = 0x1f1178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), GPR_U32(ctx, 2));
    // 0x1f117c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f117cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1180: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1184: 0x8c23a300  lw          $v1, -0x5D00($at)
    ctx->pc = 0x1f1184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943488)));
    // 0x1f1188: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F1188u;
    {
        const bool branch_taken_0x1f1188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1188) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F1190u;
    // 0x1f1190: 0x96230730  lhu         $v1, 0x730($s1)
    ctx->pc = 0x1f1190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1840)));
    // 0x1f1194: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1198: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1198u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f119c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x1f119cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x1f11a0: 0xa6230730  sh          $v1, 0x730($s1)
    ctx->pc = 0x1f11a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1840), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f11a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F11A4u;
    {
        const bool branch_taken_0x1f11a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11A4u;
        // 0x1f11a8: 0xac20a300  sw          $zero, -0x5D00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11a4) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F11ACu;
    // 0x1f11ac: 0x0  nop
    ctx->pc = 0x1f11acu;
    // NOP
label_1f11b0:
    // 0x1f11b0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x1F11B0u;
    SET_GPR_U32(ctx, 31, 0x1F11B8u);
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x1F11B0u, 0x1F11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11B8u;
label_1f11b8:
    // 0x1f11b8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F11B8u;
    {
        const bool branch_taken_0x1f11b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11B8u;
        // 0x1f11bc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11b8) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F11C0u;
    // 0x1f11c0: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1f11c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1f11c4: 0x8c23a3c8  lw          $v1, -0x5C38($at)
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943688)));
    // 0x1f11c8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F11C8u;
    {
        const bool branch_taken_0x1f11c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11C8u;
        // 0x1f11cc: 0x2931821  addu        $v1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11c8) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F11D0u;
    // 0x1f11d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f11d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f11d4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f11d8: 0x8024a3a0  lb          $a0, -0x5C60($at)
    ctx->pc = 0x1f11d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943648)));
    // 0x1f11dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f11dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f11e0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f11e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f11e4: 0x8023a380  lb          $v1, -0x5C80($at)
    ctx->pc = 0x1f11e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943616)));
    // 0x1f11e8: 0x4600019  bltz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F11E8u;
    {
        const bool branch_taken_0x1f11e8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1F11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11E8u;
        // 0x1f11ec: 0x42e3c  dsll32      $a1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11e8) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F11F0u;
    // 0x1f11f0: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1f11f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1f11f4: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F11F4u;
    {
        const bool branch_taken_0x1f11f4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1F11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11F4u;
        // 0x1f11f8: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11f4) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F11FCu;
    // 0x1f11fc: 0x26260720  addiu       $a2, $s1, 0x720
    ctx->pc = 0x1f11fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x1f1200: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x1f1200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1f1204: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x1f1204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1f1208: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1f1208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1f120c: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1f120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1f1210: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f1210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f1214: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1f1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1f1218: 0xc041442  jal         func_105108
    ctx->pc = 0x1F1218u;
    SET_GPR_U32(ctx, 31, 0x1F1220u);
    ctx->pc = 0x1F121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1218u;
    // 0x1f121c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1F1218u, 0x1F1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1220u;
label_1f1220:
    // 0x1f1220: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F1220u;
    {
        const bool branch_taken_0x1f1220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1220) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F1228u;
label_1f1228:
    // 0x1f1228: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f122c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f122cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1230: 0x8c24a300  lw          $a0, -0x5D00($at)
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943488)));
    // 0x1f1234: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1234u;
    {
        const bool branch_taken_0x1f1234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1234) {
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F123Cu;
    // 0x1f123c: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x1F123Cu;
    SET_GPR_U32(ctx, 31, 0x1F1244u);
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x1F123Cu, 0x1F1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1244u;
label_1f1244:
    // 0x1f1244: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1248: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f124c: 0xac20a300  sw          $zero, -0x5D00($at)
    ctx->pc = 0x1f124cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943488), GPR_U32(ctx, 0));
label_1f1250:
    // 0x1f1250: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f1250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f1254: 0x2a630020  slti        $v1, $s3, 0x20
    ctx->pc = 0x1f1254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f1258: 0x263104e0  addiu       $s1, $s1, 0x4E0
    ctx->pc = 0x1f1258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1248));
    // 0x1f125c: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x1F125Cu;
    {
        const bool branch_taken_0x1f125c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F125Cu;
        // 0x1f1260: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f125c) {
            ctx->pc = 0x1F1040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1040;
        }
    }
    ctx->pc = 0x1F1264u;
    // 0x1f1264: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f1264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1268: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f1268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f126c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f126cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1270: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f1270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1274: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f1274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1278: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f1278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f127c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F127Cu;
        // 0x1f1280: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1284u;
}
