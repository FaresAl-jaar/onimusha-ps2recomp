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

// Function: sub_0038E160
// Address: 0x38e160 - 0x38e198
void sub_0038E160_0x38e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E160_0x38e160");
#endif

    switch (ctx->pc) {
        case 0x38e178u: goto label_38e178;
        default: break;
    }

    ctx->pc = 0x38e160u;

    // 0x38e160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38e164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38e16c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x38e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x38e170: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x38E170u;
    SET_GPR_U32(ctx, 31, 0x38E178u);
    ctx->pc = 0x38E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E170u;
    // 0x38e174: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x38E170u, 0x38E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E178u;
label_38e178:
    // 0x38e178: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x38e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x38e17c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x38e17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38e180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e184: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x38e184u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x38e188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e18c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x38e18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38e190: 0x3e00008  jr          $ra
    ctx->pc = 0x38E190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E190u;
        // 0x38e194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E198u;
}
