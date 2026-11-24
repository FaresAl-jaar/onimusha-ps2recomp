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

// Function: sub_00220600
// Address: 0x220600 - 0x220660
void sub_00220600_0x220600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220600_0x220600");
#endif

    switch (ctx->pc) {
        case 0x220624u: goto label_220624;
        case 0x220634u: goto label_220634;
        default: break;
    }

    ctx->pc = 0x220600u;

    // 0x220600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220608: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x220608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22060c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220610: 0xdc900158  ld          $s0, 0x158($a0)
    ctx->pc = 0x220610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x220614: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x220614u;
    {
        const bool branch_taken_0x220614 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x220618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220614u;
        // 0x220618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220614) {
            ctx->pc = 0x220650u;
            goto label_220650;
        }
    }
    ctx->pc = 0x22061Cu;
    // 0x22061c: 0xc04b098  jal         func_12C260
    ctx->pc = 0x22061Cu;
    SET_GPR_U32(ctx, 31, 0x220624u);
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x22061Cu, 0x220624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220624u;
label_220624:
    // 0x220624: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x220624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x220628: 0x34a55f90  ori         $a1, $a1, 0x5F90
    ctx->pc = 0x220628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24464);
    // 0x22062c: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x22062Cu;
    SET_GPR_U32(ctx, 31, 0x220634u);
    ctx->pc = 0x220630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22062Cu;
    // 0x220630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x22062Cu, 0x220634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220634u;
label_220634:
    // 0x220634: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x220634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x220638: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x220638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22063c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x22063cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x220640: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x220640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x220644: 0xfc70a218  sd          $s0, -0x5DE8($v1)
    ctx->pc = 0x220644u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294943256), GPR_U64(ctx, 16));
    // 0x220648: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x220648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22064c: 0xaca4a220  sw          $a0, -0x5DE0($a1)
    ctx->pc = 0x22064cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4BA220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA220u, _value); } while (0);
label_220650:
    // 0x220650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220654: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220658: 0x3e00008  jr          $ra
    ctx->pc = 0x220658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220658u;
        // 0x22065c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220660u;
}
