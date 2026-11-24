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

// Function: sub_002984C0
// Address: 0x2984c0 - 0x298524
void sub_002984C0_0x2984c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002984C0_0x2984c0");
#endif

    switch (ctx->pc) {
        case 0x2984dcu: goto label_2984dc;
        case 0x2984e8u: goto label_2984e8;
        case 0x2984fcu: goto label_2984fc;
        default: break;
    }

    ctx->pc = 0x2984c0u;

    // 0x2984c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2984c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2984c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2984c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2984c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2984c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2984cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2984ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2984d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2984d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984d4: 0xc09d710  jal         func_275C40
    ctx->pc = 0x2984D4u;
    SET_GPR_U32(ctx, 31, 0x2984DCu);
    ctx->pc = 0x2984D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984D4u;
    // 0x2984d8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275C40u, 0x2984D4u, 0x2984DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984DCu;
label_2984dc:
    // 0x2984dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2984dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2984e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2984e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984e4: 0x0  nop
    ctx->pc = 0x2984e4u;
    // NOP
label_2984e8:
    // 0x2984e8: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x2984e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x2984ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2984ECu;
    {
        const bool branch_taken_0x2984ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2984ec) {
            ctx->pc = 0x298500u;
            goto label_298500;
        }
    }
    ctx->pc = 0x2984F4u;
    // 0x2984f4: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x2984F4u;
    SET_GPR_U32(ctx, 31, 0x2984FCu);
    ctx->pc = 0x29C6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6C0u, 0x2984F4u, 0x2984FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984FCu;
label_2984fc:
    // 0x2984fc: 0x0  nop
    ctx->pc = 0x2984fcu;
    // NOP
label_298500:
    // 0x298500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x298504: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x298504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x298508: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x298508u;
    {
        const bool branch_taken_0x298508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298508u;
        // 0x29850c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298508) {
            ctx->pc = 0x2984E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2984e8;
        }
    }
    ctx->pc = 0x298510u;
    // 0x298510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29851c: 0x3e00008  jr          $ra
    ctx->pc = 0x29851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29851Cu;
        // 0x298520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298524u;
}
