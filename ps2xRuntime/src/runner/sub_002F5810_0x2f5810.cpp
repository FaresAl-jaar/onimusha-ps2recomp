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

// Function: sub_002F5810
// Address: 0x2f5810 - 0x2f5910
void sub_002F5810_0x2f5810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5810_0x2f5810");
#endif

    ctx->pc = 0x2f5810u;

    // 0x2f5810: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2f5810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2f5814: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x2f5814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2f5818: 0x28620ff0  slti        $v0, $v1, 0xFF0
    ctx->pc = 0x2f5818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x2f581c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F581Cu;
    {
        const bool branch_taken_0x2f581c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F581Cu;
        // 0x2f5820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f581c) {
            ctx->pc = 0x2F5830u;
            goto label_2f5830;
        }
    }
    ctx->pc = 0x2F5824u;
    // 0x2f5824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F5824u;
    {
        const bool branch_taken_0x2f5824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5824) {
            ctx->pc = 0x2F5850u;
            goto label_2f5850;
        }
    }
    ctx->pc = 0x2F582Cu;
    // 0x2f582c: 0x0  nop
    ctx->pc = 0x2f582cu;
    // NOP
label_2f5830:
    // 0x2f5830: 0x24020ed0  addiu       $v0, $zero, 0xED0
    ctx->pc = 0x2f5830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3792));
    // 0x2f5834: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5834u;
    {
        const bool branch_taken_0x2f5834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5834u;
        // 0x2f5838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5834) {
            ctx->pc = 0x2F5848u;
            goto label_2f5848;
        }
    }
    ctx->pc = 0x2F583Cu;
    // 0x2f583c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F583Cu;
    {
        const bool branch_taken_0x2f583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f583c) {
            ctx->pc = 0x2F5850u;
            goto label_2f5850;
        }
    }
    ctx->pc = 0x2F5844u;
    // 0x2f5844: 0x0  nop
    ctx->pc = 0x2f5844u;
    // NOP
label_2f5848:
    // 0x2f5848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f584c: 0x0  nop
    ctx->pc = 0x2f584cu;
    // NOP
label_2f5850:
    // 0x2f5850: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F5850u;
    {
        const bool branch_taken_0x2f5850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5850u;
        // 0x2f5854: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5850) {
            ctx->pc = 0x2F58A0u;
            goto label_2f58a0;
        }
    }
    ctx->pc = 0x2F5858u;
    // 0x2f5858: 0x94236ace  lhu         $v1, 0x6ACE($at)
    ctx->pc = 0x2f5858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27342)));
    // 0x2f585c: 0x28620ff0  slti        $v0, $v1, 0xFF0
    ctx->pc = 0x2f585cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x2f5860: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5860u;
    {
        const bool branch_taken_0x2f5860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5860u;
        // 0x2f5864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5860) {
            ctx->pc = 0x2F5870u;
            goto label_2f5870;
        }
    }
    ctx->pc = 0x2F5868u;
    // 0x2f5868: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5868u;
    {
        const bool branch_taken_0x2f5868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5868) {
            ctx->pc = 0x2F5890u;
            goto label_2f5890;
        }
    }
    ctx->pc = 0x2F5870u;
label_2f5870:
    // 0x2f5870: 0x24020ed0  addiu       $v0, $zero, 0xED0
    ctx->pc = 0x2f5870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3792));
    // 0x2f5874: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5874u;
    {
        const bool branch_taken_0x2f5874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5874u;
        // 0x2f5878: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5874) {
            ctx->pc = 0x2F5888u;
            goto label_2f5888;
        }
    }
    ctx->pc = 0x2F587Cu;
    // 0x2f587c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F587Cu;
    {
        const bool branch_taken_0x2f587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f587c) {
            ctx->pc = 0x2F5890u;
            goto label_2f5890;
        }
    }
    ctx->pc = 0x2F5884u;
    // 0x2f5884: 0x0  nop
    ctx->pc = 0x2f5884u;
    // NOP
label_2f5888:
    // 0x2f5888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f588c: 0x0  nop
    ctx->pc = 0x2f588cu;
    // NOP
label_2f5890:
    // 0x2f5890: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f5890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5894: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f5894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f5898: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F5898u;
    {
        const bool branch_taken_0x2f5898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5898u;
        // 0x2f589c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5898) {
            ctx->pc = 0x2F5908u;
            goto label_2f5908;
        }
    }
    ctx->pc = 0x2F58A0u;
label_2f58a0:
    // 0x2f58a0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2f58a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2f58a4: 0x94236ace  lhu         $v1, 0x6ACE($at)
    ctx->pc = 0x2f58a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6ACEu));
    // 0x2f58a8: 0x28620ff0  slti        $v0, $v1, 0xFF0
    ctx->pc = 0x2f58a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x2f58ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F58ACu;
    {
        const bool branch_taken_0x2f58ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58ACu;
        // 0x2f58b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58ac) {
            ctx->pc = 0x2F58C0u;
            goto label_2f58c0;
        }
    }
    ctx->pc = 0x2F58B4u;
    // 0x2f58b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F58B4u;
    {
        const bool branch_taken_0x2f58b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f58b4) {
            ctx->pc = 0x2F58E0u;
            goto label_2f58e0;
        }
    }
    ctx->pc = 0x2F58BCu;
    // 0x2f58bc: 0x0  nop
    ctx->pc = 0x2f58bcu;
    // NOP
label_2f58c0:
    // 0x2f58c0: 0x24020ed0  addiu       $v0, $zero, 0xED0
    ctx->pc = 0x2f58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3792));
    // 0x2f58c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F58C4u;
    {
        const bool branch_taken_0x2f58c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58C4u;
        // 0x2f58c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58c4) {
            ctx->pc = 0x2F58D8u;
            goto label_2f58d8;
        }
    }
    ctx->pc = 0x2F58CCu;
    // 0x2f58cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F58CCu;
    {
        const bool branch_taken_0x2f58cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f58cc) {
            ctx->pc = 0x2F58E0u;
            goto label_2f58e0;
        }
    }
    ctx->pc = 0x2F58D4u;
    // 0x2f58d4: 0x0  nop
    ctx->pc = 0x2f58d4u;
    // NOP
label_2f58d8:
    // 0x2f58d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f58d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58dc: 0x0  nop
    ctx->pc = 0x2f58dcu;
    // NOP
label_2f58e0:
    // 0x2f58e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F58E0u;
    {
        const bool branch_taken_0x2f58e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f58e0) {
            ctx->pc = 0x2F58F0u;
            goto label_2f58f0;
        }
    }
    ctx->pc = 0x2F58E8u;
    // 0x2f58e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F58E8u;
    {
        const bool branch_taken_0x2f58e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58E8u;
        // 0x2f58ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58e8) {
            ctx->pc = 0x2F5908u;
            goto label_2f5908;
        }
    }
    ctx->pc = 0x2F58F0u;
label_2f58f0:
    // 0x2f58f0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f58f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f58f4: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x2f58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x810FE0u));
    // 0x2f58f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f58fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f58fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5900: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f5900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f5904: 0x0  nop
    ctx->pc = 0x2f5904u;
    // NOP
label_2f5908:
    // 0x2f5908: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5910u;
}
