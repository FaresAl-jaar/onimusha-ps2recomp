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

// Function: sub_0024F7F8
// Address: 0x24f7f8 - 0x24f838
void sub_0024F7F8_0x24f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F7F8_0x24f7f8");
#endif

    ctx->pc = 0x24f7f8u;

    // 0x24f7f8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f7fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f800: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f804: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x24f804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24f808: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F808u;
    {
        const bool branch_taken_0x24f808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F808u;
        // 0x24f80c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f808) {
            ctx->pc = 0x24F820u;
            goto label_24f820;
        }
    }
    ctx->pc = 0x24F810u;
    // 0x24f810: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f814: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f814u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f818: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F818u;
    {
        const bool branch_taken_0x24f818 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24f818) {
            ctx->pc = 0x24F830u;
            goto label_24f830;
        }
    }
    ctx->pc = 0x24F820u;
label_24f820:
    // 0x24f820: 0x28a3fc19  slti        $v1, $a1, -0x3E7
    ctx->pc = 0x24f820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x24f824: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x24f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x24f828: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x24f828u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x24f82c: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x24f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
label_24f830:
    // 0x24f830: 0x3e00008  jr          $ra
    ctx->pc = 0x24F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F838u;
}
