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

// Function: sub_00376CD0
// Address: 0x376cd0 - 0x3771a4
void sub_00376CD0_0x376cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376CD0_0x376cd0");
#endif

    switch (ctx->pc) {
        case 0x376e08u: goto label_376e08;
        case 0x376e40u: goto label_376e40;
        case 0x376e50u: goto label_376e50;
        case 0x376e80u: goto label_376e80;
        case 0x376e90u: goto label_376e90;
        case 0x376f48u: goto label_376f48;
        case 0x376f60u: goto label_376f60;
        case 0x376f6cu: goto label_376f6c;
        case 0x376f80u: goto label_376f80;
        case 0x376fb4u: goto label_376fb4;
        case 0x377054u: goto label_377054;
        case 0x377068u: goto label_377068;
        case 0x377078u: goto label_377078;
        case 0x3770e4u: goto label_3770e4;
        case 0x377190u: goto label_377190;
        default: break;
    }

    ctx->pc = 0x376cd0u;

    // 0x376cd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x376cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x376cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x376cd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x376cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x376cdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ce4: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x376ce4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x376ce8: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x376ce8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x376cec: 0x10200128  beqz        $at, . + 4 + (0x128 << 2)
    ctx->pc = 0x376CECu;
    {
        const bool branch_taken_0x376cec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x376CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CECu;
        // 0x376cf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376cec) {
            ctx->pc = 0x377190u;
            goto label_377190;
        }
    }
    ctx->pc = 0x376CF4u;
    // 0x376cf4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x376cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x376cf8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x376cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x376cfc: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x376cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x376d00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x376d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x376d04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x376d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x376d08: 0x600008  jr          $v1
    ctx->pc = 0x376D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376D10u: goto label_376d10;
            case 0x376D20u: goto label_376d20;
            case 0x376D40u: goto label_376d40;
            case 0x376DF0u: goto label_376df0;
            case 0x376E70u: goto label_376e70;
            case 0x376F40u: goto label_376f40;
            case 0x376FD8u: goto label_376fd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376D08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x376D10u;
label_376d10:
    // 0x376d10: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x376d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x376d14: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x376D14u;
    {
        const bool branch_taken_0x376d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D14u;
        // 0x376d18: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d14) {
            ctx->pc = 0x377190u;
            goto label_377190;
        }
    }
    ctx->pc = 0x376D1Cu;
    // 0x376d1c: 0x0  nop
    ctx->pc = 0x376d1cu;
    // NOP
label_376d20:
    // 0x376d20: 0x86230526  lh          $v1, 0x526($s1)
    ctx->pc = 0x376d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x376d24: 0xa6230512  sh          $v1, 0x512($s1)
    ctx->pc = 0x376d24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x376d28: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x376d28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x376d2c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x376d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d30: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x376d30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x376d34: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x376d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x376d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x376d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x376d3c: 0xa2230521  sb          $v1, 0x521($s1)
    ctx->pc = 0x376d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
label_376d40:
    // 0x376d40: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x376d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x376d44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x376D44u;
    {
        const bool branch_taken_0x376d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x376D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D44u;
        // 0x376d48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d44) {
            ctx->pc = 0x376D58u;
            goto label_376d58;
        }
    }
    ctx->pc = 0x376D4Cu;
    // 0x376d4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x376D4Cu;
    {
        const bool branch_taken_0x376d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376d4c) {
            ctx->pc = 0x376DD8u;
            goto label_376dd8;
        }
    }
    ctx->pc = 0x376D54u;
    // 0x376d54: 0x0  nop
    ctx->pc = 0x376d54u;
    // NOP
