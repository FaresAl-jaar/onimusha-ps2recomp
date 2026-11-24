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

// Function: sub_0020C5E0
// Address: 0x20c5e0 - 0x20c61c
void sub_0020C5E0_0x20c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C5E0_0x20c5e0");
#endif

    switch (ctx->pc) {
        case 0x20c5fcu: goto label_20c5fc;
        default: break;
    }

    ctx->pc = 0x20c5e0u;

    // 0x20c5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c5ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c5f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c5f4: 0xc081544  jal         func_205510
    ctx->pc = 0x20C5F4u;
    SET_GPR_U32(ctx, 31, 0x20C5FCu);
    ctx->pc = 0x20C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5F4u;
    // 0x20c5f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C5F4u, 0x20C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5FCu;
label_20c5fc:
    // 0x20c5fc: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20C5FCu;
    {
        const bool branch_taken_0x20c5fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c5fc) {
            ctx->pc = 0x20C600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C5FCu;
            // 0x20c600: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C604u;
            goto label_20c604;
        }
    }
    ctx->pc = 0x20C604u;
label_20c604:
    // 0x20c604: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x20c604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x20c608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c60c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c60cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c614: 0x3e00008  jr          $ra
    ctx->pc = 0x20C614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C614u;
        // 0x20c618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C61Cu;
}
