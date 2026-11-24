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

// Function: sub_0025AFB0
// Address: 0x25afb0 - 0x25b0b8
void sub_0025AFB0_0x25afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AFB0_0x25afb0");
#endif

    switch (ctx->pc) {
        case 0x25afb0u: goto label_25afb0;
        case 0x25afb4u: goto label_25afb4;
        case 0x25afb8u: goto label_25afb8;
        case 0x25afbcu: goto label_25afbc;
        case 0x25afc0u: goto label_25afc0;
        case 0x25afc4u: goto label_25afc4;
        case 0x25afc8u: goto label_25afc8;
        case 0x25afccu: goto label_25afcc;
        case 0x25afd0u: goto label_25afd0;
        case 0x25afd4u: goto label_25afd4;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afdcu: goto label_25afdc;
        case 0x25afe0u: goto label_25afe0;
        case 0x25afe4u: goto label_25afe4;
        case 0x25afe8u: goto label_25afe8;
        case 0x25afecu: goto label_25afec;
        case 0x25aff0u: goto label_25aff0;
        case 0x25aff4u: goto label_25aff4;
        case 0x25aff8u: goto label_25aff8;
        case 0x25affcu: goto label_25affc;
        case 0x25b000u: goto label_25b000;
        case 0x25b004u: goto label_25b004;
        case 0x25b008u: goto label_25b008;
        case 0x25b00cu: goto label_25b00c;
        case 0x25b010u: goto label_25b010;
        case 0x25b014u: goto label_25b014;
        case 0x25b018u: goto label_25b018;
        case 0x25b01cu: goto label_25b01c;
        case 0x25b020u: goto label_25b020;
        case 0x25b024u: goto label_25b024;
        case 0x25b028u: goto label_25b028;
        case 0x25b02cu: goto label_25b02c;
        case 0x25b030u: goto label_25b030;
        case 0x25b034u: goto label_25b034;
        case 0x25b038u: goto label_25b038;
        case 0x25b03cu: goto label_25b03c;
        case 0x25b040u: goto label_25b040;
        case 0x25b044u: goto label_25b044;
        case 0x25b048u: goto label_25b048;
        case 0x25b04cu: goto label_25b04c;
        case 0x25b050u: goto label_25b050;
        case 0x25b054u: goto label_25b054;
        case 0x25b058u: goto label_25b058;
        case 0x25b05cu: goto label_25b05c;
        case 0x25b060u: goto label_25b060;
        case 0x25b064u: goto label_25b064;
        case 0x25b068u: goto label_25b068;
        case 0x25b06cu: goto label_25b06c;
        case 0x25b070u: goto label_25b070;
        case 0x25b074u: goto label_25b074;
        case 0x25b078u: goto label_25b078;
        case 0x25b07cu: goto label_25b07c;
        case 0x25b080u: goto label_25b080;
        case 0x25b084u: goto label_25b084;
        case 0x25b088u: goto label_25b088;
        case 0x25b08cu: goto label_25b08c;
        case 0x25b090u: goto label_25b090;
        case 0x25b094u: goto label_25b094;
        case 0x25b098u: goto label_25b098;
        case 0x25b09cu: goto label_25b09c;
        case 0x25b0a0u: goto label_25b0a0;
        case 0x25b0a4u: goto label_25b0a4;
        case 0x25b0a8u: goto label_25b0a8;
        case 0x25b0acu: goto label_25b0ac;
        case 0x25b0b0u: goto label_25b0b0;
        case 0x25b0b4u: goto label_25b0b4;
        default: break;
    }

    ctx->pc = 0x25afb0u;

label_25afb0:
    // 0x25afb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25afb4:
    // 0x25afb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25afb8:
    // 0x25afb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25afbc:
    // 0x25afbc: 0x9083005f  lbu         $v1, 0x5F($a0)
    ctx->pc = 0x25afbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
label_25afc0:
    // 0x25afc0: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x25afc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_25afc4:
    // 0x25afc4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_25afc8:
    if (ctx->pc == 0x25AFC8u) {
        ctx->pc = 0x25AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFC4u;
        // 0x25afc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFCCu;
        goto label_25afcc;
    }
    ctx->pc = 0x25AFC4u;
    {
        const bool branch_taken_0x25afc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFC4u;
        // 0x25afc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afc4) {
            ctx->pc = 0x25B0A8u;
            goto label_25b0a8;
        }
    }
    ctx->pc = 0x25AFCCu;
