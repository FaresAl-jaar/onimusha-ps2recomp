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

// Function: sub_002435A8
// Address: 0x2435a8 - 0x2435f8
void sub_002435A8_0x2435a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002435A8_0x2435a8");
#endif

    switch (ctx->pc) {
        case 0x2435d0u: goto label_2435d0;
        default: break;
    }

    ctx->pc = 0x2435a8u;

    // 0x2435a8: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2435a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2435ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2435acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2435b0: 0x8c435cf4  lw          $v1, 0x5CF4($v0)
    ctx->pc = 0x2435b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x885CF4u));
    // 0x2435b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2435b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2435b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2435b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2435bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2435bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2435C0u;
    {
        const bool branch_taken_0x2435c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435C0u;
        // 0x2435c4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435c0) {
            ctx->pc = 0x2435E8u;
            goto label_2435e8;
        }
    }
    ctx->pc = 0x2435C8u;
    // 0x2435c8: 0xc090d26  jal         func_243498
    ctx->pc = 0x2435C8u;
    SET_GPR_U32(ctx, 31, 0x2435D0u);
    ctx->pc = 0x243498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243498u, 0x2435C8u, 0x2435D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435D0u;
label_2435d0:
    // 0x2435d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2435d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2435D4u;
    {
        const bool branch_taken_0x2435d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435D4u;
        // 0x2435d8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435d4) {
            ctx->pc = 0x2435E8u;
            goto label_2435e8;
        }
    }
    ctx->pc = 0x2435DCu;
    // 0x2435dc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2435dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2435e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2435e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2435e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2435e8:
    // 0x2435e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2435e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2435ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2435ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2435f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2435F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2435F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435F0u;
        // 0x2435f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2435F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2435F8u;
}
