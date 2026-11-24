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

// Function: sub_002AD1F0
// Address: 0x2ad1f0 - 0x2ad22c
void sub_002AD1F0_0x2ad1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD1F0_0x2ad1f0");
#endif

    ctx->pc = 0x2ad1f0u;

    // 0x2ad1f0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2ad1f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ad1f4: 0x7c830870  sq          $v1, 0x870($a0)
    ctx->pc = 0x2ad1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 3));
    // 0x2ad1f8: 0xa48608a0  sh          $a2, 0x8A0($a0)
    ctx->pc = 0x2ad1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2208), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ad1fc: 0xac8808b0  sw          $t0, 0x8B0($a0)
    ctx->pc = 0x2ad1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2224), GPR_U32(ctx, 8));
    // 0x2ad200: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD200u;
    {
        const bool branch_taken_0x2ad200 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD200u;
        // 0x2ad204: 0xac8908b4  sw          $t1, 0x8B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2228), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad200) {
            ctx->pc = 0x2AD218u;
            goto label_2ad218;
        }
    }
    ctx->pc = 0x2AD208u;
    // 0x2ad208: 0x240300b6  addiu       $v1, $zero, 0xB6
    ctx->pc = 0x2ad208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x2ad20c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD20Cu;
    {
        const bool branch_taken_0x2ad20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD20Cu;
        // 0x2ad210: 0xa0830822  sb          $v1, 0x822($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2082), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad20c) {
            ctx->pc = 0x2AD220u;
            goto label_2ad220;
        }
    }
    ctx->pc = 0x2AD214u;
    // 0x2ad214: 0x0  nop
    ctx->pc = 0x2ad214u;
    // NOP
label_2ad218:
    // 0x2ad218: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x2ad218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x2ad21c: 0xa0830822  sb          $v1, 0x822($a0)
    ctx->pc = 0x2ad21cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2082), (uint8_t)GPR_U32(ctx, 3));
label_2ad220:
    // 0x2ad220: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x2ad220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x2ad224: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD224u;
        // 0x2ad228: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD22Cu;
}
