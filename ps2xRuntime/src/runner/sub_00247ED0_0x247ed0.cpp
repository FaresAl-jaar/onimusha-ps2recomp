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

// Function: sub_00247ED0
// Address: 0x247ed0 - 0x247f48
void sub_00247ED0_0x247ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247ED0_0x247ed0");
#endif

    switch (ctx->pc) {
        case 0x247ef4u: goto label_247ef4;
        case 0x247f08u: goto label_247f08;
        case 0x247f1cu: goto label_247f1c;
        default: break;
    }

    ctx->pc = 0x247ed0u;

    // 0x247ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247ed4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x247ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x247ed8: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x247ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x247edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247ee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247ee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247ee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x247eec: 0xc094ece  jal         func_253B38
    ctx->pc = 0x247EECu;
    SET_GPR_U32(ctx, 31, 0x247EF4u);
    ctx->pc = 0x247EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EECu;
    // 0x247ef0: 0x2664fe60  addiu       $a0, $s3, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B38u, 0x247EECu, 0x247EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EF4u;
label_247ef4:
    // 0x247ef4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x247EF4u;
    {
        const bool branch_taken_0x247ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EF4u;
        // 0x247ef8: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ef4) {
            ctx->pc = 0x247F2Cu;
            goto label_247f2c;
        }
    }
    ctx->pc = 0x247EFCu;
    // 0x247efc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x247efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247f00: 0x2450fed0  addiu       $s0, $v0, -0x130
    ctx->pc = 0x247f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x247f04: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x247f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_247f08:
    // 0x247f08: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x247f08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247f0c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x247F0Cu;
    {
        const bool branch_taken_0x247f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x247f0c) {
            ctx->pc = 0x247F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247F0Cu;
            // 0x247f10: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247F20u;
            goto label_247f20;
        }
    }
    ctx->pc = 0x247F14u;
    // 0x247f14: 0xc091f82  jal         func_247E08
    ctx->pc = 0x247F14u;
    SET_GPR_U32(ctx, 31, 0x247F1Cu);
    ctx->pc = 0x247F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F14u;
    // 0x247f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247E08u, 0x247F14u, 0x247F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F1Cu;
label_247f1c:
    // 0x247f1c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x247f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_247f20:
    // 0x247f20: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x247F20u;
    {
        const bool branch_taken_0x247f20 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x247F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F20u;
        // 0x247f24: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f20) {
            ctx->pc = 0x247F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247f08;
        }
    }
    ctx->pc = 0x247F28u;
    // 0x247f28: 0xae60fe60  sw          $zero, -0x1A0($s3)
    ctx->pc = 0x247f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966880), GPR_U32(ctx, 0));
label_247f2c:
    // 0x247f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247f34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247f38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x247f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247f3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f40: 0x3e00008  jr          $ra
    ctx->pc = 0x247F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F40u;
        // 0x247f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F48u;
}
