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

// Function: sub_00397530
// Address: 0x397530 - 0x397584
void sub_00397530_0x397530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397530_0x397530");
#endif

    switch (ctx->pc) {
        case 0x397540u: goto label_397540;
        default: break;
    }

    ctx->pc = 0x397530u;

    // 0x397530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397538: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x397538u;
    SET_GPR_U32(ctx, 31, 0x397540u);
    ctx->pc = 0x39753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397538u;
    // 0x39753c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x397538u, 0x397540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397540u;
label_397540:
    // 0x397540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x397540u;
    {
        const bool branch_taken_0x397540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397540) {
            ctx->pc = 0x397550u;
            goto label_397550;
        }
    }
    ctx->pc = 0x397548u;
    // 0x397548: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x397548u;
    {
        const bool branch_taken_0x397548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397548u;
        // 0x39754c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397548) {
            ctx->pc = 0x397578u;
            goto label_397578;
        }
    }
    ctx->pc = 0x397550u;
label_397550:
    // 0x397550: 0x9044005f  lbu         $a0, 0x5F($v0)
    ctx->pc = 0x397550u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 95)));
    // 0x397554: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x397554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x397558: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x397558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x39755c: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x39755cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x397560: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x397560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x397564: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x397564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x397568: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x397568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x39756c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x39756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x397570: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x397570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x397574: 0x0  nop
    ctx->pc = 0x397574u;
    // NOP
label_397578:
    // 0x397578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39757c: 0x3e00008  jr          $ra
    ctx->pc = 0x39757Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39757Cu;
        // 0x397580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39757Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397584u;
}
