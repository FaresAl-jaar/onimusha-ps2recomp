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

// Function: sub_002C48F0
// Address: 0x2c48f0 - 0x2c49d8
void sub_002C48F0_0x2c48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C48F0_0x2c48f0");
#endif

    switch (ctx->pc) {
        case 0x2c4918u: goto label_2c4918;
        case 0x2c4994u: goto label_2c4994;
        default: break;
    }

    ctx->pc = 0x2c48f0u;

    // 0x2c48f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c48f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c48f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c48f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c48fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4900: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c4900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4904: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c4908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c490c: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x2c490cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c4910: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C4910u;
    SET_GPR_U32(ctx, 31, 0x2C4918u);
    ctx->pc = 0x2C4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4910u;
    // 0x2c4914: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C4910u, 0x2C4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4918u;
label_2c4918:
    // 0x2c4918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4918u;
    {
        const bool branch_taken_0x2c4918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4918u;
        // 0x2c491c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4918) {
            ctx->pc = 0x2C4930u;
            goto label_2c4930;
        }
    }
    ctx->pc = 0x2C4920u;
    // 0x2c4920: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2c4920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c4924: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2c4924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c4928: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2c4928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2c492c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2c492cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c4930:
    // 0x2c4930: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2c4930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2c4934: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2c4934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2c4938: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4938u;
    {
        const bool branch_taken_0x2c4938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4938) {
            ctx->pc = 0x2C49B8u;
            goto label_2c49b8;
        }
    }
    ctx->pc = 0x2C4940u;
    // 0x2c4940: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c4940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c4944: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4944u;
    {
        const bool branch_taken_0x2c4944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4944u;
        // 0x2c4948: 0x92050003  lbu         $a1, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4944) {
            ctx->pc = 0x2C49A0u;
            goto label_2c49a0;
        }
    }
    ctx->pc = 0x2C494Cu;
    // 0x2c494c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C494Cu;
    {
        const bool branch_taken_0x2c494c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C494Cu;
        // 0x2c4950: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c494c) {
            ctx->pc = 0x2C4988u;
            goto label_2c4988;
        }
    }
    ctx->pc = 0x2C4954u;
    // 0x2c4954: 0x92440037  lbu         $a0, 0x37($s2)
    ctx->pc = 0x2c4954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c4958: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c4958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c495c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4964: 0xa244004e  sb          $a0, 0x4E($s2)
    ctx->pc = 0x2c4964u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4968: 0xa2450037  sb          $a1, 0x37($s2)
    ctx->pc = 0x2c4968u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c496c: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c496cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4970: 0xa243005f  sb          $v1, 0x5F($s2)
    ctx->pc = 0x2c4970u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4974: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c4974u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4978: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c497c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4980: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C4980u;
    {
        const bool branch_taken_0x2c4980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4980u;
        // 0x2c4984: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4980) {
            ctx->pc = 0x2C49B0u;
            goto label_2c49b0;
        }
    }
    ctx->pc = 0x2C4988u;
label_2c4988:
    // 0x2c4988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c4988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c498c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C498Cu;
    SET_GPR_U32(ctx, 31, 0x2C4994u);
    ctx->pc = 0x2C4990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C498Cu;
    // 0x2c4990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C498Cu, 0x2C4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4994u;
label_2c4994:
    // 0x2c4994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4994u;
    {
        const bool branch_taken_0x2c4994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4994) {
            ctx->pc = 0x2C49A8u;
            goto label_2c49a8;
        }
    }
    ctx->pc = 0x2C499Cu;
    // 0x2c499c: 0x0  nop
    ctx->pc = 0x2c499cu;
    // NOP
label_2c49a0:
    // 0x2c49a0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c49a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c49a4: 0x0  nop
    ctx->pc = 0x2c49a4u;
    // NOP
label_2c49a8:
    // 0x2c49a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c49a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c49ac: 0x0  nop
    ctx->pc = 0x2c49acu;
    // NOP
label_2c49b0:
    // 0x2c49b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C49B0u;
    {
        const bool branch_taken_0x2c49b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49b0) {
            ctx->pc = 0x2C49C0u;
            goto label_2c49c0;
        }
    }
    ctx->pc = 0x2C49B8u;
label_2c49b8:
    // 0x2c49b8: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2c49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c49bc: 0x0  nop
    ctx->pc = 0x2c49bcu;
    // NOP
label_2c49c0:
    // 0x2c49c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c49c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c49c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c49c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c49c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c49c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c49cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c49ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c49d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C49D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C49D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49D0u;
        // 0x2c49d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C49D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C49D8u;
}
