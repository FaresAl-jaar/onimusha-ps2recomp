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

// Function: sub_002C1960
// Address: 0x2c1960 - 0x2c1a94
void sub_002C1960_0x2c1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1960_0x2c1960");
#endif

    switch (ctx->pc) {
        case 0x2c1994u: goto label_2c1994;
        case 0x2c1a4cu: goto label_2c1a4c;
        default: break;
    }

    ctx->pc = 0x2c1960u;

    // 0x2c1960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c196c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c1970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1974: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c1974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c197c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c197cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1980: 0x8ca229c0  lw          $v0, 0x29C0($a1)
    ctx->pc = 0x2c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
    // 0x2c1984: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c1984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1988: 0x94530000  lhu         $s3, 0x0($v0)
    ctx->pc = 0x2c1988u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c198c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2C198Cu;
    SET_GPR_U32(ctx, 31, 0x2C1994u);
    ctx->pc = 0x2C1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C198Cu;
    // 0x2c1990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2C198Cu, 0x2C1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1994u;
label_2c1994:
    // 0x2c1994: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c1994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c1998: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x2c1998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2c199c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2c199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c19a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c19a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c19a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c19ac: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2c19acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c19b0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2c19b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c19b4: 0x9242005c  lbu         $v0, 0x5C($s2)
    ctx->pc = 0x2c19b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2c19b8: 0x0  nop
    ctx->pc = 0x2c19b8u;
    // NOP
    // 0x2c19bc: 0x2012  mflo        $a0
    ctx->pc = 0x2c19bcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2c19c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2c19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c19c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c19c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c19c8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C19C8u;
    {
        const bool branch_taken_0x2c19c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19C8u;
        // 0x2c19cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19c8) {
            ctx->pc = 0x2C19E0u;
            goto label_2c19e0;
        }
    }
    ctx->pc = 0x2C19D0u;
    // 0x2c19d0: 0xa243005c  sb          $v1, 0x5C($s2)
    ctx->pc = 0x2c19d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c19d4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2c19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c19d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C19D8u;
    {
        const bool branch_taken_0x2c19d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19D8u;
        // 0x2c19dc: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19d8) {
            ctx->pc = 0x2C19F0u;
            goto label_2c19f0;
        }
    }
    ctx->pc = 0x2C19E0u;
label_2c19e0:
    // 0x2c19e0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2c19e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2c19e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C19E4u;
    {
        const bool branch_taken_0x2c19e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19E4u;
        // 0x2c19e8: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19e4) {
            ctx->pc = 0x2C19F0u;
            goto label_2c19f0;
        }
    }
    ctx->pc = 0x2C19ECu;
    // 0x2c19ec: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x2c19ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2c19f0:
    // 0x2c19f0: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C19F0u;
    {
        const bool branch_taken_0x2c19f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c19f0) {
            ctx->pc = 0x2C1A70u;
            goto label_2c1a70;
        }
    }
    ctx->pc = 0x2C19F8u;
    // 0x2c19f8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c19f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c19fc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C19FCu;
    {
        const bool branch_taken_0x2c19fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c19fc) {
            ctx->pc = 0x2C1A58u;
            goto label_2c1a58;
        }
    }
    ctx->pc = 0x2C1A04u;
    // 0x2c1a04: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C1A04u;
    {
        const bool branch_taken_0x2c1a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A04u;
        // 0x2c1a08: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a04) {
            ctx->pc = 0x2C1A40u;
            goto label_2c1a40;
        }
    }
    ctx->pc = 0x2C1A0Cu;
    // 0x2c1a0c: 0x92440037  lbu         $a0, 0x37($s2)
    ctx->pc = 0x2c1a0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c1a10: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c1a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c1a14: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1a18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1a1c: 0xa244004e  sb          $a0, 0x4E($s2)
    ctx->pc = 0x2c1a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1a20: 0xa2450037  sb          $a1, 0x37($s2)
    ctx->pc = 0x2c1a20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1a24: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c1a24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1a28: 0xa243005f  sb          $v1, 0x5F($s2)
    ctx->pc = 0x2c1a28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1a2c: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c1a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1a30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c1a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1a38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C1A38u;
    {
        const bool branch_taken_0x2c1a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A38u;
        // 0x2c1a3c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a38) {
            ctx->pc = 0x2C1A68u;
            goto label_2c1a68;
        }
    }
    ctx->pc = 0x2C1A40u;
label_2c1a40:
    // 0x2c1a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a44: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1A44u;
    SET_GPR_U32(ctx, 31, 0x2C1A4Cu);
    ctx->pc = 0x2C1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A44u;
    // 0x2c1a48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1A44u, 0x2C1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A4Cu;
label_2c1a4c:
    // 0x2c1a4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1A4Cu;
    {
        const bool branch_taken_0x2c1a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a4c) {
            ctx->pc = 0x2C1A60u;
            goto label_2c1a60;
        }
    }
    ctx->pc = 0x2C1A54u;
    // 0x2c1a54: 0x0  nop
    ctx->pc = 0x2c1a54u;
    // NOP
label_2c1a58:
    // 0x2c1a58: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c1a58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1a5c: 0x0  nop
    ctx->pc = 0x2c1a5cu;
    // NOP
label_2c1a60:
    // 0x2c1a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a64: 0x0  nop
    ctx->pc = 0x2c1a64u;
    // NOP
label_2c1a68:
    // 0x2c1a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1A68u;
    {
        const bool branch_taken_0x2c1a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a68) {
            ctx->pc = 0x2C1A78u;
            goto label_2c1a78;
        }
    }
    ctx->pc = 0x2C1A70u;
label_2c1a70:
    // 0x2c1a70: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x2c1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c1a74: 0x0  nop
    ctx->pc = 0x2c1a74u;
    // NOP
label_2c1a78:
    // 0x2c1a78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1a7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A8Cu;
        // 0x2c1a90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1A94u;
}
