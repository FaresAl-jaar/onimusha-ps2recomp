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

// Function: sub_0017EAB0
// Address: 0x17eab0 - 0x17f934
void sub_0017EAB0_0x17eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EAB0_0x17eab0");
#endif

    switch (ctx->pc) {
        case 0x17eb00u: goto label_17eb00;
        case 0x17eb0cu: goto label_17eb0c;
        case 0x17eb14u: goto label_17eb14;
        case 0x17eb20u: goto label_17eb20;
        case 0x17eb2cu: goto label_17eb2c;
        case 0x17ebf4u: goto label_17ebf4;
        case 0x17ec04u: goto label_17ec04;
        case 0x17ec24u: goto label_17ec24;
        case 0x17ec34u: goto label_17ec34;
        case 0x17ec54u: goto label_17ec54;
        case 0x17ec68u: goto label_17ec68;
        case 0x17eca0u: goto label_17eca0;
        case 0x17ecb8u: goto label_17ecb8;
        case 0x17ecc8u: goto label_17ecc8;
        case 0x17ece4u: goto label_17ece4;
        case 0x17ecf8u: goto label_17ecf8;
        case 0x17ed0cu: goto label_17ed0c;
        case 0x17ed20u: goto label_17ed20;
        case 0x17ed38u: goto label_17ed38;
        case 0x17ed48u: goto label_17ed48;
        case 0x17ed64u: goto label_17ed64;
        case 0x17ed78u: goto label_17ed78;
        case 0x17ed8cu: goto label_17ed8c;
        case 0x17edc0u: goto label_17edc0;
        case 0x17edd0u: goto label_17edd0;
        case 0x17edd8u: goto label_17edd8;
        case 0x17ede0u: goto label_17ede0;
        case 0x17edf0u: goto label_17edf0;
        case 0x17edf8u: goto label_17edf8;
        case 0x17ee08u: goto label_17ee08;
        case 0x17ee10u: goto label_17ee10;
        case 0x17ee1cu: goto label_17ee1c;
        case 0x17ee28u: goto label_17ee28;
        case 0x17eef0u: goto label_17eef0;
        case 0x17ef10u: goto label_17ef10;
        case 0x17ef20u: goto label_17ef20;
        case 0x17ef7cu: goto label_17ef7c;
        case 0x17ef84u: goto label_17ef84;
        case 0x17ef8cu: goto label_17ef8c;
        case 0x17ef9cu: goto label_17ef9c;
        case 0x17efa4u: goto label_17efa4;
        case 0x17efb4u: goto label_17efb4;
        case 0x17efbcu: goto label_17efbc;
        case 0x17efc8u: goto label_17efc8;
        case 0x17efd4u: goto label_17efd4;
        case 0x17efe0u: goto label_17efe0;
        case 0x17eff0u: goto label_17eff0;
        case 0x17effcu: goto label_17effc;
        case 0x17f0c4u: goto label_17f0c4;
        case 0x17f0d8u: goto label_17f0d8;
        case 0x17f0f4u: goto label_17f0f4;
        case 0x17f0fcu: goto label_17f0fc;
        case 0x17f104u: goto label_17f104;
        case 0x17f11cu: goto label_17f11c;
        case 0x17f124u: goto label_17f124;
        case 0x17f1f0u: goto label_17f1f0;
        case 0x17f288u: goto label_17f288;
        case 0x17f294u: goto label_17f294;
        case 0x17f29cu: goto label_17f29c;
        case 0x17f2c4u: goto label_17f2c4;
        case 0x17f2e8u: goto label_17f2e8;
        case 0x17f2f4u: goto label_17f2f4;
        case 0x17f304u: goto label_17f304;
        case 0x17f30cu: goto label_17f30c;
        case 0x17f324u: goto label_17f324;
        case 0x17f32cu: goto label_17f32c;
        case 0x17f338u: goto label_17f338;
        case 0x17f350u: goto label_17f350;
        case 0x17f3d0u: goto label_17f3d0;
        case 0x17f408u: goto label_17f408;
        case 0x17f508u: goto label_17f508;
        case 0x17f510u: goto label_17f510;
        case 0x17f554u: goto label_17f554;
        case 0x17f590u: goto label_17f590;
        case 0x17f5d0u: goto label_17f5d0;
        case 0x17f60cu: goto label_17f60c;
        case 0x17f618u: goto label_17f618;
        case 0x17f624u: goto label_17f624;
        case 0x17f634u: goto label_17f634;
        case 0x17f674u: goto label_17f674;
        case 0x17f6b4u: goto label_17f6b4;
        case 0x17f6f8u: goto label_17f6f8;
        case 0x17f73cu: goto label_17f73c;
        case 0x17f748u: goto label_17f748;
        case 0x17f754u: goto label_17f754;
        case 0x17f764u: goto label_17f764;
        case 0x17f79cu: goto label_17f79c;
        case 0x17f7d4u: goto label_17f7d4;
        case 0x17f7e0u: goto label_17f7e0;
        case 0x17f7ecu: goto label_17f7ec;
        case 0x17f824u: goto label_17f824;
        case 0x17f830u: goto label_17f830;
        case 0x17f83cu: goto label_17f83c;
        case 0x17f84cu: goto label_17f84c;
        case 0x17f854u: goto label_17f854;
        case 0x17f864u: goto label_17f864;
        case 0x17f86cu: goto label_17f86c;
        case 0x17f878u: goto label_17f878;
        case 0x17f884u: goto label_17f884;
        case 0x17f890u: goto label_17f890;
        case 0x17f8a0u: goto label_17f8a0;
        case 0x17f8b0u: goto label_17f8b0;
        case 0x17f8c0u: goto label_17f8c0;
        case 0x17f8d0u: goto label_17f8d0;
        case 0x17f8d8u: goto label_17f8d8;
        default: break;
    }

    ctx->pc = 0x17eab0u;

    // 0x17eab0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x17eab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x17eab4: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x17eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x17eab8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17eab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17eabc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17eac0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17eac4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x17eac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17eac8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17eacc: 0x27828668  addiu       $v0, $gp, -0x7998
    ctx->pc = 0x17eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936168));
    // 0x17ead0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17ead4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17ead8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17eadc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17eae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17eae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17eae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17eaec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17eaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaf0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x17eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x17eaf4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x17eaf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaf8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x17eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x17eafc: 0x0  nop
    ctx->pc = 0x17eafcu;
    // NOP
label_17eb00:
    // 0x17eb00: 0xae65007c  sw          $a1, 0x7C($s3)
    ctx->pc = 0x17eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 5));
    // 0x17eb04: 0xc041290  jal         func_104A40
    ctx->pc = 0x17EB04u;
    SET_GPR_U32(ctx, 31, 0x17EB0Cu);
    ctx->pc = 0x17EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB04u;
    // 0x17eb08: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x17EB04u, 0x17EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB0Cu;
label_17eb0c:
    // 0x17eb0c: 0xc041294  jal         func_104A50
    ctx->pc = 0x17EB0Cu;
    SET_GPR_U32(ctx, 31, 0x17EB14u);
    ctx->pc = 0x17EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB0Cu;
    // 0x17eb10: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x17EB0Cu, 0x17EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB14u;
label_17eb14:
    // 0x17eb14: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17eb18: 0xc041322  jal         func_104C88
    ctx->pc = 0x17EB18u;
    SET_GPR_U32(ctx, 31, 0x17EB20u);
    ctx->pc = 0x17EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB18u;
    // 0x17eb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x17EB18u, 0x17EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB20u;
label_17eb20:
    // 0x17eb20: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17eb24: 0xc041386  jal         func_104E18
    ctx->pc = 0x17EB24u;
    SET_GPR_U32(ctx, 31, 0x17EB2Cu);
    ctx->pc = 0x17EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB24u;
    // 0x17eb28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x17EB24u, 0x17EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB2Cu;
