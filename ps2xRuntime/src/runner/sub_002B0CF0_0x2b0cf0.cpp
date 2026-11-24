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

// Function: sub_002B0CF0
// Address: 0x2b0cf0 - 0x2b105c
void sub_002B0CF0_0x2b0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0CF0_0x2b0cf0");
#endif

    switch (ctx->pc) {
        case 0x2b0cf8u: goto label_2b0cf8;
        case 0x2b0de0u: goto label_2b0de0;
        case 0x2b0f20u: goto label_2b0f20;
        default: break;
    }

    ctx->pc = 0x2b0cf0u;

    // 0x2b0cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0cf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b0cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0cf8:
    // 0x2b0cf8: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0cfc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2b0cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2b0d00: 0x2ce10079  sltiu       $at, $a3, 0x79
    ctx->pc = 0x2b0d00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
    // 0x2b0d04: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d08: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2b0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2b0d0c: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d10: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d14: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2b0d14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2b0d18: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d1c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d20: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2b0d20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2b0d24: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d28: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d2c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2b0d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2b0d30: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d34: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d38: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2b0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2b0d3c: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d40: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d44: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2b0d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2b0d48: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d4c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d50: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x2b0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x2b0d54: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x2b0d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d58: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d5c: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x2b0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x2b0d60: 0x1420ffe5  bnez        $at, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2B0D60u;
    {
        const bool branch_taken_0x2b0d60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D60u;
        // 0x2b0d64: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d60) {
            ctx->pc = 0x2B0CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0cf8;
        }
    }
    ctx->pc = 0x2B0D68u;
    // 0x2b0d68: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2b0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0d6c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2b0d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b0d70: 0x90a70009  lbu         $a3, 0x9($a1)
    ctx->pc = 0x2b0d70u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0d74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b0d78: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2b0d78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2b0d7c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2b0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x2b0d80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2b0d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b0d84: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d88: 0xac8303e0  sw          $v1, 0x3E0($a0)
    ctx->pc = 0x2b0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 992), GPR_U32(ctx, 3));
    // 0x2b0d8c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2b0d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b0d90: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0d94: 0xac8303e4  sw          $v1, 0x3E4($a0)
    ctx->pc = 0x2b0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 996), GPR_U32(ctx, 3));
    // 0x2b0d98: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2b0d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b0d9c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0da0: 0xac8303e8  sw          $v1, 0x3E8($a0)
    ctx->pc = 0x2b0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1000), GPR_U32(ctx, 3));
    // 0x2b0da4: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2b0da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2b0da8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0dac: 0xac8303ec  sw          $v1, 0x3EC($a0)
    ctx->pc = 0x2b0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1004), GPR_U32(ctx, 3));
    // 0x2b0db0: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2b0db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b0db4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0db8: 0xac8303f0  sw          $v1, 0x3F0($a0)
    ctx->pc = 0x2b0db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 3));
    // 0x2b0dbc: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2b0dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2b0dc0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0dc4: 0xac8303f4  sw          $v1, 0x3F4($a0)
    ctx->pc = 0x2b0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1012), GPR_U32(ctx, 3));
    // 0x2b0dc8: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2b0dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2b0dcc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0dd0: 0xac8303f8  sw          $v1, 0x3F8($a0)
    ctx->pc = 0x2b0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1016), GPR_U32(ctx, 3));
    // 0x2b0dd4: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x2b0dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2b0dd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0ddc: 0xac8303fc  sw          $v1, 0x3FC($a0)
    ctx->pc = 0x2b0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1020), GPR_U32(ctx, 3));
