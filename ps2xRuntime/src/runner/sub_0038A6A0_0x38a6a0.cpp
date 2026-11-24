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

// Function: sub_0038A6A0
// Address: 0x38a6a0 - 0x38a868
void sub_0038A6A0_0x38a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A6A0_0x38a6a0");
#endif

    switch (ctx->pc) {
        case 0x38a6a0u: goto label_38a6a0;
        case 0x38a6a4u: goto label_38a6a4;
        case 0x38a6a8u: goto label_38a6a8;
        case 0x38a6acu: goto label_38a6ac;
        case 0x38a6b0u: goto label_38a6b0;
        case 0x38a6b4u: goto label_38a6b4;
        case 0x38a6b8u: goto label_38a6b8;
        case 0x38a6bcu: goto label_38a6bc;
        case 0x38a6c0u: goto label_38a6c0;
        case 0x38a6c4u: goto label_38a6c4;
        case 0x38a6c8u: goto label_38a6c8;
        case 0x38a6ccu: goto label_38a6cc;
        case 0x38a6d0u: goto label_38a6d0;
        case 0x38a6d4u: goto label_38a6d4;
        case 0x38a6d8u: goto label_38a6d8;
        case 0x38a6dcu: goto label_38a6dc;
        case 0x38a6e0u: goto label_38a6e0;
        case 0x38a6e4u: goto label_38a6e4;
        case 0x38a6e8u: goto label_38a6e8;
        case 0x38a6ecu: goto label_38a6ec;
        case 0x38a6f0u: goto label_38a6f0;
        case 0x38a6f4u: goto label_38a6f4;
        case 0x38a6f8u: goto label_38a6f8;
        case 0x38a6fcu: goto label_38a6fc;
        case 0x38a700u: goto label_38a700;
        case 0x38a704u: goto label_38a704;
        case 0x38a708u: goto label_38a708;
        case 0x38a70cu: goto label_38a70c;
        case 0x38a710u: goto label_38a710;
        case 0x38a714u: goto label_38a714;
        case 0x38a718u: goto label_38a718;
        case 0x38a71cu: goto label_38a71c;
        case 0x38a720u: goto label_38a720;
        case 0x38a724u: goto label_38a724;
        case 0x38a728u: goto label_38a728;
        case 0x38a72cu: goto label_38a72c;
        case 0x38a730u: goto label_38a730;
        case 0x38a734u: goto label_38a734;
        case 0x38a738u: goto label_38a738;
        case 0x38a73cu: goto label_38a73c;
        case 0x38a740u: goto label_38a740;
        case 0x38a744u: goto label_38a744;
        case 0x38a748u: goto label_38a748;
        case 0x38a74cu: goto label_38a74c;
        case 0x38a750u: goto label_38a750;
        case 0x38a754u: goto label_38a754;
        case 0x38a758u: goto label_38a758;
        case 0x38a75cu: goto label_38a75c;
        case 0x38a760u: goto label_38a760;
        case 0x38a764u: goto label_38a764;
        case 0x38a768u: goto label_38a768;
        case 0x38a76cu: goto label_38a76c;
        case 0x38a770u: goto label_38a770;
        case 0x38a774u: goto label_38a774;
        case 0x38a778u: goto label_38a778;
        case 0x38a77cu: goto label_38a77c;
        case 0x38a780u: goto label_38a780;
        case 0x38a784u: goto label_38a784;
        case 0x38a788u: goto label_38a788;
        case 0x38a78cu: goto label_38a78c;
        case 0x38a790u: goto label_38a790;
        case 0x38a794u: goto label_38a794;
        case 0x38a798u: goto label_38a798;
        case 0x38a79cu: goto label_38a79c;
        case 0x38a7a0u: goto label_38a7a0;
        case 0x38a7a4u: goto label_38a7a4;
        case 0x38a7a8u: goto label_38a7a8;
        case 0x38a7acu: goto label_38a7ac;
        case 0x38a7b0u: goto label_38a7b0;
        case 0x38a7b4u: goto label_38a7b4;
        case 0x38a7b8u: goto label_38a7b8;
        case 0x38a7bcu: goto label_38a7bc;
        case 0x38a7c0u: goto label_38a7c0;
        case 0x38a7c4u: goto label_38a7c4;
        case 0x38a7c8u: goto label_38a7c8;
        case 0x38a7ccu: goto label_38a7cc;
        case 0x38a7d0u: goto label_38a7d0;
        case 0x38a7d4u: goto label_38a7d4;
        case 0x38a7d8u: goto label_38a7d8;
        case 0x38a7dcu: goto label_38a7dc;
        case 0x38a7e0u: goto label_38a7e0;
        case 0x38a7e4u: goto label_38a7e4;
        case 0x38a7e8u: goto label_38a7e8;
        case 0x38a7ecu: goto label_38a7ec;
        case 0x38a7f0u: goto label_38a7f0;
        case 0x38a7f4u: goto label_38a7f4;
        case 0x38a7f8u: goto label_38a7f8;
        case 0x38a7fcu: goto label_38a7fc;
        case 0x38a800u: goto label_38a800;
        case 0x38a804u: goto label_38a804;
        case 0x38a808u: goto label_38a808;
        case 0x38a80cu: goto label_38a80c;
        case 0x38a810u: goto label_38a810;
        case 0x38a814u: goto label_38a814;
        case 0x38a818u: goto label_38a818;
        case 0x38a81cu: goto label_38a81c;
        case 0x38a820u: goto label_38a820;
        case 0x38a824u: goto label_38a824;
        case 0x38a828u: goto label_38a828;
        case 0x38a82cu: goto label_38a82c;
        case 0x38a830u: goto label_38a830;
        case 0x38a834u: goto label_38a834;
        case 0x38a838u: goto label_38a838;
        case 0x38a83cu: goto label_38a83c;
        case 0x38a840u: goto label_38a840;
        case 0x38a844u: goto label_38a844;
        case 0x38a848u: goto label_38a848;
        case 0x38a84cu: goto label_38a84c;
        case 0x38a850u: goto label_38a850;
        case 0x38a854u: goto label_38a854;
        case 0x38a858u: goto label_38a858;
        case 0x38a85cu: goto label_38a85c;
        case 0x38a860u: goto label_38a860;
        case 0x38a864u: goto label_38a864;
        default: break;
    }

    ctx->pc = 0x38a6a0u;

