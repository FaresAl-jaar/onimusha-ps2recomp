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

// Function: sub_002BA590
// Address: 0x2ba590 - 0x2ba5d0
void sub_002BA590_0x2ba590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA590_0x2ba590");
#endif

    ctx->pc = 0x2ba590u;

    // 0x2ba590: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BA590u;
    {
        const bool branch_taken_0x2ba590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba590) {
            ctx->pc = 0x2BA5C0u;
            goto label_2ba5c0;
        }
    }
    ctx->pc = 0x2BA598u;
    // 0x2ba598: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ba598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba59c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2ba59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2ba5a0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2ba5a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ba5a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA5A4u;
    {
        const bool branch_taken_0x2ba5a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5A4u;
        // 0x2ba5a8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5a4) {
            ctx->pc = 0x2BA5B0u;
            goto label_2ba5b0;
        }
    }
    ctx->pc = 0x2BA5ACu;
    // 0x2ba5ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ba5acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba5b0:
    // 0x2ba5b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA5B0u;
    {
        const bool branch_taken_0x2ba5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba5b0) {
            ctx->pc = 0x2BA5C0u;
            goto label_2ba5c0;
        }
    }
    ctx->pc = 0x2BA5B8u;
    // 0x2ba5b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA5B8u;
    {
        const bool branch_taken_0x2ba5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5B8u;
        // 0x2ba5bc: 0x90820619  lbu         $v0, 0x619($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1561)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5b8) {
            ctx->pc = 0x2BA5C8u;
            goto label_2ba5c8;
        }
    }
    ctx->pc = 0x2BA5C0u;
label_2ba5c0:
    // 0x2ba5c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba5c4: 0x0  nop
    ctx->pc = 0x2ba5c4u;
    // NOP
label_2ba5c8:
    // 0x2ba5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA5D0u;
}
