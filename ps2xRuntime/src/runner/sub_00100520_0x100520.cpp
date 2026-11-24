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

// Function: sub_00100520
// Address: 0x100520 - 0x10057c
void sub_00100520_0x100520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100520_0x100520");
#endif

    switch (ctx->pc) {
        case 0x100534u: goto label_100534;
        case 0x100548u: goto label_100548;
        default: break;
    }

    ctx->pc = 0x100520u;

    // 0x100520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100528: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x100528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x10052c: 0xc049260  jal         func_124980
    ctx->pc = 0x10052Cu;
    SET_GPR_U32(ctx, 31, 0x100534u);
    ctx->pc = 0x100530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10052Cu;
    // 0x100530: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124980u, 0x10052Cu, 0x100534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100534u;
label_100534:
    // 0x100534: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100534u;
    {
        const bool branch_taken_0x100534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100534) {
            ctx->pc = 0x100568u;
            goto label_100568;
        }
    }
    ctx->pc = 0x10053Cu;
    // 0x10053c: 0x0  nop
    ctx->pc = 0x10053cu;
    // NOP
    // 0x100540: 0xc040420  jal         func_101080
    ctx->pc = 0x100540u;
    SET_GPR_U32(ctx, 31, 0x100548u);
    ctx->pc = 0x100544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100540u;
    // 0x100544: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101080u, 0x100540u, 0x100548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100548u;
label_100548:
    // 0x100548: 0x0  nop
    ctx->pc = 0x100548u;
    // NOP
    // 0x10054c: 0x0  nop
    ctx->pc = 0x10054cu;
    // NOP
    // 0x100550: 0x0  nop
    ctx->pc = 0x100550u;
    // NOP
    // 0x100554: 0x0  nop
    ctx->pc = 0x100554u;
    // NOP
    // 0x100558: 0x0  nop
    ctx->pc = 0x100558u;
    // NOP
    // 0x10055c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x10055Cu;
    {
        const bool branch_taken_0x10055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10055c) {
            ctx->pc = 0x100548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100548;
        }
    }
    ctx->pc = 0x100564u;
    // 0x100564: 0x0  nop
    ctx->pc = 0x100564u;
    // NOP
label_100568:
    // 0x100568: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x100568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x10056c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100570: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x100570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100574: 0x3e00008  jr          $ra
    ctx->pc = 0x100574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100574u;
        // 0x100578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10057Cu;
}
