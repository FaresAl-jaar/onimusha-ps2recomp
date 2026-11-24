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

// Function: sub_00371780
// Address: 0x371780 - 0x371a20
void sub_00371780_0x371780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371780_0x371780");
#endif

    switch (ctx->pc) {
        case 0x371830u: goto label_371830;
        case 0x371840u: goto label_371840;
        case 0x371878u: goto label_371878;
        case 0x3718a4u: goto label_3718a4;
        case 0x3718b8u: goto label_3718b8;
        case 0x3718e0u: goto label_3718e0;
        case 0x371904u: goto label_371904;
        case 0x37191cu: goto label_37191c;
        case 0x371950u: goto label_371950;
        case 0x371978u: goto label_371978;
        case 0x371990u: goto label_371990;
        case 0x3719a0u: goto label_3719a0;
        case 0x3719dcu: goto label_3719dc;
        default: break;
    }

    ctx->pc = 0x371780u;

    // 0x371780: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x371780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x371784: 0x240201f0  addiu       $v0, $zero, 0x1F0
    ctx->pc = 0x371784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x371788: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x371788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x37178c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x37178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x371790: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x371790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x371794: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x371794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x371798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x371798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37179c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x37179cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3717a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3717a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3717a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3717a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3717ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3717acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3717b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3717b4: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x3717b4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3717b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3717b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3717bc: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x3717bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x3717c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3717c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3717c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3717c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3717c8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3717c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x3717cc: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x3717ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3717d0: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x3717d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x3717d4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3717d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3717d8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3717d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x3717dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3717dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3717e0: 0x26a20102  addiu       $v0, $s5, 0x102
    ctx->pc = 0x3717e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 258));
    // 0x3717e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3717e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3717e8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3717e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x3717ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3717ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3717f0: 0x26a2011c  addiu       $v0, $s5, 0x11C
    ctx->pc = 0x3717f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 284));
    // 0x3717f4: 0xafa800f8  sw          $t0, 0xF8($sp)
    ctx->pc = 0x3717f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 8));
    // 0x3717f8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3717f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3717fc: 0x247301c4  addiu       $s3, $v1, 0x1C4
    ctx->pc = 0x3717fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 452));
    // 0x371800: 0xafa900f4  sw          $t1, 0xF4($sp)
    ctx->pc = 0x371800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 9));
    // 0x371804: 0x26b70028  addiu       $s7, $s5, 0x28
    ctx->pc = 0x371804u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x371808: 0xa7a700fe  sh          $a3, 0xFE($sp)
    ctx->pc = 0x371808u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 254), (uint16_t)GPR_U32(ctx, 7));
    // 0x37180c: 0x26940022  addiu       $s4, $s4, 0x22
    ctx->pc = 0x37180cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
    // 0x371810: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x371810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371814: 0x7c10003  bgez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x371814u;
    {
        const bool branch_taken_0x371814 = (GPR_S64(ctx, 30) >= 0);
        ctx->pc = 0x371818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371814u;
        // 0x371818: 0x1e1043  sra         $v0, $fp, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371814) {
            ctx->pc = 0x371824u;
            goto label_371824;
        }
    }
    ctx->pc = 0x37181Cu;
    // 0x37181c: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x37181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x371820: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x371820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_371824:
    // 0x371824: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x371824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x371828: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x371828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x37182c: 0x0  nop
    ctx->pc = 0x37182cu;
    // NOP
label_371830:
    // 0x371830: 0x97a500fe  lhu         $a1, 0xFE($sp)
    ctx->pc = 0x371830u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 254)));
    // 0x371834: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x371834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x371838: 0xc0bd0c0  jal         func_2F4300
    ctx->pc = 0x371838u;
    SET_GPR_U32(ctx, 31, 0x371840u);
    ctx->pc = 0x37183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371838u;
    // 0x37183c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4300u, 0x371838u, 0x371840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371840u;
label_371840:
    // 0x371840: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x371840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x371844: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x371844u;
    {
        const bool branch_taken_0x371844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x371844) {
            ctx->pc = 0x371950u;
            goto label_371950;
        }
    }
    ctx->pc = 0x37184Cu;
    // 0x37184c: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x37184cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x371850: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x371850u;
    {
        const bool branch_taken_0x371850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x371854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371850u;
        // 0x371854: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371850) {
            ctx->pc = 0x371880u;
            goto label_371880;
        }
    }
    ctx->pc = 0x371858u;
    // 0x371858: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371858u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x37185c: 0x32e5ffff  andi        $a1, $s7, 0xFFFF
    ctx->pc = 0x37185cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x371860: 0x3286ffff  andi        $a2, $s4, 0xFFFF
    ctx->pc = 0x371860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x371864: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37186c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x37186cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371870: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371870u;
    SET_GPR_U32(ctx, 31, 0x371878u);
    ctx->pc = 0x371874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371870u;
    // 0x371874: 0x25291968  addiu       $t1, $t1, 0x1968 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371870u, 0x371878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371878u;
