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

// Function: sub_00126290
// Address: 0x126290 - 0x126344
void sub_00126290_0x126290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126290_0x126290");
#endif

    switch (ctx->pc) {
        case 0x126320u: goto label_126320;
        default: break;
    }

    ctx->pc = 0x126290u;

    // 0x126290: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x126290u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x126294: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x126294u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x126298: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x126298u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12629c: 0x3c0dfcc0  lui         $t5, 0xFCC0
    ctx->pc = 0x12629cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)64704 << 16));
    // 0x1262a0: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x1262a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1262a4: 0xd7023  negu        $t6, $t5
    ctx->pc = 0x1262a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
    // 0x1262a8: 0x19a00008  blez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1262A8u;
    {
        const bool branch_taken_0x1262a8 = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x1262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262A8u;
        // 0x1262ac: 0xd783c  dsll32      $t7, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262a8) {
            ctx->pc = 0x1262CCu;
            goto label_1262cc;
        }
    }
    ctx->pc = 0x1262B0u;
    // 0x1262b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1262b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1262b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1262b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1262b8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1262b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1262bc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1262bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1262c0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1262c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1262c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1262C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1262C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262C4u;
        // 0x1262c8: 0x4f1024  and         $v0, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262CCu;
label_1262cc:
    // 0x1262cc: 0xe6d03  sra         $t5, $t6, 20
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 14), 20));
    // 0x1262d0: 0x29af0014  slti        $t7, $t5, 0x14
    ctx->pc = 0x1262d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1262d4: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1262D4u;
    {
        const bool branch_taken_0x1262d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1262d4) {
            ctx->pc = 0x1262D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1262D4u;
            // 0x1262d8: 0x25adffec  addiu       $t5, $t5, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126304u;
            goto label_126304;
        }
    }
    ctx->pc = 0x1262DCu;
    // 0x1262dc: 0x3c0f0008  lui         $t7, 0x8
    ctx->pc = 0x1262dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8 << 16));
    // 0x1262e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1262e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1262e4: 0x1af7807  srav        $t7, $t7, $t5
    ctx->pc = 0x1262e4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x1262e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1262e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1262ec: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1262ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1262f0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1262f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1262f4: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1262f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1262f8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1262f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1262fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1262FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262FCu;
        // 0x126300: 0x4e1024  and         $v0, $v0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126304u;
label_126304:
    // 0x126304: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x126304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x126308: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x126308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12630c: 0x29af001f  slti        $t7, $t5, 0x1F
    ctx->pc = 0x12630cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x126310: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x126310u;
    {
        const bool branch_taken_0x126310 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126310u;
        // 0x126314: 0xd7027  nor         $t6, $zero, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126310) {
            ctx->pc = 0x12633Cu;
            goto label_12633c;
        }
    }
    ctx->pc = 0x126318u;
    // 0x126318: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x126318u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12631c: 0x1cf7004  sllv        $t6, $t7, $t6
    ctx->pc = 0x12631cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
label_126320:
    // 0x126320: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x126320u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126324: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x126324u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x126328: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126328u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12632c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12632cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x126330: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x126330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x126334: 0x3e00008  jr          $ra
    ctx->pc = 0x126334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126334u;
        // 0x126338: 0x4e1025  or          $v0, $v0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12633Cu;
label_12633c:
    // 0x12633c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12633Cu;
    {
        const bool branch_taken_0x12633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12633Cu;
        // 0x126340: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12633c) {
            ctx->pc = 0x126320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126320;
        }
    }
    ctx->pc = 0x126344u;
}
