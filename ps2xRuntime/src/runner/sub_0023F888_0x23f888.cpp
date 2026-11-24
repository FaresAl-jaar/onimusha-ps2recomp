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

// Function: sub_0023F888
// Address: 0x23f888 - 0x23f900
void sub_0023F888_0x23f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F888_0x23f888");
#endif

    ctx->pc = 0x23f888u;

    // 0x23f888: 0x808301a5  lb          $v1, 0x1A5($a0)
    ctx->pc = 0x23f888u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 421)));
    // 0x23f88c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23F88Cu;
    {
        const bool branch_taken_0x23f88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F88Cu;
        // 0x23f890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f88c) {
            ctx->pc = 0x23F8F8u;
            goto label_23f8f8;
        }
    }
    ctx->pc = 0x23F894u;
    // 0x23f894: 0x8c8301e8  lw          $v1, 0x1E8($a0)
    ctx->pc = 0x23f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x23f898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f89c: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23F89Cu;
    {
        const bool branch_taken_0x23f89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f89c) {
            ctx->pc = 0x23F8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F89Cu;
            // 0x23f8a0: 0x8082020a  lb          $v0, 0x20A($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F8E0u;
            goto label_23f8e0;
        }
    }
    ctx->pc = 0x23F8A4u;
    // 0x23f8a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f8a8: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F8A8u;
    {
        const bool branch_taken_0x23f8a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f8a8) {
            ctx->pc = 0x23F8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F8A8u;
            // 0x23f8ac: 0x8082020a  lb          $v0, 0x20A($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F8D0u;
            goto label_23f8d0;
        }
    }
    ctx->pc = 0x23F8B0u;
    // 0x23f8b0: 0x80820216  lb          $v0, 0x216($a0)
    ctx->pc = 0x23f8b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 534)));
    // 0x23f8b4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F8B4u;
    {
        const bool branch_taken_0x23f8b4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x23f8b4) {
            ctx->pc = 0x23F8C8u;
            goto label_23f8c8;
        }
    }
    ctx->pc = 0x23F8BCu;
    // 0x23f8bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23F8BCu;
    {
        const bool branch_taken_0x23f8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8BCu;
        // 0x23f8c0: 0x90820217  lbu         $v0, 0x217($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 535)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8bc) {
            ctx->pc = 0x23F8ECu;
            goto label_23f8ec;
        }
    }
    ctx->pc = 0x23F8C4u;
    // 0x23f8c4: 0x0  nop
    ctx->pc = 0x23f8c4u;
    // NOP
label_23f8c8:
    // 0x23f8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8C8u;
        // 0x23f8cc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F8D0u;
label_23f8d0:
    // 0x23f8d0: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F8D0u;
    {
        const bool branch_taken_0x23f8d0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x23f8d0) {
            ctx->pc = 0x23F8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F8D0u;
            // 0x23f8d4: 0x9082020b  lbu         $v0, 0x20B($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 523)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F8ECu;
            goto label_23f8ec;
        }
    }
    ctx->pc = 0x23F8D8u;
    // 0x23f8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D8u;
        // 0x23f8dc: 0x2402fff1  addiu       $v0, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F8E0u;
label_23f8e0:
    // 0x23f8e0: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F8E0u;
    {
        const bool branch_taken_0x23f8e0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x23f8e0) {
            ctx->pc = 0x23F8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F8E0u;
            // 0x23f8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F8F8u;
            goto label_23f8f8;
        }
    }
    ctx->pc = 0x23F8E8u;
    // 0x23f8e8: 0x9082020b  lbu         $v0, 0x20B($a0)
    ctx->pc = 0x23f8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 523)));
label_23f8ec:
    // 0x23f8ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23f8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8F0u;
        // 0x23f8f4: 0x216c3  sra         $v0, $v0, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F8F8u;
label_23f8f8:
    // 0x23f8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F900u;
}
