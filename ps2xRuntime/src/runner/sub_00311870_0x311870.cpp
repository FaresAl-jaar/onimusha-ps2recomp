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

// Function: sub_00311870
// Address: 0x311870 - 0x3123b4
void sub_00311870_0x311870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311870_0x311870");
#endif

    switch (ctx->pc) {
        case 0x3118d8u: goto label_3118d8;
        case 0x3118ecu: goto label_3118ec;
        case 0x3118f4u: goto label_3118f4;
        case 0x311938u: goto label_311938;
        case 0x311950u: goto label_311950;
        case 0x311b40u: goto label_311b40;
        case 0x311b88u: goto label_311b88;
        case 0x311b9cu: goto label_311b9c;
        case 0x311be8u: goto label_311be8;
        case 0x311bf8u: goto label_311bf8;
        case 0x311c40u: goto label_311c40;
        case 0x311c50u: goto label_311c50;
        case 0x311c78u: goto label_311c78;
        case 0x311c88u: goto label_311c88;
        case 0x311da8u: goto label_311da8;
        case 0x311ec4u: goto label_311ec4;
        case 0x311ee8u: goto label_311ee8;
        case 0x311f0cu: goto label_311f0c;
        case 0x311f30u: goto label_311f30;
        case 0x311fd0u: goto label_311fd0;
        case 0x311fe0u: goto label_311fe0;
        case 0x3120ccu: goto label_3120cc;
        case 0x3120e0u: goto label_3120e0;
        case 0x312360u: goto label_312360;
        case 0x312368u: goto label_312368;
        case 0x312378u: goto label_312378;
        default: break;
    }

    ctx->pc = 0x311870u;

    // 0x311870: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x311870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x311874: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311878: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x311878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x31187c: 0x3c03c240  lui         $v1, 0xC240
    ctx->pc = 0x31187cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49728 << 16));
    // 0x311880: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x311880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x311884: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x311884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x311888: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x311888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x31188c: 0x345e0fc0  ori         $fp, $v0, 0xFC0
    ctx->pc = 0x31188cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4032);
    // 0x311890: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x311890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x311894: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x311894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x311898: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x311898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31189c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3118a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3118a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3118a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3118a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3118a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3118a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3118ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3118acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3118b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3118b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3118b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3118b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3118b8: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x3118b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x3118bc: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x3118bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3118c0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3118c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3118c4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3118c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3118c8: 0x2452200c  addiu       $s2, $v0, 0x200C
    ctx->pc = 0x3118c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8204));
    // 0x3118cc: 0x24020fc0  addiu       $v0, $zero, 0xFC0
    ctx->pc = 0x3118ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4032));
    // 0x3118d0: 0xc0410a6  jal         func_104298
    ctx->pc = 0x3118D0u;
    SET_GPR_U32(ctx, 31, 0x3118D8u);
    ctx->pc = 0x3118D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118D0u;
    // 0x3118d4: 0xac22d480  sw          $v0, -0x2B80($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x3118D0u, 0x3118D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118D8u;
label_3118d8:
    // 0x3118d8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x3118d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x3118dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3118dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3118e0: 0x24a59270  addiu       $a1, $a1, -0x6D90
    ctx->pc = 0x3118e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939248));
    // 0x3118e4: 0xc04118c  jal         func_104630
    ctx->pc = 0x3118E4u;
    SET_GPR_U32(ctx, 31, 0x3118ECu);
    ctx->pc = 0x3118E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118E4u;
    // 0x3118e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104630u, 0x3118E4u, 0x3118ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118ECu;
label_3118ec:
    // 0x3118ec: 0xc043898  jal         func_10E260
    ctx->pc = 0x3118ECu;
    SET_GPR_U32(ctx, 31, 0x3118F4u);
    ctx->pc = 0x3118F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118ECu;
    // 0x3118f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x3118ECu, 0x3118F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118F4u;
label_3118f4:
    // 0x3118f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3118f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3118f8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x3118f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3118fc: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x3118fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x311900: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x311900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x311904: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x311904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x311908: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x311908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x31190c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x31190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x311910: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x311910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x311914: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x311914u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x311918: 0x12000297  beqz        $s0, . + 4 + (0x297 << 2)
    ctx->pc = 0x311918u;
    {
        const bool branch_taken_0x311918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x311918) {
            ctx->pc = 0x312378u;
            goto label_312378;
        }
    }
    ctx->pc = 0x311920u;
    // 0x311920: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x311920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
    // 0x311924: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x311924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x311928: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x311928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31192c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x31192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x311930: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x311930u;
    SET_GPR_U32(ctx, 31, 0x311938u);
    ctx->pc = 0x311934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311930u;
    // 0x311934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x311930u, 0x311938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311938u;
label_311938:
    // 0x311938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31193c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31193Cu;
    {
        const bool branch_taken_0x31193c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31193c) {
            ctx->pc = 0x311958u;
            goto label_311958;
        }
    }
    ctx->pc = 0x311944u;
    // 0x311944: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x311944u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x311948: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x311948u;
    SET_GPR_U32(ctx, 31, 0x311950u);
    ctx->pc = 0x31194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311948u;
    // 0x31194c: 0x92450004  lbu         $a1, 0x4($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x311948u, 0x311950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311950u;
label_311950:
    // 0x311950: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x311950u;
    {
        const bool branch_taken_0x311950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311950) {
            ctx->pc = 0x311960u;
            goto label_311960;
        }
    }
    ctx->pc = 0x311958u;
label_311958:
    // 0x311958: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x311958u;
    {
        const bool branch_taken_0x311958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311958) {
            ctx->pc = 0x312378u;
            goto label_312378;
        }
    }
    ctx->pc = 0x311960u;
