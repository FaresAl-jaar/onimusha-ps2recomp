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

// Function: sub_00246C20
// Address: 0x246c20 - 0x246c84
void sub_00246C20_0x246c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246C20_0x246c20");
#endif

    switch (ctx->pc) {
        case 0x246c3cu: goto label_246c3c;
        case 0x246c48u: goto label_246c48;
        case 0x246c64u: goto label_246c64;
        case 0x246c6cu: goto label_246c6c;
        default: break;
    }

    ctx->pc = 0x246c20u;

    // 0x246c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x246c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246c30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246c34: 0xc091a7e  jal         func_2469F8
    ctx->pc = 0x246C34u;
    SET_GPR_U32(ctx, 31, 0x246C3Cu);
    ctx->pc = 0x246C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C34u;
    // 0x246c38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F8u, 0x246C34u, 0x246C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C3Cu;
label_246c3c:
    // 0x246c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c40: 0xc044cda  jal         func_113368
    ctx->pc = 0x246C40u;
    SET_GPR_U32(ctx, 31, 0x246C48u);
    ctx->pc = 0x246C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C40u;
    // 0x246c44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113368u, 0x246C40u, 0x246C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C48u;
label_246c48:
    // 0x246c48: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x246c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c50: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
    // 0x246c54: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246C54u;
    {
        const bool branch_taken_0x246c54 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x246C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C54u;
        // 0x246c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c54) {
            ctx->pc = 0x246C64u;
            goto label_246c64;
        }
    }
    ctx->pc = 0x246C5Cu;
    // 0x246c5c: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246C5Cu;
    SET_GPR_U32(ctx, 31, 0x246C64u);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246C5Cu, 0x246C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C64u;
label_246c64:
    // 0x246c64: 0xc091a8c  jal         func_246A30
    ctx->pc = 0x246C64u;
    SET_GPR_U32(ctx, 31, 0x246C6Cu);
    ctx->pc = 0x246A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A30u, 0x246C64u, 0x246C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C6Cu;
label_246c6c:
    // 0x246c6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x246C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C7Cu;
        // 0x246c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246C84u;
}
