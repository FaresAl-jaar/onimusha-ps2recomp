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

// Function: sub_0039A520
// Address: 0x39a520 - 0x39a570
void sub_0039A520_0x39a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A520_0x39a520");
#endif

    switch (ctx->pc) {
        case 0x39a534u: goto label_39a534;
        case 0x39a540u: goto label_39a540;
        case 0x39a550u: goto label_39a550;
        case 0x39a560u: goto label_39a560;
        default: break;
    }

    ctx->pc = 0x39a520u;

    // 0x39a520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39a524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a52c: 0xc0e68b8  jal         func_39A2E0
    ctx->pc = 0x39A52Cu;
    SET_GPR_U32(ctx, 31, 0x39A534u);
    ctx->pc = 0x39A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A52Cu;
    // 0x39a530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2E0u, 0x39A52Cu, 0x39A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A534u;
label_39a534:
    // 0x39a534: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x39a534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39a538: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x39A538u;
    SET_GPR_U32(ctx, 31, 0x39A540u);
    ctx->pc = 0x39A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A538u;
    // 0x39a53c: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x39A538u, 0x39A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A540u;
label_39a540:
    // 0x39a540: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x39a540u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39a544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a548: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39A548u;
    SET_GPR_U32(ctx, 31, 0x39A550u);
    ctx->pc = 0x39A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A548u;
    // 0x39a54c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39A548u, 0x39A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A550u;
label_39a550:
    // 0x39a550: 0x92052b25  lbu         $a1, 0x2B25($s0)
    ctx->pc = 0x39a550u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x39a554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39a554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a558: 0xc0aa350  jal         func_2A8D40
    ctx->pc = 0x39A558u;
    SET_GPR_U32(ctx, 31, 0x39A560u);
    ctx->pc = 0x39A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A558u;
    // 0x39a55c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D40u, 0x39A558u, 0x39A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A560u;
label_39a560:
    // 0x39a560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a568: 0x3e00008  jr          $ra
    ctx->pc = 0x39A568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A568u;
        // 0x39a56c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A570u;
}
