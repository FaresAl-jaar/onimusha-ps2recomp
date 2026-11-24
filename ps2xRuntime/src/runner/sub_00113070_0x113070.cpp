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

// Function: sub_00113070
// Address: 0x113070 - 0x1130fc
void sub_00113070_0x113070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113070_0x113070");
#endif

    switch (ctx->pc) {
        case 0x1130acu: goto label_1130ac;
        case 0x1130c4u: goto label_1130c4;
        case 0x1130d8u: goto label_1130d8;
        default: break;
    }

    ctx->pc = 0x113070u;

    // 0x113070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x113074: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x113074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x113078: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x113078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11307c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11307cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x113080: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x113080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113084: 0x24532a8c  addiu       $s3, $v0, 0x2A8C
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10892));
    // 0x113088: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x113088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11308c: 0x247103a8  addiu       $s1, $v1, 0x3A8
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 936));
    // 0x113090: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x113090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x113094: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x113094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11309c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1130a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130a4: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x1130A4u;
    SET_GPR_U32(ctx, 31, 0x1130ACu);
    ctx->pc = 0x1130A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130A4u;
    // 0x1130a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x1130A4u, 0x1130ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130ACu;
label_1130ac:
    // 0x1130ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1130ACu;
    {
        const bool branch_taken_0x1130ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130ACu;
        // 0x1130b0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130ac) {
            ctx->pc = 0x1130DCu;
            goto label_1130dc;
        }
    }
    ctx->pc = 0x1130B4u;
    // 0x1130b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1130b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130b8: 0x8e052b50  lw          $a1, 0x2B50($s0)
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x1130bc: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x1130BCu;
    SET_GPR_U32(ctx, 31, 0x1130C4u);
    ctx->pc = 0x1130C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130BCu;
    // 0x1130c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x1130BCu, 0x1130C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130C4u;
label_1130c4:
    // 0x1130c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1130C4u;
    {
        const bool branch_taken_0x1130c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130C4u;
        // 0x1130c8: 0x8e052b50  lw          $a1, 0x2B50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130c4) {
            ctx->pc = 0x1130DCu;
            goto label_1130dc;
        }
    }
    ctx->pc = 0x1130CCu;
    // 0x1130cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1130ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130d0: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x1130D0u;
    SET_GPR_U32(ctx, 31, 0x1130D8u);
    ctx->pc = 0x1130D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130D0u;
    // 0x1130d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x1130D0u, 0x1130D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130D8u;
label_1130d8:
    // 0x1130d8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1130d8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1130dc:
    // 0x1130dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1130dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1130e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1130e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1130e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1130e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1130e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1130ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1130ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1130f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1130f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1130f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1130F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130F4u;
        // 0x1130f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1130FCu;
}
