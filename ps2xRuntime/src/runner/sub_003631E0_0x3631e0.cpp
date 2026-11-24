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

// Function: sub_003631E0
// Address: 0x3631e0 - 0x363248
void sub_003631E0_0x3631e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003631E0_0x3631e0");
#endif

    switch (ctx->pc) {
        case 0x3631f8u: goto label_3631f8;
        default: break;
    }

    ctx->pc = 0x3631e0u;

    // 0x3631e0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3631e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3631e4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3631e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3631e8: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x3631e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3631ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3631ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3631f0: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x3631f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x3631f4: 0x0  nop
    ctx->pc = 0x3631f4u;
    // NOP
label_3631f8:
    // 0x3631f8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3631f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3631fc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3631FCu;
    {
        const bool branch_taken_0x3631fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3631fc) {
            ctx->pc = 0x363228u;
            goto label_363228;
        }
    }
    ctx->pc = 0x363204u;
    // 0x363204: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x363204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x363208: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x363208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36320c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x36320cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x363210: 0x2442ff02  addiu       $v0, $v0, -0xFE
    ctx->pc = 0x363210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967042));
    // 0x363214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x363214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x363218: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x363218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36321c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363220: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x363220u;
    {
        const bool branch_taken_0x363220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363220u;
        // 0x363224: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363220) {
            ctx->pc = 0x363240u;
            goto label_363240;
        }
    }
    ctx->pc = 0x363228u;
label_363228:
    // 0x363228: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x363228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36322c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x36322cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x363230: 0x28a2010e  slti        $v0, $a1, 0x10E
    ctx->pc = 0x363230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x363234: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x363234u;
    {
        const bool branch_taken_0x363234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363234u;
        // 0x363238: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363234) {
            ctx->pc = 0x3631F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3631f8;
        }
    }
    ctx->pc = 0x36323Cu;
    // 0x36323c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363240:
    // 0x363240: 0x3e00008  jr          $ra
    ctx->pc = 0x363240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363248u;
}
