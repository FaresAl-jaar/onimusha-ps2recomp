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

// Function: sub_002CD340
// Address: 0x2cd340 - 0x2cd370
void sub_002CD340_0x2cd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD340_0x2cd340");
#endif

    ctx->pc = 0x2cd340u;

    // 0x2cd340: 0xc7808270  lwc1        $f0, -0x7D90($gp)
    ctx->pc = 0x2cd340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd344: 0x87828274  lh          $v0, -0x7D8C($gp)
    ctx->pc = 0x2cd344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935156)));
    // 0x2cd348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd34c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd350: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x2cd350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2cd354: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2cd354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2cd358: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2cd358u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cd35c: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x2cd35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x2cd360: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2cd360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2cd364: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x2cd364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cd368: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD368u;
        // 0x2cd36c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD370u;
}
