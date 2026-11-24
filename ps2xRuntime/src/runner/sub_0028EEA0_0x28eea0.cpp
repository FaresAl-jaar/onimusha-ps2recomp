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

// Function: sub_0028EEA0
// Address: 0x28eea0 - 0x28eee0
void sub_0028EEA0_0x28eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EEA0_0x28eea0");
#endif

    switch (ctx->pc) {
        case 0x28eeb8u: goto label_28eeb8;
        default: break;
    }

    ctx->pc = 0x28eea0u;

    // 0x28eea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28eea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28eea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28eeac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28eeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eeb0: 0xc09a504  jal         func_269410
    ctx->pc = 0x28EEB0u;
    SET_GPR_U32(ctx, 31, 0x28EEB8u);
    ctx->pc = 0x28EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EEB0u;
    // 0x28eeb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269410u, 0x28EEB0u, 0x28EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEB8u;
label_28eeb8:
    // 0x28eeb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EEB8u;
    {
        const bool branch_taken_0x28eeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eeb8) {
            ctx->pc = 0x28EED0u;
            goto label_28eed0;
        }
    }
    ctx->pc = 0x28EEC0u;
    // 0x28eec0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x28eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x28eec4: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28EEC4u;
    {
        const bool branch_taken_0x28eec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x28eec4) {
            ctx->pc = 0x28EED0u;
            goto label_28eed0;
        }
    }
    ctx->pc = 0x28EECCu;
    // 0x28eecc: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x28eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_28eed0:
    // 0x28eed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28eed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28eed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eed8: 0x3e00008  jr          $ra
    ctx->pc = 0x28EED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EED8u;
        // 0x28eedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EEE0u;
}
