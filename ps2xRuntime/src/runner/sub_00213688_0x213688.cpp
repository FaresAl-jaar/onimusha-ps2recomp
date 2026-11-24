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

// Function: sub_00213688
// Address: 0x213688 - 0x213724
void sub_00213688_0x213688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213688_0x213688");
#endif

    switch (ctx->pc) {
        case 0x2136b8u: goto label_2136b8;
        case 0x2136d4u: goto label_2136d4;
        case 0x2136f4u: goto label_2136f4;
        case 0x213708u: goto label_213708;
        default: break;
    }

    ctx->pc = 0x213688u;

    // 0x213688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x213688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21368c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x21368cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213690: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x213690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x213694: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x213694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x213698: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x213698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21369c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2136a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2136a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136a4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2136a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2136a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2136a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2136acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2136b0: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x2136B0u;
    SET_GPR_U32(ctx, 31, 0x2136B8u);
    ctx->pc = 0x2136B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136B0u;
    // 0x2136b4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x2136B0u, 0x2136B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136B8u;
label_2136b8:
    // 0x2136b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2136b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2136bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2136c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2136C4u;
    {
        const bool branch_taken_0x2136c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136C4u;
        // 0x2136c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136c4) {
            ctx->pc = 0x213700u;
            goto label_213700;
        }
    }
    ctx->pc = 0x2136CCu;
    // 0x2136cc: 0xc0851d8  jal         func_214760
    ctx->pc = 0x2136CCu;
    SET_GPR_U32(ctx, 31, 0x2136D4u);
    ctx->pc = 0x214760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214760u, 0x2136CCu, 0x2136D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136D4u;
label_2136d4:
    // 0x2136d4: 0x2646ffee  addiu       $a2, $s2, -0x12
    ctx->pc = 0x2136d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967278));
    // 0x2136d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2136d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2136dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2136dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2136e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2136E4u;
    {
        const bool branch_taken_0x2136e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136E4u;
        // 0x2136e8: 0x26670012  addiu       $a3, $s3, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136e4) {
            ctx->pc = 0x2136F4u;
            goto label_2136f4;
        }
    }
    ctx->pc = 0x2136ECu;
    // 0x2136ec: 0xc084dca  jal         func_213728
    ctx->pc = 0x2136ECu;
    SET_GPR_U32(ctx, 31, 0x2136F4u);
    ctx->pc = 0x213728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213728u, 0x2136ECu, 0x2136F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136F4u;
label_2136f4:
    // 0x2136f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2136F4u;
    {
        const bool branch_taken_0x2136f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136F4u;
        // 0x2136f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136f4) {
            ctx->pc = 0x213708u;
            goto label_213708;
        }
    }
    ctx->pc = 0x2136FCu;
    // 0x2136fc: 0x0  nop
    ctx->pc = 0x2136fcu;
    // NOP
label_213700:
    // 0x213700: 0xc084dca  jal         func_213728
    ctx->pc = 0x213700u;
    SET_GPR_U32(ctx, 31, 0x213708u);
    ctx->pc = 0x213704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213700u;
    // 0x213704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213728u, 0x213700u, 0x213708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213708u;
label_213708:
    // 0x213708: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x213708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21370c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21370cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213710: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x213710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213714: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x213714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213718: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x213718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21371c: 0x3e00008  jr          $ra
    ctx->pc = 0x21371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21371Cu;
        // 0x213720: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213724u;
}