label_17eb2c:
    // 0x17eb2c: 0x97a50140  lhu         $a1, 0x140($sp)
    ctx->pc = 0x17eb2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17eb30: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x17eb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x17eb34: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x17eb34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17eb38: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x17eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x17eb3c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x17eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x17eb40: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x17eb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x17eb44: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x17eb44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17eb48: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x17eb48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17eb4c: 0x640d0080  daddiu      $t5, $zero, 0x80
    ctx->pc = 0x17eb4cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x17eb50: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x17eb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17eb54: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x17eb54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17eb58: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x17eb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17eb5c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x17eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17eb60: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x17eb60u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x17eb64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17eb68: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17eb6c: 0xa7a20140  sh          $v0, 0x140($sp)
    ctx->pc = 0x17eb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x17eb70: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x17eb70u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x17eb74: 0x27a20141  addiu       $v0, $sp, 0x141
    ctx->pc = 0x17eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
    // 0x17eb78: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17eb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eb7c: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x17eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x17eb80: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x17eb80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x17eb84: 0x27a20141  addiu       $v0, $sp, 0x141
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
    // 0x17eb88: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x17eb88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x17eb8c: 0x27a20145  addiu       $v0, $sp, 0x145
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 325));
    // 0x17eb90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17eb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eb94: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x17eb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x17eb98: 0x4b5025  or          $t2, $v0, $t3
    ctx->pc = 0x17eb98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x17eb9c: 0x27a20145  addiu       $v0, $sp, 0x145
    ctx->pc = 0x17eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 325));
    // 0x17eba0: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x17eba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x17eba4: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17eba8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17eba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ebac: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x17ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x17ebb0: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x17ebb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x17ebb4: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17ebb8: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x17ebb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x17ebbc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17ebbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ebc0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x17ebc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x17ebc4: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x17ebc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17ebc8: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17ebcc: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x17ebccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x17ebd0: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x17ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x17ebd4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17ebd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ebd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17ebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17ebdc: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x17ebdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17ebe0: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x17ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x17ebe4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17ebe8: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x17ebe8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17ebec: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x17EBECu;
    SET_GPR_U32(ctx, 31, 0x17EBF4u);
    ctx->pc = 0x17EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBECu;
    // 0x17ebf0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x17EBECu, 0x17EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBF4u;
label_17ebf4:
    // 0x17ebf4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ebf8: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x17ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x17ebfc: 0xc041418  jal         func_105060
    ctx->pc = 0x17EBFCu;
    SET_GPR_U32(ctx, 31, 0x17EC04u);
    ctx->pc = 0x17EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBFCu;
    // 0x17ec00: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EBFCu, 0x17EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC04u;
label_17ec04:
    // 0x17ec04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ec08: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x17ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x17ec0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ec0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ec10: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x17ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x17ec14: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ec18: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x17ec1c: 0xc041418  jal         func_105060
    ctx->pc = 0x17EC1Cu;
    SET_GPR_U32(ctx, 31, 0x17EC24u);
    ctx->pc = 0x17EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC1Cu;
    // 0x17ec20: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EC1Cu, 0x17EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC24u;
label_17ec24:
    // 0x17ec24: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ec28: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x17ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x17ec2c: 0xc041418  jal         func_105060
    ctx->pc = 0x17EC2Cu;
    SET_GPR_U32(ctx, 31, 0x17EC34u);
    ctx->pc = 0x17EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC2Cu;
    // 0x17ec30: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EC2Cu, 0x17EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC34u;
label_17ec34:
    // 0x17ec34: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x17ec38: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x17ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x17ec3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ec40: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x17ec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x17ec44: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ec48: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17ec4c: 0xc041418  jal         func_105060
    ctx->pc = 0x17EC4Cu;
    SET_GPR_U32(ctx, 31, 0x17EC54u);
    ctx->pc = 0x17EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC4Cu;
    // 0x17ec50: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EC4Cu, 0x17EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC54u;
label_17ec54:
    // 0x17ec54: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x17ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x17ec58: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ec5c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x17ec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x17ec60: 0xc041418  jal         func_105060
    ctx->pc = 0x17EC60u;
    SET_GPR_U32(ctx, 31, 0x17EC68u);
    ctx->pc = 0x17EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC60u;
    // 0x17ec64: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EC60u, 0x17EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC68u;
label_17ec68:
    // 0x17ec68: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ec6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ec6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec70: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x17ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x17ec74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17ec78: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x17ec78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x17ec7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ec80: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x17ec80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17ec84: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17ec84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ec88: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x17ec88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x17ec8c: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x17ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x17ec90: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ec94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ec98: 0xc041418  jal         func_105060
    ctx->pc = 0x17EC98u;
    SET_GPR_U32(ctx, 31, 0x17ECA0u);
    ctx->pc = 0x17EC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC98u;
    // 0x17ec9c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EC98u, 0x17ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECA0u;
label_17eca0:
    // 0x17eca0: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x17eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x17eca4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17eca8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17ecac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ecb0: 0xc041418  jal         func_105060
    ctx->pc = 0x17ECB0u;
    SET_GPR_U32(ctx, 31, 0x17ECB8u);
    ctx->pc = 0x17ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECB0u;
    // 0x17ecb4: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ECB0u, 0x17ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECB8u;
label_17ecb8:
    // 0x17ecb8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ecbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ecbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecc0: 0xc041418  jal         func_105060
    ctx->pc = 0x17ECC0u;
    SET_GPR_U32(ctx, 31, 0x17ECC8u);
    ctx->pc = 0x17ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECC0u;
    // 0x17ecc4: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ECC0u, 0x17ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECC8u;
label_17ecc8:
    // 0x17ecc8: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x17eccc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x17ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x17ecd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ecd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ecd4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ecd8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ecdc: 0xc041418  jal         func_105060
    ctx->pc = 0x17ECDCu;
    SET_GPR_U32(ctx, 31, 0x17ECE4u);
    ctx->pc = 0x17ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECDCu;
    // 0x17ece0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ECDCu, 0x17ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECE4u;
label_17ece4:
    // 0x17ece4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x17ece8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ecec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ecf0: 0xc041418  jal         func_105060
    ctx->pc = 0x17ECF0u;
    SET_GPR_U32(ctx, 31, 0x17ECF8u);
    ctx->pc = 0x17ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECF0u;
    // 0x17ecf4: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ECF0u, 0x17ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECF8u;
label_17ecf8:
    // 0x17ecf8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x17ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x17ecfc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ed00: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x17ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17ed04: 0xc041418  jal         func_105060
    ctx->pc = 0x17ED04u;
    SET_GPR_U32(ctx, 31, 0x17ED0Cu);
    ctx->pc = 0x17ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED04u;
    // 0x17ed08: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ED04u, 0x17ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED0Cu;
label_17ed0c:
    // 0x17ed0c: 0x3c020e08  lui         $v0, 0xE08
    ctx->pc = 0x17ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3592 << 16));
    // 0x17ed10: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ed14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ed18: 0xc041418  jal         func_105060
    ctx->pc = 0x17ED18u;
    SET_GPR_U32(ctx, 31, 0x17ED20u);
    ctx->pc = 0x17ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED18u;
    // 0x17ed1c: 0x34462008  ori         $a2, $v0, 0x2008 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ED18u, 0x17ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED20u;
label_17ed20:
    // 0x17ed20: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x17ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x17ed24: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ed28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x17ed2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17ed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ed30: 0xc041418  jal         func_105060
    ctx->pc = 0x17ED30u;
    SET_GPR_U32(ctx, 31, 0x17ED38u);
    ctx->pc = 0x17ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED30u;
    // 0x17ed34: 0x34469000  ori         $a2, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ED30u, 0x17ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED38u;
label_17ed38:
    // 0x17ed38: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ed3c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17ed40: 0xc041418  jal         func_105060
    ctx->pc = 0x17ED40u;
    SET_GPR_U32(ctx, 31, 0x17ED48u);
    ctx->pc = 0x17ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED40u;
    // 0x17ed44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ED40u, 0x17ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED48u;
label_17ed48:
    // 0x17ed48: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x17ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x17ed4c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x17ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x17ed50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17ed50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17ed54: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ed58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ed5c: 0xc041418  jal         func_105060
    ctx->pc = 0x17ED5Cu;
    SET_GPR_U32(ctx, 31, 0x17ED64u);
    ctx->pc = 0x17ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED5Cu;
    // 0x17ed60: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ED5Cu, 0x17ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED64u;
label_17ed64:
    // 0x17ed64: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x17ed68: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ed6c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x17ed70: 0xc041418  jal         func_105060
    ctx->pc = 0x17ED70u;
    SET_GPR_U32(ctx, 31, 0x17ED78u);
    ctx->pc = 0x17ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED70u;
    // 0x17ed74: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ED70u, 0x17ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED78u;
label_17ed78:
    // 0x17ed78: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x17ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x17ed7c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ed80: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x17ed84: 0xc041418  jal         func_105060
    ctx->pc = 0x17ED84u;
    SET_GPR_U32(ctx, 31, 0x17ED8Cu);
    ctx->pc = 0x17ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED84u;
    // 0x17ed88: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17ED84u, 0x17ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED8Cu;
