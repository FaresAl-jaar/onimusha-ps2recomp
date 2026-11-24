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

// Function: sub_00334520
// Address: 0x334520 - 0x334580
void sub_00334520_0x334520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334520_0x334520");
#endif

    switch (ctx->pc) {
        case 0x334554u: goto label_334554;
        default: break;
    }

    ctx->pc = 0x334520u;

    // 0x334520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x334524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x334528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33452c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33452cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334530: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x334530u;
    {
        const bool branch_taken_0x334530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334530u;
        // 0x334534: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334530) {
            ctx->pc = 0x334570u;
            goto label_334570;
        }
    }
    ctx->pc = 0x334538u;
    // 0x334538: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x334538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33453c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x334540: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x334540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x334544: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x334544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x334548: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x334548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x33454c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33454Cu;
    SET_GPR_U32(ctx, 31, 0x334554u);
    ctx->pc = 0x334550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33454Cu;
    // 0x334550: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33454Cu, 0x334554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334554u;
label_334554:
    // 0x334554: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x334554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x334558: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x334558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33455c: 0x248481b0  addiu       $a0, $a0, -0x7E50
    ctx->pc = 0x33455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    // 0x334560: 0x24638810  addiu       $v1, $v1, -0x77F0
    ctx->pc = 0x334560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936592));
    // 0x334564: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x334564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x334568: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x334568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33456c: 0x0  nop
    ctx->pc = 0x33456cu;
    // NOP
label_334570:
    // 0x334570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x334570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334578: 0x3e00008  jr          $ra
    ctx->pc = 0x334578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334578u;
        // 0x33457c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334580u;
}
