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

// Function: sub_00127258
// Address: 0x127258 - 0x127280
void sub_00127258_0x127258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127258_0x127258");
#endif

    ctx->pc = 0x127258u;

    // 0x127258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12725c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12725cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127264: 0x3c0e0040  lui         $t6, 0x40
    ctx->pc = 0x127264u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
    // 0x127268: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x127268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12726c: 0x8dc46048  lw          $a0, 0x6048($t6)
    ctx->pc = 0x12726cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x127270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127274: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x127274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127278: 0x8049c14  j           func_127050
    ctx->pc = 0x127278u;
    ctx->pc = 0x12727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127278u;
    // 0x12727c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127050u;
    sub_00127050_0x127050(rdram, ctx, runtime); return;
    ctx->pc = 0x127280u;
}
