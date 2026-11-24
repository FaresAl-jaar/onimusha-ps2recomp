#include <cstdio>
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

// Function: sub_0018E990
// Address: 0x18e990 - 0x18eb48
void sub_0018E990_0x18e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E990_0x18e990");
#endif

    switch (ctx->pc) {
        case 0x18e9a0u: goto label_18e9a0;
        case 0x18e9a8u: goto label_18e9a8;
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea74u: goto label_18ea74;
        case 0x18ea8cu: goto label_18ea8c;
        case 0x18eaa4u: goto label_18eaa4;
        case 0x18eabcu: goto label_18eabc;
        case 0x18ead4u: goto label_18ead4;
        case 0x18eaf8u: goto label_18eaf8;
        case 0x18eb18u: goto label_18eb18;
        case 0x18eb2cu: goto label_18eb2c;
        case 0x18eb40u: goto label_18eb40;
        default: break;
    }

    ctx->pc = 0x18e990u;

    // 0x18e990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e998: 0xc063b4c  jal         func_18ED30
    ctx->pc = 0x18E998u;
    SET_GPR_U32(ctx, 31, 0x18E9A0u);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E998u, 0x18E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9A0u;
label_18e9a0:
    // 0x18e9a0: 0xc0c6a54  jal         func_31A950
    ctx->pc = 0x18E9A0u;
    SET_GPR_U32(ctx, 31, 0x18E9A8u);
    ctx->pc = 0x31A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A950u, 0x18E9A0u, 0x18E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9A8u;
label_18e9a8:
    // 0x18e9a8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18e9ac: 0xa02024f0  sb          $zero, 0x24F0($at)
    ctx->pc = 0x18e9acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8424F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8424F0u, _value); } while (0);
    // 0x18e9b0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18e9b4: 0xa02024f3  sb          $zero, 0x24F3($at)
    ctx->pc = 0x18e9b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8424F3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8424F3u, _value); } while (0);
    // 0x18e9b8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18e9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18e9bc: 0xa02024f2  sb          $zero, 0x24F2($at)
    ctx->pc = 0x18e9bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8424F2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8424F2u, _value); } while (0);
    // 0x18e9c0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18e9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18e9c4: 0xa02024f1  sb          $zero, 0x24F1($at)
    ctx->pc = 0x18e9c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8424F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8424F1u, _value); } while (0);
    // 0x18e9c8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18e9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18e9cc: 0xa02024f4  sb          $zero, 0x24F4($at)
    ctx->pc = 0x18e9ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8424F4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8424F4u, _value); } while (0);
label_18e9d0:
    // 0x18e9d0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    { static uint64_t last=~0ull; static uint32_t n=0; const uint64_t v=(uint64_t)READ32(0x8424f0u); ++n; if (v!=last) { last=v; fprintf(stderr,"[chg bootstate] n=%u val=0x%llx a0=0x%x ra=0x%x\n",n,(unsigned long long)v,GPR_U32(ctx,4),GPR_U32(ctx,31)); } }
    // 0x18e9d4: 0x902424f0  lbu         $a0, 0x24F0($at)
    ctx->pc = 0x18e9d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8424F0u));
    // 0x18e9d8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x18e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x18e9dc: 0x10820048  beq         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x18E9DCu;
    {
        const bool branch_taken_0x18e9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9DCu;
        // 0x18e9e0: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9dc) {
            ctx->pc = 0x18EB00u;
            goto label_18eb00;
        }
    }
    ctx->pc = 0x18E9E4u;
    // 0x18e9e4: 0x1082003e  beq         $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x18E9E4u;
    {
        const bool branch_taken_0x18e9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e9e4) {
            ctx->pc = 0x18EAE0u;
            goto label_18eae0;
        }
    }
    ctx->pc = 0x18E9ECu;
    // 0x18e9ec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x18e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18e9f0: 0x10820035  beq         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x18E9F0u;
    {
        const bool branch_taken_0x18e9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9F0u;
        // 0x18e9f4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9f0) {
            ctx->pc = 0x18EAC8u;
            goto label_18eac8;
        }
    }
    ctx->pc = 0x18E9F8u;
    // 0x18e9f8: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x18E9F8u;
    {
        const bool branch_taken_0x18e9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e9f8) {
            ctx->pc = 0x18EAB0u;
            goto label_18eab0;
        }
    }
    ctx->pc = 0x18EA00u;
    // 0x18ea00: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x18ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18ea04: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18EA04u;
    {
        const bool branch_taken_0x18ea04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA04u;
        // 0x18ea08: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea04) {
            ctx->pc = 0x18EA98u;
            goto label_18ea98;
        }
    }
    ctx->pc = 0x18EA0Cu;
    // 0x18ea0c: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18EA0Cu;
    {
        const bool branch_taken_0x18ea0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA0Cu;
        // 0x18ea10: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea0c) {
            ctx->pc = 0x18EA80u;
            goto label_18ea80;
        }
    }
    ctx->pc = 0x18EA14u;
    // 0x18ea14: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18EA14u;
    {
        const bool branch_taken_0x18ea14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA14u;
        // 0x18ea18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea14) {
            ctx->pc = 0x18EA68u;
            goto label_18ea68;
        }
    }
    ctx->pc = 0x18EA1Cu;
    // 0x18ea1c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18EA1Cu;
    {
        const bool branch_taken_0x18ea1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ea1c) {
            ctx->pc = 0x18EA50u;
            goto label_18ea50;
        }
    }
    ctx->pc = 0x18EA24u;
    // 0x18ea24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EA24u;
    {
        const bool branch_taken_0x18ea24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea24) {
            ctx->pc = 0x18EA38u;
            goto label_18ea38;
        }
    }
    ctx->pc = 0x18EA2Cu;
    // 0x18ea2c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18EA2Cu;
    {
        const bool branch_taken_0x18ea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea2c) {
            ctx->pc = 0x18EB20u;
            goto label_18eb20;
        }
    }
    ctx->pc = 0x18EA34u;
    // 0x18ea34: 0x0  nop
    ctx->pc = 0x18ea34u;
    // NOP
