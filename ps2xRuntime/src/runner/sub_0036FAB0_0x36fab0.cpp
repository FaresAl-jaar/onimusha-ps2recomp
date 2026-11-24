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

// Function: sub_0036FAB0
// Address: 0x36fab0 - 0x36fda0
void sub_0036FAB0_0x36fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FAB0_0x36fab0");
#endif

    switch (ctx->pc) {
        case 0x36fb34u: goto label_36fb34;
        case 0x36fb44u: goto label_36fb44;
        case 0x36fb80u: goto label_36fb80;
        case 0x36fb90u: goto label_36fb90;
        case 0x36fba0u: goto label_36fba0;
        case 0x36fbbcu: goto label_36fbbc;
        case 0x36fbc4u: goto label_36fbc4;
        case 0x36fbf8u: goto label_36fbf8;
        case 0x36fc1cu: goto label_36fc1c;
        case 0x36fc50u: goto label_36fc50;
        case 0x36fc78u: goto label_36fc78;
        case 0x36fc8cu: goto label_36fc8c;
        case 0x36fc9cu: goto label_36fc9c;
        case 0x36fcacu: goto label_36fcac;
        case 0x36fce0u: goto label_36fce0;
        case 0x36fcf4u: goto label_36fcf4;
        case 0x36fd04u: goto label_36fd04;
        case 0x36fd14u: goto label_36fd14;
        case 0x36fd48u: goto label_36fd48;
        case 0x36fd60u: goto label_36fd60;
        case 0x36fd6cu: goto label_36fd6c;
        case 0x36fd7cu: goto label_36fd7c;
        case 0x36fd90u: goto label_36fd90;
        default: break;
    }

    ctx->pc = 0x36fab0u;

    // 0x36fab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36fab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36fab4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x36fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36fab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36fab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36fabc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36fabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36fac0: 0x90850021  lbu         $a1, 0x21($a0)
    ctx->pc = 0x36fac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x36fac4: 0x10a300b0  beq         $a1, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x36FAC4u;
    {
        const bool branch_taken_0x36fac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAC4u;
        // 0x36fac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fac4) {
            ctx->pc = 0x36FD88u;
            goto label_36fd88;
        }
    }
    ctx->pc = 0x36FACCu;
    // 0x36facc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x36faccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36fad0: 0x10a30085  beq         $a1, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x36FAD0u;
    {
        const bool branch_taken_0x36fad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAD0u;
        // 0x36fad4: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fad0) {
            ctx->pc = 0x36FCE8u;
            goto label_36fce8;
        }
    }
    ctx->pc = 0x36FAD8u;
    // 0x36fad8: 0x10a30069  beq         $a1, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x36FAD8u;
    {
        const bool branch_taken_0x36fad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36fad8) {
            ctx->pc = 0x36FC80u;
            goto label_36fc80;
        }
    }
    ctx->pc = 0x36FAE0u;
    // 0x36fae0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x36fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36fae4: 0x10a3005c  beq         $a1, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x36FAE4u;
    {
        const bool branch_taken_0x36fae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAE4u;
        // 0x36fae8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fae4) {
            ctx->pc = 0x36FC58u;
            goto label_36fc58;
        }
    }
    ctx->pc = 0x36FAECu;
    // 0x36faec: 0x10a3002a  beq         $a1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x36FAECu;
    {
        const bool branch_taken_0x36faec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36faec) {
            ctx->pc = 0x36FB98u;
            goto label_36fb98;
        }
    }
    ctx->pc = 0x36FAF4u;
    // 0x36faf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36FAF4u;
    {
        const bool branch_taken_0x36faf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36faf4) {
            ctx->pc = 0x36FB08u;
            goto label_36fb08;
        }
    }
    ctx->pc = 0x36FAFCu;
    // 0x36fafc: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x36FAFCu;
    {
        const bool branch_taken_0x36fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fafc) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FB04u;
    // 0x36fb04: 0x0  nop
    ctx->pc = 0x36fb04u;
    // NOP
label_36fb08:
    // 0x36fb08: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36fb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36fb0c: 0x8c221284  lw          $v0, 0x1284($at)
    ctx->pc = 0x36fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x911284u));
    // 0x36fb10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36fb18: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x36fb18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36fb1c: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x36fb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x36fb20: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x36fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x36fb24: 0x31e7e  dsrl32      $v1, $v1, 25
    ctx->pc = 0x36fb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 25));
    // 0x36fb28: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x36fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36fb2c: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x36FB2Cu;
    SET_GPR_U32(ctx, 31, 0x36FB34u);
    ctx->pc = 0x36FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB2Cu;
    // 0x36fb30: 0xa2020115  sb          $v0, 0x115($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x36FB2Cu, 0x36FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB34u;