label_376d58:
    // 0x376d58: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x376d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376d5c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x376d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x376d60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x376d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x376d64: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376d64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376d68: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x376d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x376d6c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x376D6Cu;
    {
        const bool branch_taken_0x376d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x376d6c) {
            ctx->pc = 0x376DA8u;
            goto label_376da8;
        }
    }
    ctx->pc = 0x376D74u;
    // 0x376d74: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x376d74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376d78: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x376d78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x376d7c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x376D7Cu;
    {
        const bool branch_taken_0x376d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D7Cu;
        // 0x376d80: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d7c) {
            ctx->pc = 0x376DD0u;
            goto label_376dd0;
        }
    }
    ctx->pc = 0x376D84u;
    // 0x376d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d88: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x376d88u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x376d8c: 0x0  nop
    ctx->pc = 0x376d8cu;
    // NOP
    // 0x376d90: 0x0  nop
    ctx->pc = 0x376d90u;
    // NOP
    // 0x376d94: 0x2010  mfhi        $a0
    ctx->pc = 0x376d94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x376d98: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376d98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376d9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x376D9Cu;
    {
        const bool branch_taken_0x376d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D9Cu;
        // 0x376da0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d9c) {
            ctx->pc = 0x376DD0u;
            goto label_376dd0;
        }
    }
    ctx->pc = 0x376DA4u;
    // 0x376da4: 0x0  nop
    ctx->pc = 0x376da4u;
    // NOP
label_376da8:
    // 0x376da8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x376da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376dac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x376dacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x376db0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x376DB0u;
    {
        const bool branch_taken_0x376db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x376db0) {
            ctx->pc = 0x376DD0u;
            goto label_376dd0;
        }
    }
    ctx->pc = 0x376DB8u;
    // 0x376db8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376db8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376dc0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x376dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x376dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376DC4u;
    {
        const bool branch_taken_0x376dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376DC4u;
        // 0x376dc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376dc4) {
            ctx->pc = 0x376DD8u;
            goto label_376dd8;
        }
    }
    ctx->pc = 0x376DCCu;
    // 0x376dcc: 0x0  nop
    ctx->pc = 0x376dccu;
    // NOP
label_376dd0:
    // 0x376dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376dd4: 0x0  nop
    ctx->pc = 0x376dd4u;
    // NOP
label_376dd8:
    // 0x376dd8: 0x146000ed  bnez        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x376DD8u;
    {
        const bool branch_taken_0x376dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x376dd8) {
            ctx->pc = 0x377190u;
            goto label_377190;
        }
    }
    ctx->pc = 0x376DE0u;
    // 0x376de0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x376de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x376de4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x376de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x376de8: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x376DE8u;
    {
        const bool branch_taken_0x376de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376DE8u;
        // 0x376dec: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376de8) {
            ctx->pc = 0x377190u;
            goto label_377190;
        }
    }
    ctx->pc = 0x376DF0u;
label_376df0:
    // 0x376df0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x376DF0u;
    {
        const bool branch_taken_0x376df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x376df0) {
            ctx->pc = 0x376E48u;
            goto label_376e48;
        }
    }
    ctx->pc = 0x376DF8u;
    // 0x376df8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x376df8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x376dfc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x376dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x376e00: 0xc0aa098  jal         func_2A8260
    ctx->pc = 0x376E00u;
    SET_GPR_U32(ctx, 31, 0x376E08u);
    ctx->pc = 0x376E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E00u;
    // 0x376e04: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8260u, 0x376E00u, 0x376E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E08u;
label_376e08:
    // 0x376e08: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x376e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x376e0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x376e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x376e10: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x376e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x376e14: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x376e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
    // 0x376e18: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x376e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x376e1c: 0x34454402  ori         $a1, $v0, 0x4402
    ctx->pc = 0x376e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17410);
    // 0x376e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e24: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x376e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x376e28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x376e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x376e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x376e30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x376e34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e38: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x376E38u;
    SET_GPR_U32(ctx, 31, 0x376E40u);
    ctx->pc = 0x376E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E38u;
    // 0x376e3c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x376E38u, 0x376E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E40u;
