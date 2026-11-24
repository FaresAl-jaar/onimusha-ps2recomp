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

// Function: sub_002EDF20
// Address: 0x2edf20 - 0x2ee0dc
void sub_002EDF20_0x2edf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDF20_0x2edf20");
#endif

    switch (ctx->pc) {
        case 0x2edf20u: goto label_2edf20;
        case 0x2edf24u: goto label_2edf24;
        case 0x2edf28u: goto label_2edf28;
        case 0x2edf2cu: goto label_2edf2c;
        case 0x2edf30u: goto label_2edf30;
        case 0x2edf34u: goto label_2edf34;
        case 0x2edf38u: goto label_2edf38;
        case 0x2edf3cu: goto label_2edf3c;
        case 0x2edf40u: goto label_2edf40;
        case 0x2edf44u: goto label_2edf44;
        case 0x2edf48u: goto label_2edf48;
        case 0x2edf4cu: goto label_2edf4c;
        case 0x2edf50u: goto label_2edf50;
        case 0x2edf54u: goto label_2edf54;
        case 0x2edf58u: goto label_2edf58;
        case 0x2edf5cu: goto label_2edf5c;
        case 0x2edf60u: goto label_2edf60;
        case 0x2edf64u: goto label_2edf64;
        case 0x2edf68u: goto label_2edf68;
        case 0x2edf6cu: goto label_2edf6c;
        case 0x2edf70u: goto label_2edf70;
        case 0x2edf74u: goto label_2edf74;
        case 0x2edf78u: goto label_2edf78;
        case 0x2edf7cu: goto label_2edf7c;
        case 0x2edf80u: goto label_2edf80;
        case 0x2edf84u: goto label_2edf84;
        case 0x2edf88u: goto label_2edf88;
        case 0x2edf8cu: goto label_2edf8c;
        case 0x2edf90u: goto label_2edf90;
        case 0x2edf94u: goto label_2edf94;
        case 0x2edf98u: goto label_2edf98;
        case 0x2edf9cu: goto label_2edf9c;
        case 0x2edfa0u: goto label_2edfa0;
        case 0x2edfa4u: goto label_2edfa4;
        case 0x2edfa8u: goto label_2edfa8;
        case 0x2edfacu: goto label_2edfac;
        case 0x2edfb0u: goto label_2edfb0;
        case 0x2edfb4u: goto label_2edfb4;
        case 0x2edfb8u: goto label_2edfb8;
        case 0x2edfbcu: goto label_2edfbc;
        case 0x2edfc0u: goto label_2edfc0;
        case 0x2edfc4u: goto label_2edfc4;
        case 0x2edfc8u: goto label_2edfc8;
        case 0x2edfccu: goto label_2edfcc;
        case 0x2edfd0u: goto label_2edfd0;
        case 0x2edfd4u: goto label_2edfd4;
        case 0x2edfd8u: goto label_2edfd8;
        case 0x2edfdcu: goto label_2edfdc;
        case 0x2edfe0u: goto label_2edfe0;
        case 0x2edfe4u: goto label_2edfe4;
        case 0x2edfe8u: goto label_2edfe8;
        case 0x2edfecu: goto label_2edfec;
        case 0x2edff0u: goto label_2edff0;
        case 0x2edff4u: goto label_2edff4;
        case 0x2edff8u: goto label_2edff8;
        case 0x2edffcu: goto label_2edffc;
        case 0x2ee000u: goto label_2ee000;
        case 0x2ee004u: goto label_2ee004;
        case 0x2ee008u: goto label_2ee008;
        case 0x2ee00cu: goto label_2ee00c;
        case 0x2ee010u: goto label_2ee010;
        case 0x2ee014u: goto label_2ee014;
        case 0x2ee018u: goto label_2ee018;
        case 0x2ee01cu: goto label_2ee01c;
        case 0x2ee020u: goto label_2ee020;
        case 0x2ee024u: goto label_2ee024;
        case 0x2ee028u: goto label_2ee028;
        case 0x2ee02cu: goto label_2ee02c;
        case 0x2ee030u: goto label_2ee030;
        case 0x2ee034u: goto label_2ee034;
        case 0x2ee038u: goto label_2ee038;
        case 0x2ee03cu: goto label_2ee03c;
        case 0x2ee040u: goto label_2ee040;
        case 0x2ee044u: goto label_2ee044;
        case 0x2ee048u: goto label_2ee048;
        case 0x2ee04cu: goto label_2ee04c;
        case 0x2ee050u: goto label_2ee050;
        case 0x2ee054u: goto label_2ee054;
        case 0x2ee058u: goto label_2ee058;
        case 0x2ee05cu: goto label_2ee05c;
        case 0x2ee060u: goto label_2ee060;
        case 0x2ee064u: goto label_2ee064;
        case 0x2ee068u: goto label_2ee068;
        case 0x2ee06cu: goto label_2ee06c;
        case 0x2ee070u: goto label_2ee070;
        case 0x2ee074u: goto label_2ee074;
        case 0x2ee078u: goto label_2ee078;
        case 0x2ee07cu: goto label_2ee07c;
        case 0x2ee080u: goto label_2ee080;
        case 0x2ee084u: goto label_2ee084;
        case 0x2ee088u: goto label_2ee088;
        case 0x2ee08cu: goto label_2ee08c;
        case 0x2ee090u: goto label_2ee090;
        case 0x2ee094u: goto label_2ee094;
        case 0x2ee098u: goto label_2ee098;
        case 0x2ee09cu: goto label_2ee09c;
        case 0x2ee0a0u: goto label_2ee0a0;
        case 0x2ee0a4u: goto label_2ee0a4;
        case 0x2ee0a8u: goto label_2ee0a8;
        case 0x2ee0acu: goto label_2ee0ac;
        case 0x2ee0b0u: goto label_2ee0b0;
        case 0x2ee0b4u: goto label_2ee0b4;
        case 0x2ee0b8u: goto label_2ee0b8;
        case 0x2ee0bcu: goto label_2ee0bc;
        case 0x2ee0c0u: goto label_2ee0c0;
        case 0x2ee0c4u: goto label_2ee0c4;
        case 0x2ee0c8u: goto label_2ee0c8;
        case 0x2ee0ccu: goto label_2ee0cc;
        case 0x2ee0d0u: goto label_2ee0d0;
        case 0x2ee0d4u: goto label_2ee0d4;
        case 0x2ee0d8u: goto label_2ee0d8;
        default: break;
    }

    ctx->pc = 0x2edf20u;

