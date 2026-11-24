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

// Function: sub_002D8D00
// Address: 0x2d8d00 - 0x2d8d8c
void sub_002D8D00_0x2d8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8D00_0x2d8d00");
#endif

    switch (ctx->pc) {
        case 0x2d8d40u: goto label_2d8d40;
        case 0x2d8d48u: goto label_2d8d48;
        case 0x2d8d80u: goto label_2d8d80;
        default: break;
    }

    ctx->pc = 0x2d8d00u;

    // 0x2d8d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8d04: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8d0c: 0xa4256cea  sh          $a1, 0x6CEA($at)
    ctx->pc = 0x2d8d0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6CEAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CEAu, _value); } while (0);
    // 0x2d8d10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d14: 0xa0266cd9  sb          $a2, 0x6CD9($at)
    ctx->pc = 0x2d8d14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8D6CD9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6CD9u, _value); } while (0);
    // 0x2d8d18: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d1c: 0xa4246ce8  sh          $a0, 0x6CE8($at)
    ctx->pc = 0x2d8d1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6CE8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CE8u, _value); } while (0);
    // 0x2d8d20: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d24: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d28: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8d2c: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d8d30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2d8d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2d8d34: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d38: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D8D38u;
    SET_GPR_U32(ctx, 31, 0x2D8D40u);
    ctx->pc = 0x2D8D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D38u;
    // 0x2d8d3c: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D8D38u, 0x2D8D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D40u;
label_2d8d40:
    // 0x2d8d40: 0xc0b631c  jal         func_2D8C70
    ctx->pc = 0x2D8D40u;
    SET_GPR_U32(ctx, 31, 0x2D8D48u);
    ctx->pc = 0x2D8C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8C70u, 0x2D8D40u, 0x2D8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D48u;
label_2d8d48:
    // 0x2d8d48: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d4c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d8d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d8d50: 0x8c236ccc  lw          $v1, 0x6CCC($at)
    ctx->pc = 0x2d8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8d54: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2d8d58: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d8d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8d60: 0xa4246ce8  sh          $a0, 0x6CE8($at)
    ctx->pc = 0x2d8d60u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 27880), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d8d64: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d68: 0xa4246cea  sh          $a0, 0x6CEA($at)
    ctx->pc = 0x2d8d68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6CEAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6CEAu, _value); } while (0);
    // 0x2d8d6c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d70: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8d74: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d8d78: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D8D78u;
    SET_GPR_U32(ctx, 31, 0x2D8D80u);
    ctx->pc = 0x2D8D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8D78u;
    // 0x2d8d7c: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D8D78u, 0x2D8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8D80u;
label_2d8d80:
    // 0x2d8d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8d84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D84u;
        // 0x2d8d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8D8Cu;
}
