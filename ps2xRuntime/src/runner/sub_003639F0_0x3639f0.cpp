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

// Function: sub_003639F0
// Address: 0x3639f0 - 0x363a54
void sub_003639F0_0x3639f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003639F0_0x3639f0");
#endif

    switch (ctx->pc) {
        case 0x363a08u: goto label_363a08;
        case 0x363a28u: goto label_363a28;
        default: break;
    }

    ctx->pc = 0x3639f0u;

    // 0x3639f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3639f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3639f4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3639f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3639f8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3639f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3639fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3639fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363a00: 0x24a5ff00  addiu       $a1, $a1, -0x100
    ctx->pc = 0x363a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967040));
    // 0x363a04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x363a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363a08:
    // 0x363a08: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x363a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x363a0c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x363A0Cu;
    {
        const bool branch_taken_0x363a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x363a0c) {
            ctx->pc = 0x363A30u;
            goto label_363a30;
        }
    }
    ctx->pc = 0x363A14u;
    // 0x363a14: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x363a14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x363a18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363A18u;
    {
        const bool branch_taken_0x363a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x363A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A18u;
        // 0x363a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363a18) {
            ctx->pc = 0x363A28u;
            goto label_363a28;
        }
    }
    ctx->pc = 0x363A20u;
    // 0x363a20: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x363A20u;
    SET_GPR_U32(ctx, 31, 0x363A28u);
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x363A20u, 0x363A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A28u;
label_363a28:
    // 0x363a28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x363A28u;
    {
        const bool branch_taken_0x363a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363a28) {
            ctx->pc = 0x363A48u;
            goto label_363a48;
        }
    }
    ctx->pc = 0x363A30u;
label_363a30:
    // 0x363a30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x363a34: 0x2882010e  slti        $v0, $a0, 0x10E
    ctx->pc = 0x363a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x363a38: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x363A38u;
    {
        const bool branch_taken_0x363a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A38u;
        // 0x363a3c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363a38) {
            ctx->pc = 0x363A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363a08;
        }
    }
    ctx->pc = 0x363A40u;
    // 0x363a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a44: 0x0  nop
    ctx->pc = 0x363a44u;
    // NOP
label_363a48:
    // 0x363a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x363A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A4Cu;
        // 0x363a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363A54u;
}
