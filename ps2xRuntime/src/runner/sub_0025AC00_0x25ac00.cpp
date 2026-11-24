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

// Function: sub_0025AC00
// Address: 0x25ac00 - 0x25ac80
void sub_0025AC00_0x25ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AC00_0x25ac00");
#endif

    ctx->pc = 0x25ac00u;

    // 0x25ac00: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x25ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x25ac04: 0x2c3c  dsll32      $a1, $zero, 16
    ctx->pc = 0x25ac04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 16));
    // 0x25ac08: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x25ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x25ac0c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x25ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25ac10: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x25ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x25ac14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x25ac14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x25ac18: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x25ac1c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x25ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x25ac20: 0x244273b0  addiu       $v0, $v0, 0x73B0
    ctx->pc = 0x25ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29616));
    // 0x25ac24: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x25ac24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x25ac28: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x25ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x25ac2c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x25ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x25ac30: 0xa082005c  sb          $v0, 0x5C($a0)
    ctx->pc = 0x25ac30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x25ac34: 0xa082005d  sb          $v0, 0x5D($a0)
    ctx->pc = 0x25ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 2));
    // 0x25ac38: 0xa080005f  sb          $zero, 0x5F($a0)
    ctx->pc = 0x25ac38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ac3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25ac3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac40: 0xa080005e  sb          $zero, 0x5E($a0)
    ctx->pc = 0x25ac40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ac44: 0xa0860064  sb          $a2, 0x64($a0)
    ctx->pc = 0x25ac44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 6));
    // 0x25ac48: 0xa4800054  sh          $zero, 0x54($a0)
    ctx->pc = 0x25ac48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ac4c: 0xa0850053  sb          $a1, 0x53($a0)
    ctx->pc = 0x25ac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 5));
    // 0x25ac50: 0xa0850052  sb          $a1, 0x52($a0)
    ctx->pc = 0x25ac50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
    // 0x25ac54: 0xa0850051  sb          $a1, 0x51($a0)
    ctx->pc = 0x25ac54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 5));
    // 0x25ac58: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x25ac58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ac5c: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x25ac5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ac60: 0xa4800062  sh          $zero, 0x62($a0)
    ctx->pc = 0x25ac60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ac64: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x25ac64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ac68: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x25ac68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ac6c: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x25ac6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ac70: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x25ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x25ac74: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x25ac74u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C10u));
    // 0x25ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x25AC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC78u;
        // 0x25ac7c: 0x7c830040  sq          $v1, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AC80u;
}
