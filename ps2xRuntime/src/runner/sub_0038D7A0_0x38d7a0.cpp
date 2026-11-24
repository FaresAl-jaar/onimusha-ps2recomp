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

// Function: sub_0038D7A0
// Address: 0x38d7a0 - 0x38d820
void sub_0038D7A0_0x38d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D7A0_0x38d7a0");
#endif

    switch (ctx->pc) {
        case 0x38d7c0u: goto label_38d7c0;
        default: break;
    }

    ctx->pc = 0x38d7a0u;

    // 0x38d7a0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x38d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x38d7a4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x38d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d7a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x38d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38d7ac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x38d7acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38d7b0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x38D7B0u;
    {
        const bool branch_taken_0x38d7b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7B0u;
        // 0x38d7b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d7b0) {
            ctx->pc = 0x38D818u;
            goto label_38d818;
        }
    }
    ctx->pc = 0x38D7B8u;
    // 0x38d7b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38d7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d7bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38d7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d7c0:
    // 0x38d7c0: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x38d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x38d7c4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x38d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x38d7c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38d7cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x38d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x38d7d0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x38d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x38d7d4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x38d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x38d7d8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x38d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x38d7dc: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x38d7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x38d7e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38D7E0u;
    {
        const bool branch_taken_0x38d7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d7e0) {
            ctx->pc = 0x38D7F8u;
            goto label_38d7f8;
        }
    }
    ctx->pc = 0x38D7E8u;
    // 0x38d7e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x38d7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x38d7ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x38d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38d7f0: 0xa068040b  sb          $t0, 0x40B($v1)
    ctx->pc = 0x38d7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1035), (uint8_t)GPR_U32(ctx, 8));
    // 0x38d7f4: 0x0  nop
    ctx->pc = 0x38d7f4u;
    // NOP
label_38d7f8:
    // 0x38d7f8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x38d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38d7fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x38d7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x38d800: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x38d800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x38d804: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x38d804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38d808: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x38d808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38d80c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x38D80Cu;
    {
        const bool branch_taken_0x38d80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D80Cu;
        // 0x38d810: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d80c) {
            ctx->pc = 0x38D7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d7c0;
        }
    }
    ctx->pc = 0x38D814u;
    // 0x38d814: 0x0  nop
    ctx->pc = 0x38d814u;
    // NOP
label_38d818:
    // 0x38d818: 0x3e00008  jr          $ra
    ctx->pc = 0x38D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D820u;
}
