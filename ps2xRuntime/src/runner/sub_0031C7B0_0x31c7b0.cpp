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

// Function: sub_0031C7B0
// Address: 0x31c7b0 - 0x31c7f8
void sub_0031C7B0_0x31c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C7B0_0x31c7b0");
#endif

    ctx->pc = 0x31c7b0u;

    // 0x31c7b0: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x31c7b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x31c7b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c7b8: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x31c7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x31c7bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31c7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c7c0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x31c7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x31c7c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31c7c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x31c7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31c7cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C7CCu;
    {
        const bool branch_taken_0x31c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c7cc) {
            ctx->pc = 0x31C7E0u;
            goto label_31c7e0;
        }
    }
    ctx->pc = 0x31C7D4u;
    // 0x31c7d4: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x31c7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x31c7d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31C7D8u;
    {
        const bool branch_taken_0x31c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7D8u;
        // 0x31c7dc: 0x24a20004  addiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7d8) {
            ctx->pc = 0x31C7F0u;
            goto label_31c7f0;
        }
    }
    ctx->pc = 0x31C7E0u;
label_31c7e0:
    // 0x31c7e0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x31c7e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31c7e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31c7e8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x31c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31c7ec: 0x0  nop
    ctx->pc = 0x31c7ecu;
    // NOP
label_31c7f0:
    // 0x31c7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31C7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C7F8u;
}