label_311960:
    // 0x311960: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x311960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x311964: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x311964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x311968: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x311968u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31196c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31196cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x311970: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x311970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x311974: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x311974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x311978: 0x346a1001  ori         $t2, $v1, 0x1001
    ctx->pc = 0x311978u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x31197c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31197cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x311980: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x311980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x311984: 0xaf908b28  sw          $s0, -0x74D8($gp)
    ctx->pc = 0x311984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 16));
    // 0x311988: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x311988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x31198c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x31198cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311990: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x311990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x311994: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x311994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x311998: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x311998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31199c: 0xaf908b2c  sw          $s0, -0x74D4($gp)
    ctx->pc = 0x31199cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 16));
    // 0x3119a0: 0x240c0061  addiu       $t4, $zero, 0x61
    ctx->pc = 0x3119a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3119a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3119a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3119a8: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x3119a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3119ac: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x3119acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x3119b0: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x3119b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3119b4: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x3119b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x3119b8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x3119b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x3119bc: 0xaf908b30  sw          $s0, -0x74D0($gp)
    ctx->pc = 0x3119bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 16));
    // 0x3119c0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3119c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3119c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3119c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3119c8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3119c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3119cc: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x3119ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x3119d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3119d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3119d4: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x3119d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x3119d8: 0x70034389  pcpyld      $t0, $zero, $v1
    ctx->pc = 0x3119d8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3119dc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3119dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3119e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3119e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3119e4: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x3119e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x3119e8: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x3119e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3119ec: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x3119ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x3119f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3119f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3119f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3119f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3119f8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3119f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3119fc: 0xfe0c0000  sd          $t4, 0x0($s0)
    ctx->pc = 0x3119fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 12));
    // 0x311a00: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x311a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x311a04: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x311a04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
    // 0x311a08: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x311a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x311a0c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x311a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311a10: 0xfe0a0000  sd          $t2, 0x0($s0)
    ctx->pc = 0x311a10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 10));
    // 0x311a14: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x311a14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x311a18: 0x8c29f014  lw          $t1, -0xFEC($at)
    ctx->pc = 0x311a18u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F014u));
    // 0x311a1c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x311a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311a20: 0xdd290020  ld          $t1, 0x20($t1)
    ctx->pc = 0x311a20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x311a24: 0x312901ff  andi        $t1, $t1, 0x1FF
    ctx->pc = 0x311a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)511);
    // 0x311a28: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x311a28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x311a2c: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x311a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x311a30: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x311a30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x311a34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x311a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311a38: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x311a38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x311a3c: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x311a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x311a40: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x311a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311a44: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x311a44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x311a48: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x311a48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x311a4c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x311a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311a50: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x311a50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x311a54: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x311a54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x311a58: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x311a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x311a5c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x311a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311a60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x311a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x311a64: 0x21e82  srl         $v1, $v0, 26
    ctx->pc = 0x311a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x311a68: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x311a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x311a6c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x311a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x311a70: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x311A70u;
    {
        const bool branch_taken_0x311a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x311A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A70u;
        // 0x311a74: 0x3045000f  andi        $a1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a70) {
            ctx->pc = 0x311AC0u;
            goto label_311ac0;
        }
    }
    ctx->pc = 0x311A78u;
    // 0x311a78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x311a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x311a7c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x311A7Cu;
    {
        const bool branch_taken_0x311a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311a7c) {
            ctx->pc = 0x311A98u;
            goto label_311a98;
        }
    }
    ctx->pc = 0x311A84u;
    // 0x311a84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x311A84u;
    {
        const bool branch_taken_0x311a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x311a84) {
            ctx->pc = 0x311A98u;
            goto label_311a98;
        }
    }
    ctx->pc = 0x311A8Cu;
    // 0x311a8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x311A8Cu;
    {
        const bool branch_taken_0x311a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311a8c) {
            ctx->pc = 0x311AF0u;
            goto label_311af0;
        }
    }
    ctx->pc = 0x311A94u;
    // 0x311a94: 0x0  nop
    ctx->pc = 0x311a94u;
    // NOP
label_311a98:
    // 0x311a98: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x311a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x311a9c: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x311a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x311aa0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311AA0u;
    {
        const bool branch_taken_0x311aa0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x311AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AA0u;
        // 0x311aa4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311aa0) {
            ctx->pc = 0x311AB0u;
            goto label_311ab0;
        }
    }
    ctx->pc = 0x311AA8u;
    // 0x311aa8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x311aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x311aac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x311aacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_311ab0:
    // 0x311ab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x311ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x311ab4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x311AB4u;
    {
        const bool branch_taken_0x311ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AB4u;
        // 0x311ab8: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ab4) {
            ctx->pc = 0x311AF0u;
            goto label_311af0;
        }
    }
    ctx->pc = 0x311ABCu;
    // 0x311abc: 0x0  nop
    ctx->pc = 0x311abcu;
    // NOP
label_311ac0:
    // 0x311ac0: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x311ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x311ac4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311AC4u;
    {
        const bool branch_taken_0x311ac4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x311AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AC4u;
        // 0x311ac8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ac4) {
            ctx->pc = 0x311AD4u;
            goto label_311ad4;
        }
    }
    ctx->pc = 0x311ACCu;
    // 0x311acc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x311accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x311ad0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x311ad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_311ad4:
    // 0x311ad4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x311ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x311ad8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x311ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x311adc: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x311adcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x311ae0: 0x0  nop
    ctx->pc = 0x311ae0u;
    // NOP
    // 0x311ae4: 0x0  nop
    ctx->pc = 0x311ae4u;
    // NOP
    // 0x311ae8: 0x1012  mflo        $v0
    ctx->pc = 0x311ae8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x311aec: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x311aecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_311af0:
    // 0x311af0: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x311af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x311af4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x311af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x311af8: 0x3c03c400  lui         $v1, 0xC400
    ctx->pc = 0x311af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50176 << 16));
    // 0x311afc: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x311afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x311b00: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x311b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x311b04: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x311b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x311b08: 0x24025215  addiu       $v0, $zero, 0x5215
    ctx->pc = 0x311b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21013));
    // 0x311b0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x311b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311b10: 0x3c0221d2  lui         $v0, 0x21D2
    ctx->pc = 0x311b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8658 << 16));
    // 0x311b14: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x311b14u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x311b18: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x311b18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x311b1c: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x311b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x311b20: 0x34421d21  ori         $v0, $v0, 0x1D21
    ctx->pc = 0x311b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7457);
    // 0x311b24: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x311b24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x311b28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x311b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x311b2c: 0xaf908b30  sw          $s0, -0x74D0($gp)
    ctx->pc = 0x311b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 16));
    // 0x311b30: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x311b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x311b34: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x311B34u;
    {
        const bool branch_taken_0x311b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B34u;
        // 0x311b38: 0xfe02fff8  sd          $v0, -0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b34) {
            ctx->pc = 0x3120F8u;
            goto label_3120f8;
        }
    }
    ctx->pc = 0x311B3Cu;
    // 0x311b3c: 0x0  nop
    ctx->pc = 0x311b3cu;
    // NOP
