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

// Function: sub_00391380
// Address: 0x391380 - 0x3913c0
void sub_00391380_0x391380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391380_0x391380");
#endif

    ctx->pc = 0x391380u;

    // 0x391380: 0x94832acc  lhu         $v1, 0x2ACC($a0)
    ctx->pc = 0x391380u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10956)));
    // 0x391384: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x391384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x391388: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x391388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x39138c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x39138cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x391390: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x391390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x391394: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x391394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x391398: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x391398u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x39139c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39139cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3913a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3913a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3913a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3913a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3913a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3913a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3913ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3913ACu;
    {
        const bool branch_taken_0x3913ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3913B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913ACu;
        // 0x3913b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3913ac) {
            ctx->pc = 0x3913B8u;
            goto label_3913b8;
        }
    }
    ctx->pc = 0x3913B4u;
    // 0x3913b4: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x3913b4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3913b8:
    // 0x3913b8: 0x80d0494  j           func_341250
    ctx->pc = 0x3913B8u;
    ctx->pc = 0x3913BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3913B8u;
    // 0x3913bc: 0xa4872ad4  sh          $a3, 0x2AD4($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 10964), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    sub_00341250_0x341250(rdram, ctx, runtime); return;
    ctx->pc = 0x3913C0u;
}
