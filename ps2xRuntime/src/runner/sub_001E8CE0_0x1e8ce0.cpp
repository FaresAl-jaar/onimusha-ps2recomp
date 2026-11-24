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

// Function: sub_001E8CE0
// Address: 0x1e8ce0 - 0x1e8e50
void sub_001E8CE0_0x1e8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8CE0_0x1e8ce0");
#endif

    switch (ctx->pc) {
        case 0x1e8ce0u: goto label_1e8ce0;
        case 0x1e8ce4u: goto label_1e8ce4;
        case 0x1e8ce8u: goto label_1e8ce8;
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8cf0u: goto label_1e8cf0;
        case 0x1e8cf4u: goto label_1e8cf4;
        case 0x1e8cf8u: goto label_1e8cf8;
        case 0x1e8cfcu: goto label_1e8cfc;
        case 0x1e8d00u: goto label_1e8d00;
        case 0x1e8d04u: goto label_1e8d04;
        case 0x1e8d08u: goto label_1e8d08;
        case 0x1e8d0cu: goto label_1e8d0c;
        case 0x1e8d10u: goto label_1e8d10;
        case 0x1e8d14u: goto label_1e8d14;
        case 0x1e8d18u: goto label_1e8d18;
        case 0x1e8d1cu: goto label_1e8d1c;
        case 0x1e8d20u: goto label_1e8d20;
        case 0x1e8d24u: goto label_1e8d24;
        case 0x1e8d28u: goto label_1e8d28;
        case 0x1e8d2cu: goto label_1e8d2c;
        case 0x1e8d30u: goto label_1e8d30;
        case 0x1e8d34u: goto label_1e8d34;
        case 0x1e8d38u: goto label_1e8d38;
        case 0x1e8d3cu: goto label_1e8d3c;
        case 0x1e8d40u: goto label_1e8d40;
        case 0x1e8d44u: goto label_1e8d44;
        case 0x1e8d48u: goto label_1e8d48;
        case 0x1e8d4cu: goto label_1e8d4c;
        case 0x1e8d50u: goto label_1e8d50;
        case 0x1e8d54u: goto label_1e8d54;
        case 0x1e8d58u: goto label_1e8d58;
        case 0x1e8d5cu: goto label_1e8d5c;
        case 0x1e8d60u: goto label_1e8d60;
        case 0x1e8d64u: goto label_1e8d64;
        case 0x1e8d68u: goto label_1e8d68;
        case 0x1e8d6cu: goto label_1e8d6c;
        case 0x1e8d70u: goto label_1e8d70;
        case 0x1e8d74u: goto label_1e8d74;
        case 0x1e8d78u: goto label_1e8d78;
        case 0x1e8d7cu: goto label_1e8d7c;
        case 0x1e8d80u: goto label_1e8d80;
        case 0x1e8d84u: goto label_1e8d84;
        case 0x1e8d88u: goto label_1e8d88;
        case 0x1e8d8cu: goto label_1e8d8c;
        case 0x1e8d90u: goto label_1e8d90;
        case 0x1e8d94u: goto label_1e8d94;
        case 0x1e8d98u: goto label_1e8d98;
        case 0x1e8d9cu: goto label_1e8d9c;
        case 0x1e8da0u: goto label_1e8da0;
        case 0x1e8da4u: goto label_1e8da4;
        case 0x1e8da8u: goto label_1e8da8;
        case 0x1e8dacu: goto label_1e8dac;
        case 0x1e8db0u: goto label_1e8db0;
        case 0x1e8db4u: goto label_1e8db4;
        case 0x1e8db8u: goto label_1e8db8;
        case 0x1e8dbcu: goto label_1e8dbc;
        case 0x1e8dc0u: goto label_1e8dc0;
        case 0x1e8dc4u: goto label_1e8dc4;
        case 0x1e8dc8u: goto label_1e8dc8;
        case 0x1e8dccu: goto label_1e8dcc;
        case 0x1e8dd0u: goto label_1e8dd0;
        case 0x1e8dd4u: goto label_1e8dd4;
        case 0x1e8dd8u: goto label_1e8dd8;
        case 0x1e8ddcu: goto label_1e8ddc;
        case 0x1e8de0u: goto label_1e8de0;
        case 0x1e8de4u: goto label_1e8de4;
        case 0x1e8de8u: goto label_1e8de8;
        case 0x1e8decu: goto label_1e8dec;
        case 0x1e8df0u: goto label_1e8df0;
        case 0x1e8df4u: goto label_1e8df4;
        case 0x1e8df8u: goto label_1e8df8;
        case 0x1e8dfcu: goto label_1e8dfc;
        case 0x1e8e00u: goto label_1e8e00;
        case 0x1e8e04u: goto label_1e8e04;
        case 0x1e8e08u: goto label_1e8e08;
        case 0x1e8e0cu: goto label_1e8e0c;
        case 0x1e8e10u: goto label_1e8e10;
        case 0x1e8e14u: goto label_1e8e14;
        case 0x1e8e18u: goto label_1e8e18;
        case 0x1e8e1cu: goto label_1e8e1c;
        case 0x1e8e20u: goto label_1e8e20;
        case 0x1e8e24u: goto label_1e8e24;
        case 0x1e8e28u: goto label_1e8e28;
        case 0x1e8e2cu: goto label_1e8e2c;
        case 0x1e8e30u: goto label_1e8e30;
        case 0x1e8e34u: goto label_1e8e34;
        case 0x1e8e38u: goto label_1e8e38;
        case 0x1e8e3cu: goto label_1e8e3c;
        case 0x1e8e40u: goto label_1e8e40;
        case 0x1e8e44u: goto label_1e8e44;
        case 0x1e8e48u: goto label_1e8e48;
        case 0x1e8e4cu: goto label_1e8e4c;
        default: break;
    }

    ctx->pc = 0x1e8ce0u;

