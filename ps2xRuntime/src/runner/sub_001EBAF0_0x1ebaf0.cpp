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

// Function: sub_001EBAF0
// Address: 0x1ebaf0 - 0x1ebbc4
void sub_001EBAF0_0x1ebaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBAF0_0x1ebaf0");
#endif

    switch (ctx->pc) {
        case 0x1ebaf0u: goto label_1ebaf0;
        case 0x1ebaf4u: goto label_1ebaf4;
        case 0x1ebaf8u: goto label_1ebaf8;
        case 0x1ebafcu: goto label_1ebafc;
        case 0x1ebb00u: goto label_1ebb00;
        case 0x1ebb04u: goto label_1ebb04;
        case 0x1ebb08u: goto label_1ebb08;
        case 0x1ebb0cu: goto label_1ebb0c;
        case 0x1ebb10u: goto label_1ebb10;
        case 0x1ebb14u: goto label_1ebb14;
        case 0x1ebb18u: goto label_1ebb18;
        case 0x1ebb1cu: goto label_1ebb1c;
        case 0x1ebb20u: goto label_1ebb20;
        case 0x1ebb24u: goto label_1ebb24;
        case 0x1ebb28u: goto label_1ebb28;
        case 0x1ebb2cu: goto label_1ebb2c;
        case 0x1ebb30u: goto label_1ebb30;
        case 0x1ebb34u: goto label_1ebb34;
        case 0x1ebb38u: goto label_1ebb38;
        case 0x1ebb3cu: goto label_1ebb3c;
        case 0x1ebb40u: goto label_1ebb40;
        case 0x1ebb44u: goto label_1ebb44;
        case 0x1ebb48u: goto label_1ebb48;
        case 0x1ebb4cu: goto label_1ebb4c;
        case 0x1ebb50u: goto label_1ebb50;
        case 0x1ebb54u: goto label_1ebb54;
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebb5cu: goto label_1ebb5c;
        case 0x1ebb60u: goto label_1ebb60;
        case 0x1ebb64u: goto label_1ebb64;
        case 0x1ebb68u: goto label_1ebb68;
        case 0x1ebb6cu: goto label_1ebb6c;
        case 0x1ebb70u: goto label_1ebb70;
        case 0x1ebb74u: goto label_1ebb74;
        case 0x1ebb78u: goto label_1ebb78;
        case 0x1ebb7cu: goto label_1ebb7c;
        case 0x1ebb80u: goto label_1ebb80;
        case 0x1ebb84u: goto label_1ebb84;
        case 0x1ebb88u: goto label_1ebb88;
        case 0x1ebb8cu: goto label_1ebb8c;
        case 0x1ebb90u: goto label_1ebb90;
        case 0x1ebb94u: goto label_1ebb94;
        case 0x1ebb98u: goto label_1ebb98;
        case 0x1ebb9cu: goto label_1ebb9c;
        case 0x1ebba0u: goto label_1ebba0;
        case 0x1ebba4u: goto label_1ebba4;
        case 0x1ebba8u: goto label_1ebba8;
        case 0x1ebbacu: goto label_1ebbac;
        case 0x1ebbb0u: goto label_1ebbb0;
        case 0x1ebbb4u: goto label_1ebbb4;
        case 0x1ebbb8u: goto label_1ebbb8;
        case 0x1ebbbcu: goto label_1ebbbc;
        case 0x1ebbc0u: goto label_1ebbc0;
        default: break;
    }

    ctx->pc = 0x1ebaf0u;

label_1ebaf0:
    // 0x1ebaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ebaf4:
    // 0x1ebaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ebaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ebaf8:
    // 0x1ebaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ebafc:
    // 0x1ebafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ebb00:
    // 0x1ebb00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ebb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ebb04:
    // 0x1ebb04: 0xc078684  jal         func_1E1A10
label_1ebb08:
    if (ctx->pc == 0x1EBB08u) {
        ctx->pc = 0x1EBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB04u;
        // 0x1ebb08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB0Cu;
        goto label_1ebb0c;
    }
    ctx->pc = 0x1EBB04u;
    SET_GPR_U32(ctx, 31, 0x1EBB0Cu);
    ctx->pc = 0x1EBB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB04u;
    // 0x1ebb08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1EBB04u, 0x1EBB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB0Cu;
label_1ebb0c:
    // 0x1ebb0c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1ebb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1ebb10:
    // 0x1ebb10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ebb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ebb14:
    // 0x1ebb14: 0xc076bec  jal         func_1DAFB0
label_1ebb18:
    if (ctx->pc == 0x1EBB18u) {
        ctx->pc = 0x1EBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB14u;
        // 0x1ebb18: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB1Cu;
        goto label_1ebb1c;
    }
    ctx->pc = 0x1EBB14u;
    SET_GPR_U32(ctx, 31, 0x1EBB1Cu);
    ctx->pc = 0x1EBB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB14u;
    // 0x1ebb18: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1EBB14u, 0x1EBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB1Cu;
label_1ebb1c:
    // 0x1ebb1c: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x1ebb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1ebb20:
    // 0x1ebb20: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1ebb20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1ebb24:
    // 0x1ebb24: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ebb24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebb28:
    // 0x1ebb28: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1ebb28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ebb2c:
    // 0x1ebb2c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1ebb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_1ebb30:
    // 0x1ebb30: 0x92050038  lbu         $a1, 0x38($s0)
    ctx->pc = 0x1ebb30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
label_1ebb34:
    // 0x1ebb34: 0x92060039  lbu         $a2, 0x39($s0)
    ctx->pc = 0x1ebb34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_1ebb38:
    // 0x1ebb38: 0xc074350  jal         func_1D0D40
