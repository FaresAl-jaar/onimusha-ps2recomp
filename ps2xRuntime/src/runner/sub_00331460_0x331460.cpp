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

// Function: sub_00331460
// Address: 0x331460 - 0x3314ac
void sub_00331460_0x331460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331460_0x331460");
#endif

    switch (ctx->pc) {
        case 0x3314a0u: goto label_3314a0;
        default: break;
    }

    ctx->pc = 0x331460u;

    // 0x331460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331468: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x331468u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33146c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x33146cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x331470: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x331470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x331474: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x331474u;
    {
        const bool branch_taken_0x331474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331474) {
            ctx->pc = 0x3314A0u;
            goto label_3314a0;
        }
    }
    ctx->pc = 0x33147Cu;
    // 0x33147c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x33147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x331480: 0x91480001  lbu         $t0, 0x1($t2)
    ctx->pc = 0x331480u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x331484: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x331484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x331488: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x331488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33148c: 0x95420004  lhu         $v0, 0x4($t2)
    ctx->pc = 0x33148cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x331490: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x331490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331494: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x331494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x331498: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x331498u;
    SET_GPR_U32(ctx, 31, 0x3314A0u);
    ctx->pc = 0x33149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331498u;
    // 0x33149c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x331498u, 0x3314A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314A0u;
label_3314a0:
    // 0x3314a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3314a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3314a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3314A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3314A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314A4u;
        // 0x3314a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3314A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3314ACu;
}
