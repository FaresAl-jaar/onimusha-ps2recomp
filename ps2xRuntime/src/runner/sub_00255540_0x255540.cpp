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

// Function: sub_00255540
// Address: 0x255540 - 0x2555a4
void sub_00255540_0x255540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255540_0x255540");
#endif

    ctx->pc = 0x255540u;

    // 0x255540: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x255540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x255544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x255548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25554c: 0x84a30048  lh          $v1, 0x48($a1)
    ctx->pc = 0x25554cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x255550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x255554: 0xa4a30048  sh          $v1, 0x48($a1)
    ctx->pc = 0x255554u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x255558: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x255558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25555c: 0x84a30048  lh          $v1, 0x48($a1)
    ctx->pc = 0x25555cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x255560: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x255560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x255564: 0xa4a30048  sh          $v1, 0x48($a1)
    ctx->pc = 0x255564u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x255568: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x255568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25556c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x25556cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x255570: 0x84a60046  lh          $a2, 0x46($a1)
    ctx->pc = 0x255570u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x255574: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x255574u;
    {
        const bool branch_taken_0x255574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x255578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255574u;
        // 0x255578: 0x84a80044  lh          $t0, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255574) {
            ctx->pc = 0x255580u;
            goto label_255580;
        }
    }
    ctx->pc = 0x25557Cu;
    // 0x25557c: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x25557cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_255580:
    // 0x255580: 0x84a30048  lh          $v1, 0x48($a1)
    ctx->pc = 0x255580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x255584: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x255584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x255588: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x255588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25558c: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x25558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x255590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255598: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x255598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25559c: 0x80954e4  j           func_255390
    ctx->pc = 0x25559Cu;
    ctx->pc = 0x2555A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25559Cu;
    // 0x2555a0: 0x1023023  subu        $a2, $t0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255390u;
    sub_00255390_0x255390(rdram, ctx, runtime); return;
    ctx->pc = 0x2555A4u;
}
