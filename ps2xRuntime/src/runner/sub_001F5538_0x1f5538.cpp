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

// Function: sub_001F5538
// Address: 0x1f5538 - 0x1f5594
void sub_001F5538_0x1f5538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5538_0x1f5538");
#endif

    switch (ctx->pc) {
        case 0x1f5554u: goto label_1f5554;
        default: break;
    }

    ctx->pc = 0x1f5538u;

    // 0x1f5538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f553c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5540: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x1f5540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f5544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f554c: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F554Cu;
    SET_GPR_U32(ctx, 31, 0x1F5554u);
    ctx->pc = 0x1F5550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F554Cu;
    // 0x1f5550: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F554Cu, 0x1F5554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5554u;
label_1f5554:
    // 0x1f5554: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f5554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f5558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5558u;
    {
        const bool branch_taken_0x1f5558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5558u;
        // 0x1f555c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5558) {
            ctx->pc = 0x1F5578u;
            goto label_1f5578;
        }
    }
    ctx->pc = 0x1F5560u;
    // 0x1f5560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5564: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x1f5564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
    // 0x1f5568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f556c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5570: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F5570u;
    ctx->pc = 0x1F5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5570u;
    // 0x1f5574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5578u;
label_1f5578:
    // 0x1f5578: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x1f5578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1f557c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5580: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f5580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f5584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f558c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F558Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F558Cu;
        // 0x1f5590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F558Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5594u;
}
