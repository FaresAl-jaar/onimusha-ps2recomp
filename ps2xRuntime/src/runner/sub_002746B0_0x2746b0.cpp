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

// Function: sub_002746B0
// Address: 0x2746b0 - 0x2746e8
void sub_002746B0_0x2746b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002746B0_0x2746b0");
#endif

    switch (ctx->pc) {
        case 0x2746b0u: goto label_2746b0;
        case 0x2746b4u: goto label_2746b4;
        case 0x2746b8u: goto label_2746b8;
        case 0x2746bcu: goto label_2746bc;
        case 0x2746c0u: goto label_2746c0;
        case 0x2746c4u: goto label_2746c4;
        case 0x2746c8u: goto label_2746c8;
        case 0x2746ccu: goto label_2746cc;
        case 0x2746d0u: goto label_2746d0;
        case 0x2746d4u: goto label_2746d4;
        case 0x2746d8u: goto label_2746d8;
        case 0x2746dcu: goto label_2746dc;
        case 0x2746e0u: goto label_2746e0;
        case 0x2746e4u: goto label_2746e4;
        default: break;
    }

    ctx->pc = 0x2746b0u;

label_2746b0:
    // 0x2746b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2746b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2746b4:
    // 0x2746b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2746b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2746b8:
    // 0x2746b8: 0xc09d19c  jal         func_274670
label_2746bc:
    if (ctx->pc == 0x2746BCu) {
        ctx->pc = 0x2746BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746B8u;
        // 0x2746bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746C0u;
        goto label_2746c0;
    }
    ctx->pc = 0x2746B8u;
    SET_GPR_U32(ctx, 31, 0x2746C0u);
    ctx->pc = 0x2746BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2746B8u;
    // 0x2746bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274670u, 0x2746B8u, 0x2746C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2746C0u;
label_2746c0:
    // 0x2746c0: 0x8c5904d4  lw          $t9, 0x4D4($v0)
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
label_2746c4:
    // 0x2746c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2746c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2746c8:
    // 0x2746c8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2746c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2746cc:
    // 0x2746cc: 0x320f809  jalr        $t9
label_2746d0:
    if (ctx->pc == 0x2746D0u) {
        ctx->pc = 0x2746D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746CCu;
        // 0x2746d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746D4u;
        goto label_2746d4;
    }
    ctx->pc = 0x2746CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2746D4u);
        ctx->pc = 0x2746D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746CCu;
        // 0x2746d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2746CCu, 0x2746D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2746D4u;
label_2746d4:
    // 0x2746d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2746d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2746d8:
    // 0x2746d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2746d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2746dc:
    // 0x2746dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2746dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2746e0:
    // 0x2746e0: 0x3e00008  jr          $ra
label_2746e4:
    if (ctx->pc == 0x2746E4u) {
        ctx->pc = 0x2746E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746E0u;
        // 0x2746e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746E8u;
        goto label_fallthrough_0x2746e0;
    }
    ctx->pc = 0x2746E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2746E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746E0u;
        // 0x2746e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2746E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2746e0:
    ctx->pc = 0x2746E8u;
}
