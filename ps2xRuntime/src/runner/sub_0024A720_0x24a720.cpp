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

// Function: sub_0024A720
// Address: 0x24a720 - 0x24a7b4
void sub_0024A720_0x24a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A720_0x24a720");
#endif

    switch (ctx->pc) {
        case 0x24a744u: goto label_24a744;
        case 0x24a750u: goto label_24a750;
        case 0x24a758u: goto label_24a758;
        case 0x24a770u: goto label_24a770;
        case 0x24a784u: goto label_24a784;
        default: break;
    }

    ctx->pc = 0x24a720u;

    // 0x24a720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24a728: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24a728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a72c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a730: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24a734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a738: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24a73c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24A73Cu;
    SET_GPR_U32(ctx, 31, 0x24A744u);
    ctx->pc = 0x24A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A73Cu;
    // 0x24a740: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24A73Cu, 0x24A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A744u;
label_24a744:
    // 0x24a744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a748: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24A748u;
    SET_GPR_U32(ctx, 31, 0x24A750u);
    ctx->pc = 0x24A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A748u;
    // 0x24a74c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24A748u, 0x24A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A750u;
label_24a750:
    // 0x24a750: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A750u;
    {
        const bool branch_taken_0x24a750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a750) {
            ctx->pc = 0x24A760u;
            goto label_24a760;
        }
    }
    ctx->pc = 0x24A758u;
label_24a758:
    // 0x24a758: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24A758u;
    {
        const bool branch_taken_0x24a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A758u;
        // 0x24a75c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a758) {
            ctx->pc = 0x24A798u;
            goto label_24a798;
        }
    }
    ctx->pc = 0x24A760u;
label_24a760:
    // 0x24a760: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x24A760u;
    {
        const bool branch_taken_0x24a760 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x24A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A760u;
        // 0x24a764: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a760) {
            ctx->pc = 0x24A794u;
            goto label_24a794;
        }
    }
    ctx->pc = 0x24A768u;
    // 0x24a768: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x24a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x24a76c: 0x0  nop
    ctx->pc = 0x24a76cu;
    // NOP
label_24a770:
    // 0x24a770: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x24a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x24a774: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x24a774u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a778: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24a778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24a77c: 0xc0929b2  jal         func_24A6C8
    ctx->pc = 0x24A77Cu;
    SET_GPR_U32(ctx, 31, 0x24A784u);
    ctx->pc = 0x24A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A77Cu;
    // 0x24a780: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A6C8u, 0x24A77Cu, 0x24A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A784u;
label_24a784:
    // 0x24a784: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x24A784u;
    {
        const bool branch_taken_0x24a784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A784u;
        // 0x24a788: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a784) {
            ctx->pc = 0x24A758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a758;
        }
    }
    ctx->pc = 0x24A78Cu;
    // 0x24a78c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24A78Cu;
    {
        const bool branch_taken_0x24a78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A78Cu;
        // 0x24a790: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a78c) {
            ctx->pc = 0x24A770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a770;
        }
    }
    ctx->pc = 0x24A794u;
label_24a794:
    // 0x24a794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a798:
    // 0x24a798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a7a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24a7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a7a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24a7a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a7a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24a7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x24A7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7ACu;
        // 0x24a7b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A7B4u;
}
