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

// Function: sub_0033CB60
// Address: 0x33cb60 - 0x33cba8
void sub_0033CB60_0x33cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CB60_0x33cb60");
#endif

    ctx->pc = 0x33cb60u;

    // 0x33cb60: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x33cb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x33cb64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cb68: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33CB68u;
    {
        const bool branch_taken_0x33cb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33cb68) {
            ctx->pc = 0x33CBA0u;
            goto label_33cba0;
        }
    }
    ctx->pc = 0x33CB70u;
    // 0x33cb70: 0x90822b00  lbu         $v0, 0x2B00($a0)
    ctx->pc = 0x33cb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11008)));
    // 0x33cb74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33CB74u;
    {
        const bool branch_taken_0x33cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb74) {
            ctx->pc = 0x33CBA0u;
            goto label_33cba0;
        }
    }
    ctx->pc = 0x33CB7Cu;
    // 0x33cb7c: 0x90822af2  lbu         $v0, 0x2AF2($a0)
    ctx->pc = 0x33cb7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10994)));
    // 0x33cb80: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x33cb80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33cb84: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x33CB84u;
    {
        const bool branch_taken_0x33cb84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cb84) {
            ctx->pc = 0x33CBA0u;
            goto label_33cba0;
        }
    }
    ctx->pc = 0x33CB8Cu;
    // 0x33cb8c: 0xdc830500  ld          $v1, 0x500($a0)
    ctx->pc = 0x33cb8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x33cb90: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33cb94: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x33cb94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x33cb98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33cb9c: 0xfc820500  sd          $v0, 0x500($a0)
    ctx->pc = 0x33cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1280), GPR_U64(ctx, 2));
label_33cba0:
    // 0x33cba0: 0x8097fe4  j           func_25FF90
    ctx->pc = 0x33CBA0u;
    ctx->pc = 0x25FF90u;
    sub_0025FF90_0x25ff90(rdram, ctx, runtime); return;
    ctx->pc = 0x33CBA8u;
}
