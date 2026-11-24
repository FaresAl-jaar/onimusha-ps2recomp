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

// Function: sub_00237330
// Address: 0x237330 - 0x237388
void sub_00237330_0x237330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237330_0x237330");
#endif

    switch (ctx->pc) {
        case 0x23734cu: goto label_23734c;
        case 0x237354u: goto label_237354;
        default: break;
    }

    ctx->pc = 0x237330u;

    // 0x237330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23733c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x23733Cu;
    {
        const bool branch_taken_0x23733c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23733Cu;
        // 0x237340: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23733c) {
            ctx->pc = 0x237378u;
            goto label_237378;
        }
    }
    ctx->pc = 0x237344u;
    // 0x237344: 0xc08de38  jal         func_2378E0
    ctx->pc = 0x237344u;
    SET_GPR_U32(ctx, 31, 0x23734Cu);
    ctx->pc = 0x2378E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378E0u, 0x237344u, 0x23734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23734Cu;
label_23734c:
    // 0x23734c: 0xc08dd62  jal         func_237588
    ctx->pc = 0x23734Cu;
    SET_GPR_U32(ctx, 31, 0x237354u);
    ctx->pc = 0x237350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23734Cu;
    // 0x237350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237588u, 0x23734Cu, 0x237354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237354u;
label_237354:
    // 0x237354: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x237354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x237358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23735c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23735cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237360: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237368: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x237368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x23736c: 0x8049590  j           func_125640
    ctx->pc = 0x23736Cu;
    ctx->pc = 0x237370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23736Cu;
    // 0x237370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x237374u;
    // 0x237374: 0x0  nop
    ctx->pc = 0x237374u;
    // NOP
label_237378:
    // 0x237378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23737c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237380: 0x3e00008  jr          $ra
    ctx->pc = 0x237380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237380u;
        // 0x237384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237388u;
}
