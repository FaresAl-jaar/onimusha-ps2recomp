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

// Function: sub_00397B20
// Address: 0x397b20 - 0x397ba8
void sub_00397B20_0x397b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397B20_0x397b20");
#endif

    switch (ctx->pc) {
        case 0x397b34u: goto label_397b34;
        case 0x397b74u: goto label_397b74;
        case 0x397b90u: goto label_397b90;
        default: break;
    }

    ctx->pc = 0x397b20u;

    // 0x397b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x397b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x397b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x397b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x397b2c: 0xc0e5d4c  jal         func_397530
    ctx->pc = 0x397B2Cu;
    SET_GPR_U32(ctx, 31, 0x397B34u);
    ctx->pc = 0x397B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397B2Cu;
    // 0x397b30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397530u, 0x397B2Cu, 0x397B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397B34u;
label_397b34:
    // 0x397b34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x397B34u;
    {
        const bool branch_taken_0x397b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397b34) {
            ctx->pc = 0x397B48u;
            goto label_397b48;
        }
    }
    ctx->pc = 0x397B3Cu;
    // 0x397b3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x397B3Cu;
    {
        const bool branch_taken_0x397b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B3Cu;
        // 0x397b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b3c) {
            ctx->pc = 0x397B98u;
            goto label_397b98;
        }
    }
    ctx->pc = 0x397B44u;
    // 0x397b44: 0x0  nop
    ctx->pc = 0x397b44u;
    // NOP
label_397b48:
    // 0x397b48: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x397b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x397b4c: 0x9022e022  lbu         $v0, -0x1FDE($at)
    ctx->pc = 0x397b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE022u));
    // 0x397b50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x397B50u;
    {
        const bool branch_taken_0x397b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B50u;
        // 0x397b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b50) {
            ctx->pc = 0x397B60u;
            goto label_397b60;
        }
    }
    ctx->pc = 0x397B58u;
    // 0x397b58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x397B58u;
    {
        const bool branch_taken_0x397b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397b58) {
            ctx->pc = 0x397B98u;
            goto label_397b98;
        }
    }
    ctx->pc = 0x397B60u;
label_397b60:
    // 0x397b60: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x397b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x397b64: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x397b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x397b68: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x397b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x397b6c: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x397B6Cu;
    SET_GPR_U32(ctx, 31, 0x397B74u);
    ctx->pc = 0x397B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397B6Cu;
    // 0x397b70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x397B6Cu, 0x397B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397B74u;
label_397b74:
    // 0x397b74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x397b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b78: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x397b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x397b7c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x397b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x397b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b84: 0x34450004  ori         $a1, $v0, 0x4
    ctx->pc = 0x397b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x397b88: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x397B88u;
    SET_GPR_U32(ctx, 31, 0x397B90u);
    ctx->pc = 0x397B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397B88u;
    // 0x397b8c: 0xa020e022  sb          $zero, -0x1FDE($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959138), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x397B88u, 0x397B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397B90u;
label_397b90:
    // 0x397b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397b94: 0x0  nop
    ctx->pc = 0x397b94u;
    // NOP
label_397b98:
    // 0x397b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x397BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BA0u;
        // 0x397ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397BA8u;
}