label_311b40:
    // 0x311b40: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x311b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x311b44: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x311b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x311b48: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x311b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x311b4c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x311b4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311b50: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x311b54: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x311b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x311b58: 0x14620163  bne         $v1, $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x311B58u;
    {
        const bool branch_taken_0x311b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311b58) {
            ctx->pc = 0x3120E8u;
            goto label_3120e8;
        }
    }
    ctx->pc = 0x311B60u;
    // 0x311b60: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x311b60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x311b64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x311b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x311b68: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x311b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x311b6c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x311b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x311b70: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x311b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x311b74: 0x9636006a  lhu         $s6, 0x6A($s1)
    ctx->pc = 0x311b74u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 106)));
    // 0x311b78: 0xac20d480  sw          $zero, -0x2B80($at)
    ctx->pc = 0x311b78u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x311b7c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x311b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x311b80: 0xc0410a6  jal         func_104298
    ctx->pc = 0x311B80u;
    SET_GPR_U32(ctx, 31, 0x311B88u);
    ctx->pc = 0x311B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B80u;
    // 0x311b84: 0xac22e030  sw          $v0, -0x1FD0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x311B80u, 0x311B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B88u;
label_311b88:
    // 0x311b88: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x311b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x311b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b90: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x311b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b94: 0xc0411aa  jal         func_1046A8
    ctx->pc = 0x311B94u;
    SET_GPR_U32(ctx, 31, 0x311B9Cu);
    ctx->pc = 0x311B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B94u;
    // 0x311b98: 0x24650030  addiu       $a1, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046A8u, 0x311B94u, 0x311B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B9Cu;
label_311b9c:
    // 0x311b9c: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x311b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x311ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x311ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x311ba4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x311ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x311ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311bac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311bb0: 0x46150503  div.s       $f20, $f0, $f21
    ctx->pc = 0x311bb0u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x311bb4: 0x34530c10  ori         $s3, $v0, 0xC10
    ctx->pc = 0x311bb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3088);
    // 0x311bb8: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x311bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x311bbc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x311bbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311bc0: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x311bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x311bc4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311bc8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x311bc8u;
    runtime->Store128(rdram, ctx, 0x70000C10u, GPR_VEC(ctx, 3));
    // 0x311bcc: 0x34510c40  ori         $s1, $v0, 0xC40
    ctx->pc = 0x311bccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3136);
    // 0x311bd0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311bd4: 0x34520c20  ori         $s2, $v0, 0xC20
    ctx->pc = 0x311bd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3104);
    // 0x311bd8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x311bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x311bdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x311bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311be0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x311BE0u;
    SET_GPR_U32(ctx, 31, 0x311BE8u);
    ctx->pc = 0x311BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311BE0u;
    // 0x311be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x311BE0u, 0x311BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BE8u;
label_311be8:
    // 0x311be8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x311be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311bf0: 0xc04d6e8  jal         func_135BA0
    ctx->pc = 0x311BF0u;
    SET_GPR_U32(ctx, 31, 0x311BF8u);
    ctx->pc = 0x311BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311BF0u;
    // 0x311bf4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BA0u, 0x311BF0u, 0x311BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BF8u;
label_311bf8:
    // 0x311bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x311bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311bfc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x311bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x311c00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311c04: 0x34750e00  ori         $s5, $v1, 0xE00
    ctx->pc = 0x311c04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3584);
    // 0x311c08: 0x34420c80  ori         $v0, $v0, 0xC80
    ctx->pc = 0x311c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3200);
    // 0x311c0c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x311c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x311c10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311c14: 0x3c177000  lui         $s7, 0x7000
    ctx->pc = 0x311c14u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)28672 << 16));
    // 0x311c18: 0x34520ca0  ori         $s2, $v0, 0xCA0
    ctx->pc = 0x311c18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3232);
    // 0x311c1c: 0x34630c90  ori         $v1, $v1, 0xC90
    ctx->pc = 0x311c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3216);
    // 0x311c20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311c24: 0x34420ce0  ori         $v0, $v0, 0xCE0
    ctx->pc = 0x311c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3296);
    // 0x311c28: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x311c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x311c2c: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x311c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x311c30: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x311c30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x311c34: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x311c34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x311c38: 0xc0410a6  jal         func_104298
    ctx->pc = 0x311C38u;
    SET_GPR_U32(ctx, 31, 0x311C40u);
    ctx->pc = 0x311C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C38u;
    // 0x311c3c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x311C38u, 0x311C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C40u;
label_311c40:
    // 0x311c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c48: 0xc04121a  jal         func_104868
    ctx->pc = 0x311C48u;
    SET_GPR_U32(ctx, 31, 0x311C50u);
    ctx->pc = 0x311C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C48u;
    // 0x311c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x311C48u, 0x311C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C50u;
