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

// Function: sub_0024FAD8
// Address: 0x24fad8 - 0x24fb1c
void sub_0024FAD8_0x24fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FAD8_0x24fad8");
#endif

    switch (ctx->pc) {
        case 0x24fb0cu: goto label_24fb0c;
        default: break;
    }

    ctx->pc = 0x24fad8u;

    // 0x24fad8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24fadc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fadcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fae0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24fae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fae8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FAE8u;
    {
        const bool branch_taken_0x24fae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAE8u;
        // 0x24faec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fae8) {
            ctx->pc = 0x24FB00u;
            goto label_24fb00;
        }
    }
    ctx->pc = 0x24FAF0u;
    // 0x24faf0: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24faf4: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24faf8: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FAF8u;
    {
        const bool branch_taken_0x24faf8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAF8u;
        // 0x24fafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24faf8) {
            ctx->pc = 0x24FB10u;
            goto label_24fb10;
        }
    }
    ctx->pc = 0x24FB00u;
label_24fb00:
    // 0x24fb00: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24fb04: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24FB04u;
    SET_GPR_U32(ctx, 31, 0x24FB0Cu);
    ctx->pc = 0x24FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FB04u;
    // 0x24fb08: 0x2484e918  addiu       $a0, $a0, -0x16E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24FB04u, 0x24FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB0Cu;
label_24fb0c:
    // 0x24fb0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24fb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fb10:
    // 0x24fb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fb14: 0x3e00008  jr          $ra
    ctx->pc = 0x24FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB14u;
        // 0x24fb18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FB1Cu;
}
