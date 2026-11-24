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

// Function: sub_0022BD28
// Address: 0x22bd28 - 0x22bd68
void sub_0022BD28_0x22bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD28_0x22bd28");
#endif

    switch (ctx->pc) {
        case 0x22bd48u: goto label_22bd48;
        default: break;
    }

    ctx->pc = 0x22bd28u;

    // 0x22bd28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22bd2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22bd38: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x22bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x22bd3c: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x22bd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x22bd40: 0xc08f8f4  jal         func_23E3D0
    ctx->pc = 0x22BD40u;
    SET_GPR_U32(ctx, 31, 0x22BD48u);
    ctx->pc = 0x22BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD40u;
    // 0x22bd44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E3D0u, 0x22BD40u, 0x22BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD48u;
label_22bd48:
    // 0x22bd48: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22bd4c: 0x860700aa  lh          $a3, 0xAA($s0)
    ctx->pc = 0x22bd4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x22bd50: 0x860500a6  lh          $a1, 0xA6($s0)
    ctx->pc = 0x22bd50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x22bd54: 0x860600a8  lh          $a2, 0xA8($s0)
    ctx->pc = 0x22bd54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x22bd58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22bd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bd5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bd5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bd60: 0x808f908  j           func_23E420
    ctx->pc = 0x22BD60u;
    ctx->pc = 0x22BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD60u;
    // 0x22bd64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E420u;
    sub_0023E420_0x23e420(rdram, ctx, runtime); return;
    ctx->pc = 0x22BD68u;
}
