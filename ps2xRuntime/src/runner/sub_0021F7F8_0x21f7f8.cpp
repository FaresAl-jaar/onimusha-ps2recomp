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

// Function: sub_0021F7F8
// Address: 0x21f7f8 - 0x21f838
void sub_0021F7F8_0x21f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F7F8_0x21f7f8");
#endif

    switch (ctx->pc) {
        case 0x21f80cu: goto label_21f80c;
        case 0x21f824u: goto label_21f824;
        default: break;
    }

    ctx->pc = 0x21f7f8u;

    // 0x21f7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21f804: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F804u;
    SET_GPR_U32(ctx, 31, 0x21F80Cu);
    ctx->pc = 0x21F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F804u;
    // 0x21f808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F804u, 0x21F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F80Cu;
label_21f80c:
    // 0x21f80c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f814: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F814u;
    {
        const bool branch_taken_0x21f814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F814u;
        // 0x21f818: 0x34a50111  ori         $a1, $a1, 0x111 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)273);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f814) {
            ctx->pc = 0x21F824u;
            goto label_21f824;
        }
    }
    ctx->pc = 0x21F81Cu;
    // 0x21f81c: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21F81Cu;
    SET_GPR_U32(ctx, 31, 0x21F824u);
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21F81Cu, 0x21F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F824u;
label_21f824:
    // 0x21f824: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x21f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21f828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f82c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f830: 0x3e00008  jr          $ra
    ctx->pc = 0x21F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F830u;
        // 0x21f834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F838u;
}