label_38a6a0:
    // 0x38a6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38a6a4:
    // 0x38a6a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38a6a8:
    // 0x38a6a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38a6ac:
    // 0x38a6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38a6b0:
    // 0x38a6b0: 0x90830119  lbu         $v1, 0x119($a0)
    ctx->pc = 0x38a6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 281)));
label_38a6b4:
    // 0x38a6b4: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
label_38a6b8:
    if (ctx->pc == 0x38A6B8u) {
        ctx->pc = 0x38A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6B4u;
        // 0x38a6b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A6BCu;
        goto label_38a6bc;
    }
    ctx->pc = 0x38A6B4u;
    {
        const bool branch_taken_0x38a6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6B4u;
        // 0x38a6b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a6b4) {
            ctx->pc = 0x38A830u;
            goto label_38a830;
        }
    }
    ctx->pc = 0x38A6BCu;
label_38a6bc:
    // 0x38a6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a6c0:
    // 0x38a6c0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_38a6c4:
    if (ctx->pc == 0x38A6C4u) {
        ctx->pc = 0x38A6C8u;
        goto label_38a6c8;
    }
    ctx->pc = 0x38A6C0u;
    {
        const bool branch_taken_0x38a6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38a6c0) {
            ctx->pc = 0x38A728u;
            goto label_38a728;
        }
    }
    ctx->pc = 0x38A6C8u;
label_38a6c8:
    // 0x38a6c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_38a6cc:
    if (ctx->pc == 0x38A6CCu) {
        ctx->pc = 0x38A6D0u;
        goto label_38a6d0;
    }
    ctx->pc = 0x38A6C8u;
    {
        const bool branch_taken_0x38a6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a6c8) {
            ctx->pc = 0x38A6D8u;
            goto label_38a6d8;
        }
    }
    ctx->pc = 0x38A6D0u;