label_25afcc:
    // 0x25afcc: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x25afccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_25afd0:
    // 0x25afd0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_25afd4:
    // 0x25afd4: 0xc07cce0  jal         func_1F3380
label_25afd8:
    if (ctx->pc == 0x25AFD8u) {
        ctx->pc = 0x25AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFD4u;
        // 0x25afd8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFDCu;
        goto label_25afdc;
    }
    ctx->pc = 0x25AFD4u;
    SET_GPR_U32(ctx, 31, 0x25AFDCu);
    ctx->pc = 0x25AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFD4u;
    // 0x25afd8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25AFD4u, 0x25AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFDCu;
label_25afdc:
    // 0x25afdc: 0x92040050  lbu         $a0, 0x50($s0)
    ctx->pc = 0x25afdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_25afe0:
    // 0x25afe0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x25afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25afe4:
    // 0x25afe4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_25afe8:
    if (ctx->pc == 0x25AFE8u) {
        ctx->pc = 0x25AFECu;
        goto label_25afec;
    }
    ctx->pc = 0x25AFE4u;
    {
        const bool branch_taken_0x25afe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25afe4) {
            ctx->pc = 0x25B008u;
            goto label_25b008;
        }
    }
    ctx->pc = 0x25AFECu;
label_25afec:
    // 0x25afec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25aff0:
    if (ctx->pc == 0x25AFF0u) {
        ctx->pc = 0x25AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFECu;
        // 0x25aff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFF4u;
        goto label_25aff4;
    }
    ctx->pc = 0x25AFECu;
    {
        const bool branch_taken_0x25afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFECu;
        // 0x25aff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afec) {
            ctx->pc = 0x25B028u;
            goto label_25b028;
        }
    }
    ctx->pc = 0x25AFF4u;
label_25aff4:
    // 0x25aff4: 0xc096b54  jal         func_25AD50
label_25aff8:
    if (ctx->pc == 0x25AFF8u) {
        ctx->pc = 0x25AFFCu;
        goto label_25affc;
    }
    ctx->pc = 0x25AFF4u;
    SET_GPR_U32(ctx, 31, 0x25AFFCu);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25AFF4u, 0x25AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFFCu;
label_25affc:
    // 0x25affc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_25b000:
    if (ctx->pc == 0x25B000u) {
        ctx->pc = 0x25B004u;
        goto label_25b004;
    }
    ctx->pc = 0x25AFFCu;
    {
        const bool branch_taken_0x25affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25affc) {
            ctx->pc = 0x25B0A8u;
            goto label_25b0a8;
        }
    }
    ctx->pc = 0x25B004u;
label_25b004:
    // 0x25b004: 0x0  nop
    ctx->pc = 0x25b004u;
    // NOP
label_25b008:
    // 0x25b008: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x25b008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_25b00c:
    // 0x25b00c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25b010:
    if (ctx->pc == 0x25B010u) {
        ctx->pc = 0x25B014u;
        goto label_25b014;
    }
    ctx->pc = 0x25B00Cu;
    {
        const bool branch_taken_0x25b00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b00c) {
            ctx->pc = 0x25B028u;
            goto label_25b028;
        }
    }
    ctx->pc = 0x25B014u;
label_25b014:
    // 0x25b014: 0xc096b54  jal         func_25AD50
label_25b018:
    if (ctx->pc == 0x25B018u) {
        ctx->pc = 0x25B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B014u;
        // 0x25b018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B01Cu;
        goto label_25b01c;
    }
    ctx->pc = 0x25B014u;
    SET_GPR_U32(ctx, 31, 0x25B01Cu);
    ctx->pc = 0x25B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B014u;
    // 0x25b018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25B014u, 0x25B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B01Cu;
label_25b01c:
    // 0x25b01c: 0x10000022  b           . + 4 + (0x22 << 2)
label_25b020:
    if (ctx->pc == 0x25B020u) {
        ctx->pc = 0x25B024u;
        goto label_25b024;
    }
    ctx->pc = 0x25B01Cu;
    {
        const bool branch_taken_0x25b01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b01c) {
            ctx->pc = 0x25B0A8u;
            goto label_25b0a8;
        }
    }
    ctx->pc = 0x25B024u;
label_25b024:
    // 0x25b024: 0x0  nop
    ctx->pc = 0x25b024u;
    // NOP