label_36fb34:
    // 0x36fb34: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36fb38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fb3c: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x36FB3Cu;
    SET_GPR_U32(ctx, 31, 0x36FB44u);
    ctx->pc = 0x36FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB3Cu;
    // 0x36fb40: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x36FB3Cu, 0x36FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB44u;
label_36fb44:
    // 0x36fb44: 0x82030115  lb          $v1, 0x115($s0)
    ctx->pc = 0x36fb44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
    // 0x36fb48: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x36fb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x36fb4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x36FB4Cu;
    {
        const bool branch_taken_0x36fb4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB4Cu;
        // 0x36fb50: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb4c) {
            ctx->pc = 0x36FB60u;
            goto label_36fb60;
        }
    }
    ctx->pc = 0x36FB54u;
    // 0x36fb54: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x36FB54u;
    {
        const bool branch_taken_0x36fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB54u;
        // 0x36fb58: 0xa2030021  sb          $v1, 0x21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb54) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FB5Cu;
    // 0x36fb5c: 0x0  nop
    ctx->pc = 0x36fb5cu;
    // NOP
label_36fb60:
    // 0x36fb60: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x36fb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x36fb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fb6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36fb70: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x36fb70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x36fb74: 0x82050115  lb          $a1, 0x115($s0)
    ctx->pc = 0x36fb74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
    // 0x36fb78: 0xc0dbf88  jal         func_36FE20
    ctx->pc = 0x36FB78u;
    SET_GPR_U32(ctx, 31, 0x36FB80u);
    ctx->pc = 0x36FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB78u;
    // 0x36fb7c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE20u, 0x36FB78u, 0x36FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB80u;
label_36fb80:
    // 0x36fb80: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36fb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fb88: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36FB88u;
    SET_GPR_U32(ctx, 31, 0x36FB90u);
    ctx->pc = 0x36FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FB88u;
    // 0x36fb8c: 0x34450054  ori         $a1, $v0, 0x54 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36FB88u, 0x36FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB90u;
label_36fb90:
    // 0x36fb90: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x36FB90u;
    {
        const bool branch_taken_0x36fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fb90) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FB98u;
label_36fb98:
    // 0x36fb98: 0xc0dbf98  jal         func_36FE60
    ctx->pc = 0x36FB98u;
    SET_GPR_U32(ctx, 31, 0x36FBA0u);
    ctx->pc = 0x36FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE60u, 0x36FB98u, 0x36FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBA0u;
label_36fba0:
    // 0x36fba0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36fba4: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x36fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x36fba8: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x36fba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x36fbac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36FBACu;
    {
        const bool branch_taken_0x36fbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fbac) {
            ctx->pc = 0x36FC00u;
            goto label_36fc00;
        }
    }
    ctx->pc = 0x36FBB4u;
    // 0x36fbb4: 0xc0dbe58  jal         func_36F960
    ctx->pc = 0x36FBB4u;
    SET_GPR_U32(ctx, 31, 0x36FBBCu);
    ctx->pc = 0x36FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBB4u;
    // 0x36fbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F960u, 0x36FBB4u, 0x36FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBBCu;
label_36fbbc:
    // 0x36fbbc: 0xc0dbf90  jal         func_36FE40
    ctx->pc = 0x36FBBCu;
    SET_GPR_U32(ctx, 31, 0x36FBC4u);
    ctx->pc = 0x36FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBBCu;
    // 0x36fbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE40u, 0x36FBBCu, 0x36FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBC4u;
label_36fbc4:
    // 0x36fbc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fbc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36fbcc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36fbd0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36fbd4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x36fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36fbd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbdc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36fbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36fbe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36fbe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36fbe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36fbe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36fbecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fbf0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36FBF0u;
    SET_GPR_U32(ctx, 31, 0x36FBF8u);
    ctx->pc = 0x36FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FBF0u;
    // 0x36fbf4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36FBF0u, 0x36FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FBF8u;
label_36fbf8:
    // 0x36fbf8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x36FBF8u;
    {
        const bool branch_taken_0x36fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fbf8) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FC00u;
