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

// Function: sub_00370140
// Address: 0x370140 - 0x3705f0
void sub_00370140_0x370140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370140_0x370140");
#endif

    switch (ctx->pc) {
        case 0x3701c0u: goto label_3701c0;
        case 0x3701e4u: goto label_3701e4;
        case 0x3701f8u: goto label_3701f8;
        case 0x370244u: goto label_370244;
        case 0x37024cu: goto label_37024c;
        case 0x3702acu: goto label_3702ac;
        case 0x3702e8u: goto label_3702e8;
        case 0x370340u: goto label_370340;
        case 0x370350u: goto label_370350;
        case 0x370364u: goto label_370364;
        case 0x370378u: goto label_370378;
        case 0x370398u: goto label_370398;
        case 0x3703ccu: goto label_3703cc;
        case 0x370400u: goto label_370400;
        case 0x37043cu: goto label_37043c;
        case 0x370450u: goto label_370450;
        case 0x370494u: goto label_370494;
        case 0x3704ccu: goto label_3704cc;
        case 0x3704e8u: goto label_3704e8;
        case 0x3704f4u: goto label_3704f4;
        case 0x370504u: goto label_370504;
        case 0x370548u: goto label_370548;
        case 0x37055cu: goto label_37055c;
        case 0x370564u: goto label_370564;
        case 0x370588u: goto label_370588;
        case 0x3705a0u: goto label_3705a0;
        case 0x3705acu: goto label_3705ac;
        case 0x3705bcu: goto label_3705bc;
        case 0x3705c4u: goto label_3705c4;
        case 0x3705d8u: goto label_3705d8;
        default: break;
    }

    ctx->pc = 0x370140u;

    // 0x370140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x370140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x370144: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x370144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x370148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x370148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37014c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x370150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370154: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x370154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x370158: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x370158u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x37015c: 0x10a3011c  beq         $a1, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x37015Cu;
    {
        const bool branch_taken_0x37015c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x370160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37015Cu;
        // 0x370160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37015c) {
            ctx->pc = 0x3705D0u;
            goto label_3705d0;
        }
    }
    ctx->pc = 0x370164u;
    // 0x370164: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x370164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x370168: 0x10a300df  beq         $a1, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x370168u;
    {
        const bool branch_taken_0x370168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370168u;
        // 0x37016c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370168) {
            ctx->pc = 0x3704E8u;
            goto label_3704e8;
        }
    }
    ctx->pc = 0x370170u;
    // 0x370170: 0x10a300cb  beq         $a1, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x370170u;
    {
        const bool branch_taken_0x370170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x370170) {
            ctx->pc = 0x3704A0u;
            goto label_3704a0;
        }
    }
    ctx->pc = 0x370178u;
    // 0x370178: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x370178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x37017c: 0x10a3007c  beq         $a1, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x37017Cu;
    {
        const bool branch_taken_0x37017c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x370180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37017Cu;
        // 0x370180: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37017c) {
            ctx->pc = 0x370370u;
            goto label_370370;
        }
    }
    ctx->pc = 0x370184u;
    // 0x370184: 0x10a3005a  beq         $a1, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x370184u;
    {
        const bool branch_taken_0x370184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x370184) {
            ctx->pc = 0x3702F0u;
            goto label_3702f0;
        }
    }
    ctx->pc = 0x37018Cu;
    // 0x37018c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370190: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x370190u;
    {
        const bool branch_taken_0x370190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x370190) {
            ctx->pc = 0x3701D8u;
            goto label_3701d8;
        }
    }
    ctx->pc = 0x370198u;
    // 0x370198: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x370198u;
    {
        const bool branch_taken_0x370198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x370198) {
            ctx->pc = 0x3701A8u;
            goto label_3701a8;
        }
    }
    ctx->pc = 0x3701A0u;
    // 0x3701a0: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x3701A0u;
    {
        const bool branch_taken_0x3701a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3701a0) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x3701A8u;
label_3701a8:
    // 0x3701a8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3701a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3701ac: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3701acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3701b0: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x3701b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3701b4: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x3701b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x3701b8: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3701B8u;
    SET_GPR_U32(ctx, 31, 0x3701C0u);
    ctx->pc = 0x3701BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701B8u;
    // 0x3701bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3701B8u, 0x3701C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701C0u;