label_25b028:
    // 0x25b028: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25b028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_25b02c:
    // 0x25b02c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25b02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_25b030:
    // 0x25b030: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_25b034:
    if (ctx->pc == 0x25B034u) {
        ctx->pc = 0x25B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B030u;
        // 0x25b034: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B038u;
        goto label_25b038;
    }
    ctx->pc = 0x25B030u;
    {
        const bool branch_taken_0x25b030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B030u;
        // 0x25b034: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b030) {
            ctx->pc = 0x25B058u;
            goto label_25b058;
        }
    }
    ctx->pc = 0x25B038u;
label_25b038:
    // 0x25b038: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25b03c:
    // 0x25b03c: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x25b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
label_25b040:
    // 0x25b040: 0xc076788  jal         func_1D9E20
label_25b044:
    if (ctx->pc == 0x25B044u) {
        ctx->pc = 0x25B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B040u;
        // 0x25b044: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B048u;
        goto label_25b048;
    }
    ctx->pc = 0x25B040u;
    SET_GPR_U32(ctx, 31, 0x25B048u);
    ctx->pc = 0x25B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B040u;
    // 0x25b044: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x25B040u, 0x25B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B048u;
label_25b048:
    // 0x25b048: 0xc076638  jal         func_1D98E0
label_25b04c:
    if (ctx->pc == 0x25B04Cu) {
        ctx->pc = 0x25B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B048u;
        // 0x25b04c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B050u;
        goto label_25b050;
    }
    ctx->pc = 0x25B048u;
    SET_GPR_U32(ctx, 31, 0x25B050u);
    ctx->pc = 0x25B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B048u;
    // 0x25b04c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x25B048u, 0x25B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B050u;
label_25b050:
    // 0x25b050: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_25b054:
    if (ctx->pc == 0x25B054u) {
        ctx->pc = 0x25B058u;
        goto label_25b058;
    }
    ctx->pc = 0x25B050u;
    {
        const bool branch_taken_0x25b050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b050) {
            ctx->pc = 0x25B0A8u;
            goto label_25b0a8;
        }
    }
    ctx->pc = 0x25B058u;
label_25b058:
    // 0x25b058: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25b058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_25b05c:
    // 0x25b05c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x25b05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_25b060:
    // 0x25b060: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_25b064:
    if (ctx->pc == 0x25B064u) {
        ctx->pc = 0x25B068u;
        goto label_25b068;
    }
    ctx->pc = 0x25B060u;
    {
        const bool branch_taken_0x25b060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b060) {
            ctx->pc = 0x25B098u;
            goto label_25b098;
        }
    }
    ctx->pc = 0x25B068u;
label_25b068:
    // 0x25b068: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x25b068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_25b06c:
    // 0x25b06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b070:
    // 0x25b070: 0x8602006a  lh          $v0, 0x6A($s0)
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
label_25b074:
    // 0x25b074: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x25b074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_25b078:
    // 0x25b078: 0x86060060  lh          $a2, 0x60($s0)
    ctx->pc = 0x25b078u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_25b07c:
    // 0x25b07c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25b07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_25b080:
    // 0x25b080: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x25b080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_25b084:
    // 0x25b084: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x25b084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_25b088:
    // 0x25b088: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x25b088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_25b08c:
    // 0x25b08c: 0x320f809  jalr        $t9
label_25b090:
    if (ctx->pc == 0x25B090u) {
        ctx->pc = 0x25B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B08Cu;
        // 0x25b090: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B094u;
        goto label_25b094;
    }
    ctx->pc = 0x25B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25B094u);
        ctx->pc = 0x25B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B08Cu;
        // 0x25b090: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B08Cu, 0x25B094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B094u;
label_25b094:
    // 0x25b094: 0x0  nop
    ctx->pc = 0x25b094u;
    // NOP
label_25b098:
    // 0x25b098: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25b098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_25b09c:
    // 0x25b09c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x25b09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_25b0a0:
    // 0x25b0a0: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x25b0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_25b0a4:
    // 0x25b0a4: 0x0  nop
    ctx->pc = 0x25b0a4u;
    // NOP
label_25b0a8:
    // 0x25b0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25b0ac:
    // 0x25b0ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25b0b0:
    // 0x25b0b0: 0x3e00008  jr          $ra
label_25b0b4:
    if (ctx->pc == 0x25B0B4u) {
        ctx->pc = 0x25B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0B0u;
        // 0x25b0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B0B8u;
        goto label_fallthrough_0x25b0b0;
    }
    ctx->pc = 0x25B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0B0u;
        // 0x25b0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25b0b0:
    ctx->pc = 0x25B0B8u;
}
