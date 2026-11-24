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

// Function: sub_0039F120
// Address: 0x39f120 - 0x39f188
void sub_0039F120_0x39f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F120_0x39f120");
#endif

    switch (ctx->pc) {
        case 0x39f154u: goto label_39f154;
        default: break;
    }

    ctx->pc = 0x39f120u;

    // 0x39f120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39f124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39f128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39f12c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f130: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x39F130u;
    {
        const bool branch_taken_0x39f130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F130u;
        // 0x39f134: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f130) {
            ctx->pc = 0x39F178u;
            goto label_39f178;
        }
    }
    ctx->pc = 0x39F138u;
    // 0x39f138: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39f138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39f13c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x39f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x39f140: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x39f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x39f144: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39f144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39f148: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x39f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x39f14c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x39F14Cu;
    SET_GPR_U32(ctx, 31, 0x39F154u);
    ctx->pc = 0x39F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F14Cu;
    // 0x39f150: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x39F14Cu, 0x39F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F154u;
label_39f154:
    // 0x39f154: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39f154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x39f158: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x39f158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x39f15c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x39f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x39f160: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x39f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x39f164: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39f164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39f168: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39f168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x39f16c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x39f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x39f170: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x39f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x39f174: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x39f174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_39f178:
    // 0x39f178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f180: 0x3e00008  jr          $ra
    ctx->pc = 0x39F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F180u;
        // 0x39f184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F188u;
}
