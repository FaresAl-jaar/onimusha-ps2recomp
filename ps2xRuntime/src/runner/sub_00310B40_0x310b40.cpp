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

// Function: sub_00310B40
// Address: 0x310b40 - 0x311848
void sub_00310B40_0x310b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310B40_0x310b40");
#endif

    switch (ctx->pc) {
        case 0x310bb8u: goto label_310bb8;
        case 0x310bccu: goto label_310bcc;
        case 0x310bd4u: goto label_310bd4;
        case 0x310c18u: goto label_310c18;
        case 0x310c30u: goto label_310c30;
        case 0x310e20u: goto label_310e20;
        case 0x310e98u: goto label_310e98;
        case 0x310eacu: goto label_310eac;
        case 0x310f00u: goto label_310f00;
        case 0x310f10u: goto label_310f10;
        case 0x310f38u: goto label_310f38;
        case 0x310f48u: goto label_310f48;
        case 0x310f60u: goto label_310f60;
        case 0x310fa0u: goto label_310fa0;
        case 0x3111ccu: goto label_3111cc;
        case 0x3111f0u: goto label_3111f0;
        case 0x311214u: goto label_311214;
        case 0x311238u: goto label_311238;
        case 0x311410u: goto label_311410;
        case 0x311420u: goto label_311420;
        case 0x31153cu: goto label_31153c;
        case 0x311550u: goto label_311550;
        case 0x3117e8u: goto label_3117e8;
        case 0x3117f0u: goto label_3117f0;
        case 0x311800u: goto label_311800;
        default: break;
    }

    ctx->pc = 0x310b40u;

    // 0x310b40: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x310b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x310b44: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x310b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x310b48: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x310b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x310b4c: 0x34420fc0  ori         $v0, $v0, 0xFC0
    ctx->pc = 0x310b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4032);
    // 0x310b50: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x310b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x310b54: 0x3c03c240  lui         $v1, 0xC240
    ctx->pc = 0x310b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49728 << 16));
    // 0x310b58: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x310b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x310b5c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x310b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x310b60: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x310b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x310b64: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x310b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x310b68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x310b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x310b6c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x310b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x310b70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x310b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x310b74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x310b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x310b78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x310b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x310b7c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x310b7cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x310b80: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x310b80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x310b84: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x310b84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x310b88: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x310b88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x310b8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x310b8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x310b90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x310b90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310b94: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x310b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x310b98: 0x4483c800  mtc1        $v1, $f25
    ctx->pc = 0x310b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x310b9c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x310b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x310ba0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x310ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x310ba4: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x310ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x310ba8: 0x24512004  addiu       $s1, $v0, 0x2004
    ctx->pc = 0x310ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8196));
    // 0x310bac: 0x24020fc0  addiu       $v0, $zero, 0xFC0
    ctx->pc = 0x310bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4032));
    // 0x310bb0: 0xc0410a6  jal         func_104298
    ctx->pc = 0x310BB0u;
    SET_GPR_U32(ctx, 31, 0x310BB8u);
    ctx->pc = 0x310BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BB0u;
    // 0x310bb4: 0xac22d480  sw          $v0, -0x2B80($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x310BB0u, 0x310BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BB8u;
label_310bb8:
    // 0x310bb8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x310bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x310bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310bc0: 0x24a59230  addiu       $a1, $a1, -0x6DD0
    ctx->pc = 0x310bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
    // 0x310bc4: 0xc04118c  jal         func_104630
    ctx->pc = 0x310BC4u;
    SET_GPR_U32(ctx, 31, 0x310BCCu);
    ctx->pc = 0x310BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BC4u;
    // 0x310bc8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104630u, 0x310BC4u, 0x310BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BCCu;
label_310bcc:
    // 0x310bcc: 0xc043898  jal         func_10E260
    ctx->pc = 0x310BCCu;
    SET_GPR_U32(ctx, 31, 0x310BD4u);
    ctx->pc = 0x310BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BCCu;
    // 0x310bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x310BCCu, 0x310BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BD4u;
label_310bd4:
    // 0x310bd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x310bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x310bd8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x310bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x310bdc: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x310bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x310be0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x310be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x310be4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x310be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x310be8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x310be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x310bec: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x310bf0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x310bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x310bf4: 0x83a025  or          $s4, $a0, $v1
    ctx->pc = 0x310bf4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x310bf8: 0x12800301  beqz        $s4, . + 4 + (0x301 << 2)
    ctx->pc = 0x310BF8u;
    {
        const bool branch_taken_0x310bf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x310bf8) {
            ctx->pc = 0x311800u;
            goto label_311800;
        }
    }
    ctx->pc = 0x310C00u;
    // 0x310c00: 0xafb40188  sw          $s4, 0x188($sp)
    ctx->pc = 0x310c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 20));
    // 0x310c04: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x310c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x310c08: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x310c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x310c0c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x310c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x310c10: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x310C10u;
    SET_GPR_U32(ctx, 31, 0x310C18u);
    ctx->pc = 0x310C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C10u;
    // 0x310c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x310C10u, 0x310C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C18u;
label_310c18:
    // 0x310c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c1c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x310C1Cu;
    {
        const bool branch_taken_0x310c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c1c) {
            ctx->pc = 0x310C38u;
            goto label_310c38;
        }
    }
    ctx->pc = 0x310C24u;
    // 0x310c24: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x310c24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x310c28: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x310C28u;
    SET_GPR_U32(ctx, 31, 0x310C30u);
    ctx->pc = 0x310C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C28u;
    // 0x310c2c: 0x92250004  lbu         $a1, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x310C28u, 0x310C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C30u;
label_310c30:
    // 0x310c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x310C30u;
    {
        const bool branch_taken_0x310c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c30) {
            ctx->pc = 0x310C40u;
            goto label_310c40;
        }
    }
    ctx->pc = 0x310C38u;
label_310c38:
    // 0x310c38: 0x100002f1  b           . + 4 + (0x2F1 << 2)
    ctx->pc = 0x310C38u;
    {
        const bool branch_taken_0x310c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c38) {
            ctx->pc = 0x311800u;
            goto label_311800;
        }
    }
    ctx->pc = 0x310C40u;
