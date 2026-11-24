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

// Function: sub_00302200
// Address: 0x302200 - 0x302240
void sub_00302200_0x302200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302200_0x302200");
#endif

    switch (ctx->pc) {
        case 0x302224u: goto label_302224;
        default: break;
    }

    ctx->pc = 0x302200u;

    // 0x302200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302204: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x302204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30220c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x30220cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x302210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x302214: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x302214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x302218: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x302218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30221c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x30221Cu;
    SET_GPR_U32(ctx, 31, 0x302224u);
    ctx->pc = 0x302220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30221Cu;
    // 0x302220: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x30221Cu, 0x302224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302224u;
label_302224:
    // 0x302224: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302224u;
    {
        const bool branch_taken_0x302224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302224) {
            ctx->pc = 0x302230u;
            goto label_302230;
        }
    }
    ctx->pc = 0x30222Cu;
    // 0x30222c: 0xa050053a  sb          $s0, 0x53A($v0)
    ctx->pc = 0x30222cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1338), (uint8_t)GPR_U32(ctx, 16));
label_302230:
    // 0x302230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302238: 0x3e00008  jr          $ra
    ctx->pc = 0x302238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302238u;
        // 0x30223c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302240u;
}