label_371878:
    // 0x371878: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x371878u;
    {
        const bool branch_taken_0x371878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371878) {
            ctx->pc = 0x371950u;
            goto label_371950;
        }
    }
    ctx->pc = 0x371880u;
label_371880:
    // 0x371880: 0x96110004  lhu         $s1, 0x4($s0)
    ctx->pc = 0x371880u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x371884: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x371884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x371888: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x37188c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37188cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371890: 0x3406fff5  ori         $a2, $zero, 0xFFF5
    ctx->pc = 0x371890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371894: 0x34478080  ori         $a3, $v0, 0x8080
    ctx->pc = 0x371894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x371898: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x371898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37189c: 0xc0ed8f8  jal         func_3B63E0
    ctx->pc = 0x37189Cu;
    SET_GPR_U32(ctx, 31, 0x3718A4u);
    ctx->pc = 0x3718A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37189Cu;
    // 0x3718a0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63E0u, 0x37189Cu, 0x3718A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3718A4u;
label_3718a4:
    // 0x3718a4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3718a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3718a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3718a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718ac: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3718acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3718b0: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x3718B0u;
    SET_GPR_U32(ctx, 31, 0x3718B8u);
    ctx->pc = 0x3718B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3718B0u;
    // 0x3718b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x3718B0u, 0x3718B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3718B8u;
label_3718b8:
    // 0x3718b8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3718b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3718bc: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3718bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3718c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3718c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718c4: 0x32e5ffff  andi        $a1, $s7, 0xFFFF
    ctx->pc = 0x3718c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x3718c8: 0x3286ffff  andi        $a2, $s4, 0xFFFF
    ctx->pc = 0x3718c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3718cc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3718ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3718d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3718d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718d4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3718d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3718d8: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3718D8u;
    SET_GPR_U32(ctx, 31, 0x3718E0u);
    ctx->pc = 0x3718DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3718D8u;
    // 0x3718dc: 0x25291948  addiu       $t1, $t1, 0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3718D8u, 0x3718E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3718E0u;
label_3718e0:
    // 0x3718e0: 0x1640001b  bnez        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x3718E0u;
    {
        const bool branch_taken_0x3718e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3718e0) {
            ctx->pc = 0x371950u;
            goto label_371950;
        }
    }
    ctx->pc = 0x3718E8u;
    // 0x3718e8: 0x92080001  lbu         $t0, 0x1($s0)
    ctx->pc = 0x3718e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3718ec: 0x3229ffff  andi        $t1, $s1, 0xFFFF
    ctx->pc = 0x3718ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3718f0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3718f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3718f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3718f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3718f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718fc: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x3718FCu;
    SET_GPR_U32(ctx, 31, 0x371904u);
    ctx->pc = 0x371900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3718FCu;
    // 0x371900: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x3718FCu, 0x371904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371904u;
label_371904:
    // 0x371904: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x371904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x371908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x371908u;
    {
        const bool branch_taken_0x371908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371908u;
        // 0x37190c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371908) {
            ctx->pc = 0x371950u;
            goto label_371950;
        }
    }
    ctx->pc = 0x371910u;
    // 0x371910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x371910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371914: 0xc0bd174  jal         func_2F45D0
    ctx->pc = 0x371914u;
    SET_GPR_U32(ctx, 31, 0x37191Cu);
    ctx->pc = 0x371918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371914u;
    // 0x371918: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45D0u, 0x371914u, 0x37191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37191Cu;
label_37191c:
    // 0x37191c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x37191cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371920: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x371920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x371924: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x371924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x371928: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371928u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x37192c: 0x3286ffff  andi        $a2, $s4, 0xFFFF
    ctx->pc = 0x37192cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x371930: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371938: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x371938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37193c: 0x25291970  addiu       $t1, $t1, 0x1970
    ctx->pc = 0x37193cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6512));
    // 0x371940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x371940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371944: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x371944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x371948: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371948u;
    SET_GPR_U32(ctx, 31, 0x371950u);
    ctx->pc = 0x37194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371948u;
    // 0x37194c: 0x344a0051  ori         $t2, $v0, 0x51 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)81);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371948u, 0x371950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371950u;