label_310c40:
    // 0x310c40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x310c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x310c44: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x310c44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x310c48: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x310c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x310c4c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x310c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x310c50: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x310c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x310c54: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x310c54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x310c58: 0x346a1001  ori         $t2, $v1, 0x1001
    ctx->pc = 0x310c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x310c5c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x310c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x310c60: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x310c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x310c64: 0xaf948b28  sw          $s4, -0x74D8($gp)
    ctx->pc = 0x310c64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 20));
    // 0x310c68: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x310c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x310c6c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310c6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310c70: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x310c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x310c74: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x310c74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x310c78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x310c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x310c7c: 0xaf948b2c  sw          $s4, -0x74D4($gp)
    ctx->pc = 0x310c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 20));
    // 0x310c80: 0x240c0061  addiu       $t4, $zero, 0x61
    ctx->pc = 0x310c80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x310c84: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310c88: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x310c88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x310c8c: 0xfe880000  sd          $t0, 0x0($s4)
    ctx->pc = 0x310c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 8));
    // 0x310c90: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x310c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x310c94: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x310c94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x310c98: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x310c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x310c9c: 0xaf948b30  sw          $s4, -0x74D0($gp)
    ctx->pc = 0x310c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 20));
    // 0x310ca0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x310ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x310ca4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310ca8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x310ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x310cac: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x310cacu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
    // 0x310cb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x310cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x310cb4: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x310cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x310cb8: 0x70034389  pcpyld      $t0, $zero, $v1
    ctx->pc = 0x310cb8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x310cbc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310cc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x310cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x310cc4: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x310cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
    // 0x310cc8: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x310cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x310ccc: 0xfe850008  sd          $a1, 0x8($s4)
    ctx->pc = 0x310cccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
    // 0x310cd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x310cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310cd4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310cd8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x310cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x310cdc: 0xfe8c0000  sd          $t4, 0x0($s4)
    ctx->pc = 0x310cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 12));
    // 0x310ce0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x310ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x310ce4: 0xfe8b0008  sd          $t3, 0x8($s4)
    ctx->pc = 0x310ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 11));
    // 0x310ce8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x310ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x310cec: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310cecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310cf0: 0xfe8a0000  sd          $t2, 0x0($s4)
    ctx->pc = 0x310cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 10));
    // 0x310cf4: 0xfe890008  sd          $t1, 0x8($s4)
    ctx->pc = 0x310cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 9));
    // 0x310cf8: 0x8c29f014  lw          $t1, -0xFEC($at)
    ctx->pc = 0x310cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F014u));
    // 0x310cfc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310d00: 0xdd290020  ld          $t1, 0x20($t1)
    ctx->pc = 0x310d00u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x310d04: 0x312901ff  andi        $t1, $t1, 0x1FF
    ctx->pc = 0x310d04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)511);
    // 0x310d08: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x310d08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x310d0c: 0xfe880000  sd          $t0, 0x0($s4)
    ctx->pc = 0x310d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 8));
    // 0x310d10: 0xfe870008  sd          $a3, 0x8($s4)
    ctx->pc = 0x310d10u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 7));
    // 0x310d14: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310d14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310d18: 0xfe860000  sd          $a2, 0x0($s4)
    ctx->pc = 0x310d18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 6));
    // 0x310d1c: 0xfe850008  sd          $a1, 0x8($s4)
    ctx->pc = 0x310d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
    // 0x310d20: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310d20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310d24: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x310d24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x310d28: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x310d28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x310d2c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310d30: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x310d30u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x310d34: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x310d34u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x310d38: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x310d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x310d3c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310d40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x310d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x310d44: 0x21e82  srl         $v1, $v0, 26
    ctx->pc = 0x310d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x310d48: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x310d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x310d4c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x310d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x310d50: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x310D50u;
    {
        const bool branch_taken_0x310d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x310D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D50u;
        // 0x310d54: 0x3045000f  andi        $a1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d50) {
            ctx->pc = 0x310DA0u;
            goto label_310da0;
        }
    }
    ctx->pc = 0x310D58u;
    // 0x310d58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x310d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310d5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x310D5Cu;
    {
        const bool branch_taken_0x310d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x310d5c) {
            ctx->pc = 0x310D78u;
            goto label_310d78;
        }
    }
    ctx->pc = 0x310D64u;
    // 0x310d64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x310D64u;
    {
        const bool branch_taken_0x310d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d64) {
            ctx->pc = 0x310D78u;
            goto label_310d78;
        }
    }
    ctx->pc = 0x310D6Cu;
    // 0x310d6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x310D6Cu;
    {
        const bool branch_taken_0x310d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d6c) {
            ctx->pc = 0x310DD0u;
            goto label_310dd0;
        }
    }
    ctx->pc = 0x310D74u;
    // 0x310d74: 0x0  nop
    ctx->pc = 0x310d74u;
    // NOP
label_310d78:
    // 0x310d78: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x310d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x310d7c: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x310d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x310d80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x310D80u;
    {
        const bool branch_taken_0x310d80 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x310D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D80u;
        // 0x310d84: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d80) {
            ctx->pc = 0x310D90u;
            goto label_310d90;
        }
    }
    ctx->pc = 0x310D88u;
    // 0x310d88: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x310d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x310d8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x310d8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_310d90:
    // 0x310d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310d94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x310D94u;
    {
        const bool branch_taken_0x310d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D94u;
        // 0x310d98: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d94) {
            ctx->pc = 0x310DD0u;
            goto label_310dd0;
        }
    }
    ctx->pc = 0x310D9Cu;
    // 0x310d9c: 0x0  nop
    ctx->pc = 0x310d9cu;
    // NOP
label_310da0:
    // 0x310da0: 0x2841823  subu        $v1, $s4, $a0
    ctx->pc = 0x310da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x310da4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x310DA4u;
    {
        const bool branch_taken_0x310da4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x310DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DA4u;
        // 0x310da8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310da4) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x310DACu;
    // 0x310dac: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x310dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x310db0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x310db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_310db4:
    // 0x310db4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310db8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x310db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x310dbc: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x310dbcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x310dc0: 0x0  nop
    ctx->pc = 0x310dc0u;
    // NOP
    // 0x310dc4: 0x0  nop
    ctx->pc = 0x310dc4u;
    // NOP
    // 0x310dc8: 0x1012  mflo        $v0
    ctx->pc = 0x310dc8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x310dcc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x310dccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_310dd0:
    // 0x310dd0: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x310dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x310dd4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x310dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x310dd8: 0x3c03c400  lui         $v1, 0xC400
    ctx->pc = 0x310dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50176 << 16));
    // 0x310ddc: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x310ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x310de0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x310de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x310de4: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x310de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x310de8: 0x24025215  addiu       $v0, $zero, 0x5215
    ctx->pc = 0x310de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21013));
    // 0x310dec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x310decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x310df0: 0x3c0221d2  lui         $v0, 0x21D2
    ctx->pc = 0x310df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8658 << 16));
    // 0x310df4: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x310df4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x310df8: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x310df8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x310dfc: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x310dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x310e00: 0x34421d21  ori         $v0, $v0, 0x1D21
    ctx->pc = 0x310e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7457);
    // 0x310e04: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x310e04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x310e08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x310e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310e0c: 0xaf948b30  sw          $s4, -0x74D0($gp)
    ctx->pc = 0x310e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 20));
    // 0x310e10: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x310e10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x310e14: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x310E14u;
    {
        const bool branch_taken_0x310e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E14u;
        // 0x310e18: 0xfe82fff8  sd          $v0, -0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294967288), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e14) {
            ctx->pc = 0x311580u;
            goto label_311580;
        }
    }
    ctx->pc = 0x310E1Cu;
    // 0x310e1c: 0x0  nop
    ctx->pc = 0x310e1cu;
    // NOP
label_310e20:
    // 0x310e20: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x310e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x310e24: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x310e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x310e28: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x310e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x310e2c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x310e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x310e30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x310e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x310e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310e38: 0x146201cd  bne         $v1, $v0, . + 4 + (0x1CD << 2)
    ctx->pc = 0x310E38u;
    {
        const bool branch_taken_0x310e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x310e38) {
            ctx->pc = 0x311570u;
            goto label_311570;
        }
    }
    ctx->pc = 0x310E40u;
    // 0x310e40: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x310e40u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x310e44: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x310e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x310e48: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x310e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x310e4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310E4Cu;
    {
        const bool branch_taken_0x310e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e4c) {
            ctx->pc = 0x310E60u;
            goto label_310e60;
        }
    }
    ctx->pc = 0x310E54u;
    // 0x310e54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x310E54u;
    {
        const bool branch_taken_0x310e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E54u;
        // 0x310e58: 0x8c520020  lw          $s2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e54) {
            ctx->pc = 0x310E68u;
            goto label_310e68;
        }
    }
    ctx->pc = 0x310E5Cu;
    // 0x310e5c: 0x0  nop
    ctx->pc = 0x310e5cu;
    // NOP
