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

// Function: sub_001907E0
// Address: 0x1907e0 - 0x190c90
void sub_001907E0_0x1907e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001907E0_0x1907e0");
#endif

    switch (ctx->pc) {
        case 0x190824u: goto label_190824;
        case 0x19085cu: goto label_19085c;
        case 0x190864u: goto label_190864;
        case 0x190870u: goto label_190870;
        case 0x19088cu: goto label_19088c;
        case 0x19089cu: goto label_19089c;
        case 0x1908b0u: goto label_1908b0;
        case 0x1908c4u: goto label_1908c4;
        case 0x190978u: goto label_190978;
        case 0x1909b0u: goto label_1909b0;
        case 0x190a68u: goto label_190a68;
        case 0x190ac8u: goto label_190ac8;
        case 0x190af4u: goto label_190af4;
        case 0x190b38u: goto label_190b38;
        case 0x190b48u: goto label_190b48;
        case 0x190b58u: goto label_190b58;
        case 0x190b68u: goto label_190b68;
        case 0x190b78u: goto label_190b78;
        case 0x190b84u: goto label_190b84;
        case 0x190b90u: goto label_190b90;
        case 0x190b9cu: goto label_190b9c;
        case 0x190bacu: goto label_190bac;
        case 0x190bbcu: goto label_190bbc;
        case 0x190bccu: goto label_190bcc;
        case 0x190be0u: goto label_190be0;
        case 0x190c54u: goto label_190c54;
        default: break;
    }

    ctx->pc = 0x1907e0u;

    // 0x1907e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1907e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1907e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1907e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1907e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1907e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1907ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1907ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1907f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1907f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1907f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1907f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1907f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1907fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190800: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x190800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
    // 0x190804: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x190804u;
    {
        const bool branch_taken_0x190804 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x190808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190804u;
        // 0x190808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190804) {
            ctx->pc = 0x190818u;
            goto label_190818;
        }
    }
    ctx->pc = 0x19080Cu;
    // 0x19080c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x19080cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x190810: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x190810u;
    {
        const bool branch_taken_0x190810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190810u;
        // 0x190814: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190810) {
            ctx->pc = 0x190838u;
            goto label_190838;
        }
    }
    ctx->pc = 0x190818u;
label_190818:
    // 0x190818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19081c: 0xc064eec  jal         func_193BB0
    ctx->pc = 0x19081Cu;
    SET_GPR_U32(ctx, 31, 0x190824u);
    ctx->pc = 0x190820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19081Cu;
    // 0x190820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193BB0u, 0x19081Cu, 0x190824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190824u;
label_190824:
    // 0x190824: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x190824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x190828: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19082c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x19082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x190830: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x190830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x190834: 0x0  nop
    ctx->pc = 0x190834u;
    // NOP
label_190838:
    // 0x190838: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x190838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x19083c: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x19083cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x190840: 0xa3808754  sb          $zero, -0x78AC($gp)
    ctx->pc = 0x190840u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936404), (uint8_t)GPR_U32(ctx, 0));
    // 0x190844: 0xaf808c7c  sw          $zero, -0x7384($gp)
    ctx->pc = 0x190844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 0));
    // 0x190848: 0xaf808c80  sw          $zero, -0x7380($gp)
    ctx->pc = 0x190848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 0));
    // 0x19084c: 0xaf80871c  sw          $zero, -0x78E4($gp)
    ctx->pc = 0x19084cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 0));
    // 0x190850: 0xaf808720  sw          $zero, -0x78E0($gp)
    ctx->pc = 0x190850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U32(ctx, 0));
    // 0x190854: 0xc064118  jal         func_190460
    ctx->pc = 0x190854u;
    SET_GPR_U32(ctx, 31, 0x19085Cu);
    ctx->pc = 0x190858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190854u;
    // 0x190858: 0xa38286d0  sb          $v0, -0x7930($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936272), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190460u, 0x190854u, 0x19085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19085Cu;
