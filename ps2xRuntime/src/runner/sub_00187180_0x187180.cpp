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

// Function: sub_00187180
// Address: 0x187180 - 0x1871c0
void sub_00187180_0x187180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187180_0x187180");
#endif

    switch (ctx->pc) {
        case 0x1871a8u: goto label_1871a8;
        default: break;
    }

    ctx->pc = 0x187180u;

    // 0x187180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187184: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x187188: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18718c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187198: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x187198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18719c: 0x8c440420  lw          $a0, 0x420($v0)
    ctx->pc = 0x18719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1056)));
    // 0x1871a0: 0xc05e480  jal         func_179200
    ctx->pc = 0x1871A0u;
    SET_GPR_U32(ctx, 31, 0x1871A8u);
    ctx->pc = 0x1871A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871A0u;
    // 0x1871a4: 0x24500420  addiu       $s0, $v0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x1871A0u, 0x1871A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871A8u;
label_1871a8:
    // 0x1871a8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1871a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1871ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1871acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1871b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1871b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1871b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1871b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1871b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1871B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1871BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871B8u;
        // 0x1871bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1871B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1871C0u;
}