label_310e60:
    // 0x310e60: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x310e60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x310e64: 0x2652db30  addiu       $s2, $s2, -0x24D0
    ctx->pc = 0x310e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957872));
label_310e68:
    // 0x310e68: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x310e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x310e6c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x310e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x310e70: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x310e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x310e74: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x310e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x310e78: 0x96c2006a  lhu         $v0, 0x6A($s6)
    ctx->pc = 0x310e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 106)));
    // 0x310e7c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x310e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x310e80: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x310e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x310e84: 0xac20d480  sw          $zero, -0x2B80($at)
    ctx->pc = 0x310e84u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x310e88: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x310e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x310e8c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x310e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x310e90: 0xc0410a6  jal         func_104298
    ctx->pc = 0x310E90u;
    SET_GPR_U32(ctx, 31, 0x310E98u);
    ctx->pc = 0x310E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E90u;
    // 0x310e94: 0xac22e030  sw          $v0, -0x1FD0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x310E90u, 0x310E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E98u;
label_310e98:
    // 0x310e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e9c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x310e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x310ea0: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x310ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x310ea4: 0xc0411aa  jal         func_1046A8
    ctx->pc = 0x310EA4u;
    SET_GPR_U32(ctx, 31, 0x310EACu);
    ctx->pc = 0x310EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EA4u;
    // 0x310ea8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046A8u, 0x310EA4u, 0x310EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310EACu;
label_310eac:
    // 0x310eac: 0xc6580000  lwc1        $f24, 0x0($s2)
    ctx->pc = 0x310eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x310eb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x310eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310eb8: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x310eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x310ebc: 0xc6560004  lwc1        $f22, 0x4($s2)
    ctx->pc = 0x310ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x310ec0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x310ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x310ec4: 0x34420c10  ori         $v0, $v0, 0xC10
    ctx->pc = 0x310ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3088);
    // 0x310ec8: 0x461805c3  div.s       $f23, $f0, $f24
    ctx->pc = 0x310ec8u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[24]); }
    // 0x310ecc: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x310eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x310ed0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x310ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x310ed4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310ed4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310ed8: 0x34500c40  ori         $s0, $v0, 0xC40
    ctx->pc = 0x310ed8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3136);
    // 0x310edc: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x310edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x310ee0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x310ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x310ee4: 0x34510c20  ori         $s1, $v0, 0xC20
    ctx->pc = 0x310ee4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3104);
    // 0x310ee8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x310ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x310eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x310ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x310ef4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x310ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x310ef8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x310EF8u;
    SET_GPR_U32(ctx, 31, 0x310F00u);
    ctx->pc = 0x310EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EF8u;
    // 0x310efc: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x310EF8u, 0x310F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F00u;
label_310f00:
    // 0x310f00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x310f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f08: 0xc04d6e8  jal         func_135BA0
    ctx->pc = 0x310F08u;
    SET_GPR_U32(ctx, 31, 0x310F10u);
    ctx->pc = 0x310F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F08u;
    // 0x310f0c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BA0u, 0x310F08u, 0x310F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F10u;
label_310f10:
    // 0x310f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x310f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f14: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x310f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x310f18: 0x34420e00  ori         $v0, $v0, 0xE00
    ctx->pc = 0x310f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3584);
    // 0x310f1c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x310f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x310f20: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x310f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x310f24: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x310f24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x310f28: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x310f28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x310f2c: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x310f2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x310f30: 0xc0410a6  jal         func_104298
    ctx->pc = 0x310F30u;
    SET_GPR_U32(ctx, 31, 0x310F38u);
    ctx->pc = 0x310F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F30u;
    // 0x310f34: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x310F30u, 0x310F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F38u;
label_310f38:
    // 0x310f38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f40: 0xc04121a  jal         func_104868
    ctx->pc = 0x310F40u;
    SET_GPR_U32(ctx, 31, 0x310F48u);
    ctx->pc = 0x310F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F40u;
    // 0x310f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x310F40u, 0x310F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F48u;
label_310f48:
    // 0x310f48: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x310f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x310f4c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x310f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x310f50: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x310f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x310f54: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x310f54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000000u));
    // 0x310f58: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x310f58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310f5c: 0x0  nop
    ctx->pc = 0x310f5cu;
    // NOP
label_310f60:
    // 0x310f60: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x310f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x310f64: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x310f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x310f68: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x310f68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x310f6c: 0x4be5218b  vmaddw.xyzw $vf6, $vf4, $vf5w
    ctx->pc = 0x310f6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x310f70: 0x2063ffff  addi        $v1, $v1, -0x1
    ctx->pc = 0x310f70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x310f74: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x310f74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x310f78: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x310f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310f7c: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x310f7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x310f80: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x310f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x310f84: 0x20840010  addi        $a0, $a0, 0x10
    ctx->pc = 0x310f84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x310f88: 0x20420004  addi        $v0, $v0, 0x4
    ctx->pc = 0x310f88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x310f8c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x310f8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310f90: 0x1403fff3  bne         $zero, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x310F90u;
    {
        const bool branch_taken_0x310f90 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        ctx->pc = 0x310F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F90u;
        // 0x310f94: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f90) {
            ctx->pc = 0x310F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310f60;
        }
    }
    ctx->pc = 0x310F98u;
    // 0x310f98: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x310F98u;
    {
        const bool branch_taken_0x310f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F98u;
        // 0x310f9c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f98) {
            ctx->pc = 0x311560u;
            goto label_311560;
        }
    }
    ctx->pc = 0x310FA0u;
label_310fa0:
    // 0x310fa0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x310fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x310fa4: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x310fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x310fa8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x310fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x310fac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x310facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x310fb0: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x310fb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x310fb4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x310fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x310fb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x310fbc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310FBCu;
    {
        const bool branch_taken_0x310fbc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x310FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FBCu;
        // 0x310fc0: 0x905e00c5  lbu         $fp, 0xC5($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 197)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fbc) {
            ctx->pc = 0x310FD0u;
            goto label_310fd0;
        }
    }
    ctx->pc = 0x310FC4u;
    // 0x310fc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x310fc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310fc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x310FC8u;
    {
        const bool branch_taken_0x310fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FC8u;
        // 0x310fcc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fc8) {
            ctx->pc = 0x310FECu;
            goto label_310fec;
        }
    }
    ctx->pc = 0x310FD0u;