label_17ed8c:
    // 0x17ed8c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ed90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ed94: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17ED94u;
    {
        const bool branch_taken_0x17ed94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED94u;
        // 0x17ed98: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed94) {
            ctx->pc = 0x17EDA4u;
            goto label_17eda4;
        }
    }
    ctx->pc = 0x17ED9Cu;
    // 0x17ed9c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x17ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x17eda0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x17eda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_17eda4:
    // 0x17eda4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x17eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x17eda8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17edac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17edb0: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x17edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x17edb4: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x17edb4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x17edb8: 0xc041418  jal         func_105060
    ctx->pc = 0x17EDB8u;
    SET_GPR_U32(ctx, 31, 0x17EDC0u);
    ctx->pc = 0x17EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDB8u;
    // 0x17edbc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EDB8u, 0x17EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDC0u;
label_17edc0:
    // 0x17edc0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17edc4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17edc8: 0xc041418  jal         func_105060
    ctx->pc = 0x17EDC8u;
    SET_GPR_U32(ctx, 31, 0x17EDD0u);
    ctx->pc = 0x17EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDC8u;
    // 0x17edcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EDC8u, 0x17EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDD0u;
label_17edd0:
    // 0x17edd0: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x17EDD0u;
    SET_GPR_U32(ctx, 31, 0x17EDD8u);
    ctx->pc = 0x17EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDD0u;
    // 0x17edd4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x17EDD0u, 0x17EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDD8u;
label_17edd8:
    // 0x17edd8: 0xc04139c  jal         func_104E70
    ctx->pc = 0x17EDD8u;
    SET_GPR_U32(ctx, 31, 0x17EDE0u);
    ctx->pc = 0x17EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDD8u;
    // 0x17eddc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x17EDD8u, 0x17EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDE0u;
label_17ede0:
    // 0x17ede0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ede4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ede8: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x17EDE8u;
    SET_GPR_U32(ctx, 31, 0x17EDF0u);
    ctx->pc = 0x17EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDE8u;
    // 0x17edec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x17EDE8u, 0x17EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDF0u;
label_17edf0:
    // 0x17edf0: 0xc041298  jal         func_104A60
    ctx->pc = 0x17EDF0u;
    SET_GPR_U32(ctx, 31, 0x17EDF8u);
    ctx->pc = 0x17EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDF0u;
    // 0x17edf4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x17EDF0u, 0x17EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDF8u;
label_17edf8:
    // 0x17edf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17edf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17edfc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ee00: 0xc041290  jal         func_104A40
    ctx->pc = 0x17EE00u;
    SET_GPR_U32(ctx, 31, 0x17EE08u);
    ctx->pc = 0x17EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE00u;
    // 0x17ee04: 0xae650084  sw          $a1, 0x84($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x17EE00u, 0x17EE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE08u;
label_17ee08:
    // 0x17ee08: 0xc041294  jal         func_104A50
    ctx->pc = 0x17EE08u;
    SET_GPR_U32(ctx, 31, 0x17EE10u);
    ctx->pc = 0x17EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE08u;
    // 0x17ee0c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x17EE08u, 0x17EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE10u;
label_17ee10:
    // 0x17ee10: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ee14: 0xc041322  jal         func_104C88
    ctx->pc = 0x17EE14u;
    SET_GPR_U32(ctx, 31, 0x17EE1Cu);
    ctx->pc = 0x17EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE14u;
    // 0x17ee18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x17EE14u, 0x17EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE1Cu;
label_17ee1c:
    // 0x17ee1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ee20: 0xc041386  jal         func_104E18
    ctx->pc = 0x17EE20u;
    SET_GPR_U32(ctx, 31, 0x17EE28u);
    ctx->pc = 0x17EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE20u;
    // 0x17ee24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x17EE20u, 0x17EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE28u;
label_17ee28:
    // 0x17ee28: 0x97a50140  lhu         $a1, 0x140($sp)
    ctx->pc = 0x17ee28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17ee2c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x17ee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x17ee30: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x17ee30u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17ee34: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x17ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x17ee38: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x17ee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x17ee3c: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x17ee3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x17ee40: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x17ee40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ee44: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x17ee44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17ee48: 0x640d0080  daddiu      $t5, $zero, 0x80
    ctx->pc = 0x17ee48u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x17ee4c: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x17ee4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17ee50: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x17ee50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17ee54: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x17ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17ee58: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x17ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17ee5c: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x17ee5cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x17ee60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17ee64: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x17ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17ee68: 0xa7a20140  sh          $v0, 0x140($sp)
    ctx->pc = 0x17ee68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x17ee6c: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x17ee6cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x17ee70: 0x27a20141  addiu       $v0, $sp, 0x141
    ctx->pc = 0x17ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
    // 0x17ee74: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17ee74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ee78: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x17ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x17ee7c: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x17ee7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x17ee80: 0x27a20141  addiu       $v0, $sp, 0x141
    ctx->pc = 0x17ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
    // 0x17ee84: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x17ee84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x17ee88: 0x27a20145  addiu       $v0, $sp, 0x145
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 325));
    // 0x17ee8c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17ee8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ee90: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x17ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x17ee94: 0x4b5025  or          $t2, $v0, $t3
    ctx->pc = 0x17ee94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x17ee98: 0x27a20145  addiu       $v0, $sp, 0x145
    ctx->pc = 0x17ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 325));
    // 0x17ee9c: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x17ee9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x17eea0: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17eea4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17eea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eea8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x17eea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x17eeac: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x17eeacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x17eeb0: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17eeb4: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x17eeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x17eeb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17eeb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eebc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x17eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x17eec0: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x17eec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17eec4: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17eec8: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x17eec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x17eecc: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x17eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x17eed0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17eed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17eed8: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x17eed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17eedc: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x17eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x17eee0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17eee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17eee4: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x17eee4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17eee8: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x17EEE8u;
    SET_GPR_U32(ctx, 31, 0x17EEF0u);
    ctx->pc = 0x17EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEE8u;
    // 0x17eeec: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x17EEE8u, 0x17EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EEF0u;
label_17eef0:
    // 0x17eef0: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x17eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x17eef4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x17eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x17eef8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17eef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17eefc: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x17eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x17ef00: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ef04: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17ef08: 0xc041418  jal         func_105060
    ctx->pc = 0x17EF08u;
    SET_GPR_U32(ctx, 31, 0x17EF10u);
    ctx->pc = 0x17EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF08u;
    // 0x17ef0c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EF08u, 0x17EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF10u;
label_17ef10:
    // 0x17ef10: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ef14: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x17ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x17ef18: 0xc041418  jal         func_105060
    ctx->pc = 0x17EF18u;
    SET_GPR_U32(ctx, 31, 0x17EF20u);
    ctx->pc = 0x17EF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF18u;
    // 0x17ef1c: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EF18u, 0x17EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF20u;
label_17ef20:
    // 0x17ef20: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x17ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17ef24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ef28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17ef28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ef2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17EF2Cu;
    {
        const bool branch_taken_0x17ef2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF2Cu;
        // 0x17ef30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef2c) {
            ctx->pc = 0x17EF38u;
            goto label_17ef38;
        }
    }
    ctx->pc = 0x17EF34u;
    // 0x17ef34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17ef38:
    // 0x17ef38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17ef38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17ef3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17ef3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ef40: 0xdc26f238  ld          $a2, -0xDC8($at)
    ctx->pc = 0x17ef40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 4294963768)));
    // 0x17ef44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17ef44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17ef48: 0x238fc  dsll32      $a3, $v0, 3
    ctx->pc = 0x17ef48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 3));
    // 0x17ef4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17ef50: 0x3c022410  lui         $v0, 0x2410
    ctx->pc = 0x17ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9232 << 16));
    // 0x17ef54: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x17ef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17ef58: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x17ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x17ef5c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ef60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17ef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17ef64: 0x61b3c  dsll32      $v1, $a2, 12
    ctx->pc = 0x17ef64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 12));
    // 0x17ef68: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x17ef68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x17ef6c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x17ef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x17ef70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17ef74: 0xc041418  jal         func_105060
    ctx->pc = 0x17EF74u;
    SET_GPR_U32(ctx, 31, 0x17EF7Cu);
    ctx->pc = 0x17EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF74u;
    // 0x17ef78: 0x473025  or          $a2, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17EF74u, 0x17EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF7Cu;
label_17ef7c:
    // 0x17ef7c: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x17EF7Cu;
    SET_GPR_U32(ctx, 31, 0x17EF84u);
    ctx->pc = 0x17EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF7Cu;
    // 0x17ef80: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x17EF7Cu, 0x17EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF84u;