label_311c50:
    // 0x311c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c54: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x311c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x311c58: 0x7ae60000  lq          $a2, 0x0($s7)
    ctx->pc = 0x311c58u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x311c5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x311c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c60: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x311c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x311c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311c68: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x311c68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x311c6c: 0x7ae40000  lq          $a0, 0x0($s7)
    ctx->pc = 0x311c6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x311c70: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x311C70u;
    {
        const bool branch_taken_0x311c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C70u;
        // 0x311c74: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c70) {
            ctx->pc = 0x311CF0u;
            goto label_311cf0;
        }
    }
    ctx->pc = 0x311C78u;
label_311c78:
    // 0x311c78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x311c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x311C80u;
    {
        const bool branch_taken_0x311c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C80u;
        // 0x311c84: 0x2e32821  addu        $a1, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c80) {
            ctx->pc = 0x311CE0u;
            goto label_311ce0;
        }
    }
    ctx->pc = 0x311C88u;
label_311c88:
    // 0x311c88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x311c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x311c8c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x311c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x311c90: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x311c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x311c94: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x311c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311c98: 0xc4600100  lwc1        $f0, 0x100($v1)
    ctx->pc = 0x311c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311c9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311ca0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x311CA0u;
    {
        const bool branch_taken_0x311ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311ca0) {
            ctx->pc = 0x311CB0u;
            goto label_311cb0;
        }
    }
    ctx->pc = 0x311CA8u;
    // 0x311ca8: 0xe4610100  swc1        $f1, 0x100($v1)
    ctx->pc = 0x311ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x311cac: 0x0  nop
    ctx->pc = 0x311cacu;
    // NOP
label_311cb0:
    // 0x311cb0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x311cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x311cb4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x311cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x311cb8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x311cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x311cbc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x311cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311cc0: 0xc46000f0  lwc1        $f0, 0xF0($v1)
    ctx->pc = 0x311cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311cc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x311cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311cc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311CC8u;
    {
        const bool branch_taken_0x311cc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311cc8) {
            ctx->pc = 0x311CD8u;
            goto label_311cd8;
        }
    }
    ctx->pc = 0x311CD0u;
    // 0x311cd0: 0xe46100f0  swc1        $f1, 0xF0($v1)
    ctx->pc = 0x311cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x311cd4: 0x0  nop
    ctx->pc = 0x311cd4u;
    // NOP
label_311cd8:
    // 0x311cd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x311cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x311cdc: 0x0  nop
    ctx->pc = 0x311cdcu;
    // NOP
label_311ce0:
    // 0x311ce0: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x311ce0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x311ce4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x311CE4u;
    {
        const bool branch_taken_0x311ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311ce4) {
            ctx->pc = 0x311C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311c88;
        }
    }
    ctx->pc = 0x311CECu;
    // 0x311cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x311cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_311cf0:
    // 0x311cf0: 0x56182b  sltu        $v1, $v0, $s6
    ctx->pc = 0x311cf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x311cf4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x311CF4u;
    {
        const bool branch_taken_0x311cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311cf4) {
            ctx->pc = 0x311C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311c78;
        }
    }
    ctx->pc = 0x311CFCu;
    // 0x311cfc: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x311cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311d00: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x311d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x311d04: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x311d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311d08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x311d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d0c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x311d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d14: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x311d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x311d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d1c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x311d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x311d20: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x311d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x311d24: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x311d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x311d28: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x311d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x311d2c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x311d2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x311d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x311d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d34: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x311d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x311d38: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x311d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x311d3c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x311d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x311d40: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x311d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x311d44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x311d44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d48: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x311d48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x311d4c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x311d4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x311d50: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x311d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x311d54: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x311d54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x311d58: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x311d58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x311d5c: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x311d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x311d60: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x311d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x311d64: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x311d64u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x311d68: 0x7e480000  sq          $t0, 0x0($s2)
    ctx->pc = 0x311d68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 8));
    // 0x311d6c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x311d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d70: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x311d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x311d74: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x311d74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311d78: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x311d78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x311d7c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x311d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d80: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x311d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x311d84: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x311d84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x311d88: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x311d88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x311d8c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x311d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d90: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x311d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x311d94: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x311d94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311d98: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x311d98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x311d9c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x311d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311da0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x311DA0u;
    {
        const bool branch_taken_0x311da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DA0u;
        // 0x311da4: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311da0) {
            ctx->pc = 0x311DE8u;
            goto label_311de8;
        }
    }
    ctx->pc = 0x311DA8u;
label_311da8:
    // 0x311da8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x311da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x311dac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x311dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x311db0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x311db0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x311db4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x311db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311db8: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x311db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x311dbc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x311dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x311dc0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x311dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311dc4: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x311dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311dc8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x311dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311dcc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x311dccu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x311dd0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x311dd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x311dd4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x311dd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x311dd8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x311dd8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x311ddc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x311ddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x311de0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x311de0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x311de4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x311de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_311de8:
    // 0x311de8: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x311de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x311dec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x311DECu;
    {
        const bool branch_taken_0x311dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311dec) {
            ctx->pc = 0x311DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311da8;
        }
    }
    ctx->pc = 0x311DF4u;
    // 0x311df4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x311df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311df8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x311df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311dfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x311dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x311e00: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x311e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x311e04: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x311e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x311e08: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x311e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x311e0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x311E0Cu;
    {
        const bool branch_taken_0x311e0c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x311E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E0Cu;
        // 0x311e10: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e0c) {
            ctx->pc = 0x311E20u;
            goto label_311e20;
        }
    }
    ctx->pc = 0x311E14u;
    // 0x311e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311E18u;
    {
        const bool branch_taken_0x311e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E18u;
        // 0x311e1c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e18) {
            ctx->pc = 0x311E3Cu;
            goto label_311e3c;
        }
    }
    ctx->pc = 0x311E20u;
