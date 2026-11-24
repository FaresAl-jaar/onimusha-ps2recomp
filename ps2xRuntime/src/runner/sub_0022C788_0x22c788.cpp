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

// Function: sub_0022C788
// Address: 0x22c788 - 0x22c7e8
void sub_0022C788_0x22c788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C788_0x22c788");
#endif

    switch (ctx->pc) {
        case 0x22c7b0u: goto label_22c7b0;
        case 0x22c7c4u: goto label_22c7c4;
        default: break;
    }

    ctx->pc = 0x22c788u;

    // 0x22c788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c78c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22c790: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22c794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c798: 0x2450b308  addiu       $s0, $v0, -0x4CF8
    ctx->pc = 0x22c798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947592));
    // 0x22c79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22c7a0: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x22c7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22c7a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22c7a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c7ac: 0x0  nop
    ctx->pc = 0x22c7acu;
    // NOP
label_22c7b0:
    // 0x22c7b0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x22c7b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c7b4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C7B4u;
    {
        const bool branch_taken_0x22c7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x22c7b4) {
            ctx->pc = 0x22C7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C7B4u;
            // 0x22c7b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C7C8u;
            goto label_22c7c8;
        }
    }
    ctx->pc = 0x22C7BCu;
    // 0x22c7bc: 0xc08b18e  jal         func_22C638
    ctx->pc = 0x22C7BCu;
    SET_GPR_U32(ctx, 31, 0x22C7C4u);
    ctx->pc = 0x22C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C7BCu;
    // 0x22c7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C638u, 0x22C7BCu, 0x22C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7C4u;
label_22c7c4:
    // 0x22c7c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22c7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22c7c8:
    // 0x22c7c8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22C7C8u;
    {
        const bool branch_taken_0x22c7c8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x22C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7C8u;
        // 0x22c7cc: 0x26100104  addiu       $s0, $s0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7c8) {
            ctx->pc = 0x22C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c7b0;
        }
    }
    ctx->pc = 0x22C7D0u;
    // 0x22c7d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c7d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c7d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c7d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22c7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c7dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22c7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x22C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E0u;
        // 0x22c7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C7E8u;
}
