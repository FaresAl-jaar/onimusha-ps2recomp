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

// Function: sub_00222248
// Address: 0x222248 - 0x222284
void sub_00222248_0x222248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222248_0x222248");
#endif

    ctx->pc = 0x222248u;

    // 0x222248: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x222248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x22224c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x22224cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x222250: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x222250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x222254: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x222254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22225c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22225cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x222260: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x222260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x222264: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x222264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x222268: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x222268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22226c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22226cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222270: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x222270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x222274: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x222274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x222278: 0xacc71f44  sw          $a3, 0x1F44($a2)
    ctx->pc = 0x222278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8004), GPR_U32(ctx, 7));
    // 0x22227c: 0x3e00008  jr          $ra
    ctx->pc = 0x22227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22227Cu;
        // 0x222280: 0xac85135c  sw          $a1, 0x135C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222284u;
}
