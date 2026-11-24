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

// Function: sub_00396280
// Address: 0x396280 - 0x3962d0
void sub_00396280_0x396280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396280_0x396280");
#endif

    switch (ctx->pc) {
        case 0x396294u: goto label_396294;
        case 0x3962acu: goto label_3962ac;
        case 0x3962c0u: goto label_3962c0;
        default: break;
    }

    ctx->pc = 0x396280u;

    // 0x396280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39628c: 0xc0e5804  jal         func_396010
    ctx->pc = 0x39628Cu;
    SET_GPR_U32(ctx, 31, 0x396294u);
    ctx->pc = 0x396290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39628Cu;
    // 0x396290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396010u, 0x39628Cu, 0x396294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396294u;
label_396294:
    // 0x396294: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x396294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x396298: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x396298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39629c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39629Cu;
    {
        const bool branch_taken_0x39629c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3962A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39629Cu;
        // 0x3962a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39629c) {
            ctx->pc = 0x3962B8u;
            goto label_3962b8;
        }
    }
    ctx->pc = 0x3962A4u;
    // 0x3962a4: 0xc0e5670  jal         func_3959C0
    ctx->pc = 0x3962A4u;
    SET_GPR_U32(ctx, 31, 0x3962ACu);
    ctx->pc = 0x3962A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962A4u;
    // 0x3962a8: 0x240500e6  addiu       $a1, $zero, 0xE6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3959C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3959C0u, 0x3962A4u, 0x3962ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962ACu;
label_3962ac:
    // 0x3962ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3962ACu;
    {
        const bool branch_taken_0x3962ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3962ac) {
            ctx->pc = 0x3962C0u;
            goto label_3962c0;
        }
    }
    ctx->pc = 0x3962B4u;
    // 0x3962b4: 0x0  nop
    ctx->pc = 0x3962b4u;
    // NOP
label_3962b8:
    // 0x3962b8: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3962B8u;
    SET_GPR_U32(ctx, 31, 0x3962C0u);
    ctx->pc = 0x3962BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962B8u;
    // 0x3962bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3962B8u, 0x3962C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962C0u;
label_3962c0:
    // 0x3962c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3962c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3962c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3962c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3962c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3962C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3962CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3962C8u;
        // 0x3962cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3962C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3962D0u;
}
