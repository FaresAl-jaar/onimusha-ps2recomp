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

// Function: sub_001E9CC0
// Address: 0x1e9cc0 - 0x1e9e18
void sub_001E9CC0_0x1e9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9CC0_0x1e9cc0");
#endif

    switch (ctx->pc) {
        case 0x1e9cc0u: goto label_1e9cc0;
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9cc8u: goto label_1e9cc8;
        case 0x1e9cccu: goto label_1e9ccc;
        case 0x1e9cd0u: goto label_1e9cd0;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9cd8u: goto label_1e9cd8;
        case 0x1e9cdcu: goto label_1e9cdc;
        case 0x1e9ce0u: goto label_1e9ce0;
        case 0x1e9ce4u: goto label_1e9ce4;
        case 0x1e9ce8u: goto label_1e9ce8;
        case 0x1e9cecu: goto label_1e9cec;
        case 0x1e9cf0u: goto label_1e9cf0;
        case 0x1e9cf4u: goto label_1e9cf4;
        case 0x1e9cf8u: goto label_1e9cf8;
        case 0x1e9cfcu: goto label_1e9cfc;
        case 0x1e9d00u: goto label_1e9d00;
        case 0x1e9d04u: goto label_1e9d04;
        case 0x1e9d08u: goto label_1e9d08;
        case 0x1e9d0cu: goto label_1e9d0c;
        case 0x1e9d10u: goto label_1e9d10;
        case 0x1e9d14u: goto label_1e9d14;
        case 0x1e9d18u: goto label_1e9d18;
        case 0x1e9d1cu: goto label_1e9d1c;
        case 0x1e9d20u: goto label_1e9d20;
        case 0x1e9d24u: goto label_1e9d24;
        case 0x1e9d28u: goto label_1e9d28;
        case 0x1e9d2cu: goto label_1e9d2c;
        case 0x1e9d30u: goto label_1e9d30;
        case 0x1e9d34u: goto label_1e9d34;
        case 0x1e9d38u: goto label_1e9d38;
        case 0x1e9d3cu: goto label_1e9d3c;
        case 0x1e9d40u: goto label_1e9d40;
        case 0x1e9d44u: goto label_1e9d44;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d4cu: goto label_1e9d4c;
        case 0x1e9d50u: goto label_1e9d50;
        case 0x1e9d54u: goto label_1e9d54;
        case 0x1e9d58u: goto label_1e9d58;
        case 0x1e9d5cu: goto label_1e9d5c;
        case 0x1e9d60u: goto label_1e9d60;
        case 0x1e9d64u: goto label_1e9d64;
        case 0x1e9d68u: goto label_1e9d68;
        case 0x1e9d6cu: goto label_1e9d6c;
        case 0x1e9d70u: goto label_1e9d70;
        case 0x1e9d74u: goto label_1e9d74;
        case 0x1e9d78u: goto label_1e9d78;
        case 0x1e9d7cu: goto label_1e9d7c;
        case 0x1e9d80u: goto label_1e9d80;
        case 0x1e9d84u: goto label_1e9d84;
        case 0x1e9d88u: goto label_1e9d88;
        case 0x1e9d8cu: goto label_1e9d8c;
        case 0x1e9d90u: goto label_1e9d90;
        case 0x1e9d94u: goto label_1e9d94;
        case 0x1e9d98u: goto label_1e9d98;
        case 0x1e9d9cu: goto label_1e9d9c;
        case 0x1e9da0u: goto label_1e9da0;
        case 0x1e9da4u: goto label_1e9da4;
        case 0x1e9da8u: goto label_1e9da8;
        case 0x1e9dacu: goto label_1e9dac;
        case 0x1e9db0u: goto label_1e9db0;
        case 0x1e9db4u: goto label_1e9db4;
        case 0x1e9db8u: goto label_1e9db8;
        case 0x1e9dbcu: goto label_1e9dbc;
        case 0x1e9dc0u: goto label_1e9dc0;
        case 0x1e9dc4u: goto label_1e9dc4;
        case 0x1e9dc8u: goto label_1e9dc8;
        case 0x1e9dccu: goto label_1e9dcc;
        case 0x1e9dd0u: goto label_1e9dd0;
        case 0x1e9dd4u: goto label_1e9dd4;
        case 0x1e9dd8u: goto label_1e9dd8;
        case 0x1e9ddcu: goto label_1e9ddc;
        case 0x1e9de0u: goto label_1e9de0;
        case 0x1e9de4u: goto label_1e9de4;
        case 0x1e9de8u: goto label_1e9de8;
        case 0x1e9decu: goto label_1e9dec;
        case 0x1e9df0u: goto label_1e9df0;
        case 0x1e9df4u: goto label_1e9df4;
        case 0x1e9df8u: goto label_1e9df8;
        case 0x1e9dfcu: goto label_1e9dfc;
        case 0x1e9e00u: goto label_1e9e00;
        case 0x1e9e04u: goto label_1e9e04;
        case 0x1e9e08u: goto label_1e9e08;
        case 0x1e9e0cu: goto label_1e9e0c;
        case 0x1e9e10u: goto label_1e9e10;
        case 0x1e9e14u: goto label_1e9e14;
        default: break;
    }

    ctx->pc = 0x1e9cc0u;

