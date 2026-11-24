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

// Function: sub_001FE8C8
// Address: 0x1fe8c8 - 0x1fe8fc
void sub_001FE8C8_0x1fe8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE8C8_0x1fe8c8");
#endif

    switch (ctx->pc) {
        case 0x1fe8c8u: goto label_1fe8c8;
        case 0x1fe8ccu: goto label_1fe8cc;
        case 0x1fe8d0u: goto label_1fe8d0;
        case 0x1fe8d4u: goto label_1fe8d4;
        case 0x1fe8d8u: goto label_1fe8d8;
        case 0x1fe8dcu: goto label_1fe8dc;
        case 0x1fe8e0u: goto label_1fe8e0;
        case 0x1fe8e4u: goto label_1fe8e4;
        case 0x1fe8e8u: goto label_1fe8e8;
        case 0x1fe8ecu: goto label_1fe8ec;
        case 0x1fe8f0u: goto label_1fe8f0;
        case 0x1fe8f4u: goto label_1fe8f4;
        case 0x1fe8f8u: goto label_1fe8f8;
        default: break;
    }

    ctx->pc = 0x1fe8c8u;

label_1fe8c8:
    // 0x1fe8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fe8cc:
    // 0x1fe8cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fe8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8d0:
    // 0x1fe8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe8d4:
    // 0x1fe8d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1fe8d8:
    if (ctx->pc == 0x1FE8D8u) {
        ctx->pc = 0x1FE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8D4u;
        // 0x1fe8d8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8DCu;
        goto label_1fe8dc;
    }
    ctx->pc = 0x1FE8D4u;
    {
        const bool branch_taken_0x1fe8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8D4u;
        // 0x1fe8d8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8d4) {
            ctx->pc = 0x1FE8F0u;
            goto label_1fe8f0;
        }
    }
    ctx->pc = 0x1FE8DCu;
label_1fe8dc:
    // 0x1fe8dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe8e0:
    // 0x1fe8e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1fe8e4:
    if (ctx->pc == 0x1FE8E4u) {
        ctx->pc = 0x1FE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E0u;
        // 0x1fe8e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8E8u;
        goto label_1fe8e8;
    }
    ctx->pc = 0x1FE8E0u;
    {
        const bool branch_taken_0x1fe8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe8e0) {
            ctx->pc = 0x1FE8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE8E0u;
            // 0x1fe8e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE8F4u;
            goto label_1fe8f4;
        }
    }
    ctx->pc = 0x1FE8E8u;
label_1fe8e8:
    // 0x1fe8e8: 0x40f809  jalr        $v0
label_1fe8ec:
    if (ctx->pc == 0x1FE8ECu) {
        ctx->pc = 0x1FE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E8u;
        // 0x1fe8ec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8F0u;
        goto label_1fe8f0;
    }
    ctx->pc = 0x1FE8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE8F0u);
        ctx->pc = 0x1FE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8E8u;
        // 0x1fe8ec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE8E8u, 0x1FE8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE8F0u;
label_1fe8f0:
    // 0x1fe8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe8f4:
    // 0x1fe8f4: 0x3e00008  jr          $ra
label_1fe8f8:
    if (ctx->pc == 0x1FE8F8u) {
        ctx->pc = 0x1FE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8F4u;
        // 0x1fe8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8FCu;
        goto label_fallthrough_0x1fe8f4;
    }
    ctx->pc = 0x1FE8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8F4u;
        // 0x1fe8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe8f4:
    ctx->pc = 0x1FE8FCu;
}
