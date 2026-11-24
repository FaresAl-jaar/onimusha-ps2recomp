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

// Function: sub_002E6AF0
// Address: 0x2e6af0 - 0x2e6b60
void sub_002E6AF0_0x2e6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6AF0_0x2e6af0");
#endif

    switch (ctx->pc) {
        case 0x2e6b24u: goto label_2e6b24;
        case 0x2e6b2cu: goto label_2e6b2c;
        default: break;
    }

    ctx->pc = 0x2e6af0u;

    // 0x2e6af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e6af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b00: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E6B00u;
    {
        const bool branch_taken_0x2e6b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B00u;
        // 0x2e6b04: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b00) {
            ctx->pc = 0x2E6B50u;
            goto label_2e6b50;
        }
    }
    ctx->pc = 0x2E6B08u;
    // 0x2e6b08: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e6b0c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2e6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2e6b10: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x2e6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x2e6b14: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2e6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2e6b18: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x2e6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x2e6b1c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x2E6B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E6B24u);
    ctx->pc = 0x2E6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B1Cu;
    // 0x2e6b20: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x2E6B1Cu, 0x2E6B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B24u;
label_2e6b24:
    // 0x2e6b24: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2E6B24u;
    SET_GPR_U32(ctx, 31, 0x2E6B2Cu);
    ctx->pc = 0x2E6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B24u;
    // 0x2e6b28: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2E6B24u, 0x2E6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B2Cu;
label_2e6b2c:
    // 0x2e6b2c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2e6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2e6b30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e6b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e6b34: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x2e6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x2e6b38: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2e6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2e6b3c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2e6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2e6b40: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2e6b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6b44: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x2e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x2e6b48: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2e6b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2e6b4c: 0x0  nop
    ctx->pc = 0x2e6b4cu;
    // NOP
label_2e6b50:
    // 0x2e6b50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e6b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6b58: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B58u;
        // 0x2e6b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6B60u;
}
