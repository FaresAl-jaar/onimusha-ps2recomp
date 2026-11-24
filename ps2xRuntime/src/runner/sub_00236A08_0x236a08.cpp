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

// Function: sub_00236A08
// Address: 0x236a08 - 0x236a68
void sub_00236A08_0x236a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236A08_0x236a08");
#endif

    switch (ctx->pc) {
        case 0x236a30u: goto label_236a30;
        case 0x236a40u: goto label_236a40;
        default: break;
    }

    ctx->pc = 0x236a08u;

    // 0x236a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236a0c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x236a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x236a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236a14: 0x24507568  addiu       $s0, $v0, 0x7568
    ctx->pc = 0x236a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30056));
    // 0x236a18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x236a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236a20: 0x26110ac0  addiu       $s1, $s0, 0xAC0
    ctx->pc = 0x236a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2752));
    // 0x236a24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236a28: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x236a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236a2c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x236a2cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4C7568u));
label_236a30:
    // 0x236a30: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x236A30u;
    {
        const bool branch_taken_0x236a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x236a30) {
            ctx->pc = 0x236A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236A30u;
            // 0x236a34: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236A44u;
            goto label_236a44;
        }
    }
    ctx->pc = 0x236A38u;
    // 0x236a38: 0xc08d9b4  jal         func_2366D0
    ctx->pc = 0x236A38u;
    SET_GPR_U32(ctx, 31, 0x236A40u);
    ctx->pc = 0x236A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A38u;
    // 0x236a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366D0u, 0x236A38u, 0x236A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A40u;
label_236a40:
    // 0x236a40: 0x261000ac  addiu       $s0, $s0, 0xAC
    ctx->pc = 0x236a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_236a44:
    // 0x236a44: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x236a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x236a48: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x236A48u;
    {
        const bool branch_taken_0x236a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236a48) {
            ctx->pc = 0x236A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236A48u;
            // 0x236a4c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236a30;
        }
    }
    ctx->pc = 0x236A50u;
    // 0x236a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236a54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236a58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236a60: 0x3e00008  jr          $ra
    ctx->pc = 0x236A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A60u;
        // 0x236a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A68u;
}