label_1e9cc0:
    // 0x1e9cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9cc4:
    // 0x1e9cc4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e9cc8:
    // 0x1e9cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9ccc:
    // 0x1e9ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9cd0:
    // 0x1e9cd0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e9cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9cd4:
    // 0x1e9cd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e9cd8:
    if (ctx->pc == 0x1E9CD8u) {
        ctx->pc = 0x1E9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CD4u;
        // 0x1e9cd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CDCu;
        goto label_1e9cdc;
    }
    ctx->pc = 0x1E9CD4u;
    {
        const bool branch_taken_0x1e9cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CD4u;
        // 0x1e9cd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cd4) {
            ctx->pc = 0x1E9CE8u;
            goto label_1e9ce8;
        }
    }
    ctx->pc = 0x1E9CDCu;
label_1e9cdc:
    // 0x1e9cdc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1e9ce0:
    if (ctx->pc == 0x1E9CE0u) {
        ctx->pc = 0x1E9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CDCu;
        // 0x1e9ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CE4u;
        goto label_1e9ce4;
    }
    ctx->pc = 0x1E9CDCu;
    {
        const bool branch_taken_0x1e9cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CDCu;
        // 0x1e9ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cdc) {
            ctx->pc = 0x1E9E08u;
            goto label_1e9e08;
        }
    }
    ctx->pc = 0x1E9CE4u;
label_1e9ce4:
    // 0x1e9ce4: 0x0  nop
    ctx->pc = 0x1e9ce4u;
    // NOP
label_1e9ce8:
    // 0x1e9ce8: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e9ce8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e9cec:
    // 0x1e9cec: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e9cf0:
    // 0x1e9cf0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e9cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e9cf4:
    // 0x1e9cf4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e9cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9cf8:
    // 0x1e9cf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e9cfc:
    // 0x1e9cfc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e9cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e9d00:
    // 0x1e9d00: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e9d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e9d04:
    // 0x1e9d04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e9d08:
    if (ctx->pc == 0x1E9D08u) {
        ctx->pc = 0x1E9D0Cu;
        goto label_1e9d0c;
    }
    ctx->pc = 0x1E9D04u;
    {
        const bool branch_taken_0x1e9d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9d04) {
            ctx->pc = 0x1E9D28u;
            goto label_1e9d28;
        }
    }
    ctx->pc = 0x1E9D0Cu;
label_1e9d0c:
    // 0x1e9d0c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e9d0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9d10:
    // 0x1e9d10: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e9d10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e9d14:
    // 0x1e9d14: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e9d18:
    if (ctx->pc == 0x1E9D18u) {
        ctx->pc = 0x1E9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D14u;
        // 0x1e9d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D1Cu;
        goto label_1e9d1c;
    }
    ctx->pc = 0x1E9D14u;
    {
        const bool branch_taken_0x1e9d14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D14u;
        // 0x1e9d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d14) {
            ctx->pc = 0x1E9D50u;
            goto label_1e9d50;
        }
    }
    ctx->pc = 0x1E9D1Cu;
label_1e9d1c:
    // 0x1e9d1c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e9d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e9d20:
    // 0x1e9d20: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e9d24:
    if (ctx->pc == 0x1E9D24u) {
        ctx->pc = 0x1E9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D20u;
        // 0x1e9d24: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D28u;
        goto label_1e9d28;
    }
    ctx->pc = 0x1E9D20u;
    {
        const bool branch_taken_0x1e9d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D20u;
        // 0x1e9d24: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d20) {
            ctx->pc = 0x1E9D50u;
            goto label_1e9d50;
        }
    }
    ctx->pc = 0x1E9D28u;
