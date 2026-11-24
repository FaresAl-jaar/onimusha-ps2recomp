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

// Function: sub_001C1DD0
// Address: 0x1c1dd0 - 0x1c1fc0
void sub_001C1DD0_0x1c1dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1DD0_0x1c1dd0");
#endif

    switch (ctx->pc) {
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1ef8u: goto label_1c1ef8;
        default: break;
    }

    ctx->pc = 0x1c1dd0u;

    // 0x1c1dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1dd4: 0x2d630002  sltiu       $v1, $t3, 0x2
    ctx->pc = 0x1c1dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1ddc: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1C1DDCu;
    {
        const bool branch_taken_0x1c1ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DDCu;
        // 0x1c1de0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ddc) {
            ctx->pc = 0x1C1FB0u;
            goto label_1c1fb0;
        }
    }
    ctx->pc = 0x1C1DE4u;
    // 0x1c1de4: 0x2d030002  sltiu       $v1, $t0, 0x2
    ctx->pc = 0x1c1de4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1de8: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x1C1DE8u;
    {
        const bool branch_taken_0x1c1de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DE8u;
        // 0x1c1dec: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1de8) {
            ctx->pc = 0x1C1FB0u;
            goto label_1c1fb0;
        }
    }
    ctx->pc = 0x1C1DF0u;
label_1c1df0:
    // 0x1c1df0: 0x240c0080  addiu       $t4, $zero, 0x80
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1df4: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x1c1df4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c1df8: 0x180782d  daddu       $t7, $t4, $zero
    ctx->pc = 0x1c1df8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1dfc: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1c1dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e00: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1c1e00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e04: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C1E04u;
    {
        const bool branch_taken_0x1c1e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E04u;
        // 0x1c1e08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e04) {
            ctx->pc = 0x1C1EE8u;
            goto label_1c1ee8;
        }
    }
    ctx->pc = 0x1C1E0Cu;
    // 0x1c1e0c: 0x0  nop
    ctx->pc = 0x1c1e0cu;
    // NOP
label_1c1e10:
    // 0x1c1e10: 0xe36821  addu        $t5, $a3, $v1
    ctx->pc = 0x1c1e10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1c1e14: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x1c1e14u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c1e18: 0x1b8082a  slt         $at, $t5, $t8
    ctx->pc = 0x1c1e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x1c1e1c: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C1E1Cu;
    {
        const bool branch_taken_0x1c1e1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e1c) {
            ctx->pc = 0x1C1ED8u;
            goto label_1c1ed8;
        }
    }
    ctx->pc = 0x1C1E24u;
    // 0x1c1e24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1E24u;
    {
        const bool branch_taken_0x1c1e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E24u;
        // 0x1c1e28: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e24) {
            ctx->pc = 0x1C1E30u;
            goto label_1c1e30;
        }
    }
    ctx->pc = 0x1C1E2Cu;
    // 0x1c1e2c: 0x246fffff  addiu       $t7, $v1, -0x1
    ctx->pc = 0x1c1e2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c1e30:
    // 0x1c1e30: 0xef2021  addu        $a0, $a3, $t7
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x1c1e34: 0x908c0000  lbu         $t4, 0x0($a0)
    ctx->pc = 0x1c1e34u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1e38: 0x170c0003  bne         $t8, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1E38u;
    {
        const bool branch_taken_0x1c1e38 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 12));
        ctx->pc = 0x1C1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E38u;
        // 0x1c1e3c: 0x1ac2023  subu        $a0, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e38) {
            ctx->pc = 0x1C1E48u;
            goto label_1c1e48;
        }
    }
    ctx->pc = 0x1C1E40u;
    // 0x1c1e40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1E40u;
    {
        const bool branch_taken_0x1c1e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E40u;
        // 0x1c1e44: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e40) {
            ctx->pc = 0x1C1E60u;
            goto label_1c1e60;
        }
    }
    ctx->pc = 0x1C1E48u;
