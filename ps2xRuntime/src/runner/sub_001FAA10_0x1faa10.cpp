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

// Function: sub_001FAA10
// Address: 0x1faa10 - 0x1faac0
void sub_001FAA10_0x1faa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAA10_0x1faa10");
#endif

    ctx->pc = 0x1faa10u;

    // 0x1faa10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1faa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1faa14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1faa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faa18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1faa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1faa1c: 0xa0850059  sb          $a1, 0x59($a0)
    ctx->pc = 0x1faa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 5));
    // 0x1faa20: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1faa20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1faa24: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1faa24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1faa28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1faa28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1faa2c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1faa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1faa30: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1faa30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1faa34: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1faa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1faa38: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1faa38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1faa3c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1faa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1faa40: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1faa40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1faa44: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1faa44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1faa48: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1faa48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1faa4c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1faa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1faa50: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1faa50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1faa54: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1faa54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1faa58: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1faa58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1faa5c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x1faa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x1faa60: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1faa60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1faa64: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1faa64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1faa68: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1faa68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1faa6c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1faa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1faa70: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x1faa70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x1faa74: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x1faa74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x1faa78: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x1faa78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa7c: 0xa0850055  sb          $a1, 0x55($a0)
    ctx->pc = 0x1faa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 5));
    // 0x1faa80: 0xa0800056  sb          $zero, 0x56($a0)
    ctx->pc = 0x1faa80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa84: 0xa0800057  sb          $zero, 0x57($a0)
    ctx->pc = 0x1faa84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa88: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x1faa88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa8c: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x1faa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa90: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x1faa90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa94: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x1faa94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faa98: 0xa083005d  sb          $v1, 0x5D($a0)
    ctx->pc = 0x1faa98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faa9c: 0xa080005e  sb          $zero, 0x5E($a0)
    ctx->pc = 0x1faa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faaa0: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x1faaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faaa4: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x1faaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faaa8: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1faaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1faaac: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x1faaacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faab0: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x1faab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x1faab4: 0xa0830062  sb          $v1, 0x62($a0)
    ctx->pc = 0x1faab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAB8u;
        // 0x1faabc: 0xa0830063  sb          $v1, 0x63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAAC0u;
}
