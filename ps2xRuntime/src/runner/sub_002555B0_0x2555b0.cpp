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

// Function: sub_002555B0
// Address: 0x2555b0 - 0x2555fc
void sub_002555B0_0x2555b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002555B0_0x2555b0");
#endif

    ctx->pc = 0x2555b0u;

    // 0x2555b0: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x2555b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2555b4: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2555b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2555b8: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x2555b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
    // 0x2555bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2555bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2555c0: 0x84c20048  lh          $v0, 0x48($a2)
    ctx->pc = 0x2555c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2555c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2555c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2555c8: 0xa4c20048  sh          $v0, 0x48($a2)
    ctx->pc = 0x2555c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x2555cc: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x2555ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2555d0: 0x84c20048  lh          $v0, 0x48($a2)
    ctx->pc = 0x2555d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2555d4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2555d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2555d8: 0xa4c20048  sh          $v0, 0x48($a2)
    ctx->pc = 0x2555d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x2555dc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2555dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2555e0: 0x84470048  lh          $a3, 0x48($v0)
    ctx->pc = 0x2555e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2555e4: 0x84460044  lh          $a2, 0x44($v0)
    ctx->pc = 0x2555e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2555e8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2555e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2555ec: 0x84420046  lh          $v0, 0x46($v0)
    ctx->pc = 0x2555ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2555f0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2555f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2555f4: 0x80954e4  j           func_255390
    ctx->pc = 0x2555F4u;
    ctx->pc = 0x2555F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555F4u;
    // 0x2555f8: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255390u;
    sub_00255390_0x255390(rdram, ctx, runtime); return;
    ctx->pc = 0x2555FCu;
}