label_19085c:
    // 0x19085c: 0xc06412c  jal         func_1904B0
    ctx->pc = 0x19085Cu;
    SET_GPR_U32(ctx, 31, 0x190864u);
    ctx->pc = 0x190860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19085Cu;
    // 0x190860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1904B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904B0u, 0x19085Cu, 0x190864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190864u;
label_190864:
    // 0x190864: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x190864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x190868: 0xc0eca2c  jal         func_3B28B0
    ctx->pc = 0x190868u;
    SET_GPR_U32(ctx, 31, 0x190870u);
    ctx->pc = 0x19086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190868u;
    // 0x19086c: 0x2484fd60  addiu       $a0, $a0, -0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B28B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B28B0u, 0x190868u, 0x190870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x190870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190874: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x190874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x190878: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x190878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19087c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x19087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x190880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x190884: 0xc04f7a4  jal         func_13DE90
    ctx->pc = 0x190884u;
    SET_GPR_U32(ctx, 31, 0x19088Cu);
    ctx->pc = 0x190888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190884u;
    // 0x190888: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE90u, 0x190884u, 0x19088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19088Cu;
label_19088c:
    // 0x19088c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19088cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x190890: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x190890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x190894: 0xc04e710  jal         func_139C40
    ctx->pc = 0x190894u;
    SET_GPR_U32(ctx, 31, 0x19089Cu);
    ctx->pc = 0x190898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190894u;
    // 0x190898: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x190894u, 0x19089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19089Cu;
label_19089c:
    // 0x19089c: 0xa600008c  sh          $zero, 0x8C($s0)
    ctx->pc = 0x19089cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 0));
    // 0x1908a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1908a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908a4: 0xa600008a  sh          $zero, 0x8A($s0)
    ctx->pc = 0x1908a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x1908a8: 0xc04bc40  jal         func_12F100
    ctx->pc = 0x1908A8u;
    SET_GPR_U32(ctx, 31, 0x1908B0u);
    ctx->pc = 0x1908ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908A8u;
    // 0x1908ac: 0xa6000088  sh          $zero, 0x88($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F100u, 0x1908A8u, 0x1908B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908B0u;
label_1908b0:
    // 0x1908b0: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x1908b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x1908b4: 0x3442be0b  ori         $v0, $v0, 0xBE0B
    ctx->pc = 0x1908b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48651);
    // 0x1908b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1908b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1908bc: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x1908BCu;
    SET_GPR_U32(ctx, 31, 0x1908C4u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x1908BCu, 0x1908C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1908C4u;
label_1908c4:
    // 0x1908c4: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1908c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1908c8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1908cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1908ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1908d0: 0xa38086cc  sb          $zero, -0x7934($gp)
    ctx->pc = 0x1908d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936268), (uint8_t)GPR_U32(ctx, 0));
    // 0x1908d4: 0x24a5d8c0  addiu       $a1, $a1, -0x2740
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
    // 0x1908d8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1908d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1908dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1908dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1908e0: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x1908e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x1908e4: 0xa78386c0  sh          $v1, -0x7940($gp)
    ctx->pc = 0x1908e4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936256), (uint16_t)GPR_U32(ctx, 3));
    // 0x1908e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1908e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1908ec: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1908f0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1908f4: 0xa78386c4  sh          $v1, -0x793C($gp)
    ctx->pc = 0x1908f4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936260), (uint16_t)GPR_U32(ctx, 3));
    // 0x1908f8: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1908f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1908fc: 0xa78386c8  sh          $v1, -0x7938($gp)
    ctx->pc = 0x1908fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936264), (uint16_t)GPR_U32(ctx, 3));
    // 0x190900: 0x24030202  addiu       $v1, $zero, 0x202
    ctx->pc = 0x190900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x190904: 0xe78086bc  swc1        $f0, -0x7944($gp)
    ctx->pc = 0x190904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), bits); }
    // 0x190908: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x190908u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40D8C0u));
    // 0x19090c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x19090cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x190910: 0xaf8486b8  sw          $a0, -0x7948($gp)
    ctx->pc = 0x190910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 4));
    // 0x190914: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x190914u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x190918: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x190918u;
    {
        const bool branch_taken_0x190918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190918u;
        // 0x19091c: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190918) {
            ctx->pc = 0x190930u;
            goto label_190930;
        }
    }
    ctx->pc = 0x190920u;
    // 0x190920: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190920u;
    {
        const bool branch_taken_0x190920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190920) {
            ctx->pc = 0x190930u;
            goto label_190930;
        }
    }
    ctx->pc = 0x190928u;
    // 0x190928: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190928u;
    {
        const bool branch_taken_0x190928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190928) {
            ctx->pc = 0x190948u;
            goto label_190948;
        }
    }
    ctx->pc = 0x190930u;