label_1e9d28:
    // 0x1e9d28: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e9d28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9d2c:
    // 0x1e9d2c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e9d2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e9d30:
    // 0x1e9d30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e9d34:
    if (ctx->pc == 0x1E9D34u) {
        ctx->pc = 0x1E9D38u;
        goto label_1e9d38;
    }
    ctx->pc = 0x1E9D30u;
    {
        const bool branch_taken_0x1e9d30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d30) {
            ctx->pc = 0x1E9D50u;
            goto label_1e9d50;
        }
    }
    ctx->pc = 0x1E9D38u;
label_1e9d38:
    // 0x1e9d38: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e9d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e9d3c:
    // 0x1e9d3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e9d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e9d40:
    // 0x1e9d40: 0x320f809  jalr        $t9
label_1e9d44:
    if (ctx->pc == 0x1E9D44u) {
        ctx->pc = 0x1E9D48u;
        goto label_1e9d48;
    }
    ctx->pc = 0x1E9D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9D48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D40u, 0x1E9D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9D48u;
label_1e9d48:
    // 0x1e9d48: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e9d4c:
    if (ctx->pc == 0x1E9D4Cu) {
        ctx->pc = 0x1E9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D48u;
        // 0x1e9d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D50u;
        goto label_1e9d50;
    }
    ctx->pc = 0x1E9D48u;
    {
        const bool branch_taken_0x1e9d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D48u;
        // 0x1e9d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d48) {
            ctx->pc = 0x1E9E08u;
            goto label_1e9e08;
        }
    }
    ctx->pc = 0x1E9D50u;
label_1e9d50:
    // 0x1e9d50: 0xc0743c0  jal         func_1D0F00
label_1e9d54:
    if (ctx->pc == 0x1E9D54u) {
        ctx->pc = 0x1E9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D50u;
        // 0x1e9d54: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D58u;
        goto label_1e9d58;
    }
    ctx->pc = 0x1E9D50u;
    SET_GPR_U32(ctx, 31, 0x1E9D58u);
    ctx->pc = 0x1E9D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D50u;
    // 0x1e9d54: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1E9D50u, 0x1E9D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D58u;
label_1e9d58:
    // 0x1e9d58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e9d5c:
    if (ctx->pc == 0x1E9D5Cu) {
        ctx->pc = 0x1E9D60u;
        goto label_1e9d60;
    }
    ctx->pc = 0x1E9D58u;
    {
        const bool branch_taken_0x1e9d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d58) {
            ctx->pc = 0x1E9D70u;
            goto label_1e9d70;
        }
    }
    ctx->pc = 0x1E9D60u;
label_1e9d60:
    // 0x1e9d60: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e9d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e9d64:
    // 0x1e9d64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e9d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e9d68:
    // 0x1e9d68: 0x320f809  jalr        $t9
label_1e9d6c:
    if (ctx->pc == 0x1E9D6Cu) {
        ctx->pc = 0x1E9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D68u;
        // 0x1e9d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D70u;
        goto label_1e9d70;
    }
    ctx->pc = 0x1E9D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9D70u);
        ctx->pc = 0x1E9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D68u;
        // 0x1e9d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D68u, 0x1E9D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9D70u;
label_1e9d70:
    // 0x1e9d70: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e9d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e9d74:
    // 0x1e9d74: 0xc076800  jal         func_1DA000
label_1e9d78:
    if (ctx->pc == 0x1E9D78u) {
        ctx->pc = 0x1E9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D74u;
        // 0x1e9d78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D7Cu;
        goto label_1e9d7c;
    }
    ctx->pc = 0x1E9D74u;
    SET_GPR_U32(ctx, 31, 0x1E9D7Cu);
    ctx->pc = 0x1E9D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D74u;
    // 0x1e9d78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E9D74u, 0x1E9D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D7Cu;
label_1e9d7c:
    // 0x1e9d7c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e9d80:
    // 0x1e9d80: 0xc076800  jal         func_1DA000
label_1e9d84:
    if (ctx->pc == 0x1E9D84u) {
        ctx->pc = 0x1E9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D80u;
        // 0x1e9d84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D88u;
        goto label_1e9d88;
    }
    ctx->pc = 0x1E9D80u;
    SET_GPR_U32(ctx, 31, 0x1E9D88u);
    ctx->pc = 0x1E9D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D80u;
    // 0x1e9d84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E9D80u, 0x1E9D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D88u;
