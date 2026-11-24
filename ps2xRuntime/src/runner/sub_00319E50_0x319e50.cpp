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

// Function: sub_00319E50
// Address: 0x319e50 - 0x319eb0
void sub_00319E50_0x319e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319E50_0x319e50");
#endif

    switch (ctx->pc) {
        case 0x319e8cu: goto label_319e8c;
        case 0x319ea0u: goto label_319ea0;
        default: break;
    }

    ctx->pc = 0x319e50u;

    // 0x319e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319e54: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x319e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x319e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319e5c: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x319e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x319e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319e64: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x319e64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x319e68: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x319E68u;
    {
        const bool branch_taken_0x319e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x319E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E68u;
        // 0x319e6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e68) {
            ctx->pc = 0x319E98u;
            goto label_319e98;
        }
    }
    ctx->pc = 0x319E70u;
    // 0x319e70: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x319e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x319e74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x319E74u;
    {
        const bool branch_taken_0x319e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E74u;
        // 0x319e78: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e74) {
            ctx->pc = 0x319E98u;
            goto label_319e98;
        }
    }
    ctx->pc = 0x319E7Cu;
    // 0x319e7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x319e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319e80: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x319e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x319e84: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x319E84u;
    SET_GPR_U32(ctx, 31, 0x319E8Cu);
    ctx->pc = 0x319E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E84u;
    // 0x319e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x319E84u, 0x319E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E8Cu;
label_319e8c:
    // 0x319e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319e90: 0xa2022b24  sb          $v0, 0x2B24($s0)
    ctx->pc = 0x319e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x319e94: 0x0  nop
    ctx->pc = 0x319e94u;
    // NOP
label_319e98:
    // 0x319e98: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x319E98u;
    SET_GPR_U32(ctx, 31, 0x319EA0u);
    ctx->pc = 0x319E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E98u;
    // 0x319e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x319E98u, 0x319EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EA0u;
label_319ea0:
    // 0x319ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x319EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EA8u;
        // 0x319eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319EB0u;
}
