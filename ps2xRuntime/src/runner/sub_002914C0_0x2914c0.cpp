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

// Function: sub_002914C0
// Address: 0x2914c0 - 0x291508
void sub_002914C0_0x2914c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002914C0_0x2914c0");
#endif

    ctx->pc = 0x2914c0u;

    // 0x2914c0: 0x94842acc  lhu         $a0, 0x2ACC($a0)
    ctx->pc = 0x2914c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10956)));
    // 0x2914c4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x2914c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x2914c8: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x2914c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x2914cc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2914ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2914d0: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x2914d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2914d4: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x2914d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2914d8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2914d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2914dc: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x2914dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2914e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2914e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2914e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2914e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2914e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2914ec: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2914ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2914f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2914F0u;
    {
        const bool branch_taken_0x2914f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2914F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914F0u;
        // 0x2914f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914f0) {
            ctx->pc = 0x291500u;
            goto label_291500;
        }
    }
    ctx->pc = 0x2914F8u;
    // 0x2914f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2914f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2914fc: 0x0  nop
    ctx->pc = 0x2914fcu;
    // NOP
label_291500:
    // 0x291500: 0x3e00008  jr          $ra
    ctx->pc = 0x291500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291508u;
}
