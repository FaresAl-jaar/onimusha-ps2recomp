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

// Function: sub_001FD5C0
// Address: 0x1fd5c0 - 0x1fd5f4
void sub_001FD5C0_0x1fd5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD5C0_0x1fd5c0");
#endif

    switch (ctx->pc) {
        case 0x1fd5c0u: goto label_1fd5c0;
        case 0x1fd5c4u: goto label_1fd5c4;
        case 0x1fd5c8u: goto label_1fd5c8;
        case 0x1fd5ccu: goto label_1fd5cc;
        case 0x1fd5d0u: goto label_1fd5d0;
        case 0x1fd5d4u: goto label_1fd5d4;
        case 0x1fd5d8u: goto label_1fd5d8;
        case 0x1fd5dcu: goto label_1fd5dc;
        case 0x1fd5e0u: goto label_1fd5e0;
        case 0x1fd5e4u: goto label_1fd5e4;
        case 0x1fd5e8u: goto label_1fd5e8;
        case 0x1fd5ecu: goto label_1fd5ec;
        case 0x1fd5f0u: goto label_1fd5f0;
        default: break;
    }

    ctx->pc = 0x1fd5c0u;

label_1fd5c0:
    // 0x1fd5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd5c4:
    // 0x1fd5c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fd5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5c8:
    // 0x1fd5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd5cc:
    // 0x1fd5cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1fd5d0:
    if (ctx->pc == 0x1FD5D0u) {
        ctx->pc = 0x1FD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5CCu;
        // 0x1fd5d0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD5D4u;
        goto label_1fd5d4;
    }
    ctx->pc = 0x1FD5CCu;
    {
        const bool branch_taken_0x1fd5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5CCu;
        // 0x1fd5d0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5cc) {
            ctx->pc = 0x1FD5E8u;
            goto label_1fd5e8;
        }
    }
    ctx->pc = 0x1FD5D4u;
label_1fd5d4:
    // 0x1fd5d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fd5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd5d8:
    // 0x1fd5d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1fd5dc:
    if (ctx->pc == 0x1FD5DCu) {
        ctx->pc = 0x1FD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5D8u;
        // 0x1fd5dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD5E0u;
        goto label_1fd5e0;
    }
    ctx->pc = 0x1FD5D8u;
    {
        const bool branch_taken_0x1fd5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5d8) {
            ctx->pc = 0x1FD5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD5D8u;
            // 0x1fd5dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5ECu;
            goto label_1fd5ec;
        }
    }
    ctx->pc = 0x1FD5E0u;
label_1fd5e0:
    // 0x1fd5e0: 0x40f809  jalr        $v0
label_1fd5e4:
    if (ctx->pc == 0x1FD5E4u) {
        ctx->pc = 0x1FD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5E0u;
        // 0x1fd5e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD5E8u;
        goto label_1fd5e8;
    }
    ctx->pc = 0x1FD5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD5E8u);
        ctx->pc = 0x1FD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5E0u;
        // 0x1fd5e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD5E0u, 0x1FD5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD5E8u;
label_1fd5e8:
    // 0x1fd5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd5ec:
    // 0x1fd5ec: 0x3e00008  jr          $ra
label_1fd5f0:
    if (ctx->pc == 0x1FD5F0u) {
        ctx->pc = 0x1FD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5ECu;
        // 0x1fd5f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD5F4u;
        goto label_fallthrough_0x1fd5ec;
    }
    ctx->pc = 0x1FD5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5ECu;
        // 0x1fd5f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd5ec:
    ctx->pc = 0x1FD5F4u;
}
