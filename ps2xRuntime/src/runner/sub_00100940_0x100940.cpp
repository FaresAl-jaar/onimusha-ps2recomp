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

// Function: sub_00100940
// Address: 0x100940 - 0x100974
void sub_00100940_0x100940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100940_0x100940");
#endif

    switch (ctx->pc) {
        case 0x100940u: goto label_100940;
        case 0x100944u: goto label_100944;
        case 0x100948u: goto label_100948;
        case 0x10094cu: goto label_10094c;
        case 0x100950u: goto label_100950;
        case 0x100954u: goto label_100954;
        case 0x100958u: goto label_100958;
        case 0x10095cu: goto label_10095c;
        case 0x100960u: goto label_100960;
        case 0x100964u: goto label_100964;
        case 0x100968u: goto label_100968;
        case 0x10096cu: goto label_10096c;
        case 0x100970u: goto label_100970;
        default: break;
    }

    ctx->pc = 0x100940u;

label_100940:
    // 0x100940: 0x8f210000  lw          $at, 0x0($t9)
    ctx->pc = 0x100940u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_100944:
    // 0x100944: 0x8f380004  lw          $t8, 0x4($t9)
    ctx->pc = 0x100944u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
label_100948:
    // 0x100948: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x100948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_10094c:
    // 0x10094c: 0x7000007  bltz        $t8, . + 4 + (0x7 << 2)
label_100950:
    if (ctx->pc == 0x100950u) {
        ctx->pc = 0x100950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10094Cu;
        // 0x100950: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100954u;
        goto label_100954;
    }
    ctx->pc = 0x10094Cu;
    {
        const bool branch_taken_0x10094c = (GPR_S64(ctx, 24) < 0);
        ctx->pc = 0x100950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10094Cu;
        // 0x100950: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10094c) {
            ctx->pc = 0x10096Cu;
            goto label_10096c;
        }
    }
    ctx->pc = 0x100954u;
label_100954:
    // 0x100954: 0x99c821  addu        $t9, $a0, $t9
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_100958:
    // 0x100958: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x100958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_10095c:
    // 0x10095c: 0x0  nop
    ctx->pc = 0x10095cu;
    // NOP
label_100960:
    // 0x100960: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x100960u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
label_100964:
    // 0x100964: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x100964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_100968:
    // 0x100968: 0x0  nop
    ctx->pc = 0x100968u;
    // NOP
label_10096c:
    // 0x10096c: 0x3200008  jr          $t9
label_100970:
    if (ctx->pc == 0x100970u) {
        ctx->pc = 0x100974u;
        goto label_fallthrough_0x10096c;
    }
    ctx->pc = 0x10096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10096Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x10096c:
    ctx->pc = 0x100974u;
}
