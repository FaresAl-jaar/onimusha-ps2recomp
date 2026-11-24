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

// Function: sub_002A19B0
// Address: 0x2a19b0 - 0x2a1a00
void sub_002A19B0_0x2a19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A19B0_0x2a19b0");
#endif

    switch (ctx->pc) {
        case 0x2a19d0u: goto label_2a19d0;
        case 0x2a19dcu: goto label_2a19dc;
        default: break;
    }

    ctx->pc = 0x2a19b0u;

    // 0x2a19b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a19b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a19b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a19bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a19bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a19c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a19c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19c4: 0x94820068  lhu         $v0, 0x68($a0)
    ctx->pc = 0x2a19c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a19c8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2a19c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a19cc: 0x0  nop
    ctx->pc = 0x2a19ccu;
    // NOP
label_2a19d0:
    // 0x2a19d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19d4: 0xc0a8604  jal         func_2A1810
    ctx->pc = 0x2A19D4u;
    SET_GPR_U32(ctx, 31, 0x2A19DCu);
    ctx->pc = 0x2A19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19D4u;
    // 0x2a19d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1810u, 0x2A19D4u, 0x2A19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19DCu;
label_2a19dc:
    // 0x2a19dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a19dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a19e0: 0x0  nop
    ctx->pc = 0x2a19e0u;
    // NOP
    // 0x2a19e4: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A19E4u;
    {
        const bool branch_taken_0x2a19e4 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2a19e4) {
            ctx->pc = 0x2A19D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a19d0;
        }
    }
    ctx->pc = 0x2A19ECu;
    // 0x2a19ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a19ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a19f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a19f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a19f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a19f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a19f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A19F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19F8u;
        // 0x2a19fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A19F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1A00u;
}
