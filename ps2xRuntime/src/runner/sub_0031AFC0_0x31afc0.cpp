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

// Function: sub_0031AFC0
// Address: 0x31afc0 - 0x31b0d0
void sub_0031AFC0_0x31afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AFC0_0x31afc0");
#endif

    switch (ctx->pc) {
        case 0x31afd8u: goto label_31afd8;
        case 0x31afe0u: goto label_31afe0;
        case 0x31aff0u: goto label_31aff0;
        case 0x31b000u: goto label_31b000;
        case 0x31b008u: goto label_31b008;
        case 0x31b038u: goto label_31b038;
        case 0x31b060u: goto label_31b060;
        case 0x31b070u: goto label_31b070;
        case 0x31b0a8u: goto label_31b0a8;
        case 0x31b0b8u: goto label_31b0b8;
        default: break;
    }

    ctx->pc = 0x31afc0u;

    // 0x31afc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31afc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31afc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31afcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31afccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31afd0: 0xc095040  jal         func_254100
    ctx->pc = 0x31AFD0u;
    SET_GPR_U32(ctx, 31, 0x31AFD8u);
    ctx->pc = 0x31AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFD0u;
    // 0x31afd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x31AFD0u, 0x31AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFD8u;
label_31afd8:
    // 0x31afd8: 0xc095040  jal         func_254100
    ctx->pc = 0x31AFD8u;
    SET_GPR_U32(ctx, 31, 0x31AFE0u);
    ctx->pc = 0x31AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFD8u;
    // 0x31afdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x31AFD8u, 0x31AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFE0u;
label_31afe0:
    // 0x31afe0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31afe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31afe4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31afe8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31AFE8u;
    {
        const bool branch_taken_0x31afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31afe8) {
            ctx->pc = 0x31B018u;
            goto label_31b018;
        }
    }
    ctx->pc = 0x31AFF0u;
label_31aff0:
    // 0x31aff0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31aff4: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31aff8: 0xc04c918  jal         func_132460
    ctx->pc = 0x31AFF8u;
    SET_GPR_U32(ctx, 31, 0x31B000u);
    ctx->pc = 0x31AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFF8u;
    // 0x31affc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31AFF8u, 0x31B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B000u;
label_31b000:
    // 0x31b000: 0xc095040  jal         func_254100
    ctx->pc = 0x31B000u;
    SET_GPR_U32(ctx, 31, 0x31B008u);
    ctx->pc = 0x31B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B000u;
    // 0x31b004: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x31B000u, 0x31B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B008u;
label_31b008:
    // 0x31b008: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31b008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31b00c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31b00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31b010: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31B010u;
    {
        const bool branch_taken_0x31b010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b010) {
            ctx->pc = 0x31AFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aff0;
        }
    }
    ctx->pc = 0x31B018u;
label_31b018:
    // 0x31b018: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x31b018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b01c: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x31b01cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b024: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x31b024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b028: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31b028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b02c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31b02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b030: 0xc0c6c34  jal         func_31B0D0
    ctx->pc = 0x31B030u;
    SET_GPR_U32(ctx, 31, 0x31B038u);
    ctx->pc = 0x31B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B030u;
    // 0x31b034: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0D0u, 0x31B030u, 0x31B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B038u;
label_31b038:
    // 0x31b038: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x31b038u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x31b03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b040: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B040u;
    {
        const bool branch_taken_0x31b040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b040) {
            ctx->pc = 0x31B068u;
            goto label_31b068;
        }
    }
    ctx->pc = 0x31B048u;
    // 0x31b048: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B048u;
    {
        const bool branch_taken_0x31b048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b048) {
            ctx->pc = 0x31B058u;
            goto label_31b058;
        }
    }
    ctx->pc = 0x31B050u;
    // 0x31b050: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31B050u;
    {
        const bool branch_taken_0x31b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b050) {
            ctx->pc = 0x31B070u;
            goto label_31b070;
        }
    }
    ctx->pc = 0x31B058u;
label_31b058:
    // 0x31b058: 0xc0c6c50  jal         func_31B140
    ctx->pc = 0x31B058u;
    SET_GPR_U32(ctx, 31, 0x31B060u);
    ctx->pc = 0x31B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B058u;
    // 0x31b05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B140u, 0x31B058u, 0x31B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B060u;
label_31b060:
    // 0x31b060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31B060u;
    {
        const bool branch_taken_0x31b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b060) {
            ctx->pc = 0x31B070u;
            goto label_31b070;
        }
    }
    ctx->pc = 0x31B068u;
label_31b068:
    // 0x31b068: 0xc0c6d74  jal         func_31B5D0
    ctx->pc = 0x31B068u;
    SET_GPR_U32(ctx, 31, 0x31B070u);
    ctx->pc = 0x31B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B068u;
    // 0x31b06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5D0u, 0x31B068u, 0x31B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B070u;
label_31b070:
    // 0x31b070: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x31b070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x31b074: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b078: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31B078u;
    {
        const bool branch_taken_0x31b078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b078) {
            ctx->pc = 0x31B0C0u;
            goto label_31b0c0;
        }
    }
    ctx->pc = 0x31B080u;
    // 0x31b080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b084: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B084u;
    {
        const bool branch_taken_0x31b084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x31b084) {
            ctx->pc = 0x31B0A8u;
            goto label_31b0a8;
        }
    }
    ctx->pc = 0x31B08Cu;
    // 0x31b08c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B08Cu;
    {
        const bool branch_taken_0x31b08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b08c) {
            ctx->pc = 0x31B0A0u;
            goto label_31b0a0;
        }
    }
    ctx->pc = 0x31B094u;
    // 0x31b094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31B094u;
    {
        const bool branch_taken_0x31b094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b094) {
            ctx->pc = 0x31B0A8u;
            goto label_31b0a8;
        }
    }
    ctx->pc = 0x31B09Cu;
    // 0x31b09c: 0x0  nop
    ctx->pc = 0x31b09cu;
    // NOP
label_31b0a0:
    // 0x31b0a0: 0xc0c6d04  jal         func_31B410
    ctx->pc = 0x31B0A0u;
    SET_GPR_U32(ctx, 31, 0x31B0A8u);
    ctx->pc = 0x31B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0A0u;
    // 0x31b0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B410u, 0x31B0A0u, 0x31B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0A8u;
label_31b0a8:
    // 0x31b0a8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b0ac: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31b0b0: 0xc04c918  jal         func_132460
    ctx->pc = 0x31B0B0u;
    SET_GPR_U32(ctx, 31, 0x31B0B8u);
    ctx->pc = 0x31B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0B0u;
    // 0x31b0b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31B0B0u, 0x31B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0B8u;
label_31b0b8:
    // 0x31b0b8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x31B0B8u;
    {
        const bool branch_taken_0x31b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b0b8) {
            ctx->pc = 0x31B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b038;
        }
    }
    ctx->pc = 0x31B0C0u;
label_31b0c0:
    // 0x31b0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31B0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0C8u;
        // 0x31b0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B0D0u;
}
