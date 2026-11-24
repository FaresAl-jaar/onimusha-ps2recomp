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

// Function: sub_00207BF0
// Address: 0x207bf0 - 0x207c1c
void sub_00207BF0_0x207bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207BF0_0x207bf0");
#endif

    ctx->pc = 0x207bf0u;

    // 0x207bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207bf4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x207bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x207bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c00: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207C00u;
    {
        const bool branch_taken_0x207c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C00u;
        // 0x207c04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c00) {
            ctx->pc = 0x207C0Cu;
            goto label_207c0c;
        }
    }
    ctx->pc = 0x207C08u;
    // 0x207c08: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x207c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_207c0c:
    // 0x207c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c14: 0x80852ce  j           func_214B38
    ctx->pc = 0x207C14u;
    ctx->pc = 0x207C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C14u;
    // 0x207c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B38u;
    sub_00214B38_0x214b38(rdram, ctx, runtime); return;
    ctx->pc = 0x207C1Cu;
}
