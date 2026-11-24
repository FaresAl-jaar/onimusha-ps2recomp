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

// Function: sub_001E0CC0
// Address: 0x1e0cc0 - 0x1e0e08
void sub_001E0CC0_0x1e0cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0CC0_0x1e0cc0");
#endif

    switch (ctx->pc) {
        case 0x1e0cc0u: goto label_1e0cc0;
        case 0x1e0cc4u: goto label_1e0cc4;
        case 0x1e0cc8u: goto label_1e0cc8;
        case 0x1e0cccu: goto label_1e0ccc;
        case 0x1e0cd0u: goto label_1e0cd0;
        case 0x1e0cd4u: goto label_1e0cd4;
        case 0x1e0cd8u: goto label_1e0cd8;
        case 0x1e0cdcu: goto label_1e0cdc;
        case 0x1e0ce0u: goto label_1e0ce0;
        case 0x1e0ce4u: goto label_1e0ce4;
        case 0x1e0ce8u: goto label_1e0ce8;
        case 0x1e0cecu: goto label_1e0cec;
        case 0x1e0cf0u: goto label_1e0cf0;
        case 0x1e0cf4u: goto label_1e0cf4;
        case 0x1e0cf8u: goto label_1e0cf8;
        case 0x1e0cfcu: goto label_1e0cfc;
        case 0x1e0d00u: goto label_1e0d00;
        case 0x1e0d04u: goto label_1e0d04;
        case 0x1e0d08u: goto label_1e0d08;
        case 0x1e0d0cu: goto label_1e0d0c;
        case 0x1e0d10u: goto label_1e0d10;
        case 0x1e0d14u: goto label_1e0d14;
        case 0x1e0d18u: goto label_1e0d18;
        case 0x1e0d1cu: goto label_1e0d1c;
        case 0x1e0d20u: goto label_1e0d20;
        case 0x1e0d24u: goto label_1e0d24;
        case 0x1e0d28u: goto label_1e0d28;
        case 0x1e0d2cu: goto label_1e0d2c;
        case 0x1e0d30u: goto label_1e0d30;
        case 0x1e0d34u: goto label_1e0d34;
        case 0x1e0d38u: goto label_1e0d38;
        case 0x1e0d3cu: goto label_1e0d3c;
        case 0x1e0d40u: goto label_1e0d40;
        case 0x1e0d44u: goto label_1e0d44;
        case 0x1e0d48u: goto label_1e0d48;
        case 0x1e0d4cu: goto label_1e0d4c;
        case 0x1e0d50u: goto label_1e0d50;
        case 0x1e0d54u: goto label_1e0d54;
        case 0x1e0d58u: goto label_1e0d58;
        case 0x1e0d5cu: goto label_1e0d5c;
        case 0x1e0d60u: goto label_1e0d60;
        case 0x1e0d64u: goto label_1e0d64;
        case 0x1e0d68u: goto label_1e0d68;
        case 0x1e0d6cu: goto label_1e0d6c;
        case 0x1e0d70u: goto label_1e0d70;
        case 0x1e0d74u: goto label_1e0d74;
        case 0x1e0d78u: goto label_1e0d78;
        case 0x1e0d7cu: goto label_1e0d7c;
        case 0x1e0d80u: goto label_1e0d80;
        case 0x1e0d84u: goto label_1e0d84;
        case 0x1e0d88u: goto label_1e0d88;
        case 0x1e0d8cu: goto label_1e0d8c;
        case 0x1e0d90u: goto label_1e0d90;
        case 0x1e0d94u: goto label_1e0d94;
        case 0x1e0d98u: goto label_1e0d98;
        case 0x1e0d9cu: goto label_1e0d9c;
        case 0x1e0da0u: goto label_1e0da0;
        case 0x1e0da4u: goto label_1e0da4;
        case 0x1e0da8u: goto label_1e0da8;
        case 0x1e0dacu: goto label_1e0dac;
        case 0x1e0db0u: goto label_1e0db0;
        case 0x1e0db4u: goto label_1e0db4;
        case 0x1e0db8u: goto label_1e0db8;
        case 0x1e0dbcu: goto label_1e0dbc;
        case 0x1e0dc0u: goto label_1e0dc0;
        case 0x1e0dc4u: goto label_1e0dc4;
        case 0x1e0dc8u: goto label_1e0dc8;
        case 0x1e0dccu: goto label_1e0dcc;
        case 0x1e0dd0u: goto label_1e0dd0;
        case 0x1e0dd4u: goto label_1e0dd4;
        case 0x1e0dd8u: goto label_1e0dd8;
        case 0x1e0ddcu: goto label_1e0ddc;
        case 0x1e0de0u: goto label_1e0de0;
        case 0x1e0de4u: goto label_1e0de4;
        case 0x1e0de8u: goto label_1e0de8;
        case 0x1e0decu: goto label_1e0dec;
        case 0x1e0df0u: goto label_1e0df0;
        case 0x1e0df4u: goto label_1e0df4;
        case 0x1e0df8u: goto label_1e0df8;
        case 0x1e0dfcu: goto label_1e0dfc;
        case 0x1e0e00u: goto label_1e0e00;
        case 0x1e0e04u: goto label_1e0e04;
        default: break;
    }

    ctx->pc = 0x1e0cc0u;