label_1e8ce0:
    // 0x1e8ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e8ce4:
    // 0x1e8ce4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e8ce8:
    // 0x1e8ce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e8cec:
    // 0x1e8cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8cf0:
    // 0x1e8cf0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e8cf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8cf4:
    // 0x1e8cf4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e8cf8:
    if (ctx->pc == 0x1E8CF8u) {
        ctx->pc = 0x1E8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CF4u;
        // 0x1e8cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8CFCu;
        goto label_1e8cfc;
    }
    ctx->pc = 0x1E8CF4u;
    {
        const bool branch_taken_0x1e8cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CF4u;
        // 0x1e8cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8cf4) {
            ctx->pc = 0x1E8D08u;
            goto label_1e8d08;
        }
    }
    ctx->pc = 0x1E8CFCu;
label_1e8cfc:
    // 0x1e8cfc: 0x10000050  b           . + 4 + (0x50 << 2)
label_1e8d00:
    if (ctx->pc == 0x1E8D00u) {
        ctx->pc = 0x1E8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CFCu;
        // 0x1e8d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D04u;
        goto label_1e8d04;
    }
    ctx->pc = 0x1E8CFCu;
    {
        const bool branch_taken_0x1e8cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CFCu;
        // 0x1e8d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8cfc) {
            ctx->pc = 0x1E8E40u;
            goto label_1e8e40;
        }
    }
    ctx->pc = 0x1E8D04u;
label_1e8d04:
    // 0x1e8d04: 0x0  nop
    ctx->pc = 0x1e8d04u;
    // NOP
label_1e8d08:
    // 0x1e8d08: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e8d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e8d0c:
    // 0x1e8d0c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e8d10:
    // 0x1e8d10: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e8d10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e8d14:
    // 0x1e8d14: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e8d14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8d18:
    // 0x1e8d18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e8d1c:
    // 0x1e8d1c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e8d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e8d20:
    // 0x1e8d20: 0x86030038  lh          $v1, 0x38($s0)
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_1e8d24:
    // 0x1e8d24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e8d28:
    if (ctx->pc == 0x1E8D28u) {
        ctx->pc = 0x1E8D2Cu;
        goto label_1e8d2c;
    }
    ctx->pc = 0x1E8D24u;
    {
        const bool branch_taken_0x1e8d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8d24) {
            ctx->pc = 0x1E8D48u;
            goto label_1e8d48;
        }
    }
    ctx->pc = 0x1E8D2Cu;
label_1e8d2c:
    // 0x1e8d2c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e8d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8d30:
    // 0x1e8d30: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e8d30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e8d34:
    // 0x1e8d34: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e8d38:
    if (ctx->pc == 0x1E8D38u) {
        ctx->pc = 0x1E8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D34u;
        // 0x1e8d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D3Cu;
        goto label_1e8d3c;
    }
    ctx->pc = 0x1E8D34u;
    {
        const bool branch_taken_0x1e8d34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D34u;
        // 0x1e8d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d34) {
            ctx->pc = 0x1E8D70u;
            goto label_1e8d70;
        }
    }
    ctx->pc = 0x1E8D3Cu;
label_1e8d3c:
    // 0x1e8d3c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e8d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e8d40:
    // 0x1e8d40: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e8d44:
    if (ctx->pc == 0x1E8D44u) {
        ctx->pc = 0x1E8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D40u;
        // 0x1e8d44: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D48u;
        goto label_1e8d48;
    }
    ctx->pc = 0x1E8D40u;
    {
        const bool branch_taken_0x1e8d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D40u;
        // 0x1e8d44: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d40) {
            ctx->pc = 0x1E8D70u;
            goto label_1e8d70;
        }
    }
    ctx->pc = 0x1E8D48u;
