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

// Function: sub_001A4840
// Address: 0x1a4840 - 0x1a4884
void sub_001A4840_0x1a4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4840_0x1a4840");
#endif

    switch (ctx->pc) {
        case 0x1a4870u: goto label_1a4870;
        default: break;
    }

    ctx->pc = 0x1a4840u;

    // 0x1a4840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4844: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a4844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1a4848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a484c: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1a484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1a4850: 0x94266ac4  lhu         $a2, 0x6AC4($at)
    ctx->pc = 0x1a4850u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1a4854: 0x30c50f00  andi        $a1, $a2, 0xF00
    ctx->pc = 0x1a4854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x1a4858: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4858u;
    {
        const bool branch_taken_0x1a4858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4858u;
        // 0x1a485c: 0x24030a02  addiu       $v1, $zero, 0xA02 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4858) {
            ctx->pc = 0x1A4878u;
            goto label_1a4878;
        }
    }
    ctx->pc = 0x1A4860u;
    // 0x1a4860: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4860u;
    {
        const bool branch_taken_0x1a4860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4860u;
        // 0x1a4864: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4860) {
            ctx->pc = 0x1A4878u;
            goto label_1a4878;
        }
    }
    ctx->pc = 0x1A4868u;
    // 0x1a4868: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A4868u;
    SET_GPR_U32(ctx, 31, 0x1A4870u);
    ctx->pc = 0x1A486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4868u;
    // 0x1a486c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4868u, 0x1A4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4870u;
label_1a4870:
    // 0x1a4870: 0x3c03a000  lui         $v1, 0xA000
    ctx->pc = 0x1a4870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40960 << 16));
    // 0x1a4874: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1a4874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_1a4878:
    // 0x1a4878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a487c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A487Cu;
        // 0x1a4880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A487Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4884u;
}