label_36fc00:
    // 0x36fc00: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x36fc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x36fc04: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x36FC04u;
    {
        const bool branch_taken_0x36fc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fc04) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FC0Cu;
    // 0x36fc0c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36fc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc14: 0xc0dbf90  jal         func_36FE40
    ctx->pc = 0x36FC14u;
    SET_GPR_U32(ctx, 31, 0x36FC1Cu);
    ctx->pc = 0x36FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC14u;
    // 0x36fc18: 0xa2020021  sb          $v0, 0x21($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE40u, 0x36FC14u, 0x36FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC1Cu;
label_36fc1c:
    // 0x36fc1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fc20: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36fc24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36fc28: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36fc2c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36fc30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc34: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36fc34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36fc38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36fc38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36fc3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36fc40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36fc44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fc48: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36FC48u;
    SET_GPR_U32(ctx, 31, 0x36FC50u);
    ctx->pc = 0x36FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC48u;
    // 0x36fc4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36FC48u, 0x36FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC50u;
label_36fc50:
    // 0x36fc50: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x36FC50u;
    {
        const bool branch_taken_0x36fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fc50) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FC58u;
label_36fc58:
    // 0x36fc58: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x36fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36fc5c: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x36fc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x36fc60: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36fc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36fc64: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x36fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x36fc68: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36fc6c: 0x34450051  ori         $a1, $v0, 0x51
    ctx->pc = 0x36fc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)81);
    // 0x36fc70: 0xc0dc810  jal         func_372040
    ctx->pc = 0x36FC70u;
    SET_GPR_U32(ctx, 31, 0x36FC78u);
    ctx->pc = 0x36FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC70u;
    // 0x36fc74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x36FC70u, 0x36FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC78u;
label_36fc78:
    // 0x36fc78: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x36FC78u;
    {
        const bool branch_taken_0x36fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fc78) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FC80u;
label_36fc80:
    // 0x36fc80: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36fc84: 0xc095150  jal         func_254540
    ctx->pc = 0x36FC84u;
    SET_GPR_U32(ctx, 31, 0x36FC8Cu);
    ctx->pc = 0x36FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC84u;
    // 0x36fc88: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36FC84u, 0x36FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC8Cu;
label_36fc8c:
    // 0x36fc8c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x36FC8Cu;
    {
        const bool branch_taken_0x36fc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC8Cu;
        // 0x36fc90: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc8c) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FC94u;
    // 0x36fc94: 0xc095154  jal         func_254550
    ctx->pc = 0x36FC94u;
    SET_GPR_U32(ctx, 31, 0x36FC9Cu);
    ctx->pc = 0x36FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC94u;
    // 0x36fc98: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x36FC94u, 0x36FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC9Cu;
label_36fc9c:
    // 0x36fc9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36FC9Cu;
    {
        const bool branch_taken_0x36fc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC9Cu;
        // 0x36fca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc9c) {
            ctx->pc = 0x36FCB8u;
            goto label_36fcb8;
        }
    }
    ctx->pc = 0x36FCA4u;
    // 0x36fca4: 0xc0dbe58  jal         func_36F960
    ctx->pc = 0x36FCA4u;
    SET_GPR_U32(ctx, 31, 0x36FCACu);
    ctx->pc = 0x36F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F960u, 0x36FCA4u, 0x36FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCACu;
label_36fcac:
    // 0x36fcac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x36FCACu;
    {
        const bool branch_taken_0x36fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fcac) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FCB4u;
    // 0x36fcb4: 0x0  nop
    ctx->pc = 0x36fcb4u;
    // NOP
label_36fcb8:
    // 0x36fcb8: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x36fcb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x36fcbc: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36fcc0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36fcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36fcc4: 0x34450052  ori         $a1, $v0, 0x52
    ctx->pc = 0x36fcc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)82);
    // 0x36fcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fccc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x36fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36fcd0: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x36fcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x36fcd4: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x36fcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x36fcd8: 0xc0dc810  jal         func_372040
    ctx->pc = 0x36FCD8u;
    SET_GPR_U32(ctx, 31, 0x36FCE0u);
    ctx->pc = 0x36FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCD8u;
    // 0x36fcdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x36FCD8u, 0x36FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCE0u;
label_36fce0:
    // 0x36fce0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x36FCE0u;
    {
        const bool branch_taken_0x36fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fce0) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FCE8u;
