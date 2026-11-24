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

// Function: sub_002486E8
// Address: 0x2486e8 - 0x248734
void sub_002486E8_0x2486e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002486E8_0x2486e8");
#endif

    switch (ctx->pc) {
        case 0x248704u: goto label_248704;
        default: break;
    }

    ctx->pc = 0x2486e8u;

    // 0x2486e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2486e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2486ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2486ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486f0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2486F0u;
    {
        const bool branch_taken_0x2486f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2486F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486F0u;
        // 0x2486f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486f0) {
            ctx->pc = 0x248710u;
            goto label_248710;
        }
    }
    ctx->pc = 0x2486F8u;
    // 0x2486f8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2486f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2486fc: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x2486FCu;
    SET_GPR_U32(ctx, 31, 0x248704u);
    ctx->pc = 0x248700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486FCu;
    // 0x248700: 0x24a5cfd8  addiu       $a1, $a1, -0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x2486FCu, 0x248704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248704u;
label_248704:
    // 0x248704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x248704u;
    {
        const bool branch_taken_0x248704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248704u;
        // 0x248708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248704) {
            ctx->pc = 0x248728u;
            goto label_248728;
        }
    }
    ctx->pc = 0x24870Cu;
    // 0x24870c: 0x0  nop
    ctx->pc = 0x24870cu;
    // NOP
label_248710:
    // 0x248710: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x248710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x248714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248718: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248718u;
    {
        const bool branch_taken_0x248718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248718) {
            ctx->pc = 0x24871Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248718u;
            // 0x24871c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248728u;
            goto label_248728;
        }
    }
    ctx->pc = 0x248720u;
    // 0x248720: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x248724: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x248724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_248728:
    // 0x248728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24872c: 0x3e00008  jr          $ra
    ctx->pc = 0x24872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24872Cu;
        // 0x248730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248734u;
}
