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

// Function: sub_00100230
// Address: 0x100230 - 0x100274
void sub_00100230_0x100230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100230_0x100230");
#endif

    switch (ctx->pc) {
        case 0x100244u: goto label_100244;
        case 0x100260u: goto label_100260;
        default: break;
    }

    ctx->pc = 0x100230u;

    // 0x100230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100234: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100234u;
    {
        const bool branch_taken_0x100234 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x100238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100234u;
        // 0x100238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100234) {
            ctx->pc = 0x100250u;
            goto label_100250;
        }
    }
    ctx->pc = 0x10023Cu;
    // 0x10023c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x10023Cu;
    SET_GPR_U32(ctx, 31, 0x100244u);
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x10023Cu, 0x100244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100244u;
label_100244:
    // 0x100244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x100244u;
    {
        const bool branch_taken_0x100244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100244) {
            ctx->pc = 0x100268u;
            goto label_100268;
        }
    }
    ctx->pc = 0x10024Cu;
    // 0x10024c: 0x0  nop
    ctx->pc = 0x10024cu;
    // NOP
label_100250:
    // 0x100250: 0x4187a  dsrl        $v1, $a0, 1
    ctx->pc = 0x100250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 1);
    // 0x100254: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x100254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x100258: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x100258u;
    SET_GPR_U32(ctx, 31, 0x100260u);
    ctx->pc = 0x10025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100258u;
    // 0x10025c: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x100258u, 0x100260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100260u;
label_100260:
    // 0x100260: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x100260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x100264: 0x0  nop
    ctx->pc = 0x100264u;
    // NOP
label_100268:
    // 0x100268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10026c: 0x3e00008  jr          $ra
    ctx->pc = 0x10026Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10026Cu;
        // 0x100270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10026Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100274u;
}
