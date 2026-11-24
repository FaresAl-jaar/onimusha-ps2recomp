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

// Function: sub_00398CF0
// Address: 0x398cf0 - 0x398d9c
void sub_00398CF0_0x398cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398CF0_0x398cf0");
#endif

    switch (ctx->pc) {
        case 0x398d24u: goto label_398d24;
        case 0x398d90u: goto label_398d90;
        default: break;
    }

    ctx->pc = 0x398cf0u;

    // 0x398cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398cf8: 0x8c8401a8  lw          $a0, 0x1A8($a0)
    ctx->pc = 0x398cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x398cfc: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x398CFCu;
    {
        const bool branch_taken_0x398cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x398cfc) {
            ctx->pc = 0x398D90u;
            goto label_398d90;
        }
    }
    ctx->pc = 0x398D04u;
    // 0x398d04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x398d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x398d08: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x398D08u;
    {
        const bool branch_taken_0x398d08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x398d08) {
            ctx->pc = 0x398D30u;
            goto label_398d30;
        }
    }
    ctx->pc = 0x398D10u;
    // 0x398d10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x398d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d18: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398d1c: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x398D1Cu;
    SET_GPR_U32(ctx, 31, 0x398D24u);
    ctx->pc = 0x398D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D1Cu;
    // 0x398d20: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x398D1Cu, 0x398D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D24u;
label_398d24:
    // 0x398d24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x398D24u;
    {
        const bool branch_taken_0x398d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398d24) {
            ctx->pc = 0x398D90u;
            goto label_398d90;
        }
    }
    ctx->pc = 0x398D2Cu;
    // 0x398d2c: 0x0  nop
    ctx->pc = 0x398d2cu;
    // NOP
label_398d30:
    // 0x398d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398d34: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x398D34u;
    {
        const bool branch_taken_0x398d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x398D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D34u;
        // 0x398d38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d34) {
            ctx->pc = 0x398D48u;
            goto label_398d48;
        }
    }
    ctx->pc = 0x398D3Cu;
    // 0x398d3c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x398D3Cu;
    {
        const bool branch_taken_0x398d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x398d3c) {
            ctx->pc = 0x398D60u;
            goto label_398d60;
        }
    }
    ctx->pc = 0x398D44u;
    // 0x398d44: 0x0  nop
    ctx->pc = 0x398d44u;
    // NOP
label_398d48:
    // 0x398d48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x398d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x398d4c: 0x8c22ceb0  lw          $v0, -0x3150($at)
    ctx->pc = 0x398d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB0u));
    // 0x398d50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x398d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x398d54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x398D54u;
    {
        const bool branch_taken_0x398d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398d54) {
            ctx->pc = 0x398D60u;
            goto label_398d60;
        }
    }
    ctx->pc = 0x398D5Cu;
    // 0x398d5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x398d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_398d60:
    // 0x398d60: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x398d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x398d64: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x398d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x398d68: 0x2442c810  addiu       $v0, $v0, -0x37F0
    ctx->pc = 0x398d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952976));
    // 0x398d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x398d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x398d70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x398d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d74: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x398d74u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x398d78: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398d7c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x398d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x398d80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x398d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d88: 0xc0cea1c  jal         func_33A870
    ctx->pc = 0x398D88u;
    SET_GPR_U32(ctx, 31, 0x398D90u);
    ctx->pc = 0x398D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D88u;
    // 0x398d8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A870u, 0x398D88u, 0x398D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D90u;
label_398d90:
    // 0x398d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398d94: 0x3e00008  jr          $ra
    ctx->pc = 0x398D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D94u;
        // 0x398d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398D9Cu;
}