label_376e40:
    // 0x376e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x376E40u;
    {
        const bool branch_taken_0x376e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376e40) {
            ctx->pc = 0x376E50u;
            goto label_376e50;
        }
    }
    ctx->pc = 0x376E48u;
label_376e48:
    // 0x376e48: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x376E48u;
    SET_GPR_U32(ctx, 31, 0x376E50u);
    ctx->pc = 0x376E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E48u;
    // 0x376e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x376E48u, 0x376E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E50u;
label_376e50:
    // 0x376e50: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x376e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x376e54: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x376e54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x376e58: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x376e58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x376e5c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x376e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x376e60: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x376e60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x376e64: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x376e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x376e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x376e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x376e6c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x376e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_376e70:
    // 0x376e70: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x376e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x376e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e78: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x376E78u;
    SET_GPR_U32(ctx, 31, 0x376E80u);
    ctx->pc = 0x376E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E78u;
    // 0x376e7c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x376E78u, 0x376E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E80u;
label_376e80:
    // 0x376e80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x376E80u;
    {
        const bool branch_taken_0x376e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E80u;
        // 0x376e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e80) {
            ctx->pc = 0x376E90u;
            goto label_376e90;
        }
    }
    ctx->pc = 0x376E88u;
    // 0x376e88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x376E88u;
    SET_GPR_U32(ctx, 31, 0x376E90u);
    ctx->pc = 0x376E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E88u;
    // 0x376e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x376E88u, 0x376E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E90u;
label_376e90:
    // 0x376e90: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x376e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x376e94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x376E94u;
    {
        const bool branch_taken_0x376e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x376E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E94u;
        // 0x376e98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e94) {
            ctx->pc = 0x376EA8u;
            goto label_376ea8;
        }
    }
    ctx->pc = 0x376E9Cu;
    // 0x376e9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x376E9Cu;
    {
        const bool branch_taken_0x376e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376e9c) {
            ctx->pc = 0x376F28u;
            goto label_376f28;
        }
    }
    ctx->pc = 0x376EA4u;
    // 0x376ea4: 0x0  nop
    ctx->pc = 0x376ea4u;
    // NOP
label_376ea8:
    // 0x376ea8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x376ea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376eac: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x376eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x376eb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x376eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x376eb4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376eb8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x376eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x376ebc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x376EBCu;
    {
        const bool branch_taken_0x376ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x376ebc) {
            ctx->pc = 0x376EF8u;
            goto label_376ef8;
        }
    }
    ctx->pc = 0x376EC4u;
    // 0x376ec4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x376ec4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376ec8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x376ec8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x376ecc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x376ECCu;
    {
        const bool branch_taken_0x376ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376ECCu;
        // 0x376ed0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ecc) {
            ctx->pc = 0x376F20u;
            goto label_376f20;
        }
    }
    ctx->pc = 0x376ED4u;
    // 0x376ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ed8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x376ed8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x376edc: 0x0  nop
    ctx->pc = 0x376edcu;
    // NOP
    // 0x376ee0: 0x0  nop
    ctx->pc = 0x376ee0u;
    // NOP
    // 0x376ee4: 0x2010  mfhi        $a0
    ctx->pc = 0x376ee4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x376ee8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376eec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x376EECu;
    {
        const bool branch_taken_0x376eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376EECu;
        // 0x376ef0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376eec) {
            ctx->pc = 0x376F20u;
            goto label_376f20;
        }
    }
    ctx->pc = 0x376EF4u;
    // 0x376ef4: 0x0  nop
    ctx->pc = 0x376ef4u;
    // NOP
label_376ef8:
    // 0x376ef8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x376ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x376efc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x376efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x376f00: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x376F00u;
    {
        const bool branch_taken_0x376f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x376f00) {
            ctx->pc = 0x376F20u;
            goto label_376f20;
        }
    }
    ctx->pc = 0x376F08u;
    // 0x376f08: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x376f08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x376f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376f10: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x376f10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x376f14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376F14u;
    {
        const bool branch_taken_0x376f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F14u;
        // 0x376f18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f14) {
            ctx->pc = 0x376F28u;
            goto label_376f28;
        }
    }
    ctx->pc = 0x376F1Cu;
    // 0x376f1c: 0x0  nop
    ctx->pc = 0x376f1cu;
    // NOP