label_310fd0:
    // 0x310fd0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x310fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x310fd4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x310fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x310fd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310fe0: 0x0  nop
    ctx->pc = 0x310fe0u;
    // NOP
    // 0x310fe4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x310fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x310fe8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x310fe8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_310fec:
    // 0x310fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310ff0: 0x0  nop
    ctx->pc = 0x310ff0u;
    // NOP
    // 0x310ff4: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x310ff4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310ff8: 0x45010157  bc1t        . + 4 + (0x157 << 2)
    ctx->pc = 0x310FF8u;
    {
        const bool branch_taken_0x310ff8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x310FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FF8u;
        // 0x310ffc: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ff8) {
            ctx->pc = 0x311558u;
            goto label_311558;
        }
    }
    ctx->pc = 0x311000u;
    // 0x311000: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x311000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x311004: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x311004u;
    {
        const bool branch_taken_0x311004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311004) {
            ctx->pc = 0x311020u;
            goto label_311020;
        }
    }
    ctx->pc = 0x31100Cu;
    // 0x31100c: 0x3d21021  addu        $v0, $fp, $s2
    ctx->pc = 0x31100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x311010: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x311010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x311014: 0x14400150  bnez        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x311014u;
    {
        const bool branch_taken_0x311014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311014) {
            ctx->pc = 0x311558u;
            goto label_311558;
        }
    }
    ctx->pc = 0x31101Cu;
    // 0x31101c: 0x0  nop
    ctx->pc = 0x31101cu;
    // NOP
label_311020:
    // 0x311020: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x311020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x311024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x311024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x311028: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x311028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x31102c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31102cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311030: 0x10620149  beq         $v1, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x311030u;
    {
        const bool branch_taken_0x311030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x311034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311030u;
        // 0x311034: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311030) {
            ctx->pc = 0x311558u;
            goto label_311558;
        }
    }
    ctx->pc = 0x311038u;
    // 0x311038: 0x10620147  beq         $v1, $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x311038u;
    {
        const bool branch_taken_0x311038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311038) {
            ctx->pc = 0x311558u;
            goto label_311558;
        }
    }
    ctx->pc = 0x311040u;
    // 0x311040: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x311040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x311044: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x311044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x311048: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x311048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31104c: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x31104cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x311050: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x311050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x311054: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x311054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x311058: 0x904200c5  lbu         $v0, 0xC5($v0)
    ctx->pc = 0x311058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 197)));
    // 0x31105c: 0x1043013e  beq         $v0, $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x31105Cu;
    {
        const bool branch_taken_0x31105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31105c) {
            ctx->pc = 0x311558u;
            goto label_311558;
        }
    }
    ctx->pc = 0x311064u;
    // 0x311064: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x311064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x311068: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x311068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31106c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31106cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x311070: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x311070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x311074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311078: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x311078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31107c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x31107cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x311080: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x311080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x311084: 0x4601c041  sub.s       $f1, $f24, $f1
    ctx->pc = 0x311084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x311088: 0x4601bd42  mul.s       $f21, $f23, $f1
    ctx->pc = 0x311088u;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x31108c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311090: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x311090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311094: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x311094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x311098: 0x4600bd02  mul.s       $f20, $f23, $f0
    ctx->pc = 0x311098u;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x31109c: 0x46151568  max.s       $f21, $f2, $f21
    ctx->pc = 0x31109cu;
    ctx->f[21] = std::max(ctx->f[2], ctx->f[21]);
    // 0x3110a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3110a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3110a4: 0x0  nop
    ctx->pc = 0x3110a4u;
    // NOP
    // 0x3110a8: 0x46150569  min.s       $f21, $f0, $f21
    ctx->pc = 0x3110a8u;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[21]);
    // 0x3110ac: 0x46141528  max.s       $f20, $f2, $f20
    ctx->pc = 0x3110acu;
    ctx->f[20] = std::max(ctx->f[2], ctx->f[20]);
    // 0x3110b0: 0x46140529  min.s       $f20, $f0, $f20
    ctx->pc = 0x3110b0u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[20]);
    // 0x3110b4: 0x46151032  c.eq.s      $f2, $f21
    ctx->pc = 0x3110b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3110b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3110B8u;
    {
        const bool branch_taken_0x3110b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3110b8) {
            ctx->pc = 0x3110D0u;
            goto label_3110d0;
        }
    }
    ctx->pc = 0x3110C0u;
    // 0x3110c0: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x3110c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3110c4: 0x45010124  bc1t        . + 4 + (0x124 << 2)
    ctx->pc = 0x3110C4u;
    {
        const bool branch_taken_0x3110c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3110c4) {
            ctx->pc = 0x311558u;
            goto label_311558;
        }
    }
    ctx->pc = 0x3110CCu;
    // 0x3110cc: 0x0  nop
    ctx->pc = 0x3110ccu;
    // NOP
label_3110d0:
    // 0x3110d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3110d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3110d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3110d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3110d8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3110d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3110dc: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x3110dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x3110e0: 0x34860ce0  ori         $a2, $a0, 0xCE0
    ctx->pc = 0x3110e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3296);
    // 0x3110e4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3110e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3110e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3110e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3110ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3110f0: 0x34900ca0  ori         $s0, $a0, 0xCA0
    ctx->pc = 0x3110f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3232);
    // 0x3110f4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x3110f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3110f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3110f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3110fc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x3110fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x311100: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x311100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x311104: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x311104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x311108: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x311108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31110c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x31110cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311110: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x311110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x311114: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x311114u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311118: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x311118u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x31111c: 0xd8df0000  lqc2        $vf31, 0x0($a2)
    ctx->pc = 0x31111cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311120: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x311120u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x311124: 0x4bc81afe  vopmula.xyz $ACC, $vf3, $vf8
    ctx->pc = 0x311124u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x311128: 0x4bc3426e  vopmsub.xyz $vf9, $vf8, $vf3
    ctx->pc = 0x311128u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x31112c: 0x4a0002ff  vnop
    ctx->pc = 0x31112cu;
    // NOP operation, no action needed for VU0
    // 0x311130: 0x4bc322fe  vopmula.xyz $ACC, $vf4, $vf3
    ctx->pc = 0x311130u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x311134: 0x4be422bd  vmadda.xyzw $ACC, $vf4, $vf4
    ctx->pc = 0x311134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x311138: 0x4be31969  vmadd.xyzw  $vf5, $vf3, $vf3
    ctx->pc = 0x311138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x31113c: 0x4bff18d8  vmulx.xyzw  $vf3, $vf3, $vf31x
    ctx->pc = 0x31113cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x311140: 0x4bff4a58  vmulx.xyzw  $vf9, $vf9, $vf31x
    ctx->pc = 0x311140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x311144: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x311144u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x311148: 0x4a0003bf  vwaitq
    ctx->pc = 0x311148u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x31114c: 0x4be018dc  vmulq.xyzw  $vf3, $vf3, $Q
    ctx->pc = 0x31114cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x311150: 0x4be04a5c  vmulq.xyzw  $vf9, $vf9, $Q
    ctx->pc = 0x311150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x311154: 0x4be30b2c  vsub.xyzw   $vf12, $vf1, $vf3
    ctx->pc = 0x311154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x311158: 0x4be30b6c  vsub.xyzw   $vf13, $vf1, $vf3
    ctx->pc = 0x311158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x31115c: 0x4be313a8  vadd.xyzw   $vf14, $vf2, $vf3
    ctx->pc = 0x31115cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x311160: 0x4be313e8  vadd.xyzw   $vf15, $vf2, $vf3
    ctx->pc = 0x311160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x311164: 0x4be9632c  vsub.xyzw   $vf12, $vf12, $vf9
    ctx->pc = 0x311164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x311168: 0x4be96b68  vadd.xyzw   $vf13, $vf13, $vf9
    ctx->pc = 0x311168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x31116c: 0x4be973ac  vsub.xyzw   $vf14, $vf14, $vf9
    ctx->pc = 0x31116cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x311170: 0x4be97be8  vadd.xyzw   $vf15, $vf15, $vf9
    ctx->pc = 0x311170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x311174: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x311174u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x311178: 0xfa0d0010  sqc2        $vf13, 0x10($s0)
    ctx->pc = 0x311178u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x31117c: 0xfa0e0020  sqc2        $vf14, 0x20($s0)
    ctx->pc = 0x31117cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x311180: 0xfa0f0030  sqc2        $vf15, 0x30($s0)
    ctx->pc = 0x311180u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x311184: 0x34820d00  ori         $v0, $a0, 0xD00
    ctx->pc = 0x311184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3328);
    // 0x311188: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31118c: 0x34970d40  ori         $s7, $a0, 0xD40
    ctx->pc = 0x31118cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3392);
    // 0x311190: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x311190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x311194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x311194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311198: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x311198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x31119c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x31119cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3111a0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x3111a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x3111a4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x3111a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3111a8: 0x34820d10  ori         $v0, $a0, 0xD10
    ctx->pc = 0x3111a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3344);
    // 0x3111ac: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3111acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x3111b0: 0x34820d20  ori         $v0, $a0, 0xD20
    ctx->pc = 0x3111b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3360);
    // 0x3111b4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x3111b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x3111b8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3111b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3111bc: 0x34820d30  ori         $v0, $a0, 0xD30
    ctx->pc = 0x3111bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3376);
    // 0x3111c0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x3111c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3111c4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x3111C4u;
    SET_GPR_U32(ctx, 31, 0x3111CCu);
    ctx->pc = 0x3111C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3111C4u;
    // 0x3111c8: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x3111C4u, 0x3111CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111CCu;