label_1e0cc0:
    // 0x1e0cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0cc4:
    // 0x1e0cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0cc8:
    // 0x1e0cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0ccc:
    // 0x1e0ccc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e0cd0:
    // 0x1e0cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e0cd4:
    if (ctx->pc == 0x1E0CD4u) {
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CD8u;
        goto label_1e0cd8;
    }
    ctx->pc = 0x1E0CD0u;
    {
        const bool branch_taken_0x1e0cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd0) {
            ctx->pc = 0x1E0CE0u;
            goto label_1e0ce0;
        }
    }
    ctx->pc = 0x1E0CD8u;
label_1e0cd8:
    // 0x1e0cd8: 0x10000047  b           . + 4 + (0x47 << 2)
label_1e0cdc:
    if (ctx->pc == 0x1E0CDCu) {
        ctx->pc = 0x1E0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD8u;
        // 0x1e0cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CE0u;
        goto label_1e0ce0;
    }
    ctx->pc = 0x1E0CD8u;
    {
        const bool branch_taken_0x1e0cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD8u;
        // 0x1e0cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd8) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0CE0u;
label_1e0ce0:
    // 0x1e0ce0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e0ce4:
    // 0x1e0ce4: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e0ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e0ce8:
    // 0x1e0ce8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e0ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e0cec:
    // 0x1e0cec: 0x320f809  jalr        $t9
label_1e0cf0:
    if (ctx->pc == 0x1E0CF0u) {
        ctx->pc = 0x1E0CF4u;
        goto label_1e0cf4;
    }
    ctx->pc = 0x1E0CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0CF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CECu, 0x1E0CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0CF4u;
label_1e0cf4:
    // 0x1e0cf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e0cf8:
    if (ctx->pc == 0x1E0CF8u) {
        ctx->pc = 0x1E0CFCu;
        goto label_1e0cfc;
    }
    ctx->pc = 0x1E0CF4u;
    {
        const bool branch_taken_0x1e0cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0cf4) {
            ctx->pc = 0x1E0D18u;
            goto label_1e0d18;
        }
    }
    ctx->pc = 0x1E0CFCu;
label_1e0cfc:
    // 0x1e0cfc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0d00:
    // 0x1e0d00: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0d04:
    // 0x1e0d04: 0x320f809  jalr        $t9
label_1e0d08:
    if (ctx->pc == 0x1E0D08u) {
        ctx->pc = 0x1E0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D04u;
        // 0x1e0d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D0Cu;
        goto label_1e0d0c;
    }
    ctx->pc = 0x1E0D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0D0Cu);
        ctx->pc = 0x1E0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D04u;
        // 0x1e0d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D04u, 0x1E0D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0D0Cu;
