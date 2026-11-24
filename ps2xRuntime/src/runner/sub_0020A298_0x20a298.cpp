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

// Function: sub_0020A298
// Address: 0x20a298 - 0x20a2e8
void sub_0020A298_0x20a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A298_0x20a298");
#endif

    switch (ctx->pc) {
        case 0x20a2acu: goto label_20a2ac;
        default: break;
    }

    ctx->pc = 0x20a298u;

    // 0x20a298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a2a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20a2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20a2a4: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A2A4u;
    SET_GPR_U32(ctx, 31, 0x20A2ACu);
    ctx->pc = 0x20A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2A4u;
    // 0x20a2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A2A4u, 0x20A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2ACu;
label_20a2ac:
    // 0x20a2ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a2b4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A2B4u;
    {
        const bool branch_taken_0x20a2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2B4u;
        // 0x20a2b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2b4) {
            ctx->pc = 0x20A2D8u;
            goto label_20a2d8;
        }
    }
    ctx->pc = 0x20A2BCu;
    // 0x20a2bc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a2c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a2c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a2c8: 0x24848358  addiu       $a0, $a0, -0x7CA8
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935384));
    // 0x20a2cc: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A2CCu;
    ctx->pc = 0x20A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2CCu;
    // 0x20a2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A2D4u;
    // 0x20a2d4: 0x0  nop
    ctx->pc = 0x20a2d4u;
    // NOP
label_20a2d8:
    // 0x20a2d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a2dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a2e0: 0x80829ea  j           func_20A7A8
    ctx->pc = 0x20A2E0u;
    ctx->pc = 0x20A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2E0u;
    // 0x20a2e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A7A8u;
    sub_0020A7A8_0x20a7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A2E8u;
}
