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

// Function: sub_003C6050
// Address: 0x3c6050 - 0x3c634c
void sub_003C6050_0x3c6050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6050_0x3c6050");
#endif

    switch (ctx->pc) {
        case 0x3c6074u: goto label_3c6074;
        case 0x3c614cu: goto label_3c614c;
        case 0x3c6160u: goto label_3c6160;
        case 0x3c6174u: goto label_3c6174;
        case 0x3c6184u: goto label_3c6184;
        case 0x3c6198u: goto label_3c6198;
        case 0x3c61a0u: goto label_3c61a0;
        case 0x3c61f8u: goto label_3c61f8;
        case 0x3c620cu: goto label_3c620c;
        case 0x3c6294u: goto label_3c6294;
        case 0x3c62ccu: goto label_3c62cc;
        case 0x3c62e4u: goto label_3c62e4;
        case 0x3c62f4u: goto label_3c62f4;
        case 0x3c6318u: goto label_3c6318;
        default: break;
    }

    ctx->pc = 0x3c6050u;

    // 0x3c6050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c6050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c6054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c6054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c6058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c605c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c605cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c6060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c6064: 0x8e2505b0  lw          $a1, 0x5B0($s1)
    ctx->pc = 0x3c6064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x3c6068: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c6068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c606c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C606Cu;
    SET_GPR_U32(ctx, 31, 0x3C6074u);
    ctx->pc = 0x3C6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C606Cu;
    // 0x3c6070: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C606Cu, 0x3C6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6074u;
label_3c6074:
    // 0x3c6074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6078: 0x120000af  beqz        $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x3C6078u;
    {
        const bool branch_taken_0x3c6078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6078) {
            ctx->pc = 0x3C6338u;
            goto label_3c6338;
        }
    }
    ctx->pc = 0x3C6080u;
    // 0x3c6080: 0x92240509  lbu         $a0, 0x509($s1)
    ctx->pc = 0x3c6080u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1289)));
    // 0x3c6084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c6084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c6088: 0x108300a7  beq         $a0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x3C6088u;
    {
        const bool branch_taken_0x3c6088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6088u;
        // 0x3c608c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6088) {
            ctx->pc = 0x3C6328u;
            goto label_3c6328;
        }
    }
    ctx->pc = 0x3C6090u;
    // 0x3c6090: 0x1083009f  beq         $a0, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x3C6090u;
    {
        const bool branch_taken_0x3c6090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c6090) {
            ctx->pc = 0x3C6310u;
            goto label_3c6310;
        }
    }
    ctx->pc = 0x3C6098u;
    // 0x3c6098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c6098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c609c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C609Cu;
    {
        const bool branch_taken_0x3c609c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c609c) {
            ctx->pc = 0x3C6130u;
            goto label_3c6130;
        }
    }
    ctx->pc = 0x3C60A4u;
    // 0x3c60a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C60A4u;
    {
        const bool branch_taken_0x3c60a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c60a4) {
            ctx->pc = 0x3C60B8u;
            goto label_3c60b8;
        }
    }
    ctx->pc = 0x3C60ACu;
    // 0x3c60ac: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3C60ACu;
    {
        const bool branch_taken_0x3c60ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c60ac) {
            ctx->pc = 0x3C6328u;
            goto label_3c6328;
        }
    }
    ctx->pc = 0x3C60B4u;
    // 0x3c60b4: 0x0  nop
    ctx->pc = 0x3c60b4u;
    // NOP
