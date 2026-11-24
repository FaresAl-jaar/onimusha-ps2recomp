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

// Function: sub_002740A0
// Address: 0x2740a0 - 0x2740f8
void sub_002740A0_0x2740a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002740A0_0x2740a0");
#endif

    ctx->pc = 0x2740a0u;

    // 0x2740a0: 0x838488a4  lb          $a0, -0x775C($gp)
    ctx->pc = 0x2740a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x2740a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2740a8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2740A8u;
    {
        const bool branch_taken_0x2740a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2740a8) {
            ctx->pc = 0x2740F0u;
            goto label_2740f0;
        }
    }
    ctx->pc = 0x2740B0u;
    // 0x2740b0: 0x838488a0  lb          $a0, -0x7760($gp)
    ctx->pc = 0x2740b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x2740b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2740b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2740b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2740B8u;
    {
        const bool branch_taken_0x2740b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2740b8) {
            ctx->pc = 0x2740C8u;
            goto label_2740c8;
        }
    }
    ctx->pc = 0x2740C0u;
    // 0x2740c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2740C0u;
    {
        const bool branch_taken_0x2740c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2740c0) {
            ctx->pc = 0x2740F0u;
            goto label_2740f0;
        }
    }
    ctx->pc = 0x2740C8u;
label_2740c8:
    // 0x2740c8: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x2740c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x2740cc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2740ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2740d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2740D0u;
    {
        const bool branch_taken_0x2740d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2740d0) {
            ctx->pc = 0x2740E0u;
            goto label_2740e0;
        }
    }
    ctx->pc = 0x2740D8u;
    // 0x2740d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2740d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740dc: 0x0  nop
    ctx->pc = 0x2740dcu;
    // NOP
label_2740e0:
    // 0x2740e0: 0x978488bc  lhu         $a0, -0x7744($gp)
    ctx->pc = 0x2740e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x2740e4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2740e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2740e8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2740e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2740ec: 0xa78388bc  sh          $v1, -0x7744($gp)
    ctx->pc = 0x2740ecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
label_2740f0:
    // 0x2740f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2740F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2740F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2740F8u;
}
