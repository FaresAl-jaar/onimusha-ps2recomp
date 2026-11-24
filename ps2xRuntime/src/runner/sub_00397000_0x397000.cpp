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

// Function: sub_00397000
// Address: 0x397000 - 0x397060
void sub_00397000_0x397000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397000_0x397000");
#endif

    switch (ctx->pc) {
        case 0x397028u: goto label_397028;
        case 0x39703cu: goto label_39703c;
        case 0x397050u: goto label_397050;
        default: break;
    }

    ctx->pc = 0x397000u;

    // 0x397000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x397004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x397008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x397008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39700c: 0x90822b34  lbu         $v0, 0x2B34($a0)
    ctx->pc = 0x39700cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11060)));
    // 0x397010: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x397010u;
    {
        const bool branch_taken_0x397010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397010u;
        // 0x397014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397010) {
            ctx->pc = 0x397048u;
            goto label_397048;
        }
    }
    ctx->pc = 0x397018u;
    // 0x397018: 0x8e052b20  lw          $a1, 0x2B20($s0)
    ctx->pc = 0x397018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x39701c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39701cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x397020: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x397020u;
    SET_GPR_U32(ctx, 31, 0x397028u);
    ctx->pc = 0x397024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397020u;
    // 0x397024: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x397020u, 0x397028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397028u;
label_397028:
    // 0x397028: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397028u;
    {
        const bool branch_taken_0x397028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397028) {
            ctx->pc = 0x397040u;
            goto label_397040;
        }
    }
    ctx->pc = 0x397030u;
    // 0x397030: 0x86052b24  lh          $a1, 0x2B24($s0)
    ctx->pc = 0x397030u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x397034: 0xc0e54fc  jal         func_3953F0
    ctx->pc = 0x397034u;
    SET_GPR_U32(ctx, 31, 0x39703Cu);
    ctx->pc = 0x397038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397034u;
    // 0x397038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3953F0u, 0x397034u, 0x39703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39703Cu;
label_39703c:
    // 0x39703c: 0x0  nop
    ctx->pc = 0x39703cu;
    // NOP
label_397040:
    // 0x397040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397044: 0xa2022b34  sb          $v0, 0x2B34($s0)
    ctx->pc = 0x397044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11060), (uint8_t)GPR_U32(ctx, 2));
label_397048:
    // 0x397048: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x397048u;
    SET_GPR_U32(ctx, 31, 0x397050u);
    ctx->pc = 0x39704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397048u;
    // 0x39704c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x397048u, 0x397050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397050u;
label_397050:
    // 0x397050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397058: 0x3e00008  jr          $ra
    ctx->pc = 0x397058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397058u;
        // 0x39705c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397060u;
}