label_3c60b8:
    // 0x3c60b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c60bc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3c60bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c60c0: 0x3c034543  lui         $v1, 0x4543
    ctx->pc = 0x3c60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17731 << 16));
    // 0x3c60c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c60c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c60c8: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x3c60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x3c60cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c60ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c60d0: 0x3c02413f  lui         $v0, 0x413F
    ctx->pc = 0x3c60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16703 << 16));
    // 0x3c60d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c60d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c60d8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3c60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3c60dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c60dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c60e0: 0x0  nop
    ctx->pc = 0x3c60e0u;
    // NOP
    // 0x3c60e4: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3c60e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3c60e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c60e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c60ec: 0xe62105a0  swc1        $f1, 0x5A0($s1)
    ctx->pc = 0x3c60ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1440), bits); }
    // 0x3c60f0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3c60f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c60f4: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3c60f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3c60f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c60f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c60fc: 0xe62105a8  swc1        $f1, 0x5A8($s1)
    ctx->pc = 0x3c60fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    // 0x3c6100: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3c6100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6104: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3c6104u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3c6108: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c6108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c610c: 0xe62005ac  swc1        $f0, 0x5AC($s1)
    ctx->pc = 0x3c610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1452), bits); }
    // 0x3c6110: 0x92220509  lbu         $v0, 0x509($s1)
    ctx->pc = 0x3c6110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1289)));
    // 0x3c6114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c6114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c6118: 0xa2220509  sb          $v0, 0x509($s1)
    ctx->pc = 0x3c6118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c611c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3c611cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c6120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c6120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c6124: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3c6124u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3c6128: 0xa22205b4  sb          $v0, 0x5B4($s1)
    ctx->pc = 0x3c6128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1460), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c612c: 0x0  nop
    ctx->pc = 0x3c612cu;
    // NOP
label_3c6130:
    // 0x3c6130: 0x922205b4  lbu         $v0, 0x5B4($s1)
    ctx->pc = 0x3c6130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x3c6134: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3C6134u;
    {
        const bool branch_taken_0x3c6134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6134) {
            ctx->pc = 0x3C6288u;
            goto label_3c6288;
        }
    }
    ctx->pc = 0x3C613Cu;
    // 0x3c613c: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3C613Cu;
    {
        const bool branch_taken_0x3c613c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c613c) {
            ctx->pc = 0x3C6278u;
            goto label_3c6278;
        }
    }
    ctx->pc = 0x3C6144u;
    // 0x3c6144: 0xc0400b4  jal         func_1002D0
    ctx->pc = 0x3C6144u;
    SET_GPR_U32(ctx, 31, 0x3C614Cu);
    ctx->pc = 0x3C6148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6144u;
    // 0x3c6148: 0x92240507  lbu         $a0, 0x507($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002D0u, 0x3C6144u, 0x3C614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C614Cu;
label_3c614c:
    // 0x3c614c: 0x3c034036  lui         $v1, 0x4036
    ctx->pc = 0x3c614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16438 << 16));
    // 0x3c6150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c6150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6154: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x3c6154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3c6158: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x3C6158u;
    SET_GPR_U32(ctx, 31, 0x3C6160u);
    ctx->pc = 0x3C615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6158u;
    // 0x3c615c: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x3C6158u, 0x3C6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6160u;
label_3c6160:
    // 0x3c6160: 0x3c034066  lui         $v1, 0x4066
    ctx->pc = 0x3c6160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16486 << 16));
    // 0x3c6164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c6164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6168: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x3c6168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3c616c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x3C616Cu;
    SET_GPR_U32(ctx, 31, 0x3C6174u);
    ctx->pc = 0x3C6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C616Cu;
    // 0x3c6170: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x3C616Cu, 0x3C6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6174u;
label_3c6174:
    // 0x3c6174: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3c6174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x3c6178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c6178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c617c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x3C617Cu;
    SET_GPR_U32(ctx, 31, 0x3C6184u);
    ctx->pc = 0x3C6180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C617Cu;
    // 0x3c6180: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x3C617Cu, 0x3C6184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6184u;
label_3c6184:
    // 0x3c6184: 0x3c034066  lui         $v1, 0x4066
    ctx->pc = 0x3c6184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16486 << 16));
    // 0x3c6188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c6188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c618c: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x3c618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3c6190: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x3C6190u;
    SET_GPR_U32(ctx, 31, 0x3C6198u);
    ctx->pc = 0x3C6194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6190u;
    // 0x3c6194: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x3C6190u, 0x3C6198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6198u;
label_3c6198:
    // 0x3c6198: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x3C6198u;
    SET_GPR_U32(ctx, 31, 0x3C61A0u);
    ctx->pc = 0x3C619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6198u;
    // 0x3c619c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x3C6198u, 0x3C61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C61A0u;