label_3111cc:
    // 0x3111cc: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3111ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3111d0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x3111d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x3111d4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x3111d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3111d8: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x3111d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x3111dc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3111dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3111e0: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x3111e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x3111e4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3111e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3111e8: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x3111E8u;
    SET_GPR_U32(ctx, 31, 0x3111F0u);
    ctx->pc = 0x3111ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3111E8u;
    // 0x3111ec: 0x26e70004  addiu       $a3, $s7, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x3111E8u, 0x3111F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111F0u;
label_3111f0:
    // 0x3111f0: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3111f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3111f4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x3111f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x3111f8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x3111f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3111fc: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x3111fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x311200: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x311200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x311204: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x311204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x311208: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x311208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31120c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x31120Cu;
    SET_GPR_U32(ctx, 31, 0x311214u);
    ctx->pc = 0x311210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31120Cu;
    // 0x311210: 0x26e70008  addiu       $a3, $s7, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x31120Cu, 0x311214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311214u;
label_311214:
    // 0x311214: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x311218: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x311218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x31121c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x31121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x311220: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x311220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x311224: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x311224u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x311228: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x311228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x31122c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x31122cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x311230: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x311230u;
    SET_GPR_U32(ctx, 31, 0x311238u);
    ctx->pc = 0x311234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311230u;
    // 0x311234: 0x26e7000c  addiu       $a3, $s7, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x311230u, 0x311238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311238u;
label_311238:
    // 0x311238: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x311238u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x31123c: 0x12a000c6  beqz        $s5, . + 4 + (0xC6 << 2)
    ctx->pc = 0x31123Cu;
    {
        const bool branch_taken_0x31123c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x31123c) {
            ctx->pc = 0x311558u;
            goto label_311558;
        }
    }
    ctx->pc = 0x311244u;
    // 0x311244: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x311244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x311248: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x311248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x31124c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31124Cu;
    {
        const bool branch_taken_0x31124c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x311250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31124Cu;
        // 0x311250: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31124c) {
            ctx->pc = 0x311260u;
            goto label_311260;
        }
    }
    ctx->pc = 0x311254u;
    // 0x311254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x311258u;
    {
        const bool branch_taken_0x311258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311258u;
        // 0x31125c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311258) {
            ctx->pc = 0x311278u;
            goto label_311278;
        }
    }
    ctx->pc = 0x311260u;
label_311260:
    // 0x311260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x311260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x311264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x311268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31126c: 0x0  nop
    ctx->pc = 0x31126cu;
    // NOP
    // 0x311270: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x311270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x311274: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x311274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_311278:
    // 0x311278: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x311278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x31127c: 0x3d21021  addu        $v0, $fp, $s2
    ctx->pc = 0x31127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x311280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311284: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x311284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x311288: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x311288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31128c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31128Cu;
    {
        const bool branch_taken_0x31128c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x311290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31128Cu;
        // 0x311290: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31128c) {
            ctx->pc = 0x3112A0u;
            goto label_3112a0;
        }
    }
    ctx->pc = 0x311294u;
    // 0x311294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311298u;
    {
        const bool branch_taken_0x311298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311298u;
        // 0x31129c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311298) {
            ctx->pc = 0x3112BCu;
            goto label_3112bc;
        }
    }
    ctx->pc = 0x3112A0u;
label_3112a0:
    // 0x3112a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3112a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3112a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3112a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3112a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3112a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3112ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3112acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3112b0: 0x0  nop
    ctx->pc = 0x3112b0u;
    // NOP
    // 0x3112b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3112b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3112b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3112b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3112bc:
    // 0x3112bc: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x3112bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x3112c0: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x3112c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3112c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3112c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3112c8: 0x0  nop
    ctx->pc = 0x3112c8u;
    // NOP
    // 0x3112cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3112ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3112d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3112D0u;
    {
        const bool branch_taken_0x3112d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112D0u;
        // 0x3112d4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112d0) {
            ctx->pc = 0x3112E4u;
            goto label_3112e4;
        }
    }
    ctx->pc = 0x3112D8u;
    // 0x3112d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3112d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3112dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3112DCu;
    {
        const bool branch_taken_0x3112dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3112E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112DCu;
        // 0x3112e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112dc) {
            ctx->pc = 0x311300u;
            goto label_311300;
        }
    }
    ctx->pc = 0x3112E4u;
label_3112e4:
    // 0x3112e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3112e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3112e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3112e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3112ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3112ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3112f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3112f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3112f4: 0x0  nop
    ctx->pc = 0x3112f4u;
    // NOP
    // 0x3112f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3112f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3112fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3112fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_311300:
    // 0x311300: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x311300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x311304: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x311304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x311308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31130c: 0x0  nop
    ctx->pc = 0x31130cu;
    // NOP
    // 0x311310: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x311310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311314: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311314u;
    {
        const bool branch_taken_0x311314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311314) {
            ctx->pc = 0x31132Cu;
            goto label_31132c;
        }
    }
    ctx->pc = 0x31131Cu;
    // 0x31131c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31131cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x311320: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x311320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x311324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311324u;
    {
        const bool branch_taken_0x311324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311324u;
        // 0x311328: 0x92620034  lbu         $v0, 0x34($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311324) {
            ctx->pc = 0x311348u;
            goto label_311348;
        }
    }
    ctx->pc = 0x31132Cu;
