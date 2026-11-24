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

// Function: sub_00327130
// Address: 0x327130 - 0x327198
void sub_00327130_0x327130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327130_0x327130");
#endif

    switch (ctx->pc) {
        case 0x327164u: goto label_327164;
        default: break;
    }

    ctx->pc = 0x327130u;

    // 0x327130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32713c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32713cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327140: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x327140u;
    {
        const bool branch_taken_0x327140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x327144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327140u;
        // 0x327144: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327140) {
            ctx->pc = 0x327188u;
            goto label_327188;
        }
    }
    ctx->pc = 0x327148u;
    // 0x327148: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32714c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x32714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x327150: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x327150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x327154: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x327154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x327158: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x327158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x32715c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x32715Cu;
    SET_GPR_U32(ctx, 31, 0x327164u);
    ctx->pc = 0x327160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32715Cu;
    // 0x327160: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x32715Cu, 0x327164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327164u;
label_327164:
    // 0x327164: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x327164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x327168: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x327168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x32716c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x32716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x327170: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x327170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x327174: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x327174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x327178: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x327178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x32717c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x32717cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x327180: 0x24638690  addiu       $v1, $v1, -0x7970
    ctx->pc = 0x327180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936208));
    // 0x327184: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x327184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_327188:
    // 0x327188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32718c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32718cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327190: 0x3e00008  jr          $ra
    ctx->pc = 0x327190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327190u;
        // 0x327194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327198u;
}