label_1c1e48:
    // 0x1c1e48: 0x30c6023  subu        $t4, $t8, $t4
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
    // 0x1c1e4c: 0xc61c0  sll         $t4, $t4, 7
    ctx->pc = 0x1c1e4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
    // 0x1c1e50: 0x184001a  div         $zero, $t4, $a0
    ctx->pc = 0x1c1e50u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1e54: 0x0  nop
    ctx->pc = 0x1c1e54u;
    // NOP
    // 0x1c1e58: 0x0  nop
    ctx->pc = 0x1c1e58u;
    // NOP
    // 0x1c1e5c: 0x6812  mflo        $t5
    ctx->pc = 0x1c1e5cu;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_1c1e60:
    // 0x1c1e60: 0xf2080  sll         $a0, $t7, 2
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c1e64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1e68: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1c1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1c1e6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1c1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c1e70: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1c1e70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1e74: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1e78: 0x31ec00ff  andi        $t4, $t7, 0xFF
    ctx->pc = 0x1c1e78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x1c1e7c: 0xf1a02  srl         $v1, $t7, 8
    ctx->pc = 0x1c1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x1c1e80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c1e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1e84: 0xf1c02  srl         $v1, $t7, 16
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1c1e88: 0x332f00ff  andi        $t7, $t9, 0xFF
    ctx->pc = 0x1c1e88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)255);
    // 0x1c1e8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c1e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1e90: 0x1ec8023  subu        $s0, $t7, $t4
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1c1e94: 0x1b08818  mult        $s1, $t5, $s0
    ctx->pc = 0x1c1e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c1e98: 0x197a02  srl         $t7, $t9, 8
    ctx->pc = 0x1c1e98u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 25), 8));
    // 0x1c1e9c: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x1c1e9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x1c1ea0: 0x1e48023  subu        $s0, $t7, $a0
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1c1ea4: 0x197c02  srl         $t7, $t9, 16
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 25), 16));
    // 0x1c1ea8: 0x71b08018  mult1       $s0, $t5, $s0
    ctx->pc = 0x1c1ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1c1eac: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x1c1eacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x1c1eb0: 0x1081c2  srl         $s0, $s0, 7
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x1c1eb4: 0x1e3c823  subu        $t9, $t7, $v1
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1c1eb8: 0x907821  addu        $t7, $a0, $s0
    ctx->pc = 0x1c1eb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c1ebc: 0x1121c2  srl         $a0, $s1, 7
    ctx->pc = 0x1c1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
    // 0x1c1ec0: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x1c1ec0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1c1ec4: 0x1b92018  mult        $a0, $t5, $t9
    ctx->pc = 0x1c1ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c1ec8: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x1c1ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1ECCu;
    {
        const bool branch_taken_0x1c1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ECCu;
        // 0x1c1ed0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ecc) {
            ctx->pc = 0x1C1EE8u;
            goto label_1c1ee8;
        }
    }
    ctx->pc = 0x1C1ED4u;
    // 0x1c1ed4: 0x0  nop
    ctx->pc = 0x1c1ed4u;
    // NOP
label_1c1ed8:
    // 0x1c1ed8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1edc: 0x68682b  sltu        $t5, $v1, $t0
    ctx->pc = 0x1c1edcu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c1ee0: 0x15a0ffcb  bnez        $t5, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1C1EE0u;
    {
        const bool branch_taken_0x1c1ee0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ee0) {
            ctx->pc = 0x1C1E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1e10;
        }
    }
    ctx->pc = 0x1C1EE8u;
label_1c1ee8:
    // 0x1c1ee8: 0xb082b  sltu        $at, $zero, $t3
    ctx->pc = 0x1c1ee8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1c1eec: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C1EECu;
    {
        const bool branch_taken_0x1c1eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EECu;
        // 0x1c1ef0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1eec) {
            ctx->pc = 0x1C1F80u;
            goto label_1c1f80;
        }
    }
    ctx->pc = 0x1C1EF4u;
    // 0x1c1ef4: 0x0  nop
    ctx->pc = 0x1c1ef4u;
    // NOP
