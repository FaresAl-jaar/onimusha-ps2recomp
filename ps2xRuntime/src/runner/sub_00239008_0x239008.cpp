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

// Function: sub_00239008
// Address: 0x239008 - 0x239104
void sub_00239008_0x239008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239008_0x239008");
#endif

    switch (ctx->pc) {
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        case 0x239080u: goto label_239080;
        case 0x239084u: goto label_239084;
        case 0x239088u: goto label_239088;
        case 0x23908cu: goto label_23908c;
        case 0x239090u: goto label_239090;
        case 0x239094u: goto label_239094;
        case 0x239098u: goto label_239098;
        case 0x23909cu: goto label_23909c;
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a4u: goto label_2390a4;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390acu: goto label_2390ac;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390b4u: goto label_2390b4;
        case 0x2390b8u: goto label_2390b8;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390c4u: goto label_2390c4;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390ccu: goto label_2390cc;
        case 0x2390d0u: goto label_2390d0;
        case 0x2390d4u: goto label_2390d4;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390dcu: goto label_2390dc;
        case 0x2390e0u: goto label_2390e0;
        case 0x2390e4u: goto label_2390e4;
        case 0x2390e8u: goto label_2390e8;
        case 0x2390ecu: goto label_2390ec;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390f4u: goto label_2390f4;
        case 0x2390f8u: goto label_2390f8;
        case 0x2390fcu: goto label_2390fc;
        case 0x239100u: goto label_239100;
        default: break;
    }

    ctx->pc = 0x239008u;

label_239008:
    // 0x239008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23900c:
    // 0x23900c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239010:
    // 0x239010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239014:
    // 0x239014: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_239018:
    // 0x239018: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23901c:
    // 0x23901c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23901cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_239020:
    // 0x239020: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x239020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239024:
    // 0x239024: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x239024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_239028:
    // 0x239028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23902c:
    // 0x23902c: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x23902cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_239030:
    // 0x239030: 0xc093efc  jal         func_24FBF0
label_239034:
    if (ctx->pc == 0x239034u) {
        ctx->pc = 0x239034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239030u;
        // 0x239034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239038u;
        goto label_239038;
    }
    ctx->pc = 0x239030u;
    SET_GPR_U32(ctx, 31, 0x239038u);
    ctx->pc = 0x239034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239030u;
    // 0x239034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF0u, 0x239030u, 0x239038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239038u;
label_239038:
    // 0x239038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23903c:
    // 0x23903c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23903cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239040:
    // 0x239040: 0xc093eec  jal         func_24FBB0
label_239044:
    if (ctx->pc == 0x239044u) {
        ctx->pc = 0x239044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239040u;
        // 0x239044: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239048u;
        goto label_239048;
    }
    ctx->pc = 0x239040u;
    SET_GPR_U32(ctx, 31, 0x239048u);
    ctx->pc = 0x239044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239040u;
    // 0x239044: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBB0u, 0x239040u, 0x239048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239048u;
label_239048:
    // 0x239048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23904c:
    // 0x23904c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23904cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239050:
    // 0x239050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239054:
    // 0x239054: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x239054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_239058:
    // 0x239058: 0x40f809  jalr        $v0
label_23905c:
    if (ctx->pc == 0x23905Cu) {
        ctx->pc = 0x23905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239058u;
        // 0x23905c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239060u;
        goto label_239060;
    }
    ctx->pc = 0x239058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239060u);
        ctx->pc = 0x23905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239058u;
        // 0x23905c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239058u, 0x239060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239060u;
label_239060:
    // 0x239060: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239064:
    // 0x239064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x239064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239068:
    // 0x239068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23906c:
    // 0x23906c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_239070:
    // 0x239070: 0x40f809  jalr        $v0
label_239074:
    if (ctx->pc == 0x239074u) {
        ctx->pc = 0x239074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239070u;
        // 0x239074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239078u;
        goto label_239078;
    }
    ctx->pc = 0x239070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239078u);
        ctx->pc = 0x239074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239070u;
        // 0x239074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239070u, 0x239078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239078u;