label_311e20:
    // 0x311e20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x311e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x311e24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x311e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x311e28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x311e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e30: 0x0  nop
    ctx->pc = 0x311e30u;
    // NOP
    // 0x311e34: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x311e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x311e38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x311e38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_311e3c:
    // 0x311e3c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x311e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x311e40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x311e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x311e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x311e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e4c: 0x0  nop
    ctx->pc = 0x311e4cu;
    // NOP
    // 0x311e50: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x311e50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x311e54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x311e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x311e58: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x311e58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x311e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e60: 0x0  nop
    ctx->pc = 0x311e60u;
    // NOP
    // 0x311e64: 0x46140528  max.s       $f20, $f0, $f20
    ctx->pc = 0x311e64u;
    ctx->f[20] = std::max(ctx->f[0], ctx->f[20]);
    // 0x311e68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e70: 0x0  nop
    ctx->pc = 0x311e70u;
    // NOP
    // 0x311e74: 0x46140529  min.s       $f20, $f0, $f20
    ctx->pc = 0x311e74u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[20]);
    // 0x311e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e7c: 0x0  nop
    ctx->pc = 0x311e7cu;
    // NOP
    // 0x311e80: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x311e80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311e84: 0x45010098  bc1t        . + 4 + (0x98 << 2)
    ctx->pc = 0x311E84u;
    {
        const bool branch_taken_0x311e84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E84u;
        // 0x311e88: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e84) {
            ctx->pc = 0x3120E8u;
            goto label_3120e8;
        }
    }
    ctx->pc = 0x311E8Cu;
    // 0x311e8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311e90: 0x34540d00  ori         $s4, $v0, 0xD00
    ctx->pc = 0x311e90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3328);
    // 0x311e94: 0x34530d40  ori         $s3, $v0, 0xD40
    ctx->pc = 0x311e94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
    // 0x311e98: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x311e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x311e9c: 0x34550d10  ori         $s5, $v0, 0xD10
    ctx->pc = 0x311e9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3344);
    // 0x311ea0: 0x34560d20  ori         $s6, $v0, 0xD20
    ctx->pc = 0x311ea0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3360);
    // 0x311ea4: 0x34570d30  ori         $s7, $v0, 0xD30
    ctx->pc = 0x311ea4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3376);
    // 0x311ea8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x311ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311eac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x311eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311eb0: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x311eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x311eb4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x311eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311eb8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x311eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x311ebc: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x311EBCu;
    SET_GPR_U32(ctx, 31, 0x311EC4u);
    ctx->pc = 0x311EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EBCu;
    // 0x311ec0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x311EBCu, 0x311EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EC4u;
label_311ec4:
    // 0x311ec4: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x311ec8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x311ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x311ecc: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x311eccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x311ed0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x311ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ed4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x311ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x311ed8: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x311ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x311edc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x311edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x311ee0: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x311EE0u;
    SET_GPR_U32(ctx, 31, 0x311EE8u);
    ctx->pc = 0x311EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EE0u;
    // 0x311ee4: 0x26670004  addiu       $a3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x311EE0u, 0x311EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EE8u;
label_311ee8:
    // 0x311ee8: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x311eec: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x311eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x311ef0: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x311ef0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x311ef4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x311ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ef8: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x311ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x311efc: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x311efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x311f00: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x311f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x311f04: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x311F04u;
    SET_GPR_U32(ctx, 31, 0x311F0Cu);
    ctx->pc = 0x311F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F04u;
    // 0x311f08: 0x26670008  addiu       $a3, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x311F04u, 0x311F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F0Cu;
label_311f0c:
    // 0x311f0c: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311f0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x311f10: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x311f10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x311f14: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x311f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x311f18: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x311f18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x311f1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x311f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f20: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x311f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x311f24: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x311f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x311f28: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x311F28u;
    SET_GPR_U32(ctx, 31, 0x311F30u);
    ctx->pc = 0x311F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F28u;
    // 0x311f2c: 0x2667000c  addiu       $a3, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x311F28u, 0x311F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F30u;
label_311f30:
    // 0x311f30: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x311f30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x311f34: 0x1220006c  beqz        $s1, . + 4 + (0x6C << 2)
    ctx->pc = 0x311F34u;
    {
        const bool branch_taken_0x311f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F34u;
        // 0x311f38: 0x3c034300  lui         $v1, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f34) {
            ctx->pc = 0x3120E8u;
            goto label_3120e8;
        }
    }
    ctx->pc = 0x311F3Cu;
    // 0x311f3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x311f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x311f40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x311f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311f48: 0x0  nop
    ctx->pc = 0x311f48u;
    // NOP
    // 0x311f4c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x311f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x311f50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x311f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311f54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311F54u;
    {
        const bool branch_taken_0x311f54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311f54) {
            ctx->pc = 0x311F6Cu;
            goto label_311f6c;
        }
    }
    ctx->pc = 0x311F5Cu;
    // 0x311f5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x311f60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x311f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x311f64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x311F64u;
    {
        const bool branch_taken_0x311f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F64u;
        // 0x311f68: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f64) {
            ctx->pc = 0x311F88u;
            goto label_311f88;
        }
    }
    ctx->pc = 0x311F6Cu;
label_311f6c:
    // 0x311f6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x311f6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x311f70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x311f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x311f74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x311f78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x311f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x311f7c: 0x0  nop
    ctx->pc = 0x311f7cu;
    // NOP
    // 0x311f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x311f84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x311f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_311f88:
    // 0x311f88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311f8c: 0x39600  sll         $s2, $v1, 24
    ctx->pc = 0x311f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x311f90: 0x34510f80  ori         $s1, $v0, 0xF80
    ctx->pc = 0x311f90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x311f94: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x311f94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x311f98: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x311f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x311f9c: 0xdbc20010  lqc2        $vf2, 0x10($fp)
    ctx->pc = 0x311f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x311fa0: 0xdbc30020  lqc2        $vf3, 0x20($fp)
    ctx->pc = 0x311fa0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x311fa4: 0xdbc40030  lqc2        $vf4, 0x30($fp)
    ctx->pc = 0x311fa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x311fa8: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x311fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x311fac: 0x4be51099  vmuly.xyzw  $vf2, $vf2, $vf5y
    ctx->pc = 0x311facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x311fb0: 0x4be518da  vmulz.xyzw  $vf3, $vf3, $vf5z
    ctx->pc = 0x311fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x311fb4: 0x4be5211b  vmulw.xyzw  $vf4, $vf4, $vf5w
    ctx->pc = 0x311fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x311fb8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x311fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x311fbc: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x311fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x311fc0: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x311fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x311fc4: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x311fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x311fc8: 0xc0410a6  jal         func_104298
    ctx->pc = 0x311FC8u;
    SET_GPR_U32(ctx, 31, 0x311FD0u);
    ctx->pc = 0x311FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FC8u;
    // 0x311fcc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x311FC8u, 0x311FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FD0u;