label_36fce8:
    // 0x36fce8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36fcec: 0xc095150  jal         func_254540
    ctx->pc = 0x36FCECu;
    SET_GPR_U32(ctx, 31, 0x36FCF4u);
    ctx->pc = 0x36FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCECu;
    // 0x36fcf0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36FCECu, 0x36FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCF4u;
label_36fcf4:
    // 0x36fcf4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x36FCF4u;
    {
        const bool branch_taken_0x36fcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCF4u;
        // 0x36fcf8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcf4) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FCFCu;
    // 0x36fcfc: 0xc095154  jal         func_254550
    ctx->pc = 0x36FCFCu;
    SET_GPR_U32(ctx, 31, 0x36FD04u);
    ctx->pc = 0x36FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCFCu;
    // 0x36fd00: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x36FCFCu, 0x36FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD04u;
label_36fd04:
    // 0x36fd04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36FD04u;
    {
        const bool branch_taken_0x36fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD04u;
        // 0x36fd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd04) {
            ctx->pc = 0x36FD20u;
            goto label_36fd20;
        }
    }
    ctx->pc = 0x36FD0Cu;
    // 0x36fd0c: 0xc0dbe58  jal         func_36F960
    ctx->pc = 0x36FD0Cu;
    SET_GPR_U32(ctx, 31, 0x36FD14u);
    ctx->pc = 0x36F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F960u, 0x36FD0Cu, 0x36FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD14u;
label_36fd14:
    // 0x36fd14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x36FD14u;
    {
        const bool branch_taken_0x36fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fd14) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FD1Cu;
    // 0x36fd1c: 0x0  nop
    ctx->pc = 0x36fd1cu;
    // NOP
label_36fd20:
    // 0x36fd20: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x36fd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x36fd24: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36fd28: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36fd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36fd2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36fd30: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x36fd30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x36fd34: 0x8c221284  lw          $v0, 0x1284($at)
    ctx->pc = 0x36fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x911284u));
    // 0x36fd38: 0x82060115  lb          $a2, 0x115($s0)
    ctx->pc = 0x36fd38u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
    // 0x36fd3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36fd40: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x36FD40u;
    SET_GPR_U32(ctx, 31, 0x36FD48u);
    ctx->pc = 0x36FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD40u;
    // 0x36fd44: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x36FD40u, 0x36FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD48u;
label_36fd48:
    // 0x36fd48: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36fd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36fd4c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36fd50: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x36fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x36fd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd58: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x36FD58u;
    SET_GPR_U32(ctx, 31, 0x36FD60u);
    ctx->pc = 0x36FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD58u;
    // 0x36fd5c: 0x34450053  ori         $a1, $v0, 0x53 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)83);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x36FD58u, 0x36FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD60u;
label_36fd60:
    // 0x36fd60: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36fd64: 0xc0cbef4  jal         func_32FBD0
    ctx->pc = 0x36FD64u;
    SET_GPR_U32(ctx, 31, 0x36FD6Cu);
    ctx->pc = 0x36FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD64u;
    // 0x36fd68: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FBD0u, 0x36FD64u, 0x36FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD6Cu;
label_36fd6c:
    // 0x36fd6c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36fd70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fd74: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x36FD74u;
    SET_GPR_U32(ctx, 31, 0x36FD7Cu);
    ctx->pc = 0x36FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD74u;
    // 0x36fd78: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x36FD74u, 0x36FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD7Cu;
label_36fd7c:
    // 0x36fd7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36FD7Cu;
    {
        const bool branch_taken_0x36fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fd7c) {
            ctx->pc = 0x36FD90u;
            goto label_36fd90;
        }
    }
    ctx->pc = 0x36FD84u;
    // 0x36fd84: 0x0  nop
    ctx->pc = 0x36fd84u;
    // NOP
label_36fd88:
    // 0x36fd88: 0xc0dbe58  jal         func_36F960
    ctx->pc = 0x36FD88u;
    SET_GPR_U32(ctx, 31, 0x36FD90u);
    ctx->pc = 0x36F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F960u, 0x36FD88u, 0x36FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD90u;
label_36fd90:
    // 0x36fd90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36fd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fd94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36fd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fd98: 0x3e00008  jr          $ra
    ctx->pc = 0x36FD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD98u;
        // 0x36fd9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FDA0u;
}