label_1e9d88:
    // 0x1e9d88: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1e9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e9d8c:
    // 0x1e9d8c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e9d90:
    // 0x1e9d90: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1e9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1e9d94:
    // 0x1e9d94: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x1e9d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e9d98:
    // 0x1e9d98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e9d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e9d9c:
    // 0x1e9d9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1e9da0:
    if (ctx->pc == 0x1E9DA0u) {
        ctx->pc = 0x1E9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D9Cu;
        // 0x1e9da0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9DA4u;
        goto label_1e9da4;
    }
    ctx->pc = 0x1E9D9Cu;
    {
        const bool branch_taken_0x1e9d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D9Cu;
        // 0x1e9da0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d9c) {
            ctx->pc = 0x1E9E00u;
            goto label_1e9e00;
        }
    }
    ctx->pc = 0x1E9DA4u;
label_1e9da4:
    // 0x1e9da4: 0xc0743e0  jal         func_1D0F80
label_1e9da8:
    if (ctx->pc == 0x1E9DA8u) {
        ctx->pc = 0x1E9DACu;
        goto label_1e9dac;
    }
    ctx->pc = 0x1E9DA4u;
    SET_GPR_U32(ctx, 31, 0x1E9DACu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1E9DA4u, 0x1E9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DACu;
label_1e9dac:
    // 0x1e9dac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e9db0:
    // 0x1e9db0: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1e9db4:
    // 0x1e9db4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1e9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1e9db8:
    // 0x1e9db8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1e9db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e9dbc:
    // 0x1e9dbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e9dc0:
    if (ctx->pc == 0x1E9DC0u) {
        ctx->pc = 0x1E9DC4u;
        goto label_1e9dc4;
    }
    ctx->pc = 0x1E9DBCu;
    {
        const bool branch_taken_0x1e9dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9dbc) {
            ctx->pc = 0x1E9DD8u;
            goto label_1e9dd8;
        }
    }
    ctx->pc = 0x1E9DC4u;
label_1e9dc4:
    // 0x1e9dc4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1e9dc4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e9dc8:
    // 0x1e9dc8: 0x0  nop
    ctx->pc = 0x1e9dc8u;
    // NOP
label_1e9dcc:
    // 0x1e9dcc: 0x0  nop
    ctx->pc = 0x1e9dccu;
    // NOP
label_1e9dd0:
    // 0x1e9dd0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e9dd0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e9dd4:
    // 0x1e9dd4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1e9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1e9dd8:
    // 0x1e9dd8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1e9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1e9ddc:
    // 0x1e9ddc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1e9ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1e9de0:
    // 0x1e9de0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e9de4:
    if (ctx->pc == 0x1E9DE4u) {
        ctx->pc = 0x1E9DE8u;
        goto label_1e9de8;
    }
    ctx->pc = 0x1E9DE0u;
    {
        const bool branch_taken_0x1e9de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9de0) {
            ctx->pc = 0x1E9E00u;
            goto label_1e9e00;
        }
    }
    ctx->pc = 0x1E9DE8u;
label_1e9de8:
    // 0x1e9de8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1e9de8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e9dec:
    // 0x1e9dec: 0x0  nop
    ctx->pc = 0x1e9decu;
    // NOP
label_1e9df0:
    // 0x1e9df0: 0x0  nop
    ctx->pc = 0x1e9df0u;
    // NOP
label_1e9df4:
    // 0x1e9df4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e9df4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e9df8:
    // 0x1e9df8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1e9dfc:
    // 0x1e9dfc: 0x0  nop
    ctx->pc = 0x1e9dfcu;
    // NOP
label_1e9e00:
    // 0x1e9e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9e04:
    // 0x1e9e04: 0x0  nop
    ctx->pc = 0x1e9e04u;
    // NOP
label_1e9e08:
    // 0x1e9e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9e0c:
    // 0x1e9e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9e10:
    // 0x1e9e10: 0x3e00008  jr          $ra
label_1e9e14:
    if (ctx->pc == 0x1E9E14u) {
        ctx->pc = 0x1E9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E10u;
        // 0x1e9e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E18u;
        goto label_fallthrough_0x1e9e10;
    }
    ctx->pc = 0x1E9E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E10u;
        // 0x1e9e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9e10:
    ctx->pc = 0x1E9E18u;
}
