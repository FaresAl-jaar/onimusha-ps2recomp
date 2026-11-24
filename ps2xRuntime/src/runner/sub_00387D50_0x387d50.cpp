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

// Function: sub_00387D50
// Address: 0x387d50 - 0x387dc0
void sub_00387D50_0x387d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387D50_0x387d50");
#endif

    switch (ctx->pc) {
        case 0x387d84u: goto label_387d84;
        case 0x387d8cu: goto label_387d8c;
        default: break;
    }

    ctx->pc = 0x387d50u;

    // 0x387d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x387d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x387d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x387d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x387d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x387d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d60: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x387D60u;
    {
        const bool branch_taken_0x387d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D60u;
        // 0x387d64: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d60) {
            ctx->pc = 0x387DB0u;
            goto label_387db0;
        }
    }
    ctx->pc = 0x387D68u;
    // 0x387d68: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x387d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x387d6c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x387d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x387d70: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x387d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x387d74: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x387d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x387d78: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x387d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x387d7c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x387D7Cu;
    SET_GPR_U32(ctx, 31, 0x387D84u);
    ctx->pc = 0x387D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D7Cu;
    // 0x387d80: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x387D7Cu, 0x387D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D84u;
label_387d84:
    // 0x387d84: 0xc09d694  jal         func_275A50
    ctx->pc = 0x387D84u;
    SET_GPR_U32(ctx, 31, 0x387D8Cu);
    ctx->pc = 0x387D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D84u;
    // 0x387d88: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x387D84u, 0x387D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D8Cu;
label_387d8c:
    // 0x387d8c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x387d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x387d90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x387d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x387d94: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x387d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x387d98: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x387d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x387d9c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x387d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x387da0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x387da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x387da4: 0x24639af0  addiu       $v1, $v1, -0x6510
    ctx->pc = 0x387da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941424));
    // 0x387da8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x387da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x387dac: 0x0  nop
    ctx->pc = 0x387dacu;
    // NOP
label_387db0:
    // 0x387db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x387db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387db8: 0x3e00008  jr          $ra
    ctx->pc = 0x387DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DB8u;
        // 0x387dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387DC0u;
}
