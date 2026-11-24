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

// Function: sub_00207978
// Address: 0x207978 - 0x207a20
void sub_00207978_0x207978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207978_0x207978");
#endif

    switch (ctx->pc) {
        case 0x207990u: goto label_207990;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079c8u: goto label_2079c8;
        case 0x207a04u: goto label_207a04;
        default: break;
    }

    ctx->pc = 0x207978u;

    // 0x207978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20797c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x207980: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x207980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x207984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x207984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x207988: 0xc081d84  jal         func_207610
    ctx->pc = 0x207988u;
    SET_GPR_U32(ctx, 31, 0x207990u);
    ctx->pc = 0x20798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207988u;
    // 0x20798c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207988u, 0x207990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207990u;
label_207990:
    // 0x207990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207998: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207998u;
    {
        const bool branch_taken_0x207998 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207998u;
        // 0x20799c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207998) {
            ctx->pc = 0x2079B0u;
            goto label_2079b0;
        }
    }
    ctx->pc = 0x2079A0u;
    // 0x2079a0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2079A0u;
    SET_GPR_U32(ctx, 31, 0x2079A8u);
    ctx->pc = 0x2079A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2079A0u;
    // 0x2079a4: 0x24847830  addiu       $a0, $a0, 0x7830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2079A0u, 0x2079A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2079A8u;
label_2079a8:
    // 0x2079a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2079A8u;
    {
        const bool branch_taken_0x2079a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079A8u;
        // 0x2079ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079a8) {
            ctx->pc = 0x207A0Cu;
            goto label_207a0c;
        }
    }
    ctx->pc = 0x2079B0u;
label_2079b0:
    // 0x2079b0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2079b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2079b4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2079B4u;
    {
        const bool branch_taken_0x2079b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079B4u;
        // 0x2079b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079b4) {
            ctx->pc = 0x207A0Cu;
            goto label_207a0c;
        }
    }
    ctx->pc = 0x2079BCu;
    // 0x2079bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2079bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2079c0: 0xc087ea8  jal         func_21FAA0
    ctx->pc = 0x2079C0u;
    SET_GPR_U32(ctx, 31, 0x2079C8u);
    ctx->pc = 0x2079C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2079C0u;
    // 0x2079c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FAA0u, 0x2079C0u, 0x2079C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2079C8u;
label_2079c8:
    // 0x2079c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2079c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2079cc: 0x1071000e  beq         $v1, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2079CCu;
    {
        const bool branch_taken_0x2079cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2079D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079CCu;
        // 0x2079d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079cc) {
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x2079D4u;
    // 0x2079d4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2079d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2079d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2079D8u;
    {
        const bool branch_taken_0x2079d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079d8) {
            ctx->pc = 0x2079DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2079D8u;
            // 0x2079dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2079F0u;
            goto label_2079f0;
        }
    }
    ctx->pc = 0x2079E0u;
    // 0x2079e0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2079E0u;
    {
        const bool branch_taken_0x2079e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079E0u;
        // 0x2079e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079e0) {
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x2079E8u;
    // 0x2079e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2079E8u;
    {
        const bool branch_taken_0x2079e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079E8u;
        // 0x2079ec: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079e8) {
            ctx->pc = 0x2079FCu;
            goto label_2079fc;
        }
    }
    ctx->pc = 0x2079F0u;
label_2079f0:
    // 0x2079f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2079F0u;
    {
        const bool branch_taken_0x2079f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2079F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079F0u;
        // 0x2079f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079f0) {
            ctx->pc = 0x207A08u;
            goto label_207a08;
        }
    }
    ctx->pc = 0x2079F8u;
    // 0x2079f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_2079fc:
    // 0x2079fc: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2079FCu;
    SET_GPR_U32(ctx, 31, 0x207A04u);
    ctx->pc = 0x207A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2079FCu;
    // 0x207a00: 0x24847860  addiu       $a0, $a0, 0x7860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2079FCu, 0x207A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A04u;
label_207a04:
    // 0x207a04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x207a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_207a08:
    // 0x207a08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x207a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207a0c:
    // 0x207a0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x207a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x207a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207a14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x207a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207a18: 0x3e00008  jr          $ra
    ctx->pc = 0x207A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A18u;
        // 0x207a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A20u;
}
