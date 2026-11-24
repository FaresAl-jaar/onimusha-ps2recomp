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

// Function: sub_002F4440
// Address: 0x2f4440 - 0x2f44a8
void sub_002F4440_0x2f4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4440_0x2f4440");
#endif

    switch (ctx->pc) {
        case 0x2f4480u: goto label_2f4480;
        default: break;
    }

    ctx->pc = 0x2f4440u;

    // 0x2f4440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4444: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2f4444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2f4448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f444c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f4450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f4450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f4454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f445c: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x2f445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
    // 0x2f4460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f4460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4464: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f4464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4468: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2f4468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f446c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2f446cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2f4470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f4470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4474: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2f4474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f4478: 0xc049522  jal         func_125488
    ctx->pc = 0x2F4478u;
    SET_GPR_U32(ctx, 31, 0x2F4480u);
    ctx->pc = 0x2F447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4478u;
    // 0x2f447c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2F4478u, 0x2F4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4480u;
label_2f4480:
    // 0x2f4480: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2f4480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f4484: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2f4484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2f4488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f448c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2f448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2f4490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4498: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2f4498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2f449c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f449cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f44a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F44A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44A0u;
        // 0x2f44a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F44A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F44A8u;
}
