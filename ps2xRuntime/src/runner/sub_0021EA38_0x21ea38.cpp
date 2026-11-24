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

// Function: sub_0021EA38
// Address: 0x21ea38 - 0x21ea80
void sub_0021EA38_0x21ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EA38_0x21ea38");
#endif

    switch (ctx->pc) {
        case 0x21ea58u: goto label_21ea58;
        case 0x21ea64u: goto label_21ea64;
        default: break;
    }

    ctx->pc = 0x21ea38u;

    // 0x21ea38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ea3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ea40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ea44: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EA44u;
    {
        const bool branch_taken_0x21ea44 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x21EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA44u;
        // 0x21ea48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea44) {
            ctx->pc = 0x21EA6Cu;
            goto label_21ea6c;
        }
    }
    ctx->pc = 0x21EA4Cu;
    // 0x21ea4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21ea4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21ea50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ea58:
    // 0x21ea58: 0x26310dd8  addiu       $s1, $s1, 0xDD8
    ctx->pc = 0x21ea58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3544));
    // 0x21ea5c: 0xc087aa0  jal         func_21EA80
    ctx->pc = 0x21EA5Cu;
    SET_GPR_U32(ctx, 31, 0x21EA64u);
    ctx->pc = 0x21EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA5Cu;
    // 0x21ea60: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EA80u, 0x21EA5Cu, 0x21EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA64u;
label_21ea64:
    // 0x21ea64: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x21EA64u;
    {
        const bool branch_taken_0x21ea64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA64u;
        // 0x21ea68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea64) {
            ctx->pc = 0x21EA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ea58;
        }
    }
    ctx->pc = 0x21EA6Cu;
label_21ea6c:
    // 0x21ea6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ea6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ea70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ea70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ea74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ea78: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA78u;
        // 0x21ea7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA80u;
}
