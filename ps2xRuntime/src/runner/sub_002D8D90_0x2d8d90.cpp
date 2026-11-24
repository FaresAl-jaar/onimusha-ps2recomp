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

// Function: sub_002D8D90
// Address: 0x2d8d90 - 0x2d8e84
void sub_002D8D90_0x2d8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8D90_0x2d8d90");
#endif

    switch (ctx->pc) {
        case 0x2d8e08u: goto label_2d8e08;
        case 0x2d8e10u: goto label_2d8e10;
        case 0x2d8e48u: goto label_2d8e48;
        default: break;
    }

    ctx->pc = 0x2d8d90u;

    // 0x2d8d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8d94: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8d9c: 0xa0276cd6  sb          $a3, 0x6CD6($at)
    ctx->pc = 0x2d8d9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8D6CD6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6CD6u, _value); } while (0);
    // 0x2d8da0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8da4: 0xa0286cd7  sb          $t0, 0x6CD7($at)
    ctx->pc = 0x2d8da4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x8D6CD7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6CD7u, _value); } while (0);
    // 0x2d8da8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8dac: 0xa4256cea  sh          $a1, 0x6CEA($at)
    ctx->pc = 0x2d8dacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6CEAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CEAu, _value); } while (0);
    // 0x2d8db0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8db4: 0xa0266cd9  sb          $a2, 0x6CD9($at)
    ctx->pc = 0x2d8db4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8D6CD9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6CD9u, _value); } while (0);
    // 0x2d8db8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8dbc: 0xa4246ce8  sh          $a0, 0x6CE8($at)
    ctx->pc = 0x2d8dbcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6CE8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CE8u, _value); } while (0);
    // 0x2d8dc0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8dc4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8dc8: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8dcc: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d8dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d8dd0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2d8dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2d8dd4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8dd8: 0xac226ccc  sw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8ddc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8de0: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8de4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2d8de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2d8de8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8dec: 0xac226ccc  sw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8df0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8df4: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8df8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2d8df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2d8dfc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e00: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D8E00u;
    SET_GPR_U32(ctx, 31, 0x2D8E08u);
    ctx->pc = 0x2D8E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E00u;
    // 0x2d8e04: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D8E00u, 0x2D8E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E08u;
label_2d8e08:
    // 0x2d8e08: 0xc0b631c  jal         func_2D8C70
    ctx->pc = 0x2D8E08u;
    SET_GPR_U32(ctx, 31, 0x2D8E10u);
    ctx->pc = 0x2D8C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8C70u, 0x2D8E08u, 0x2D8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E10u;
label_2d8e10:
    // 0x2d8e10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e14: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d8e18: 0x8c236ccc  lw          $v1, 0x6CCC($at)
    ctx->pc = 0x2d8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8e1c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2d8e20: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d8e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8e28: 0xa4246ce8  sh          $a0, 0x6CE8($at)
    ctx->pc = 0x2d8e28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 27880), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d8e2c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e30: 0xa4246cea  sh          $a0, 0x6CEA($at)
    ctx->pc = 0x2d8e30u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6CEAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CEAu, _value); } while (0);
    // 0x2d8e34: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e38: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e3c: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d8e40: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D8E40u;
    SET_GPR_U32(ctx, 31, 0x2D8E48u);
    ctx->pc = 0x2D8E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E40u;
    // 0x2d8e44: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D8E40u, 0x2D8E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E48u;
label_2d8e48:
    // 0x2d8e48: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e4c: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x2d8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2d8e50: 0x8c256ccc  lw          $a1, 0x6CCC($at)
    ctx->pc = 0x2d8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8e54: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2d8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2d8e58: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2d8e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d8e5c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e60: 0xac246ccc  sw          $a0, 0x6CCC($at)
    ctx->pc = 0x2d8e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8e64: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e68: 0x8c246ccc  lw          $a0, 0x6CCC($at)
    ctx->pc = 0x2d8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8e6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8e70: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8e74: 0xac236ccc  sw          $v1, 0x6CCC($at)
    ctx->pc = 0x2d8e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E7Cu;
        // 0x2d8e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8E84u;
}
