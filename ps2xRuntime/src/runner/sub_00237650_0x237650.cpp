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

// Function: sub_00237650
// Address: 0x237650 - 0x237698
void sub_00237650_0x237650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237650_0x237650");
#endif

    switch (ctx->pc) {
        case 0x23766cu: goto label_23766c;
        case 0x237678u: goto label_237678;
        case 0x237680u: goto label_237680;
        default: break;
    }

    ctx->pc = 0x237650u;

    // 0x237650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23765c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237664: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x237664u;
    SET_GPR_U32(ctx, 31, 0x23766Cu);
    ctx->pc = 0x237668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237664u;
    // 0x237668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x237664u, 0x23766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23766Cu;
label_23766c:
    // 0x23766c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237670: 0xc08dda6  jal         func_237698
    ctx->pc = 0x237670u;
    SET_GPR_U32(ctx, 31, 0x237678u);
    ctx->pc = 0x237674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237670u;
    // 0x237674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237698u, 0x237670u, 0x237678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237678u;
label_237678:
    // 0x237678: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x237678u;
    SET_GPR_U32(ctx, 31, 0x237680u);
    ctx->pc = 0x23767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237678u;
    // 0x23767c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x237678u, 0x237680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237680u;
label_237680:
    // 0x237680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23768c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23768cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237690: 0x3e00008  jr          $ra
    ctx->pc = 0x237690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237690u;
        // 0x237694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237698u;
}