label_2b0de0:
    // 0x2b0de0: 0x90a90008  lbu         $t1, 0x8($a1)
    ctx->pc = 0x2b0de0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0de4: 0x34c70080  ori         $a3, $a2, 0x80
    ctx->pc = 0x2b0de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0de8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2b0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b0dec: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2b0decu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0df0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2b0df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b0df4: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x2b0df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0df8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0dfc: 0x836021  addu        $t4, $a0, $v1
    ctx->pc = 0x2b0dfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b0e00: 0x24c70003  addiu       $a3, $a2, 0x3
    ctx->pc = 0x2b0e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2b0e04: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x2b0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2b0e08: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x2b0e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x2b0e0c: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2b0e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2b0e10: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2b0e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b0e14: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x2b0e14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x2b0e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0e1c: 0x90a90008  lbu         $t1, 0x8($a1)
    ctx->pc = 0x2b0e1cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0e20: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2b0e20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0e24: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x2b0e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b0e28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b0e2c: 0x885821  addu        $t3, $a0, $t0
    ctx->pc = 0x2b0e2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2b0e30: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x2b0e30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x2b0e34: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2b0e34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0e38: 0x24c70005  addiu       $a3, $a2, 0x5
    ctx->pc = 0x2b0e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x2b0e3c: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x2b0e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2b0e40: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x2b0e40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x2b0e44: 0x96e00  sll         $t5, $t1, 24
    ctx->pc = 0x2b0e44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2b0e48: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2b0e48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0e4c: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x2b0e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x2b0e50: 0x24c70006  addiu       $a3, $a2, 0x6
    ctx->pc = 0x2b0e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2b0e54: 0x90ac0008  lbu         $t4, 0x8($a1)
    ctx->pc = 0x2b0e54u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0e58: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x2b0e58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x2b0e5c: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x2b0e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2b0e60: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2b0e60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0e64: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x2b0e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0e68: 0x24c70007  addiu       $a3, $a2, 0x7
    ctx->pc = 0x2b0e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x2b0e6c: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x2b0e6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x2b0e70: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2b0e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2b0e74: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2b0e74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0e78: 0x2cc1006f  sltiu       $at, $a2, 0x6F
    ctx->pc = 0x2b0e78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
    // 0x2b0e7c: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x2b0e7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x2b0e80: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2b0e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0e84: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x2b0e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
    // 0x2b0e88: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2b0e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0e8c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0e90: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x2b0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x2b0e94: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2b0e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0e98: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0e9c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x2b0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x2b0ea0: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2b0ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0ea4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0ea8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2b0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2b0eac: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2b0eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0eb0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0eb4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2b0eb8: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x2b0eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0ebc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2b0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b0ec0: 0x1420ffc7  bnez        $at, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2B0EC0u;
    {
        const bool branch_taken_0x2b0ec0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EC0u;
        // 0x2b0ec4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ec0) {
            ctx->pc = 0x2B0DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0de0;
        }
    }
    ctx->pc = 0x2B0EC8u;
    // 0x2b0ec8: 0x90a90008  lbu         $t1, 0x8($a1)
    ctx->pc = 0x2b0ec8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0ecc: 0x34c30080  ori         $v1, $a2, 0x80
    ctx->pc = 0x2b0eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0ed0: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x2b0ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0ed4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2b0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b0ed8: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x2b0ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0edc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2b0edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b0ee0: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x2b0ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0ee4: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x2b0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2b0ee8: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2b0ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0eec: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2b0eecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2b0ef0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2b0ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b0ef4: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x2b0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x2b0ef8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2b0ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b0efc: 0x90a80008  lbu         $t0, 0x8($a1)
    ctx->pc = 0x2b0efcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0f00: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2b0f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b0f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0f08: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2b0f08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2b0f0c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x2b0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x2b0f10: 0x90a70008  lbu         $a3, 0x8($a1)
    ctx->pc = 0x2b0f10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0f14: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2b0f14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2b0f18: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2b0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2b0f1c: 0x0  nop
    ctx->pc = 0x2b0f1cu;
    // NOP
