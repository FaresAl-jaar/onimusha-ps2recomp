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

// Function: sub_001DB330
// Address: 0x1db330 - 0x1db374
void sub_001DB330_0x1db330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB330_0x1db330");
#endif

    switch (ctx->pc) {
        case 0x1db354u: goto label_1db354;
        case 0x1db35cu: goto label_1db35c;
        default: break;
    }

    ctx->pc = 0x1db330u;

    // 0x1db330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db340: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB340u;
    {
        const bool branch_taken_0x1db340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB340u;
        // 0x1db344: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db340) {
            ctx->pc = 0x1DB360u;
            goto label_1db360;
        }
    }
    ctx->pc = 0x1DB348u;
    // 0x1db348: 0x24426120  addiu       $v0, $v0, 0x6120
    ctx->pc = 0x1db348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24864));
    // 0x1db34c: 0xc076e10  jal         func_1DB840
    ctx->pc = 0x1DB34Cu;
    SET_GPR_U32(ctx, 31, 0x1DB354u);
    ctx->pc = 0x1DB350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB34Cu;
    // 0x1db350: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1DB34Cu, 0x1DB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB354u;
label_1db354:
    // 0x1db354: 0xc076e44  jal         func_1DB910
    ctx->pc = 0x1DB354u;
    SET_GPR_U32(ctx, 31, 0x1DB35Cu);
    ctx->pc = 0x1DB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB354u;
    // 0x1db358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB910u, 0x1DB354u, 0x1DB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB35Cu;
label_1db35c:
    // 0x1db35c: 0x0  nop
    ctx->pc = 0x1db35cu;
    // NOP
label_1db360:
    // 0x1db360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db36c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB36Cu;
        // 0x1db370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB374u;
}
