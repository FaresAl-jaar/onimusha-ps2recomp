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

// Function: sub_0023C950
// Address: 0x23c950 - 0x23c970
void sub_0023C950_0x23c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C950_0x23c950");
#endif

    ctx->pc = 0x23c950u;

    // 0x23c950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c954: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x23c954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x23c958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c95c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c960: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x23c960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x23c964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c968: 0x808f216  j           func_23C858
    ctx->pc = 0x23C968u;
    ctx->pc = 0x23C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C968u;
    // 0x23c96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C858u;
    sub_0023C858_0x23c858(rdram, ctx, runtime); return;
    ctx->pc = 0x23C970u;
}
