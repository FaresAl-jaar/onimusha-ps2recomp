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

// Function: sub_00302250
// Address: 0x302250 - 0x302294
void sub_00302250_0x302250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302250_0x302250");
#endif

    switch (ctx->pc) {
        case 0x302268u: goto label_302268;
        default: break;
    }

    ctx->pc = 0x302250u;

    // 0x302250: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x302250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302254: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x302254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x302258: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x302258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x30225c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x302260: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x302260u;
    SET_GPR_U32(ctx, 31, 0x302268u);
    ctx->pc = 0x302264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302260u;
    // 0x302264: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x302260u, 0x302268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302268u;
label_302268:
    // 0x302268: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302268u;
    {
        const bool branch_taken_0x302268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302268) {
            ctx->pc = 0x302284u;
            goto label_302284;
        }
    }
    ctx->pc = 0x302270u;
    // 0x302270: 0x9042052f  lbu         $v0, 0x52F($v0)
    ctx->pc = 0x302270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1327)));
    // 0x302274: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x302274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x302278: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x302278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30227c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30227Cu;
    {
        const bool branch_taken_0x30227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30227Cu;
        // 0x302280: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30227c) {
            ctx->pc = 0x302288u;
            goto label_302288;
        }
    }
    ctx->pc = 0x302284u;
label_302284:
    // 0x302284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x302284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302288:
    // 0x302288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x302288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30228c: 0x3e00008  jr          $ra
    ctx->pc = 0x30228Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30228Cu;
        // 0x302290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30228Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302294u;
}