label_17ef84:
    // 0x17ef84: 0xc04139c  jal         func_104E70
    ctx->pc = 0x17EF84u;
    SET_GPR_U32(ctx, 31, 0x17EF8Cu);
    ctx->pc = 0x17EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF84u;
    // 0x17ef88: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x17EF84u, 0x17EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF8Cu;
label_17ef8c:
    // 0x17ef8c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17ef90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ef94: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x17EF94u;
    SET_GPR_U32(ctx, 31, 0x17EF9Cu);
    ctx->pc = 0x17EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF94u;
    // 0x17ef98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x17EF94u, 0x17EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF9Cu;
label_17ef9c:
    // 0x17ef9c: 0xc041298  jal         func_104A60
    ctx->pc = 0x17EF9Cu;
    SET_GPR_U32(ctx, 31, 0x17EFA4u);
    ctx->pc = 0x17EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF9Cu;
    // 0x17efa0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x17EF9Cu, 0x17EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFA4u;
label_17efa4:
    // 0x17efa4: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x17efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    // 0x17efa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17efa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efac: 0xc041290  jal         func_104A40
    ctx->pc = 0x17EFACu;
    SET_GPR_U32(ctx, 31, 0x17EFB4u);
    ctx->pc = 0x17EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFACu;
    // 0x17efb0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x17EFACu, 0x17EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFB4u;
label_17efb4:
    // 0x17efb4: 0xc041294  jal         func_104A50
    ctx->pc = 0x17EFB4u;
    SET_GPR_U32(ctx, 31, 0x17EFBCu);
    ctx->pc = 0x17EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFB4u;
    // 0x17efb8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x17EFB4u, 0x17EFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFBCu;
label_17efbc:
    // 0x17efbc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17efc0: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x17EFC0u;
    SET_GPR_U32(ctx, 31, 0x17EFC8u);
    ctx->pc = 0x17EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFC0u;
    // 0x17efc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x17EFC0u, 0x17EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFC8u;
label_17efc8:
    // 0x17efc8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17efcc: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17EFCCu;
    SET_GPR_U32(ctx, 31, 0x17EFD4u);
    ctx->pc = 0x17EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFCCu;
    // 0x17efd0: 0x3c051300  lui         $a1, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17EFCCu, 0x17EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFD4u;
label_17efd4:
    // 0x17efd4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17efd8: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17EFD8u;
    SET_GPR_U32(ctx, 31, 0x17EFE0u);
    ctx->pc = 0x17EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFD8u;
    // 0x17efdc: 0x3c050300  lui         $a1, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17EFD8u, 0x17EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFE0u;
label_17efe0:
    // 0x17efe0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x17efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x17efe4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17efe8: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17EFE8u;
    SET_GPR_U32(ctx, 31, 0x17EFF0u);
    ctx->pc = 0x17EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFE8u;
    // 0x17efec: 0x344501e2  ori         $a1, $v0, 0x1E2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)482);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17EFE8u, 0x17EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFF0u;
label_17eff0:
    // 0x17eff0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17eff4: 0xc041386  jal         func_104E18
    ctx->pc = 0x17EFF4u;
    SET_GPR_U32(ctx, 31, 0x17EFFCu);
    ctx->pc = 0x17EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFF4u;
    // 0x17eff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x17EFF4u, 0x17EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EFFCu;
label_17effc:
    // 0x17effc: 0x97a50140  lhu         $a1, 0x140($sp)
    ctx->pc = 0x17effcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17f000: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x17f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x17f004: 0x25980  sll         $t3, $v0, 6
    ctx->pc = 0x17f004u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17f008: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x17f008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x17f00c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x17f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x17f010: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x17f010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x17f014: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x17f014u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f018: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x17f018u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17f01c: 0x640d0080  daddiu      $t5, $zero, 0x80
    ctx->pc = 0x17f01cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x17f020: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17f024: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x17f024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17f028: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x17f028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17f02c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x17f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17f030: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x17f030u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x17f034: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17f034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17f038: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x17f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17f03c: 0xa7a20140  sh          $v0, 0x140($sp)
    ctx->pc = 0x17f03cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f040: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x17f040u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x17f044: 0x27a20141  addiu       $v0, $sp, 0x141
    ctx->pc = 0x17f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
    // 0x17f048: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17f048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f04c: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x17f04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x17f050: 0x4d6025  or          $t4, $v0, $t5
    ctx->pc = 0x17f050u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x17f054: 0x27a20141  addiu       $v0, $sp, 0x141
    ctx->pc = 0x17f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 321));
    // 0x17f058: 0xa04c0000  sb          $t4, 0x0($v0)
    ctx->pc = 0x17f058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x17f05c: 0x27a20145  addiu       $v0, $sp, 0x145
    ctx->pc = 0x17f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 325));
    // 0x17f060: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17f060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f064: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x17f064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x17f068: 0x4b5025  or          $t2, $v0, $t3
    ctx->pc = 0x17f068u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x17f06c: 0x27a20145  addiu       $v0, $sp, 0x145
    ctx->pc = 0x17f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 325));
    // 0x17f070: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x17f070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x17f074: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17f078: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17f078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f07c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x17f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x17f080: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x17f080u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x17f084: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17f088: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x17f088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x17f08c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17f08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f090: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x17f090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x17f094: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x17f094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17f098: 0x27a20147  addiu       $v0, $sp, 0x147
    ctx->pc = 0x17f098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 327));
    // 0x17f09c: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x17f09cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x17f0a0: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x17f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x17f0a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17f0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f0a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17f0ac: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x17f0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17f0b0: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x17f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x17f0b4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f0b8: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x17f0b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17f0bc: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x17F0BCu;
    SET_GPR_U32(ctx, 31, 0x17F0C4u);
    ctx->pc = 0x17F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0BCu;
    // 0x17f0c0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x17F0BCu, 0x17F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0C4u;
label_17f0c4:
    // 0x17f0c4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x17f0c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f0cc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x17f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x17f0d0: 0xc041418  jal         func_105060
    ctx->pc = 0x17F0D0u;
    SET_GPR_U32(ctx, 31, 0x17F0D8u);
    ctx->pc = 0x17F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0D0u;
    // 0x17f0d4: 0x344617fc  ori         $a2, $v0, 0x17FC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6140);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17F0D0u, 0x17F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0D8u;
label_17f0d8:
    // 0x17f0d8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x17f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x17f0dc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f0e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x17f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0e8: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x17f0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x17f0ec: 0xc041418  jal         func_105060
    ctx->pc = 0x17F0ECu;
    SET_GPR_U32(ctx, 31, 0x17F0F4u);
    ctx->pc = 0x17F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0ECu;
    // 0x17f0f0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x17F0ECu, 0x17F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0F4u;
label_17f0f4:
    // 0x17f0f4: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x17F0F4u;
    SET_GPR_U32(ctx, 31, 0x17F0FCu);
    ctx->pc = 0x17F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0F4u;
    // 0x17f0f8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x17F0F4u, 0x17F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0FCu;
label_17f0fc:
    // 0x17f0fc: 0xc04139c  jal         func_104E70
    ctx->pc = 0x17F0FCu;
    SET_GPR_U32(ctx, 31, 0x17F104u);
    ctx->pc = 0x17F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0FCu;
    // 0x17f100: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x17F0FCu, 0x17F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F104u;
label_17f104:
    // 0x17f104: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x17f104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f108: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f10c: 0x240503f8  addiu       $a1, $zero, 0x3F8
    ctx->pc = 0x17f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x17f110: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x17f110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x17f114: 0xc04134e  jal         func_104D38
    ctx->pc = 0x17F114u;
    SET_GPR_U32(ctx, 31, 0x17F11Cu);
    ctx->pc = 0x17F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F114u;
    // 0x17f118: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x17F114u, 0x17F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F11Cu;
label_17f11c:
    // 0x17f11c: 0xc04150c  jal         func_105430
    ctx->pc = 0x17F11Cu;
    SET_GPR_U32(ctx, 31, 0x17F124u);
    ctx->pc = 0x17F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F11Cu;
    // 0x17f120: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x17F11Cu, 0x17F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F124u;