label_31132c:
    // 0x31132c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31132cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x311330: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x311330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x311334: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x311338: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x311338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31133c: 0x0  nop
    ctx->pc = 0x31133cu;
    // NOP
    // 0x311340: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x311344: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x311344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_311348:
    // 0x311348: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x311348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31134c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31134Cu;
    {
        const bool branch_taken_0x31134c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x311350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31134Cu;
        // 0x311350: 0x3ae00  sll         $s5, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31134c) {
            ctx->pc = 0x311360u;
            goto label_311360;
        }
    }
    ctx->pc = 0x311354u;
    // 0x311354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311358u;
    {
        const bool branch_taken_0x311358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311358u;
        // 0x31135c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311358) {
            ctx->pc = 0x31137Cu;
            goto label_31137c;
        }
    }
    ctx->pc = 0x311360u;
label_311360:
    // 0x311360: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x311360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x311364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x311364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x311368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31136c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31136cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311370: 0x0  nop
    ctx->pc = 0x311370u;
    // NOP
    // 0x311374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x311374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x311378: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x311378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31137c:
    // 0x31137c: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x31137cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x311380: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x311380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x311384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311388: 0x0  nop
    ctx->pc = 0x311388u;
    // NOP
    // 0x31138c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31138cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311390: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311390u;
    {
        const bool branch_taken_0x311390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311390) {
            ctx->pc = 0x3113A8u;
            goto label_3113a8;
        }
    }
    ctx->pc = 0x311398u;
    // 0x311398: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31139c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31139cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3113a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3113A0u;
    {
        const bool branch_taken_0x3113a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113A0u;
        // 0x3113a4: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113a0) {
            ctx->pc = 0x3113C4u;
            goto label_3113c4;
        }
    }
    ctx->pc = 0x3113A8u;
label_3113a8:
    // 0x3113a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3113a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3113ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3113acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3113b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3113b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3113b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3113b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3113b8: 0x0  nop
    ctx->pc = 0x3113b8u;
    // NOP
    // 0x3113bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3113bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3113c0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3113c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_3113c4:
    // 0x3113c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3113c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3113c8: 0x34500f80  ori         $s0, $v0, 0xF80
    ctx->pc = 0x3113c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x3113cc: 0x3f600  sll         $fp, $v1, 24
    ctx->pc = 0x3113ccu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3113d0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x3113d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3113d4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x3113d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3113d8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3113d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3113dc: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x3113dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3113e0: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x3113e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3113e4: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x3113e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3113e8: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x3113e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3113ec: 0x4be51099  vmuly.xyzw  $vf2, $vf2, $vf5y
    ctx->pc = 0x3113ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3113f0: 0x4be518da  vmulz.xyzw  $vf3, $vf3, $vf5z
    ctx->pc = 0x3113f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3113f4: 0x4be5211b  vmulw.xyzw  $vf4, $vf4, $vf5w
    ctx->pc = 0x3113f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3113f8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3113f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3113fc: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x3113fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x311400: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x311400u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x311404: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x311404u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x311408: 0xc0410a6  jal         func_104298
    ctx->pc = 0x311408u;
    SET_GPR_U32(ctx, 31, 0x311410u);
    ctx->pc = 0x31140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311408u;
    // 0x31140c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x311408u, 0x311410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311410u;
label_311410:
    // 0x311410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311418: 0xc04121a  jal         func_104868
    ctx->pc = 0x311418u;
    SET_GPR_U32(ctx, 31, 0x311420u);
    ctx->pc = 0x31141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311418u;
    // 0x31141c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x311418u, 0x311420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311420u;
label_311420:
    // 0x311420: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x311420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x311424: 0x24020f00  addiu       $v0, $zero, 0xF00
    ctx->pc = 0x311424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x311428: 0x34630f00  ori         $v1, $v1, 0xF00
    ctx->pc = 0x311428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3840);
    // 0x31142c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x31142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x311430: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x311430u;
    runtime->Store32(rdram, ctx, 0x70000F00u, GPR_U32(ctx, 21)); // MMIO: 0x70000f00
    // 0x311434: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x311434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x311438: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x311438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31143c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x31143cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F04u, bits); }
    // 0x311440: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x311440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311444: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x311444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F08u, bits); }
    // 0x311448: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x311448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31144c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x31144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F0Cu, bits); }
    // 0x311450: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x311450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x311454: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x311454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x311458: 0xa4650010  sh          $a1, 0x10($v1)
    ctx->pc = 0x311458u;
    runtime->Store16(rdram, ctx, 0x70000F10u, (uint16_t)GPR_U32(ctx, 5));
    // 0x31145c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x31145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x311460: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x311460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x311464: 0xa4650012  sh          $a1, 0x12($v1)
    ctx->pc = 0x311464u;
    runtime->Store16(rdram, ctx, 0x70000F12u, (uint16_t)GPR_U32(ctx, 5));
    // 0x311468: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x311468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31146c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x31146cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x311470: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x311470u;
    runtime->Store32(rdram, ctx, 0x70000F14u, GPR_U32(ctx, 5)); // MMIO: 0x70000f14
    // 0x311474: 0xac750018  sw          $s5, 0x18($v1)
    ctx->pc = 0x311474u;
    runtime->Store32(rdram, ctx, 0x70000F18u, GPR_U32(ctx, 21)); // MMIO: 0x70000f18
    // 0x311478: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x311478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31147c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x31147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F1Cu, bits); }
    // 0x311480: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x311480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311484: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x311484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F20u, bits); }
    // 0x311488: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x311488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31148c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x31148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F24u, bits); }
    // 0x311490: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x311490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x311494: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x311494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x311498: 0xa4650028  sh          $a1, 0x28($v1)
    ctx->pc = 0x311498u;
    runtime->Store16(rdram, ctx, 0x70000F28u, (uint16_t)GPR_U32(ctx, 5));
    // 0x31149c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x31149cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3114a0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3114a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3114a4: 0xa465002a  sh          $a1, 0x2A($v1)
    ctx->pc = 0x3114a4u;
    runtime->Store16(rdram, ctx, 0x70000F2Au, (uint16_t)GPR_U32(ctx, 5));
    // 0x3114a8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x3114a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3114ac: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x3114acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3114b0: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x3114b0u;
    runtime->Store32(rdram, ctx, 0x70000F2Cu, GPR_U32(ctx, 5)); // MMIO: 0x70000f2c
    // 0x3114b4: 0xac7e0030  sw          $fp, 0x30($v1)
    ctx->pc = 0x3114b4u;
    runtime->Store32(rdram, ctx, 0x70000F30u, GPR_U32(ctx, 30)); // MMIO: 0x70000f30
    // 0x3114b8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3114b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3114bc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x3114bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F34u, bits); }
    // 0x3114c0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3114c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3114c4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3114c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F38u, bits); }
    // 0x3114c8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3114c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3114cc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x3114ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F3Cu, bits); }
    // 0x3114d0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3114d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3114d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3114d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3114d8: 0xa4650040  sh          $a1, 0x40($v1)
    ctx->pc = 0x3114d8u;
    runtime->Store16(rdram, ctx, 0x70000F40u, (uint16_t)GPR_U32(ctx, 5));
    // 0x3114dc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3114dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3114e0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3114e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3114e4: 0xa4650042  sh          $a1, 0x42($v1)
    ctx->pc = 0x3114e4u;
    runtime->Store16(rdram, ctx, 0x70000F42u, (uint16_t)GPR_U32(ctx, 5));
    // 0x3114e8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3114e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3114ec: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x3114ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3114f0: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x3114f0u;
    runtime->Store32(rdram, ctx, 0x70000F44u, GPR_U32(ctx, 5)); // MMIO: 0x70000f44
    // 0x3114f4: 0xac7e0048  sw          $fp, 0x48($v1)
    ctx->pc = 0x3114f4u;
    runtime->Store32(rdram, ctx, 0x70000F48u, GPR_U32(ctx, 30)); // MMIO: 0x70000f48
    // 0x3114f8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x3114f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3114fc: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x3114fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F4Cu, bits); }
    // 0x311500: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x311500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311504: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x311504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F50u, bits); }
    // 0x311508: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x311508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31150c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x31150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F54u, bits); }
    // 0x311510: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x311510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x311514: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x311514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x311518: 0xa4650058  sh          $a1, 0x58($v1)
    ctx->pc = 0x311518u;
    runtime->Store16(rdram, ctx, 0x70000F58u, (uint16_t)GPR_U32(ctx, 5));
    // 0x31151c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x31151cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x311520: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x311520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x311524: 0xa465005a  sh          $a1, 0x5A($v1)
    ctx->pc = 0x311524u;
    runtime->Store16(rdram, ctx, 0x70000F5Au, (uint16_t)GPR_U32(ctx, 5));
    // 0x311528: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x311528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31152c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x31152cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x311530: 0xac65005c  sw          $a1, 0x5C($v1)
    ctx->pc = 0x311530u;
    runtime->Store32(rdram, ctx, 0x70000F5Cu, GPR_U32(ctx, 5)); // MMIO: 0x70000f5c
    // 0x311534: 0xc0410a6  jal         func_104298
    ctx->pc = 0x311534u;
    SET_GPR_U32(ctx, 31, 0x31153Cu);
    ctx->pc = 0x311538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311534u;
    // 0x311538: 0xac22d080  sw          $v0, -0x2F80($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x311534u, 0x31153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31153Cu;