label_1e0d0c:
    // 0x1e0d0c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1e0d10:
    if (ctx->pc == 0x1E0D10u) {
        ctx->pc = 0x1E0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D0Cu;
        // 0x1e0d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D14u;
        goto label_1e0d14;
    }
    ctx->pc = 0x1E0D0Cu;
    {
        const bool branch_taken_0x1e0d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D0Cu;
        // 0x1e0d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d0c) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0D14u;
label_1e0d14:
    // 0x1e0d14: 0x0  nop
    ctx->pc = 0x1e0d14u;
    // NOP
label_1e0d18:
    // 0x1e0d18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e0d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e0d1c:
    // 0x1e0d1c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e0d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e0d20:
    // 0x1e0d20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e0d24:
    if (ctx->pc == 0x1E0D24u) {
        ctx->pc = 0x1E0D28u;
        goto label_1e0d28;
    }
    ctx->pc = 0x1E0D20u;
    {
        const bool branch_taken_0x1e0d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d20) {
            ctx->pc = 0x1E0D30u;
            goto label_1e0d30;
        }
    }
    ctx->pc = 0x1E0D28u;
label_1e0d28:
    // 0x1e0d28: 0x10000033  b           . + 4 + (0x33 << 2)
label_1e0d2c:
    if (ctx->pc == 0x1E0D2Cu) {
        ctx->pc = 0x1E0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D28u;
        // 0x1e0d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D30u;
        goto label_1e0d30;
    }
    ctx->pc = 0x1E0D28u;
    {
        const bool branch_taken_0x1e0d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D28u;
        // 0x1e0d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d28) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0D30u;
label_1e0d30:
    // 0x1e0d30: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e0d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0d34:
    // 0x1e0d34: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1e0d34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e0d38:
    // 0x1e0d38: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e0d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e0d3c:
    // 0x1e0d3c: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e0d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e0d40:
    // 0x1e0d40: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0d40u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e0d44:
    // 0x1e0d44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e0d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e0d48:
    // 0x1e0d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e0d4c:
    // 0x1e0d4c: 0x84a70008  lh          $a3, 0x8($a1)
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1e0d50:
    // 0x1e0d50: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x1e0d50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1e0d54:
    // 0x1e0d54: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1e0d54u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e0d58:
    // 0x1e0d58: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1e0d58u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1e0d5c:
    // 0x1e0d5c: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1e0d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1e0d60:
    // 0x1e0d60: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e0d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e0d64:
    // 0x1e0d64: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0d64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0d68:
    // 0x1e0d68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e0d6c:
    // 0x1e0d6c: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1e0d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e0d70:
    // 0x1e0d70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e0d74:
    // 0x1e0d74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0d78:
    if (ctx->pc == 0x1E0D78u) {
        ctx->pc = 0x1E0D7Cu;
        goto label_1e0d7c;
    }
    ctx->pc = 0x1E0D74u;
    {
        const bool branch_taken_0x1e0d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d74) {
            ctx->pc = 0x1E0D88u;
            goto label_1e0d88;
        }
    }
    ctx->pc = 0x1E0D7Cu;
label_1e0d7c:
    // 0x1e0d7c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1e0d80:
    if (ctx->pc == 0x1E0D80u) {
        ctx->pc = 0x1E0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D7Cu;
        // 0x1e0d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D84u;
        goto label_1e0d84;
    }
    ctx->pc = 0x1E0D7Cu;
    {
        const bool branch_taken_0x1e0d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D7Cu;
        // 0x1e0d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d7c) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0D84u;
label_1e0d84:
    // 0x1e0d84: 0x0  nop
    ctx->pc = 0x1e0d84u;
    // NOP
label_1e0d88:
    // 0x1e0d88: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1e0d8c:
    // 0x1e0d8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e0d90:
    // 0x1e0d90: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e0d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1e0d94:
    // 0x1e0d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0d98:
    if (ctx->pc == 0x1E0D98u) {
        ctx->pc = 0x1E0D9Cu;
        goto label_1e0d9c;
    }
    ctx->pc = 0x1E0D94u;
    {
        const bool branch_taken_0x1e0d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d94) {
            ctx->pc = 0x1E0DA8u;
            goto label_1e0da8;
        }
    }
    ctx->pc = 0x1E0D9Cu;