label_376f20:
    // 0x376f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376f24: 0x0  nop
    ctx->pc = 0x376f24u;
    // NOP
label_376f28:
    // 0x376f28: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x376F28u;
    {
        const bool branch_taken_0x376f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x376f28) {
            ctx->pc = 0x377190u;
            goto label_377190;
        }
    }
    ctx->pc = 0x376F30u;
    // 0x376f30: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x376f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x376f34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x376f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x376f38: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x376F38u;
    {
        const bool branch_taken_0x376f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F38u;
        // 0x376f3c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f38) {
            ctx->pc = 0x377190u;
            goto label_377190;
        }
    }
    ctx->pc = 0x376F40u;
label_376f40:
    // 0x376f40: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x376F40u;
    SET_GPR_U32(ctx, 31, 0x376F48u);
    ctx->pc = 0x376F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F40u;
    // 0x376f44: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x376F40u, 0x376F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F48u;
label_376f48:
    // 0x376f48: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x376F48u;
    {
        const bool branch_taken_0x376f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x376F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376F48u;
        // 0x376f4c: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376f48) {
            ctx->pc = 0x376FB8u;
            goto label_376fb8;
        }
    }
    ctx->pc = 0x376F50u;
    // 0x376f50: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x376f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x376f54: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x376f54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x376f58: 0xc0aa054  jal         func_2A8150
    ctx->pc = 0x376F58u;
    SET_GPR_U32(ctx, 31, 0x376F60u);
    ctx->pc = 0x376F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F58u;
    // 0x376f5c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8150u, 0x376F58u, 0x376F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F60u;
label_376f60:
    // 0x376f60: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x376f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x376f64: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x376F64u;
    SET_GPR_U32(ctx, 31, 0x376F6Cu);
    ctx->pc = 0x376F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F64u;
    // 0x376f68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x376F64u, 0x376F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F6Cu;
label_376f6c:
    // 0x376f6c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x376f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x376f70: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x376f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x376f74: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x376f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x376f78: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x376F78u;
    SET_GPR_U32(ctx, 31, 0x376F80u);
    ctx->pc = 0x376F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376F78u;
    // 0x376f7c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x376F78u, 0x376F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376F80u;
label_376f80:
    // 0x376f80: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x376f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x376f84: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x376f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x376f88: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x376f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x376f8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x376f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x376f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f94: 0x34454402  ori         $a1, $v0, 0x4402
    ctx->pc = 0x376f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17410);
    // 0x376f98: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x376f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x376f9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x376f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376fa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x376fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376fa4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x376fa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376fa8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x376fa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376fac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x376FACu;
    SET_GPR_U32(ctx, 31, 0x376FB4u);
    ctx->pc = 0x376FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376FACu;
    // 0x376fb0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x376FACu, 0x376FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FB4u;
label_376fb4:
    // 0x376fb4: 0x0  nop
    ctx->pc = 0x376fb4u;
    // NOP
