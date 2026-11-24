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

// Function: sub_002AFFE0
// Address: 0x2affe0 - 0x2b0038
void sub_002AFFE0_0x2affe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFFE0_0x2affe0");
#endif

    switch (ctx->pc) {
        case 0x2b0008u: goto label_2b0008;
        case 0x2b0018u: goto label_2b0018;
        case 0x2b0024u: goto label_2b0024;
        default: break;
    }

    ctx->pc = 0x2affe0u;

    // 0x2affe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2affe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2affe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2affe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2affe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2affe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2affec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2affecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2afff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afff8: 0xa0820110  sb          $v0, 0x110($a0)
    ctx->pc = 0x2afff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 272), (uint8_t)GPR_U32(ctx, 2));
    // 0x2afffc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2afffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2b0000: 0xc04c918  jal         func_132460
    ctx->pc = 0x2B0000u;
    SET_GPR_U32(ctx, 31, 0x2B0008u);
    ctx->pc = 0x2B0004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0000u;
    // 0x2b0004: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2B0000u, 0x2B0008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0008u;
label_2b0008:
    // 0x2b0008: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b0008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b000c: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b000cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b0010: 0xc0ac0dc  jal         func_2B0370
    ctx->pc = 0x2B0010u;
    SET_GPR_U32(ctx, 31, 0x2B0018u);
    ctx->pc = 0x2B0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0010u;
    // 0x2b0014: 0x24845a10  addiu       $a0, $a0, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0370u, 0x2B0010u, 0x2B0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0018u;
label_2b0018:
    // 0x2b0018: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b0018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b001c: 0xc0ac040  jal         func_2B0100
    ctx->pc = 0x2B001Cu;
    SET_GPR_U32(ctx, 31, 0x2B0024u);
    ctx->pc = 0x2B0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B001Cu;
    // 0x2b0020: 0x24845a10  addiu       $a0, $a0, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0100u, 0x2B001Cu, 0x2B0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0024u;
label_2b0024:
    // 0x2b0024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b002c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b002cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0030: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0030u;
        // 0x2b0034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0038u;
}
