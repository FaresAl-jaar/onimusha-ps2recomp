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

// Function: sub_00221148
// Address: 0x221148 - 0x221180
void sub_00221148_0x221148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221148_0x221148");
#endif

    switch (ctx->pc) {
        case 0x221168u: goto label_221168;
        default: break;
    }

    ctx->pc = 0x221148u;

    // 0x221148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22114c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x221150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221154: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x221154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x221158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22115c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221160: 0xc088412  jal         func_221048
    ctx->pc = 0x221160u;
    SET_GPR_U32(ctx, 31, 0x221168u);
    ctx->pc = 0x221164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221160u;
    // 0x221164: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221048u, 0x221160u, 0x221168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221168u;
label_221168:
    // 0x221168: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x221168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x22116c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22116cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221178: 0x3e00008  jr          $ra
    ctx->pc = 0x221178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221178u;
        // 0x22117c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221180u;
}