label_311fd0:
    // 0x311fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fd8: 0xc04121a  jal         func_104868
    ctx->pc = 0x311FD8u;
    SET_GPR_U32(ctx, 31, 0x311FE0u);
    ctx->pc = 0x311FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FD8u;
    // 0x311fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x311FD8u, 0x311FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FE0u;
label_311fe0:
    // 0x311fe0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x311fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x311fe4: 0x24030f00  addiu       $v1, $zero, 0xF00
    ctx->pc = 0x311fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x311fe8: 0x34420f00  ori         $v0, $v0, 0xF00
    ctx->pc = 0x311fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x311fec: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x311fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x311ff0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x311ff0u;
    runtime->Store32(rdram, ctx, 0x70000F00u, GPR_U32(ctx, 18)); // MMIO: 0x70000f00
    // 0x311ff4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x311ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x311ff8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x311ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311ffc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x311ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F04u, bits); }
    // 0x312000: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x312000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312004: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x312004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F08u, bits); }
    // 0x312008: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x312008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31200c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x31200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F0Cu, bits); }
    // 0x312010: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x312010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x312014: 0xa4450010  sh          $a1, 0x10($v0)
    ctx->pc = 0x312014u;
    runtime->Store16(rdram, ctx, 0x70000F10u, (uint16_t)GPR_U32(ctx, 5));
    // 0x312018: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x312018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31201c: 0xa4450012  sh          $a1, 0x12($v0)
    ctx->pc = 0x31201cu;
    runtime->Store16(rdram, ctx, 0x70000F12u, (uint16_t)GPR_U32(ctx, 5));
    // 0x312020: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x312020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x312024: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x312024u;
    runtime->Store32(rdram, ctx, 0x70000F14u, GPR_U32(ctx, 5)); // MMIO: 0x70000f14
    // 0x312028: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x312028u;
    runtime->Store32(rdram, ctx, 0x70000F18u, GPR_U32(ctx, 18)); // MMIO: 0x70000f18
    // 0x31202c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x31202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312030: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x312030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F1Cu, bits); }
    // 0x312034: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x312034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312038: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x312038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F20u, bits); }
    // 0x31203c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x31203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312040: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x312040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F24u, bits); }
    // 0x312044: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x312044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x312048: 0xa4450028  sh          $a1, 0x28($v0)
    ctx->pc = 0x312048u;
    runtime->Store16(rdram, ctx, 0x70000F28u, (uint16_t)GPR_U32(ctx, 5));
    // 0x31204c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x31204cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x312050: 0xa445002a  sh          $a1, 0x2A($v0)
    ctx->pc = 0x312050u;
    runtime->Store16(rdram, ctx, 0x70000F2Au, (uint16_t)GPR_U32(ctx, 5));
    // 0x312054: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x312054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x312058: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x312058u;
    runtime->Store32(rdram, ctx, 0x70000F2Cu, GPR_U32(ctx, 5)); // MMIO: 0x70000f2c
    // 0x31205c: 0xac520030  sw          $s2, 0x30($v0)
    ctx->pc = 0x31205cu;
    runtime->Store32(rdram, ctx, 0x70000F30u, GPR_U32(ctx, 18)); // MMIO: 0x70000f30
    // 0x312060: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x312060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312064: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x312064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F34u, bits); }
    // 0x312068: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x312068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31206c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x31206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F38u, bits); }
    // 0x312070: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x312070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312074: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x312074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F3Cu, bits); }
    // 0x312078: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x312078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x31207c: 0xa4450040  sh          $a1, 0x40($v0)
    ctx->pc = 0x31207cu;
    runtime->Store16(rdram, ctx, 0x70000F40u, (uint16_t)GPR_U32(ctx, 5));
    // 0x312080: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x312080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x312084: 0xa4450042  sh          $a1, 0x42($v0)
    ctx->pc = 0x312084u;
    runtime->Store16(rdram, ctx, 0x70000F42u, (uint16_t)GPR_U32(ctx, 5));
    // 0x312088: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x312088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x31208c: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x31208cu;
    runtime->Store32(rdram, ctx, 0x70000F44u, GPR_U32(ctx, 5)); // MMIO: 0x70000f44
    // 0x312090: 0xac520048  sw          $s2, 0x48($v0)
    ctx->pc = 0x312090u;
    runtime->Store32(rdram, ctx, 0x70000F48u, GPR_U32(ctx, 18)); // MMIO: 0x70000f48
    // 0x312094: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x312094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312098: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x312098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F4Cu, bits); }
    // 0x31209c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x31209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3120a0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x3120a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F50u, bits); }
    // 0x3120a4: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x3120a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3120a8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x3120a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000F54u, bits); }
    // 0x3120ac: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x3120acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3120b0: 0xa4450058  sh          $a1, 0x58($v0)
    ctx->pc = 0x3120b0u;
    runtime->Store16(rdram, ctx, 0x70000F58u, (uint16_t)GPR_U32(ctx, 5));
    // 0x3120b4: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x3120b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3120b8: 0xa445005a  sh          $a1, 0x5A($v0)
    ctx->pc = 0x3120b8u;
    runtime->Store16(rdram, ctx, 0x70000F5Au, (uint16_t)GPR_U32(ctx, 5));
    // 0x3120bc: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x3120bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3120c0: 0xac45005c  sw          $a1, 0x5C($v0)
    ctx->pc = 0x3120c0u;
    runtime->Store32(rdram, ctx, 0x70000F5Cu, GPR_U32(ctx, 5)); // MMIO: 0x70000f5c
    // 0x3120c4: 0xc0410a6  jal         func_104298
    ctx->pc = 0x3120C4u;
    SET_GPR_U32(ctx, 31, 0x3120CCu);
    ctx->pc = 0x3120C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3120C4u;
    // 0x3120c8: 0xac23d080  sw          $v1, -0x2F80($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x3120C4u, 0x3120CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120CCu;
