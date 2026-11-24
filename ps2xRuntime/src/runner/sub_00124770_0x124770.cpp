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

// Function: sub_00124770
// Address: 0x124770 - 0x124798
void sub_00124770_0x124770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124770_0x124770");
#endif

    ctx->pc = 0x124770u;

    // 0x124770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124774: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x124774u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12477c: 0x3c0e0040  lui         $t6, 0x40
    ctx->pc = 0x12477cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
    // 0x124780: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x124780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124784: 0x8dc46048  lw          $a0, 0x6048($t6)
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x124788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12478c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x12478cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124790: 0x80491b6  j           func_1246D8
    ctx->pc = 0x124790u;
    ctx->pc = 0x124794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124790u;
    // 0x124794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1246D8u;
    sub_001246D8_0x1246d8(rdram, ctx, runtime); return;
    ctx->pc = 0x124798u;
}