label_18ea38:
    // 0x18ea38: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18ea3c: 0xc063aec  jal         func_18EBB0
    ctx->pc = 0x18EA3Cu;
    SET_GPR_U32(ctx, 31, 0x18EA44u);
    ctx->pc = 0x18EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA3Cu;
    // 0x18ea40: 0x248424f0  addiu       $a0, $a0, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EBB0u, 0x18EA3Cu, 0x18EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA44u;
label_18ea44:
    // 0x18ea44: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x18EA44u;
    {
        const bool branch_taken_0x18ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea44) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EA4Cu;
    // 0x18ea4c: 0x0  nop
    ctx->pc = 0x18ea4cu;
    // NOP
label_18ea50:
    // 0x18ea50: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18ea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18ea54: 0xa02324f0  sb          $v1, 0x24F0($at)
    ctx->pc = 0x18ea54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8424F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8424F0u, _value); } while (0);
    // 0x18ea58: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18ea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18ea5c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18EA5Cu;
    {
        const bool branch_taken_0x18ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA5Cu;
        // 0x18ea60: 0xa02024f1  sb          $zero, 0x24F1($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 9457), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea5c) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EA64u;
    // 0x18ea64: 0x0  nop
    ctx->pc = 0x18ea64u;
    // NOP
label_18ea68:
    // 0x18ea68: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18ea6c: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x18EA6Cu;
    SET_GPR_U32(ctx, 31, 0x18EA74u);
    ctx->pc = 0x18EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA6Cu;
    // 0x18ea70: 0x248424f0  addiu       $a0, $a0, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EEF0u, 0x18EA6Cu, 0x18EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA74u;
label_18ea74:
    // 0x18ea74: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18EA74u;
    {
        const bool branch_taken_0x18ea74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea74) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EA7Cu;
    // 0x18ea7c: 0x0  nop
    ctx->pc = 0x18ea7cu;
    // NOP
label_18ea80:
    // 0x18ea80: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18ea84: 0xc063b8c  jal         func_18EE30
    ctx->pc = 0x18EA84u;
    SET_GPR_U32(ctx, 31, 0x18EA8Cu);
    ctx->pc = 0x18EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA84u;
    // 0x18ea88: 0x248424f0  addiu       $a0, $a0, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE30u, 0x18EA84u, 0x18EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA8Cu;
label_18ea8c:
    // 0x18ea8c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x18EA8Cu;
    {
        const bool branch_taken_0x18ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea8c) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EA94u;
    // 0x18ea94: 0x0  nop
    ctx->pc = 0x18ea94u;
    // NOP
label_18ea98:
    // 0x18ea98: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18ea9c: 0xc063c40  jal         func_18F100
    ctx->pc = 0x18EA9Cu;
    SET_GPR_U32(ctx, 31, 0x18EAA4u);
    ctx->pc = 0x18EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA9Cu;
    // 0x18eaa0: 0x248424f0  addiu       $a0, $a0, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F100u, 0x18EA9Cu, 0x18EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAA4u;
label_18eaa4:
    // 0x18eaa4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18EAA4u;
    {
        const bool branch_taken_0x18eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eaa4) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EAACu;
    // 0x18eaac: 0x0  nop
    ctx->pc = 0x18eaacu;
    // NOP
label_18eab0:
    // 0x18eab0: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18eab4: 0xc063c44  jal         func_18F110
    ctx->pc = 0x18EAB4u;
    SET_GPR_U32(ctx, 31, 0x18EABCu);
    ctx->pc = 0x18EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAB4u;
    // 0x18eab8: 0x248424f0  addiu       $a0, $a0, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F110u, 0x18EAB4u, 0x18EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EABCu;
label_18eabc:
    // 0x18eabc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18EABCu;
    {
        const bool branch_taken_0x18eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eabc) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EAC4u;
    // 0x18eac4: 0x0  nop
    ctx->pc = 0x18eac4u;
    // NOP
label_18eac8:
    // 0x18eac8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18eacc: 0xc063c48  jal         func_18F120
    ctx->pc = 0x18EACCu;
    SET_GPR_U32(ctx, 31, 0x18EAD4u);
    ctx->pc = 0x18EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EACCu;
    // 0x18ead0: 0x248424f0  addiu       $a0, $a0, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F120u, 0x18EACCu, 0x18EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAD4u;
label_18ead4:
    // 0x18ead4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18EAD4u;
    {
        const bool branch_taken_0x18ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ead4) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EADCu;
    // 0x18eadc: 0x0  nop
    ctx->pc = 0x18eadcu;
    // NOP
label_18eae0:
    // 0x18eae0: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18eae4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x18eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x18eae8: 0x248424f0  addiu       $a0, $a0, 0x24F0
    ctx->pc = 0x18eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    // 0x18eaec: 0x24a5d780  addiu       $a1, $a1, -0x2880
    ctx->pc = 0x18eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956928));
    // 0x18eaf0: 0xc063c14  jal         func_18F050
    ctx->pc = 0x18EAF0u;
    SET_GPR_U32(ctx, 31, 0x18EAF8u);
    ctx->pc = 0x18EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAF0u;
    // 0x18eaf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F050u, 0x18EAF0u, 0x18EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAF8u;
