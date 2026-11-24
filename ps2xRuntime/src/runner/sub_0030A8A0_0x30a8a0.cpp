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

// Function: sub_0030A8A0
// Address: 0x30a8a0 - 0x30a918
void sub_0030A8A0_0x30a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A8A0_0x30a8a0");
#endif

    switch (ctx->pc) {
        case 0x30a8c0u: goto label_30a8c0;
        default: break;
    }

    ctx->pc = 0x30a8a0u;

    // 0x30a8a0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x30a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a8a4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x30a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x30a8a8: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x30a8a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30a8ac: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x30A8ACu;
    {
        const bool branch_taken_0x30a8ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8ACu;
        // 0x30a8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8ac) {
            ctx->pc = 0x30A8E0u;
            goto label_30a8e0;
        }
    }
    ctx->pc = 0x30A8B4u;
    // 0x30a8b4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x30a8b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8b8: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x30a8b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x30a8bc: 0x0  nop
    ctx->pc = 0x30a8bcu;
    // NOP
label_30a8c0:
    // 0x30a8c0: 0x8d0a0010  lw          $t2, 0x10($t0)
    ctx->pc = 0x30a8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x30a8c4: 0x85430018  lh          $v1, 0x18($t2)
    ctx->pc = 0x30a8c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x30a8c8: 0x10670005  beq         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A8C8u;
    {
        const bool branch_taken_0x30a8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x30a8c8) {
            ctx->pc = 0x30A8E0u;
            goto label_30a8e0;
        }
    }
    ctx->pc = 0x30A8D0u;
    // 0x30a8d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30a8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30a8d4: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x30a8d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30a8d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30A8D8u;
    {
        const bool branch_taken_0x30a8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8D8u;
        // 0x30a8dc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8d8) {
            ctx->pc = 0x30A8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a8c0;
        }
    }
    ctx->pc = 0x30A8E0u;
label_30a8e0:
    // 0x30a8e0: 0x15240003  bne         $t1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A8E0u;
    {
        const bool branch_taken_0x30a8e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        if (branch_taken_0x30a8e0) {
            ctx->pc = 0x30A8F0u;
            goto label_30a8f0;
        }
    }
    ctx->pc = 0x30A8E8u;
    // 0x30a8e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30a8e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8ec: 0x0  nop
    ctx->pc = 0x30a8ecu;
    // NOP
label_30a8f0:
    // 0x30a8f0: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A8F0u;
    {
        const bool branch_taken_0x30a8f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8F0u;
        // 0x30a8f4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8f0) {
            ctx->pc = 0x30A910u;
            goto label_30a910;
        }
    }
    ctx->pc = 0x30A8F8u;
    // 0x30a8f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a8fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30a900: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x30a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30a904: 0x84630018  lh          $v1, 0x18($v1)
    ctx->pc = 0x30a904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x30a908: 0xa5430018  sh          $v1, 0x18($t2)
    ctx->pc = 0x30a908u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a90c: 0x0  nop
    ctx->pc = 0x30a90cu;
    // NOP
label_30a910:
    // 0x30a910: 0x3e00008  jr          $ra
    ctx->pc = 0x30A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A918u;
}