label_190930:
    // 0x190930: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x190930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x190934: 0x2463d7d0  addiu       $v1, $v1, -0x2830
    ctx->pc = 0x190934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957008));
    // 0x190938: 0xaf8386b0  sw          $v1, -0x7950($gp)
    ctx->pc = 0x190938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936240), GPR_U32(ctx, 3));
    // 0x19093c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x19093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x190940: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x190940u;
    {
        const bool branch_taken_0x190940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190940u;
        // 0x190944: 0xaf8386b4  sw          $v1, -0x794C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190940) {
            ctx->pc = 0x190AC0u;
            goto label_190ac0;
        }
    }
    ctx->pc = 0x190948u;
label_190948:
    // 0x190948: 0xaf8086b0  sw          $zero, -0x7950($gp)
    ctx->pc = 0x190948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936240), GPR_U32(ctx, 0));
    // 0x19094c: 0xaf8086b4  sw          $zero, -0x794C($gp)
    ctx->pc = 0x19094cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936244), GPR_U32(ctx, 0));
    // 0x190950: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x190950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190954: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x190954u;
    {
        const bool branch_taken_0x190954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190954) {
            ctx->pc = 0x190AC0u;
            goto label_190ac0;
        }
    }
    ctx->pc = 0x19095Cu;
    // 0x19095c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x190960: 0x10e00057  beqz        $a3, . + 4 + (0x57 << 2)
    ctx->pc = 0x190960u;
    {
        const bool branch_taken_0x190960 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x190960) {
            ctx->pc = 0x190AC0u;
            goto label_190ac0;
        }
    }
    ctx->pc = 0x190968u;
    // 0x190968: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x190968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19096c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19096cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190970: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x190970u;
    {
        const bool branch_taken_0x190970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190970u;
        // 0x190974: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190970) {
            ctx->pc = 0x190AB0u;
            goto label_190ab0;
        }
    }
    ctx->pc = 0x190978u;
label_190978:
    // 0x190978: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x190978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19097c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x19097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x190980: 0x24730010  addiu       $s3, $v1, 0x10
    ctx->pc = 0x190980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x190984: 0x90630011  lbu         $v1, 0x11($v1)
    ctx->pc = 0x190984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x190988: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x190988u;
    {
        const bool branch_taken_0x190988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190988) {
            ctx->pc = 0x190AA8u;
            goto label_190aa8;
        }
    }
    ctx->pc = 0x190990u;
    // 0x190990: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x190990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x190994: 0x14640044  bne         $v1, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x190994u;
    {
        const bool branch_taken_0x190994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x190994) {
            ctx->pc = 0x190AA8u;
            goto label_190aa8;
        }
    }
    ctx->pc = 0x19099Cu;
    // 0x19099c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1909a0: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x1909a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x1909a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1909a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1909A8u;
    {
        const bool branch_taken_0x1909a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1909ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909A8u;
        // 0x1909ac: 0x24632500  addiu       $v1, $v1, 0x2500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909a8) {
            ctx->pc = 0x1909D8u;
            goto label_1909d8;
        }
    }
    ctx->pc = 0x1909B0u;
