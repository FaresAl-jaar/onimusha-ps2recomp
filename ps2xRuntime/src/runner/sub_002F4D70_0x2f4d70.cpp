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

// Function: sub_002F4D70
// Address: 0x2f4d70 - 0x2f4e3c
void sub_002F4D70_0x2f4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4D70_0x2f4d70");
#endif

    switch (ctx->pc) {
        case 0x2f4d9cu: goto label_2f4d9c;
        case 0x2f4dc4u: goto label_2f4dc4;
        case 0x2f4e10u: goto label_2f4e10;
        case 0x2f4e1cu: goto label_2f4e1c;
        default: break;
    }

    ctx->pc = 0x2f4d70u;

    // 0x2f4d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f4d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f4d74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f4d78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f4d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f4d80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f4d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4d88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f4d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4d90: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f4d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d94: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x2F4D94u;
    SET_GPR_U32(ctx, 31, 0x2F4D9Cu);
    ctx->pc = 0x2F4D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D94u;
    // 0x2f4d98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x2F4D94u, 0x2F4D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D9Cu;
label_2f4d9c:
    // 0x2f4d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4DA0u;
    {
        const bool branch_taken_0x2f4da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4da0) {
            ctx->pc = 0x2F4DB0u;
            goto label_2f4db0;
        }
    }
    ctx->pc = 0x2F4DA8u;
    // 0x2f4da8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F4DA8u;
    {
        const bool branch_taken_0x2f4da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DA8u;
        // 0x2f4dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4da8) {
            ctx->pc = 0x2F4E20u;
            goto label_2f4e20;
        }
    }
    ctx->pc = 0x2F4DB0u;
label_2f4db0:
    // 0x2f4db0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f4db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4db4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f4db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4dbc: 0xc0bd3e4  jal         func_2F4F90
    ctx->pc = 0x2F4DBCu;
    SET_GPR_U32(ctx, 31, 0x2F4DC4u);
    ctx->pc = 0x2F4DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DBCu;
    // 0x2f4dc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4F90u, 0x2F4DBCu, 0x2F4DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DC4u;
label_2f4dc4:
    // 0x2f4dc4: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x2f4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2f4dc8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f4dcc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2f4dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2f4dd0: 0x24429106  addiu       $v0, $v0, -0x6EFA
    ctx->pc = 0x2f4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938886));
    // 0x2f4dd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4ddc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4de0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2f4de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2f4de4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4DE4u;
    {
        const bool branch_taken_0x2f4de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DE4u;
        // 0x2f4de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4de4) {
            ctx->pc = 0x2F4E10u;
            goto label_2f4e10;
        }
    }
    ctx->pc = 0x2F4DECu;
    // 0x2f4dec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f4decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f4df0: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f4df4: 0xa2020014  sb          $v0, 0x14($s0)
    ctx->pc = 0x2f4df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f4df8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f4df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f4dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f4e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e08: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x2F4E08u;
    SET_GPR_U32(ctx, 31, 0x2F4E10u);
    ctx->pc = 0x2F4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E08u;
    // 0x2f4e0c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x2F4E08u, 0x2F4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E10u;
label_2f4e10:
    // 0x2f4e10: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2f4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2f4e14: 0xc0ceaf0  jal         func_33ABC0
    ctx->pc = 0x2F4E14u;
    SET_GPR_U32(ctx, 31, 0x2F4E1Cu);
    ctx->pc = 0x2F4E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E14u;
    // 0x2f4e18: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABC0u, 0x2F4E14u, 0x2F4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E1Cu;
label_2f4e1c:
    // 0x2f4e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4e20:
    // 0x2f4e20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f4e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4e24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f4e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f4e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E34u;
        // 0x2f4e38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4E3Cu;
}
