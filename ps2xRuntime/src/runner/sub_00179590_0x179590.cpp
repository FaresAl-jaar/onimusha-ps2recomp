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

// Function: sub_00179590
// Address: 0x179590 - 0x1795e8
void sub_00179590_0x179590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179590_0x179590");
#endif

    switch (ctx->pc) {
        case 0x1795b0u: goto label_1795b0;
        case 0x1795c0u: goto label_1795c0;
        default: break;
    }

    ctx->pc = 0x179590u;

    // 0x179590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17959c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1795a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1795a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1795a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1795a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1795a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1795acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1795b0:
    // 0x1795b0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1795b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1795b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1795b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795b8: 0xc05e554  jal         func_179550
    ctx->pc = 0x1795B8u;
    SET_GPR_U32(ctx, 31, 0x1795C0u);
    ctx->pc = 0x1795BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1795B8u;
    // 0x1795bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179550u, 0x1795B8u, 0x1795C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795C0u;
label_1795c0:
    // 0x1795c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1795c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1795c4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1795c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1795c8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1795C8u;
    {
        const bool branch_taken_0x1795c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1795c8) {
            ctx->pc = 0x1795B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1795b0;
        }
    }
    ctx->pc = 0x1795D0u;
    // 0x1795d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1795d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1795d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1795d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1795d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1795d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1795dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1795dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1795e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1795E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795E0u;
        // 0x1795e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1795E8u;
}
