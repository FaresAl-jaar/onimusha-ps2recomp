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

// Function: sub_002D3C20
// Address: 0x2d3c20 - 0x2d3cb8
void sub_002D3C20_0x2d3c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3C20_0x2d3c20");
#endif

    ctx->pc = 0x2d3c20u;

    // 0x2d3c20: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D3C20u;
    {
        const bool branch_taken_0x2d3c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c20) {
            ctx->pc = 0x2D3CA8u;
            goto label_2d3ca8;
        }
    }
    ctx->pc = 0x2D3C28u;
    // 0x2d3c28: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x2d3c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x2d3c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3c30: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D3C30u;
    {
        const bool branch_taken_0x2d3c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d3c30) {
            ctx->pc = 0x2D3CA8u;
            goto label_2d3ca8;
        }
    }
    ctx->pc = 0x2D3C38u;
    // 0x2d3c38: 0x90850641  lbu         $a1, 0x641($a0)
    ctx->pc = 0x2d3c38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x2d3c3c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x2d3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x2d3c40: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x2d3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
    // 0x2d3c44: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2d3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2d3c48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d3c4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2d3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d3c50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d3c54: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2d3c54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3c58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d3c5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d3c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3c60: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x2d3c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d3c64: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D3C64u;
    {
        const bool branch_taken_0x2d3c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C64u;
        // 0x2d3c68: 0x286100f6  slti        $at, $v1, 0xF6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)246) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c64) {
            ctx->pc = 0x2D3CA0u;
            goto label_2d3ca0;
        }
    }
    ctx->pc = 0x2D3C6Cu;
    // 0x2d3c6c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3C6Cu;
    {
        const bool branch_taken_0x2d3c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C6Cu;
        // 0x2d3c70: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c6c) {
            ctx->pc = 0x2D3CA0u;
            goto label_2d3ca0;
        }
    }
    ctx->pc = 0x2D3C74u;
    // 0x2d3c74: 0x24425f10  addiu       $v0, $v0, 0x5F10
    ctx->pc = 0x2d3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
    // 0x2d3c78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d3c7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3c80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d3c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d3c84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3C84u;
    {
        const bool branch_taken_0x2d3c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c84) {
            ctx->pc = 0x2D3CA0u;
            goto label_2d3ca0;
        }
    }
    ctx->pc = 0x2D3C8Cu;
    // 0x2d3c8c: 0xdc820510  ld          $v0, 0x510($a0)
    ctx->pc = 0x2d3c8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1296)));
    // 0x2d3c90: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2d3c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2d3c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3C94u;
    {
        const bool branch_taken_0x2d3c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c94) {
            ctx->pc = 0x2D3CA8u;
            goto label_2d3ca8;
        }
    }
    ctx->pc = 0x2D3C9Cu;
    // 0x2d3c9c: 0x0  nop
    ctx->pc = 0x2d3c9cu;
    // NOP
label_2d3ca0:
    // 0x2d3ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3CA0u;
    {
        const bool branch_taken_0x2d3ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CA0u;
        // 0x2d3ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ca0) {
            ctx->pc = 0x2D3CB0u;
            goto label_2d3cb0;
        }
    }
    ctx->pc = 0x2D3CA8u;
label_2d3ca8:
    // 0x2d3ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cac: 0x0  nop
    ctx->pc = 0x2d3cacu;
    // NOP
label_2d3cb0:
    // 0x2d3cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3CB8u;
}