label_17f124:
    // 0x17f124: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f12c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F12Cu;
    {
        const bool branch_taken_0x17f12c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x17F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F12Cu;
        // 0x17f130: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f12c) {
            ctx->pc = 0x17F140u;
            goto label_17f140;
        }
    }
    ctx->pc = 0x17F134u;
    // 0x17f134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f138: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17F138u;
    {
        const bool branch_taken_0x17f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F138u;
        // 0x17f13c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f138) {
            ctx->pc = 0x17F158u;
            goto label_17f158;
        }
    }
    ctx->pc = 0x17F140u;
label_17f140:
    // 0x17f140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17f144: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17f144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17f148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17f148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f14c: 0x0  nop
    ctx->pc = 0x17f14cu;
    // NOP
    // 0x17f150: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17f150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17f154: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17f154u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17f158:
    // 0x17f158: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x17f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f15c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17f160: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x17f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x17f164: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17f164u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17f168: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x17f168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x17f16c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17f170: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f174: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f178: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F178u;
    {
        const bool branch_taken_0x17f178 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x17F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F178u;
        // 0x17f17c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f178) {
            ctx->pc = 0x17F18Cu;
            goto label_17f18c;
        }
    }
    ctx->pc = 0x17F180u;
    // 0x17f180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f184: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17F184u;
    {
        const bool branch_taken_0x17f184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F184u;
        // 0x17f188: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f184) {
            ctx->pc = 0x17F1A4u;
            goto label_17f1a4;
        }
    }
    ctx->pc = 0x17F18Cu;
label_17f18c:
    // 0x17f18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17f190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17f190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17f194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17f194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f198: 0x0  nop
    ctx->pc = 0x17f198u;
    // NOP
    // 0x17f19c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17f19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17f1a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17f1a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17f1a4:
    // 0x17f1a4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x17f1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f1a8: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x17f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x17f1ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f1b0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17f1b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17f1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f1b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17f1b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17f1bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f1c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x17f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f1c4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x17f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x17f1c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f1cc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x17f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f1d0: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x17f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x17f1d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f1d8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x17f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f1dc: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x17f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x17f1e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f1e4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x17f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x17f1e8: 0xc041424  jal         func_105090
    ctx->pc = 0x17F1E8u;
    SET_GPR_U32(ctx, 31, 0x17F1F0u);
    ctx->pc = 0x17F1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1E8u;
    // 0x17f1ec: 0xae6200a4  sw          $v0, 0xA4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105090u, 0x17F1E8u, 0x17F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1F0u;
label_17f1f0:
    // 0x17f1f0: 0x3c023b00  lui         $v0, 0x3B00
    ctx->pc = 0x17f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15104 << 16));
    // 0x17f1f4: 0x3c043b80  lui         $a0, 0x3B80
    ctx->pc = 0x17f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15232 << 16));
    // 0x17f1f8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x17f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x17f1fc: 0x3c03c4df  lui         $v1, 0xC4DF
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50399 << 16));
    // 0x17f200: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x17f204: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17f204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17f208: 0x3462f000  ori         $v0, $v1, 0xF000
    ctx->pc = 0x17f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x17f20c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x17f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17f210: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17f210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17f214: 0x3c02c4f1  lui         $v0, 0xC4F1
    ctx->pc = 0x17f214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50417 << 16));
    // 0x17f218: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x17f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x17f21c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f220: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x17f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f224: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x17f228: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f22c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17f230: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x17f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f234: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x17f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x17f238: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f23c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x17f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f240: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x17f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x17f244: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17f244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17f248: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17f24c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17f250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17f254: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x17f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x17f258: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f25c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x17f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17f260: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x17f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f264: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x17f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x17f268: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f26c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x17f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17f270: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x17f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f274: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x17f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x17f278: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17f278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f27c: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x17f27cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17f280: 0xc041404  jal         func_105010
    ctx->pc = 0x17F280u;
    SET_GPR_U32(ctx, 31, 0x17F288u);
    ctx->pc = 0x17F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F280u;
    // 0x17f284: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x17F280u, 0x17F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F288u;
label_17f288:
    // 0x17f288: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x17f288u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17f28c: 0xc041404  jal         func_105010
    ctx->pc = 0x17F28Cu;
    SET_GPR_U32(ctx, 31, 0x17F294u);
    ctx->pc = 0x17F290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F28Cu;
    // 0x17f290: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x17F28Cu, 0x17F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F294u;
label_17f294:
    // 0x17f294: 0xc041372  jal         func_104DC8
    ctx->pc = 0x17F294u;
    SET_GPR_U32(ctx, 31, 0x17F29Cu);
    ctx->pc = 0x17F298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F294u;
    // 0x17f298: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x17F294u, 0x17F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F29Cu;
label_17f29c:
    // 0x17f29c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17f2a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f2a4: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x17f2a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x17f2a8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f2ac: 0x3c026c0a  lui         $v0, 0x6C0A
    ctx->pc = 0x17f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
    // 0x17f2b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17f2b4: 0x344883c4  ori         $t0, $v0, 0x83C4
    ctx->pc = 0x17f2b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33732);
    // 0x17f2b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f2b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2bc: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F2BCu;
    SET_GPR_U32(ctx, 31, 0x17F2C4u);
    ctx->pc = 0x17F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2BCu;
    // 0x17f2c0: 0x24650050  addiu       $a1, $v1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F2BCu, 0x17F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2C4u;
label_17f2c4:
    // 0x17f2c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17f2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17f2c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f2cc: 0x94267ac0  lhu         $a2, 0x7AC0($at)
    ctx->pc = 0x17f2ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x3F7AC0u));
    // 0x17f2d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f2d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17f2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17f2dc: 0x8c257ac4  lw          $a1, 0x7AC4($at)
    ctx->pc = 0x17f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F7AC4u));
    // 0x17f2e0: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F2E0u;
    SET_GPR_U32(ctx, 31, 0x17F2E8u);
    ctx->pc = 0x17F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2E0u;
    // 0x17f2e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F2E0u, 0x17F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2E8u;
label_17f2e8:
    // 0x17f2e8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f2ec: 0xc041322  jal         func_104C88
    ctx->pc = 0x17F2ECu;
    SET_GPR_U32(ctx, 31, 0x17F2F4u);
    ctx->pc = 0x17F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2ECu;
    // 0x17f2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x17F2ECu, 0x17F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2F4u;
label_17f2f4:
    // 0x17f2f4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f2f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f2fc: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x17F2FCu;
    SET_GPR_U32(ctx, 31, 0x17F304u);
    ctx->pc = 0x17F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2FCu;
    // 0x17f300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x17F2FCu, 0x17F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F304u;
label_17f304:
    // 0x17f304: 0xc041298  jal         func_104A60
    ctx->pc = 0x17F304u;
    SET_GPR_U32(ctx, 31, 0x17F30Cu);
    ctx->pc = 0x17F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F304u;
    // 0x17f308: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x17F304u, 0x17F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F30Cu;
label_17f30c:
    // 0x17f30c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f310: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17f314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f318: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x17f318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x17f31c: 0xc041290  jal         func_104A40
    ctx->pc = 0x17F31Cu;
    SET_GPR_U32(ctx, 31, 0x17F324u);
    ctx->pc = 0x17F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F31Cu;
    // 0x17f320: 0xae620094  sw          $v0, 0x94($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x17F31Cu, 0x17F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F324u;
label_17f324:
    // 0x17f324: 0xc041294  jal         func_104A50
    ctx->pc = 0x17F324u;
    SET_GPR_U32(ctx, 31, 0x17F32Cu);
    ctx->pc = 0x17F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F324u;
    // 0x17f328: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x17F324u, 0x17F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F32Cu;
label_17f32c:
    // 0x17f32c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f330: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x17F330u;
    SET_GPR_U32(ctx, 31, 0x17F338u);
    ctx->pc = 0x17F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F330u;
    // 0x17f334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x17F330u, 0x17F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F338u;
label_17f338:
    // 0x17f338: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17f338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f33c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x17f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17f340: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x17f340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17f344: 0x10200134  beqz        $at, . + 4 + (0x134 << 2)
    ctx->pc = 0x17F344u;
    {
        const bool branch_taken_0x17f344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F344u;
        // 0x17f348: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f344) {
            ctx->pc = 0x17F818u;
            goto label_17f818;
        }
    }
    ctx->pc = 0x17F34Cu;
    // 0x17f34c: 0x0  nop
    ctx->pc = 0x17f34cu;
    // NOP
