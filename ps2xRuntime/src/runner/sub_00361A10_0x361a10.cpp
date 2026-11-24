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

// Function: sub_00361A10
// Address: 0x361a10 - 0x361a94
void sub_00361A10_0x361a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361A10_0x361a10");
#endif

    switch (ctx->pc) {
        case 0x361a34u: goto label_361a34;
        default: break;
    }

    ctx->pc = 0x361a10u;

    // 0x361a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x361a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x361a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x361a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x361a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361a20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x361a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a24: 0x9482065a  lhu         $v0, 0x65A($a0)
    ctx->pc = 0x361a24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1626)));
    // 0x361a28: 0x408026  xor         $s0, $v0, $zero
    ctx->pc = 0x361a28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x361a2c: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x361A2Cu;
    SET_GPR_U32(ctx, 31, 0x361A34u);
    ctx->pc = 0x361A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A2Cu;
    // 0x361a30: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x361A2Cu, 0x361A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A34u;
label_361a34:
    // 0x361a34: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x361a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x361a38: 0x24040094  addiu       $a0, $zero, 0x94
    ctx->pc = 0x361a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x361a3c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361A3Cu;
    {
        const bool branch_taken_0x361a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x361a3c) {
            ctx->pc = 0x361A50u;
            goto label_361a50;
        }
    }
    ctx->pc = 0x361A44u;
    // 0x361a44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x361A44u;
    {
        const bool branch_taken_0x361a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a44) {
            ctx->pc = 0x361A80u;
            goto label_361a80;
        }
    }
    ctx->pc = 0x361A4Cu;
    // 0x361a4c: 0x0  nop
    ctx->pc = 0x361a4cu;
    // NOP
label_361a50:
    // 0x361a50: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x361A50u;
    {
        const bool branch_taken_0x361a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a50) {
            ctx->pc = 0x361A78u;
            goto label_361a78;
        }
    }
    ctx->pc = 0x361A58u;
    // 0x361a58: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x361a58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x361a5c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x361a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x361a60: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x361a60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x361a64: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x361a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x361a68: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x361a68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x361a6c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x361a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x361a70: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x361a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x361a74: 0x0  nop
    ctx->pc = 0x361a74u;
    // NOP
label_361a78:
    // 0x361a78: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x361A78u;
    {
        const bool branch_taken_0x361a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a78) {
            ctx->pc = 0x361A80u;
            goto label_361a80;
        }
    }
    ctx->pc = 0x361A80u;
label_361a80:
    // 0x361a80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x361a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x361A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A8Cu;
        // 0x361a90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361A94u;
}
