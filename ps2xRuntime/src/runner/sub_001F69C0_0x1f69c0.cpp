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

// Function: sub_001F69C0
// Address: 0x1f69c0 - 0x1f6a00
void sub_001F69C0_0x1f69c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F69C0_0x1f69c0");
#endif

    ctx->pc = 0x1f69c0u;

    // 0x1f69c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f69c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f69c4: 0x2487014c  addiu       $a3, $a0, 0x14C
    ctx->pc = 0x1f69c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
    // 0x1f69c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f69cc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1f69ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69d0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1f69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f69d4: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1f69d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f69d8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1f69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f69dc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1f69dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f69e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f69e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f69e4: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1f69e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f69e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f69e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f69ec: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x1f69ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x1f69f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f69f4: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1f69f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1f69f8: 0x8049522  j           func_125488
    ctx->pc = 0x1F69F8u;
    ctx->pc = 0x1F69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69F8u;
    // 0x1f69fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    sub_00125488_0x125488(rdram, ctx, runtime); return;
    ctx->pc = 0x1F6A00u;
}