label_38a6d0:
    // 0x38a6d0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_38a6d4:
    if (ctx->pc == 0x38A6D4u) {
        ctx->pc = 0x38A6D8u;
        goto label_38a6d8;
    }
    ctx->pc = 0x38A6D0u;
    {
        const bool branch_taken_0x38a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a6d0) {
            ctx->pc = 0x38A850u;
            goto label_38a850;
        }
    }
    ctx->pc = 0x38A6D8u;
label_38a6d8:
    // 0x38a6d8: 0x96032acc  lhu         $v1, 0x2ACC($s0)
    ctx->pc = 0x38a6d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
label_38a6dc:
    // 0x38a6dc: 0x24020c66  addiu       $v0, $zero, 0xC66
    ctx->pc = 0x38a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3174));
label_38a6e0:
    // 0x38a6e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_38a6e4:
    if (ctx->pc == 0x38A6E4u) {
        ctx->pc = 0x38A6E8u;
        goto label_38a6e8;
    }
    ctx->pc = 0x38A6E0u;
    {
        const bool branch_taken_0x38a6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38a6e0) {
            ctx->pc = 0x38A6F0u;
            goto label_38a6f0;
        }
    }
    ctx->pc = 0x38A6E8u;
label_38a6e8:
    // 0x38a6e8: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x38a6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
label_38a6ec:
    // 0x38a6ec: 0x0  nop
    ctx->pc = 0x38a6ecu;
    // NOP
label_38a6f0:
    // 0x38a6f0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38a6f4:
    // 0x38a6f4: 0x24051422  addiu       $a1, $zero, 0x1422
    ctx->pc = 0x38a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5154));
label_38a6f8:
    // 0x38a6f8: 0xc0d165c  jal         func_345970
label_38a6fc:
    if (ctx->pc == 0x38A6FCu) {
        ctx->pc = 0x38A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6F8u;
        // 0x38a6fc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A700u;
        goto label_38a700;
    }
    ctx->pc = 0x38A6F8u;
    SET_GPR_U32(ctx, 31, 0x38A700u);
    ctx->pc = 0x38A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A6F8u;
    // 0x38a6fc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38A6F8u, 0x38A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A700u;
label_38a700:
    // 0x38a700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a704:
    // 0x38a704: 0xc0d0548  jal         func_341520
label_38a708:
    if (ctx->pc == 0x38A708u) {
        ctx->pc = 0x38A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A704u;
        // 0x38a708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A70Cu;
        goto label_38a70c;
    }
    ctx->pc = 0x38A704u;
    SET_GPR_U32(ctx, 31, 0x38A70Cu);
    ctx->pc = 0x38A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A704u;
    // 0x38a708: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x38A704u, 0x38A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A70Cu;
label_38a70c:
    // 0x38a70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a710:
    // 0x38a710: 0xc0d0548  jal         func_341520
label_38a714:
    if (ctx->pc == 0x38A714u) {
        ctx->pc = 0x38A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A710u;
        // 0x38a714: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A718u;
        goto label_38a718;
    }
    ctx->pc = 0x38A710u;
    SET_GPR_U32(ctx, 31, 0x38A718u);
    ctx->pc = 0x38A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A710u;
    // 0x38a714: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x38A710u, 0x38A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A718u;
label_38a718:
    // 0x38a718: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38a718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38a71c:
    // 0x38a71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38a720:
    // 0x38a720: 0x1000004b  b           . + 4 + (0x4B << 2)
label_38a724:
    if (ctx->pc == 0x38A724u) {
        ctx->pc = 0x38A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A720u;
        // 0x38a724: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A728u;
        goto label_38a728;
    }
    ctx->pc = 0x38A720u;
    {
        const bool branch_taken_0x38a720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A720u;
        // 0x38a724: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a720) {
            ctx->pc = 0x38A850u;
            goto label_38a850;
        }
    }
    ctx->pc = 0x38A728u;
label_38a728:
    // 0x38a728: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38a728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38a72c:
    // 0x38a72c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38a72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38a730:
    // 0x38a730: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38a730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38a734:
    // 0x38a734: 0x320f809  jalr        $t9
label_38a738:
    if (ctx->pc == 0x38A738u) {
        ctx->pc = 0x38A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A734u;
        // 0x38a738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A73Cu;
        goto label_38a73c;
    }
    ctx->pc = 0x38A734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38A73Cu);
        ctx->pc = 0x38A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A734u;
        // 0x38a738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A734u, 0x38A73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38A73Cu;
