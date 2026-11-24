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

// Function: sub_001F52F0
// Address: 0x1f52f0 - 0x1f5324
void sub_001F52F0_0x1f52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F52F0_0x1f52f0");
#endif

    switch (ctx->pc) {
        case 0x1f52f0u: goto label_1f52f0;
        case 0x1f52f4u: goto label_1f52f4;
        case 0x1f52f8u: goto label_1f52f8;
        case 0x1f52fcu: goto label_1f52fc;
        case 0x1f5300u: goto label_1f5300;
        case 0x1f5304u: goto label_1f5304;
        case 0x1f5308u: goto label_1f5308;
        case 0x1f530cu: goto label_1f530c;
        case 0x1f5310u: goto label_1f5310;
        case 0x1f5314u: goto label_1f5314;
        case 0x1f5318u: goto label_1f5318;
        case 0x1f531cu: goto label_1f531c;
        case 0x1f5320u: goto label_1f5320;
        default: break;
    }

    ctx->pc = 0x1f52f0u;

label_1f52f0:
    // 0x1f52f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f52f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f52f4:
    // 0x1f52f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f52f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f52f8:
    // 0x1f52f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f52f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f52fc:
    // 0x1f52fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f5300:
    if (ctx->pc == 0x1F5300u) {
        ctx->pc = 0x1F5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52FCu;
        // 0x1f5300: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5304u;
        goto label_1f5304;
    }
    ctx->pc = 0x1F52FCu;
    {
        const bool branch_taken_0x1f52fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52FCu;
        // 0x1f5300: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52fc) {
            ctx->pc = 0x1F5318u;
            goto label_1f5318;
        }
    }
    ctx->pc = 0x1F5304u;
label_1f5304:
    // 0x1f5304: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f5304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5308:
    // 0x1f5308: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f530c:
    if (ctx->pc == 0x1F530Cu) {
        ctx->pc = 0x1F530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5308u;
        // 0x1f530c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5310u;
        goto label_1f5310;
    }
    ctx->pc = 0x1F5308u;
    {
        const bool branch_taken_0x1f5308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5308) {
            ctx->pc = 0x1F530Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5308u;
            // 0x1f530c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F531Cu;
            goto label_1f531c;
        }
    }
    ctx->pc = 0x1F5310u;
label_1f5310:
    // 0x1f5310: 0x40f809  jalr        $v0
label_1f5314:
    if (ctx->pc == 0x1F5314u) {
        ctx->pc = 0x1F5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5310u;
        // 0x1f5314: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5318u;
        goto label_1f5318;
    }
    ctx->pc = 0x1F5310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5318u);
        ctx->pc = 0x1F5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5310u;
        // 0x1f5314: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5310u, 0x1F5318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5318u;
label_1f5318:
    // 0x1f5318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f531c:
    // 0x1f531c: 0x3e00008  jr          $ra
label_1f5320:
    if (ctx->pc == 0x1F5320u) {
        ctx->pc = 0x1F5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F531Cu;
        // 0x1f5320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5324u;
        goto label_fallthrough_0x1f531c;
    }
    ctx->pc = 0x1F531Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F531Cu;
        // 0x1f5320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F531Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f531c:
    ctx->pc = 0x1F5324u;
}
