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

// Function: sub_0031BB00
// Address: 0x31bb00 - 0x31bc88
void sub_0031BB00_0x31bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BB00_0x31bb00");
#endif

    switch (ctx->pc) {
        case 0x31bb88u: goto label_31bb88;
        case 0x31bba4u: goto label_31bba4;
        case 0x31bbb4u: goto label_31bbb4;
        case 0x31bbd4u: goto label_31bbd4;
        case 0x31bc04u: goto label_31bc04;
        default: break;
    }

    ctx->pc = 0x31bb00u;

    // 0x31bb00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x31bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x31bb04: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31bb08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31bb0c: 0x2442c998  addiu       $v0, $v0, -0x3668
    ctx->pc = 0x31bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953368));
    // 0x31bb10: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31bb14: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31bb18: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x31bb18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31bb20: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x31bb20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31bb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31bb28: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31bb28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31bb30: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x31bb30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31bb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31bb38: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31bb38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31bb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31bb40: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x31bb40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31bb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31bb48: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31bb48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x31bb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31bb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31bb50: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x31bb50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb54: 0x93a60100  lbu         $a2, 0x100($sp)
    ctx->pc = 0x31bb54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31bb58: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x31bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x31bb5c: 0xa3ab00af  sb          $t3, 0xAF($sp)
    ctx->pc = 0x31bb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 11));
    // 0x31bb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31bb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb64: 0x24070590  addiu       $a3, $zero, 0x590
    ctx->pc = 0x31bb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x31bb68: 0x2508ba90  addiu       $t0, $t0, -0x4570
    ctx->pc = 0x31bb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949520));
    // 0x31bb6c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x31bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31bb70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31bb74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31bb78: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x31bb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bb7c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x31bb7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31bb80: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x31BB80u;
    SET_GPR_U32(ctx, 31, 0x31BB88u);
    ctx->pc = 0x31BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB80u;
    // 0x31bb84: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x31BB80u, 0x31BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BB88u;
label_31bb88:
    // 0x31bb88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31bb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb8c: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x31BB8Cu;
    {
        const bool branch_taken_0x31bb8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB8Cu;
        // 0x31bb90: 0x326700ff  andi        $a3, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb8c) {
            ctx->pc = 0x31BC50u;
            goto label_31bc50;
        }
    }
    ctx->pc = 0x31BB94u;
    // 0x31bb94: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x31bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31bb98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31bb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb9c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x31BB9Cu;
    SET_GPR_U32(ctx, 31, 0x31BBA4u);
    ctx->pc = 0x31BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB9Cu;
    // 0x31bba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x31BB9Cu, 0x31BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBA4u;
label_31bba4:
    // 0x31bba4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x31bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x31bba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31bba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbac: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x31BBACu;
    SET_GPR_U32(ctx, 31, 0x31BBB4u);
    ctx->pc = 0x31BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBACu;
    // 0x31bbb0: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x31BBACu, 0x31BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBB4u;
label_31bbb4:
    // 0x31bbb4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x31bbb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbb8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x31bbb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbbc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x31bbbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbc4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x31bbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x31bbc8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31bbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31bbcc: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x31BBCCu;
    SET_GPR_U32(ctx, 31, 0x31BBD4u);
    ctx->pc = 0x31BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBCCu;
    // 0x31bbd0: 0x27aa00b0  addiu       $t2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x31BBCCu, 0x31BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BBD4u;
label_31bbd4:
    // 0x31bbd4: 0x24031c20  addiu       $v1, $zero, 0x1C20
    ctx->pc = 0x31bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
    // 0x31bbd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31bbdc: 0xa6230526  sh          $v1, 0x526($s1)
    ctx->pc = 0x31bbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x31bbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31bbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbe4: 0xa620052a  sh          $zero, 0x52A($s1)
    ctx->pc = 0x31bbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x31bbe8: 0xa6200528  sh          $zero, 0x528($s1)
    ctx->pc = 0x31bbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x31bbec: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x31bbecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bbf0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x31bbf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31bbf4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x31bbf4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x31bbf8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31bbfc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x31BBFCu;
    SET_GPR_U32(ctx, 31, 0x31BC04u);
    ctx->pc = 0x31BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBFCu;
    // 0x31bc00: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x31BBFCu, 0x31BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC04u;
label_31bc04:
    // 0x31bc04: 0xa23e057c  sb          $fp, 0x57C($s1)
    ctx->pc = 0x31bc04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1404), (uint8_t)GPR_U32(ctx, 30));
    // 0x31bc08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31bc0c: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x31bc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x31bc10: 0xa222057d  sb          $v0, 0x57D($s1)
    ctx->pc = 0x31bc10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1405), (uint8_t)GPR_U32(ctx, 2));
    // 0x31bc14: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x31bc14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31bc18: 0xa222057e  sb          $v0, 0x57E($s1)
    ctx->pc = 0x31bc18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1406), (uint8_t)GPR_U32(ctx, 2));
    // 0x31bc1c: 0xae200570  sw          $zero, 0x570($s1)
    ctx->pc = 0x31bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
    // 0x31bc20: 0xae230574  sw          $v1, 0x574($s1)
    ctx->pc = 0x31bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 3));
    // 0x31bc24: 0xae230578  sw          $v1, 0x578($s1)
    ctx->pc = 0x31bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1400), GPR_U32(ctx, 3));
    // 0x31bc28: 0xa233057f  sb          $s3, 0x57F($s1)
    ctx->pc = 0x31bc28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1407), (uint8_t)GPR_U32(ctx, 19));
    // 0x31bc2c: 0xa2200580  sb          $zero, 0x580($s1)
    ctx->pc = 0x31bc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1408), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bc30: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BC30u;
    {
        const bool branch_taken_0x31bc30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC30u;
        // 0x31bc34: 0xae200518  sw          $zero, 0x518($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc30) {
            ctx->pc = 0x31BC40u;
            goto label_31bc40;
        }
    }
    ctx->pc = 0x31BC38u;
    // 0x31bc38: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x31bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31bc3c: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x31bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
label_31bc40:
    // 0x31bc40: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x31bc40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31bc44: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x31bc44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x31bc48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31BC48u;
    {
        const bool branch_taken_0x31bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC48u;
        // 0x31bc4c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc48) {
            ctx->pc = 0x31BC58u;
            goto label_31bc58;
        }
    }
    ctx->pc = 0x31BC50u;
label_31bc50:
    // 0x31bc50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31bc50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc54: 0x0  nop
    ctx->pc = 0x31bc54u;
    // NOP
label_31bc58:
    // 0x31bc58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31bc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31bc5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31bc5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31bc60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31bc60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31bc64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31bc64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31bc68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31bc68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31bc6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31bc6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31bc70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31bc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31bc74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31bc74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31bc78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31bc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bc7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31bc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bc80: 0x3e00008  jr          $ra
    ctx->pc = 0x31BC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC80u;
        // 0x31bc84: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BC88u;
}
