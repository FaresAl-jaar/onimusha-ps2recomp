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

// Function: sub_00209038
// Address: 0x209038 - 0x209050
void sub_00209038_0x209038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209038_0x209038");
#endif

    ctx->pc = 0x209038u;

    // 0x209038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20903c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20903cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209048: 0x8082440  j           func_209100
    ctx->pc = 0x209048u;
    ctx->pc = 0x20904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209048u;
    // 0x20904c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209100u;
    sub_00209100_0x209100(rdram, ctx, runtime); return;
    ctx->pc = 0x209050u;
}
