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

// Function: sub_0036F980
// Address: 0x36f980 - 0x36faa0
void sub_0036F980_0x36f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F980_0x36f980");
#endif

    switch (ctx->pc) {
        case 0x36f99cu: goto label_36f99c;
        case 0x36f9b4u: goto label_36f9b4;
        case 0x36f9e8u: goto label_36f9e8;
        case 0x36fa20u: goto label_36fa20;
        case 0x36fa54u: goto label_36fa54;
        case 0x36fa90u: goto label_36fa90;
        default: break;
    }

    ctx->pc = 0x36f980u;

    // 0x36f980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36f988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36f988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36f98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f990: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36f990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36f994: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x36F994u;
    SET_GPR_U32(ctx, 31, 0x36F99Cu);
    ctx->pc = 0x36F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F994u;
    // 0x36f998: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x36F994u, 0x36F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F99Cu;
label_36f99c:
    // 0x36f99c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36f99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36f9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f9a4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x36F9A4u;
    {
        const bool branch_taken_0x36f9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x36F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9A4u;
        // 0x36f9a8: 0x8c241284  lw          $a0, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9a4) {
            ctx->pc = 0x36F9F0u;
            goto label_36f9f0;
        }
    }
    ctx->pc = 0x36F9ACu;
    // 0x36f9ac: 0xc0dbda8  jal         func_36F6A0
    ctx->pc = 0x36F9ACu;
    SET_GPR_U32(ctx, 31, 0x36F9B4u);
    ctx->pc = 0x36F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F9ACu;
    // 0x36f9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F6A0u, 0x36F9ACu, 0x36F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F9B4u;
label_36f9b4:
    // 0x36f9b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f9b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f9bc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f9c0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f9c4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x36f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36f9c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9cc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f9d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f9d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f9dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9e0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F9E0u;
    SET_GPR_U32(ctx, 31, 0x36F9E8u);
    ctx->pc = 0x36F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F9E0u;
    // 0x36f9e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F9E0u, 0x36F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F9E8u;
label_36f9e8:
    // 0x36f9e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x36F9E8u;
    {
        const bool branch_taken_0x36f9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f9e8) {
            ctx->pc = 0x36FA90u;
            goto label_36fa90;
        }
    }
    ctx->pc = 0x36F9F0u;
label_36f9f0:
    // 0x36f9f0: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x36F9F0u;
    {
        const bool branch_taken_0x36f9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9F0u;
        // 0x36f9f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9f0) {
            ctx->pc = 0x36FA90u;
            goto label_36fa90;
        }
    }
    ctx->pc = 0x36F9F8u;
    // 0x36f9f8: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x36F9F8u;
    {
        const bool branch_taken_0x36f9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x36f9f8) {
            ctx->pc = 0x36FA90u;
            goto label_36fa90;
        }
    }
    ctx->pc = 0x36FA00u;
    // 0x36fa00: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x36fa00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36fa04: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x36fa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x36fa08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36FA08u;
    {
        const bool branch_taken_0x36fa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fa08) {
            ctx->pc = 0x36FA18u;
            goto label_36fa18;
        }
    }
    ctx->pc = 0x36FA10u;
    // 0x36fa10: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36FA10u;
    {
        const bool branch_taken_0x36fa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x36fa10) {
            ctx->pc = 0x36FA60u;
            goto label_36fa60;
        }
    }
    ctx->pc = 0x36FA18u;
label_36fa18:
    // 0x36fa18: 0xc0dbea8  jal         func_36FAA0
    ctx->pc = 0x36FA18u;
    SET_GPR_U32(ctx, 31, 0x36FA20u);
    ctx->pc = 0x36FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA18u;
    // 0x36fa1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FAA0u, 0x36FA18u, 0x36FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA20u;
label_36fa20:
    // 0x36fa20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fa24: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36fa28: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36fa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36fa2c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36fa30: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36fa34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa38: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36fa38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36fa3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36fa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36fa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36fa44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36fa48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa4c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36FA4Cu;
    SET_GPR_U32(ctx, 31, 0x36FA54u);
    ctx->pc = 0x36FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA4Cu;
    // 0x36fa50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36FA4Cu, 0x36FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA54u;
label_36fa54:
    // 0x36fa54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36FA54u;
    {
        const bool branch_taken_0x36fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fa54) {
            ctx->pc = 0x36FA90u;
            goto label_36fa90;
        }
    }
    ctx->pc = 0x36FA5Cu;
    // 0x36fa5c: 0x0  nop
    ctx->pc = 0x36fa5cu;
    // NOP
label_36fa60:
    // 0x36fa60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36fa64: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x36fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x36fa68: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x36fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x36fa6c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36fa70: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36fa70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36fa74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36fa78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36fa7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36fa80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36fa84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa88: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36FA88u;
    SET_GPR_U32(ctx, 31, 0x36FA90u);
    ctx->pc = 0x36FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA88u;
    // 0x36fa8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36FA88u, 0x36FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA90u;
label_36fa90:
    // 0x36fa90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36fa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fa94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36fa94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x36FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA98u;
        // 0x36fa9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FAA0u;
}
