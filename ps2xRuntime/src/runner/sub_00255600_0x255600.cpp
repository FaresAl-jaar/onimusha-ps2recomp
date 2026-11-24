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

// Function: sub_00255600
// Address: 0x255600 - 0x25564c
void sub_00255600_0x255600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255600_0x255600");
#endif

    ctx->pc = 0x255600u;

    // 0x255600: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x255600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255604: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x255604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x255608: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x255608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
    // 0x25560c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255610: 0x84c20048  lh          $v0, 0x48($a2)
    ctx->pc = 0x255610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x255614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x255614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x255618: 0xa4c20048  sh          $v0, 0x48($a2)
    ctx->pc = 0x255618u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x25561c: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x25561cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255620: 0x84c20048  lh          $v0, 0x48($a2)
    ctx->pc = 0x255620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x255624: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x255624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x255628: 0xa4c20048  sh          $v0, 0x48($a2)
    ctx->pc = 0x255628u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x25562c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x25562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255630: 0x84470048  lh          $a3, 0x48($v0)
    ctx->pc = 0x255630u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x255634: 0x84460044  lh          $a2, 0x44($v0)
    ctx->pc = 0x255634u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x255638: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x255638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x25563c: 0x84420046  lh          $v0, 0x46($v0)
    ctx->pc = 0x25563cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x255640: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x255640u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255644: 0x80954e4  j           func_255390
    ctx->pc = 0x255644u;
    ctx->pc = 0x255648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255644u;
    // 0x255648: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255390u;
    sub_00255390_0x255390(rdram, ctx, runtime); return;
    ctx->pc = 0x25564Cu;
}
