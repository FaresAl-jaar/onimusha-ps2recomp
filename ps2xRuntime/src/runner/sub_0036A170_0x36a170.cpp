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

// Function: sub_0036A170
// Address: 0x36a170 - 0x36a218
void sub_0036A170_0x36a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A170_0x36a170");
#endif

    switch (ctx->pc) {
        case 0x36a1a0u: goto label_36a1a0;
        case 0x36a1acu: goto label_36a1ac;
        case 0x36a1c4u: goto label_36a1c4;
        case 0x36a1d8u: goto label_36a1d8;
        case 0x36a1e4u: goto label_36a1e4;
        default: break;
    }

    ctx->pc = 0x36a170u;

    // 0x36a170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36a174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36a174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36a178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36a17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36a180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a188: 0x90832b28  lbu         $v1, 0x2B28($a0)
    ctx->pc = 0x36a188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11048)));
    // 0x36a18c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x36a18cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36a190: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x36A190u;
    {
        const bool branch_taken_0x36a190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A190u;
        // 0x36a194: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a190) {
            ctx->pc = 0x36A200u;
            goto label_36a200;
        }
    }
    ctx->pc = 0x36A198u;
    // 0x36a198: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x36a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a19c: 0x0  nop
    ctx->pc = 0x36a19cu;
    // NOP
label_36a1a0:
    // 0x36a1a0: 0x8e052b3c  lw          $a1, 0x2B3C($s0)
    ctx->pc = 0x36a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x36a1a4: 0xc0da75c  jal         func_369D70
    ctx->pc = 0x36A1A4u;
    SET_GPR_U32(ctx, 31, 0x36A1ACu);
    ctx->pc = 0x36A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1A4u;
    // 0x36a1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369D70u, 0x36A1A4u, 0x36A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1ACu;
label_36a1ac:
    // 0x36a1ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36A1ACu;
    {
        const bool branch_taken_0x36a1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a1ac) {
            ctx->pc = 0x36A1E8u;
            goto label_36a1e8;
        }
    }
    ctx->pc = 0x36A1B4u;
    // 0x36a1b4: 0x8e052b3c  lw          $a1, 0x2B3C($s0)
    ctx->pc = 0x36a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x36a1b8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x36a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x36a1bc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x36A1BCu;
    SET_GPR_U32(ctx, 31, 0x36A1C4u);
    ctx->pc = 0x36A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1BCu;
    // 0x36a1c0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x36A1BCu, 0x36A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1C4u;
label_36a1c4:
    // 0x36a1c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A1C4u;
    {
        const bool branch_taken_0x36a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a1c4) {
            ctx->pc = 0x36A1D8u;
            goto label_36a1d8;
        }
    }
    ctx->pc = 0x36A1CCu;
    // 0x36a1cc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x36a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x36a1d0: 0xc0da7f0  jal         func_369FC0
    ctx->pc = 0x36A1D0u;
    SET_GPR_U32(ctx, 31, 0x36A1D8u);
    ctx->pc = 0x36A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1D0u;
    // 0x36a1d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369FC0u, 0x36A1D0u, 0x36A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1D8u;
label_36a1d8:
    // 0x36a1d8: 0x8e052b3c  lw          $a1, 0x2B3C($s0)
    ctx->pc = 0x36a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x36a1dc: 0xc0da7f0  jal         func_369FC0
    ctx->pc = 0x36A1DCu;
    SET_GPR_U32(ctx, 31, 0x36A1E4u);
    ctx->pc = 0x36A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1DCu;
    // 0x36a1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369FC0u, 0x36A1DCu, 0x36A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1E4u;
label_36a1e4:
    // 0x36a1e4: 0x0  nop
    ctx->pc = 0x36a1e4u;
    // NOP
label_36a1e8:
    // 0x36a1e8: 0x92432b28  lbu         $v1, 0x2B28($s2)
    ctx->pc = 0x36a1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11048)));
    // 0x36a1ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36a1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36a1f0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x36a1f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36a1f4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x36A1F4u;
    {
        const bool branch_taken_0x36a1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1F4u;
        // 0x36a1f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a1f4) {
            ctx->pc = 0x36A1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a1a0;
        }
    }
    ctx->pc = 0x36A1FCu;
    // 0x36a1fc: 0x0  nop
    ctx->pc = 0x36a1fcu;
    // NOP
label_36a200:
    // 0x36a200: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a210: 0x3e00008  jr          $ra
    ctx->pc = 0x36A210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A210u;
        // 0x36a214: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A218u;
}
