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

// Function: sub_00294940
// Address: 0x294940 - 0x294b38
void sub_00294940_0x294940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294940_0x294940");
#endif

    switch (ctx->pc) {
        case 0x294984u: goto label_294984;
        case 0x294998u: goto label_294998;
        case 0x2949b4u: goto label_2949b4;
        case 0x2949ccu: goto label_2949cc;
        case 0x2949f8u: goto label_2949f8;
        case 0x294a0cu: goto label_294a0c;
        case 0x294a80u: goto label_294a80;
        case 0x294a98u: goto label_294a98;
        case 0x294aa0u: goto label_294aa0;
        case 0x294ac8u: goto label_294ac8;
        default: break;
    }

    ctx->pc = 0x294940u;

    // 0x294940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x294940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x294944: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294948: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x294948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29494c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294950: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x294950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x294954: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x294954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x294958: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x294958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29495c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x294960: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x294960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x294964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294968: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x294968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29496c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294970: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x294970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294974: 0x8c450858  lw          $a1, 0x858($v0)
    ctx->pc = 0x294974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2136)));
    // 0x294978: 0x24500858  addiu       $s0, $v0, 0x858
    ctx->pc = 0x294978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2136));
    // 0x29497c: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x29497Cu;
    SET_GPR_U32(ctx, 31, 0x294984u);
    ctx->pc = 0x294980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29497Cu;
    // 0x294980: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x29497Cu, 0x294984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294984u;
label_294984:
    // 0x294984: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x294984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x294988: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x294988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29498c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29498cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x294990: 0xc0a5328  jal         func_294CA0
    ctx->pc = 0x294990u;
    SET_GPR_U32(ctx, 31, 0x294998u);
    ctx->pc = 0x294994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294990u;
    // 0x294994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294CA0u, 0x294990u, 0x294998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294998u;
label_294998:
    // 0x294998: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29499c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29499cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949a0: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2949a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2949a4: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x2949a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2949a8: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x2949a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2949ac: 0xc09ae2c  jal         func_26B8B0
    ctx->pc = 0x2949ACu;
    SET_GPR_U32(ctx, 31, 0x2949B4u);
    ctx->pc = 0x2949B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2949ACu;
    // 0x2949b0: 0x26840194  addiu       $a0, $s4, 0x194 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x2949ACu, 0x2949B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949B4u;
label_2949b4:
    // 0x2949b4: 0x8e82085c  lw          $v0, 0x85C($s4)
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2140)));
    // 0x2949b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2949B8u;
    {
        const bool branch_taken_0x2949b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2949b8) {
            ctx->pc = 0x2949D8u;
            goto label_2949d8;
        }
    }
    ctx->pc = 0x2949C0u;
    // 0x2949c0: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2949c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2949c4: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2949C4u;
    SET_GPR_U32(ctx, 31, 0x2949CCu);
    ctx->pc = 0x2949C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2949C4u;
    // 0x2949c8: 0x94440058  lhu         $a0, 0x58($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2949C4u, 0x2949CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949CCu;
label_2949cc:
    // 0x2949cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2949CCu;
    {
        const bool branch_taken_0x2949cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2949D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949CCu;
        // 0x2949d0: 0xae8229cc  sw          $v0, 0x29CC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 10700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949cc) {
            ctx->pc = 0x2949E0u;
            goto label_2949e0;
        }
    }
    ctx->pc = 0x2949D4u;
    // 0x2949d4: 0x0  nop
    ctx->pc = 0x2949d4u;
    // NOP
label_2949d8:
    // 0x2949d8: 0xae8029cc  sw          $zero, 0x29CC($s4)
    ctx->pc = 0x2949d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10700), GPR_U32(ctx, 0));
    // 0x2949dc: 0x0  nop
    ctx->pc = 0x2949dcu;
    // NOP
label_2949e0:
    // 0x2949e0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x2949e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x2949e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2949e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949e8: 0x26526e30  addiu       $s2, $s2, 0x6E30
    ctx->pc = 0x2949e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28208));
    // 0x2949ec: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2949ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2949f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2949f4: 0x0  nop
    ctx->pc = 0x2949f4u;
    // NOP
label_2949f8:
    // 0x2949f8: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x2949f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2949fc: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x2949fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x294a00: 0x92870003  lbu         $a3, 0x3($s4)
    ctx->pc = 0x294a00u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x294a04: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x294A04u;
    SET_GPR_U32(ctx, 31, 0x294A0Cu);
    ctx->pc = 0x294A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A04u;
    // 0x294a08: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x294A04u, 0x294A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A0Cu;
label_294a0c:
    // 0x294a0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x294A0Cu;
    {
        const bool branch_taken_0x294a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a0c) {
            ctx->pc = 0x294A48u;
            goto label_294a48;
        }
    }
    ctx->pc = 0x294A14u;
    // 0x294a14: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x294a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x294a18: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x294a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x294a1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294A1Cu;
    {
        const bool branch_taken_0x294a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a1c) {
            ctx->pc = 0x294A30u;
            goto label_294a30;
        }
    }
    ctx->pc = 0x294A24u;
    // 0x294a24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x294a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x294a28: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x294a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x294a2c: 0x0  nop
    ctx->pc = 0x294a2cu;
    // NOP
label_294a30:
    // 0x294a30: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x294a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x294a34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294A34u;
    {
        const bool branch_taken_0x294a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a34) {
            ctx->pc = 0x294A48u;
            goto label_294a48;
        }
    }
    ctx->pc = 0x294A3Cu;
    // 0x294a3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x294a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x294a40: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x294a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x294a44: 0x0  nop
    ctx->pc = 0x294a44u;
    // NOP
