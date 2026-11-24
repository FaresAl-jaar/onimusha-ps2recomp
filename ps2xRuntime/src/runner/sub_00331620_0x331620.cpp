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

// Function: sub_00331620
// Address: 0x331620 - 0x33165c
void sub_00331620_0x331620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331620_0x331620");
#endif

    ctx->pc = 0x331620u;

    // 0x331620: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x331620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x331624: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x331624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x331628: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x331628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x33162c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x33162cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331630: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331634: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x331634u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331638: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x331638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33163c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x33163cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x331640: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x331640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x331644: 0x2529ce18  addiu       $t1, $t1, -0x31E8
    ctx->pc = 0x331644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954520));
    // 0x331648: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x331648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33164c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x33164cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x331650: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x331650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x331654: 0x8095f88  j           func_257E20
    ctx->pc = 0x331654u;
    ctx->pc = 0x331658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331654u;
    // 0x331658: 0x2567e  dsrl32      $t2, $v0, 25 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    sub_00257E20_0x257e20(rdram, ctx, runtime); return;
    ctx->pc = 0x33165Cu;
}
