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

// Function: sub_0033AF70
// Address: 0x33af70 - 0x33afac
void sub_0033AF70_0x33af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AF70_0x33af70");
#endif

    switch (ctx->pc) {
        case 0x33af8cu: goto label_33af8c;
        case 0x33afa0u: goto label_33afa0;
        default: break;
    }

    ctx->pc = 0x33af70u;

    // 0x33af70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33af74: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF74u;
    {
        const bool branch_taken_0x33af74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF74u;
        // 0x33af78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af74) {
            ctx->pc = 0x33AF98u;
            goto label_33af98;
        }
    }
    ctx->pc = 0x33AF7Cu;
    // 0x33af7c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x33af7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33af80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33af80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33af84: 0xc0cebec  jal         func_33AFB0
    ctx->pc = 0x33AF84u;
    SET_GPR_U32(ctx, 31, 0x33AF8Cu);
    ctx->pc = 0x33AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF84u;
    // 0x33af88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFB0u, 0x33AF84u, 0x33AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF8Cu;
label_33af8c:
    // 0x33af8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33AF8Cu;
    {
        const bool branch_taken_0x33af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af8c) {
            ctx->pc = 0x33AFA0u;
            goto label_33afa0;
        }
    }
    ctx->pc = 0x33AF94u;
    // 0x33af94: 0x0  nop
    ctx->pc = 0x33af94u;
    // NOP
label_33af98:
    // 0x33af98: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x33AF98u;
    SET_GPR_U32(ctx, 31, 0x33AFA0u);
    ctx->pc = 0x33AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF98u;
    // 0x33af9c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x33AF98u, 0x33AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFA0u;
label_33afa0:
    // 0x33afa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33afa4: 0x3e00008  jr          $ra
    ctx->pc = 0x33AFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFA4u;
        // 0x33afa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AFACu;
}
