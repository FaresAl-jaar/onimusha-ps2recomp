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

// Function: sub_002C8330
// Address: 0x2c8330 - 0x2c8388
void sub_002C8330_0x2c8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8330_0x2c8330");
#endif

    ctx->pc = 0x2c8330u;

    // 0x2c8330: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x2c8330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c8334: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2c8334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8338: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2c8338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c833c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2c833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c8340: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c8340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c8344: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2c8344u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c8348: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2c8348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c834c: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2c834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2c8350: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2c8350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c8354: 0xa0860038  sb          $a2, 0x38($a0)
    ctx->pc = 0x2c8354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c8358: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2c8358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2c835c: 0x90a30060  lbu         $v1, 0x60($a1)
    ctx->pc = 0x2c835cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2c8360: 0xa0830050  sb          $v1, 0x50($a0)
    ctx->pc = 0x2c8360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8364: 0x90a30065  lbu         $v1, 0x65($a1)
    ctx->pc = 0x2c8364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 101)));
    // 0x2c8368: 0xa0830053  sb          $v1, 0x53($a0)
    ctx->pc = 0x2c8368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c836c: 0xa080004f  sb          $zero, 0x4F($a0)
    ctx->pc = 0x2c836cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8370: 0x90830053  lbu         $v1, 0x53($a0)
    ctx->pc = 0x2c8370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 83)));
    // 0x2c8374: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2c8374u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c8378: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c8378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c837c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c8380: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8380u;
        // 0x2c8384: 0xa483003c  sh          $v1, 0x3C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8388u;
}
