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

// Function: sub_003269D0
// Address: 0x3269d0 - 0x326a98
void sub_003269D0_0x3269d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003269D0_0x3269d0");
#endif

    ctx->pc = 0x3269d0u;

    // 0x3269d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3269d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3269d4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3269d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3269d8: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x3269d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x3269dc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3269dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3269e0: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x3269e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x3269e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3269e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3269e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3269e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3269ec: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3269ECu;
    {
        const bool branch_taken_0x3269ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3269ec) {
            ctx->pc = 0x326A00u;
            goto label_326a00;
        }
    }
    ctx->pc = 0x3269F4u;
    // 0x3269f4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3269f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3269f8: 0x8c250d38  lw          $a1, 0xD38($at)
    ctx->pc = 0x3269f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x910D38u));
    // 0x3269fc: 0x0  nop
    ctx->pc = 0x3269fcu;
    // NOP
label_326a00:
    // 0x326a00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x326a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x326a04: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x326a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x326a08: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x326a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x326a0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x326a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x326a10: 0x90a50010  lbu         $a1, 0x10($a1)
    ctx->pc = 0x326a10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x326a14: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x326A14u;
    {
        const bool branch_taken_0x326a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x326a14) {
            ctx->pc = 0x326A60u;
            goto label_326a60;
        }
    }
    ctx->pc = 0x326A1Cu;
    // 0x326a1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x326a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326a20: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x326A20u;
    {
        const bool branch_taken_0x326a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x326a20) {
            ctx->pc = 0x326A48u;
            goto label_326a48;
        }
    }
    ctx->pc = 0x326A28u;
    // 0x326a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x326a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326a2c: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326A2Cu;
    {
        const bool branch_taken_0x326a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x326a2c) {
            ctx->pc = 0x326A40u;
            goto label_326a40;
        }
    }
    ctx->pc = 0x326A34u;
    // 0x326a34: 0x0  nop
    ctx->pc = 0x326a34u;
    // NOP
    // 0x326a38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x326A38u;
    {
        const bool branch_taken_0x326a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A38u;
        // 0x326a3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a38) {
            ctx->pc = 0x326A78u;
            goto label_326a78;
        }
    }
    ctx->pc = 0x326A40u;
label_326a40:
    // 0x326a40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x326A40u;
    {
        const bool branch_taken_0x326a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A40u;
        // 0x326a44: 0x2405040f  addiu       $a1, $zero, 0x40F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a40) {
            ctx->pc = 0x326A78u;
            goto label_326a78;
        }
    }
    ctx->pc = 0x326A48u;
label_326a48:
    // 0x326a48: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x326a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x326a4c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x326a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x326a50: 0x87280a  movz        $a1, $a0, $a3
    ctx->pc = 0x326a50u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x326a54: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x326a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x326a58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x326A58u;
    {
        const bool branch_taken_0x326a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A58u;
        // 0x326a5c: 0x34850004  ori         $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a58) {
            ctx->pc = 0x326A78u;
            goto label_326a78;
        }
    }
    ctx->pc = 0x326A60u;
label_326a60:
    // 0x326a60: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x326a64: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x326a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x326a68: 0x87280a  movz        $a1, $a0, $a3
    ctx->pc = 0x326a68u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x326a6c: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x326a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x326a70: 0x34850004  ori         $a1, $a0, 0x4
    ctx->pc = 0x326a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x326a74: 0x0  nop
    ctx->pc = 0x326a74u;
    // NOP
label_326a78:
    // 0x326a78: 0x90c90001  lbu         $t1, 0x1($a2)
    ctx->pc = 0x326a78u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x326a7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x326a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a80: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x326a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x326a84: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x326a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x326a88: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x326a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x326a8c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x326a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a90: 0x80c99d0  j           func_326740
    ctx->pc = 0x326A90u;
    ctx->pc = 0x326A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A90u;
    // 0x326a94: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    sub_00326740_0x326740(rdram, ctx, runtime); return;
    ctx->pc = 0x326A98u;
}