label_1909b0:
    // 0x1909b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1909b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1909b4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1909b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1909b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1909bc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1909bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1909c0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1909c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1909c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1909c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1909c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1909c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1909cc: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x1909ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1909d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1909d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1909d4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1909d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_1909d8:
    // 0x1909d8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1909d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1909dc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1909dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1909e0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1909E0u;
    {
        const bool branch_taken_0x1909e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1909E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909E0u;
        // 0x1909e4: 0x3c020084  lui         $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909e0) {
            ctx->pc = 0x1909B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1909b0;
        }
    }
    ctx->pc = 0x1909E8u;
    // 0x1909e8: 0x24422500  addiu       $v0, $v0, 0x2500
    ctx->pc = 0x1909e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9472));
    // 0x1909ec: 0xaf8286b0  sw          $v0, -0x7950($gp)
    ctx->pc = 0x1909ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936240), GPR_U32(ctx, 2));
    // 0x1909f0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1909f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1909f4: 0xaf8286b4  sw          $v0, -0x794C($gp)
    ctx->pc = 0x1909f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936244), GPR_U32(ctx, 2));
    // 0x1909f8: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x1909f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1909fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1909FCu;
    {
        const bool branch_taken_0x1909fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x190A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909FCu;
        // 0x190a00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909fc) {
            ctx->pc = 0x190A10u;
            goto label_190a10;
        }
    }
    ctx->pc = 0x190A04u;
    // 0x190a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190A08u;
    {
        const bool branch_taken_0x190a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A08u;
        // 0x190a0c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a08) {
            ctx->pc = 0x190A28u;
            goto label_190a28;
        }
    }
    ctx->pc = 0x190A10u;
label_190a10:
    // 0x190a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190a14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x190a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a1c: 0x0  nop
    ctx->pc = 0x190a1cu;
    // NOP
    // 0x190a20: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x190a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x190a24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x190a24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_190a28:
    // 0x190a28: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x190a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x190a2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x190a30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190a34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x190a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x190a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a3c: 0x0  nop
    ctx->pc = 0x190a3cu;
    // NOP
    // 0x190a40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x190a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x190a44: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x190a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x190a48: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x190a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190a50: 0x0  nop
    ctx->pc = 0x190a50u;
    // NOP
    // 0x190a54: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x190a54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x190a58: 0x0  nop
    ctx->pc = 0x190a58u;
    // NOP
    // 0x190a5c: 0x0  nop
    ctx->pc = 0x190a5cu;
    // NOP
    // 0x190a60: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x190A60u;
    SET_GPR_U32(ctx, 31, 0x190A68u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x190A60u, 0x190A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A68u;
label_190a68:
    // 0x190a68: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x190a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x190a6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190a70: 0x0  nop
    ctx->pc = 0x190a70u;
    // NOP
    // 0x190a74: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190a74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x190a78: 0xe78086bc  swc1        $f0, -0x7944($gp)
    ctx->pc = 0x190a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), bits); }
    // 0x190a7c: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x190a7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x190a80: 0xa78386c0  sh          $v1, -0x7940($gp)
    ctx->pc = 0x190a80u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936256), (uint16_t)GPR_U32(ctx, 3));
    // 0x190a84: 0x8643000e  lh          $v1, 0xE($s2)
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x190a88: 0xa78386c4  sh          $v1, -0x793C($gp)
    ctx->pc = 0x190a88u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936260), (uint16_t)GPR_U32(ctx, 3));
    // 0x190a8c: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x190a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x190a90: 0xa78386c8  sh          $v1, -0x7938($gp)
    ctx->pc = 0x190a90u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936264), (uint16_t)GPR_U32(ctx, 3));
    // 0x190a94: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x190a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x190a98: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x190a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x190a9c: 0xa38386cc  sb          $v1, -0x7934($gp)
    ctx->pc = 0x190a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936268), (uint8_t)GPR_U32(ctx, 3));
    // 0x190aa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190AA0u;
    {
        const bool branch_taken_0x190aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AA0u;
        // 0x190aa4: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190aa0) {
            ctx->pc = 0x190AC0u;
            goto label_190ac0;
        }
    }
    ctx->pc = 0x190AA8u;
label_190aa8:
    // 0x190aa8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x190aac: 0x0  nop
    ctx->pc = 0x190aacu;
    // NOP