label_38a73c:
    // 0x38a73c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_38a740:
    if (ctx->pc == 0x38A740u) {
        ctx->pc = 0x38A744u;
        goto label_38a744;
    }
    ctx->pc = 0x38A73Cu;
    {
        const bool branch_taken_0x38a73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a73c) {
            ctx->pc = 0x38A850u;
            goto label_38a850;
        }
    }
    ctx->pc = 0x38A744u;
label_38a744:
    // 0x38a744: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x38a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38a748:
    // 0x38a748: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x38a748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_38a74c:
    // 0x38a74c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x38a74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38a750:
    // 0x38a750: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x38a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_38a754:
    // 0x38a754: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x38a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38a758:
    // 0x38a758: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38a75c:
    // 0x38a75c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x38a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38a760:
    // 0x38a760: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x38a760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_38a764:
    // 0x38a764: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x38a764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_38a768:
    // 0x38a768: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x38a768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_38a76c:
    // 0x38a76c: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x38a76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_38a770:
    // 0x38a770: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x38a770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_38a774:
    // 0x38a774: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x38a774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_38a778:
    // 0x38a778: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x38a778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_38a77c:
    // 0x38a77c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x38a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_38a780:
    // 0x38a780: 0xc0414ca  jal         func_105328
label_38a784:
    if (ctx->pc == 0x38A784u) {
        ctx->pc = 0x38A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A780u;
        // 0x38a784: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A788u;
        goto label_38a788;
    }
    ctx->pc = 0x38A780u;
    SET_GPR_U32(ctx, 31, 0x38A788u);
    ctx->pc = 0x38A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A780u;
    // 0x38a784: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x38A780u, 0x38A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A788u;
label_38a788:
    // 0x38a788: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x38a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38a78c:
    // 0x38a78c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x38a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38a790:
    // 0x38a790: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38a790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38a794:
    // 0x38a794: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x38a794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_38a798:
    // 0x38a798: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x38a798u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_38a79c:
    // 0x38a79c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x38a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38a7a0:
    // 0x38a7a0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x38a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38a7a4:
    // 0x38a7a4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x38a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38a7a8:
    // 0x38a7a8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x38a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38a7ac:
    // 0x38a7ac: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x38a7acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_38a7b0:
    // 0x38a7b0: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x38a7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_38a7b4:
    // 0x38a7b4: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x38a7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_38a7b8:
    // 0x38a7b8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x38a7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_38a7bc:
    // 0x38a7bc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38a7c0:
    // 0x38a7c0: 0xc0d165c  jal         func_345970
label_38a7c4:
    if (ctx->pc == 0x38A7C4u) {
        ctx->pc = 0x38A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7C0u;
        // 0x38a7c4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A7C8u;
        goto label_38a7c8;
    }
    ctx->pc = 0x38A7C0u;
    SET_GPR_U32(ctx, 31, 0x38A7C8u);
    ctx->pc = 0x38A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A7C0u;
    // 0x38a7c4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38A7C0u, 0x38A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A7C8u;
label_38a7c8:
    // 0x38a7c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x38a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_38a7cc:
    // 0x38a7cc: 0x92030119  lbu         $v1, 0x119($s0)
    ctx->pc = 0x38a7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38a7d0:
    // 0x38a7d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38a7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38a7d4:
    // 0x38a7d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_38a7d8:
    // 0x38a7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38a7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38a7dc:
    // 0x38a7dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38a7e0:
    // 0x38a7e0: 0xa2020119  sb          $v0, 0x119($s0)
    ctx->pc = 0x38a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
label_38a7e4:
    // 0x38a7e4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x38a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38a7e8:
    // 0x38a7e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x38a7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_38a7ec:
    // 0x38a7ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38a7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38a7f0:
    // 0x38a7f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_38a7f4:
    if (ctx->pc == 0x38A7F4u) {
        ctx->pc = 0x38A7F8u;
        goto label_38a7f8;
    }
    ctx->pc = 0x38A7F0u;
    {
        const bool branch_taken_0x38a7f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a7f0) {
            ctx->pc = 0x38A808u;
            goto label_38a808;
        }
    }
    ctx->pc = 0x38A7F8u;
