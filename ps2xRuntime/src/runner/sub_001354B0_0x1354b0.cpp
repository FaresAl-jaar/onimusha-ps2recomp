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

// Function: sub_001354B0
// Address: 0x1354b0 - 0x13551c
void sub_001354B0_0x1354b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001354B0_0x1354b0");
#endif

    switch (ctx->pc) {
        case 0x1354d0u: goto label_1354d0;
        case 0x1354dcu: goto label_1354dc;
        case 0x1354ecu: goto label_1354ec;
        case 0x1354f8u: goto label_1354f8;
        case 0x135508u: goto label_135508;
        default: break;
    }

    ctx->pc = 0x1354b0u;

    // 0x1354b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1354b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1354b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1354b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1354b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1354b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1354bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1354bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1354c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1354c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354c4: 0x84a50002  lh          $a1, 0x2($a1)
    ctx->pc = 0x1354c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1354c8: 0xc04d594  jal         func_135650
    ctx->pc = 0x1354C8u;
    SET_GPR_U32(ctx, 31, 0x1354D0u);
    ctx->pc = 0x1354CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354C8u;
    // 0x1354cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x1354C8u, 0x1354D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354D0u;
label_1354d0:
    // 0x1354d0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1354d4: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x1354D4u;
    SET_GPR_U32(ctx, 31, 0x1354DCu);
    ctx->pc = 0x1354D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354D4u;
    // 0x1354d8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x1354D4u, 0x1354DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354DCu;
label_1354dc:
    // 0x1354dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1354dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1354e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354e4: 0xc04144e  jal         func_105138
    ctx->pc = 0x1354E4u;
    SET_GPR_U32(ctx, 31, 0x1354ECu);
    ctx->pc = 0x1354E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354E4u;
    // 0x1354e8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1354E4u, 0x1354ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354ECu;
label_1354ec:
    // 0x1354ec: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x1354ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1354f0: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1354F0u;
    SET_GPR_U32(ctx, 31, 0x1354F8u);
    ctx->pc = 0x1354F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354F0u;
    // 0x1354f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1354F0u, 0x1354F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354F8u;
label_1354f8:
    // 0x1354f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1354f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1354fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135500: 0xc04144e  jal         func_105138
    ctx->pc = 0x135500u;
    SET_GPR_U32(ctx, 31, 0x135508u);
    ctx->pc = 0x135504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135500u;
    // 0x135504: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x135500u, 0x135508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135508u;
label_135508:
    // 0x135508: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13550c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13550cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135514: 0x3e00008  jr          $ra
    ctx->pc = 0x135514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135514u;
        // 0x135518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13551Cu;
}