label_371950:
    // 0x371950: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x371950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x371954: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x371954u;
    {
        const bool branch_taken_0x371954 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x371954) {
            ctx->pc = 0x371990u;
            goto label_371990;
        }
    }
    ctx->pc = 0x37195Cu;
    // 0x37195c: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x37195cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x371960: 0x26a4fffd  addiu       $a0, $s5, -0x3
    ctx->pc = 0x371960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967293));
    // 0x371964: 0x8ec9004c  lw          $t1, 0x4C($s6)
    ctx->pc = 0x371964u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
    // 0x371968: 0x2685fff6  addiu       $a1, $s4, -0xA
    ctx->pc = 0x371968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
    // 0x37196c: 0x26880009  addiu       $t0, $s4, 0x9
    ctx->pc = 0x37196cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
    // 0x371970: 0xc09c488  jal         func_271220
    ctx->pc = 0x371970u;
    SET_GPR_U32(ctx, 31, 0x371978u);
    ctx->pc = 0x371974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371970u;
    // 0x371974: 0x3406fff7  ori         $a2, $zero, 0xFFF7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271220u, 0x371970u, 0x371978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371978u;
label_371978:
    // 0x371978: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x371978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37197c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x37197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371980: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x371980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371984: 0x3407fff7  ori         $a3, $zero, 0xFFF7
    ctx->pc = 0x371984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    // 0x371988: 0xc0dc688  jal         func_371A20
    ctx->pc = 0x371988u;
    SET_GPR_U32(ctx, 31, 0x371990u);
    ctx->pc = 0x37198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371988u;
    // 0x37198c: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371A20u, 0x371988u, 0x371990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371990u;
label_371990:
    // 0x371990: 0x97a500fe  lhu         $a1, 0xFE($sp)
    ctx->pc = 0x371990u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 254)));
    // 0x371994: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x371994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x371998: 0xc0bd0c0  jal         func_2F4300
    ctx->pc = 0x371998u;
    SET_GPR_U32(ctx, 31, 0x3719A0u);
    ctx->pc = 0x37199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371998u;
    // 0x37199c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4300u, 0x371998u, 0x3719A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719A0u;
label_3719a0:
    // 0x3719a0: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x3719a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3719a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3719A4u;
    {
        const bool branch_taken_0x3719a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719A4u;
        // 0x3719a8: 0x3c04004e  lui         $a0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719a4) {
            ctx->pc = 0x3719B8u;
            goto label_3719b8;
        }
    }
    ctx->pc = 0x3719ACu;
    // 0x3719ac: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3719acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3719b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3719B0u;
    {
        const bool branch_taken_0x3719b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3719B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719B0u;
        // 0x3719b4: 0x2484703c  addiu       $a0, $a0, 0x703C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28732));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719b0) {
            ctx->pc = 0x3719BCu;
            goto label_3719bc;
        }
    }
    ctx->pc = 0x3719B8u;
label_3719b8:
    // 0x3719b8: 0x24847050  addiu       $a0, $a0, 0x7050
    ctx->pc = 0x3719b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28752));
label_3719bc:
    // 0x3719bc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3719bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3719c0: 0x26860001  addiu       $a2, $s4, 0x1
    ctx->pc = 0x3719c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3719c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3719c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719c8: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x3719c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x3719cc: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x3719ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3719d0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x3719d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3719d4: 0xc09c844  jal         func_272110
    ctx->pc = 0x3719D4u;
    SET_GPR_U32(ctx, 31, 0x3719DCu);
    ctx->pc = 0x3719D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3719D4u;
    // 0x3719d8: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x3719D4u, 0x3719DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719DCu;
label_3719dc:
    // 0x3719dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3719dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3719e0: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x3719e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x3719e4: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x3719e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3719e8: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x3719E8u;
    {
        const bool branch_taken_0x3719e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3719ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719E8u;
        // 0x3719ec: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3719e8) {
            ctx->pc = 0x371830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371830;
        }
    }
    ctx->pc = 0x3719F0u;
    // 0x3719f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3719f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3719f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3719f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3719f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3719f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3719fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3719fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371a00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x371a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371a04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371a04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371a08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371a18: 0x3e00008  jr          $ra
    ctx->pc = 0x371A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371A18u;
        // 0x371a1c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371A20u;
}