label_3701c0:
    // 0x3701c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3701c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3701c4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3701c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3701c8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3701c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3701cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3701ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3701d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3701d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3701d4: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3701d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_3701d8:
    // 0x3701d8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3701d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3701dc: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3701DCu;
    SET_GPR_U32(ctx, 31, 0x3701E4u);
    ctx->pc = 0x3701E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701DCu;
    // 0x3701e0: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x3701DCu, 0x3701E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701E4u;
label_3701e4:
    // 0x3701e4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3701e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3701e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3701e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701ec: 0x8c311284  lw          $s1, 0x1284($at)
    ctx->pc = 0x3701ecu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x911284u));
    // 0x3701f0: 0xc0dc044  jal         func_370110
    ctx->pc = 0x3701F0u;
    SET_GPR_U32(ctx, 31, 0x3701F8u);
    ctx->pc = 0x3701F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701F0u;
    // 0x3701f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370110u, 0x3701F0u, 0x3701F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701F8u;
label_3701f8:
    // 0x3701f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3701f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3701fc: 0x16430016  bne         $s2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3701FCu;
    {
        const bool branch_taken_0x3701fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3701fc) {
            ctx->pc = 0x370258u;
            goto label_370258;
        }
    }
    ctx->pc = 0x370204u;
    // 0x370204: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x370204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x370208: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37020c: 0xa2020026  sb          $v0, 0x26($s0)
    ctx->pc = 0x37020cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x370210: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x370210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370214: 0xa2000027  sb          $zero, 0x27($s0)
    ctx->pc = 0x370214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x370218: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x370218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x37021c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370220: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x370220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x370224: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x370224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37022c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37022cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370230: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370234: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370234u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370238: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370238u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37023c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37023Cu;
    SET_GPR_U32(ctx, 31, 0x370244u);
    ctx->pc = 0x370240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37023Cu;
    // 0x370240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37023Cu, 0x370244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370244u;
label_370244:
    // 0x370244: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x370244u;
    SET_GPR_U32(ctx, 31, 0x37024Cu);
    ctx->pc = 0x370248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370244u;
    // 0x370248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x370244u, 0x37024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37024Cu;
label_37024c:
    // 0x37024c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x37024Cu;
    {
        const bool branch_taken_0x37024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37024c) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x370254u;
    // 0x370254: 0x0  nop
    ctx->pc = 0x370254u;
    // NOP
label_370258:
    // 0x370258: 0x122000df  beqz        $s1, . + 4 + (0xDF << 2)
    ctx->pc = 0x370258u;
    {
        const bool branch_taken_0x370258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370258u;
        // 0x37025c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370258) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x370260u;
    // 0x370260: 0x164300dd  bne         $s2, $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x370260u;
    {
        const bool branch_taken_0x370260 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x370260) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x370268u;
    // 0x370268: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x370268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37026c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x37026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x370270: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x370270u;
    {
        const bool branch_taken_0x370270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370270u;
        // 0x370274: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370270) {
            ctx->pc = 0x3702B8u;
            goto label_3702b8;
        }
    }
    ctx->pc = 0x370278u;
    // 0x370278: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37027c: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x37027cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x370280: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x370280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370284: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x370284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x370288: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x370288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37028c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x37028cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370298: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37029c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37029cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3702a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3702A4u;
    SET_GPR_U32(ctx, 31, 0x3702ACu);
    ctx->pc = 0x3702A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3702A4u;
    // 0x3702a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3702A4u, 0x3702ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3702ACu;
label_3702ac:
    // 0x3702ac: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x3702ACu;
    {
        const bool branch_taken_0x3702ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3702ac) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x3702B4u;
    // 0x3702b4: 0x0  nop
    ctx->pc = 0x3702b4u;
    // NOP
label_3702b8:
    // 0x3702b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3702b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3702bc: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3702bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3702c0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3702c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3702c4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3702c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3702c8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3702c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3702cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3702ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3702d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3702d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3702d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3702dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3702e0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3702E0u;
    SET_GPR_U32(ctx, 31, 0x3702E8u);
    ctx->pc = 0x3702E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3702E0u;
    // 0x3702e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3702E0u, 0x3702E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3702E8u;
label_3702e8:
    // 0x3702e8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x3702E8u;
    {
        const bool branch_taken_0x3702e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3702e8) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x3702F0u;
