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

// Function: sub_001293E0
// Address: 0x1293e0 - 0x129410
void sub_001293E0_0x1293e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001293E0_0x1293e0");
#endif

    ctx->pc = 0x1293e0u;

    // 0x1293e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1293e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1293e4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1293e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1293e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1293ec: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x1293ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x1293f0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1293f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293f4: 0x8de46048  lw          $a0, 0x6048($t7)
    ctx->pc = 0x1293f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x1293f8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1293f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1293fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129400: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x129400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129404: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x129404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129408: 0x804a468  j           func_1291A0
    ctx->pc = 0x129408u;
    ctx->pc = 0x12940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129408u;
    // 0x12940c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1291A0u;
    sub_001291A0_0x1291a0(rdram, ctx, runtime); return;
    ctx->pc = 0x129410u;
}