label_38a7f8:
    // 0x38a7f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a7f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38a7fc:
    // 0x38a7fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38a7fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38a800:
    // 0x38a800: 0x10000008  b           . + 4 + (0x8 << 2)
label_38a804:
    if (ctx->pc == 0x38A804u) {
        ctx->pc = 0x38A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A800u;
        // 0x38a804: 0xa6032ac8  sh          $v1, 0x2AC8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10952), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A808u;
        goto label_38a808;
    }
    ctx->pc = 0x38A800u;
    {
        const bool branch_taken_0x38a800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A800u;
        // 0x38a804: 0xa6032ac8  sh          $v1, 0x2AC8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10952), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a800) {
            ctx->pc = 0x38A824u;
            goto label_38a824;
        }
    }
    ctx->pc = 0x38A808u;
label_38a808:
    // 0x38a808: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38a808u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38a80c:
    // 0x38a80c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38a810:
    // 0x38a810: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38a814:
    // 0x38a814: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x38a814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38a818:
    // 0x38a818: 0x0  nop
    ctx->pc = 0x38a818u;
    // NOP
label_38a81c:
    // 0x38a81c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38a81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38a820:
    // 0x38a820: 0xa6032ac8  sh          $v1, 0x2AC8($s0)
    ctx->pc = 0x38a820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10952), (uint16_t)GPR_U32(ctx, 3));
label_38a824:
    // 0x38a824: 0x1000000a  b           . + 4 + (0xA << 2)
label_38a828:
    if (ctx->pc == 0x38A828u) {
        ctx->pc = 0x38A82Cu;
        goto label_38a82c;
    }
    ctx->pc = 0x38A824u;
    {
        const bool branch_taken_0x38a824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a824) {
            ctx->pc = 0x38A850u;
            goto label_38a850;
        }
    }
    ctx->pc = 0x38A82Cu;
label_38a82c:
    // 0x38a82c: 0x0  nop
    ctx->pc = 0x38a82cu;
    // NOP
label_38a830:
    // 0x38a830: 0x86022ac8  lh          $v0, 0x2AC8($s0)
    ctx->pc = 0x38a830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10952)));
label_38a834:
    // 0x38a834: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38a834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38a838:
    // 0x38a838: 0xa6022ac8  sh          $v0, 0x2AC8($s0)
    ctx->pc = 0x38a838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10952), (uint16_t)GPR_U32(ctx, 2));
label_38a83c:
    // 0x38a83c: 0x86022ac8  lh          $v0, 0x2AC8($s0)
    ctx->pc = 0x38a83cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10952)));
label_38a840:
    // 0x38a840: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_38a844:
    if (ctx->pc == 0x38A844u) {
        ctx->pc = 0x38A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A840u;
        // 0x38a844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A848u;
        goto label_38a848;
    }
    ctx->pc = 0x38A840u;
    {
        const bool branch_taken_0x38a840 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x38A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A840u;
        // 0x38a844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a840) {
            ctx->pc = 0x38A850u;
            goto label_38a850;
        }
    }
    ctx->pc = 0x38A848u;
label_38a848:
    // 0x38a848: 0x10000003  b           . + 4 + (0x3 << 2)
label_38a84c:
    if (ctx->pc == 0x38A84Cu) {
        ctx->pc = 0x38A850u;
        goto label_38a850;
    }
    ctx->pc = 0x38A848u;
    {
        const bool branch_taken_0x38a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a848) {
            ctx->pc = 0x38A858u;
            goto label_38a858;
        }
    }
    ctx->pc = 0x38A850u;
label_38a850:
    // 0x38a850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38a850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a854:
    // 0x38a854: 0x0  nop
    ctx->pc = 0x38a854u;
    // NOP
label_38a858:
    // 0x38a858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38a85c:
    // 0x38a85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38a860:
    // 0x38a860: 0x3e00008  jr          $ra
label_38a864:
    if (ctx->pc == 0x38A864u) {
        ctx->pc = 0x38A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A860u;
        // 0x38a864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A868u;
        goto label_fallthrough_0x38a860;
    }
    ctx->pc = 0x38A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A860u;
        // 0x38a864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38a860:
    ctx->pc = 0x38A868u;
}