label_17f350:
    // 0x17f350: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17f350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17f354: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x17f354u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x17f358: 0x24020715  addiu       $v0, $zero, 0x715
    ctx->pc = 0x17f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1813));
    // 0x17f35c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F35Cu;
    {
        const bool branch_taken_0x17f35c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F35Cu;
        // 0x17f360: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f35c) {
            ctx->pc = 0x17F378u;
            goto label_17f378;
        }
    }
    ctx->pc = 0x17F364u;
    // 0x17f364: 0x2a810019  slti        $at, $s4, 0x19
    ctx->pc = 0x17f364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x17f368: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F368u;
    {
        const bool branch_taken_0x17f368 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F368u;
        // 0x17f36c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f368) {
            ctx->pc = 0x17F378u;
            goto label_17f378;
        }
    }
    ctx->pc = 0x17F370u;
    // 0x17f370: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17f370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x17f374: 0x0  nop
    ctx->pc = 0x17f374u;
    // NOP
label_17f378:
    // 0x17f378: 0x2402070c  addiu       $v0, $zero, 0x70C
    ctx->pc = 0x17f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x17f37c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F37Cu;
    {
        const bool branch_taken_0x17f37c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F37Cu;
        // 0x17f380: 0x2a810068  slti        $at, $s4, 0x68 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)104) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f37c) {
            ctx->pc = 0x17F390u;
            goto label_17f390;
        }
    }
    ctx->pc = 0x17F384u;
    // 0x17f384: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F384u;
    {
        const bool branch_taken_0x17f384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f384) {
            ctx->pc = 0x17F390u;
            goto label_17f390;
        }
    }
    ctx->pc = 0x17F38Cu;
    // 0x17f38c: 0x24150068  addiu       $s5, $zero, 0x68
    ctx->pc = 0x17f38cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_17f390:
    // 0x17f390: 0x24020403  addiu       $v0, $zero, 0x403
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x17f394: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F394u;
    {
        const bool branch_taken_0x17f394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17f394) {
            ctx->pc = 0x17F3B8u;
            goto label_17f3b8;
        }
    }
    ctx->pc = 0x17F39Cu;
    // 0x17f39c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f3a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x17f3a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17f3a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F3A4u;
    {
        const bool branch_taken_0x17f3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3A4u;
        // 0x17f3a8: 0x2a820080  slti        $v0, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3a4) {
            ctx->pc = 0x17F3B8u;
            goto label_17f3b8;
        }
    }
    ctx->pc = 0x17F3ACu;
    // 0x17f3ac: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x17F3ACu;
    {
        const bool branch_taken_0x17f3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f3ac) {
            ctx->pc = 0x17F800u;
            goto label_17f800;
        }
    }
    ctx->pc = 0x17F3B4u;
    // 0x17f3b4: 0x0  nop
    ctx->pc = 0x17f3b4u;
    // NOP
label_17f3b8:
    // 0x17f3b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f3bc: 0x2a2082b  sltu        $at, $s5, $v0
    ctx->pc = 0x17f3bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17f3c0: 0x1020010f  beqz        $at, . + 4 + (0x10F << 2)
    ctx->pc = 0x17F3C0u;
    {
        const bool branch_taken_0x17f3c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3C0u;
        // 0x17f3c4: 0x26960001  addiu       $s6, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3c0) {
            ctx->pc = 0x17F800u;
            goto label_17f800;
        }
    }
    ctx->pc = 0x17F3C8u;
    // 0x17f3c8: 0x269e0002  addiu       $fp, $s4, 0x2
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x17f3cc: 0x0  nop
    ctx->pc = 0x17f3ccu;
    // NOP
label_17f3d0:
    // 0x17f3d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f3d4: 0x55b823  subu        $s7, $v0, $s5
    ctx->pc = 0x17f3d4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17f3d8: 0x2ee10028  sltiu       $at, $s7, 0x28
    ctx->pc = 0x17f3d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x17f3dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F3DCu;
    {
        const bool branch_taken_0x17f3dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f3dc) {
            ctx->pc = 0x17F3ECu;
            goto label_17f3ec;
        }
    }
    ctx->pc = 0x17F3E4u;
    // 0x17f3e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17F3E4u;
    {
        const bool branch_taken_0x17f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3E4u;
        // 0x17f3e8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3e4) {
            ctx->pc = 0x17F3F4u;
            goto label_17f3f4;
        }
    }
    ctx->pc = 0x17F3ECu;
label_17f3ec:
    // 0x17f3ec: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x17f3ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17f3f0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x17f3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17f3f4:
    // 0x17f3f4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f3f8: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x17f3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x17f3fc: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x17f3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x17f400: 0xc04134e  jal         func_104D38
    ctx->pc = 0x17F400u;
    SET_GPR_U32(ctx, 31, 0x17F408u);
    ctx->pc = 0x17F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F400u;
    // 0x17f404: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D38u, 0x17F400u, 0x17F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F408u;
label_17f408:
    // 0x17f408: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x17f408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x17f40c: 0x97a500d0  lhu         $a1, 0xD0($sp)
    ctx->pc = 0x17f40cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17f410: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x17f410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x17f414: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x17f414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x17f418: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x17f418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x17f41c: 0x240eff7f  addiu       $t6, $zero, -0x81
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x17f420: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17f424: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x17f424u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x17f428: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x17f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x17f42c: 0x240dffbf  addiu       $t5, $zero, -0x41
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17f430: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f434: 0x240cfff3  addiu       $t4, $zero, -0xD
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17f438: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x17f438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17f43c: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x17f440: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17f444: 0x64080030  daddiu      $t0, $zero, 0x30
    ctx->pc = 0x17f444u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
    // 0x17f448: 0xa7a200d0  sh          $v0, 0xD0($sp)
    ctx->pc = 0x17f448u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f44c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17f450: 0x27a200d1  addiu       $v0, $sp, 0xD1
    ctx->pc = 0x17f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 209));
    // 0x17f454: 0x64060002  daddiu      $a2, $zero, 0x2
    ctx->pc = 0x17f454u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x17f458: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x17f458u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f45c: 0x64030010  daddiu      $v1, $zero, 0x10
    ctx->pc = 0x17f45cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x17f460: 0x1ee7024  and         $t6, $t7, $t6
    ctx->pc = 0x17f460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x17f464: 0x64020004  daddiu      $v0, $zero, 0x4
    ctx->pc = 0x17f464u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x17f468: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x17f468u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x17f46c: 0x27ab00d1  addiu       $t3, $sp, 0xD1
    ctx->pc = 0x17f46cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 209));
    // 0x17f470: 0xa16e0000  sb          $t6, 0x0($t3)
    ctx->pc = 0x17f470u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x17f474: 0x27ab00d5  addiu       $t3, $sp, 0xD5
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 213));
    // 0x17f478: 0x916b0000  lbu         $t3, 0x0($t3)
    ctx->pc = 0x17f478u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17f47c: 0x16d5824  and         $t3, $t3, $t5
    ctx->pc = 0x17f47cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
    // 0x17f480: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x17f480u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x17f484: 0x27aa00d5  addiu       $t2, $sp, 0xD5
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 213));
    // 0x17f488: 0xa14b0000  sb          $t3, 0x0($t2)
    ctx->pc = 0x17f488u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x17f48c: 0x27aa00d7  addiu       $t2, $sp, 0xD7
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 215));
    // 0x17f490: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x17f490u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17f494: 0x14c5024  and         $t2, $t2, $t4
    ctx->pc = 0x17f494u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x17f498: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x17f498u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x17f49c: 0x27a900d7  addiu       $t1, $sp, 0xD7
    ctx->pc = 0x17f49cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 215));
    // 0x17f4a0: 0xa12a0000  sb          $t2, 0x0($t1)
    ctx->pc = 0x17f4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x17f4a4: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x17f4a4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17f4a8: 0x1274824  and         $t1, $t1, $a3
    ctx->pc = 0x17f4a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x17f4ac: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x17f4acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x17f4b0: 0x27a800d7  addiu       $t0, $sp, 0xD7
    ctx->pc = 0x17f4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 215));
    // 0x17f4b4: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x17f4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x17f4b8: 0x27a800d8  addiu       $t0, $sp, 0xD8
    ctx->pc = 0x17f4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x17f4bc: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x17f4bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17f4c0: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x17f4c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x17f4c4: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x17f4c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x17f4c8: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x17f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x17f4cc: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x17f4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x17f4d0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x17f4d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17f4d4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x17f4d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x17f4d8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x17f4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x17f4dc: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x17f4e0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x17f4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x17f4e4: 0x27a300d9  addiu       $v1, $sp, 0xD9
    ctx->pc = 0x17f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 217));
    // 0x17f4e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17f4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f4ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x17f4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x17f4f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17f4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17f4f4: 0x27a200d9  addiu       $v0, $sp, 0xD9
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 217));
    // 0x17f4f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x17f4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f4fc: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x17f4fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17f500: 0xc041404  jal         func_105010
    ctx->pc = 0x17F500u;
    SET_GPR_U32(ctx, 31, 0x17F508u);
    ctx->pc = 0x17F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F500u;
    // 0x17f504: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x17F500u, 0x17F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F508u;
