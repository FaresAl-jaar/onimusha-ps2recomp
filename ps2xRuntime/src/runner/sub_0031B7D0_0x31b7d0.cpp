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

// Function: sub_0031B7D0
// Address: 0x31b7d0 - 0x31b918
void sub_0031B7D0_0x31b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B7D0_0x31b7d0");
#endif

    switch (ctx->pc) {
        case 0x31b868u: goto label_31b868;
        case 0x31b888u: goto label_31b888;
        case 0x31b894u: goto label_31b894;
        case 0x31b8a4u: goto label_31b8a4;
        case 0x31b8acu: goto label_31b8ac;
        case 0x31b8b4u: goto label_31b8b4;
        case 0x31b8c8u: goto label_31b8c8;
        case 0x31b8d8u: goto label_31b8d8;
        case 0x31b8e0u: goto label_31b8e0;
        case 0x31b900u: goto label_31b900;
        default: break;
    }

    ctx->pc = 0x31b7d0u;

    // 0x31b7d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31b7d4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x31b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31b7d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31b7dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31b7e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b7e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31b7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b7ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31b7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31b7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b7f4: 0x1623000c  bne         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31B7F4u;
    {
        const bool branch_taken_0x31b7f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x31B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F4u;
        // 0x31b7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7f4) {
            ctx->pc = 0x31B828u;
            goto label_31b828;
        }
    }
    ctx->pc = 0x31B7FCu;
    // 0x31b7fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31b7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31b800: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x31b800u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x31b804: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x31b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x31b808: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31B808u;
    {
        const bool branch_taken_0x31b808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B808u;
        // 0x31b80c: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b808) {
            ctx->pc = 0x31B840u;
            goto label_31b840;
        }
    }
    ctx->pc = 0x31B810u;
    // 0x31b810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31b810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31b814: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31b814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31b818: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x31b818u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x31b81c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31B81Cu;
    {
        const bool branch_taken_0x31b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B81Cu;
        // 0x31b820: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b81c) {
            ctx->pc = 0x31B840u;
            goto label_31b840;
        }
    }
    ctx->pc = 0x31B824u;
    // 0x31b824: 0x0  nop
    ctx->pc = 0x31b824u;
    // NOP
label_31b828:
    // 0x31b828: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31b828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31b82c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x31b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x31b830: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x31b830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x31b834: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31B834u;
    {
        const bool branch_taken_0x31b834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b834) {
            ctx->pc = 0x31B840u;
            goto label_31b840;
        }
    }
    ctx->pc = 0x31B83Cu;
    // 0x31b83c: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x31b83cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31b840:
    // 0x31b840: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x31B840u;
    {
        const bool branch_taken_0x31b840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B840u;
        // 0x31b844: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b840) {
            ctx->pc = 0x31B900u;
            goto label_31b900;
        }
    }
    ctx->pc = 0x31B848u;
    // 0x31b848: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b84c: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x31b84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967018)));
    // 0x31b850: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31b850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31b854: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31b854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31b858: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x31b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x31b85c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x31b85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x31b860: 0xc04c918  jal         func_132460
    ctx->pc = 0x31B860u;
    SET_GPR_U32(ctx, 31, 0x31B868u);
    ctx->pc = 0x31B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B860u;
    // 0x31b864: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31B860u, 0x31B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B868u;
label_31b868:
    // 0x31b868: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x31b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31b86c: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31B86Cu;
    {
        const bool branch_taken_0x31b86c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x31B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B86Cu;
        // 0x31b870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b86c) {
            ctx->pc = 0x31B878u;
            goto label_31b878;
        }
    }
    ctx->pc = 0x31B874u;
    // 0x31b874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31b874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b878:
    // 0x31b878: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b87c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x31b87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b880: 0xc05e57c  jal         func_1795F0
    ctx->pc = 0x31B880u;
    SET_GPR_U32(ctx, 31, 0x31B888u);
    ctx->pc = 0x31B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B880u;
    // 0x31b884: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1795F0u, 0x31B880u, 0x31B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B888u;
label_31b888:
    // 0x31b888: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b88c: 0xc05e454  jal         func_179150
    ctx->pc = 0x31B88Cu;
    SET_GPR_U32(ctx, 31, 0x31B894u);
    ctx->pc = 0x31B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B88Cu;
    // 0x31b890: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179150u, 0x31B88Cu, 0x31B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B894u;
label_31b894:
    // 0x31b894: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b898: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x31b898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31b89c: 0xc04c918  jal         func_132460
    ctx->pc = 0x31B89Cu;
    SET_GPR_U32(ctx, 31, 0x31B8A4u);
    ctx->pc = 0x31B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B89Cu;
    // 0x31b8a0: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31B89Cu, 0x31B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8A4u;
label_31b8a4:
    // 0x31b8a4: 0xc095040  jal         func_254100
    ctx->pc = 0x31B8A4u;
    SET_GPR_U32(ctx, 31, 0x31B8ACu);
    ctx->pc = 0x31B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8A4u;
    // 0x31b8a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x31B8A4u, 0x31B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8ACu;
label_31b8ac:
    // 0x31b8ac: 0xc095040  jal         func_254100
    ctx->pc = 0x31B8ACu;
    SET_GPR_U32(ctx, 31, 0x31B8B4u);
    ctx->pc = 0x31B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8ACu;
    // 0x31b8b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x31B8ACu, 0x31B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8B4u;
label_31b8b4:
    // 0x31b8b4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x31b8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31b8b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x31b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x31b8bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31B8BCu;
    {
        const bool branch_taken_0x31b8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b8bc) {
            ctx->pc = 0x31B8F0u;
            goto label_31b8f0;
        }
    }
    ctx->pc = 0x31B8C4u;
    // 0x31b8c4: 0x0  nop
    ctx->pc = 0x31b8c4u;
    // NOP
label_31b8c8:
    // 0x31b8c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b8cc: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31b8d0: 0xc04c918  jal         func_132460
    ctx->pc = 0x31B8D0u;
    SET_GPR_U32(ctx, 31, 0x31B8D8u);
    ctx->pc = 0x31B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8D0u;
    // 0x31b8d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31B8D0u, 0x31B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8D8u;
label_31b8d8:
    // 0x31b8d8: 0xc095040  jal         func_254100
    ctx->pc = 0x31B8D8u;
    SET_GPR_U32(ctx, 31, 0x31B8E0u);
    ctx->pc = 0x31B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8D8u;
    // 0x31b8dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x31B8D8u, 0x31B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B8E0u;
label_31b8e0:
    // 0x31b8e0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x31b8e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31b8e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x31b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x31b8e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31B8E8u;
    {
        const bool branch_taken_0x31b8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b8e8) {
            ctx->pc = 0x31B8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b8c8;
        }
    }
    ctx->pc = 0x31B8F0u;
label_31b8f0:
    // 0x31b8f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B8F0u;
    {
        const bool branch_taken_0x31b8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8F0u;
        // 0x31b8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8f0) {
            ctx->pc = 0x31B900u;
            goto label_31b900;
        }
    }
    ctx->pc = 0x31B8F8u;
    // 0x31b8f8: 0xc0c6e60  jal         func_31B980
    ctx->pc = 0x31B8F8u;
    SET_GPR_U32(ctx, 31, 0x31B900u);
    ctx->pc = 0x31B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8F8u;
    // 0x31b8fc: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B980u, 0x31B8F8u, 0x31B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B900u;
label_31b900:
    // 0x31b900: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31b900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31b904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b910: 0x3e00008  jr          $ra
    ctx->pc = 0x31B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B910u;
        // 0x31b914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B918u;
}
