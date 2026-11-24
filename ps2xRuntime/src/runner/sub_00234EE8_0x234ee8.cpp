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

// Function: sub_00234EE8
// Address: 0x234ee8 - 0x234f0c
void sub_00234EE8_0x234ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234EE8_0x234ee8");
#endif

    ctx->pc = 0x234ee8u;

    // 0x234ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234eec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x234eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234ef4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x234ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234f04: 0x8094d48  j           func_253520
    ctx->pc = 0x234F04u;
    ctx->pc = 0x234F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F04u;
    // 0x234f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253520u;
    sub_00253520_0x253520(rdram, ctx, runtime); return;
    ctx->pc = 0x234F0Cu;
}