label_31153c:
    // 0x31153c: 0x14293c  dsll32      $a1, $s4, 4
    ctx->pc = 0x31153cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 4));
    // 0x311540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311544: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x311544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x311548: 0xc04118c  jal         func_104630
    ctx->pc = 0x311548u;
    SET_GPR_U32(ctx, 31, 0x311550u);
    ctx->pc = 0x31154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311548u;
    // 0x31154c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104630u, 0x311548u, 0x311550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311550u;
label_311550:
    // 0x311550: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x311550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x311554: 0x0  nop
    ctx->pc = 0x311554u;
    // NOP
label_311558:
    // 0x311558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x311558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31155c: 0x0  nop
    ctx->pc = 0x31155cu;
    // NOP
label_311560:
    // 0x311560: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x311560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x311564: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x311564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x311568: 0x1440fe8d  bnez        $v0, . + 4 + (-0x173 << 2)
    ctx->pc = 0x311568u;
    {
        const bool branch_taken_0x311568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311568) {
            ctx->pc = 0x310FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310fa0;
        }
    }
    ctx->pc = 0x311570u;
label_311570:
    // 0x311570: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x311570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x311574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x311574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x311578: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x311578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x31157c: 0x0  nop
    ctx->pc = 0x31157cu;
    // NOP
label_311580:
    // 0x311580: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x311580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x311584: 0x8c432000  lw          $v1, 0x2000($v0)
    ctx->pc = 0x311584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8192)));
    // 0x311588: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x311588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31158c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31158cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x311590: 0x1440fe23  bnez        $v0, . + 4 + (-0x1DD << 2)
    ctx->pc = 0x311590u;
    {
        const bool branch_taken_0x311590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311590) {
            ctx->pc = 0x310E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310e20;
        }
    }
    ctx->pc = 0x311598u;
    // 0x311598: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x311598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31159c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3115a0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3115a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3115a4: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x3115a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x3115a8: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3115a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3115ac: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x3115acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3115b0: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3115B0u;
    {
        const bool branch_taken_0x3115b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3115B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115B0u;
        // 0x3115b4: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115b0) {
            ctx->pc = 0x311600u;
            goto label_311600;
        }
    }
    ctx->pc = 0x3115B8u;
    // 0x3115b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3115b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3115bc: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3115BCu;
    {
        const bool branch_taken_0x3115bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3115bc) {
            ctx->pc = 0x3115D8u;
            goto label_3115d8;
        }
    }
    ctx->pc = 0x3115C4u;
    // 0x3115c4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3115C4u;
    {
        const bool branch_taken_0x3115c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3115c4) {
            ctx->pc = 0x3115D8u;
            goto label_3115d8;
        }
    }
    ctx->pc = 0x3115CCu;
    // 0x3115cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3115CCu;
    {
        const bool branch_taken_0x3115cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3115cc) {
            ctx->pc = 0x311630u;
            goto label_311630;
        }
    }
    ctx->pc = 0x3115D4u;
    // 0x3115d4: 0x0  nop
    ctx->pc = 0x3115d4u;
    // NOP
label_3115d8:
    // 0x3115d8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3115d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3115dc: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x3115dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3115e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3115E0u;
    {
        const bool branch_taken_0x3115e0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115E0u;
        // 0x3115e4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115e0) {
            ctx->pc = 0x3115F0u;
            goto label_3115f0;
        }
    }
    ctx->pc = 0x3115E8u;
    // 0x3115e8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3115e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3115ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3115ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3115f0:
    // 0x3115f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3115f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3115f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3115F4u;
    {
        const bool branch_taken_0x3115f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115F4u;
        // 0x3115f8: 0xa7a200d0  sh          $v0, 0xD0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115f4) {
            ctx->pc = 0x311630u;
            goto label_311630;
        }
    }
    ctx->pc = 0x3115FCu;
    // 0x3115fc: 0x0  nop
    ctx->pc = 0x3115fcu;
    // NOP
label_311600:
    // 0x311600: 0x2851823  subu        $v1, $s4, $a1
    ctx->pc = 0x311600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x311604: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311604u;
    {
        const bool branch_taken_0x311604 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x311608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311604u;
        // 0x311608: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311604) {
            ctx->pc = 0x311614u;
            goto label_311614;
        }
    }
    ctx->pc = 0x31160Cu;
    // 0x31160c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x311610: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x311610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_311614:
    // 0x311614: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x311614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x311618: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x311618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31161c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x31161cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x311620: 0x0  nop
    ctx->pc = 0x311620u;
    // NOP
    // 0x311624: 0x0  nop
    ctx->pc = 0x311624u;
    // NOP
    // 0x311628: 0x1012  mflo        $v0
    ctx->pc = 0x311628u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31162c: 0xa7a200d0  sh          $v0, 0xD0($sp)
    ctx->pc = 0x31162cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
