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

// Function: sub_00214808
// Address: 0x214808 - 0x214854
void sub_00214808_0x214808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214808_0x214808");
#endif

    switch (ctx->pc) {
        case 0x21482cu: goto label_21482c;
        default: break;
    }

    ctx->pc = 0x214808u;

    // 0x214808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21480c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214814: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214818: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x214818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21481c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21481Cu;
    {
        const bool branch_taken_0x21481c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21481Cu;
        // 0x214820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21481c) {
            ctx->pc = 0x214844u;
            goto label_214844;
        }
    }
    ctx->pc = 0x214824u;
    // 0x214824: 0xc085216  jal         func_214858
    ctx->pc = 0x214824u;
    SET_GPR_U32(ctx, 31, 0x21482Cu);
    ctx->pc = 0x214858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214858u, 0x214824u, 0x21482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21482Cu;
label_21482c:
    // 0x21482c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21482Cu;
    {
        const bool branch_taken_0x21482c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x21482c) {
            ctx->pc = 0x214830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21482Cu;
            // 0x214830: 0x8e0236b0  lw          $v0, 0x36B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214840u;
            goto label_214840;
        }
    }
    ctx->pc = 0x214834u;
    // 0x214834: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214834u;
    {
        const bool branch_taken_0x214834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214834u;
        // 0x214838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214834) {
            ctx->pc = 0x214844u;
            goto label_214844;
        }
    }
    ctx->pc = 0x21483Cu;
    // 0x21483c: 0x0  nop
    ctx->pc = 0x21483cu;
    // NOP
label_214840:
    // 0x214840: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x214840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_214844:
    // 0x214844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214848: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21484c: 0x3e00008  jr          $ra
    ctx->pc = 0x21484Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21484Cu;
        // 0x214850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21484Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214854u;
}