label_3120cc:
    // 0x3120cc: 0x10293c  dsll32      $a1, $s0, 4
    ctx->pc = 0x3120ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 4));
    // 0x3120d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3120d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120d4: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x3120d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x3120d8: 0xc04118c  jal         func_104630
    ctx->pc = 0x3120D8u;
    SET_GPR_U32(ctx, 31, 0x3120E0u);
    ctx->pc = 0x3120DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3120D8u;
    // 0x3120dc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104630u, 0x3120D8u, 0x3120E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120E0u;
label_3120e0:
    // 0x3120e0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x3120e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3120e4: 0x0  nop
    ctx->pc = 0x3120e4u;
    // NOP
label_3120e8:
    // 0x3120e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3120e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3120ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3120f0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3120f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x3120f4: 0x0  nop
    ctx->pc = 0x3120f4u;
    // NOP
label_3120f8:
    // 0x3120f8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3120f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3120fc: 0x8c432000  lw          $v1, 0x2000($v0)
    ctx->pc = 0x3120fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8192)));
    // 0x312100: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x312100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x312104: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x312104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x312108: 0x1440fe8d  bnez        $v0, . + 4 + (-0x173 << 2)
    ctx->pc = 0x312108u;
    {
        const bool branch_taken_0x312108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312108) {
            ctx->pc = 0x311B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311b40;
        }
    }
    ctx->pc = 0x312110u;
    // 0x312110: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x312110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x312114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312118: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x312118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31211c: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x31211cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x312120: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x312120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x312124: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x312124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x312128: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x312128u;
    {
        const bool branch_taken_0x312128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x31212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312128u;
        // 0x31212c: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312128) {
            ctx->pc = 0x312178u;
            goto label_312178;
        }
    }
    ctx->pc = 0x312130u;
    // 0x312130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x312130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312134: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312134u;
    {
        const bool branch_taken_0x312134 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x312134) {
            ctx->pc = 0x312150u;
            goto label_312150;
        }
    }
    ctx->pc = 0x31213Cu;
    // 0x31213c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31213Cu;
    {
        const bool branch_taken_0x31213c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31213c) {
            ctx->pc = 0x312150u;
            goto label_312150;
        }
    }
    ctx->pc = 0x312144u;
    // 0x312144: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x312144u;
    {
        const bool branch_taken_0x312144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312144) {
            ctx->pc = 0x3121A8u;
            goto label_3121a8;
        }
    }
    ctx->pc = 0x31214Cu;
    // 0x31214c: 0x0  nop
    ctx->pc = 0x31214cu;
    // NOP
label_312150:
    // 0x312150: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x312150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x312154: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x312154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x312158: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312158u;
    {
        const bool branch_taken_0x312158 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312158u;
        // 0x31215c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312158) {
            ctx->pc = 0x312168u;
            goto label_312168;
        }
    }
    ctx->pc = 0x312160u;
    // 0x312160: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x312160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x312164: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312168:
    // 0x312168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31216c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31216Cu;
    {
        const bool branch_taken_0x31216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31216Cu;
        // 0x312170: 0xa7a200c0  sh          $v0, 0xC0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31216c) {
            ctx->pc = 0x3121A8u;
            goto label_3121a8;
        }
    }
    ctx->pc = 0x312174u;
    // 0x312174: 0x0  nop
    ctx->pc = 0x312174u;
    // NOP
label_312178:
    // 0x312178: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x312178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x31217c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31217Cu;
    {
        const bool branch_taken_0x31217c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x312180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31217Cu;
        // 0x312180: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31217c) {
            ctx->pc = 0x31218Cu;
            goto label_31218c;
        }
    }
    ctx->pc = 0x312184u;
    // 0x312184: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x312184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x312188: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31218c:
    // 0x31218c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312190: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x312190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x312194: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x312194u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x312198: 0x0  nop
    ctx->pc = 0x312198u;
    // NOP
    // 0x31219c: 0x0  nop
    ctx->pc = 0x31219cu;
    // NOP
    // 0x3121a0: 0x1012  mflo        $v0
    ctx->pc = 0x3121a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3121a4: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x3121a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
label_3121a8:
    // 0x3121a8: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x3121a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3121ac: 0x8f888b30  lw          $t0, -0x74D0($gp)
    ctx->pc = 0x3121acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3121b0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x3121b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3121b4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x3121b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3121b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3121b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3121bc: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3121bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3121c0: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x3121c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3121c4: 0x34498000  ori         $t1, $v0, 0x8000
    ctx->pc = 0x3121c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3121c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3121c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3121cc: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x3121ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x3121d0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3121d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3121d4: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x3121d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x3121d8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3121d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3121dc: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x3121dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x3121e0: 0x344517fd  ori         $a1, $v0, 0x17FD
    ctx->pc = 0x3121e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x3121e4: 0xaf908b30  sw          $s0, -0x74D0($gp)
    ctx->pc = 0x3121e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 16));
    // 0x3121e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3121e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3121ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3121ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3121f0: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x3121f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x3121f4: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x3121f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x3121f8: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x3121f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x3121fc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3121fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x312200: 0xdc840020  ld          $a0, 0x20($a0)
    ctx->pc = 0x312200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x312204: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x312204u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x312208: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x312208u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x31220c: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x31220cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x312210: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x312210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x312214: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x312214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x312218: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x312218u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x31221c: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x31221cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x312220: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x312220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x312224: 0x10c20012  beq         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x312224u;
    {
        const bool branch_taken_0x312224 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x312228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312224u;
        // 0x312228: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312224) {
            ctx->pc = 0x312270u;
            goto label_312270;
        }
    }
    ctx->pc = 0x31222Cu;
    // 0x31222c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312230: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312230u;
    {
        const bool branch_taken_0x312230 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x312230) {
            ctx->pc = 0x312248u;
            goto label_312248;
        }
    }
    ctx->pc = 0x312238u;
    // 0x312238: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x312238u;
    {
        const bool branch_taken_0x312238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x312238) {
            ctx->pc = 0x312248u;
            goto label_312248;
        }
    }
    ctx->pc = 0x312240u;
    // 0x312240: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x312240u;
    {
        const bool branch_taken_0x312240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312240) {
            ctx->pc = 0x3122A0u;
            goto label_3122a0;
        }
    }
    ctx->pc = 0x312248u;
