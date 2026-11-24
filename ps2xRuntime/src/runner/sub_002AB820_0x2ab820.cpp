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

// Function: sub_002AB820
// Address: 0x2ab820 - 0x2ab860
void sub_002AB820_0x2ab820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB820_0x2ab820");
#endif

    switch (ctx->pc) {
        case 0x2ab854u: goto label_2ab854;
        default: break;
    }

    ctx->pc = 0x2ab820u;

    // 0x2ab820: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab820u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab824: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab828: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab82c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab834: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab838: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab83c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab840: 0x24060314  addiu       $a2, $zero, 0x314
    ctx->pc = 0x2ab840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
    // 0x2ab844: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x2ab844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ab848: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab84c: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2AB84Cu;
    SET_GPR_U32(ctx, 31, 0x2AB854u);
    ctx->pc = 0x2AB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB84Cu;
    // 0x2ab850: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2AB84Cu, 0x2AB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB854u;
label_2ab854:
    // 0x2ab854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab858: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB858u;
        // 0x2ab85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB860u;
}
