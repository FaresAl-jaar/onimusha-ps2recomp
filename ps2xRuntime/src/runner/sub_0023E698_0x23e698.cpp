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

// Function: sub_0023E698
// Address: 0x23e698 - 0x23e6f8
void sub_0023E698_0x23e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E698_0x23e698");
#endif

    switch (ctx->pc) {
        case 0x23e6c0u: goto label_23e6c0;
        case 0x23e6d4u: goto label_23e6d4;
        default: break;
    }

    ctx->pc = 0x23e698u;

    // 0x23e698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e69c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23e6a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23e6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e6a8: 0x24508ff0  addiu       $s0, $v0, -0x7010
    ctx->pc = 0x23e6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x23e6ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23e6b0: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x23e6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e6b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23e6b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23e6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e6bc: 0x0  nop
    ctx->pc = 0x23e6bcu;
    // NOP
label_23e6c0:
    // 0x23e6c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23e6c4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E6C4u;
    {
        const bool branch_taken_0x23e6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x23e6c4) {
            ctx->pc = 0x23E6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E6C4u;
            // 0x23e6c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E6D8u;
            goto label_23e6d8;
        }
    }
    ctx->pc = 0x23E6CCu;
    // 0x23e6cc: 0xc08f968  jal         func_23E5A0
    ctx->pc = 0x23E6CCu;
    SET_GPR_U32(ctx, 31, 0x23E6D4u);
    ctx->pc = 0x23E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E6CCu;
    // 0x23e6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E5A0u, 0x23E6CCu, 0x23E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6D4u;
label_23e6d4:
    // 0x23e6d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23e6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_23e6d8:
    // 0x23e6d8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23E6D8u;
    {
        const bool branch_taken_0x23e6d8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x23E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6D8u;
        // 0x23e6dc: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6d8) {
            ctx->pc = 0x23E6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e6c0;
        }
    }
    ctx->pc = 0x23E6E0u;
    // 0x23e6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e6e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23e6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e6e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23e6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e6ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23e6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23e6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23E6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6F0u;
        // 0x23e6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E6F8u;
}
