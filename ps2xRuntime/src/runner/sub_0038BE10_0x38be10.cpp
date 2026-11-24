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

// Function: sub_0038BE10
// Address: 0x38be10 - 0x38bea8
void sub_0038BE10_0x38be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BE10_0x38be10");
#endif

    switch (ctx->pc) {
        case 0x38be40u: goto label_38be40;
        case 0x38be58u: goto label_38be58;
        case 0x38be6cu: goto label_38be6c;
        case 0x38be94u: goto label_38be94;
        default: break;
    }

    ctx->pc = 0x38be10u;

    // 0x38be10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38be14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38be14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38be18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38be1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38be1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38be20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38be24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38be24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38be28: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x38be28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38be2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38be2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38be30: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38be30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38be34: 0x24a5bee0  addiu       $a1, $a1, -0x4120
    ctx->pc = 0x38be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950624));
    // 0x38be38: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38BE38u;
    SET_GPR_U32(ctx, 31, 0x38BE40u);
    ctx->pc = 0x38BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE38u;
    // 0x38be3c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38BE38u, 0x38BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE40u;
label_38be40:
    // 0x38be40: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x38be40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38be44: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38be44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38be48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38be48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38be4c: 0x24a5beb0  addiu       $a1, $a1, -0x4150
    ctx->pc = 0x38be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950576));
    // 0x38be50: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38BE50u;
    SET_GPR_U32(ctx, 31, 0x38BE58u);
    ctx->pc = 0x38BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE50u;
    // 0x38be54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38BE50u, 0x38BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE58u;
label_38be58:
    // 0x38be58: 0x96252ad2  lhu         $a1, 0x2AD2($s1)
    ctx->pc = 0x38be58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10962)));
    // 0x38be5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38be5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38be60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38be60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38be64: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x38BE64u;
    SET_GPR_U32(ctx, 31, 0x38BE6Cu);
    ctx->pc = 0x38BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE64u;
    // 0x38be68: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x38BE64u, 0x38BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE6Cu;
label_38be6c:
    // 0x38be6c: 0x96262ace  lhu         $a2, 0x2ACE($s1)
    ctx->pc = 0x38be6cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10958)));
    // 0x38be70: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38be70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38be74: 0x96272ad0  lhu         $a3, 0x2AD0($s1)
    ctx->pc = 0x38be74u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10960)));
    // 0x38be78: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x38be78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38be7c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x38be7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38be80: 0x2484ea40  addiu       $a0, $a0, -0x15C0
    ctx->pc = 0x38be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    // 0x38be84: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x38be84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38be88: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x38be88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38be8c: 0xc0c86f4  jal         func_321BD0
    ctx->pc = 0x38BE8Cu;
    SET_GPR_U32(ctx, 31, 0x38BE94u);
    ctx->pc = 0x38BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE8Cu;
    // 0x38be90: 0x27aa0030  addiu       $t2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321BD0u, 0x38BE8Cu, 0x38BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE94u;
label_38be94:
    // 0x38be94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38be98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38be98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38be9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38be9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bea0: 0x3e00008  jr          $ra
    ctx->pc = 0x38BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEA0u;
        // 0x38bea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BEA8u;
}
