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

// Function: sub_0023F228
// Address: 0x23f228 - 0x23f268
void sub_0023F228_0x23f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F228_0x23f228");
#endif

    switch (ctx->pc) {
        case 0x23f24cu: goto label_23f24c;
        default: break;
    }

    ctx->pc = 0x23f228u;

    // 0x23f228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f234: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23f238: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x23f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x23f23c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F23Cu;
    {
        const bool branch_taken_0x23f23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F23Cu;
        // 0x23f240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f23c) {
            ctx->pc = 0x23F24Cu;
            goto label_23f24c;
        }
    }
    ctx->pc = 0x23F244u;
    // 0x23f244: 0xc090aa8  jal         func_242AA0
    ctx->pc = 0x23F244u;
    SET_GPR_U32(ctx, 31, 0x23F24Cu);
    ctx->pc = 0x23F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F244u;
    // 0x23f248: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242AA0u, 0x23F244u, 0x23F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F24Cu;
label_23f24c:
    // 0x23f24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f254: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23f254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f25c: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x23f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x23f260: 0x8049590  j           func_125640
    ctx->pc = 0x23F260u;
    ctx->pc = 0x23F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F260u;
    // 0x23f264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x23F268u;
}