label_3702f0:
    // 0x3702f0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3702f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3702f4: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x3702f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3702f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3702f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3702fc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3702fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x370300: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x370300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x370304: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370308: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37030c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x37030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x370310: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x370310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x370314: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x370314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x370318: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x370318u;
    {
        const bool branch_taken_0x370318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370318u;
        // 0x37031c: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370318) {
            ctx->pc = 0x370358u;
            goto label_370358;
        }
    }
    ctx->pc = 0x370320u;
    // 0x370320: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x370320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x370324: 0xa2030021  sb          $v1, 0x21($s0)
    ctx->pc = 0x370324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x370328: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x370328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x37032c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x37032cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x370330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x370330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x370334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x370334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x370338: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x370338u;
    SET_GPR_U32(ctx, 31, 0x370340u);
    ctx->pc = 0x37033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370338u;
    // 0x37033c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x370338u, 0x370340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370340u;
label_370340:
    // 0x370340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370344: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x370344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x370348: 0xc0da0a8  jal         func_3682A0
    ctx->pc = 0x370348u;
    SET_GPR_U32(ctx, 31, 0x370350u);
    ctx->pc = 0x37034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370348u;
    // 0x37034c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3682A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3682A0u, 0x370348u, 0x370350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370350u;
label_370350:
    // 0x370350: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x370350u;
    {
        const bool branch_taken_0x370350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370350) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x370358u;
label_370358:
    // 0x370358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37035c: 0xc0da034  jal         func_3680D0
    ctx->pc = 0x37035Cu;
    SET_GPR_U32(ctx, 31, 0x370364u);
    ctx->pc = 0x370360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37035Cu;
    // 0x370360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3680D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3680D0u, 0x37035Cu, 0x370364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370364u;
label_370364:
    // 0x370364: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x370364u;
    {
        const bool branch_taken_0x370364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370364) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x37036Cu;
    // 0x37036c: 0x0  nop
    ctx->pc = 0x37036cu;
    // NOP
label_370370:
    // 0x370370: 0xc0da0e4  jal         func_368390
    ctx->pc = 0x370370u;
    SET_GPR_U32(ctx, 31, 0x370378u);
    ctx->pc = 0x368390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368390u, 0x370370u, 0x370378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370378u;
label_370378:
    // 0x370378: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x370378u;
    {
        const bool branch_taken_0x370378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370378) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x370380u;
    // 0x370380: 0x860300aa  lh          $v1, 0xAA($s0)
    ctx->pc = 0x370380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x370384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x370384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370388: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x370388u;
    {
        const bool branch_taken_0x370388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370388u;
        // 0x37038c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370388) {
            ctx->pc = 0x3703D8u;
            goto label_3703d8;
        }
    }
    ctx->pc = 0x370390u;
    // 0x370390: 0xc0da0c8  jal         func_368320
    ctx->pc = 0x370390u;
    SET_GPR_U32(ctx, 31, 0x370398u);
    ctx->pc = 0x370394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370390u;
    // 0x370394: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368320u, 0x370390u, 0x370398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370398u;
label_370398:
    // 0x370398: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37039c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37039cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3703a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3703a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3703a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3703a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3703a8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3703a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3703ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3703acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703b0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3703b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3703b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3703b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3703b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3703bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3703c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3703c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3703C4u;
    SET_GPR_U32(ctx, 31, 0x3703CCu);
    ctx->pc = 0x3703C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703C4u;
    // 0x3703c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3703C4u, 0x3703CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703CCu;
label_3703cc:
    // 0x3703cc: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x3703CCu;
    {
        const bool branch_taken_0x3703cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3703cc) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x3703D4u;
    // 0x3703d4: 0x0  nop
    ctx->pc = 0x3703d4u;
    // NOP
label_3703d8:
    // 0x3703d8: 0xa2030114  sb          $v1, 0x114($s0)
    ctx->pc = 0x3703d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 276), (uint8_t)GPR_U32(ctx, 3));
    // 0x3703dc: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3703dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3703e0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3703e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3703e4: 0x8c221284  lw          $v0, 0x1284($at)
    ctx->pc = 0x3703e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x911284u));
    // 0x3703e8: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3703e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3703ec: 0x92060114  lbu         $a2, 0x114($s0)
    ctx->pc = 0x3703ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x3703f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3703f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3703f4: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3703f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3703f8: 0xc0c31a8  jal         func_30C6A0
    ctx->pc = 0x3703F8u;
    SET_GPR_U32(ctx, 31, 0x370400u);
    ctx->pc = 0x3703FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3703F8u;
    // 0x3703fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C6A0u, 0x3703F8u, 0x370400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370400u;
