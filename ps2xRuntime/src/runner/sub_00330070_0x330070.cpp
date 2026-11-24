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

// Function: sub_00330070
// Address: 0x330070 - 0x3300f0
void sub_00330070_0x330070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330070_0x330070");
#endif

    switch (ctx->pc) {
        case 0x330088u: goto label_330088;
        case 0x330090u: goto label_330090;
        case 0x3300c0u: goto label_3300c0;
        case 0x3300d0u: goto label_3300d0;
        case 0x3300e0u: goto label_3300e0;
        default: break;
    }

    ctx->pc = 0x330070u;

    // 0x330070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x330078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33007c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33007cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330080: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x330080u;
    SET_GPR_U32(ctx, 31, 0x330088u);
    ctx->pc = 0x330084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330080u;
    // 0x330084: 0x26041c88  addiu       $a0, $s0, 0x1C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x330080u, 0x330088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330088u;
label_330088:
    // 0x330088: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x330088u;
    SET_GPR_U32(ctx, 31, 0x330090u);
    ctx->pc = 0x33008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330088u;
    // 0x33008c: 0x26041c98  addiu       $a0, $s0, 0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x330088u, 0x330090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330090u;
label_330090:
    // 0x330090: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x330090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x330094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330098: 0x9023140c  lbu         $v1, 0x140C($at)
    ctx->pc = 0x330098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92140Cu));
    // 0x33009c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33009Cu;
    {
        const bool branch_taken_0x33009c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33009c) {
            ctx->pc = 0x3300C8u;
            goto label_3300c8;
        }
    }
    ctx->pc = 0x3300A4u;
    // 0x3300a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3300A4u;
    {
        const bool branch_taken_0x3300a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300a4) {
            ctx->pc = 0x3300B8u;
            goto label_3300b8;
        }
    }
    ctx->pc = 0x3300ACu;
    // 0x3300ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3300ACu;
    {
        const bool branch_taken_0x3300ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300ac) {
            ctx->pc = 0x3300D0u;
            goto label_3300d0;
        }
    }
    ctx->pc = 0x3300B4u;
    // 0x3300b4: 0x0  nop
    ctx->pc = 0x3300b4u;
    // NOP
label_3300b8:
    // 0x3300b8: 0xc0cc204  jal         func_330810
    ctx->pc = 0x3300B8u;
    SET_GPR_U32(ctx, 31, 0x3300C0u);
    ctx->pc = 0x3300BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300B8u;
    // 0x3300bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330810u, 0x3300B8u, 0x3300C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300C0u;
label_3300c0:
    // 0x3300c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3300C0u;
    {
        const bool branch_taken_0x3300c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300c0) {
            ctx->pc = 0x3300D0u;
            goto label_3300d0;
        }
    }
    ctx->pc = 0x3300C8u;
label_3300c8:
    // 0x3300c8: 0xc0cc7f4  jal         func_331FD0
    ctx->pc = 0x3300C8u;
    SET_GPR_U32(ctx, 31, 0x3300D0u);
    ctx->pc = 0x3300CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300C8u;
    // 0x3300cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331FD0u, 0x3300C8u, 0x3300D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300D0u;
label_3300d0:
    // 0x3300d0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3300d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3300d4: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x3300d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x3300d8: 0xc0cec34  jal         func_33B0D0
    ctx->pc = 0x3300D8u;
    SET_GPR_U32(ctx, 31, 0x3300E0u);
    ctx->pc = 0x3300DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300D8u;
    // 0x3300dc: 0x3405fff5  ori         $a1, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B0D0u, 0x3300D8u, 0x3300E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300E0u;
label_3300e0:
    // 0x3300e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3300e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3300e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3300e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3300e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3300E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3300ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300E8u;
        // 0x3300ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3300E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3300F0u;
}
