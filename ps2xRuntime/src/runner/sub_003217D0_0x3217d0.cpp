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

// Function: sub_003217D0
// Address: 0x3217d0 - 0x321890
void sub_003217D0_0x3217d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003217D0_0x3217d0");
#endif

    ctx->pc = 0x3217d0u;

    // 0x3217d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3217d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3217d4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x3217d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x3217d8: 0x8c2acebc  lw          $t2, -0x3144($at)
    ctx->pc = 0x3217d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3217dc: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x3217dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3217e0: 0x3c03900f  lui         $v1, 0x900F
    ctx->pc = 0x3217e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36879 << 16));
    // 0x3217e4: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x3217e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3217e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3217e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3217ec: 0x34647fff  ori         $a0, $v1, 0x7FFF
    ctx->pc = 0x3217ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x3217f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3217f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3217f4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x3217f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x3217f8: 0x8c26cec8  lw          $a2, -0x3138($at)
    ctx->pc = 0x3217f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x3217fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3217fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321800: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x321800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x321804: 0x8c2bcec4  lw          $t3, -0x313C($at)
    ctx->pc = 0x321804u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x321808: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32180c: 0x8c29cecc  lw          $t1, -0x3134($at)
    ctx->pc = 0x32180cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CECCu));
    // 0x321810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321814: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x321814u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED0u));
    // 0x321818: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32181c: 0x8c27ced8  lw          $a3, -0x3128($at)
    ctx->pc = 0x32181cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED8u));
    // 0x321820: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321824: 0xac2acebc  sw          $t2, -0x3144($at)
    ctx->pc = 0x321824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x321828: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32182c: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x32182cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x321830: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321834: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x321834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x321838: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x321838u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x32183c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x32183cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x321840: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321844: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x321844u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x321848: 0x8c26cedc  lw          $a2, -0x3124($at)
    ctx->pc = 0x321848u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x32184c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x32184cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x321850: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x321850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x321854: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321858: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x321858u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32185c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x32185cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x321860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321864: 0xac24cebc  sw          $a0, -0x3144($at)
    ctx->pc = 0x321864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x321868: 0xe82825  or          $a1, $a3, $t0
    ctx->pc = 0x321868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x32186c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321870: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x321870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x321874: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x321874u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x321878: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32187c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x321880: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x321880u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 5));
    // 0x321884: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x321884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x321888: 0x3e00008  jr          $ra
    ctx->pc = 0x321888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321888u;
        // 0x32188c: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321890u;
}
