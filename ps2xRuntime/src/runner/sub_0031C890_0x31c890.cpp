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

// Function: sub_0031C890
// Address: 0x31c890 - 0x31c950
void sub_0031C890_0x31c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C890_0x31c890");
#endif

    ctx->pc = 0x31c890u;

    // 0x31c890: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x31c890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31c894: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c898: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C898u;
    {
        const bool branch_taken_0x31c898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C898u;
        // 0x31c89c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c898) {
            ctx->pc = 0x31C8A8u;
            goto label_31c8a8;
        }
    }
    ctx->pc = 0x31C8A0u;
    // 0x31c8a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31C8A0u;
    {
        const bool branch_taken_0x31c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8A0u;
        // 0x31c8a4: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8a0) {
            ctx->pc = 0x31C8D0u;
            goto label_31c8d0;
        }
    }
    ctx->pc = 0x31C8A8u;
label_31c8a8:
    // 0x31c8a8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x31c8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x31c8ac: 0x94226ac4  lhu         $v0, 0x6AC4($at)
    ctx->pc = 0x31c8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x31c8b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8B0u;
    {
        const bool branch_taken_0x31c8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8B0u;
        // 0x31c8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8b0) {
            ctx->pc = 0x31C8C0u;
            goto label_31c8c0;
        }
    }
    ctx->pc = 0x31C8B8u;
    // 0x31c8b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8B8u;
    {
        const bool branch_taken_0x31c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c8b8) {
            ctx->pc = 0x31C8C8u;
            goto label_31c8c8;
        }
    }
    ctx->pc = 0x31C8C0u;
label_31c8c0:
    // 0x31c8c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31c8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c8c4: 0x0  nop
    ctx->pc = 0x31c8c4u;
    // NOP
label_31c8c8:
    // 0x31c8c8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31c8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31c8cc: 0x0  nop
    ctx->pc = 0x31c8ccu;
    // NOP
label_31c8d0:
    // 0x31c8d0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x31c8d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31c8d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31c8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c8d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8D8u;
    {
        const bool branch_taken_0x31c8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31c8d8) {
            ctx->pc = 0x31C8E8u;
            goto label_31c8e8;
        }
    }
    ctx->pc = 0x31C8E0u;
    // 0x31c8e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31C8E0u;
    {
        const bool branch_taken_0x31c8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8E0u;
        // 0x31c8e4: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8e0) {
            ctx->pc = 0x31C910u;
            goto label_31c910;
        }
    }
    ctx->pc = 0x31C8E8u;
label_31c8e8:
    // 0x31c8e8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x31c8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x31c8ec: 0x90226ac8  lbu         $v0, 0x6AC8($at)
    ctx->pc = 0x31c8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x31c8f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8F0u;
    {
        const bool branch_taken_0x31c8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8F0u;
        // 0x31c8f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8f0) {
            ctx->pc = 0x31C900u;
            goto label_31c900;
        }
    }
    ctx->pc = 0x31C8F8u;
    // 0x31c8f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8F8u;
    {
        const bool branch_taken_0x31c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c8f8) {
            ctx->pc = 0x31C908u;
            goto label_31c908;
        }
    }
    ctx->pc = 0x31C900u;
label_31c900:
    // 0x31c900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31c900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c904: 0x0  nop
    ctx->pc = 0x31c904u;
    // NOP
label_31c908:
    // 0x31c908: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31c908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31c90c: 0x0  nop
    ctx->pc = 0x31c90cu;
    // NOP
label_31c910:
    // 0x31c910: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x31c910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x31c914: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C914u;
    {
        const bool branch_taken_0x31c914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C914u;
        // 0x31c918: 0x38820003  xori        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c914) {
            ctx->pc = 0x31C928u;
            goto label_31c928;
        }
    }
    ctx->pc = 0x31C91Cu;
    // 0x31c91c: 0x38820003  xori        $v0, $a0, 0x3
    ctx->pc = 0x31c91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x31c920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C920u;
    {
        const bool branch_taken_0x31c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C920u;
        // 0x31c924: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c920) {
            ctx->pc = 0x31C92Cu;
            goto label_31c92c;
        }
    }
    ctx->pc = 0x31C928u;
label_31c928:
    // 0x31c928: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31c928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_31c92c:
    // 0x31c92c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C92Cu;
    {
        const bool branch_taken_0x31c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c92c) {
            ctx->pc = 0x31C944u;
            goto label_31c944;
        }
    }
    ctx->pc = 0x31C934u;
    // 0x31c934: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x31c934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x31c938: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31c938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31c93c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C93Cu;
    {
        const bool branch_taken_0x31c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C93Cu;
        // 0x31c940: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c93c) {
            ctx->pc = 0x31C948u;
            goto label_31c948;
        }
    }
    ctx->pc = 0x31C944u;
label_31c944:
    // 0x31c944: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x31c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_31c948:
    // 0x31c948: 0x3e00008  jr          $ra
    ctx->pc = 0x31C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C950u;
}
