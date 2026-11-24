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

// Function: sub_00381D60
// Address: 0x381d60 - 0x381de0
void sub_00381D60_0x381d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381D60_0x381d60");
#endif

    switch (ctx->pc) {
        case 0x381dccu: goto label_381dcc;
        default: break;
    }

    ctx->pc = 0x381d60u;

    // 0x381d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x381d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x381d68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x381d6c: 0x90832b2c  lbu         $v1, 0x2B2C($a0)
    ctx->pc = 0x381d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11052)));
    // 0x381d70: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x381D70u;
    {
        const bool branch_taken_0x381d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x381D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D70u;
        // 0x381d74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381d70) {
            ctx->pc = 0x381DD0u;
            goto label_381dd0;
        }
    }
    ctx->pc = 0x381D78u;
    // 0x381d78: 0x86042b28  lh          $a0, 0x2B28($s0)
    ctx->pc = 0x381d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x381d7c: 0x86032b2a  lh          $v1, 0x2B2A($s0)
    ctx->pc = 0x381d7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11050)));
    // 0x381d80: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x381d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x381d84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x381D84u;
    {
        const bool branch_taken_0x381d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x381D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D84u;
        // 0x381d88: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381d84) {
            ctx->pc = 0x381D98u;
            goto label_381d98;
        }
    }
    ctx->pc = 0x381D8Cu;
    // 0x381d8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x381D8Cu;
    {
        const bool branch_taken_0x381d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D8Cu;
        // 0x381d90: 0xa6032b28  sh          $v1, 0x2B28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381d8c) {
            ctx->pc = 0x381DD0u;
            goto label_381dd0;
        }
    }
    ctx->pc = 0x381D94u;
    // 0x381d94: 0x0  nop
    ctx->pc = 0x381d94u;
    // NOP
label_381d98:
    // 0x381d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x381d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x381d9c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x381d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x381da0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x381da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x381da4: 0x8e062b18  lw          $a2, 0x2B18($s0)
    ctx->pc = 0x381da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11032)));
    // 0x381da8: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x381da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x381dac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x381dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x381db0: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x381db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x381db4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x381db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x381db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x381db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381dbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x381dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381dc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x381dc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381dc4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x381DC4u;
    SET_GPR_U32(ctx, 31, 0x381DCCu);
    ctx->pc = 0x381DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381DC4u;
    // 0x381dc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x381DC4u, 0x381DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381DCCu;
label_381dcc:
    // 0x381dcc: 0xa6002b28  sh          $zero, 0x2B28($s0)
    ctx->pc = 0x381dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 0));
label_381dd0:
    // 0x381dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x381dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381dd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x381DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DD8u;
        // 0x381ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381DE0u;
}