label_2edf20:
    // 0x2edf20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2edf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2edf24:
    // 0x2edf24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2edf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2edf28:
    // 0x2edf28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2edf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2edf2c:
    // 0x2edf2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2edf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2edf30:
    // 0x2edf30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2edf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2edf34:
    // 0x2edf34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2edf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2edf38:
    // 0x2edf38: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2edf38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2edf3c:
    // 0x2edf3c: 0x10860054  beq         $a0, $a2, . + 4 + (0x54 << 2)
label_2edf40:
    if (ctx->pc == 0x2EDF40u) {
        ctx->pc = 0x2EDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF3Cu;
        // 0x2edf40: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDF44u;
        goto label_2edf44;
    }
    ctx->pc = 0x2EDF3Cu;
    {
        const bool branch_taken_0x2edf3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2EDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF3Cu;
        // 0x2edf40: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf3c) {
            ctx->pc = 0x2EE090u;
            goto label_2ee090;
        }
    }
    ctx->pc = 0x2EDF44u;
label_2edf44:
    // 0x2edf44: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
label_2edf48:
    if (ctx->pc == 0x2EDF48u) {
        ctx->pc = 0x2EDF4Cu;
        goto label_2edf4c;
    }
    ctx->pc = 0x2EDF44u;
    {
        const bool branch_taken_0x2edf44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2edf44) {
            ctx->pc = 0x2EE058u;
            goto label_2ee058;
        }
    }
    ctx->pc = 0x2EDF4Cu;
label_2edf4c:
    // 0x2edf4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2edf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edf50:
    // 0x2edf50: 0x10860011  beq         $a0, $a2, . + 4 + (0x11 << 2)
label_2edf54:
    if (ctx->pc == 0x2EDF54u) {
        ctx->pc = 0x2EDF58u;
        goto label_2edf58;
    }
    ctx->pc = 0x2EDF50u;
    {
        const bool branch_taken_0x2edf50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x2edf50) {
            ctx->pc = 0x2EDF98u;
            goto label_2edf98;
        }
    }
    ctx->pc = 0x2EDF58u;
label_2edf58:
    // 0x2edf58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2edf5c:
    if (ctx->pc == 0x2EDF5Cu) {
        ctx->pc = 0x2EDF60u;
        goto label_2edf60;
    }
    ctx->pc = 0x2EDF58u;
    {
        const bool branch_taken_0x2edf58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf58) {
            ctx->pc = 0x2EDF68u;
            goto label_2edf68;
        }
    }
    ctx->pc = 0x2EDF60u;
label_2edf60:
    // 0x2edf60: 0x10000059  b           . + 4 + (0x59 << 2)
label_2edf64:
    if (ctx->pc == 0x2EDF64u) {
        ctx->pc = 0x2EDF68u;
        goto label_2edf68;
    }
    ctx->pc = 0x2EDF60u;
    {
        const bool branch_taken_0x2edf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf60) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EDF68u;
label_2edf68:
    // 0x2edf68: 0xa6250826  sh          $a1, 0x826($s1)
    ctx->pc = 0x2edf68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 5));
