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

// Function: sub_00288960
// Address: 0x288960 - 0x288a9c
void sub_00288960_0x288960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288960_0x288960");
#endif

    switch (ctx->pc) {
        case 0x288990u: goto label_288990;
        case 0x28899cu: goto label_28899c;
        case 0x2889acu: goto label_2889ac;
        case 0x2889c4u: goto label_2889c4;
        case 0x2889e0u: goto label_2889e0;
        case 0x2889f4u: goto label_2889f4;
        case 0x288a28u: goto label_288a28;
        case 0x288a54u: goto label_288a54;
        case 0x288a7cu: goto label_288a7c;
        default: break;
    }

    ctx->pc = 0x288960u;

    // 0x288960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x288960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x288964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x288964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x288968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x288968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28896c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x288970: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x288970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288978: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x288978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28897c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x288980: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x288980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288988: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x288988u;
    SET_GPR_U32(ctx, 31, 0x288990u);
    ctx->pc = 0x28898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288988u;
    // 0x28898c: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x288988u, 0x288990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288990u;
label_288990:
    // 0x288990: 0x8e650190  lw          $a1, 0x190($s3)
    ctx->pc = 0x288990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x288994: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x288994u;
    SET_GPR_U32(ctx, 31, 0x28899Cu);
    ctx->pc = 0x288998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288994u;
    // 0x288998: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x288994u, 0x28899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28899Cu;
label_28899c:
    // 0x28899c: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x28899cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2889a0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2889a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2889a4: 0xc09d524  jal         func_275490
    ctx->pc = 0x2889A4u;
    SET_GPR_U32(ctx, 31, 0x2889ACu);
    ctx->pc = 0x2889A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889A4u;
    // 0x2889a8: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2889A4u, 0x2889ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889ACu;
label_2889ac:
    // 0x2889ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2889acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889b0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2889B0u;
    {
        const bool branch_taken_0x2889b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2889B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889B0u;
        // 0x2889b4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889b0) {
            ctx->pc = 0x2889D0u;
            goto label_2889d0;
        }
    }
    ctx->pc = 0x2889B8u;
    // 0x2889b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2889b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2889bc: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2889BCu;
    SET_GPR_U32(ctx, 31, 0x2889C4u);
    ctx->pc = 0x2889C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889BCu;
    // 0x2889c0: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2889BCu, 0x2889C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889C4u;
label_2889c4:
    // 0x2889c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2889C4u;
    {
        const bool branch_taken_0x2889c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889c4) {
            ctx->pc = 0x288A80u;
            goto label_288a80;
        }
    }
    ctx->pc = 0x2889CCu;
    // 0x2889cc: 0x0  nop
    ctx->pc = 0x2889ccu;
    // NOP
label_2889d0:
    // 0x2889d0: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x2889d0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2889d4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2889d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2889d8: 0xc09d524  jal         func_275490
    ctx->pc = 0x2889D8u;
    SET_GPR_U32(ctx, 31, 0x2889E0u);
    ctx->pc = 0x2889DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889D8u;
    // 0x2889dc: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2889D8u, 0x2889E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889E0u;
label_2889e0:
    // 0x2889e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2889E0u;
    {
        const bool branch_taken_0x2889e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2889E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889E0u;
        // 0x2889e4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889e0) {
            ctx->pc = 0x288A00u;
            goto label_288a00;
        }
    }
    ctx->pc = 0x2889E8u;
    // 0x2889e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2889e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2889ec: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2889ECu;
    SET_GPR_U32(ctx, 31, 0x2889F4u);
    ctx->pc = 0x2889F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889ECu;
    // 0x2889f0: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2889ECu, 0x2889F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2889F4u;
label_2889f4:
    // 0x2889f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2889F4u;
    {
        const bool branch_taken_0x2889f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889f4) {
            ctx->pc = 0x288A80u;
            goto label_288a80;
        }
    }
    ctx->pc = 0x2889FCu;
    // 0x2889fc: 0x0  nop
    ctx->pc = 0x2889fcu;
    // NOP
label_288a00:
    // 0x288a00: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x288a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x288a04: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x288a04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x288a08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x288A08u;
    {
        const bool branch_taken_0x288a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x288a08) {
            ctx->pc = 0x288A18u;
            goto label_288a18;
        }
    }
    ctx->pc = 0x288A10u;
    // 0x288a10: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x288A10u;
    {
        const bool branch_taken_0x288a10 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x288a10) {
            ctx->pc = 0x288A30u;
            goto label_288a30;
        }
    }
    ctx->pc = 0x288A18u;
label_288a18:
    // 0x288a18: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x288a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x288a1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x288a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288a20: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288A20u;
    SET_GPR_U32(ctx, 31, 0x288A28u);
    ctx->pc = 0x288A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A20u;
    // 0x288a24: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288A20u, 0x288A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A28u;
label_288a28:
    // 0x288a28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x288A28u;
    {
        const bool branch_taken_0x288a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288a28) {
            ctx->pc = 0x288A80u;
            goto label_288a80;
        }
    }
    ctx->pc = 0x288A30u;
label_288a30:
    // 0x288a30: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x288a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x288a34: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x288a34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288a38: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x288a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288a3c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x288A3Cu;
    {
        const bool branch_taken_0x288a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x288a3c) {
            ctx->pc = 0x288A60u;
            goto label_288a60;
        }
    }
    ctx->pc = 0x288A44u;
    // 0x288a44: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x288a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x288a48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x288a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288a4c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288A4Cu;
    SET_GPR_U32(ctx, 31, 0x288A54u);
    ctx->pc = 0x288A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A4Cu;
    // 0x288a50: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288A4Cu, 0x288A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A54u;
label_288a54:
    // 0x288a54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x288A54u;
    {
        const bool branch_taken_0x288a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288a54) {
            ctx->pc = 0x288A80u;
            goto label_288a80;
        }
    }
    ctx->pc = 0x288A5Cu;
    // 0x288a5c: 0x0  nop
    ctx->pc = 0x288a5cu;
    // NOP
label_288a60:
    // 0x288a60: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x288a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x288a64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x288a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288a68: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x288a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x288a6c: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x288a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x288a70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x288a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288a74: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288A74u;
    SET_GPR_U32(ctx, 31, 0x288A7Cu);
    ctx->pc = 0x288A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A74u;
    // 0x288a78: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288A74u, 0x288A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A7Cu;
label_288a7c:
    // 0x288a7c: 0x0  nop
    ctx->pc = 0x288a7cu;
    // NOP
label_288a80:
    // 0x288a80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x288a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288a84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x288a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x288a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288a94: 0x3e00008  jr          $ra
    ctx->pc = 0x288A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A94u;
        // 0x288a98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288A9Cu;
}