label_1c1ef8:
    // 0x1c1ef8: 0x1436821  addu        $t5, $t2, $v1
    ctx->pc = 0x1c1ef8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1c1efc: 0x91b00000  lbu         $s0, 0x0($t5)
    ctx->pc = 0x1c1efcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c1f00: 0x218082a  slt         $at, $s0, $t8
    ctx->pc = 0x1c1f00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x1c1f04: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C1F04u;
    {
        const bool branch_taken_0x1c1f04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f04) {
            ctx->pc = 0x1C1F70u;
            goto label_1c1f70;
        }
    }
    ctx->pc = 0x1C1F0Cu;
    // 0x1c1f0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1F0Cu;
    {
        const bool branch_taken_0x1c1f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F0Cu;
        // 0x1c1f10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f0c) {
            ctx->pc = 0x1C1F18u;
            goto label_1c1f18;
        }
    }
    ctx->pc = 0x1C1F14u;
    // 0x1c1f14: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1c1f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c1f18:
    // 0x1c1f18: 0x1516821  addu        $t5, $t2, $s1
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1c1f1c: 0x91ae0000  lbu         $t6, 0x0($t5)
    ctx->pc = 0x1c1f1cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c1f20: 0x170e0003  bne         $t8, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1F20u;
    {
        const bool branch_taken_0x1c1f20 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 14));
        ctx->pc = 0x1C1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F20u;
        // 0x1c1f24: 0x20e6823  subu        $t5, $s0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f20) {
            ctx->pc = 0x1C1F30u;
            goto label_1c1f30;
        }
    }
    ctx->pc = 0x1C1F28u;
    // 0x1c1f28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1F28u;
    {
        const bool branch_taken_0x1c1f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F28u;
        // 0x1c1f2c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f28) {
            ctx->pc = 0x1C1F48u;
            goto label_1c1f48;
        }
    }
    ctx->pc = 0x1C1F30u;
label_1c1f30:
    // 0x1c1f30: 0x30e7023  subu        $t6, $t8, $t6
    ctx->pc = 0x1c1f30u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
    // 0x1c1f34: 0xe71c0  sll         $t6, $t6, 7
    ctx->pc = 0x1c1f34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 7));
    // 0x1c1f38: 0x1cd001a  div         $zero, $t6, $t5
    ctx->pc = 0x1c1f38u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1f3c: 0x0  nop
    ctx->pc = 0x1c1f3cu;
    // NOP
    // 0x1c1f40: 0x0  nop
    ctx->pc = 0x1c1f40u;
    // NOP
    // 0x1c1f44: 0x7012  mflo        $t6
    ctx->pc = 0x1c1f44u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_1c1f48:
    // 0x1c1f48: 0x1316821  addu        $t5, $t1, $s1
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1c1f4c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c1f50: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x1c1f50u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c1f54: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1c1f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1f58: 0x6d1823  subu        $v1, $v1, $t5
    ctx->pc = 0x1c1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1c1f5c: 0x1c31818  mult        $v1, $t6, $v1
    ctx->pc = 0x1c1f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c1f60: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1c1f60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1c1f64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1F64u;
    {
        const bool branch_taken_0x1c1f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F64u;
        // 0x1c1f68: 0x1a37021  addu        $t6, $t5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f64) {
            ctx->pc = 0x1C1F80u;
            goto label_1c1f80;
        }
    }
    ctx->pc = 0x1C1F6Cu;
    // 0x1c1f6c: 0x0  nop
    ctx->pc = 0x1c1f6cu;
    // NOP
label_1c1f70:
    // 0x1c1f70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1f74: 0x6b682b  sltu        $t5, $v1, $t3
    ctx->pc = 0x1c1f74u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1c1f78: 0x15a0ffdf  bnez        $t5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C1F78u;
    {
        const bool branch_taken_0x1c1f78 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f78) {
            ctx->pc = 0x1C1EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1ef8;
        }
    }
    ctx->pc = 0x1C1F80u;
label_1c1f80:
    // 0x1c1f80: 0xf1a00  sll         $v1, $t7, 8
    ctx->pc = 0x1c1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 8));
    // 0x1c1f84: 0x46c00  sll         $t5, $a0, 16
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1c1f88: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x1c1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1c1f8c: 0xe2600  sll         $a0, $t6, 24
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c1f90: 0x1a36021  addu        $t4, $t5, $v1
    ctx->pc = 0x1c1f90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1c1f94: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x1c1f94u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x1c1f98: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1c1f9c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1c1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1c1fa0: 0x2f030100  sltiu       $v1, $t8, 0x100
    ctx->pc = 0x1c1fa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c1fa4: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1C1FA4u;
    {
        const bool branch_taken_0x1c1fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA4u;
        // 0x1c1fa8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fa4) {
            ctx->pc = 0x1C1DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1df0;
        }
    }
    ctx->pc = 0x1C1FACu;
    // 0x1c1fac: 0x0  nop
    ctx->pc = 0x1c1facu;
    // NOP
label_1c1fb0:
    // 0x1c1fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FB8u;
        // 0x1c1fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FC0u;
}
