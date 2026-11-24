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

// Function: sub_003A2C00
// Address: 0x3a2c00 - 0x3a2c78
void sub_003A2C00_0x3a2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2C00_0x3a2c00");
#endif

    switch (ctx->pc) {
        case 0x3a2c10u: goto label_3a2c10;
        default: break;
    }

    ctx->pc = 0x3a2c00u;

    // 0x3a2c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a2c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c04: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x3a2c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3a2c08: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3a2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3a2c0c: 0x0  nop
    ctx->pc = 0x3a2c0cu;
    // NOP
label_3a2c10:
    // 0x3a2c10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3a2c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a2c14: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A2C14u;
    {
        const bool branch_taken_0x3a2c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2c14) {
            ctx->pc = 0x3A2C58u;
            goto label_3a2c58;
        }
    }
    ctx->pc = 0x3A2C1Cu;
    // 0x3a2c1c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3a2c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3a2c20: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A2C20u;
    {
        const bool branch_taken_0x3a2c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a2c20) {
            ctx->pc = 0x3A2C58u;
            goto label_3a2c58;
        }
    }
    ctx->pc = 0x3A2C28u;
    // 0x3a2c28: 0x8ca206c8  lw          $v0, 0x6C8($a1)
    ctx->pc = 0x3a2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1736)));
    // 0x3a2c2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a2c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a2c30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a2c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a2c34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2C34u;
    {
        const bool branch_taken_0x3a2c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2c34) {
            ctx->pc = 0x3A2C48u;
            goto label_3a2c48;
        }
    }
    ctx->pc = 0x3A2C3Cu;
    // 0x3a2c3c: 0x90a2065c  lbu         $v0, 0x65C($a1)
    ctx->pc = 0x3a2c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x3a2c40: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x3a2c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
    // 0x3a2c44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a2c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a2c48:
    // 0x3a2c48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2C48u;
    {
        const bool branch_taken_0x3a2c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2c48) {
            ctx->pc = 0x3A2C58u;
            goto label_3a2c58;
        }
    }
    ctx->pc = 0x3A2C50u;
    // 0x3a2c50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2C50u;
    {
        const bool branch_taken_0x3a2c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C50u;
        // 0x3a2c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c50) {
            ctx->pc = 0x3A2C70u;
            goto label_3a2c70;
        }
    }
    ctx->pc = 0x3A2C58u;
label_3a2c58:
    // 0x3a2c58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a2c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a2c5c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3a2c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2c60: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3A2C60u;
    {
        const bool branch_taken_0x3a2c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C60u;
        // 0x3a2c64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c60) {
            ctx->pc = 0x3A2C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2c10;
        }
    }
    ctx->pc = 0x3A2C68u;
    // 0x3a2c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c6c: 0x0  nop
    ctx->pc = 0x3a2c6cu;
    // NOP
label_3a2c70:
    // 0x3a2c70: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2C78u;
}
