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

// Function: sub_002300A8
// Address: 0x2300a8 - 0x230100
void sub_002300A8_0x2300a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002300A8_0x2300a8");
#endif

    switch (ctx->pc) {
        case 0x2300ccu: goto label_2300cc;
        default: break;
    }

    ctx->pc = 0x2300a8u;

    // 0x2300a8: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x2300a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x2300ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2300acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2300b0: 0x24c3c478  addiu       $v1, $a2, -0x3B88
    ctx->pc = 0x2300b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952056));
    // 0x2300b4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2300b4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4BC478u));
    // 0x2300b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2300B8u;
    {
        const bool branch_taken_0x2300b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2300BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300B8u;
        // 0x2300bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300b8) {
            ctx->pc = 0x2300C8u;
            goto label_2300c8;
        }
    }
    ctx->pc = 0x2300C0u;
    // 0x2300c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2300C0u;
    {
        const bool branch_taken_0x2300c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300C0u;
        // 0x2300c4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300c0) {
            ctx->pc = 0x2300F8u;
            goto label_2300f8;
        }
    }
    ctx->pc = 0x2300C8u;
label_2300c8:
    // 0x2300c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2300cc:
    // 0x2300cc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2300d0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x2300d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2300d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2300D4u;
    {
        const bool branch_taken_0x2300d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300D4u;
        // 0x2300d8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300d4) {
            ctx->pc = 0x2300F8u;
            goto label_2300f8;
        }
    }
    ctx->pc = 0x2300DCu;
    // 0x2300dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2300dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2300e0: 0x24c3c478  addiu       $v1, $a2, -0x3B88
    ctx->pc = 0x2300e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952056));
    // 0x2300e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2300e8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2300e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2300ec: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2300ECu;
    {
        const bool branch_taken_0x2300ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2300ec) {
            ctx->pc = 0x2300F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2300ECu;
            // 0x2300f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2300cc;
        }
    }
    ctx->pc = 0x2300F4u;
    // 0x2300f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2300f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2300f8:
    // 0x2300f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2300F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2300FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300F8u;
        // 0x2300fc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2300F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230100u;
}
