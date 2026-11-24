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

// Function: sub_00212720
// Address: 0x212720 - 0x21273c
void sub_00212720_0x212720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212720_0x212720");
#endif

    ctx->pc = 0x212720u;

    // 0x212720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212724: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x212724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x212728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21272c: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x21272cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
    // 0x212730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212734: 0x80848e0  j           func_212380
    ctx->pc = 0x212734u;
    ctx->pc = 0x212738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212734u;
    // 0x212738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21273Cu;
}
