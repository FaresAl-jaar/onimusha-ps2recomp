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

// Function: sub_0020BB20
// Address: 0x20bb20 - 0x20bb60
void sub_0020BB20_0x20bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BB20_0x20bb20");
#endif

    ctx->pc = 0x20bb20u;

    // 0x20bb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bb24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20bb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20bb2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb30: 0x8c430284  lw          $v1, 0x284($v0)
    ctx->pc = 0x20bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
    // 0x20bb34: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BB34u;
    {
        const bool branch_taken_0x20bb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x20BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB34u;
        // 0x20bb38: 0x244202a4  addiu       $v0, $v0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb34) {
            ctx->pc = 0x20BB48u;
            goto label_20bb48;
        }
    }
    ctx->pc = 0x20BB3Cu;
    // 0x20bb3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20bb40: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BB40u;
    {
        const bool branch_taken_0x20bb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x20BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB40u;
        // 0x20bb44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb40) {
            ctx->pc = 0x20BB58u;
            goto label_20bb58;
        }
    }
    ctx->pc = 0x20BB48u;
label_20bb48:
    // 0x20bb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bb4c: 0x8082ed8  j           func_20BB60
    ctx->pc = 0x20BB4Cu;
    ctx->pc = 0x20BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB4Cu;
    // 0x20bb50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB60u;
    sub_0020BB60_0x20bb60(rdram, ctx, runtime); return;
    ctx->pc = 0x20BB54u;
    // 0x20bb54: 0x0  nop
    ctx->pc = 0x20bb54u;
    // NOP
label_20bb58:
    // 0x20bb58: 0x8082f2c  j           func_20BCB0
    ctx->pc = 0x20BB58u;
    ctx->pc = 0x20BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB58u;
    // 0x20bb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BCB0u;
    sub_0020BCB0_0x20bcb0(rdram, ctx, runtime); return;
    ctx->pc = 0x20BB60u;
}
