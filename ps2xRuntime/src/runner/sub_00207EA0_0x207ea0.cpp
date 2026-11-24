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

// Function: sub_00207EA0
// Address: 0x207ea0 - 0x207edc
void sub_00207EA0_0x207ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207EA0_0x207ea0");
#endif

    ctx->pc = 0x207ea0u;

    // 0x207ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207eac: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207EACu;
    {
        const bool branch_taken_0x207eac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x207EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EACu;
        // 0x207eb0: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eac) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207EB4u;
    // 0x207eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207eb8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x207eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x207ebc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207ec0: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207EC0u;
    ctx->pc = 0x207EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207EC0u;
    // 0x207ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207EC8u;
label_207ec8:
    // 0x207ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207ecc: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x207eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x207ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ed4: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207ED4u;
    ctx->pc = 0x207ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207ED4u;
    // 0x207ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207EDCu;
}
