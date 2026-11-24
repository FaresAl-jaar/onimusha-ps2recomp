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

// Function: sub_003BE4B0
// Address: 0x3be4b0 - 0x3be514
void sub_003BE4B0_0x3be4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE4B0_0x3be4b0");
#endif

    switch (ctx->pc) {
        case 0x3be4dcu: goto label_3be4dc;
        case 0x3be504u: goto label_3be504;
        default: break;
    }

    ctx->pc = 0x3be4b0u;

    // 0x3be4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3be4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3be4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3be4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3be4b8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3be4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3be4bc: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be4c0: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE4C0u;
    {
        const bool branch_taken_0x3be4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE4C0u;
        // 0x3be4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be4c0) {
            ctx->pc = 0x3BE4E8u;
            goto label_3be4e8;
        }
    }
    ctx->pc = 0x3BE4C8u;
    // 0x3be4c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be4cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3be4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3be4d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be4d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be4d4: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE4D4u;
    SET_GPR_U32(ctx, 31, 0x3BE4DCu);
    ctx->pc = 0x3BE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE4D4u;
    // 0x3be4d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE4D4u, 0x3BE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE4DCu;
label_3be4dc:
    // 0x3be4dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BE4DCu;
    {
        const bool branch_taken_0x3be4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be4dc) {
            ctx->pc = 0x3BE508u;
            goto label_3be508;
        }
    }
    ctx->pc = 0x3BE4E4u;
    // 0x3be4e4: 0x0  nop
    ctx->pc = 0x3be4e4u;
    // NOP
label_3be4e8:
    // 0x3be4e8: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be4f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be4f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3be4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3be4f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be4fc: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE4FCu;
    SET_GPR_U32(ctx, 31, 0x3BE504u);
    ctx->pc = 0x3BE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE4FCu;
    // 0x3be500: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE4FCu, 0x3BE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE504u;
label_3be504:
    // 0x3be504: 0x0  nop
    ctx->pc = 0x3be504u;
    // NOP
label_3be508:
    // 0x3be508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3be508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be50c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE50Cu;
        // 0x3be510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE514u;
}
