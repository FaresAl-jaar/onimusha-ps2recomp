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

// Function: sub_00238658
// Address: 0x238658 - 0x2386a0
void sub_00238658_0x238658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238658_0x238658");
#endif

    switch (ctx->pc) {
        case 0x238674u: goto label_238674;
        case 0x238680u: goto label_238680;
        case 0x238688u: goto label_238688;
        default: break;
    }

    ctx->pc = 0x238658u;

    // 0x238658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23865c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23866c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23866Cu;
    SET_GPR_U32(ctx, 31, 0x238674u);
    ctx->pc = 0x238670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23866Cu;
    // 0x238670: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23866Cu, 0x238674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238674u;
label_238674:
    // 0x238674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238678: 0xc08e1a8  jal         func_2386A0
    ctx->pc = 0x238678u;
    SET_GPR_U32(ctx, 31, 0x238680u);
    ctx->pc = 0x23867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238678u;
    // 0x23867c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2386A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2386A0u, 0x238678u, 0x238680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238680u;
label_238680:
    // 0x238680: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x238680u;
    SET_GPR_U32(ctx, 31, 0x238688u);
    ctx->pc = 0x238684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238680u;
    // 0x238684: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x238680u, 0x238688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238688u;
label_238688:
    // 0x238688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23868c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23868cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238698: 0x3e00008  jr          $ra
    ctx->pc = 0x238698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238698u;
        // 0x23869c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2386A0u;
}
