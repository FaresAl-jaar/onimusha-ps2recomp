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

// Function: sub_0026FB90
// Address: 0x26fb90 - 0x26fbd4
void sub_0026FB90_0x26fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FB90_0x26fb90");
#endif

    ctx->pc = 0x26fb90u;

    // 0x26fb90: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x26fb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x26fb94: 0x9783888c  lhu         $v1, -0x7774($gp)
    ctx->pc = 0x26fb94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936716)));
    // 0x26fb98: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x26fb98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x26fb9c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FB9Cu;
    {
        const bool branch_taken_0x26fb9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x26FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB9Cu;
        // 0x26fba0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb9c) {
            ctx->pc = 0x26FBB8u;
            goto label_26fbb8;
        }
    }
    ctx->pc = 0x26FBA4u;
    // 0x26fba4: 0x97838890  lhu         $v1, -0x7770($gp)
    ctx->pc = 0x26fba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936720)));
    // 0x26fba8: 0x90246ac8  lbu         $a0, 0x6AC8($at)
    ctx->pc = 0x26fba8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    // 0x26fbac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FBACu;
    {
        const bool branch_taken_0x26fbac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26fbac) {
            ctx->pc = 0x26FBC0u;
            goto label_26fbc0;
        }
    }
    ctx->pc = 0x26FBB4u;
    // 0x26fbb4: 0x0  nop
    ctx->pc = 0x26fbb4u;
    // NOP
label_26fbb8:
    // 0x26fbb8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26fbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26fbbc: 0xac200e7c  sw          $zero, 0xE7C($at)
    ctx->pc = 0x26fbbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E7Cu, _value); } while (0);
label_26fbc0:
    // 0x26fbc0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x26fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x26fbc4: 0x90236ac8  lbu         $v1, 0x6AC8($at)
    ctx->pc = 0x26fbc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x26fbc8: 0xa785888c  sh          $a1, -0x7774($gp)
    ctx->pc = 0x26fbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936716), (uint16_t)GPR_U32(ctx, 5));
    // 0x26fbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x26FBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBCCu;
        // 0x26fbd0: 0xa7838890  sh          $v1, -0x7770($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936720), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FBD4u;
}
