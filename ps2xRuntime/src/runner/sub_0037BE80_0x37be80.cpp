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

// Function: sub_0037BE80
// Address: 0x37be80 - 0x37bef0
void sub_0037BE80_0x37be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BE80_0x37be80");
#endif

    switch (ctx->pc) {
        case 0x37bea4u: goto label_37bea4;
        case 0x37beb0u: goto label_37beb0;
        case 0x37bec0u: goto label_37bec0;
        case 0x37beccu: goto label_37becc;
        case 0x37bedcu: goto label_37bedc;
        default: break;
    }

    ctx->pc = 0x37be80u;

    // 0x37be80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37be84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37be88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37be8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37be90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37be90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37be94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be98: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x37be98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37be9c: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x37BE9Cu;
    SET_GPR_U32(ctx, 31, 0x37BEA4u);
    ctx->pc = 0x37BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE9Cu;
    // 0x37bea0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x37BE9Cu, 0x37BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEA4u;
label_37bea4:
    // 0x37bea4: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x37bea4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37bea8: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x37BEA8u;
    SET_GPR_U32(ctx, 31, 0x37BEB0u);
    ctx->pc = 0x37BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEA8u;
    // 0x37beac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x37BEA8u, 0x37BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEB0u;
label_37beb0:
    // 0x37beb0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x37beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37beb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x37beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37beb8: 0xc04144e  jal         func_105138
    ctx->pc = 0x37BEB8u;
    SET_GPR_U32(ctx, 31, 0x37BEC0u);
    ctx->pc = 0x37BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEB8u;
    // 0x37bebc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x37BEB8u, 0x37BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEC0u;
label_37bec0:
    // 0x37bec0: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x37bec0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x37bec4: 0xc04d594  jal         func_135650
    ctx->pc = 0x37BEC4u;
    SET_GPR_U32(ctx, 31, 0x37BECCu);
    ctx->pc = 0x37BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEC4u;
    // 0x37bec8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x37BEC4u, 0x37BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BECCu;
label_37becc:
    // 0x37becc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37beccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bed0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x37bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37bed4: 0xc04144e  jal         func_105138
    ctx->pc = 0x37BED4u;
    SET_GPR_U32(ctx, 31, 0x37BEDCu);
    ctx->pc = 0x37BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BED4u;
    // 0x37bed8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x37BED4u, 0x37BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEDCu;
label_37bedc:
    // 0x37bedc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37bedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37bee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37bee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bee8: 0x3e00008  jr          $ra
    ctx->pc = 0x37BEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEE8u;
        // 0x37beec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BEF0u;
}
