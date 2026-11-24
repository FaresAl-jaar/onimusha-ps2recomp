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

// Function: sub_00201540
// Address: 0x201540 - 0x201588
void sub_00201540_0x201540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201540_0x201540");
#endif

    switch (ctx->pc) {
        case 0x201554u: goto label_201554;
        default: break;
    }

    ctx->pc = 0x201540u;

    // 0x201540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20154c: 0xc07d380  jal         func_1F4E00
    ctx->pc = 0x20154Cu;
    SET_GPR_U32(ctx, 31, 0x201554u);
    ctx->pc = 0x201550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20154Cu;
    // 0x201550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E00u, 0x20154Cu, 0x201554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201554u;
label_201554:
    // 0x201554: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x201554u;
    {
        const bool branch_taken_0x201554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201554) {
            ctx->pc = 0x201558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201554u;
            // 0x201558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20157Cu;
            goto label_20157c;
        }
    }
    ctx->pc = 0x20155Cu;
    // 0x20155c: 0x8e0203b4  lw          $v0, 0x3B4($s0)
    ctx->pc = 0x20155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x201560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201560u;
    {
        const bool branch_taken_0x201560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201560u;
        // 0x201564: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201560) {
            ctx->pc = 0x201578u;
            goto label_201578;
        }
    }
    ctx->pc = 0x201568u;
    // 0x201568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20156c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20156cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201570: 0x807d454  j           func_1F5150
    ctx->pc = 0x201570u;
    ctx->pc = 0x201574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201570u;
    // 0x201574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5150u;
    sub_001F5150_0x1f5150(rdram, ctx, runtime); return;
    ctx->pc = 0x201578u;
label_201578:
    // 0x201578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20157c:
    // 0x20157c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201580: 0x3e00008  jr          $ra
    ctx->pc = 0x201580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201580u;
        // 0x201584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201588u;
}
