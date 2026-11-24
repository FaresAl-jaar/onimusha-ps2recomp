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

// Function: sub_006846E8
// Address: 0x6846e8 - 0x684700
void sub_006846E8_0x6846e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006846E8_0x6846e8");
#endif

    ctx->pc = 0x6846e8u;

    // 0x6846e8: 0x4030201  bgezl       $zero, . + 4 + (0x201 << 2)
    ctx->pc = 0x6846E8u;
    {
        const bool branch_taken_0x6846e8 = (GPR_S64(ctx, 0) >= 0);
        if (branch_taken_0x6846e8) {
            ctx->pc = 0x6846ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6846E8u;
            // 0x6846ec: 0x2050403  .word       0x02050403                   # sra         $zero, $a1, 16 # 02000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x684EF0u;
            return;
        }
    }
    ctx->pc = 0x6846F0u;
    // 0x6846f0: 0x3030504  .word       0x03030504                   # sllv        $zero, $v1, $t8 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6846f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 24) & 0x1F));
    // 0x6846f4: 0x0  nop
    ctx->pc = 0x6846f4u;
    // NOP
    // 0x6846f8: 0xa1e2814  j           func_878A050
    ctx->pc = 0x6846F8u;
    ctx->pc = 0x6846FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x6846F8u;
    // 0x6846fc: 0xa14281e  j           func_850A078 (Delay Slot)
    // J 0x850A078 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x878A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x878A050u, 0x6846F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x684700u;
}