label_239078:
    // 0x239078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23907c:
    // 0x23907c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239080:
    // 0x239080: 0xc0949d0  jal         func_252740
label_239084:
    if (ctx->pc == 0x239084u) {
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239088u;
        goto label_239088;
    }
    ctx->pc = 0x239080u;
    SET_GPR_U32(ctx, 31, 0x239088u);
    ctx->pc = 0x239084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239080u;
    // 0x239084: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252740u, 0x239080u, 0x239088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239088u;
label_239088:
    // 0x239088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23908c:
    // 0x23908c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239090:
    // 0x239090: 0xc0949d0  jal         func_252740
label_239094:
    if (ctx->pc == 0x239094u) {
        ctx->pc = 0x239094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239090u;
        // 0x239094: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239098u;
        goto label_239098;
    }
    ctx->pc = 0x239090u;
    SET_GPR_U32(ctx, 31, 0x239098u);
    ctx->pc = 0x239094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239090u;
    // 0x239094: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252740u, 0x239090u, 0x239098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239098u;
label_239098:
    // 0x239098: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23909c:
    // 0x23909c: 0x2533821  addu        $a3, $s2, $s3
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_2390a0:
    // 0x2390a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2390a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2390a4:
    // 0x2390a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2390a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2390a8:
    // 0x2390a8: 0x2484af80  addiu       $a0, $a0, -0x5080
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946688));
label_2390ac:
    // 0x2390ac: 0xc044332  jal         func_110CC8
label_2390b0:
    if (ctx->pc == 0x2390B0u) {
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390B4u;
        goto label_2390b4;
    }
    ctx->pc = 0x2390ACu;
    SET_GPR_U32(ctx, 31, 0x2390B4u);
    ctx->pc = 0x2390B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390ACu;
    // 0x2390b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x2390ACu, 0x2390B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390B4u;
label_2390b4:
    // 0x2390b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2390b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2390b8:
    // 0x2390b8: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x2390b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2390bc:
    // 0x2390bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2390bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2390c0:
    // 0x2390c0: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x2390c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2390c4:
    // 0x2390c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2390c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2390c8:
    // 0x2390c8: 0xc044332  jal         func_110CC8
label_2390cc:
    if (ctx->pc == 0x2390CCu) {
        ctx->pc = 0x2390CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390C8u;
        // 0x2390cc: 0x2484afa0  addiu       $a0, $a0, -0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390D0u;
        goto label_2390d0;
    }
    ctx->pc = 0x2390C8u;
    SET_GPR_U32(ctx, 31, 0x2390D0u);
    ctx->pc = 0x2390CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390C8u;
    // 0x2390cc: 0x2484afa0  addiu       $a0, $a0, -0x5060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x2390C8u, 0x2390D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390D0u;
label_2390d0:
    // 0x2390d0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2390d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2390d4:
    // 0x2390d4: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x2390d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2390d8:
    // 0x2390d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2390d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2390dc:
    // 0x2390dc: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x2390dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2390e0:
    // 0x2390e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2390e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2390e4:
    // 0x2390e4: 0x82850001  lb          $a1, 0x1($s4)
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_2390e8:
    // 0x2390e8: 0x2484afc0  addiu       $a0, $a0, -0x5040
    ctx->pc = 0x2390e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946752));
label_2390ec:
    // 0x2390ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2390ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2390f0:
    // 0x2390f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2390f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2390f4:
    // 0x2390f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2390f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2390f8:
    // 0x2390f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2390f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2390fc:
    // 0x2390fc: 0x8044332  j           func_110CC8
label_239100:
    if (ctx->pc == 0x239100u) {
        ctx->pc = 0x239100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390FCu;
        // 0x239100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239104u;
        goto label_fallthrough_0x2390fc;
    }
    ctx->pc = 0x2390FCu;
    ctx->pc = 0x239100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390FCu;
    // 0x239100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    sub_00110CC8_0x110cc8(rdram, ctx, runtime); return;
label_fallthrough_0x2390fc:
    ctx->pc = 0x239104u;
}