label_1ebb3c:
    if (ctx->pc == 0x1EBB3Cu) {
        ctx->pc = 0x1EBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB38u;
        // 0x1ebb3c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB40u;
        goto label_1ebb40;
    }
    ctx->pc = 0x1EBB38u;
    SET_GPR_U32(ctx, 31, 0x1EBB40u);
    ctx->pc = 0x1EBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB38u;
    // 0x1ebb3c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1EBB38u, 0x1EBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB40u;
label_1ebb40:
    // 0x1ebb40: 0x9205003a  lbu         $a1, 0x3A($s0)
    ctx->pc = 0x1ebb40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_1ebb44:
    // 0x1ebb44: 0x9206003b  lbu         $a2, 0x3B($s0)
    ctx->pc = 0x1ebb44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_1ebb48:
    // 0x1ebb48: 0xc074378  jal         func_1D0DE0
label_1ebb4c:
    if (ctx->pc == 0x1EBB4Cu) {
        ctx->pc = 0x1EBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB48u;
        // 0x1ebb4c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB50u;
        goto label_1ebb50;
    }
    ctx->pc = 0x1EBB48u;
    SET_GPR_U32(ctx, 31, 0x1EBB50u);
    ctx->pc = 0x1EBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB48u;
    // 0x1ebb4c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1EBB48u, 0x1EBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB50u;
label_1ebb50:
    // 0x1ebb50: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1ebb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_1ebb54:
    // 0x1ebb54: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x1ebb54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1ebb58:
    // 0x1ebb58: 0xc0741a4  jal         func_1D0690
label_1ebb5c:
    if (ctx->pc == 0x1EBB5Cu) {
        ctx->pc = 0x1EBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB58u;
        // 0x1ebb5c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB60u;
        goto label_1ebb60;
    }
    ctx->pc = 0x1EBB58u;
    SET_GPR_U32(ctx, 31, 0x1EBB60u);
    ctx->pc = 0x1EBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB58u;
    // 0x1ebb5c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1EBB58u, 0x1EBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB60u;
label_1ebb60:
    // 0x1ebb60: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1ebb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_1ebb64:
    // 0x1ebb64: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1ebb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1ebb68:
    // 0x1ebb68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ebb6c:
    if (ctx->pc == 0x1EBB6Cu) {
        ctx->pc = 0x1EBB70u;
        goto label_1ebb70;
    }
    ctx->pc = 0x1EBB68u;
    {
        const bool branch_taken_0x1ebb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb68) {
            ctx->pc = 0x1EBB88u;
            goto label_1ebb88;
        }
    }
    ctx->pc = 0x1EBB70u;
label_1ebb70:
    // 0x1ebb70: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1ebb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ebb74:
    // 0x1ebb74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ebb74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ebb78:
    // 0x1ebb78: 0x320f809  jalr        $t9
label_1ebb7c:
    if (ctx->pc == 0x1EBB7Cu) {
        ctx->pc = 0x1EBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB78u;
        // 0x1ebb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB80u;
        goto label_1ebb80;
    }
    ctx->pc = 0x1EBB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EBB80u);
        ctx->pc = 0x1EBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB78u;
        // 0x1ebb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB78u, 0x1EBB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBB80u;
label_1ebb80:
    // 0x1ebb80: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ebb84:
    if (ctx->pc == 0x1EBB84u) {
        ctx->pc = 0x1EBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB80u;
        // 0x1ebb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB88u;
        goto label_1ebb88;
    }
    ctx->pc = 0x1EBB80u;
    {
        const bool branch_taken_0x1ebb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB80u;
        // 0x1ebb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb80) {
            ctx->pc = 0x1EBBB0u;
            goto label_1ebbb0;
        }
    }
    ctx->pc = 0x1EBB88u;
label_1ebb88:
    // 0x1ebb88: 0x92030033  lbu         $v1, 0x33($s0)
    ctx->pc = 0x1ebb88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1ebb8c:
    // 0x1ebb8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebb90:
    // 0x1ebb90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ebb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ebb94:
    // 0x1ebb94: 0xa6030088  sh          $v1, 0x88($s0)
    ctx->pc = 0x1ebb94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 3));
label_1ebb98:
    // 0x1ebb98: 0xa600008a  sh          $zero, 0x8A($s0)
    ctx->pc = 0x1ebb98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 0));
label_1ebb9c:
    // 0x1ebb9c: 0x92030033  lbu         $v1, 0x33($s0)
    ctx->pc = 0x1ebb9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1ebba0:
    // 0x1ebba0: 0xa603008c  sh          $v1, 0x8C($s0)
    ctx->pc = 0x1ebba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 3));
label_1ebba4:
    // 0x1ebba4: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x1ebba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
label_1ebba8:
    // 0x1ebba8: 0xa603008e  sh          $v1, 0x8E($s0)
    ctx->pc = 0x1ebba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 142), (uint16_t)GPR_U32(ctx, 3));
label_1ebbac:
    // 0x1ebbac: 0x0  nop
    ctx->pc = 0x1ebbacu;
    // NOP
label_1ebbb0:
    // 0x1ebbb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ebbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebbb4:
    // 0x1ebbb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebbb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebbb8:
    // 0x1ebbb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebbbc:
    // 0x1ebbbc: 0x3e00008  jr          $ra
label_1ebbc0:
    if (ctx->pc == 0x1EBBC0u) {
        ctx->pc = 0x1EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBBCu;
        // 0x1ebbc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBC4u;
        goto label_fallthrough_0x1ebbbc;
    }
    ctx->pc = 0x1EBBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBBCu;
        // 0x1ebbc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ebbbc:
    ctx->pc = 0x1EBBC4u;
}
