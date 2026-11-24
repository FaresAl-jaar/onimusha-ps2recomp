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

// Function: sub_00237800
// Address: 0x237800 - 0x237844
void sub_00237800_0x237800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237800_0x237800");
#endif

    switch (ctx->pc) {
        case 0x23781cu: goto label_23781c;
        case 0x237824u: goto label_237824;
        case 0x23782cu: goto label_23782c;
        default: break;
    }

    ctx->pc = 0x237800u;

    // 0x237800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23780c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23780cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237814: 0xc08e2aa  jal         func_238AA8
    ctx->pc = 0x237814u;
    SET_GPR_U32(ctx, 31, 0x23781Cu);
    ctx->pc = 0x237818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237814u;
    // 0x237818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x237814u, 0x23781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23781Cu;
label_23781c:
    // 0x23781c: 0xc08ddc2  jal         func_237708
    ctx->pc = 0x23781Cu;
    SET_GPR_U32(ctx, 31, 0x237824u);
    ctx->pc = 0x237820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23781Cu;
    // 0x237820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237708u, 0x23781Cu, 0x237824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237824u;
label_237824:
    // 0x237824: 0xc08e2b0  jal         func_238AC0
    ctx->pc = 0x237824u;
    SET_GPR_U32(ctx, 31, 0x23782Cu);
    ctx->pc = 0x237828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237824u;
    // 0x237828: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AC0u, 0x237824u, 0x23782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23782Cu;
label_23782c:
    // 0x23782c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23783c: 0x3e00008  jr          $ra
    ctx->pc = 0x23783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23783Cu;
        // 0x237840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23783Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237844u;
}
