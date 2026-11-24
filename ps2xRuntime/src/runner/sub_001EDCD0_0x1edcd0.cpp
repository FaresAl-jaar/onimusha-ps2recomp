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

// Function: sub_001EDCD0
// Address: 0x1edcd0 - 0x1edd24
void sub_001EDCD0_0x1edcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDCD0_0x1edcd0");
#endif

    switch (ctx->pc) {
        case 0x1edcd0u: goto label_1edcd0;
        case 0x1edcd4u: goto label_1edcd4;
        case 0x1edcd8u: goto label_1edcd8;
        case 0x1edcdcu: goto label_1edcdc;
        case 0x1edce0u: goto label_1edce0;
        case 0x1edce4u: goto label_1edce4;
        case 0x1edce8u: goto label_1edce8;
        case 0x1edcecu: goto label_1edcec;
        case 0x1edcf0u: goto label_1edcf0;
        case 0x1edcf4u: goto label_1edcf4;
        case 0x1edcf8u: goto label_1edcf8;
        case 0x1edcfcu: goto label_1edcfc;
        case 0x1edd00u: goto label_1edd00;
        case 0x1edd04u: goto label_1edd04;
        case 0x1edd08u: goto label_1edd08;
        case 0x1edd0cu: goto label_1edd0c;
        case 0x1edd10u: goto label_1edd10;
        case 0x1edd14u: goto label_1edd14;
        case 0x1edd18u: goto label_1edd18;
        case 0x1edd1cu: goto label_1edd1c;
        case 0x1edd20u: goto label_1edd20;
        default: break;
    }

    ctx->pc = 0x1edcd0u;

label_1edcd0:
    // 0x1edcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1edcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1edcd4:
    // 0x1edcd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1edcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1edcd8:
    // 0x1edcd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1edcdc:
    // 0x1edcdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1edce0:
    // 0x1edce0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1edce4:
    if (ctx->pc == 0x1EDCE4u) {
        ctx->pc = 0x1EDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCE0u;
        // 0x1edce4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCE8u;
        goto label_1edce8;
    }
    ctx->pc = 0x1EDCE0u;
    {
        const bool branch_taken_0x1edce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCE0u;
        // 0x1edce4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edce0) {
            ctx->pc = 0x1EDD10u;
            goto label_1edd10;
        }
    }
    ctx->pc = 0x1EDCE8u;
label_1edce8:
    // 0x1edce8: 0x24427230  addiu       $v0, $v0, 0x7230
    ctx->pc = 0x1edce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29232));
label_1edcec:
    // 0x1edcec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1edcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1edcf0:
    // 0x1edcf0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1edcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1edcf4:
    // 0x1edcf4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1edcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1edcf8:
    // 0x1edcf8: 0x320f809  jalr        $t9
label_1edcfc:
    if (ctx->pc == 0x1EDCFCu) {
        ctx->pc = 0x1EDD00u;
        goto label_1edd00;
    }
    ctx->pc = 0x1EDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDD00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDCF8u, 0x1EDD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDD00u;
label_1edd00:
    // 0x1edd00: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1edd04:
    if (ctx->pc == 0x1EDD04u) {
        ctx->pc = 0x1EDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD00u;
        // 0x1edd04: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD08u;
        goto label_1edd08;
    }
    ctx->pc = 0x1EDD00u;
    {
        const bool branch_taken_0x1edd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD00u;
        // 0x1edd04: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd00) {
            ctx->pc = 0x1EDD10u;
            goto label_1edd10;
        }
    }
    ctx->pc = 0x1EDD08u;
label_1edd08:
    // 0x1edd08: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1edd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1edd0c:
    // 0x1edd0c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1edd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1edd10:
    // 0x1edd10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1edd10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1edd14:
    // 0x1edd14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1edd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1edd18:
    // 0x1edd18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1edd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1edd1c:
    // 0x1edd1c: 0x3e00008  jr          $ra
label_1edd20:
    if (ctx->pc == 0x1EDD20u) {
        ctx->pc = 0x1EDD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD1Cu;
        // 0x1edd20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD24u;
        goto label_fallthrough_0x1edd1c;
    }
    ctx->pc = 0x1EDD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD1Cu;
        // 0x1edd20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1edd1c:
    ctx->pc = 0x1EDD24u;
}
