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

// Function: sub_003478B0
// Address: 0x3478b0 - 0x347914
void sub_003478B0_0x3478b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003478B0_0x3478b0");
#endif

    switch (ctx->pc) {
        case 0x3478e0u: goto label_3478e0;
        case 0x347908u: goto label_347908;
        default: break;
    }

    ctx->pc = 0x3478b0u;

    // 0x3478b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3478b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3478b4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3478b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3478b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3478b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3478bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3478bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3478c0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3478C0u;
    {
        const bool branch_taken_0x3478c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3478C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478C0u;
        // 0x3478c4: 0x52a02  srl         $a1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478c0) {
            ctx->pc = 0x3478E8u;
            goto label_3478e8;
        }
    }
    ctx->pc = 0x3478C8u;
    // 0x3478c8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x3478C8u;
    {
        const bool branch_taken_0x3478c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3478CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478C8u;
        // 0x3478cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478c8) {
            ctx->pc = 0x347908u;
            goto label_347908;
        }
    }
    ctx->pc = 0x3478D0u;
    // 0x3478d0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3478d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3478d4: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x3478d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x3478d8: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x3478D8u;
    SET_GPR_U32(ctx, 31, 0x3478E0u);
    ctx->pc = 0x3478DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3478D8u;
    // 0x3478dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x3478D8u, 0x3478E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3478E0u;
label_3478e0:
    // 0x3478e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3478E0u;
    {
        const bool branch_taken_0x3478e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3478e0) {
            ctx->pc = 0x347908u;
            goto label_347908;
        }
    }
    ctx->pc = 0x3478E8u;
label_3478e8:
    // 0x3478e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3478e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3478ec: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3478ECu;
    {
        const bool branch_taken_0x3478ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3478ec) {
            ctx->pc = 0x347908u;
            goto label_347908;
        }
    }
    ctx->pc = 0x3478F4u;
    // 0x3478f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3478F4u;
    {
        const bool branch_taken_0x3478f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3478F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478F4u;
        // 0x3478f8: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478f4) {
            ctx->pc = 0x347908u;
            goto label_347908;
        }
    }
    ctx->pc = 0x3478FCu;
    // 0x3478fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3478fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347900: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x347900u;
    SET_GPR_U32(ctx, 31, 0x347908u);
    ctx->pc = 0x347904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347900u;
    // 0x347904: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x347900u, 0x347908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347908u;
label_347908:
    // 0x347908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34790c: 0x3e00008  jr          $ra
    ctx->pc = 0x34790Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34790Cu;
        // 0x347910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34790Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347914u;
}
