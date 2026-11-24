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

// Function: sub_002082E8
// Address: 0x2082e8 - 0x20834c
void sub_002082E8_0x2082e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002082E8_0x2082e8");
#endif

    ctx->pc = 0x2082e8u;

    // 0x2082e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2082e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2082ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2082ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082f0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2082F0u;
    {
        const bool branch_taken_0x2082f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082F0u;
        // 0x2082f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082f0) {
            ctx->pc = 0x208340u;
            goto label_208340;
        }
    }
    ctx->pc = 0x2082F8u;
    // 0x2082f8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2082f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2082fc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2082fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x208300: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208300u;
    {
        const bool branch_taken_0x208300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208300u;
        // 0x208304: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208300) {
            ctx->pc = 0x208330u;
            goto label_208330;
        }
    }
    ctx->pc = 0x208308u;
    // 0x208308: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x208308u;
    {
        const bool branch_taken_0x208308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208308u;
        // 0x20830c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208308) {
            ctx->pc = 0x208340u;
            goto label_208340;
        }
    }
    ctx->pc = 0x208310u;
    // 0x208310: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x208314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208314u;
    {
        const bool branch_taken_0x208314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208314u;
        // 0x208318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208314) {
            ctx->pc = 0x208328u;
            goto label_208328;
        }
    }
    ctx->pc = 0x20831Cu;
    // 0x20831c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20831cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208320: 0x808326a  j           func_20C9A8
    ctx->pc = 0x208320u;
    ctx->pc = 0x208324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208320u;
    // 0x208324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C9A8u;
    sub_0020C9A8_0x20c9a8(rdram, ctx, runtime); return;
    ctx->pc = 0x208328u;
label_208328:
    // 0x208328: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208328u;
    {
        const bool branch_taken_0x208328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208328u;
        // 0x20832c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208328) {
            ctx->pc = 0x208340u;
            goto label_208340;
        }
    }
    ctx->pc = 0x208330u;
label_208330:
    // 0x208330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208334: 0x808326a  j           func_20C9A8
    ctx->pc = 0x208334u;
    ctx->pc = 0x208338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208334u;
    // 0x208338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C9A8u;
    sub_0020C9A8_0x20c9a8(rdram, ctx, runtime); return;
    ctx->pc = 0x20833Cu;
    // 0x20833c: 0x0  nop
    ctx->pc = 0x20833cu;
    // NOP
label_208340:
    // 0x208340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208344: 0x3e00008  jr          $ra
    ctx->pc = 0x208344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208344u;
        // 0x208348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20834Cu;
}