label_376fb8:
    // 0x376fb8: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x376fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x376fbc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x376fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x376fc0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x376fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x376fc4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x376fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x376fc8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x376fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x376fcc: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x376fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x376fd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x376fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x376fd4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x376fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_376fd8:
    // 0x376fd8: 0x8624055a  lh          $a0, 0x55A($s1)
    ctx->pc = 0x376fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1370)));
    // 0x376fdc: 0x24037ff0  addiu       $v1, $zero, 0x7FF0
    ctx->pc = 0x376fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x376fe0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x376fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x376fe4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x376fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x376fe8: 0xa624055a  sh          $a0, 0x55A($s1)
    ctx->pc = 0x376fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1370), (uint16_t)GPR_U32(ctx, 4));
    // 0x376fec: 0x8624055a  lh          $a0, 0x55A($s1)
    ctx->pc = 0x376fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1370)));
    // 0x376ff0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x376ff0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x376ff4: 0x0  nop
    ctx->pc = 0x376ff4u;
    // NOP
    // 0x376ff8: 0x0  nop
    ctx->pc = 0x376ff8u;
    // NOP
    // 0x376ffc: 0x1810  mfhi        $v1
    ctx->pc = 0x376ffcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x377000: 0xa623055a  sh          $v1, 0x55A($s1)
    ctx->pc = 0x377000u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1370), (uint16_t)GPR_U32(ctx, 3));
    // 0x377004: 0x8623055a  lh          $v1, 0x55A($s1)
    ctx->pc = 0x377004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1370)));
    // 0x377008: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x377008u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37700c: 0x0  nop
    ctx->pc = 0x37700cu;
    // NOP
    // 0x377010: 0x0  nop
    ctx->pc = 0x377010u;
    // NOP
    // 0x377014: 0x1010  mfhi        $v0
    ctx->pc = 0x377014u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x377018: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x377018u;
    {
        const bool branch_taken_0x377018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377018) {
            ctx->pc = 0x377058u;
            goto label_377058;
        }
    }
    ctx->pc = 0x377020u;
    // 0x377020: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x377020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x377024: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x377024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x377028: 0x3c022a00  lui         $v0, 0x2A00
    ctx->pc = 0x377028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10752 << 16));
    // 0x37702c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37702cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x377030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377034: 0x34454402  ori         $a1, $v0, 0x4402
    ctx->pc = 0x377034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17410);
    // 0x377038: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x377038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37703c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37703cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377040: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x377040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377044: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x377044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377048: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x377048u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37704c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37704Cu;
    SET_GPR_U32(ctx, 31, 0x377054u);
    ctx->pc = 0x377050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37704Cu;
    // 0x377050: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37704Cu, 0x377054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377054u;
label_377054:
    // 0x377054: 0x0  nop
    ctx->pc = 0x377054u;
    // NOP
label_377058:
    // 0x377058: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x377058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x37705c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377060: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x377060u;
    SET_GPR_U32(ctx, 31, 0x377068u);
    ctx->pc = 0x377064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377060u;
    // 0x377064: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x377060u, 0x377068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377068u;
label_377068:
    // 0x377068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x377068u;
    {
        const bool branch_taken_0x377068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377068u;
        // 0x37706c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377068) {
            ctx->pc = 0x377078u;
            goto label_377078;
        }
    }
    ctx->pc = 0x377070u;
    // 0x377070: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x377070u;
    SET_GPR_U32(ctx, 31, 0x377078u);
    ctx->pc = 0x377074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377070u;
    // 0x377074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x377070u, 0x377078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377078u;
label_377078:
    // 0x377078: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x377078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x37707c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x37707Cu;
    {
        const bool branch_taken_0x37707c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x377080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37707Cu;
        // 0x377080: 0x2861024f  slti        $at, $v1, 0x24F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37707c) {
            ctx->pc = 0x3770E8u;
            goto label_3770e8;
        }
    }
    ctx->pc = 0x377084u;
    // 0x377084: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x377084u;
    {
        const bool branch_taken_0x377084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x377084) {
            ctx->pc = 0x3770E8u;
            goto label_3770e8;
        }
    }
    ctx->pc = 0x37708Cu;
    // 0x37708c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x37708cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x377090: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x377090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x377094: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x377094u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x377098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37709c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x37709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3770a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3770a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3770a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3770a8: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x3770a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x3770ac: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3770acu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3770b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3770b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3770b4: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3770b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x3770b8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3770b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3770bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3770bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3770c0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3770c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3770c4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3770c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3770c8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3770c8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3770cc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3770ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3770d0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3770d0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3770d4: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3770d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3770d8: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3770d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3770dc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3770DCu;
    SET_GPR_U32(ctx, 31, 0x3770E4u);
    ctx->pc = 0x3770E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3770DCu;
    // 0x3770e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3770DCu, 0x3770E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770E4u;
