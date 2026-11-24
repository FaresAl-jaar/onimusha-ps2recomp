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

// Function: sub_0024D078
// Address: 0x24d078 - 0x24d0c0
void sub_0024D078_0x24d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D078_0x24d078");
#endif

    switch (ctx->pc) {
        case 0x24d094u: goto label_24d094;
        case 0x24d0a0u: goto label_24d0a0;
        case 0x24d0a8u: goto label_24d0a8;
        default: break;
    }

    ctx->pc = 0x24d078u;

    // 0x24d078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d07c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d08c: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D08Cu;
    SET_GPR_U32(ctx, 31, 0x24D094u);
    ctx->pc = 0x24D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D08Cu;
    // 0x24d090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D08Cu, 0x24D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D094u;
label_24d094:
    // 0x24d094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d098: 0xc093430  jal         func_24D0C0
    ctx->pc = 0x24D098u;
    SET_GPR_U32(ctx, 31, 0x24D0A0u);
    ctx->pc = 0x24D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D098u;
    // 0x24d09c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D0C0u, 0x24D098u, 0x24D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0A0u;
label_24d0a0:
    // 0x24d0a0: 0xc0933c8  jal         func_24CF20
    ctx->pc = 0x24D0A0u;
    SET_GPR_U32(ctx, 31, 0x24D0A8u);
    ctx->pc = 0x24D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0A0u;
    // 0x24d0a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF20u, 0x24D0A0u, 0x24D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0A8u;
label_24d0a8:
    // 0x24d0a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d0ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24d0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0B8u;
        // 0x24d0bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D0C0u;
}
