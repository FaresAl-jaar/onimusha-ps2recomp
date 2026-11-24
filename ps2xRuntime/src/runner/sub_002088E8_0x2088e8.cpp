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

// Function: sub_002088E8
// Address: 0x2088e8 - 0x208934
void sub_002088E8_0x2088e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002088E8_0x2088e8");
#endif

    switch (ctx->pc) {
        case 0x208900u: goto label_208900;
        case 0x20891cu: goto label_20891c;
        default: break;
    }

    ctx->pc = 0x2088e8u;

    // 0x2088e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2088ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2088ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2088f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2088f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2088f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2088f8: 0xc08224e  jal         func_208938
    ctx->pc = 0x2088F8u;
    SET_GPR_U32(ctx, 31, 0x208900u);
    ctx->pc = 0x2088FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088F8u;
    // 0x2088fc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208938u, 0x2088F8u, 0x208900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208900u;
label_208900:
    // 0x208900: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x208900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x208904: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x208904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x208908: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x208908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20890c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20890Cu;
    {
        const bool branch_taken_0x20890c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20890Cu;
        // 0x208910: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20890c) {
            ctx->pc = 0x208924u;
            goto label_208924;
        }
    }
    ctx->pc = 0x208914u;
    // 0x208914: 0xc089e4e  jal         func_227938
    ctx->pc = 0x208914u;
    SET_GPR_U32(ctx, 31, 0x20891Cu);
    ctx->pc = 0x208918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208914u;
    // 0x208918: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227938u, 0x208914u, 0x20891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20891Cu;
label_20891c:
    // 0x20891c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x208920: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x208920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_208924:
    // 0x208924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208928: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20892c: 0x3e00008  jr          $ra
    ctx->pc = 0x20892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20892Cu;
        // 0x208930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208934u;
}
