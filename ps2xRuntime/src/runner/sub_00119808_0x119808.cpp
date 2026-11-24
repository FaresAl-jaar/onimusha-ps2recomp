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

// Function: sub_00119808
// Address: 0x119808 - 0x119850
void sub_00119808_0x119808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119808_0x119808");
#endif

    ctx->pc = 0x119808u;

    // 0x119808: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x119808u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x11980c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11980Cu;
    {
        const bool branch_taken_0x11980c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x119810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11980Cu;
        // 0x119810: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11980c) {
            ctx->pc = 0x119824u;
            goto label_119824;
        }
    }
    ctx->pc = 0x119814u;
    // 0x119814: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x119814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x119818: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x119818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x11981c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11981Cu;
    {
        const bool branch_taken_0x11981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11981c) {
            ctx->pc = 0x119820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11981Cu;
            // 0x119820: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11982Cu;
            goto label_11982c;
        }
    }
    ctx->pc = 0x119824u;
label_119824:
    // 0x119824: 0x3e00008  jr          $ra
    ctx->pc = 0x119824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119824u;
        // 0x119828: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11982Cu;
label_11982c:
    // 0x11982c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x119830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119830u;
    {
        const bool branch_taken_0x119830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119830) {
            ctx->pc = 0x119848u;
            goto label_119848;
        }
    }
    ctx->pc = 0x119838u;
    // 0x119838: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x119838u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x11983c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x11983cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x119840: 0x3e00008  jr          $ra
    ctx->pc = 0x119840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119840u;
        // 0x119844: 0x43102f  dsubu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119848u;
label_119848:
    // 0x119848: 0x3e00008  jr          $ra
    ctx->pc = 0x119848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119848u;
        // 0x11984c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119850u;
}
