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

// Function: sub_0028EF90
// Address: 0x28ef90 - 0x28efd0
void sub_0028EF90_0x28ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF90_0x28ef90");
#endif

    switch (ctx->pc) {
        case 0x28efa8u: goto label_28efa8;
        default: break;
    }

    ctx->pc = 0x28ef90u;

    // 0x28ef90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ef94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ef98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ef9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ef9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28efa0: 0xc09a504  jal         func_269410
    ctx->pc = 0x28EFA0u;
    SET_GPR_U32(ctx, 31, 0x28EFA8u);
    ctx->pc = 0x28EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFA0u;
    // 0x28efa4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269410u, 0x28EFA0u, 0x28EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFA8u;
label_28efa8:
    // 0x28efa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EFA8u;
    {
        const bool branch_taken_0x28efa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28efa8) {
            ctx->pc = 0x28EFC0u;
            goto label_28efc0;
        }
    }
    ctx->pc = 0x28EFB0u;
    // 0x28efb0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x28efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x28efb4: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28EFB4u;
    {
        const bool branch_taken_0x28efb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x28efb4) {
            ctx->pc = 0x28EFC0u;
            goto label_28efc0;
        }
    }
    ctx->pc = 0x28EFBCu;
    // 0x28efbc: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x28efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_28efc0:
    // 0x28efc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28efc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28efc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28efc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28efc8: 0x3e00008  jr          $ra
    ctx->pc = 0x28EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFC8u;
        // 0x28efcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EFD0u;
}
