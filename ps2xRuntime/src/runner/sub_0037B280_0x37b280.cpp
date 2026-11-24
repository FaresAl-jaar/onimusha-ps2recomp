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

// Function: sub_0037B280
// Address: 0x37b280 - 0x37b2d8
void sub_0037B280_0x37b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B280_0x37b280");
#endif

    switch (ctx->pc) {
        case 0x37b298u: goto label_37b298;
        default: break;
    }

    ctx->pc = 0x37b280u;

    // 0x37b280: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x37b280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x37b284: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x37b284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x37b288: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x37b288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x37b28c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37b28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b290: 0x2484aeb0  addiu       $a0, $a0, -0x5150
    ctx->pc = 0x37b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946480));
    // 0x37b294: 0x0  nop
    ctx->pc = 0x37b294u;
    // NOP
label_37b298:
    // 0x37b298: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x37b298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37b29c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B29Cu;
    {
        const bool branch_taken_0x37b29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B29Cu;
        // 0x37b2a0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b29c) {
            ctx->pc = 0x37B2B8u;
            goto label_37b2b8;
        }
    }
    ctx->pc = 0x37B2A4u;
    // 0x37b2a4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x37b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x37b2a8: 0x2442aeb0  addiu       $v0, $v0, -0x5150
    ctx->pc = 0x37b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946480));
    // 0x37b2ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37B2ACu;
    {
        const bool branch_taken_0x37b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2ACu;
        // 0x37b2b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2ac) {
            ctx->pc = 0x37B2D0u;
            goto label_37b2d0;
        }
    }
    ctx->pc = 0x37B2B4u;
    // 0x37b2b4: 0x0  nop
    ctx->pc = 0x37b2b4u;
    // NOP
label_37b2b8:
    // 0x37b2b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x37b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x37b2bc: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x37b2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x37b2c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37B2C0u;
    {
        const bool branch_taken_0x37b2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2C0u;
        // 0x37b2c4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b2c0) {
            ctx->pc = 0x37B298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b298;
        }
    }
    ctx->pc = 0x37B2C8u;
    // 0x37b2c8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37b2cc: 0x2442aeb0  addiu       $v0, $v0, -0x5150
    ctx->pc = 0x37b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946480));
label_37b2d0:
    // 0x37b2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x37B2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B2D8u;
}