label_3c61a0:
    // 0x3c61a0: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3c61a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3c61a4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3c61a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c61a8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3c61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3c61ac: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3c61acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3c61b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c61b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c61b4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3c61b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3c61b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c61b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c61bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c61c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c61c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c61c4: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x3c61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c61c8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c61c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c61cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3c61ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c61d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c61d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c61d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c61d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c61d8: 0x0  nop
    ctx->pc = 0x3c61d8u;
    // NOP
    // 0x3c61dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c61dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c61e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3c61e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c61e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3c61e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c61e8: 0x0  nop
    ctx->pc = 0x3c61e8u;
    // NOP
    // 0x3c61ec: 0x0  nop
    ctx->pc = 0x3c61ecu;
    // NOP
    // 0x3c61f0: 0xc096784  jal         func_259E10
    ctx->pc = 0x3C61F0u;
    SET_GPR_U32(ctx, 31, 0x3C61F8u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3C61F0u, 0x3C61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C61F8u;
label_3c61f8:
    // 0x3c61f8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3c61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3c61fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c6200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c6200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c6204: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C6204u;
    SET_GPR_U32(ctx, 31, 0x3C620Cu);
    ctx->pc = 0x3C6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6204u;
    // 0x3c6208: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C6204u, 0x3C620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C620Cu;
label_3c620c:
    // 0x3c620c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c6210: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3c6210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c6214: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c6214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c6218: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x3c6218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3c621c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3c621cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c6220: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3c6220u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c6224: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3c6224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3c6228: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3c6228u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3c622c: 0x92220507  lbu         $v0, 0x507($s1)
    ctx->pc = 0x3c622cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
    // 0x3c6230: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C6230u;
    {
        const bool branch_taken_0x3c6230 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6230u;
        // 0x3c6234: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6230) {
            ctx->pc = 0x3C6244u;
            goto label_3c6244;
        }
    }
    ctx->pc = 0x3C6238u;
    // 0x3c6238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c6238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c623c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C623Cu;
    {
        const bool branch_taken_0x3c623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C623Cu;
        // 0x3c6240: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c623c) {
            ctx->pc = 0x3C625Cu;
            goto label_3c625c;
        }
    }
    ctx->pc = 0x3C6244u;
label_3c6244:
    // 0x3c6244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c6244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c6248: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c6248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c624c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c624cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c6250: 0x0  nop
    ctx->pc = 0x3c6250u;
    // NOP
    // 0x3c6254: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3c6254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c6258: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3c6258u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3c625c:
    // 0x3c625c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3c625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3c6260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c6260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6264: 0xc6200594  lwc1        $f0, 0x594($s1)
    ctx->pc = 0x3c6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6268: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c6268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c626c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c626cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6270: 0xe6200594  swc1        $f0, 0x594($s1)
    ctx->pc = 0x3c6270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x3c6274: 0x0  nop
    ctx->pc = 0x3c6274u;
    // NOP
label_3c6278:
    // 0x3c6278: 0xa22005b4  sb          $zero, 0x5B4($s1)
    ctx->pc = 0x3c6278u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1460), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c627c: 0x92220507  lbu         $v0, 0x507($s1)
    ctx->pc = 0x3c627cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
    // 0x3c6280: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c6280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c6284: 0xa2220507  sb          $v0, 0x507($s1)
    ctx->pc = 0x3c6284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 2));
label_3c6288:
    // 0x3c6288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c628c: 0xc0f1924  jal         func_3C6490
    ctx->pc = 0x3C628Cu;
    SET_GPR_U32(ctx, 31, 0x3C6294u);
    ctx->pc = 0x3C6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C628Cu;
    // 0x3c6290: 0x2405031c  addiu       $a1, $zero, 0x31C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6490u, 0x3C628Cu, 0x3C6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6294u;
label_3c6294:
    // 0x3c6294: 0x92220507  lbu         $v0, 0x507($s1)
    ctx->pc = 0x3c6294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
    // 0x3c6298: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x3c6298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3c629c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C629Cu;
    {
        const bool branch_taken_0x3c629c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c629c) {
            ctx->pc = 0x3C62B0u;
            goto label_3c62b0;
        }
    }
    ctx->pc = 0x3C62A4u;
    // 0x3c62a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C62A4u;
    {
        const bool branch_taken_0x3c62a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C62A4u;
        // 0x3c62a8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c62a4) {
            ctx->pc = 0x3C62B8u;
            goto label_3c62b8;
        }
    }
    ctx->pc = 0x3C62ACu;
    // 0x3c62ac: 0x0  nop
    ctx->pc = 0x3c62acu;
    // NOP
