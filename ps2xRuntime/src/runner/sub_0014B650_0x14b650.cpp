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

// Function: sub_0014B650
// Address: 0x14b650 - 0x14b698
void sub_0014B650_0x14b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B650_0x14b650");
#endif

    ctx->pc = 0x14b650u;

    // 0x14b650: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x14b650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14b654: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x14b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14b658: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x14b658u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b65c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x14b65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x14b660: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b664: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x14b664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x14b668: 0x2442ac00  addiu       $v0, $v0, -0x5400
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945792));
    // 0x14b66c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x14b66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14b670: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x14b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14b674: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x14b674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14b678: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b67c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x14b67cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x14b680: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b684: 0x2442abd0  addiu       $v0, $v0, -0x5430
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945744));
    // 0x14b688: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14b68c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14b68cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b690: 0x8054d34  j           func_1534D0
    ctx->pc = 0x14B690u;
    ctx->pc = 0x14B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B690u;
    // 0x14b694: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    sub_001534D0_0x1534d0(rdram, ctx, runtime); return;
    ctx->pc = 0x14B698u;
}