label_370400:
    // 0x370400: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x370400u;
    {
        const bool branch_taken_0x370400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x370400) {
            ctx->pc = 0x370458u;
            goto label_370458;
        }
    }
    ctx->pc = 0x370408u;
    // 0x370408: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37040c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x370410: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x370410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x370414: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x370414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370418: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x370418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x37041c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370420: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x370420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370428: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37042c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37042cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370430: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370430u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370434: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x370434u;
    SET_GPR_U32(ctx, 31, 0x37043Cu);
    ctx->pc = 0x370438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370434u;
    // 0x370438: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x370434u, 0x37043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37043Cu;
label_37043c:
    // 0x37043c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x37043cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x370440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370444: 0x8c25bb3c  lw          $a1, -0x44C4($at)
    ctx->pc = 0x370444u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8DBB3Cu));
    // 0x370448: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x370448u;
    SET_GPR_U32(ctx, 31, 0x370450u);
    ctx->pc = 0x37044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370448u;
    // 0x37044c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x370448u, 0x370450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370450u;
label_370450:
    // 0x370450: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x370450u;
    {
        const bool branch_taken_0x370450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370450) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x370458u;
label_370458:
    // 0x370458: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x370458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x37045c: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x37045cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x370460: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x370464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370468: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x370468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37046c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x37046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x370470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370474: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x370474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x370478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37047c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x37047cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x370480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370488: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370488u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37048c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37048Cu;
    SET_GPR_U32(ctx, 31, 0x370494u);
    ctx->pc = 0x370490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37048Cu;
    // 0x370490: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37048Cu, 0x370494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370494u;
label_370494:
    // 0x370494: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x370494u;
    {
        const bool branch_taken_0x370494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370494) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x37049Cu;
    // 0x37049c: 0x0  nop
    ctx->pc = 0x37049cu;
    // NOP
label_3704a0:
    // 0x3704a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3704a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3704a4: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x3704a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3704a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3704a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3704ac: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3704acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3704b0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3704b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3704b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3704b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3704b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3704b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3704bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3704c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3704c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3704c4: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x3704C4u;
    SET_GPR_U32(ctx, 31, 0x3704CCu);
    ctx->pc = 0x3704C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704C4u;
    // 0x3704c8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x3704C4u, 0x3704CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704CCu;
label_3704cc:
    // 0x3704cc: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3704ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3704d0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3704d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3704d4: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3704d4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3704d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3704d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3704dc: 0x3445003d  ori         $a1, $v0, 0x3D
    ctx->pc = 0x3704dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61);
    // 0x3704e0: 0xc0dc810  jal         func_372040
    ctx->pc = 0x3704E0u;
    SET_GPR_U32(ctx, 31, 0x3704E8u);
    ctx->pc = 0x3704E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704E0u;
    // 0x3704e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x3704E0u, 0x3704E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704E8u;
label_3704e8:
    // 0x3704e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3704e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3704ec: 0xc095150  jal         func_254540
    ctx->pc = 0x3704ECu;
    SET_GPR_U32(ctx, 31, 0x3704F4u);
    ctx->pc = 0x3704F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704ECu;
    // 0x3704f0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3704ECu, 0x3704F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704F4u;
label_3704f4:
    // 0x3704f4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3704F4u;
    {
        const bool branch_taken_0x3704f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3704F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704F4u;
        // 0x3704f8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704f4) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x3704FCu;
    // 0x3704fc: 0xc095154  jal         func_254550
    ctx->pc = 0x3704FCu;
    SET_GPR_U32(ctx, 31, 0x370504u);
    ctx->pc = 0x370500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3704FCu;
    // 0x370500: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3704FCu, 0x370504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370504u;
label_370504:
    // 0x370504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x370504u;
    {
        const bool branch_taken_0x370504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370504u;
        // 0x370508: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370504) {
            ctx->pc = 0x370518u;
            goto label_370518;
        }
    }
    ctx->pc = 0x37050Cu;
    // 0x37050c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x37050Cu;
    {
        const bool branch_taken_0x37050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37050Cu;
        // 0x370510: 0xa2030020  sb          $v1, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37050c) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x370514u;
    // 0x370514: 0x0  nop
    ctx->pc = 0x370514u;
    // NOP
label_370518:
    // 0x370518: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x370518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37051c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x37051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x370520: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x370520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x370524: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x370524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x370528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x370528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37052c: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x37052cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x370530: 0x8c311284  lw          $s1, 0x1284($at)
    ctx->pc = 0x370530u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x911284u));
    // 0x370534: 0x92060114  lbu         $a2, 0x114($s0)
    ctx->pc = 0x370534u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x370538: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x370538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37053c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x37053cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x370540: 0xc0c31a8  jal         func_30C6A0
    ctx->pc = 0x370540u;
    SET_GPR_U32(ctx, 31, 0x370548u);
    ctx->pc = 0x370544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370540u;
    // 0x370544: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C6A0u, 0x370540u, 0x370548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370548u;