label_311630:
    // 0x311630: 0x97a200d0  lhu         $v0, 0xD0($sp)
    ctx->pc = 0x311630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x311634: 0x8f888b30  lw          $t0, -0x74D0($gp)
    ctx->pc = 0x311634u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x311638: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x311638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31163c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x31163cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x311640: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x311640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x311644: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x311644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x311648: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x311648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31164c: 0x34498000  ori         $t1, $v0, 0x8000
    ctx->pc = 0x31164cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x311650: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x311650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x311654: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x311654u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x311658: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x311658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31165c: 0xfe870000  sd          $a3, 0x0($s4)
    ctx->pc = 0x31165cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 7));
    // 0x311660: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x311660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x311664: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x311664u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x311668: 0x344517fd  ori         $a1, $v0, 0x17FD
    ctx->pc = 0x311668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x31166c: 0xaf948b30  sw          $s4, -0x74D0($gp)
    ctx->pc = 0x31166cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 20));
    // 0x311670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311674: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x311674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x311678: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x311678u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x31167c: 0xfe840008  sd          $a0, 0x8($s4)
    ctx->pc = 0x31167cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 4));
    // 0x311680: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x311680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x311684: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x311684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x311688: 0xdc840020  ld          $a0, 0x20($a0)
    ctx->pc = 0x311688u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x31168c: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x31168cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x311690: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x311690u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x311694: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x311694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x311698: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x311698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x31169c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x31169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3116a0: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x3116a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x3116a4: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3116a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3116a8: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x3116a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3116ac: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3116ACu;
    {
        const bool branch_taken_0x3116ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3116B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116ACu;
        // 0x3116b0: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116ac) {
            ctx->pc = 0x3116F8u;
            goto label_3116f8;
        }
    }
    ctx->pc = 0x3116B4u;
    // 0x3116b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3116b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3116b8: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3116B8u;
    {
        const bool branch_taken_0x3116b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3116b8) {
            ctx->pc = 0x3116D0u;
            goto label_3116d0;
        }
    }
    ctx->pc = 0x3116C0u;
    // 0x3116c0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3116C0u;
    {
        const bool branch_taken_0x3116c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116c0) {
            ctx->pc = 0x3116D0u;
            goto label_3116d0;
        }
    }
    ctx->pc = 0x3116C8u;
    // 0x3116c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3116C8u;
    {
        const bool branch_taken_0x3116c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116c8) {
            ctx->pc = 0x311728u;
            goto label_311728;
        }
    }
    ctx->pc = 0x3116D0u;
label_3116d0:
    // 0x3116d0: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3116d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3116d4: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x3116d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3116d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3116D8u;
    {
        const bool branch_taken_0x3116d8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3116DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116D8u;
        // 0x3116dc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116d8) {
            ctx->pc = 0x3116E8u;
            goto label_3116e8;
        }
    }
    ctx->pc = 0x3116E0u;
    // 0x3116e0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3116e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3116e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3116e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3116e8:
    // 0x3116e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3116e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3116ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3116ECu;
    {
        const bool branch_taken_0x3116ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3116F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116ECu;
        // 0x3116f0: 0xa7a200c0  sh          $v0, 0xC0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116ec) {
            ctx->pc = 0x311728u;
            goto label_311728;
        }
    }
    ctx->pc = 0x3116F4u;
    // 0x3116f4: 0x0  nop
    ctx->pc = 0x3116f4u;
    // NOP
label_3116f8:
    // 0x3116f8: 0x2851823  subu        $v1, $s4, $a1
    ctx->pc = 0x3116f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x3116fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3116FCu;
    {
        const bool branch_taken_0x3116fc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x311700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116FCu;
        // 0x311700: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116fc) {
            ctx->pc = 0x31170Cu;
            goto label_31170c;
        }
    }
    ctx->pc = 0x311704u;
    // 0x311704: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x311704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x311708: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x311708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31170c:
    // 0x31170c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x311710: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x311710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x311714: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x311714u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x311718: 0x0  nop
    ctx->pc = 0x311718u;
    // NOP
    // 0x31171c: 0x0  nop
    ctx->pc = 0x31171cu;
    // NOP
    // 0x311720: 0x1012  mflo        $v0
    ctx->pc = 0x311720u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x311724: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x311724u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
label_311728:
    // 0x311728: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x311728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31172c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x31172cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311730: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x311730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x311734: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x311734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x311738: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x311738u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31173c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x31173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x311740: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x311740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x311744: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311744u;
    {
        const bool branch_taken_0x311744 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x311748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311744u;
        // 0x311748: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311744) {
            ctx->pc = 0x311754u;
            goto label_311754;
        }
    }
    ctx->pc = 0x31174Cu;
    // 0x31174c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x311750: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x311750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_311754:
    // 0x311754: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x311754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x311758: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x311758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31175c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31175cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x311760: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x311760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x311764: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x311764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x311768: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x311768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x31176c: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x31176cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x311770: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311770u;
    {
        const bool branch_taken_0x311770 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x311774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311770u;
        // 0x311774: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311770) {
            ctx->pc = 0x311780u;
            goto label_311780;
        }
    }
    ctx->pc = 0x311778u;
    // 0x311778: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x311778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31177c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31177cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_311780:
    // 0x311780: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x311780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x311784: 0x14313c  dsll32      $a2, $s4, 4
    ctx->pc = 0x311784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 4));
    // 0x311788: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x311788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x31178c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x31178cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x311790: 0x8f888b28  lw          $t0, -0x74D8($gp)
    ctx->pc = 0x311790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x311794: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x311794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x311798: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x311798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31179c: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x31179cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x3117a0: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x3117a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x3117a4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3117a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3117a8: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x3117a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
    // 0x3117ac: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x3117acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x3117b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3117b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3117b4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3117b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3117b8: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x3117b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x3117bc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3117bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x3117c0: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x3117c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x3117c4: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x3117c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x3117c8: 0xaf948b28  sw          $s4, -0x74D8($gp)
    ctx->pc = 0x3117c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 20));
    // 0x3117cc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x3117ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3117d0: 0x14193c  dsll32      $v1, $s4, 4
    ctx->pc = 0x3117d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 4));
    // 0x3117d4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x3117d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x3117d8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x3117d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3117dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3117dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3117e0: 0xc04c090  jal         func_130240
    ctx->pc = 0x3117E0u;
    SET_GPR_U32(ctx, 31, 0x3117E8u);
    ctx->pc = 0x3117E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117E0u;
    // 0x3117e4: 0xac23fc90  sw          $v1, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x3117E0u, 0x3117E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117E8u;
label_3117e8:
    // 0x3117e8: 0xc0410a6  jal         func_104298
    ctx->pc = 0x3117E8u;
    SET_GPR_U32(ctx, 31, 0x3117F0u);
    ctx->pc = 0x3117ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117E8u;
    // 0x3117ec: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x3117E8u, 0x3117F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117F0u;
label_3117f0:
    // 0x3117f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3117f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3117f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3117f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3117f8: 0xc04121a  jal         func_104868
    ctx->pc = 0x3117F8u;
    SET_GPR_U32(ctx, 31, 0x311800u);
    ctx->pc = 0x3117FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117F8u;
    // 0x3117fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x3117F8u, 0x311800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311800u;
label_311800:
    // 0x311800: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x311800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x311804: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x311804u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x311808: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x311808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x31180c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x31180cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x311810: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x311810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x311814: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x311814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311818: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x311818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x31181c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x31181cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x311820: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x311820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x311824: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x311824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311828: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x311828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31182c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31182cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311830: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x311830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x311834: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x311834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311838: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x311838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31183c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31183cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311840: 0x3e00008  jr          $ra
    ctx->pc = 0x311840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311840u;
        // 0x311844: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311848u;
}