label_2edf6c:
    // 0x2edf6c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2edf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2edf70:
    // 0x2edf70: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2edf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2edf74:
    // 0x2edf74: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2edf74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2edf78:
    // 0x2edf78: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2edf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2edf7c:
    // 0x2edf7c: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2edf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2edf80:
    // 0x2edf80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2edf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2edf84:
    // 0x2edf84: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x2edf84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2edf88:
    // 0x2edf88: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2edf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2edf8c:
    // 0x2edf8c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2edf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_2edf90:
    // 0x2edf90: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2edf94:
    if (ctx->pc == 0x2EDF94u) {
        ctx->pc = 0x2EDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF90u;
        // 0x2edf94: 0xa2260821  sb          $a2, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDF98u;
        goto label_2edf98;
    }
    ctx->pc = 0x2EDF90u;
    {
        const bool branch_taken_0x2edf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF90u;
        // 0x2edf94: 0xa2260821  sb          $a2, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf90) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EDF98u;
label_2edf98:
    // 0x2edf98: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2edf98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2edf9c:
    // 0x2edf9c: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_2edfa0:
    if (ctx->pc == 0x2EDFA0u) {
        ctx->pc = 0x2EDFA4u;
        goto label_2edfa4;
    }
    ctx->pc = 0x2EDF9Cu;
    {
        const bool branch_taken_0x2edf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edf9c) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EDFA4u;
label_2edfa4:
    // 0x2edfa4: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2edfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2edfa8:
    // 0x2edfa8: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x2edfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_2edfac:
    // 0x2edfac: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2edfacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2edfb0:
    // 0x2edfb0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2edfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2edfb4:
    // 0x2edfb4: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x2edfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
label_2edfb8:
    // 0x2edfb8: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x2edfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_2edfbc:
    // 0x2edfbc: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x2edfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
label_2edfc0:
    // 0x2edfc0: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x2edfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2edfc4:
    // 0x2edfc4: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x2edfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
label_2edfc8:
    // 0x2edfc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2edfcc:
    // 0x2edfcc: 0xc0b2ebc  jal         func_2CBAF0
label_2edfd0:
    if (ctx->pc == 0x2EDFD0u) {
        ctx->pc = 0x2EDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFCCu;
        // 0x2edfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDFD4u;
        goto label_2edfd4;
    }
    ctx->pc = 0x2EDFCCu;
    SET_GPR_U32(ctx, 31, 0x2EDFD4u);
    ctx->pc = 0x2EDFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFCCu;
    // 0x2edfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x2EDFCCu, 0x2EDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFD4u;
label_2edfd4:
    // 0x2edfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2edfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2edfd8:
    // 0x2edfd8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_2edfdc:
    if (ctx->pc == 0x2EDFDCu) {
        ctx->pc = 0x2EDFE0u;
        goto label_2edfe0;
    }
    ctx->pc = 0x2EDFD8u;
    {
        const bool branch_taken_0x2edfd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edfd8) {
            ctx->pc = 0x2EE038u;
            goto label_2ee038;
        }
    }
    ctx->pc = 0x2EDFE0u;
label_2edfe0:
    // 0x2edfe0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2edfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2edfe4:
    // 0x2edfe4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2edfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2edfe8:
    // 0x2edfe8: 0x24428e80  addiu       $v0, $v0, -0x7180
    ctx->pc = 0x2edfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938240));
label_2edfec:
    // 0x2edfec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2edfecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2edff0:
    // 0x2edff0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2edff0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2edff4:
    // 0x2edff4: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2edff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2edff8:
    // 0x2edff8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2edff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2edffc:
    // 0x2edffc: 0x320f809  jalr        $t9
label_2ee000:
    if (ctx->pc == 0x2EE000u) {
        ctx->pc = 0x2EE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFFCu;
        // 0x2ee000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE004u;
        goto label_2ee004;
    }
    ctx->pc = 0x2EDFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EE004u);
        ctx->pc = 0x2EE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFFCu;
        // 0x2ee000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDFFCu, 0x2EE004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE004u;
label_2ee004:
    // 0x2ee004: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2ee004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ee008:
    // 0x2ee008: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ee008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ee00c:
    // 0x2ee00c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2ee00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2ee010:
    // 0x2ee010: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ee010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ee014:
    // 0x2ee014: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2ee014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2ee018:
    // 0x2ee018: 0x78630530  lq          $v1, 0x530($v1)
    ctx->pc = 0x2ee018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 1328)));
label_2ee01c:
    // 0x2ee01c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x2ee01cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_2ee020:
    // 0x2ee020: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2ee020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2ee024:
    // 0x2ee024: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2ee024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ee028:
    // 0x2ee028: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2ee028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2ee02c:
    // 0x2ee02c: 0xc041442  jal         func_105108