label_1e0d9c:
    // 0x1e0d9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0da0:
    // 0x1e0da0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0da4:
    // 0x1e0da4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e0da8:
    // 0x1e0da8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0dac:
    // 0x1e0dac: 0x8446000a  lh          $a2, 0xA($v0)
    ctx->pc = 0x1e0dacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1e0db0:
    // 0x1e0db0: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x1e0db0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e0db4:
    // 0x1e0db4: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_1e0db8:
    if (ctx->pc == 0x1E0DB8u) {
        ctx->pc = 0x1E0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB4u;
        // 0x1e0db8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DBCu;
        goto label_1e0dbc;
    }
    ctx->pc = 0x1E0DB4u;
    {
        const bool branch_taken_0x1e0db4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB4u;
        // 0x1e0db8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db4) {
            ctx->pc = 0x1E0DC8u;
            goto label_1e0dc8;
        }
    }
    ctx->pc = 0x1E0DBCu;
label_1e0dbc:
    // 0x1e0dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0dc0:
    // 0x1e0dc0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e0dc4:
    if (ctx->pc == 0x1E0DC4u) {
        ctx->pc = 0x1E0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DC0u;
        // 0x1e0dc4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DC8u;
        goto label_1e0dc8;
    }
    ctx->pc = 0x1E0DC0u;
    {
        const bool branch_taken_0x1e0dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DC0u;
        // 0x1e0dc4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dc0) {
            ctx->pc = 0x1E0DD8u;
            goto label_1e0dd8;
        }
    }
    ctx->pc = 0x1E0DC8u;
label_1e0dc8:
    // 0x1e0dc8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e0dcc:
    // 0x1e0dcc: 0xc0767d4  jal         func_1D9F50
label_1e0dd0:
    if (ctx->pc == 0x1E0DD0u) {
        ctx->pc = 0x1E0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DCCu;
        // 0x1e0dd0: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DD4u;
        goto label_1e0dd4;
    }
    ctx->pc = 0x1E0DCCu;
    SET_GPR_U32(ctx, 31, 0x1E0DD4u);
    ctx->pc = 0x1E0DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0DCCu;
    // 0x1e0dd0: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E0DCCu, 0x1E0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DD4u;
label_1e0dd4:
    // 0x1e0dd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0dd8:
    // 0x1e0dd8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e0ddc:
    // 0x1e0ddc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1e0ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e0de0:
    // 0x1e0de0: 0xc0767e0  jal         func_1D9F80
label_1e0de4:
    if (ctx->pc == 0x1E0DE4u) {
        ctx->pc = 0x1E0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DE0u;
        // 0x1e0de4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DE8u;
        goto label_1e0de8;
    }
    ctx->pc = 0x1E0DE0u;
    SET_GPR_U32(ctx, 31, 0x1E0DE8u);
    ctx->pc = 0x1E0DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0DE0u;
    // 0x1e0de4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F80u, 0x1E0DE0u, 0x1E0DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DE8u;
label_1e0de8:
    // 0x1e0de8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0dec:
    // 0x1e0dec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e0decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e0df0:
    // 0x1e0df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0df4:
    // 0x1e0df4: 0x0  nop
    ctx->pc = 0x1e0df4u;
    // NOP
label_1e0df8:
    // 0x1e0df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0dfc:
    // 0x1e0dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0e00:
    // 0x1e0e00: 0x3e00008  jr          $ra
label_1e0e04:
    if (ctx->pc == 0x1E0E04u) {
        ctx->pc = 0x1E0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E00u;
        // 0x1e0e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E08u;
        goto label_fallthrough_0x1e0e00;
    }
    ctx->pc = 0x1E0E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E00u;
        // 0x1e0e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0e00:
    ctx->pc = 0x1E0E08u;
}
