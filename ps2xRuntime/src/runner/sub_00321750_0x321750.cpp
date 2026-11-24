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

// Function: sub_00321750
// Address: 0x321750 - 0x3217c4
void sub_00321750_0x321750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321750_0x321750");
#endif

    ctx->pc = 0x321750u;

    // 0x321750: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321754: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x321754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x321758: 0x8c28cebc  lw          $t0, -0x3144($at)
    ctx->pc = 0x321758u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32175c: 0x3c066ff0  lui         $a2, 0x6FF0
    ctx->pc = 0x32175cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28656 << 16));
    // 0x321760: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x321760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x321764: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321768: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x321768u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x32176c: 0x8c25cec8  lw          $a1, -0x3138($at)
    ctx->pc = 0x32176cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x321770: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321774: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x321774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x321778: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x321778u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x32177c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321780: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x321780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x321784: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x321784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x321788: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32178c: 0xac25cec8  sw          $a1, -0x3138($at)
    ctx->pc = 0x32178cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x321790: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321794: 0xac24cec0  sw          $a0, -0x3140($at)
    ctx->pc = 0x321794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x321798: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32179c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x32179cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3217a0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x3217a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x3217a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3217a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3217a8: 0xac24cebc  sw          $a0, -0x3144($at)
    ctx->pc = 0x3217a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3217ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3217acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3217b0: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3217b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3217b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3217b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3217b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3217b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3217bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3217BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3217C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217BCu;
        // 0x3217c0: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3217BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3217C4u;
}
