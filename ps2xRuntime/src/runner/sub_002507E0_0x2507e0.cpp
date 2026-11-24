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

// Function: sub_002507E0
// Address: 0x2507e0 - 0x25082c
void sub_002507E0_0x2507e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002507E0_0x2507e0");
#endif

    switch (ctx->pc) {
        case 0x250810u: goto label_250810;
        default: break;
    }

    ctx->pc = 0x2507e0u;

    // 0x2507e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2507e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2507e4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2507e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2507e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2507e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2507ec: 0x2450ad78  addiu       $s0, $v0, -0x5288
    ctx->pc = 0x2507ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946168));
    // 0x2507f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2507f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DAD78u));
    // 0x2507f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2507F4u;
    {
        const bool branch_taken_0x2507f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2507F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507F4u;
        // 0x2507f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507f4) {
            ctx->pc = 0x250814u;
            goto label_250814;
        }
    }
    ctx->pc = 0x2507FCu;
    // 0x2507fc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2507fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x250800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250804: 0x2484ad80  addiu       $a0, $a0, -0x5280
    ctx->pc = 0x250804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946176));
    // 0x250808: 0xc049590  jal         func_125640
    ctx->pc = 0x250808u;
    SET_GPR_U32(ctx, 31, 0x250810u);
    ctx->pc = 0x25080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250808u;
    // 0x25080c: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x250808u, 0x250810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250810u;
label_250810:
    // 0x250810: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x250810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_250814:
    // 0x250814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x250814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250818: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x250818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25081c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25081cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x250820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250824: 0x3e00008  jr          $ra
    ctx->pc = 0x250824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250824u;
        // 0x250828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25082Cu;
}