label_3c62b0:
    // 0x3c62b0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x3c62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x3c62b4: 0x0  nop
    ctx->pc = 0x3c62b4u;
    // NOP
label_3c62b8:
    // 0x3c62b8: 0xa62200c4  sh          $v0, 0xC4($s1)
    ctx->pc = 0x3c62b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c62bc: 0x2402ff8f  addiu       $v0, $zero, -0x71
    ctx->pc = 0x3c62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x3c62c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c62c4: 0xc0f19b4  jal         func_3C66D0
    ctx->pc = 0x3C62C4u;
    SET_GPR_U32(ctx, 31, 0x3C62CCu);
    ctx->pc = 0x3C62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C62C4u;
    // 0x3c62c8: 0xa62200c0  sh          $v0, 0xC0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C66D0u, 0x3C62C4u, 0x3C62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C62CCu;
label_3c62cc:
    // 0x3c62cc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C62CCu;
    {
        const bool branch_taken_0x3c62cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c62cc) {
            ctx->pc = 0x3C6328u;
            goto label_3c6328;
        }
    }
    ctx->pc = 0x3C62D4u;
    // 0x3c62d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c62d8: 0xa22205b4  sb          $v0, 0x5B4($s1)
    ctx->pc = 0x3c62d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1460), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c62dc: 0xc0400b4  jal         func_1002D0
    ctx->pc = 0x3C62DCu;
    SET_GPR_U32(ctx, 31, 0x3C62E4u);
    ctx->pc = 0x3C62E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C62DCu;
    // 0x3c62e0: 0x92240507  lbu         $a0, 0x507($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1287)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002D0u, 0x3C62DCu, 0x3C62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C62E4u;
label_3c62e4:
    // 0x3c62e4: 0x3c034032  lui         $v1, 0x4032
    ctx->pc = 0x3c62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16434 << 16));
    // 0x3c62e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c62e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c62ec: 0xc0400d4  jal         func_100350
    ctx->pc = 0x3C62ECu;
    SET_GPR_U32(ctx, 31, 0x3C62F4u);
    ctx->pc = 0x3C62F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C62ECu;
    // 0x3c62f0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100350u, 0x3C62ECu, 0x3C62F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C62F4u;
label_3c62f4:
    // 0x3c62f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C62F4u;
    {
        const bool branch_taken_0x3c62f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c62f4) {
            ctx->pc = 0x3C6328u;
            goto label_3c6328;
        }
    }
    ctx->pc = 0x3C62FCu;
    // 0x3c62fc: 0x92230509  lbu         $v1, 0x509($s1)
    ctx->pc = 0x3c62fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1289)));
    // 0x3c6300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c6304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C6304u;
    {
        const bool branch_taken_0x3c6304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6304u;
        // 0x3c6308: 0xa2230509  sb          $v1, 0x509($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1289), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6304) {
            ctx->pc = 0x3C6328u;
            goto label_3c6328;
        }
    }
    ctx->pc = 0x3C630Cu;
    // 0x3c630c: 0x0  nop
    ctx->pc = 0x3c630cu;
    // NOP
label_3c6310:
    // 0x3c6310: 0xc0f1ad8  jal         func_3C6B60
    ctx->pc = 0x3C6310u;
    SET_GPR_U32(ctx, 31, 0x3C6318u);
    ctx->pc = 0x3C6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6310u;
    // 0x3c6314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6B60u, 0x3C6310u, 0x3C6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6318u;
label_3c6318:
    // 0x3c6318: 0x92230509  lbu         $v1, 0x509($s1)
    ctx->pc = 0x3c6318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1289)));
    // 0x3c631c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c6320: 0xa2230509  sb          $v1, 0x509($s1)
    ctx->pc = 0x3c6320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1289), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c6324: 0x0  nop
    ctx->pc = 0x3c6324u;
    // NOP
label_3c6328:
    // 0x3c6328: 0xc6200580  lwc1        $f0, 0x580($s1)
    ctx->pc = 0x3c6328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c632c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x3c632cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3c6330: 0xc6200588  lwc1        $f0, 0x588($s1)
    ctx->pc = 0x3c6330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6334: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x3c6334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_3c6338:
    // 0x3c6338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c6338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c633c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c633cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6344: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6344u;
        // 0x3c6348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C634Cu;
}
