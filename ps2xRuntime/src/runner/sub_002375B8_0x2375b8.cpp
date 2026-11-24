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

// Function: sub_002375B8
// Address: 0x2375b8 - 0x237604
void sub_002375B8_0x2375b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002375B8_0x2375b8");
#endif

    switch (ctx->pc) {
        case 0x2375ccu: goto label_2375cc;
        case 0x2375d4u: goto label_2375d4;
        case 0x2375e0u: goto label_2375e0;
        case 0x2375e8u: goto label_2375e8;
        default: break;
    }

    ctx->pc = 0x2375b8u;

    // 0x2375b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2375b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2375bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2375bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2375c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2375c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2375c4: 0xc08de38  jal         func_2378E0
    ctx->pc = 0x2375C4u;
    SET_GPR_U32(ctx, 31, 0x2375CCu);
    ctx->pc = 0x2375C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375C4u;
    // 0x2375c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2378E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378E0u, 0x2375C4u, 0x2375CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375CCu;
label_2375cc:
    // 0x2375cc: 0xc08dd46  jal         func_237518
    ctx->pc = 0x2375CCu;
    SET_GPR_U32(ctx, 31, 0x2375D4u);
    ctx->pc = 0x2375D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375CCu;
    // 0x2375d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237518u, 0x2375CCu, 0x2375D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375D4u;
label_2375d4:
    // 0x2375d4: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x2375d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x2375d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2375D8u;
    {
        const bool branch_taken_0x2375d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2375d8) {
            ctx->pc = 0x2375DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2375D8u;
            // 0x2375dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2375F8u;
            goto label_2375f8;
        }
    }
    ctx->pc = 0x2375E0u;
label_2375e0:
    // 0x2375e0: 0xc08c73e  jal         func_231CF8
    ctx->pc = 0x2375E0u;
    SET_GPR_U32(ctx, 31, 0x2375E8u);
    ctx->pc = 0x231CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CF8u, 0x2375E0u, 0x2375E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375E8u;
label_2375e8:
    // 0x2375e8: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x2375e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x2375ec: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2375ECu;
    {
        const bool branch_taken_0x2375ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2375ec) {
            ctx->pc = 0x2375E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2375e0;
        }
    }
    ctx->pc = 0x2375F4u;
    // 0x2375f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2375f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2375f8:
    // 0x2375f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2375f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2375fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2375FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375FCu;
        // 0x237600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2375FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237604u;
}
