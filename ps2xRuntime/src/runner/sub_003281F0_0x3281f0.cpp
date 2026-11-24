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

// Function: sub_003281F0
// Address: 0x3281f0 - 0x328250
void sub_003281F0_0x3281f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003281F0_0x3281f0");
#endif

    switch (ctx->pc) {
        case 0x328224u: goto label_328224;
        default: break;
    }

    ctx->pc = 0x3281f0u;

    // 0x3281f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3281f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3281f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3281f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3281f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3281f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3281fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3281fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328200: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x328200u;
    {
        const bool branch_taken_0x328200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x328204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328200u;
        // 0x328204: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328200) {
            ctx->pc = 0x328240u;
            goto label_328240;
        }
    }
    ctx->pc = 0x328208u;
    // 0x328208: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x328208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32820c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x32820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x328210: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x328210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x328214: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x328214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x328218: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x328218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x32821c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x32821Cu;
    SET_GPR_U32(ctx, 31, 0x328224u);
    ctx->pc = 0x328220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32821Cu;
    // 0x328220: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x32821Cu, 0x328224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328224u;
label_328224:
    // 0x328224: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x328224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x328228: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x328228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x32822c: 0x248481b0  addiu       $a0, $a0, -0x7E50
    ctx->pc = 0x32822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    // 0x328230: 0x246386f0  addiu       $v1, $v1, -0x7910
    ctx->pc = 0x328230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936304));
    // 0x328234: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x328234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x328238: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x328238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x32823c: 0x0  nop
    ctx->pc = 0x32823cu;
    // NOP
label_328240:
    // 0x328240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328248: 0x3e00008  jr          $ra
    ctx->pc = 0x328248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328248u;
        // 0x32824c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328250u;
}
