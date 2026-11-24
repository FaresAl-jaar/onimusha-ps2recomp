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

// Function: sub_001D09A0
// Address: 0x1d09a0 - 0x1d0ad8
void sub_001D09A0_0x1d09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D09A0_0x1d09a0");
#endif

    ctx->pc = 0x1d09a0u;

    // 0x1d09a0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x1d09a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d09a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d09a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09a8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D09A8u;
    {
        const bool branch_taken_0x1d09a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09A8u;
        // 0x1d09ac: 0x24a30014  addiu       $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09a8) {
            ctx->pc = 0x1D09C0u;
            goto label_1d09c0;
        }
    }
    ctx->pc = 0x1D09B0u;
    // 0x1d09b0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1d09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d09b4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1d09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1d09b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D09B8u;
    {
        const bool branch_taken_0x1d09b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09B8u;
        // 0x1d09bc: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09b8) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D09C0u;
label_1d09c0:
    // 0x1d09c0: 0x94a70030  lhu         $a3, 0x30($a1)
    ctx->pc = 0x1d09c0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d09c4: 0x94a40032  lhu         $a0, 0x32($a1)
    ctx->pc = 0x1d09c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x1d09c8: 0x3c080087  lui         $t0, 0x87
    ctx->pc = 0x1d09c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)135 << 16));
    // 0x1d09cc: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x1d09ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d09d0: 0x2508c640  addiu       $t0, $t0, -0x39C0
    ctx->pc = 0x1d09d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952512));
    // 0x1d09d4: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d09d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1d09d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d09d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d09dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d09e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d09e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d09e4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1d09e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d09e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d09ec: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1d09ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1d09f0: 0x94a70030  lhu         $a3, 0x30($a1)
    ctx->pc = 0x1d09f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d09f4: 0x94a40032  lhu         $a0, 0x32($a1)
    ctx->pc = 0x1d09f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x1d09f8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d09f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1d09fc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d09fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d0a00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d0a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0a04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d0a04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d0a08: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1d0a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d0a0c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d0a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d0a10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d0a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0a14: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0A14u;
    {
        const bool branch_taken_0x1d0a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A14u;
        // 0x1d0a18: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a14) {
            ctx->pc = 0x1D0A20u;
            goto label_1d0a20;
        }
    }
    ctx->pc = 0x1D0A1Cu;
    // 0x1d0a1c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1d0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1d0a20:
    // 0x1d0a20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1d0a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0a24: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0A24u;
    {
        const bool branch_taken_0x1d0a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a24) {
            ctx->pc = 0x1D0A38u;
            goto label_1d0a38;
        }
    }
    ctx->pc = 0x1D0A2Cu;
    // 0x1d0a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d0a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0a30: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D0A30u;
    {
        const bool branch_taken_0x1d0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A30u;
        // 0x1d0a34: 0xacc40014  sw          $a0, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a30) {
            ctx->pc = 0x1D0A98u;
            goto label_1d0a98;
        }
    }
    ctx->pc = 0x1D0A38u;
label_1d0a38:
    // 0x1d0a38: 0x94a70030  lhu         $a3, 0x30($a1)
    ctx->pc = 0x1d0a38u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d0a3c: 0x94a40032  lhu         $a0, 0x32($a1)
    ctx->pc = 0x1d0a3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x1d0a40: 0x3c080087  lui         $t0, 0x87
    ctx->pc = 0x1d0a40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)135 << 16));
    // 0x1d0a44: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1d0a44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0a48: 0x2508c690  addiu       $t0, $t0, -0x3970
    ctx->pc = 0x1d0a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952592));
    // 0x1d0a4c: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d0a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1d0a50: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d0a54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0a58: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d0a5c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d0a60: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d0a64: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1d0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1d0a68: 0x94a70030  lhu         $a3, 0x30($a1)
    ctx->pc = 0x1d0a68u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d0a6c: 0x94a40032  lhu         $a0, 0x32($a1)
    ctx->pc = 0x1d0a6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x1d0a70: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d0a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1d0a74: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d0a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d0a78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0a7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d0a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d0a80: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1d0a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d0a84: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d0a88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0a8c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0A8Cu;
    {
        const bool branch_taken_0x1d0a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a8c) {
            ctx->pc = 0x1D0A98u;
            goto label_1d0a98;
        }
    }
    ctx->pc = 0x1D0A94u;
    // 0x1d0a94: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1d0a98:
    // 0x1d0a98: 0x8f8487ec  lw          $a0, -0x7814($gp)
    ctx->pc = 0x1d0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936556)));
    // 0x1d0a9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0A9Cu;
    {
        const bool branch_taken_0x1d0a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a9c) {
            ctx->pc = 0x1D0AB8u;
            goto label_1d0ab8;
        }
    }
    ctx->pc = 0x1D0AA4u;
    // 0x1d0aa4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1d0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1d0aa8: 0x8f8387ec  lw          $v1, -0x7814($gp)
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936556)));
    // 0x1d0aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0AACu;
    {
        const bool branch_taken_0x1d0aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AACu;
        // 0x1d0ab0: 0xac650010  sw          $a1, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0aac) {
            ctx->pc = 0x1D0AC0u;
            goto label_1d0ac0;
        }
    }
    ctx->pc = 0x1D0AB4u;
    // 0x1d0ab4: 0x0  nop
    ctx->pc = 0x1d0ab4u;
    // NOP
label_1d0ab8:
    // 0x1d0ab8: 0xaf8587e8  sw          $a1, -0x7818($gp)
    ctx->pc = 0x1d0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936552), GPR_U32(ctx, 5));
    // 0x1d0abc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1d0ac0:
    // 0x1d0ac0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d0ac4: 0xaf8587ec  sw          $a1, -0x7814($gp)
    ctx->pc = 0x1d0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936556), GPR_U32(ctx, 5));
    // 0x1d0ac8: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1d0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1d0acc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1d0accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d0ad0: 0x807ccc8  j           func_1F3320
    ctx->pc = 0x1D0AD0u;
    ctx->pc = 0x1D0AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0AD0u;
    // 0x1d0ad4: 0x2484c6e0  addiu       $a0, $a0, -0x3920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3320u;
    sub_001F3320_0x1f3320(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0AD8u;
}
