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

// Function: sub_00238318
// Address: 0x238318 - 0x238370
void sub_00238318_0x238318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238318_0x238318");
#endif

    switch (ctx->pc) {
        case 0x23833cu: goto label_23833c;
        case 0x23834cu: goto label_23834c;
        case 0x238354u: goto label_238354;
        default: break;
    }

    ctx->pc = 0x238318u;

    // 0x238318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23831c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x238328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23832c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x238330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x238330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x238334: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x238334u;
    SET_GPR_U32(ctx, 31, 0x23833Cu);
    ctx->pc = 0x238338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238334u;
    // 0x238338: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x238334u, 0x23833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23833Cu;
label_23833c:
    // 0x23833c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238344: 0xc08e0dc  jal         func_238370
    ctx->pc = 0x238344u;
    SET_GPR_U32(ctx, 31, 0x23834Cu);
    ctx->pc = 0x238348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238344u;
    // 0x238348: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238370u, 0x238344u, 0x23834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23834Cu;
label_23834c:
    // 0x23834c: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x23834Cu;
    SET_GPR_U32(ctx, 31, 0x238354u);
    ctx->pc = 0x238350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23834Cu;
    // 0x238350: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x23834Cu, 0x238354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238354u;
label_238354:
    // 0x238354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23835c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23835cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238364: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238368: 0x3e00008  jr          $ra
    ctx->pc = 0x238368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238368u;
        // 0x23836c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238370u;
}