label_18eaf8:
    // 0x18eaf8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18EAF8u;
    {
        const bool branch_taken_0x18eaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eaf8) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EB00u;
label_18eb00:
    // 0x18eb00: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18eb04: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x18eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x18eb08: 0x248424f0  addiu       $a0, $a0, 0x24F0
    ctx->pc = 0x18eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    // 0x18eb0c: 0x24a5d790  addiu       $a1, $a1, -0x2870
    ctx->pc = 0x18eb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956944));
    // 0x18eb10: 0xc063c14  jal         func_18F050
    ctx->pc = 0x18EB10u;
    SET_GPR_U32(ctx, 31, 0x18EB18u);
    ctx->pc = 0x18EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB10u;
    // 0x18eb14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F050u, 0x18EB10u, 0x18EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB18u;
label_18eb18:
    // 0x18eb18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18EB18u;
    {
        const bool branch_taken_0x18eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb18) {
            ctx->pc = 0x18EB30u;
            goto label_18eb30;
        }
    }
    ctx->pc = 0x18EB20u;
label_18eb20:
    // 0x18eb20: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18eb24: 0xc063b68  jal         func_18EDA0
    ctx->pc = 0x18EB24u;
    SET_GPR_U32(ctx, 31, 0x18EB2Cu);
    ctx->pc = 0x18EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB24u;
    // 0x18eb28: 0x248424f0  addiu       $a0, $a0, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDA0u, 0x18EB24u, 0x18EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB2Cu;
label_18eb2c:
    // 0x18eb2c: 0x0  nop
    ctx->pc = 0x18eb2cu;
    // NOP
label_18eb30:
    // 0x18eb30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18eb34: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x18eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x18eb38: 0xc04c918  jal         func_132460
    ctx->pc = 0x18EB38u;
    SET_GPR_U32(ctx, 31, 0x18EB40u);
    ctx->pc = 0x18EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB38u;
    // 0x18eb3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x18EB38u, 0x18EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB40u;
label_18eb40:
    // 0x18eb40: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x18EB40u;
    {
        const bool branch_taken_0x18eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb40) {
            ctx->pc = 0x18E9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e9d0;
        }
    }
    ctx->pc = 0x18EB48u;
}