label_17f508:
    // 0x17f508: 0xc041372  jal         func_104DC8
    ctx->pc = 0x17F508u;
    SET_GPR_U32(ctx, 31, 0x17F510u);
    ctx->pc = 0x17F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F508u;
    // 0x17f50c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DC8u, 0x17F508u, 0x17F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F510u;
label_17f510:
    // 0x17f510: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f514: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x17f518: 0x178882  srl         $s1, $s7, 2
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x17f51c: 0x179400  sll         $s2, $s7, 16
    ctx->pc = 0x17f51cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x17f520: 0x3442c002  ori         $v0, $v0, 0xC002
    ctx->pc = 0x17f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49154);
    // 0x17f524: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17f528: 0x2424025  or          $t0, $s2, $v0
    ctx->pc = 0x17f528u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f52c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f530: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f538: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f53c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f53cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f540: 0x2851018  mult        $v0, $s4, $a1
    ctx->pc = 0x17f540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f544: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f54c: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F54Cu;
    SET_GPR_U32(ctx, 31, 0x17F554u);
    ctx->pc = 0x17F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F54Cu;
    // 0x17f550: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F54Cu, 0x17F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F554u;
label_17f554:
    // 0x17f554: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17f554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f558: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x17f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x17f55c: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x17f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x17f560: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17f564: 0x2424025  or          $t0, $s2, $v0
    ctx->pc = 0x17f564u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f568: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f56c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f570: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f574: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f578: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f57c: 0x2c51018  mult        $v0, $s6, $a1
    ctx->pc = 0x17f57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f580: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f588: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F588u;
    SET_GPR_U32(ctx, 31, 0x17F590u);
    ctx->pc = 0x17F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F588u;
    // 0x17f58c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F588u, 0x17F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F590u;
label_17f590:
    // 0x17f590: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17f590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f594: 0x3c026d00  lui         $v0, 0x6D00
    ctx->pc = 0x17f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
    // 0x17f598: 0x3442c001  ori         $v0, $v0, 0xC001
    ctx->pc = 0x17f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49153);
    // 0x17f59c: 0x17b842  srl         $s7, $s7, 1
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x17f5a0: 0x2424025  or          $t0, $s2, $v0
    ctx->pc = 0x17f5a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f5a4: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x17f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17f5a8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f5ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f5b0: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f5b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f5b4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17f5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5bc: 0x2851018  mult        $v0, $s4, $a1
    ctx->pc = 0x17f5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f5c0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f5c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17f5c8: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F5C8u;
    SET_GPR_U32(ctx, 31, 0x17F5D0u);
    ctx->pc = 0x17F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5C8u;
    // 0x17f5cc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F5C8u, 0x17F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5D0u;
label_17f5d0:
    // 0x17f5d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f5d4: 0x3c026d00  lui         $v0, 0x6D00
    ctx->pc = 0x17f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
    // 0x17f5d8: 0x3442c004  ori         $v0, $v0, 0xC004
    ctx->pc = 0x17f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49156);
    // 0x17f5dc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x17f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17f5e0: 0x2424025  or          $t0, $s2, $v0
    ctx->pc = 0x17f5e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f5e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17f5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5e8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f5ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f5f0: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f5f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f5f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5f8: 0x2c51018  mult        $v0, $s6, $a1
    ctx->pc = 0x17f5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f5fc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f600: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17f600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17f604: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F604u;
    SET_GPR_U32(ctx, 31, 0x17F60Cu);
    ctx->pc = 0x17F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F604u;
    // 0x17f608: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F604u, 0x17F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F60Cu;
label_17f60c:
    // 0x17f60c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f610: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x17F610u;
    SET_GPR_U32(ctx, 31, 0x17F618u);
    ctx->pc = 0x17F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F610u;
    // 0x17f614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x17F610u, 0x17F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F618u;
label_17f618:
    // 0x17f618: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f61c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F61Cu;
    SET_GPR_U32(ctx, 31, 0x17F624u);
    ctx->pc = 0x17F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F61Cu;
    // 0x17f620: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F61Cu, 0x17F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F624u;
label_17f624:
    // 0x17f624: 0x3c02f3f3  lui         $v0, 0xF3F3
    ctx->pc = 0x17f624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62451 << 16));
    // 0x17f628: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f62c: 0xc0413fe  jal         func_104FF8
    ctx->pc = 0x17F62Cu;
    SET_GPR_U32(ctx, 31, 0x17F634u);
    ctx->pc = 0x17F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F62Cu;
    // 0x17f630: 0x3445f3f3  ori         $a1, $v0, 0xF3F3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62451);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FF8u, 0x17F62Cu, 0x17F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F634u;
label_17f634:
    // 0x17f634: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17f634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f638: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17f63c: 0x3442c001  ori         $v0, $v0, 0xC001
    ctx->pc = 0x17f63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49153);
    // 0x17f640: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x17f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x17f644: 0x2424025  or          $t0, $s2, $v0
    ctx->pc = 0x17f644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f648: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f64c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f654: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f65c: 0x2c51018  mult        $v0, $s6, $a1
    ctx->pc = 0x17f65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f660: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f66c: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F66Cu;
    SET_GPR_U32(ctx, 31, 0x17F674u);
    ctx->pc = 0x17F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F66Cu;
    // 0x17f670: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F66Cu, 0x17F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F674u;
label_17f674:
    // 0x17f674: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17f674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f678: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17f678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17f67c: 0x3442c004  ori         $v0, $v0, 0xC004
    ctx->pc = 0x17f67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49156);
    // 0x17f680: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x17f684: 0x2424025  or          $t0, $s2, $v0
    ctx->pc = 0x17f684u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f688: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f68c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f690: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f694: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f69c: 0x3c51018  mult        $v0, $fp, $a1
    ctx->pc = 0x17f69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f6a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f6a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f6a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f6ac: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F6ACu;
    SET_GPR_U32(ctx, 31, 0x17F6B4u);
    ctx->pc = 0x17F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6ACu;
    // 0x17f6b0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F6ACu, 0x17F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6B4u;
label_17f6b4:
    // 0x17f6b4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f6b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17f6bc: 0x3442c003  ori         $v0, $v0, 0xC003
    ctx->pc = 0x17f6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49155);
    // 0x17f6c0: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x17f6c4: 0x242b825  or          $s7, $s2, $v0
    ctx->pc = 0x17f6c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f6c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f6cc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f6d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6d4: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f6d8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x17f6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6e0: 0x2c51018  mult        $v0, $s6, $a1
    ctx->pc = 0x17f6e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f6e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f6e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f6ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f6f0: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F6F0u;
    SET_GPR_U32(ctx, 31, 0x17F6F8u);
    ctx->pc = 0x17F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6F0u;
    // 0x17f6f4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F6F0u, 0x17F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6F8u;
label_17f6f8:
    // 0x17f6f8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f6fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17f700: 0x3442c006  ori         $v0, $v0, 0xC006
    ctx->pc = 0x17f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49158);
    // 0x17f704: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x17f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x17f708: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x17f708u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x17f70c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f710: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f714: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f718: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f71c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17f71cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f724: 0x3c51018  mult        $v0, $fp, $a1
    ctx->pc = 0x17f724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f728: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f72c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f734: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F734u;
    SET_GPR_U32(ctx, 31, 0x17F73Cu);
    ctx->pc = 0x17F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F734u;
    // 0x17f738: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F734u, 0x17F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F73Cu;
label_17f73c:
    // 0x17f73c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f740: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x17F740u;
    SET_GPR_U32(ctx, 31, 0x17F748u);
    ctx->pc = 0x17F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F740u;
    // 0x17f744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x17F740u, 0x17F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F748u;
label_17f748:
    // 0x17f748: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f74c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F74Cu;
    SET_GPR_U32(ctx, 31, 0x17F754u);
    ctx->pc = 0x17F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F74Cu;
    // 0x17f750: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F74Cu, 0x17F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F754u;