label_294a48:
    // 0x294a48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x294a48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x294a4c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x294a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x294a50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x294a54: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x294a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x294a58: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x294A58u;
    {
        const bool branch_taken_0x294a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A58u;
        // 0x294a5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a58) {
            ctx->pc = 0x2949F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2949f8;
        }
    }
    ctx->pc = 0x294A60u;
    // 0x294a60: 0x9286065c  lbu         $a2, 0x65C($s4)
    ctx->pc = 0x294a60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1628)));
    // 0x294a64: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x294a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x294a68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294A68u;
    {
        const bool branch_taken_0x294a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A68u;
        // 0x294a6c: 0x28c100f0  slti        $at, $a2, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a68) {
            ctx->pc = 0x294A88u;
            goto label_294a88;
        }
    }
    ctx->pc = 0x294A70u;
    // 0x294a70: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x294A70u;
    {
        const bool branch_taken_0x294a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A70u;
        // 0x294a74: 0x26840650  addiu       $a0, $s4, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a70) {
            ctx->pc = 0x294A88u;
            goto label_294a88;
        }
    }
    ctx->pc = 0x294A78u;
    // 0x294a78: 0xc09d400  jal         func_275000
    ctx->pc = 0x294A78u;
    SET_GPR_U32(ctx, 31, 0x294A80u);
    ctx->pc = 0x294A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A78u;
    // 0x294a7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275000u, 0x294A78u, 0x294A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A80u;
label_294a80:
    // 0x294a80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x294A80u;
    {
        const bool branch_taken_0x294a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a80) {
            ctx->pc = 0x294A98u;
            goto label_294a98;
        }
    }
    ctx->pc = 0x294A88u;
label_294a88:
    // 0x294a88: 0x26840650  addiu       $a0, $s4, 0x650
    ctx->pc = 0x294a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1616));
    // 0x294a8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x294a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a90: 0xc09d400  jal         func_275000
    ctx->pc = 0x294A90u;
    SET_GPR_U32(ctx, 31, 0x294A98u);
    ctx->pc = 0x294A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A90u;
    // 0x294a94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275000u, 0x294A90u, 0x294A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A98u;
label_294a98:
    // 0x294a98: 0xc0a60bc  jal         func_2982F0
    ctx->pc = 0x294A98u;
    SET_GPR_U32(ctx, 31, 0x294AA0u);
    ctx->pc = 0x294A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294A98u;
    // 0x294a9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982F0u, 0x294A98u, 0x294AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AA0u;
label_294aa0:
    // 0x294aa0: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x294aa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x294aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294aa8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x294AA8u;
    {
        const bool branch_taken_0x294aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x294aa8) {
            ctx->pc = 0x294B18u;
            goto label_294b18;
        }
    }
    ctx->pc = 0x294AB0u;
    // 0x294ab0: 0x8e8306c8  lw          $v1, 0x6C8($s4)
    ctx->pc = 0x294ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
    // 0x294ab4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x294ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x294ab8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x294AB8u;
    {
        const bool branch_taken_0x294ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AB8u;
        // 0x294abc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ab8) {
            ctx->pc = 0x294AD8u;
            goto label_294ad8;
        }
    }
    ctx->pc = 0x294AC0u;
    // 0x294ac0: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x294AC0u;
    SET_GPR_U32(ctx, 31, 0x294AC8u);
    ctx->pc = 0x294AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294AC0u;
    // 0x294ac4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x294AC0u, 0x294AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AC8u;
label_294ac8:
    // 0x294ac8: 0x92832adb  lbu         $v1, 0x2ADB($s4)
    ctx->pc = 0x294ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10971)));
    // 0x294acc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x294accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x294ad0: 0xa2832adb  sb          $v1, 0x2ADB($s4)
    ctx->pc = 0x294ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10971), (uint8_t)GPR_U32(ctx, 3));
    // 0x294ad4: 0x0  nop
    ctx->pc = 0x294ad4u;
    // NOP
label_294ad8:
    // 0x294ad8: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x294ad8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x294adc: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x294adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x294ae0: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x294AE0u;
    {
        const bool branch_taken_0x294ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x294ae0) {
            ctx->pc = 0x294B18u;
            goto label_294b18;
        }
    }
    ctx->pc = 0x294AE8u;
    // 0x294ae8: 0x8e87085c  lw          $a3, 0x85C($s4)
    ctx->pc = 0x294ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2140)));
    // 0x294aec: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x294aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x294af0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x294af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x294af4: 0x8ce5004c  lw          $a1, 0x4C($a3)
    ctx->pc = 0x294af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x294af8: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x294af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x294afc: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x294afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x294b00: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x294b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x294b04: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x294b04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x294b08: 0xace304c4  sw          $v1, 0x4C4($a3)
    ctx->pc = 0x294b08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1220), GPR_U32(ctx, 3));
    // 0x294b0c: 0xace304c8  sw          $v1, 0x4C8($a3)
    ctx->pc = 0x294b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1224), GPR_U32(ctx, 3));
    // 0x294b10: 0xace304cc  sw          $v1, 0x4CC($a3)
    ctx->pc = 0x294b10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1228), GPR_U32(ctx, 3));
    // 0x294b14: 0x0  nop
    ctx->pc = 0x294b14u;
    // NOP
label_294b18:
    // 0x294b18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x294b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294b1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x294b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294b20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x294b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294b30: 0x3e00008  jr          $ra
    ctx->pc = 0x294B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B30u;
        // 0x294b34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B38u;
}
