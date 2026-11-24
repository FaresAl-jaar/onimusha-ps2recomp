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

// Function: sub_00220340
// Address: 0x220340 - 0x220390
void sub_00220340_0x220340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220340_0x220340");
#endif

    switch (ctx->pc) {
        case 0x220354u: goto label_220354;
        case 0x220360u: goto label_220360;
        default: break;
    }

    ctx->pc = 0x220340u;

    // 0x220340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220348: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22034c: 0xc0880e4  jal         func_220390
    ctx->pc = 0x22034Cu;
    SET_GPR_U32(ctx, 31, 0x220354u);
    ctx->pc = 0x220350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22034Cu;
    // 0x220350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220390u, 0x22034Cu, 0x220354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220354u;
label_220354:
    // 0x220354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220358: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x220358u;
    SET_GPR_U32(ctx, 31, 0x220360u);
    ctx->pc = 0x22035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220358u;
    // 0x22035c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x220358u, 0x220360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220360u;
label_220360:
    // 0x220360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220364: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x220364u;
    {
        const bool branch_taken_0x220364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x220368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220364u;
        // 0x220368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220364) {
            ctx->pc = 0x220380u;
            goto label_220380;
        }
    }
    ctx->pc = 0x22036Cu;
    // 0x22036c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220374: 0x80883c6  j           func_220F18
    ctx->pc = 0x220374u;
    ctx->pc = 0x220378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220374u;
    // 0x220378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F18u;
    sub_00220F18_0x220f18(rdram, ctx, runtime); return;
    ctx->pc = 0x22037Cu;
    // 0x22037c: 0x0  nop
    ctx->pc = 0x22037cu;
    // NOP
label_220380:
    // 0x220380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220388: 0x3e00008  jr          $ra
    ctx->pc = 0x220388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220388u;
        // 0x22038c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220390u;
}