label_17f754:
    // 0x17f754: 0x3c02fcfc  lui         $v0, 0xFCFC
    ctx->pc = 0x17f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64764 << 16));
    // 0x17f758: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f75c: 0xc0413fe  jal         func_104FF8
    ctx->pc = 0x17F75Cu;
    SET_GPR_U32(ctx, 31, 0x17F764u);
    ctx->pc = 0x17F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F75Cu;
    // 0x17f760: 0x3445fcfc  ori         $a1, $v0, 0xFCFC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64764);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FF8u, 0x17F75Cu, 0x17F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F764u;
label_17f764:
    // 0x17f764: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17f764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f768: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f76c: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f76cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f770: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x17f774: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x17f774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f778: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f77c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f784: 0x2c51018  mult        $v0, $s6, $a1
    ctx->pc = 0x17f784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f788: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f78c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f794: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F794u;
    SET_GPR_U32(ctx, 31, 0x17F79Cu);
    ctx->pc = 0x17F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F794u;
    // 0x17f798: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F794u, 0x17F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F79Cu;
label_17f79c:
    // 0x17f79c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f7a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f7a4: 0x34470106  ori         $a3, $v0, 0x106
    ctx->pc = 0x17f7a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x17f7a8: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x17f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x17f7ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17f7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x17f7b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f7b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7bc: 0x3c51018  mult        $v0, $fp, $a1
    ctx->pc = 0x17f7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17f7c0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17f7c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f7cc: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x17F7CCu;
    SET_GPR_U32(ctx, 31, 0x17F7D4u);
    ctx->pc = 0x17F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7CCu;
    // 0x17f7d0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x17F7CCu, 0x17F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7D4u;
label_17f7d4:
    // 0x17f7d4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f7d8: 0xc0412ae  jal         func_104AB8
    ctx->pc = 0x17F7D8u;
    SET_GPR_U32(ctx, 31, 0x17F7E0u);
    ctx->pc = 0x17F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7D8u;
    // 0x17f7dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104AB8u, 0x17F7D8u, 0x17F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7E0u;
label_17f7e0:
    // 0x17f7e0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f7e4: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F7E4u;
    SET_GPR_U32(ctx, 31, 0x17F7ECu);
    ctx->pc = 0x17F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7E4u;
    // 0x17f7e8: 0x3c051700  lui         $a1, 0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5888 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F7E4u, 0x17F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7ECu;
label_17f7ec:
    // 0x17f7ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f7f0: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x17f7f4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x17f7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17f7f8: 0x1440fef5  bnez        $v0, . + 4 + (-0x10B << 2)
    ctx->pc = 0x17F7F8u;
    {
        const bool branch_taken_0x17f7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f7f8) {
            ctx->pc = 0x17F3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f3d0;
        }
    }
    ctx->pc = 0x17F800u;
label_17f800:
    // 0x17f800: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f804: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17f804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17f808: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x17f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17f80c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x17f80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17f810: 0x1440fecf  bnez        $v0, . + 4 + (-0x131 << 2)
    ctx->pc = 0x17F810u;
    {
        const bool branch_taken_0x17f810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f810) {
            ctx->pc = 0x17F350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f350;
        }
    }
    ctx->pc = 0x17F818u;
label_17f818:
    // 0x17f818: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f81c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F81Cu;
    SET_GPR_U32(ctx, 31, 0x17F824u);
    ctx->pc = 0x17F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F81Cu;
    // 0x17f820: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F81Cu, 0x17F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F824u;
label_17f824:
    // 0x17f824: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f828: 0xc0413fe  jal         func_104FF8
    ctx->pc = 0x17F828u;
    SET_GPR_U32(ctx, 31, 0x17F830u);
    ctx->pc = 0x17F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F828u;
    // 0x17f82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FF8u, 0x17F828u, 0x17F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F830u;
label_17f830:
    // 0x17f830: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f834: 0xc041322  jal         func_104C88
    ctx->pc = 0x17F834u;
    SET_GPR_U32(ctx, 31, 0x17F83Cu);
    ctx->pc = 0x17F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F834u;
    // 0x17f838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x17F834u, 0x17F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F83Cu;
label_17f83c:
    // 0x17f83c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f844: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x17F844u;
    SET_GPR_U32(ctx, 31, 0x17F84Cu);
    ctx->pc = 0x17F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F844u;
    // 0x17f848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x17F844u, 0x17F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F84Cu;
label_17f84c:
    // 0x17f84c: 0xc041298  jal         func_104A60
    ctx->pc = 0x17F84Cu;
    SET_GPR_U32(ctx, 31, 0x17F854u);
    ctx->pc = 0x17F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F84Cu;
    // 0x17f850: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x17F84Cu, 0x17F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F854u;
label_17f854:
    // 0x17f854: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x17f854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
    // 0x17f858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17f858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f85c: 0xc041290  jal         func_104A40
    ctx->pc = 0x17F85Cu;
    SET_GPR_U32(ctx, 31, 0x17F864u);
    ctx->pc = 0x17F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F85Cu;
    // 0x17f860: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x17F85Cu, 0x17F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F864u;
label_17f864:
    // 0x17f864: 0xc041294  jal         func_104A50
    ctx->pc = 0x17F864u;
    SET_GPR_U32(ctx, 31, 0x17F86Cu);
    ctx->pc = 0x17F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F864u;
    // 0x17f868: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x17F864u, 0x17F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F86Cu;
label_17f86c:
    // 0x17f86c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f870: 0xc041322  jal         func_104C88
    ctx->pc = 0x17F870u;
    SET_GPR_U32(ctx, 31, 0x17F878u);
    ctx->pc = 0x17F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F870u;
    // 0x17f874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x17F870u, 0x17F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F878u;
label_17f878:
    // 0x17f878: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f87c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F87Cu;
    SET_GPR_U32(ctx, 31, 0x17F884u);
    ctx->pc = 0x17F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F87Cu;
    // 0x17f880: 0x3c051300  lui         $a1, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F87Cu, 0x17F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F884u;
label_17f884:
    // 0x17f884: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f888: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F888u;
    SET_GPR_U32(ctx, 31, 0x17F890u);
    ctx->pc = 0x17F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F888u;
    // 0x17f88c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F888u, 0x17F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F890u;
label_17f890:
    // 0x17f890: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x17f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x17f894: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f898: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F898u;
    SET_GPR_U32(ctx, 31, 0x17F8A0u);
    ctx->pc = 0x17F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F898u;
    // 0x17f89c: 0x34450288  ori         $a1, $v0, 0x288 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)648);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F898u, 0x17F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8A0u;
label_17f8a0:
    // 0x17f8a0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x17f8a4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f8a8: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F8A8u;
    SET_GPR_U32(ctx, 31, 0x17F8B0u);
    ctx->pc = 0x17F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8A8u;
    // 0x17f8ac: 0x344500b0  ori         $a1, $v0, 0xB0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F8A8u, 0x17F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8B0u;
label_17f8b0:
    // 0x17f8b0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x17f8b4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f8b8: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x17F8B8u;
    SET_GPR_U32(ctx, 31, 0x17F8C0u);
    ctx->pc = 0x17F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8B8u;
    // 0x17f8bc: 0x34450404  ori         $a1, $v0, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x17F8B8u, 0x17F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8C0u;
label_17f8c0:
    // 0x17f8c0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17f8c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f8c8: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x17F8C8u;
    SET_GPR_U32(ctx, 31, 0x17F8D0u);
    ctx->pc = 0x17F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8C8u;
    // 0x17f8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x17F8C8u, 0x17F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8D0u;
label_17f8d0:
    // 0x17f8d0: 0xc041298  jal         func_104A60
    ctx->pc = 0x17F8D0u;
    SET_GPR_U32(ctx, 31, 0x17F8D8u);
    ctx->pc = 0x17F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8D0u;
    // 0x17f8d4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x17F8D0u, 0x17F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8D8u;
label_17f8d8:
    // 0x17f8d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f8dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17f8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17f8e4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x17f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x17f8e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17f8ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17f8f0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x17f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x17f8f4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17f8f8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17f8fc: 0x1460fc80  bnez        $v1, . + 4 + (-0x380 << 2)
    ctx->pc = 0x17F8FCu;
    {
        const bool branch_taken_0x17f8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8FCu;
        // 0x17f900: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8fc) {
            ctx->pc = 0x17EB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eb00;
        }
    }
    ctx->pc = 0x17F904u;
    // 0x17f904: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17f904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f908: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17f908u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17f90c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17f90cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17f910: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17f910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f914: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17f914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17f918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f91c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F92Cu;
        // 0x17f930: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F934u;
}