label_3770e4:
    // 0x3770e4: 0x0  nop
    ctx->pc = 0x3770e4u;
    // NOP
label_3770e8:
    // 0x3770e8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3770e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3770ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3770ECu;
    {
        const bool branch_taken_0x3770ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3770F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3770ECu;
        // 0x3770f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3770ec) {
            ctx->pc = 0x377100u;
            goto label_377100;
        }
    }
    ctx->pc = 0x3770F4u;
    // 0x3770f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3770F4u;
    {
        const bool branch_taken_0x3770f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3770f4) {
            ctx->pc = 0x377180u;
            goto label_377180;
        }
    }
    ctx->pc = 0x3770FCu;
    // 0x3770fc: 0x0  nop
    ctx->pc = 0x3770fcu;
    // NOP
label_377100:
    // 0x377100: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x377100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x377104: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x377104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x377108: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x377108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37710c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x37710cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x377110: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x377110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x377114: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x377114u;
    {
        const bool branch_taken_0x377114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377114) {
            ctx->pc = 0x377150u;
            goto label_377150;
        }
    }
    ctx->pc = 0x37711Cu;
    // 0x37711c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x37711cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x377120: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x377120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x377124: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x377124u;
    {
        const bool branch_taken_0x377124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377124u;
        // 0x377128: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377124) {
            ctx->pc = 0x377178u;
            goto label_377178;
        }
    }
    ctx->pc = 0x37712Cu;
    // 0x37712c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37712cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377130: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x377130u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x377134: 0x0  nop
    ctx->pc = 0x377134u;
    // NOP
    // 0x377138: 0x0  nop
    ctx->pc = 0x377138u;
    // NOP
    // 0x37713c: 0x2010  mfhi        $a0
    ctx->pc = 0x37713cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x377140: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x377140u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x377144: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x377144u;
    {
        const bool branch_taken_0x377144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377144u;
        // 0x377148: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377144) {
            ctx->pc = 0x377178u;
            goto label_377178;
        }
    }
    ctx->pc = 0x37714Cu;
    // 0x37714c: 0x0  nop
    ctx->pc = 0x37714cu;
    // NOP
label_377150:
    // 0x377150: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x377150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x377154: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x377154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x377158: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x377158u;
    {
        const bool branch_taken_0x377158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377158) {
            ctx->pc = 0x377178u;
            goto label_377178;
        }
    }
    ctx->pc = 0x377160u;
    // 0x377160: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x377160u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x377164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377168: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x377168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x37716c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37716Cu;
    {
        const bool branch_taken_0x37716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37716Cu;
        // 0x377170: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37716c) {
            ctx->pc = 0x377180u;
            goto label_377180;
        }
    }
    ctx->pc = 0x377174u;
    // 0x377174: 0x0  nop
    ctx->pc = 0x377174u;
    // NOP
label_377178:
    // 0x377178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37717c: 0x0  nop
    ctx->pc = 0x37717cu;
    // NOP
label_377180:
    // 0x377180: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x377180u;
    {
        const bool branch_taken_0x377180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377180u;
        // 0x377184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377180) {
            ctx->pc = 0x377190u;
            goto label_377190;
        }
    }
    ctx->pc = 0x377188u;
    // 0x377188: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x377188u;
    SET_GPR_U32(ctx, 31, 0x377190u);
    ctx->pc = 0x37718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377188u;
    // 0x37718c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x377188u, 0x377190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377190u;
label_377190:
    // 0x377190: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x377190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377194: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x377194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377198: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37719c: 0x3e00008  jr          $ra
    ctx->pc = 0x37719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3771A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37719Cu;
        // 0x3771a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3771A4u;
}
