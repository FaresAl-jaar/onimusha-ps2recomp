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

// Function: sub_003806A0
// Address: 0x3806a0 - 0x380730
void sub_003806A0_0x3806a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003806A0_0x3806a0");
#endif

    switch (ctx->pc) {
        case 0x3806c8u: goto label_3806c8;
        default: break;
    }

    ctx->pc = 0x3806a0u;

    // 0x3806a0: 0x90820208  lbu         $v0, 0x208($a0)
    ctx->pc = 0x3806a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x3806a4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x3806a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3806a8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3806a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3806ac: 0x8c4901c4  lw          $t1, 0x1C4($v0)
    ctx->pc = 0x3806acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x3806b0: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3806B0u;
    {
        const bool branch_taken_0x3806b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3806B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3806B0u;
        // 0x3806b4: 0x30a800ff  andi        $t0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3806b0) {
            ctx->pc = 0x380720u;
            goto label_380720;
        }
    }
    ctx->pc = 0x3806B8u;
    // 0x3806b8: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x3806b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3806bc: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x3806bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x3806c0: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x3806c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x3806c4: 0x0  nop
    ctx->pc = 0x3806c4u;
    // NOP
label_3806c8:
    // 0x3806c8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3806c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3806cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3806ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3806d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3806D0u;
    {
        const bool branch_taken_0x3806d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3806d0) {
            ctx->pc = 0x380710u;
            goto label_380710;
        }
    }
    ctx->pc = 0x3806D8u;
    // 0x3806d8: 0x91240002  lbu         $a0, 0x2($t1)
    ctx->pc = 0x3806d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3806dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3806dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3806e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3806e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3806e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3806e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3806e8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3806e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3806ec: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x3806ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3806f0: 0x15020007  bne         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3806F0u;
    {
        const bool branch_taken_0x3806f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3806f0) {
            ctx->pc = 0x380710u;
            goto label_380710;
        }
    }
    ctx->pc = 0x3806F8u;
    // 0x3806f8: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x3806f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3806fc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3806FCu;
    {
        const bool branch_taken_0x3806fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x380700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3806FCu;
        // 0x380700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3806fc) {
            ctx->pc = 0x380710u;
            goto label_380710;
        }
    }
    ctx->pc = 0x380704u;
    // 0x380704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380704u;
    {
        const bool branch_taken_0x380704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380704) {
            ctx->pc = 0x380728u;
            goto label_380728;
        }
    }
    ctx->pc = 0x38070Cu;
    // 0x38070c: 0x0  nop
    ctx->pc = 0x38070cu;
    // NOP
label_380710:
    // 0x380710: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x380710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x380714: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x380714u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x380718: 0x1520ffeb  bnez        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x380718u;
    {
        const bool branch_taken_0x380718 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x380718) {
            ctx->pc = 0x3806C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3806c8;
        }
    }
    ctx->pc = 0x380720u;
label_380720:
    // 0x380720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x380720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380724: 0x0  nop
    ctx->pc = 0x380724u;
    // NOP
label_380728:
    // 0x380728: 0x3e00008  jr          $ra
    ctx->pc = 0x380728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380730u;
}
