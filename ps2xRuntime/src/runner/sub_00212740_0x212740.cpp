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

// Function: sub_00212740
// Address: 0x212740 - 0x21275c
void sub_00212740_0x212740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212740_0x212740");
#endif

    ctx->pc = 0x212740u;

    // 0x212740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212744: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x212744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x212748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21274c: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x21274cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
    // 0x212750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212754: 0x80848e0  j           func_212380
    ctx->pc = 0x212754u;
    ctx->pc = 0x212758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212754u;
    // 0x212758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21275Cu;
}