label_190ab0:
    // 0x190ab0: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x190ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x190ab4: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x190AB4u;
    {
        const bool branch_taken_0x190ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190ab4) {
            ctx->pc = 0x190978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190978;
        }
    }
    ctx->pc = 0x190ABCu;
    // 0x190abc: 0x0  nop
    ctx->pc = 0x190abcu;
    // NOP
label_190ac0:
    // 0x190ac0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x190AC0u;
    {
        const bool branch_taken_0x190ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AC0u;
        // 0x190ac4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ac0) {
            ctx->pc = 0x190C58u;
            goto label_190c58;
        }
    }
    ctx->pc = 0x190AC8u;
label_190ac8:
    // 0x190ac8: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x190acc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x190accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190ad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x190ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ad4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x190ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x190ad8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x190ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x190adc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x190adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x190ae0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x190ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x190ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190ae8: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x190ae8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190aec: 0xc0414ca  jal         func_105328
    ctx->pc = 0x190AECu;
    SET_GPR_U32(ctx, 31, 0x190AF4u);
    ctx->pc = 0x190AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AECu;
    // 0x190af0: 0x7ce80000  sq          $t0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x190AECu, 0x190AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AF4u;
label_190af4:
    // 0x190af4: 0x8f8386b4  lw          $v1, -0x794C($gp)
    ctx->pc = 0x190af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x190af8: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x190afc: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x190afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x190b00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x190b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b04: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x190b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190b08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x190b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x190b0c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x190b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190b10: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x190b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x190b14: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x190b14u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x190b18: 0x0  nop
    ctx->pc = 0x190b18u;
    // NOP
    // 0x190b1c: 0x0  nop
    ctx->pc = 0x190b1cu;
    // NOP
    // 0x190b20: 0x1810  mfhi        $v1
    ctx->pc = 0x190b20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x190b24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x190b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x190b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190b2c: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x190b2cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190b30: 0xc0414ca  jal         func_105328
    ctx->pc = 0x190B30u;
    SET_GPR_U32(ctx, 31, 0x190B38u);
    ctx->pc = 0x190B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B30u;
    // 0x190b34: 0x7d090000  sq          $t1, 0x0($t0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x190B30u, 0x190B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B38u;
label_190b38:
    // 0x190b38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190b3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x190b40: 0xc0414d0  jal         func_105340
    ctx->pc = 0x190B40u;
    SET_GPR_U32(ctx, 31, 0x190B48u);
    ctx->pc = 0x190B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B40u;
    // 0x190b44: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x190B40u, 0x190B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B48u;
label_190b48:
    // 0x190b48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190b4c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x190b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190b50: 0xc0414d0  jal         func_105340
    ctx->pc = 0x190B50u;
    SET_GPR_U32(ctx, 31, 0x190B58u);
    ctx->pc = 0x190B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B50u;
    // 0x190b54: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x190B50u, 0x190B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B58u;
label_190b58:
    // 0x190b58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x190b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190b5c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x190b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190b60: 0xc041460  jal         func_105180
    ctx->pc = 0x190B60u;
    SET_GPR_U32(ctx, 31, 0x190B68u);
    ctx->pc = 0x190B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B60u;
    // 0x190b64: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x190B60u, 0x190B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B68u;
label_190b68:
    // 0x190b68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190b6c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x190b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190b70: 0xc041460  jal         func_105180
    ctx->pc = 0x190B70u;
    SET_GPR_U32(ctx, 31, 0x190B78u);
    ctx->pc = 0x190B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B70u;
    // 0x190b74: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x190B70u, 0x190B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B78u;
label_190b78:
    // 0x190b78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190b7c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x190B7Cu;
    SET_GPR_U32(ctx, 31, 0x190B84u);
    ctx->pc = 0x190B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B7Cu;
    // 0x190b80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x190B7Cu, 0x190B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B84u;
label_190b84:
    // 0x190b84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x190b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190b88: 0xc041472  jal         func_1051C8
    ctx->pc = 0x190B88u;
    SET_GPR_U32(ctx, 31, 0x190B90u);
    ctx->pc = 0x190B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B88u;
    // 0x190b8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x190B88u, 0x190B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B90u;