label_2b0f20:
    // 0x2b0f20: 0x90a90009  lbu         $t1, 0x9($a1)
    ctx->pc = 0x2b0f20u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0f24: 0x34670080  ori         $a3, $v1, 0x80
    ctx->pc = 0x2b0f24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b0f28: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2b0f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b0f2c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2b0f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0f30: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2b0f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0f34: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2b0f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0f38: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x2b0f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0f3c: 0x866021  addu        $t4, $a0, $a2
    ctx->pc = 0x2b0f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b0f40: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x2b0f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2b0f44: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2b0f44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2b0f48: 0x34c70080  ori         $a3, $a2, 0x80
    ctx->pc = 0x2b0f48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0f4c: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x2b0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x2b0f50: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2b0f50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0f54: 0x90a80009  lbu         $t0, 0x9($a1)
    ctx->pc = 0x2b0f54u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0f58: 0x24660003  addiu       $a2, $v1, 0x3
    ctx->pc = 0x2b0f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b0f5c: 0x875821  addu        $t3, $a0, $a3
    ctx->pc = 0x2b0f5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0f60: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2b0f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0f64: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2b0f64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0f68: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x2b0f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b0f6c: 0x875021  addu        $t2, $a0, $a3
    ctx->pc = 0x2b0f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0f70: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2b0f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0f74: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2b0f74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0f78: 0x86e00  sll         $t5, $t0, 24
    ctx->pc = 0x2b0f78u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2b0f7c: 0x24660005  addiu       $a2, $v1, 0x5
    ctx->pc = 0x2b0f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2b0f80: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x2b0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x2b0f84: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x2b0f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0f88: 0x90ac0009  lbu         $t4, 0x9($a1)
    ctx->pc = 0x2b0f88u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0f8c: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2b0f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0f90: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2b0f90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0f94: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x2b0f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2b0f98: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x2b0f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b0f9c: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2b0f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0fa0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2b0fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0fa4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2b0fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b0fa8: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x2b0fa8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x2b0fac: 0x24660007  addiu       $a2, $v1, 0x7
    ctx->pc = 0x2b0facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2b0fb0: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x2b0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x2b0fb4: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2b0fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b0fb8: 0x90ab0009  lbu         $t3, 0x9($a1)
    ctx->pc = 0x2b0fb8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0fbc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2b0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2b0fc0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2b0fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b0fc4: 0x2c610034  sltiu       $at, $v1, 0x34
    ctx->pc = 0x2b0fc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x2b0fc8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2b0fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b0fcc: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x2b0fccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x2b0fd0: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x2b0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x2b0fd4: 0x90aa0009  lbu         $t2, 0x9($a1)
    ctx->pc = 0x2b0fd4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0fd8: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x2b0fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x2b0fdc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x2b0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x2b0fe0: 0x90a90009  lbu         $t1, 0x9($a1)
    ctx->pc = 0x2b0fe0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0fe4: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2b0fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x2b0fe8: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x2b0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x2b0fec: 0x90a80009  lbu         $t0, 0x9($a1)
    ctx->pc = 0x2b0fecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0ff0: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2b0ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2b0ff4: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x2b0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x2b0ff8: 0x90a70009  lbu         $a3, 0x9($a1)
    ctx->pc = 0x2b0ff8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b0ffc: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2b0ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2b1000: 0x1420ffc7  bnez        $at, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2B1000u;
    {
        const bool branch_taken_0x2b1000 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1000u;
        // 0x2b1004: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1000) {
            ctx->pc = 0x2B0F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0f20;
        }
    }
    ctx->pc = 0x2B1008u;
    // 0x2b1008: 0x34660080  ori         $a2, $v1, 0x80
    ctx->pc = 0x2b1008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b100c: 0x90a80009  lbu         $t0, 0x9($a1)
    ctx->pc = 0x2b100cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b1010: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2b1010u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b1014: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2b1014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b1018: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2b1018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b101c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2b101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2b1020: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2b1020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2b1024: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2b1024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b1028: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2b1028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b102c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b102cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b1030: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2b1030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b1034: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b1034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b1038: 0x82600  sll         $a0, $t0, 24
    ctx->pc = 0x2b1038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2b103c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2b103cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2b1040: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x2b1040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b1044: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2b1044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2b1048: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2b1048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2b104c: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x2b104cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x2b1050: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2b1050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2b1054: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1054u;
        // 0x2b1058: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B105Cu;
}
