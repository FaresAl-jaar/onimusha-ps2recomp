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

// Function: sub_0038C4F0
// Address: 0x38c4f0 - 0x38c548
void sub_0038C4F0_0x38c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C4F0_0x38c4f0");
#endif

    switch (ctx->pc) {
        case 0x38c50cu: goto label_38c50c;
        case 0x38c51cu: goto label_38c51c;
        case 0x38c530u: goto label_38c530;
        case 0x38c538u: goto label_38c538;
        default: break;
    }

    ctx->pc = 0x38c4f0u;

    // 0x38c4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38c4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38c4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38c4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c500: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x38c500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x38c504: 0xc0ce23c  jal         func_3388F0
    ctx->pc = 0x38C504u;
    SET_GPR_U32(ctx, 31, 0x38C50Cu);
    ctx->pc = 0x38C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C504u;
    // 0x38c508: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3388F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3388F0u, 0x38C504u, 0x38C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C50Cu;
label_38c50c:
    // 0x38c50c: 0x96052acc  lhu         $a1, 0x2ACC($s0)
    ctx->pc = 0x38c50cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
    // 0x38c510: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x38c510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x38c514: 0xc056e04  jal         func_15B810
    ctx->pc = 0x38C514u;
    SET_GPR_U32(ctx, 31, 0x38C51Cu);
    ctx->pc = 0x38C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C514u;
    // 0x38c518: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x38C514u, 0x38C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C51Cu;
label_38c51c:
    // 0x38c51c: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x38c520: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38c520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38c524: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x38c524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x38c528: 0xc0c8b74  jal         func_322DD0
    ctx->pc = 0x38C528u;
    SET_GPR_U32(ctx, 31, 0x38C530u);
    ctx->pc = 0x38C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C528u;
    // 0x38c52c: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DD0u, 0x38C528u, 0x38C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C530u;
label_38c530:
    // 0x38c530: 0xc0d0538  jal         func_3414E0
    ctx->pc = 0x38C530u;
    SET_GPR_U32(ctx, 31, 0x38C538u);
    ctx->pc = 0x38C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C530u;
    // 0x38c534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3414E0u, 0x38C530u, 0x38C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C538u;
label_38c538:
    // 0x38c538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c540: 0x3e00008  jr          $ra
    ctx->pc = 0x38C540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C540u;
        // 0x38c544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C548u;
}
