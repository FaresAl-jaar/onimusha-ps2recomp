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

// Function: sub_0024C780
// Address: 0x24c780 - 0x24c7d4
void sub_0024C780_0x24c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C780_0x24c780");
#endif

    switch (ctx->pc) {
        case 0x24c7a0u: goto label_24c7a0;
        case 0x24c7b4u: goto label_24c7b4;
        default: break;
    }

    ctx->pc = 0x24c780u;

    // 0x24c780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c784: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24c784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24c788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24c78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c790: 0x24505af8  addiu       $s0, $v0, 0x5AF8
    ctx->pc = 0x24c790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x24c794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c798: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x24c798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x24c79c: 0x0  nop
    ctx->pc = 0x24c79cu;
    // NOP
label_24c7a0:
    // 0x24c7a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x24c7a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c7a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C7A4u;
    {
        const bool branch_taken_0x24c7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c7a4) {
            ctx->pc = 0x24C7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7A4u;
            // 0x24c7a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C7B8u;
            goto label_24c7b8;
        }
    }
    ctx->pc = 0x24C7ACu;
    // 0x24c7ac: 0xc0931de  jal         func_24C778
    ctx->pc = 0x24C7ACu;
    SET_GPR_U32(ctx, 31, 0x24C7B4u);
    ctx->pc = 0x24C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7ACu;
    // 0x24c7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C778u, 0x24C7ACu, 0x24C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7B4u;
label_24c7b4:
    // 0x24c7b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24c7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_24c7b8:
    // 0x24c7b8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24C7B8u;
    {
        const bool branch_taken_0x24c7b8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x24C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7B8u;
        // 0x24c7bc: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7b8) {
            ctx->pc = 0x24C7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c7a0;
        }
    }
    ctx->pc = 0x24C7C0u;
    // 0x24c7c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c7c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24C7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7CCu;
        // 0x24c7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C7D4u;
}
