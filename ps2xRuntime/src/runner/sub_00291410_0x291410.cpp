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

// Function: sub_00291410
// Address: 0x291410 - 0x291458
void sub_00291410_0x291410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291410_0x291410");
#endif

    switch (ctx->pc) {
        case 0x291434u: goto label_291434;
        default: break;
    }

    ctx->pc = 0x291410u;

    // 0x291410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29141c: 0x94822ad4  lhu         $v0, 0x2AD4($a0)
    ctx->pc = 0x29141cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10964)));
    // 0x291420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291424: 0xa48200c0  sh          $v0, 0xC0($a0)
    ctx->pc = 0x291424u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x291428: 0x94822ad6  lhu         $v0, 0x2AD6($a0)
    ctx->pc = 0x291428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10966)));
    // 0x29142c: 0xc0a4460  jal         func_291180
    ctx->pc = 0x29142Cu;
    SET_GPR_U32(ctx, 31, 0x291434u);
    ctx->pc = 0x291430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29142Cu;
    // 0x291430: 0xa48200c4  sh          $v0, 0xC4($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291180u, 0x29142Cu, 0x291434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291434u;
label_291434:
    // 0x291434: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x291434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x291438: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x291438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x29143c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x29143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291440: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x291440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x291444: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x291444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x291448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29144c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29144cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291450: 0x3e00008  jr          $ra
    ctx->pc = 0x291450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291450u;
        // 0x291454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291458u;
}
