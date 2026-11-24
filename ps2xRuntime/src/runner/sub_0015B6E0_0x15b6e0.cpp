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

// Function: sub_0015B6E0
// Address: 0x15b6e0 - 0x15b808
void sub_0015B6E0_0x15b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B6E0_0x15b6e0");
#endif

    ctx->pc = 0x15b6e0u;

    // 0x15b6e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b6e4: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    // 0x15b6e8: 0x8c2bcec8  lw          $t3, -0x3138($at)
    ctx->pc = 0x15b6e8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15b6ec: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x15b6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x15b6f0: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x15b6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x15b6f4: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x15b6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x15b6f8: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x15b6fc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x15b700: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b704: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x15b704u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x15b708: 0x8c29cec0  lw          $t1, -0x3140($at)
    ctx->pc = 0x15b708u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x15b70c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b710: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x15b710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x15b714: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b718: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x15b718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x15b71c: 0xac2acec8  sw          $t2, -0x3138($at)
    ctx->pc = 0x15b71cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x15b720: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b724: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15b728: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b72c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x15b72cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x15b730: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x15b730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x15b734: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b738: 0x1481825  or          $v1, $t2, $t0
    ctx->pc = 0x15b738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x15b73c: 0xac29cec0  sw          $t1, -0x3140($at)
    ctx->pc = 0x15b73cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x15b740: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b744: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x15b744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x15b748: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b74c: 0x8c28cec0  lw          $t0, -0x3140($at)
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x15b750: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b754: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x15b754u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15b758: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x15b75c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b760: 0xac28cec0  sw          $t0, -0x3140($at)
    ctx->pc = 0x15b760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x15b764: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x15b764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x15b768: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b76c: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x15b76cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x15b770: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b774: 0x8c27cec0  lw          $a3, -0x3140($at)
    ctx->pc = 0x15b774u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x15b778: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b77c: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15b780: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x15b780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x15b784: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b788: 0xac27cec0  sw          $a3, -0x3140($at)
    ctx->pc = 0x15b788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x15b78c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x15b78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x15b790: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b794: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x15b794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x15b798: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b79c: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x15b79cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x15b7a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7a4: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x15b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15b7a8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x15b7a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x15b7ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7b0: 0xac26cec0  sw          $a2, -0x3140($at)
    ctx->pc = 0x15b7b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x15b7b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15b7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15b7b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7bc: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x15b7bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x15b7c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7c4: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x15b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x15b7c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7cc: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x15b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15b7d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15b7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15b7d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7d8: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x15b7d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x15b7dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15b7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15b7e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7e4: 0xac23cec8  sw          $v1, -0x3138($at)
    ctx->pc = 0x15b7e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x15b7e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7ec: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x15b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x15b7f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b7f4: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x15b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15b7f8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15b7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15b7fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b800: 0x3e00008  jr          $ra
    ctx->pc = 0x15B800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B800u;
        // 0x15b804: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B808u;
}
