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

// Function: sub_003632B0
// Address: 0x3632b0 - 0x3632f8
void sub_003632B0_0x3632b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003632B0_0x3632b0");
#endif

    switch (ctx->pc) {
        case 0x3632c0u: goto label_3632c0;
        default: break;
    }

    ctx->pc = 0x3632b0u;

    // 0x3632b0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3632b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3632b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3632b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3632b8: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3632b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3632bc: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x3632bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
label_3632c0:
    // 0x3632c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3632c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3632c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3632C4u;
    {
        const bool branch_taken_0x3632c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3632C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3632C4u;
        // 0x3632c8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632c4) {
            ctx->pc = 0x3632D8u;
            goto label_3632d8;
        }
    }
    ctx->pc = 0x3632CCu;
    // 0x3632cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3632CCu;
    {
        const bool branch_taken_0x3632cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3632D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3632CCu;
        // 0x3632d0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632cc) {
            ctx->pc = 0x3632F0u;
            goto label_3632f0;
        }
    }
    ctx->pc = 0x3632D4u;
    // 0x3632d4: 0x0  nop
    ctx->pc = 0x3632d4u;
    // NOP
label_3632d8:
    // 0x3632d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3632d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3632dc: 0x28a2010e  slti        $v0, $a1, 0x10E
    ctx->pc = 0x3632dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x3632e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3632E0u;
    {
        const bool branch_taken_0x3632e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3632E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3632E0u;
        // 0x3632e4: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632e0) {
            ctx->pc = 0x3632C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3632c0;
        }
    }
    ctx->pc = 0x3632E8u;
    // 0x3632e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3632e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3632ec: 0x0  nop
    ctx->pc = 0x3632ecu;
    // NOP
label_3632f0:
    // 0x3632f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3632F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3632F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3632F8u;
}
