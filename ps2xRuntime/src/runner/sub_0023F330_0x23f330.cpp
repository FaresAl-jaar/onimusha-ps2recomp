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

// Function: sub_0023F330
// Address: 0x23f330 - 0x23f364
void sub_0023F330_0x23f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F330_0x23f330");
#endif

    switch (ctx->pc) {
        case 0x23f34cu: goto label_23f34c;
        default: break;
    }

    ctx->pc = 0x23f330u;

    // 0x23f330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f33c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f344: 0xc08fc9a  jal         func_23F268
    ctx->pc = 0x23F344u;
    SET_GPR_U32(ctx, 31, 0x23F34Cu);
    ctx->pc = 0x23F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F344u;
    // 0x23f348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F268u, 0x23F344u, 0x23F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F34Cu;
label_23f34c:
    // 0x23f34c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f350: 0xae1101ac  sw          $s1, 0x1AC($s0)
    ctx->pc = 0x23f350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 17));
    // 0x23f354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f35c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F35Cu;
        // 0x23f360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F364u;
}
