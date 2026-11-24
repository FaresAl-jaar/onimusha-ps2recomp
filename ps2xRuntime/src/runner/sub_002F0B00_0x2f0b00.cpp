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

// Function: sub_002F0B00
// Address: 0x2f0b00 - 0x2f0b70
void sub_002F0B00_0x2f0b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0B00_0x2f0b00");
#endif

    switch (ctx->pc) {
        case 0x2f0b34u: goto label_2f0b34;
        case 0x2f0b3cu: goto label_2f0b3c;
        default: break;
    }

    ctx->pc = 0x2f0b00u;

    // 0x2f0b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0b10: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F0B10u;
    {
        const bool branch_taken_0x2f0b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B10u;
        // 0x2f0b14: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b10) {
            ctx->pc = 0x2F0B60u;
            goto label_2f0b60;
        }
    }
    ctx->pc = 0x2F0B18u;
    // 0x2f0b18: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f0b1c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2f0b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2f0b20: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x2f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x2f0b24: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2f0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2f0b28: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x2f0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x2f0b2c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x2F0B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F0B34u);
    ctx->pc = 0x2F0B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B2Cu;
    // 0x2f0b30: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x2F0B2Cu, 0x2F0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B34u;
label_2f0b34:
    // 0x2f0b34: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2F0B34u;
    SET_GPR_U32(ctx, 31, 0x2F0B3Cu);
    ctx->pc = 0x2F0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B34u;
    // 0x2f0b38: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2F0B34u, 0x2F0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B3Cu;
label_2f0b3c:
    // 0x2f0b3c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f0b40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f0b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f0b44: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x2f0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x2f0b48: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2f0b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2f0b4c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f0b50: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2f0b50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f0b54: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x2f0b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x2f0b58: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2f0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2f0b5c: 0x0  nop
    ctx->pc = 0x2f0b5cu;
    // NOP
label_2f0b60:
    // 0x2f0b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B68u;
        // 0x2f0b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0B70u;
}
