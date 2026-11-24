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

// Function: sub_00215CB8
// Address: 0x215cb8 - 0x215e1c
void sub_00215CB8_0x215cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215CB8_0x215cb8");
#endif

    switch (ctx->pc) {
        case 0x215d08u: goto label_215d08;
        case 0x215d20u: goto label_215d20;
        case 0x215d70u: goto label_215d70;
        case 0x215d88u: goto label_215d88;
        case 0x215d98u: goto label_215d98;
        case 0x215da0u: goto label_215da0;
        case 0x215dd8u: goto label_215dd8;
        case 0x215decu: goto label_215dec;
        default: break;
    }

    ctx->pc = 0x215cb8u;

    // 0x215cb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x215cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x215cbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x215cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215cc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cc4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x215cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x215cc8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x215cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x215ccc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x215cccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x215cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x215cd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x215cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x215cd8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x215cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x215cdc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x215cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x215ce0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x215ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x215ce4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x215ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x215ce8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x215cec: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x215CECu;
    {
        const bool branch_taken_0x215cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CECu;
        // 0x215cf0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cec) {
            ctx->pc = 0x215DC0u;
            goto label_215dc0;
        }
    }
    ctx->pc = 0x215CF4u;
    // 0x215cf4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x215cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x215cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cfc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x215cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d00: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x215D00u;
    SET_GPR_U32(ctx, 31, 0x215D08u);
    ctx->pc = 0x215D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D00u;
    // 0x215d04: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9F0u, 0x215D00u, 0x215D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D08u;
label_215d08:
    // 0x215d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d0c: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x215D0Cu;
    {
        const bool branch_taken_0x215d0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d0c) {
            ctx->pc = 0x215D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215D0Cu;
            // 0x215d10: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D38u;
            goto label_215d38;
        }
    }
    ctx->pc = 0x215D14u;
    // 0x215d14: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x215D14u;
    {
        const bool branch_taken_0x215d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d14) {
            ctx->pc = 0x215DE4u;
            goto label_215de4;
        }
    }
    ctx->pc = 0x215D1Cu;
    // 0x215d1c: 0x0  nop
    ctx->pc = 0x215d1cu;
    // NOP
label_215d20:
    // 0x215d20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x215d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215d24: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x215d24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x215d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215d2c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x215d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x215d30: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x215D30u;
    {
        const bool branch_taken_0x215d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D30u;
        // 0x215d34: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d30) {
            ctx->pc = 0x215DF4u;
            goto label_215df4;
        }
    }
    ctx->pc = 0x215D38u;
label_215d38:
    // 0x215d38: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x215d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215d3c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x215d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x215d40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x215d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x215d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215d48: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x215d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d4c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x215d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x215d50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x215d50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d54: 0xe2980a  movz        $s3, $a3, $v0
    ctx->pc = 0x215d54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
    // 0x215d58: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x215d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x215d5c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x215d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x215d60: 0xe2800a  movz        $s0, $a3, $v0
    ctx->pc = 0x215d60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x215d64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x215d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d68: 0xc049522  jal         func_125488
    ctx->pc = 0x215D68u;
    SET_GPR_U32(ctx, 31, 0x215D70u);
    ctx->pc = 0x215D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D68u;
    // 0x215d6c: 0xb32823  subu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x215D68u, 0x215D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D70u;
label_215d70:
    // 0x215d70: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x215d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215d74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d78: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x215d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x215d7c: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x215d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x215d80: 0xc049522  jal         func_125488
    ctx->pc = 0x215D80u;
    SET_GPR_U32(ctx, 31, 0x215D88u);
    ctx->pc = 0x215D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D80u;
    // 0x215d84: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x215D80u, 0x215D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D88u;
label_215d88:
    // 0x215d88: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x215d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x215d8c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x215D8Cu;
    {
        const bool branch_taken_0x215d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d8c) {
            ctx->pc = 0x215D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215D8Cu;
            // 0x215d90: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215DC4u;
            goto label_215dc4;
        }
    }
    ctx->pc = 0x215D94u;
    // 0x215d94: 0x0  nop
    ctx->pc = 0x215d94u;
    // NOP
label_215d98:
    // 0x215d98: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x215D98u;
    SET_GPR_U32(ctx, 31, 0x215DA0u);
    ctx->pc = 0x215D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D98u;
    // 0x215d9c: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x215D98u, 0x215DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DA0u;
label_215da0:
    // 0x215da0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x215da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215da4: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x215da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x215da8: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x215DA8u;
    {
        const bool branch_taken_0x215da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215da8) {
            ctx->pc = 0x215DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215DA8u;
            // 0x215dac: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215d20;
        }
    }
    ctx->pc = 0x215DB0u;
    // 0x215db0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x215db0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x215db4: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x215db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x215db8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x215DB8u;
    {
        const bool branch_taken_0x215db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215db8) {
            ctx->pc = 0x215D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215d98;
        }
    }
    ctx->pc = 0x215DC0u;
label_215dc0:
    // 0x215dc0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x215dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_215dc4:
    // 0x215dc4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x215dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215dc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x215dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215dcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x215dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215dd0: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x215DD0u;
    SET_GPR_U32(ctx, 31, 0x215DD8u);
    ctx->pc = 0x215DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DD0u;
    // 0x215dd4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9F0u, 0x215DD0u, 0x215DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DD8u;
label_215dd8:
    // 0x215dd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ddc: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x215DDCu;
    {
        const bool branch_taken_0x215ddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ddc) {
            ctx->pc = 0x215DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215DDCu;
            // 0x215de0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215DF8u;
            goto label_215df8;
        }
    }
    ctx->pc = 0x215DE4u;
label_215de4:
    // 0x215de4: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x215DE4u;
    SET_GPR_U32(ctx, 31, 0x215DECu);
    ctx->pc = 0x215DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DE4u;
    // 0x215de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x215DE4u, 0x215DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DECu;
label_215dec:
    // 0x215dec: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x215decu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x215df0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x215df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215df4:
    // 0x215df4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x215df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215df8:
    // 0x215df8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x215df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215dfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x215dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215e00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x215e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215e04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x215e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215e08: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x215e08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x215e0c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x215e0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215e10: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x215e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x215e14: 0x3e00008  jr          $ra
    ctx->pc = 0x215E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E14u;
        // 0x215e18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215E1Cu;
}