label_190b90:
    // 0x190b90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x190b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190b94: 0xc041472  jal         func_1051C8
    ctx->pc = 0x190B94u;
    SET_GPR_U32(ctx, 31, 0x190B9Cu);
    ctx->pc = 0x190B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B94u;
    // 0x190b98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x190B94u, 0x190B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B9Cu;
label_190b9c:
    // 0x190b9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x190b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190ba0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x190ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x190ba4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x190BA4u;
    SET_GPR_U32(ctx, 31, 0x190BACu);
    ctx->pc = 0x190BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BA4u;
    // 0x190ba8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x190BA4u, 0x190BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BACu;
label_190bac:
    // 0x190bac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x190bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190bb0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x190bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190bb4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x190BB4u;
    SET_GPR_U32(ctx, 31, 0x190BBCu);
    ctx->pc = 0x190BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BB4u;
    // 0x190bb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x190BB4u, 0x190BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BBCu;
label_190bbc:
    // 0x190bbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190bc0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x190bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x190bc4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x190BC4u;
    SET_GPR_U32(ctx, 31, 0x190BCCu);
    ctx->pc = 0x190BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BC4u;
    // 0x190bc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x190BC4u, 0x190BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BCCu;
label_190bcc:
    // 0x190bcc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x190bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x190bd0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x190bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x190bd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x190bd8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x190BD8u;
    SET_GPR_U32(ctx, 31, 0x190BE0u);
    ctx->pc = 0x190BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BD8u;
    // 0x190bdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x190BD8u, 0x190BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BE0u;
label_190be0:
    // 0x190be0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190be4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x190be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190bec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x190becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190bf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x190bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190bf4: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x190bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x190bf8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x190bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x190bfc: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x190bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x190c00: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x190c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x190c04: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x190c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x190c08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x190c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190c0c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190c14: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x190c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x190c18: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x190c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x190c1c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x190c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x190c20: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x190c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x190c24: 0x24422b40  addiu       $v0, $v0, 0x2B40
    ctx->pc = 0x190c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11072));
    // 0x190c28: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x190c28u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x190c2c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x190c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190c30: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190c34: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x190c34u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x190c38: 0x78e60010  lq          $a2, 0x10($a3)
    ctx->pc = 0x190c38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x190c3c: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x190c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x190c40: 0x78e60020  lq          $a2, 0x20($a3)
    ctx->pc = 0x190c40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x190c44: 0x7d060020  sq          $a2, 0x20($t0)
    ctx->pc = 0x190c44u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 6));
    // 0x190c48: 0x78e60030  lq          $a2, 0x30($a3)
    ctx->pc = 0x190c48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x190c4c: 0xc041494  jal         func_105250
    ctx->pc = 0x190C4Cu;
    SET_GPR_U32(ctx, 31, 0x190C54u);
    ctx->pc = 0x190C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C4Cu;
    // 0x190c50: 0x7d060030  sq          $a2, 0x30($t0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x190C4Cu, 0x190C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C54u;
label_190c54:
    // 0x190c54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x190c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_190c58:
    // 0x190c58: 0x8f8386b4  lw          $v1, -0x794C($gp)
    ctx->pc = 0x190c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x190c5c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x190c5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190c60: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x190C60u;
    {
        const bool branch_taken_0x190c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c60) {
            ctx->pc = 0x190AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190ac8;
        }
    }
    ctx->pc = 0x190C68u;
    // 0x190c68: 0xae0010d0  sw          $zero, 0x10D0($s0)
    ctx->pc = 0x190c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4304), GPR_U32(ctx, 0));
    // 0x190c6c: 0xae0010d4  sw          $zero, 0x10D4($s0)
    ctx->pc = 0x190c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4308), GPR_U32(ctx, 0));
    // 0x190c70: 0xae0010d8  sw          $zero, 0x10D8($s0)
    ctx->pc = 0x190c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4312), GPR_U32(ctx, 0));
    // 0x190c74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x190c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190c78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190c7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190c88: 0x3e00008  jr          $ra
    ctx->pc = 0x190C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C88u;
        // 0x190c8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C90u;
}
