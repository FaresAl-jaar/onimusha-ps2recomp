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

// Function: sub_001FEB28
// Address: 0x1feb28 - 0x1feb88
void sub_001FEB28_0x1feb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB28_0x1feb28");
#endif

    switch (ctx->pc) {
        case 0x1feb3cu: goto label_1feb3c;
        case 0x1feb78u: goto label_1feb78;
        default: break;
    }

    ctx->pc = 0x1feb28u;

    // 0x1feb28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1feb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1feb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1feb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1feb30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1feb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1feb34: 0xc080496  jal         func_201258
    ctx->pc = 0x1FEB34u;
    SET_GPR_U32(ctx, 31, 0x1FEB3Cu);
    ctx->pc = 0x1FEB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB34u;
    // 0x1feb38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FEB34u, 0x1FEB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB3Cu;
label_1feb3c:
    // 0x1feb3c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1feb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1feb40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1feb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb44: 0x34a50211  ori         $a1, $a1, 0x211
    ctx->pc = 0x1feb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)529);
    // 0x1feb48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEB48u;
    {
        const bool branch_taken_0x1feb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB48u;
        // 0x1feb4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb48) {
            ctx->pc = 0x1FEB60u;
            goto label_1feb60;
        }
    }
    ctx->pc = 0x1FEB50u;
    // 0x1feb50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1feb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feb58: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FEB58u;
    ctx->pc = 0x1FEB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB58u;
    // 0x1feb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEB60u;
label_1feb60:
    // 0x1feb60: 0x8e03035c  lw          $v1, 0x35C($s0)
    ctx->pc = 0x1feb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1feb64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1feb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feb68: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEB68u;
    {
        const bool branch_taken_0x1feb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1FEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB68u;
        // 0x1feb6c: 0xae020408  sw          $v0, 0x408($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb68) {
            ctx->pc = 0x1FEB78u;
            goto label_1feb78;
        }
    }
    ctx->pc = 0x1FEB70u;
    // 0x1feb70: 0xc080550  jal         func_201540
    ctx->pc = 0x1FEB70u;
    SET_GPR_U32(ctx, 31, 0x1FEB78u);
    ctx->pc = 0x1FEB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB70u;
    // 0x1feb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201540u, 0x1FEB70u, 0x1FEB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB78u;
label_1feb78:
    // 0x1feb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1feb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feb80: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB80u;
        // 0x1feb84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEB88u;
}