label_1e8d48:
    // 0x1e8d48: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e8d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8d4c:
    // 0x1e8d4c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e8d4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e8d50:
    // 0x1e8d50: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e8d54:
    if (ctx->pc == 0x1E8D54u) {
        ctx->pc = 0x1E8D58u;
        goto label_1e8d58;
    }
    ctx->pc = 0x1E8D50u;
    {
        const bool branch_taken_0x1e8d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d50) {
            ctx->pc = 0x1E8D70u;
            goto label_1e8d70;
        }
    }
    ctx->pc = 0x1E8D58u;
label_1e8d58:
    // 0x1e8d58: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e8d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e8d5c:
    // 0x1e8d5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e8d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e8d60:
    // 0x1e8d60: 0x320f809  jalr        $t9
label_1e8d64:
    if (ctx->pc == 0x1E8D64u) {
        ctx->pc = 0x1E8D68u;
        goto label_1e8d68;
    }
    ctx->pc = 0x1E8D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8D68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D60u, 0x1E8D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8D68u;
label_1e8d68:
    // 0x1e8d68: 0x10000035  b           . + 4 + (0x35 << 2)
label_1e8d6c:
    if (ctx->pc == 0x1E8D6Cu) {
        ctx->pc = 0x1E8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D68u;
        // 0x1e8d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D70u;
        goto label_1e8d70;
    }
    ctx->pc = 0x1E8D68u;
    {
        const bool branch_taken_0x1e8d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D68u;
        // 0x1e8d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d68) {
            ctx->pc = 0x1E8E40u;
            goto label_1e8e40;
        }
    }
    ctx->pc = 0x1E8D70u;
label_1e8d70:
    // 0x1e8d70: 0xc0743c0  jal         func_1D0F00
label_1e8d74:
    if (ctx->pc == 0x1E8D74u) {
        ctx->pc = 0x1E8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D70u;
        // 0x1e8d74: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D78u;
        goto label_1e8d78;
    }
    ctx->pc = 0x1E8D70u;
    SET_GPR_U32(ctx, 31, 0x1E8D78u);
    ctx->pc = 0x1E8D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D70u;
    // 0x1e8d74: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1E8D70u, 0x1E8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D78u;
label_1e8d78:
    // 0x1e8d78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e8d7c:
    if (ctx->pc == 0x1E8D7Cu) {
        ctx->pc = 0x1E8D80u;
        goto label_1e8d80;
    }
    ctx->pc = 0x1E8D78u;
    {
        const bool branch_taken_0x1e8d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d78) {
            ctx->pc = 0x1E8D90u;
            goto label_1e8d90;
        }
    }
    ctx->pc = 0x1E8D80u;
label_1e8d80:
    // 0x1e8d80: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e8d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8d84:
    // 0x1e8d84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e8d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e8d88:
    // 0x1e8d88: 0x320f809  jalr        $t9
label_1e8d8c:
    if (ctx->pc == 0x1E8D8Cu) {
        ctx->pc = 0x1E8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D88u;
        // 0x1e8d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D90u;
        goto label_1e8d90;
    }
    ctx->pc = 0x1E8D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8D90u);
        ctx->pc = 0x1E8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D88u;
        // 0x1e8d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D88u, 0x1E8D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8D90u;
label_1e8d90:
    // 0x1e8d90: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e8d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e8d94:
    // 0x1e8d94: 0xc076800  jal         func_1DA000
label_1e8d98:
    if (ctx->pc == 0x1E8D98u) {
        ctx->pc = 0x1E8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D94u;
        // 0x1e8d98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D9Cu;
        goto label_1e8d9c;
    }
    ctx->pc = 0x1E8D94u;
    SET_GPR_U32(ctx, 31, 0x1E8D9Cu);
    ctx->pc = 0x1E8D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D94u;
    // 0x1e8d98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E8D94u, 0x1E8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D9Cu;
label_1e8d9c:
    // 0x1e8d9c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e8d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e8da0:
    // 0x1e8da0: 0xc076800  jal         func_1DA000
label_1e8da4:
    if (ctx->pc == 0x1E8DA4u) {
        ctx->pc = 0x1E8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DA0u;
        // 0x1e8da4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DA8u;
        goto label_1e8da8;
    }
    ctx->pc = 0x1E8DA0u;
    SET_GPR_U32(ctx, 31, 0x1E8DA8u);
    ctx->pc = 0x1E8DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DA0u;
    // 0x1e8da4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E8DA0u, 0x1E8DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DA8u;