label_370548:
    // 0x370548: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x370548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37054c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x37054cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x370550: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x370550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x370554: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x370554u;
    SET_GPR_U32(ctx, 31, 0x37055Cu);
    ctx->pc = 0x370558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370554u;
    // 0x370558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x370554u, 0x37055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37055Cu;
label_37055c:
    // 0x37055c: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x37055Cu;
    SET_GPR_U32(ctx, 31, 0x370564u);
    ctx->pc = 0x370560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37055Cu;
    // 0x370560: 0x92040114  lbu         $a0, 0x114($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x37055Cu, 0x370564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370564u;
label_370564:
    // 0x370564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x370564u;
    {
        const bool branch_taken_0x370564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370564) {
            ctx->pc = 0x370588u;
            goto label_370588;
        }
    }
    ctx->pc = 0x37056Cu;
    // 0x37056c: 0x9043005f  lbu         $v1, 0x5F($v0)
    ctx->pc = 0x37056cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 95)));
    // 0x370570: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370574: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x370574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x370578: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x370578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x37057c: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x37057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x370580: 0xc0e098c  jal         func_382630
    ctx->pc = 0x370580u;
    SET_GPR_U32(ctx, 31, 0x370588u);
    ctx->pc = 0x370584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370580u;
    // 0x370584: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382630u, 0x370580u, 0x370588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370588u;
label_370588:
    // 0x370588: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x370588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x37058c: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x37058cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x370590: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x370590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x370594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370598: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x370598u;
    SET_GPR_U32(ctx, 31, 0x3705A0u);
    ctx->pc = 0x37059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370598u;
    // 0x37059c: 0x3445003e  ori         $a1, $v0, 0x3E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x370598u, 0x3705A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705A0u;
label_3705a0:
    // 0x3705a0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3705a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3705a4: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x3705A4u;
    SET_GPR_U32(ctx, 31, 0x3705ACu);
    ctx->pc = 0x3705A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705A4u;
    // 0x3705a8: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x3705A4u, 0x3705ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705ACu;
label_3705ac:
    // 0x3705ac: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3705acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3705b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3705b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3705b4: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3705B4u;
    SET_GPR_U32(ctx, 31, 0x3705BCu);
    ctx->pc = 0x3705B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705B4u;
    // 0x3705b8: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3705B4u, 0x3705BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705BCu;
label_3705bc:
    // 0x3705bc: 0xc0dc044  jal         func_370110
    ctx->pc = 0x3705BCu;
    SET_GPR_U32(ctx, 31, 0x3705C4u);
    ctx->pc = 0x3705C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705BCu;
    // 0x3705c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370110u, 0x3705BCu, 0x3705C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705C4u;
label_3705c4:
    // 0x3705c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3705C4u;
    {
        const bool branch_taken_0x3705c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3705c4) {
            ctx->pc = 0x3705D8u;
            goto label_3705d8;
        }
    }
    ctx->pc = 0x3705CCu;
    // 0x3705cc: 0x0  nop
    ctx->pc = 0x3705ccu;
    // NOP
label_3705d0:
    // 0x3705d0: 0xc0da0c8  jal         func_368320
    ctx->pc = 0x3705D0u;
    SET_GPR_U32(ctx, 31, 0x3705D8u);
    ctx->pc = 0x3705D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705D0u;
    // 0x3705d4: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368320u, 0x3705D0u, 0x3705D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705D8u;
label_3705d8:
    // 0x3705d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3705d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3705dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3705dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3705e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3705e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3705e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3705e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3705e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3705E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3705ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705E8u;
        // 0x3705ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3705E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3705F0u;
}
