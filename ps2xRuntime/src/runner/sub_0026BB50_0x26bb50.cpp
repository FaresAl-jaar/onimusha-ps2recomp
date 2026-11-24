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

// Function: sub_0026BB50
// Address: 0x26bb50 - 0x26bc30
void sub_0026BB50_0x26bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BB50_0x26bb50");
#endif

    switch (ctx->pc) {
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb70u: goto label_26bb70;
        case 0x26bb88u: goto label_26bb88;
        default: break;
    }

    ctx->pc = 0x26bb50u;

    // 0x26bb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bb54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bb58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bb5c: 0xa08500aa  sb          $a1, 0xAA($a0)
    ctx->pc = 0x26bb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 170), (uint8_t)GPR_U32(ctx, 5));
    // 0x26bb60: 0xc09b000  jal         func_26C000
    ctx->pc = 0x26BB60u;
    SET_GPR_U32(ctx, 31, 0x26BB68u);
    ctx->pc = 0x26BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB60u;
    // 0x26bb64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C000u, 0x26BB60u, 0x26BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB68u;
label_26bb68:
    // 0x26bb68: 0xc09b014  jal         func_26C050
    ctx->pc = 0x26BB68u;
    SET_GPR_U32(ctx, 31, 0x26BB70u);
    ctx->pc = 0x26BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB68u;
    // 0x26bb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C050u, 0x26BB68u, 0x26BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB70u;
label_26bb70:
    // 0x26bb70: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26bb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb78: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x26bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x26bb7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26bb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb80: 0xc05e544  jal         func_179510
    ctx->pc = 0x26BB80u;
    SET_GPR_U32(ctx, 31, 0x26BB88u);
    ctx->pc = 0x26BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB80u;
    // 0x26bb84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179510u, 0x26BB80u, 0x26BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB88u;
label_26bb88:
    // 0x26bb88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bb8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bb90: 0x9024fc8d  lbu         $a0, -0x373($at)
    ctx->pc = 0x26bb90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x26bb94: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BB94u;
    {
        const bool branch_taken_0x26bb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26bb94) {
            ctx->pc = 0x26BBB0u;
            goto label_26bbb0;
        }
    }
    ctx->pc = 0x26BB9Cu;
    // 0x26bb9c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26bba0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x26bba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x26bba4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x26bba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x26bba8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26BBA8u;
    {
        const bool branch_taken_0x26bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBA8u;
        // 0x26bbac: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bba8) {
            ctx->pc = 0x26BBE0u;
            goto label_26bbe0;
        }
    }
    ctx->pc = 0x26BBB0u;
label_26bbb0:
    // 0x26bbb0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26bbb4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x26bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x26bbb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bbbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26bbc0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x26bbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26bbc4: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x26bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
    // 0x26bbc8: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x26bbc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x26bbcc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BBCCu;
    {
        const bool branch_taken_0x26bbcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBCCu;
        // 0x26bbd0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbcc) {
            ctx->pc = 0x26BBE0u;
            goto label_26bbe0;
        }
    }
    ctx->pc = 0x26BBD4u;
    // 0x26bbd4: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x26bbd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966413)));
    // 0x26bbd8: 0xa2030098  sb          $v1, 0x98($s0)
    ctx->pc = 0x26bbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x26bbdc: 0x0  nop
    ctx->pc = 0x26bbdcu;
    // NOP
label_26bbe0:
    // 0x26bbe0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26bbe4: 0x9024fc8e  lbu         $a0, -0x372($at)
    ctx->pc = 0x26bbe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x26bbe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bbec: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26BBECu;
    {
        const bool branch_taken_0x26bbec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26bbec) {
            ctx->pc = 0x26BC10u;
            goto label_26bc10;
        }
    }
    ctx->pc = 0x26BBF4u;
    // 0x26bbf4: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26bbf8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x26bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x26bbfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26bc00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26bc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26bc04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26BC04u;
    {
        const bool branch_taken_0x26bc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC04u;
        // 0x26bc08: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc04) {
            ctx->pc = 0x26BC20u;
            goto label_26bc20;
        }
    }
    ctx->pc = 0x26BC0Cu;
    // 0x26bc0c: 0x0  nop
    ctx->pc = 0x26bc0cu;
    // NOP
label_26bc10:
    // 0x26bc10: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26bc14: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26bc18: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26bc1c: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_26bc20:
    // 0x26bc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bc28: 0x3e00008  jr          $ra
    ctx->pc = 0x26BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC28u;
        // 0x26bc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BC30u;
}