label_1e8da8:
    // 0x1e8da8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1e8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e8dac:
    // 0x1e8dac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e8db0:
    // 0x1e8db0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1e8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1e8db4:
    // 0x1e8db4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1e8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e8db8:
    // 0x1e8db8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e8dbc:
    // 0x1e8dbc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1e8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1e8dc0:
    // 0x1e8dc0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1e8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e8dc4:
    // 0x1e8dc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e8dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e8dc8:
    // 0x1e8dc8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1e8dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1e8dcc:
    // 0x1e8dcc: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x1e8dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_1e8dd0:
    // 0x1e8dd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e8dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e8dd4:
    // 0x1e8dd4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1e8dd8:
    if (ctx->pc == 0x1E8DD8u) {
        ctx->pc = 0x1E8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DD4u;
        // 0x1e8dd8: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DDCu;
        goto label_1e8ddc;
    }
    ctx->pc = 0x1E8DD4u;
    {
        const bool branch_taken_0x1e8dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DD4u;
        // 0x1e8dd8: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8dd4) {
            ctx->pc = 0x1E8E38u;
            goto label_1e8e38;
        }
    }
    ctx->pc = 0x1E8DDCu;
label_1e8ddc:
    // 0x1e8ddc: 0xc0743e0  jal         func_1D0F80
label_1e8de0:
    if (ctx->pc == 0x1E8DE0u) {
        ctx->pc = 0x1E8DE4u;
        goto label_1e8de4;
    }
    ctx->pc = 0x1E8DDCu;
    SET_GPR_U32(ctx, 31, 0x1E8DE4u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1E8DDCu, 0x1E8DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DE4u;
label_1e8de4:
    // 0x1e8de4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e8de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e8de8:
    // 0x1e8de8: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1e8de8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1e8dec:
    // 0x1e8dec: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1e8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1e8df0:
    // 0x1e8df0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1e8df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e8df4:
    // 0x1e8df4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e8df8:
    if (ctx->pc == 0x1E8DF8u) {
        ctx->pc = 0x1E8DFCu;
        goto label_1e8dfc;
    }
    ctx->pc = 0x1E8DF4u;
    {
        const bool branch_taken_0x1e8df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8df4) {
            ctx->pc = 0x1E8E10u;
            goto label_1e8e10;
        }
    }
    ctx->pc = 0x1E8DFCu;
label_1e8dfc:
    // 0x1e8dfc: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1e8dfcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e8e00:
    // 0x1e8e00: 0x0  nop
    ctx->pc = 0x1e8e00u;
    // NOP
label_1e8e04:
    // 0x1e8e04: 0x0  nop
    ctx->pc = 0x1e8e04u;
    // NOP
label_1e8e08:
    // 0x1e8e08: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8e08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8e0c:
    // 0x1e8e0c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1e8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1e8e10:
    // 0x1e8e10: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1e8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1e8e14:
    // 0x1e8e14: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1e8e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1e8e18:
    // 0x1e8e18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e8e1c:
    if (ctx->pc == 0x1E8E1Cu) {
        ctx->pc = 0x1E8E20u;
        goto label_1e8e20;
    }
    ctx->pc = 0x1E8E18u;
    {
        const bool branch_taken_0x1e8e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8e18) {
            ctx->pc = 0x1E8E38u;
            goto label_1e8e38;
        }
    }
    ctx->pc = 0x1E8E20u;
label_1e8e20:
    // 0x1e8e20: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1e8e20u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e8e24:
    // 0x1e8e24: 0x0  nop
    ctx->pc = 0x1e8e24u;
    // NOP
label_1e8e28:
    // 0x1e8e28: 0x0  nop
    ctx->pc = 0x1e8e28u;
    // NOP
label_1e8e2c:
    // 0x1e8e2c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8e2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8e30:
    // 0x1e8e30: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1e8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1e8e34:
    // 0x1e8e34: 0x0  nop
    ctx->pc = 0x1e8e34u;
    // NOP
label_1e8e38:
    // 0x1e8e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8e3c:
    // 0x1e8e3c: 0x0  nop
    ctx->pc = 0x1e8e3cu;
    // NOP
label_1e8e40:
    // 0x1e8e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8e44:
    // 0x1e8e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8e48:
    // 0x1e8e48: 0x3e00008  jr          $ra
label_1e8e4c:
    if (ctx->pc == 0x1E8E4Cu) {
        ctx->pc = 0x1E8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E48u;
        // 0x1e8e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E50u;
        goto label_fallthrough_0x1e8e48;
    }
    ctx->pc = 0x1E8E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E48u;
        // 0x1e8e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8e48:
    ctx->pc = 0x1E8E50u;
}