label_2ee030:
    if (ctx->pc == 0x2EE030u) {
        ctx->pc = 0x2EE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE02Cu;
        // 0x2ee030: 0x24450500  addiu       $a1, $v0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE034u;
        goto label_2ee034;
    }
    ctx->pc = 0x2EE02Cu;
    SET_GPR_U32(ctx, 31, 0x2EE034u);
    ctx->pc = 0x2EE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE02Cu;
    // 0x2ee030: 0x24450500  addiu       $a1, $v0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2EE02Cu, 0x2EE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE034u;
label_2ee034:
    // 0x2ee034: 0x0  nop
    ctx->pc = 0x2ee034u;
    // NOP
label_2ee038:
    // 0x2ee038: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x2ee038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_2ee03c:
    // 0x2ee03c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ee03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ee040:
    // 0x2ee040: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x2ee040u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
label_2ee044:
    // 0x2ee044: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ee044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2ee048:
    // 0x2ee048: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_2ee04c:
    if (ctx->pc == 0x2EE04Cu) {
        ctx->pc = 0x2EE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE048u;
        // 0x2ee04c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE050u;
        goto label_2ee050;
    }
    ctx->pc = 0x2EE048u;
    {
        const bool branch_taken_0x2ee048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE048u;
        // 0x2ee04c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee048) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE050u;
label_2ee050:
    // 0x2ee050: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2ee054:
    if (ctx->pc == 0x2EE054u) {
        ctx->pc = 0x2EE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE050u;
        // 0x2ee054: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE058u;
        goto label_2ee058;
    }
    ctx->pc = 0x2EE050u;
    {
        const bool branch_taken_0x2ee050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE050u;
        // 0x2ee054: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee050) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE058u;
label_2ee058:
    // 0x2ee058: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ee058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2ee05c:
    // 0x2ee05c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_2ee060:
    if (ctx->pc == 0x2EE060u) {
        ctx->pc = 0x2EE064u;
        goto label_2ee064;
    }
    ctx->pc = 0x2EE05Cu;
    {
        const bool branch_taken_0x2ee05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee05c) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE064u;
label_2ee064:
    // 0x2ee064: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ee068:
    // 0x2ee068: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x2ee068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_2ee06c:
    // 0x2ee06c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ee070:
    // 0x2ee070: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ee070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee074:
    // 0x2ee074: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2ee074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2ee078:
    // 0x2ee078: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2ee078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_2ee07c:
    // 0x2ee07c: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x2ee07cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2ee080:
    // 0x2ee080: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ee080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_2ee084:
    // 0x2ee084: 0x10000010  b           . + 4 + (0x10 << 2)
label_2ee088:
    if (ctx->pc == 0x2EE088u) {
        ctx->pc = 0x2EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE084u;
        // 0x2ee088: 0xa2260821  sb          $a2, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE08Cu;
        goto label_2ee08c;
    }
    ctx->pc = 0x2EE084u;
    {
        const bool branch_taken_0x2ee084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE084u;
        // 0x2ee088: 0xa2260821  sb          $a2, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee084) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE08Cu;
label_2ee08c:
    // 0x2ee08c: 0x0  nop
    ctx->pc = 0x2ee08cu;
    // NOP
label_2ee090:
    // 0x2ee090: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ee090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2ee094:
    // 0x2ee094: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2ee098:
    if (ctx->pc == 0x2EE098u) {
        ctx->pc = 0x2EE09Cu;
        goto label_2ee09c;
    }
    ctx->pc = 0x2EE094u;
    {
        const bool branch_taken_0x2ee094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee094) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE09Cu;
label_2ee09c:
    // 0x2ee09c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee09cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ee0a0:
    // 0x2ee0a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ee0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ee0a4:
    // 0x2ee0a4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ee0a8:
    // 0x2ee0a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ee0ac:
    // 0x2ee0ac: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2ee0acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2ee0b0:
    // 0x2ee0b0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ee0b4:
    // 0x2ee0b4: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ee0b8:
    // 0x2ee0b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ee0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ee0bc:
    // 0x2ee0bc: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2ee0c0:
    // 0x2ee0c0: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2ee0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2ee0c4:
    // 0x2ee0c4: 0x0  nop
    ctx->pc = 0x2ee0c4u;
    // NOP
label_2ee0c8:
    // 0x2ee0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ee0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee0cc:
    // 0x2ee0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee0d0:
    // 0x2ee0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee0d4:
    // 0x2ee0d4: 0x3e00008  jr          $ra
label_2ee0d8:
    if (ctx->pc == 0x2EE0D8u) {
        ctx->pc = 0x2EE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0D4u;
        // 0x2ee0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE0DCu;
        goto label_fallthrough_0x2ee0d4;
    }
    ctx->pc = 0x2EE0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0D4u;
        // 0x2ee0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ee0d4:
    ctx->pc = 0x2EE0DCu;
}