label_312248:
    // 0x312248: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x312248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31224c: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x31224cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x312250: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312250u;
    {
        const bool branch_taken_0x312250 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x312254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312250u;
        // 0x312254: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312250) {
            ctx->pc = 0x312260u;
            goto label_312260;
        }
    }
    ctx->pc = 0x312258u;
    // 0x312258: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x312258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31225c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31225cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312260:
    // 0x312260: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312264: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x312264u;
    {
        const bool branch_taken_0x312264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312264u;
        // 0x312268: 0xa7a200b0  sh          $v0, 0xB0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312264) {
            ctx->pc = 0x3122A0u;
            goto label_3122a0;
        }
    }
    ctx->pc = 0x31226Cu;
    // 0x31226c: 0x0  nop
    ctx->pc = 0x31226cu;
    // NOP
label_312270:
    // 0x312270: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x312270u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x312274: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312274u;
    {
        const bool branch_taken_0x312274 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x312278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312274u;
        // 0x312278: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312274) {
            ctx->pc = 0x312284u;
            goto label_312284;
        }
    }
    ctx->pc = 0x31227Cu;
    // 0x31227c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x312280: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312284:
    // 0x312284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312288: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x312288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31228c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x31228cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x312290: 0x0  nop
    ctx->pc = 0x312290u;
    // NOP
    // 0x312294: 0x0  nop
    ctx->pc = 0x312294u;
    // NOP
    // 0x312298: 0x1012  mflo        $v0
    ctx->pc = 0x312298u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31229c: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x31229cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_3122a0:
    // 0x3122a0: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x3122a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3122a4: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x3122a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3122a8: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3122a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3122ac: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3122acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3122b0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3122b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3122b4: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x3122b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3122b8: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x3122b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3122bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3122BCu;
    {
        const bool branch_taken_0x3122bc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3122C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122BCu;
        // 0x3122c0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122bc) {
            ctx->pc = 0x3122CCu;
            goto label_3122cc;
        }
    }
    ctx->pc = 0x3122C4u;
    // 0x3122c4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3122c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3122c8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3122c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3122cc:
    // 0x3122cc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3122ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3122d0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3122d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3122d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3122d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3122d8: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x3122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3122dc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3122dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3122e0: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3122e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3122e4: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x3122e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3122e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3122E8u;
    {
        const bool branch_taken_0x3122e8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3122ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122E8u;
        // 0x3122ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122e8) {
            ctx->pc = 0x3122F8u;
            goto label_3122f8;
        }
    }
    ctx->pc = 0x3122F0u;
    // 0x3122f0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3122f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3122f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3122f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3122f8:
    // 0x3122f8: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x3122f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3122fc: 0x10313c  dsll32      $a2, $s0, 4
    ctx->pc = 0x3122fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 4));
    // 0x312300: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x312300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x312304: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x312304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x312308: 0x8f888b28  lw          $t0, -0x74D8($gp)
    ctx->pc = 0x312308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x31230c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31230cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x312310: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x312310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x312314: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x312314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x312318: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x312318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x31231c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x31231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x312320: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x312320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
    // 0x312324: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x312324u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x312328: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x312328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31232c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x31232cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x312330: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x312330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x312334: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x312334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x312338: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x312338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x31233c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x312340: 0xaf908b28  sw          $s0, -0x74D8($gp)
    ctx->pc = 0x312340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 16));
    // 0x312344: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x312344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x312348: 0x10193c  dsll32      $v1, $s0, 4
    ctx->pc = 0x312348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 4));
    // 0x31234c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x31234cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x312350: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x312350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x312354: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312358: 0xc04c090  jal         func_130240
    ctx->pc = 0x312358u;
    SET_GPR_U32(ctx, 31, 0x312360u);
    ctx->pc = 0x31235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312358u;
    // 0x31235c: 0xac23fc90  sw          $v1, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x312358u, 0x312360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312360u;
label_312360:
    // 0x312360: 0xc0410a6  jal         func_104298
    ctx->pc = 0x312360u;
    SET_GPR_U32(ctx, 31, 0x312368u);
    ctx->pc = 0x312364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312360u;
    // 0x312364: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x312360u, 0x312368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312368u;
label_312368:
    // 0x312368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31236c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31236cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312370: 0xc04121a  jal         func_104868
    ctx->pc = 0x312370u;
    SET_GPR_U32(ctx, 31, 0x312378u);
    ctx->pc = 0x312374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312370u;
    // 0x312374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x312370u, 0x312378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312378u;
label_312378:
    // 0x312378: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x312378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31237c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31237cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x312380: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x312380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x312384: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x312384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x312388: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x312388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31238c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31238cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x312390: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x312390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312394: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x312394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312398: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x312398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31239c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31239cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3123a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3123a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3123a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3123a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3123a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3123a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3123ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3123ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3123B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123ACu;
        // 0x3123b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3123ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3123B4u;
}
