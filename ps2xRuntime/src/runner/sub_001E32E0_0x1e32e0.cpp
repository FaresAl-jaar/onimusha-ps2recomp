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

// Function: sub_001E32E0
// Address: 0x1e32e0 - 0x1e3330
void sub_001E32E0_0x1e32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E32E0_0x1e32e0");
#endif

    switch (ctx->pc) {
        case 0x1e3314u: goto label_1e3314;
        default: break;
    }

    ctx->pc = 0x1e32e0u;

    // 0x1e32e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e32e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e32e4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e32e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e32e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e32ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e32ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e32f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e32f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32f4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e32f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e32f8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E32F8u;
    {
        const bool branch_taken_0x1e32f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e32f8) {
            ctx->pc = 0x1E3320u;
            goto label_1e3320;
        }
    }
    ctx->pc = 0x1E3300u;
    // 0x1e3300: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1e3300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e3304: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3304u;
    {
        const bool branch_taken_0x1e3304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3304) {
            ctx->pc = 0x1E3318u;
            goto label_1e3318;
        }
    }
    ctx->pc = 0x1E330Cu;
    // 0x1e330c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E330Cu;
    SET_GPR_U32(ctx, 31, 0x1E3314u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E330Cu, 0x1E3314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3314u;
label_1e3314:
    // 0x1e3314: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e3314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e3318:
    // 0x1e3318: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e3318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e331c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e331cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e3320:
    // 0x1e3320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3328: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3328u;
        // 0x1e332c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3330u;
}
