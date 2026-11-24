#include <cstdio>
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

// Function: sub_00230E78
// Address: 0x230e78 - 0x230eb0
void sub_00230E78_0x230e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230E78_0x230e78");
#endif
    { static uint32_t n=0; ++n; if (n<=40) fprintf(stderr,"[probe adxf_stop] call %u a0=0x%x a1=0x%x a2=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,5),GPR_U32(ctx,6),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x230e8cu: goto label_230e8c;
        case 0x230e94u: goto label_230e94;
        case 0x230e9cu: goto label_230e9c;
        default: break;
    }

    ctx->pc = 0x230e78u;

    // 0x230e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x230e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230e80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x230e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x230e84: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230E84u;
    SET_GPR_U32(ctx, 31, 0x230E8Cu);
    ctx->pc = 0x230E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E84u;
    // 0x230e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230E84u, 0x230E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E8Cu;
label_230e8c:
    // 0x230e8c: 0xc08c3ac  jal         func_230EB0
    ctx->pc = 0x230E8Cu;
    SET_GPR_U32(ctx, 31, 0x230E94u);
    ctx->pc = 0x230E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E8Cu;
    // 0x230e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230EB0u, 0x230E8Cu, 0x230E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E94u;
label_230e94:
    // 0x230e94: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x230E94u;
    SET_GPR_U32(ctx, 31, 0x230E9Cu);
    ctx->pc = 0x230E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E94u;
    // 0x230e98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x230E94u, 0x230E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E9Cu;
label_230e9c:
    // 0x230e9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x230e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230ea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x230EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EA8u;
        // 0x230eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230EB0u;
}
