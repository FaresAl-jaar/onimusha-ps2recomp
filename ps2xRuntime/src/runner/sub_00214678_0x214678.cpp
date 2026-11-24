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

// Function: sub_00214678
// Address: 0x214678 - 0x214694
void sub_00214678_0x214678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214678_0x214678");
#endif

    ctx->pc = 0x214678u;

    // 0x214678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21467c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21467cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214684: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x214684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x214688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21468c: 0x80848e0  j           func_212380
    ctx->pc = 0x21468Cu;
    ctx->pc = 0x214690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21468Cu;
    // 0x214690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214694u;
}
