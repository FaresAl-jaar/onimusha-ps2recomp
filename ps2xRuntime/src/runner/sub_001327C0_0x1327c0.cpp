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

// Function: sub_001327C0
// Address: 0x1327c0 - 0x1327dc
void sub_001327C0_0x1327c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001327C0_0x1327c0");
#endif

    ctx->pc = 0x1327c0u;

    // 0x1327c0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1327c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1327c4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1327c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1327c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1327c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1327cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1327ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327d0: 0x24640930  addiu       $a0, $v1, 0x930
    ctx->pc = 0x1327d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2352));
    // 0x1327d4: 0x804cf40  j           func_133D00
    ctx->pc = 0x1327D4u;
    ctx->pc = 0x1327D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1327D4u;
    // 0x1327d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133D00u;
    sub_00133D00_0x133d00(rdram, ctx, runtime); return;
    ctx->pc = 0x1327DCu;
}
