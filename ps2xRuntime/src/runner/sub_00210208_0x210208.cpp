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

// Function: sub_00210208
// Address: 0x210208 - 0x210234
void sub_00210208_0x210208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210208_0x210208");
#endif

    ctx->pc = 0x210208u;

    // 0x210208: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x210208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21020c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210210: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x210210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x210214: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x210214u;
    {
        const bool branch_taken_0x210214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x210218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210214u;
        // 0x210218: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210214) {
            ctx->pc = 0x21022Cu;
            goto label_21022c;
        }
    }
    ctx->pc = 0x21021Cu;
    // 0x21021c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x210220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210224: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x210224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210228: 0xac46131c  sw          $a2, 0x131C($v0)
    ctx->pc = 0x210228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4892), GPR_U32(ctx, 6));
label_21022c:
    // 0x21022c: 0x3e00008  jr          $ra
    ctx->pc = 0x21022Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21022Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210234u;
}
