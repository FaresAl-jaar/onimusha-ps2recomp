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

// Function: sub_00399650
// Address: 0x399650 - 0x399718
void sub_00399650_0x399650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399650_0x399650");
#endif

    switch (ctx->pc) {
        case 0x399678u: goto label_399678;
        case 0x3996a8u: goto label_3996a8;
        case 0x3996f0u: goto label_3996f0;
        default: break;
    }

    ctx->pc = 0x399650u;

    // 0x399650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x399650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x399654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x399654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x399658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x399658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39965c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x399660: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x399660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x399668: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x399668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39966c: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x39966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399670: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x399670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399674: 0x0  nop
    ctx->pc = 0x399674u;
    // NOP
label_399678:
    // 0x399678: 0x80831dac  lb          $v1, 0x1DAC($a0)
    ctx->pc = 0x399678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7596)));
    // 0x39967c: 0x14720010  bne         $v1, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x39967Cu;
    {
        const bool branch_taken_0x39967c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x39967c) {
            ctx->pc = 0x3996C0u;
            goto label_3996c0;
        }
    }
    ctx->pc = 0x399684u;
    // 0x399684: 0x1211001e  beq         $s0, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x399684u;
    {
        const bool branch_taken_0x399684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x399684) {
            ctx->pc = 0x399700u;
            goto label_399700;
        }
    }
    ctx->pc = 0x39968Cu;
    // 0x39968c: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x39968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399690: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x399690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x399694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x399698: 0x8c641da8  lw          $a0, 0x1DA8($v1)
    ctx->pc = 0x399698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7592)));
    // 0x39969c: 0x90451db0  lbu         $a1, 0x1DB0($v0)
    ctx->pc = 0x39969cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7600)));
    // 0x3996a0: 0xc0d6afc  jal         func_35ABF0
    ctx->pc = 0x3996A0u;
    SET_GPR_U32(ctx, 31, 0x3996A8u);
    ctx->pc = 0x3996A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996A0u;
    // 0x3996a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ABF0u, 0x3996A0u, 0x3996A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996A8u;
label_3996a8:
    // 0x3996a8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x3996a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3996ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3996acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3996b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3996b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3996b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3996B4u;
    {
        const bool branch_taken_0x3996b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996B4u;
        // 0x3996b8: 0xa0431dac  sb          $v1, 0x1DAC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 7596), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996b4) {
            ctx->pc = 0x3996D0u;
            goto label_3996d0;
        }
    }
    ctx->pc = 0x3996BCu;
    // 0x3996bc: 0x0  nop
    ctx->pc = 0x3996bcu;
    // NOP
label_3996c0:
    // 0x3996c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3996c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3996c4: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x3996c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3996c8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3996C8u;
    {
        const bool branch_taken_0x3996c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996C8u;
        // 0x3996cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996c8) {
            ctx->pc = 0x399678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399678;
        }
    }
    ctx->pc = 0x3996D0u;
label_3996d0:
    // 0x3996d0: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x3996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3996d4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3996d8: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x3996d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3996dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3996dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3996e0: 0x8c641da8  lw          $a0, 0x1DA8($v1)
    ctx->pc = 0x3996e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7592)));
    // 0x3996e4: 0x90461db0  lbu         $a2, 0x1DB0($v0)
    ctx->pc = 0x3996e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7600)));
    // 0x3996e8: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3996E8u;
    SET_GPR_U32(ctx, 31, 0x3996F0u);
    ctx->pc = 0x3996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996E8u;
    // 0x3996ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3996E8u, 0x3996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996F0u;
label_3996f0:
    // 0x3996f0: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x3996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3996f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3996f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3996f8: 0xa0721dac  sb          $s2, 0x1DAC($v1)
    ctx->pc = 0x3996f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7596), (uint8_t)GPR_U32(ctx, 18));
    // 0x3996fc: 0x0  nop
    ctx->pc = 0x3996fcu;
    // NOP
label_399700:
    // 0x399700: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x399700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x399704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39970c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39970cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399710: 0x3e00008  jr          $ra
    ctx->pc = 0x399710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399710u;
        // 0x399714: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399718u;
}
