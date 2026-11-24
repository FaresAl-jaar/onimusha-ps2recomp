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

// Function: sub_003733F0
// Address: 0x3733f0 - 0x373ea8
void sub_003733F0_0x3733f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003733F0_0x3733f0");
#endif

    switch (ctx->pc) {
        case 0x373418u: goto label_373418;
        case 0x373440u: goto label_373440;
        case 0x373498u: goto label_373498;
        case 0x3734e4u: goto label_3734e4;
        case 0x373504u: goto label_373504;
        case 0x37351cu: goto label_37351c;
        case 0x373570u: goto label_373570;
        case 0x373580u: goto label_373580;
        case 0x373590u: goto label_373590;
        case 0x373658u: goto label_373658;
        case 0x37366cu: goto label_37366c;
        case 0x373690u: goto label_373690;
        case 0x3736d4u: goto label_3736d4;
        case 0x3736e4u: goto label_3736e4;
        case 0x3736f4u: goto label_3736f4;
        case 0x373710u: goto label_373710;
        case 0x373718u: goto label_373718;
        case 0x373754u: goto label_373754;
        case 0x373774u: goto label_373774;
        case 0x373788u: goto label_373788;
        case 0x3737acu: goto label_3737ac;
        case 0x3737c4u: goto label_3737c4;
        case 0x373800u: goto label_373800;
        case 0x373818u: goto label_373818;
        case 0x373824u: goto label_373824;
        case 0x373830u: goto label_373830;
        case 0x373844u: goto label_373844;
        case 0x373850u: goto label_373850;
        case 0x373900u: goto label_373900;
        case 0x373918u: goto label_373918;
        case 0x37392cu: goto label_37392c;
        case 0x373950u: goto label_373950;
        case 0x373960u: goto label_373960;
        case 0x373970u: goto label_373970;
        case 0x3739a8u: goto label_3739a8;
        case 0x3739bcu: goto label_3739bc;
        case 0x3739d0u: goto label_3739d0;
        case 0x373a24u: goto label_373a24;
        case 0x373a30u: goto label_373a30;
        case 0x373a3cu: goto label_373a3c;
        case 0x373a48u: goto label_373a48;
        case 0x373a78u: goto label_373a78;
        case 0x373a80u: goto label_373a80;
        case 0x373adcu: goto label_373adc;
        case 0x373afcu: goto label_373afc;
        case 0x373b14u: goto label_373b14;
        case 0x373b2cu: goto label_373b2c;
        case 0x373b54u: goto label_373b54;
        case 0x373b74u: goto label_373b74;
        case 0x373b8cu: goto label_373b8c;
        case 0x373ba4u: goto label_373ba4;
        case 0x373bd8u: goto label_373bd8;
        case 0x373becu: goto label_373bec;
        case 0x373c10u: goto label_373c10;
        case 0x373c20u: goto label_373c20;
        case 0x373c30u: goto label_373c30;
        case 0x373c68u: goto label_373c68;
        case 0x373c7cu: goto label_373c7c;
        case 0x373c90u: goto label_373c90;
        case 0x373cc8u: goto label_373cc8;
        case 0x373cd4u: goto label_373cd4;
        case 0x373ce4u: goto label_373ce4;
        case 0x373cfcu: goto label_373cfc;
        case 0x373d0cu: goto label_373d0c;
        case 0x373d20u: goto label_373d20;
        case 0x373d40u: goto label_373d40;
        case 0x373d68u: goto label_373d68;
        case 0x373d78u: goto label_373d78;
        case 0x373d90u: goto label_373d90;
        case 0x373da0u: goto label_373da0;
        case 0x373dbcu: goto label_373dbc;
        case 0x373e90u: goto label_373e90;
        default: break;
    }

    ctx->pc = 0x3733f0u;

    // 0x3733f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3733f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3733f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3733f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3733f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3733f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3733fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3733fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373400: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x373400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373404: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x373404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373408: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373408u;
    {
        const bool branch_taken_0x373408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x37340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373408u;
        // 0x37340c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373408) {
            ctx->pc = 0x373420u;
            goto label_373420;
        }
    }
    ctx->pc = 0x373410u;
    // 0x373410: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373410u;
    SET_GPR_U32(ctx, 31, 0x373418u);
    ctx->pc = 0x373414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373410u;
    // 0x373414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373410u, 0x373418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373418u;
label_373418:
    // 0x373418: 0x1000029d  b           . + 4 + (0x29D << 2)
    ctx->pc = 0x373418u;
    {
        const bool branch_taken_0x373418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373418) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373420u;
label_373420:
    // 0x373420: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x373420u;
    {
        const bool branch_taken_0x373420 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x373420) {
            ctx->pc = 0x373448u;
            goto label_373448;
        }
    }
    ctx->pc = 0x373428u;
    // 0x373428: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x373428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x37342c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x37342cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373430: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373430u;
    {
        const bool branch_taken_0x373430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373430u;
        // 0x373434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373430) {
            ctx->pc = 0x373448u;
            goto label_373448;
        }
    }
    ctx->pc = 0x373438u;
    // 0x373438: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373438u;
    SET_GPR_U32(ctx, 31, 0x373440u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373438u, 0x373440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373440u;
label_373440:
    // 0x373440: 0x10000293  b           . + 4 + (0x293 << 2)
    ctx->pc = 0x373440u;
    {
        const bool branch_taken_0x373440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373440) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373448u;
label_373448:
    // 0x373448: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x373448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x37344c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x37344cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x373450: 0x1020028f  beqz        $at, . + 4 + (0x28F << 2)
    ctx->pc = 0x373450u;
    {
        const bool branch_taken_0x373450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x373454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373450u;
        // 0x373454: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373450) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373458u;
    // 0x373458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x373458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37345c: 0x248419e0  addiu       $a0, $a0, 0x19E0
    ctx->pc = 0x37345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6624));
    // 0x373460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373464: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x373464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373468: 0x600008  jr          $v1
    ctx->pc = 0x373468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x373470u: goto label_373470;
            case 0x373530u: goto label_373530;
            case 0x373550u: goto label_373550;
            case 0x373660u: goto label_373660;
            case 0x3736B0u: goto label_3736b0;
            case 0x373908u: goto label_373908;
            case 0x373BC8u: goto label_373bc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373468u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x373470u;
label_373470:
    // 0x373470: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x373470u;
    {
        const bool branch_taken_0x373470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x373470) {
            ctx->pc = 0x373510u;
            goto label_373510;
        }
    }
    ctx->pc = 0x373478u;
    // 0x373478: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x373478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x37347c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x37347cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x373480: 0x92430577  lbu         $v1, 0x577($s2)
    ctx->pc = 0x373480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1399)));
    // 0x373484: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x373484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x373488: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x373488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x37348c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x37348cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x373490: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x373490u;
    SET_GPR_U32(ctx, 31, 0x373498u);
    ctx->pc = 0x373494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373490u;
    // 0x373494: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x373490u, 0x373498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373498u;
label_373498:
    // 0x373498: 0x92450575  lbu         $a1, 0x575($s2)
    ctx->pc = 0x373498u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1397)));
    // 0x37349c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x37349cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3734a0: 0x248419cc  addiu       $a0, $a0, 0x19CC
    ctx->pc = 0x3734a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6604));
    // 0x3734a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3734a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3734a8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3734a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3734ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3734acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3734b0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3734b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3734b4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3734B4u;
    {
        const bool branch_taken_0x3734b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3734b4) {
            ctx->pc = 0x3734F0u;
            goto label_3734f0;
        }
    }
    ctx->pc = 0x3734BCu;
    // 0x3734bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3734BCu;
    {
        const bool branch_taken_0x3734bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3734bc) {
            ctx->pc = 0x3734D0u;
            goto label_3734d0;
        }
    }
    ctx->pc = 0x3734C4u;
    // 0x3734c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3734C4u;
    {
        const bool branch_taken_0x3734c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3734c4) {
            ctx->pc = 0x373520u;
            goto label_373520;
        }
    }
    ctx->pc = 0x3734CCu;
    // 0x3734cc: 0x0  nop
    ctx->pc = 0x3734ccu;
    // NOP
label_3734d0:
    // 0x3734d0: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3734d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3734d4: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3734d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3734d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3734d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734dc: 0xc0a9eac  jal         func_2A7AB0
    ctx->pc = 0x3734DCu;
    SET_GPR_U32(ctx, 31, 0x3734E4u);
    ctx->pc = 0x3734E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734DCu;
    // 0x3734e0: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7AB0u, 0x3734DCu, 0x3734E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734E4u;
label_3734e4:
    // 0x3734e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3734E4u;
    {
        const bool branch_taken_0x3734e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3734E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734E4u;
        // 0x3734e8: 0xae420560  sw          $v0, 0x560($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3734e4) {
            ctx->pc = 0x373520u;
            goto label_373520;
        }
    }
    ctx->pc = 0x3734ECu;
    // 0x3734ec: 0x0  nop
    ctx->pc = 0x3734ecu;
    // NOP
label_3734f0:
    // 0x3734f0: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3734f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3734f4: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3734f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3734f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3734f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734fc: 0xc0a9ecc  jal         func_2A7B30
    ctx->pc = 0x3734FCu;
    SET_GPR_U32(ctx, 31, 0x373504u);
    ctx->pc = 0x373500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734FCu;
    // 0x373500: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B30u, 0x3734FCu, 0x373504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373504u;
label_373504:
    // 0x373504: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x373504u;
    {
        const bool branch_taken_0x373504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373504u;
        // 0x373508: 0xae420560  sw          $v0, 0x560($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373504) {
            ctx->pc = 0x373520u;
            goto label_373520;
        }
    }
    ctx->pc = 0x37350Cu;
    // 0x37350c: 0x0  nop
    ctx->pc = 0x37350cu;
    // NOP
label_373510:
    // 0x373510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373514: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373514u;
    SET_GPR_U32(ctx, 31, 0x37351Cu);
    ctx->pc = 0x373518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373514u;
    // 0x373518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373514u, 0x37351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37351Cu;
label_37351c:
    // 0x37351c: 0x0  nop
    ctx->pc = 0x37351cu;
    // NOP
label_373520:
    // 0x373520: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x373520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x373524: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x373524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x373528: 0x10000259  b           . + 4 + (0x259 << 2)
    ctx->pc = 0x373528u;
    {
        const bool branch_taken_0x373528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373528u;
        // 0x37352c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373528) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373530u;
label_373530:
    // 0x373530: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x373530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x373534: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x373534u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x373538: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x373538u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x37353c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x37353cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x373540: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x373540u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x373544: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x373544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x373548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37354c: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x37354cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_373550:
    // 0x373550: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x373550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x373554: 0x92430577  lbu         $v1, 0x577($s2)
    ctx->pc = 0x373554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1399)));
    // 0x373558: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x373558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37355c: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x37355cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x373560: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x373560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x373564: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x373564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x373568: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x373568u;
    SET_GPR_U32(ctx, 31, 0x373570u);
    ctx->pc = 0x37356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373568u;
    // 0x37356c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x373568u, 0x373570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373570u;
label_373570:
    // 0x373570: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x373570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x373574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373578: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x373578u;
    SET_GPR_U32(ctx, 31, 0x373580u);
    ctx->pc = 0x37357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373578u;
    // 0x37357c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x373578u, 0x373580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373580u;
label_373580:
    // 0x373580: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373580u;
    {
        const bool branch_taken_0x373580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373580u;
        // 0x373584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373580) {
            ctx->pc = 0x373590u;
            goto label_373590;
        }
    }
    ctx->pc = 0x373588u;
    // 0x373588: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373588u;
    SET_GPR_U32(ctx, 31, 0x373590u);
    ctx->pc = 0x37358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373588u;
    // 0x37358c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373588u, 0x373590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373590u;
label_373590:
    // 0x373590: 0x9243053a  lbu         $v1, 0x53A($s2)
    ctx->pc = 0x373590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1338)));
    // 0x373594: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x373594u;
    {
        const bool branch_taken_0x373594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x373598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373594u;
        // 0x373598: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373594) {
            ctx->pc = 0x3735B0u;
            goto label_3735b0;
        }
    }
    ctx->pc = 0x37359Cu;
    // 0x37359c: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x37359cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x3735a0: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x3735a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3735a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3735a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3735a8: 0x10000239  b           . + 4 + (0x239 << 2)
    ctx->pc = 0x3735A8u;
    {
        const bool branch_taken_0x3735a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3735ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735A8u;
        // 0x3735ac: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3735a8) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x3735B0u;
label_3735b0:
    // 0x3735b0: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x3735b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x3735b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3735B4u;
    {
        const bool branch_taken_0x3735b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3735B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735B4u;
        // 0x3735b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3735b4) {
            ctx->pc = 0x3735C8u;
            goto label_3735c8;
        }
    }
    ctx->pc = 0x3735BCu;
    // 0x3735bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3735BCu;
    {
        const bool branch_taken_0x3735bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3735bc) {
            ctx->pc = 0x373648u;
            goto label_373648;
        }
    }
    ctx->pc = 0x3735C4u;
    // 0x3735c4: 0x0  nop
    ctx->pc = 0x3735c4u;
    // NOP
label_3735c8:
    // 0x3735c8: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x3735c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3735cc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3735ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3735d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3735d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3735d4: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3735d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3735d8: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x3735d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x3735dc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3735DCu;
    {
        const bool branch_taken_0x3735dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3735dc) {
            ctx->pc = 0x373618u;
            goto label_373618;
        }
    }
    ctx->pc = 0x3735E4u;
    // 0x3735e4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x3735e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3735e8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3735e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3735ec: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3735ECu;
    {
        const bool branch_taken_0x3735ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3735F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735ECu;
        // 0x3735f0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3735ec) {
            ctx->pc = 0x373640u;
            goto label_373640;
        }
    }
    ctx->pc = 0x3735F4u;
    // 0x3735f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3735f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3735f8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3735f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3735fc: 0x0  nop
    ctx->pc = 0x3735fcu;
    // NOP
    // 0x373600: 0x0  nop
    ctx->pc = 0x373600u;
    // NOP
    // 0x373604: 0x2010  mfhi        $a0
    ctx->pc = 0x373604u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x373608: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x373608u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x37360c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37360Cu;
    {
        const bool branch_taken_0x37360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37360Cu;
        // 0x373610: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37360c) {
            ctx->pc = 0x373640u;
            goto label_373640;
        }
    }
    ctx->pc = 0x373614u;
    // 0x373614: 0x0  nop
    ctx->pc = 0x373614u;
    // NOP
label_373618:
    // 0x373618: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x373618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x37361c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x37361cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x373620: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x373620u;
    {
        const bool branch_taken_0x373620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373620) {
            ctx->pc = 0x373640u;
            goto label_373640;
        }
    }
    ctx->pc = 0x373628u;
    // 0x373628: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x373628u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x37362c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373630: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x373630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x373634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373634u;
    {
        const bool branch_taken_0x373634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373634u;
        // 0x373638: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373634) {
            ctx->pc = 0x373648u;
            goto label_373648;
        }
    }
    ctx->pc = 0x37363Cu;
    // 0x37363c: 0x0  nop
    ctx->pc = 0x37363cu;
    // NOP
label_373640:
    // 0x373640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373644: 0x0  nop
    ctx->pc = 0x373644u;
    // NOP
label_373648:
    // 0x373648: 0x14600211  bnez        $v1, . + 4 + (0x211 << 2)
    ctx->pc = 0x373648u;
    {
        const bool branch_taken_0x373648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373648u;
        // 0x37364c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373648) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373650u;
    // 0x373650: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373650u;
    SET_GPR_U32(ctx, 31, 0x373658u);
    ctx->pc = 0x373654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373650u;
    // 0x373654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373650u, 0x373658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373658u;
label_373658:
    // 0x373658: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x373658u;
    {
        const bool branch_taken_0x373658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373658) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373660u;
label_373660:
    // 0x373660: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x373660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x373664: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x373664u;
    SET_GPR_U32(ctx, 31, 0x37366Cu);
    ctx->pc = 0x373668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373664u;
    // 0x373668: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x373664u, 0x37366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37366Cu;
label_37366c:
    // 0x37366c: 0x92430575  lbu         $v1, 0x575($s2)
    ctx->pc = 0x37366cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1397)));
    // 0x373670: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x373670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x373674: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x373674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x373678: 0x244219c4  addiu       $v0, $v0, 0x19C4
    ctx->pc = 0x373678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6596));
    // 0x37367c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37367cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x373680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373684: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x373684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373688: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x373688u;
    SET_GPR_U32(ctx, 31, 0x373690u);
    ctx->pc = 0x37368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373688u;
    // 0x37368c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x373688u, 0x373690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373690u;
label_373690:
    // 0x373690: 0x86420528  lh          $v0, 0x528($s2)
    ctx->pc = 0x373690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1320)));
    // 0x373694: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x373694u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x373698: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x373698u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x37369c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x37369cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3736a0: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x3736a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3736a4: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x3736a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3736a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3736ac: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x3736acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3736b0:
    // 0x3736b0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3736b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3736b4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3736b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3736b8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3736b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3736bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3736c0: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x3736c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3736c4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3736c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3736c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3736c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3736cc: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3736CCu;
    SET_GPR_U32(ctx, 31, 0x3736D4u);
    ctx->pc = 0x3736D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736CCu;
    // 0x3736d0: 0x264600a0  addiu       $a2, $s2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3736CCu, 0x3736D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736D4u;
label_3736d4:
    // 0x3736d4: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x3736d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x3736d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3736d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736dc: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3736DCu;
    SET_GPR_U32(ctx, 31, 0x3736E4u);
    ctx->pc = 0x3736E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736DCu;
    // 0x3736e0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3736DCu, 0x3736E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736E4u;
label_3736e4:
    // 0x3736e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3736E4u;
    {
        const bool branch_taken_0x3736e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3736E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3736E4u;
        // 0x3736e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3736e4) {
            ctx->pc = 0x3736F8u;
            goto label_3736f8;
        }
    }
    ctx->pc = 0x3736ECu;
    // 0x3736ec: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3736ECu;
    SET_GPR_U32(ctx, 31, 0x3736F4u);
    ctx->pc = 0x3736F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736ECu;
    // 0x3736f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3736ECu, 0x3736F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736F4u;
label_3736f4:
    // 0x3736f4: 0x0  nop
    ctx->pc = 0x3736f4u;
    // NOP
label_3736f8:
    // 0x3736f8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3736f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3736fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3736fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373700: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x373700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x373704: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x373704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x373708: 0xc097384  jal         func_25CE10
    ctx->pc = 0x373708u;
    SET_GPR_U32(ctx, 31, 0x373710u);
    ctx->pc = 0x37370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373708u;
    // 0x37370c: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x373708u, 0x373710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373710u;
label_373710:
    // 0x373710: 0xc0c0818  jal         func_302060
    ctx->pc = 0x373710u;
    SET_GPR_U32(ctx, 31, 0x373718u);
    ctx->pc = 0x373714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373710u;
    // 0x373714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x373710u, 0x373718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373718u;
label_373718:
    // 0x373718: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x373718u;
    {
        const bool branch_taken_0x373718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373718) {
            ctx->pc = 0x373760u;
            goto label_373760;
        }
    }
    ctx->pc = 0x373720u;
    // 0x373720: 0x86420512  lh          $v0, 0x512($s2)
    ctx->pc = 0x373720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x373724: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x373724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x373728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x373728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37372c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x37372cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x373730: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x373730u;
    {
        const bool branch_taken_0x373730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x373730) {
            ctx->pc = 0x3737D8u;
            goto label_3737d8;
        }
    }
    ctx->pc = 0x373738u;
    // 0x373738: 0x92460574  lbu         $a2, 0x574($s2)
    ctx->pc = 0x373738u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x37373c: 0xc64c0570  lwc1        $f12, 0x570($s2)
    ctx->pc = 0x37373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373744: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x373744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x373748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37374c: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x37374Cu;
    SET_GPR_U32(ctx, 31, 0x373754u);
    ctx->pc = 0x373750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37374Cu;
    // 0x373750: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x37374Cu, 0x373754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373754u;
label_373754:
    // 0x373754: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x373754u;
    {
        const bool branch_taken_0x373754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373754) {
            ctx->pc = 0x3737D8u;
            goto label_3737d8;
        }
    }
    ctx->pc = 0x37375Cu;
    // 0x37375c: 0x0  nop
    ctx->pc = 0x37375cu;
    // NOP
label_373760:
    // 0x373760: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x373760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x373764: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x373764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373768: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x373768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x37376c: 0xc097184  jal         func_25C610
    ctx->pc = 0x37376Cu;
    SET_GPR_U32(ctx, 31, 0x373774u);
    ctx->pc = 0x373770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37376Cu;
    // 0x373770: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x37376Cu, 0x373774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373774u;
label_373774:
    // 0x373774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x373774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373778: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373778u;
    {
        const bool branch_taken_0x373778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373778u;
        // 0x37377c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373778) {
            ctx->pc = 0x373790u;
            goto label_373790;
        }
    }
    ctx->pc = 0x373780u;
    // 0x373780: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373780u;
    SET_GPR_U32(ctx, 31, 0x373788u);
    ctx->pc = 0x373784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373780u;
    // 0x373784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373780u, 0x373788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373788u;
label_373788:
    // 0x373788: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x373788u;
    {
        const bool branch_taken_0x373788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373788) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373790u;
label_373790:
    // 0x373790: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x373790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x373794: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x373794u;
    {
        const bool branch_taken_0x373794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x373798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373794u;
        // 0x373798: 0xae430518  sw          $v1, 0x518($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373794) {
            ctx->pc = 0x3737C8u;
            goto label_3737c8;
        }
    }
    ctx->pc = 0x37379Cu;
    // 0x37379c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x37379Cu;
    {
        const bool branch_taken_0x37379c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3737A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37379Cu;
        // 0x3737a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37379c) {
            ctx->pc = 0x3737C8u;
            goto label_3737c8;
        }
    }
    ctx->pc = 0x3737A4u;
    // 0x3737a4: 0xc0c085c  jal         func_302170
    ctx->pc = 0x3737A4u;
    SET_GPR_U32(ctx, 31, 0x3737ACu);
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x3737A4u, 0x3737ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737ACu;
label_3737ac:
    // 0x3737ac: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3737acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3737b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3737b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3737b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3737b8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x3737b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3737bc: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x3737BCu;
    SET_GPR_U32(ctx, 31, 0x3737C4u);
    ctx->pc = 0x3737C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737BCu;
    // 0x3737c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x3737BCu, 0x3737C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737C4u;
label_3737c4:
    // 0x3737c4: 0x0  nop
    ctx->pc = 0x3737c4u;
    // NOP
label_3737c8:
    // 0x3737c8: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x3737c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3737cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3737ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3737d0: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x3737D0u;
    {
        const bool branch_taken_0x3737d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3737D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3737D0u;
        // 0x3737d4: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3737d0) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x3737D8u;
label_3737d8:
    // 0x3737d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3737d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3737dc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3737dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x3737e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3737e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737e4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3737e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3737e8: 0x26460080  addiu       $a2, $s2, 0x80
    ctx->pc = 0x3737e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x3737ec: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3737ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3737f0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x3737f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3737f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3737f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3737f8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3737F8u;
    SET_GPR_U32(ctx, 31, 0x373800u);
    ctx->pc = 0x3737FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3737F8u;
    // 0x3737fc: 0x27aa00bc  addiu       $t2, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3737F8u, 0x373800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373800u;
label_373800:
    // 0x373800: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x373800u;
    {
        const bool branch_taken_0x373800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373800) {
            ctx->pc = 0x373858u;
            goto label_373858;
        }
    }
    ctx->pc = 0x373808u;
    // 0x373808: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x373808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x37380c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37380cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373810: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x373810u;
    SET_GPR_U32(ctx, 31, 0x373818u);
    ctx->pc = 0x373814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373810u;
    // 0x373814: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x373810u, 0x373818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373818u;
label_373818:
    // 0x373818: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x373818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37381c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x37381Cu;
    SET_GPR_U32(ctx, 31, 0x373824u);
    ctx->pc = 0x373820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37381Cu;
    // 0x373820: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x37381Cu, 0x373824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373824u;
label_373824:
    // 0x373824: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x373824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373828: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x373828u;
    SET_GPR_U32(ctx, 31, 0x373830u);
    ctx->pc = 0x37382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373828u;
    // 0x37382c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x373828u, 0x373830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373830u;
label_373830:
    // 0x373830: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373834: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x373834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x373838: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373838u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x37383c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x37383Cu;
    SET_GPR_U32(ctx, 31, 0x373844u);
    ctx->pc = 0x373840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37383Cu;
    // 0x373840: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x37383Cu, 0x373844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373844u;
label_373844:
    // 0x373844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373848: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373848u;
    SET_GPR_U32(ctx, 31, 0x373850u);
    ctx->pc = 0x37384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373848u;
    // 0x37384c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373848u, 0x373850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373850u;
label_373850:
    // 0x373850: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x373850u;
    {
        const bool branch_taken_0x373850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373850) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373858u;
label_373858:
    // 0x373858: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x373858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x37385c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37385Cu;
    {
        const bool branch_taken_0x37385c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x373860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37385Cu;
        // 0x373860: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37385c) {
            ctx->pc = 0x373870u;
            goto label_373870;
        }
    }
    ctx->pc = 0x373864u;
    // 0x373864: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x373864u;
    {
        const bool branch_taken_0x373864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373864) {
            ctx->pc = 0x3738F0u;
            goto label_3738f0;
        }
    }
    ctx->pc = 0x37386Cu;
    // 0x37386c: 0x0  nop
    ctx->pc = 0x37386cu;
    // NOP
label_373870:
    // 0x373870: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x373870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x373874: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x373874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x373878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x373878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37387c: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x37387cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x373880: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x373880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x373884: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x373884u;
    {
        const bool branch_taken_0x373884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x373884) {
            ctx->pc = 0x3738C0u;
            goto label_3738c0;
        }
    }
    ctx->pc = 0x37388Cu;
    // 0x37388c: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x37388cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x373890: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x373890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x373894: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373894u;
    {
        const bool branch_taken_0x373894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373894u;
        // 0x373898: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373894) {
            ctx->pc = 0x3738E8u;
            goto label_3738e8;
        }
    }
    ctx->pc = 0x37389Cu;
    // 0x37389c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3738a0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3738a0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3738a4: 0x0  nop
    ctx->pc = 0x3738a4u;
    // NOP
    // 0x3738a8: 0x0  nop
    ctx->pc = 0x3738a8u;
    // NOP
    // 0x3738ac: 0x2010  mfhi        $a0
    ctx->pc = 0x3738acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3738b0: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3738b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3738b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3738B4u;
    {
        const bool branch_taken_0x3738b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3738B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738B4u;
        // 0x3738b8: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738b4) {
            ctx->pc = 0x3738E8u;
            goto label_3738e8;
        }
    }
    ctx->pc = 0x3738BCu;
    // 0x3738bc: 0x0  nop
    ctx->pc = 0x3738bcu;
    // NOP
label_3738c0:
    // 0x3738c0: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x3738c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3738c4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3738c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3738c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3738C8u;
    {
        const bool branch_taken_0x3738c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3738c8) {
            ctx->pc = 0x3738E8u;
            goto label_3738e8;
        }
    }
    ctx->pc = 0x3738D0u;
    // 0x3738d0: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3738d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3738d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3738d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3738d8: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x3738d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3738dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3738DCu;
    {
        const bool branch_taken_0x3738dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3738E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738DCu;
        // 0x3738e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738dc) {
            ctx->pc = 0x3738F0u;
            goto label_3738f0;
        }
    }
    ctx->pc = 0x3738E4u;
    // 0x3738e4: 0x0  nop
    ctx->pc = 0x3738e4u;
    // NOP
label_3738e8:
    // 0x3738e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3738e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3738ec: 0x0  nop
    ctx->pc = 0x3738ecu;
    // NOP
label_3738f0:
    // 0x3738f0: 0x14600167  bnez        $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x3738F0u;
    {
        const bool branch_taken_0x3738f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3738F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738F0u;
        // 0x3738f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738f0) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x3738F8u;
    // 0x3738f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3738F8u;
    SET_GPR_U32(ctx, 31, 0x373900u);
    ctx->pc = 0x3738FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3738F8u;
    // 0x3738fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3738F8u, 0x373900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373900u;
label_373900:
    // 0x373900: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x373900u;
    {
        const bool branch_taken_0x373900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373900) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373908u;
label_373908:
    // 0x373908: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x373908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x37390c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37390cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x373910: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x373910u;
    SET_GPR_U32(ctx, 31, 0x373918u);
    ctx->pc = 0x373914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373910u;
    // 0x373914: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x373910u, 0x373918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373918u;
label_373918:
    // 0x373918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x373918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37391c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37391Cu;
    {
        const bool branch_taken_0x37391c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x373920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37391Cu;
        // 0x373920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37391c) {
            ctx->pc = 0x373938u;
            goto label_373938;
        }
    }
    ctx->pc = 0x373924u;
    // 0x373924: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373924u;
    SET_GPR_U32(ctx, 31, 0x37392Cu);
    ctx->pc = 0x373928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373924u;
    // 0x373928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373924u, 0x37392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37392Cu;
label_37392c:
    // 0x37392c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x37392Cu;
    {
        const bool branch_taken_0x37392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37392c) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373934u;
    // 0x373934: 0x0  nop
    ctx->pc = 0x373934u;
    // NOP
label_373938:
    // 0x373938: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x373938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37393c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x37393cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373940: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373940u;
    {
        const bool branch_taken_0x373940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373940u;
        // 0x373944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373940) {
            ctx->pc = 0x373958u;
            goto label_373958;
        }
    }
    ctx->pc = 0x373948u;
    // 0x373948: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373948u;
    SET_GPR_U32(ctx, 31, 0x373950u);
    ctx->pc = 0x37394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373948u;
    // 0x37394c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373948u, 0x373950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373950u;
label_373950:
    // 0x373950: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x373950u;
    {
        const bool branch_taken_0x373950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373950) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373958u;
label_373958:
    // 0x373958: 0xc097864  jal         func_25E190
    ctx->pc = 0x373958u;
    SET_GPR_U32(ctx, 31, 0x373960u);
    ctx->pc = 0x37395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373958u;
    // 0x37395c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x373958u, 0x373960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373960u;
label_373960:
    // 0x373960: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373960u;
    {
        const bool branch_taken_0x373960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373960u;
        // 0x373964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373960) {
            ctx->pc = 0x373978u;
            goto label_373978;
        }
    }
    ctx->pc = 0x373968u;
    // 0x373968: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373968u;
    SET_GPR_U32(ctx, 31, 0x373970u);
    ctx->pc = 0x37396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373968u;
    // 0x37396c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373968u, 0x373970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373970u;
label_373970:
    // 0x373970: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x373970u;
    {
        const bool branch_taken_0x373970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373970) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373978u;
label_373978:
    // 0x373978: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373978u;
    {
        const bool branch_taken_0x373978 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373978u;
        // 0x37397c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373978) {
            ctx->pc = 0x373988u;
            goto label_373988;
        }
    }
    ctx->pc = 0x373980u;
    // 0x373980: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x373980u;
    {
        const bool branch_taken_0x373980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373980) {
            ctx->pc = 0x3739C0u;
            goto label_3739c0;
        }
    }
    ctx->pc = 0x373988u;
label_373988:
    // 0x373988: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x373988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37398c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x37398cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373990: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373990u;
    {
        const bool branch_taken_0x373990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373990u;
        // 0x373994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373990) {
            ctx->pc = 0x3739A0u;
            goto label_3739a0;
        }
    }
    ctx->pc = 0x373998u;
    // 0x373998: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x373998u;
    {
        const bool branch_taken_0x373998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373998) {
            ctx->pc = 0x3739C0u;
            goto label_3739c0;
        }
    }
    ctx->pc = 0x3739A0u;
label_3739a0:
    // 0x3739a0: 0xc0c085c  jal         func_302170
    ctx->pc = 0x3739A0u;
    SET_GPR_U32(ctx, 31, 0x3739A8u);
    ctx->pc = 0x3739A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739A0u;
    // 0x3739a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x3739A0u, 0x3739A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739A8u;
label_3739a8:
    // 0x3739a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3739a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3739ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3739acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739b0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3739b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3739b4: 0xc0976ac  jal         func_25DAB0
    ctx->pc = 0x3739B4u;
    SET_GPR_U32(ctx, 31, 0x3739BCu);
    ctx->pc = 0x3739B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739B4u;
    // 0x3739b8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DAB0u, 0x3739B4u, 0x3739BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739BCu;
label_3739bc:
    // 0x3739bc: 0x0  nop
    ctx->pc = 0x3739bcu;
    // NOP
label_3739c0:
    // 0x3739c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3739C0u;
    {
        const bool branch_taken_0x3739c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3739C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739C0u;
        // 0x3739c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739c0) {
            ctx->pc = 0x3739D8u;
            goto label_3739d8;
        }
    }
    ctx->pc = 0x3739C8u;
    // 0x3739c8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3739C8u;
    SET_GPR_U32(ctx, 31, 0x3739D0u);
    ctx->pc = 0x3739CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739C8u;
    // 0x3739cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3739C8u, 0x3739D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739D0u;
label_3739d0:
    // 0x3739d0: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x3739D0u;
    {
        const bool branch_taken_0x3739d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3739d0) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x3739D8u;
label_3739d8:
    // 0x3739d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3739d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3739dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3739dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3739e0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3739E0u;
    {
        const bool branch_taken_0x3739e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3739E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739E0u;
        // 0x3739e4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739e0) {
            ctx->pc = 0x3739F8u;
            goto label_3739f8;
        }
    }
    ctx->pc = 0x3739E8u;
    // 0x3739e8: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x3739e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x3739ec: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3739ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3739f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3739F0u;
    {
        const bool branch_taken_0x3739f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3739f0) {
            ctx->pc = 0x373A18u;
            goto label_373a18;
        }
    }
    ctx->pc = 0x3739F8u;
label_3739f8:
    // 0x3739f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3739f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3739fc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3739FCu;
    {
        const bool branch_taken_0x3739fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x373A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739FCu;
        // 0x373a00: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739fc) {
            ctx->pc = 0x373A48u;
            goto label_373a48;
        }
    }
    ctx->pc = 0x373A04u;
    // 0x373a04: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x373a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x373a08: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x373a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x373a0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x373A0Cu;
    {
        const bool branch_taken_0x373a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a0c) {
            ctx->pc = 0x373A48u;
            goto label_373a48;
        }
    }
    ctx->pc = 0x373A14u;
    // 0x373a14: 0x0  nop
    ctx->pc = 0x373a14u;
    // NOP
label_373a18:
    // 0x373a18: 0x8e440560  lw          $a0, 0x560($s2)
    ctx->pc = 0x373a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x373a1c: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x373A1Cu;
    SET_GPR_U32(ctx, 31, 0x373A24u);
    ctx->pc = 0x373A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A1Cu;
    // 0x373a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x373A1Cu, 0x373A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A24u;
label_373a24:
    // 0x373a24: 0x8e440564  lw          $a0, 0x564($s2)
    ctx->pc = 0x373a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x373a28: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x373A28u;
    SET_GPR_U32(ctx, 31, 0x373A30u);
    ctx->pc = 0x373A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A28u;
    // 0x373a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x373A28u, 0x373A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A30u;
label_373a30:
    // 0x373a30: 0x8e440568  lw          $a0, 0x568($s2)
    ctx->pc = 0x373a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x373a34: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x373A34u;
    SET_GPR_U32(ctx, 31, 0x373A3Cu);
    ctx->pc = 0x373A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A34u;
    // 0x373a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x373A34u, 0x373A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A3Cu;
label_373a3c:
    // 0x373a3c: 0x8e44056c  lw          $a0, 0x56C($s2)
    ctx->pc = 0x373a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1388)));
    // 0x373a40: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x373A40u;
    SET_GPR_U32(ctx, 31, 0x373A48u);
    ctx->pc = 0x373A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A40u;
    // 0x373a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x373A40u, 0x373A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A48u;
label_373a48:
    // 0x373a48: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x373a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x373a4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x373a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373a50: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x373a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x373a54: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x373a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x373a58: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x373a58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x373a5c: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x373a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x373a60: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x373a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x373a64: 0x92430577  lbu         $v1, 0x577($s2)
    ctx->pc = 0x373a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1399)));
    // 0x373a68: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x373a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x373a6c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x373a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x373a70: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x373A70u;
    SET_GPR_U32(ctx, 31, 0x373A78u);
    ctx->pc = 0x373A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A70u;
    // 0x373a74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x373A70u, 0x373A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A78u;
label_373a78:
    // 0x373a78: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x373A78u;
    SET_GPR_U32(ctx, 31, 0x373A80u);
    ctx->pc = 0x373A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A78u;
    // 0x373a7c: 0x8e440560  lw          $a0, 0x560($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x373A78u, 0x373A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A80u;
label_373a80:
    // 0x373a80: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x373A80u;
    {
        const bool branch_taken_0x373a80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A80u;
        // 0x373a84: 0xae400560  sw          $zero, 0x560($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a80) {
            ctx->pc = 0x373BA8u;
            goto label_373ba8;
        }
    }
    ctx->pc = 0x373A88u;
    // 0x373a88: 0x92440575  lbu         $a0, 0x575($s2)
    ctx->pc = 0x373a88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1397)));
    // 0x373a8c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x373a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x373a90: 0x246319cc  addiu       $v1, $v1, 0x19CC
    ctx->pc = 0x373a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6604));
    // 0x373a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373a98: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x373a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x373a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373aa0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x373aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373aa4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x373AA4u;
    {
        const bool branch_taken_0x373aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x373aa4) {
            ctx->pc = 0x373B38u;
            goto label_373b38;
        }
    }
    ctx->pc = 0x373AACu;
    // 0x373aac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x373AACu;
    {
        const bool branch_taken_0x373aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373aac) {
            ctx->pc = 0x373AC0u;
            goto label_373ac0;
        }
    }
    ctx->pc = 0x373AB4u;
    // 0x373ab4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x373AB4u;
    {
        const bool branch_taken_0x373ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373ab4) {
            ctx->pc = 0x373BA8u;
            goto label_373ba8;
        }
    }
    ctx->pc = 0x373ABCu;
    // 0x373abc: 0x0  nop
    ctx->pc = 0x373abcu;
    // NOP
label_373ac0:
    // 0x373ac0: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373ac0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373ac4: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373ac4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373ac8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x373ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373acc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x373accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ad0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x373ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373ad4: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x373AD4u;
    SET_GPR_U32(ctx, 31, 0x373ADCu);
    ctx->pc = 0x373AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373AD4u;
    // 0x373ad8: 0x26490020  addiu       $t1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x373AD4u, 0x373ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ADCu;
label_373adc:
    // 0x373adc: 0xae420560  sw          $v0, 0x560($s2)
    ctx->pc = 0x373adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
    // 0x373ae0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x373ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x373ae4: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373ae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373ae8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x373ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373aec: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373aecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373af0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x373af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373af4: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x373AF4u;
    SET_GPR_U32(ctx, 31, 0x373AFCu);
    ctx->pc = 0x373AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373AF4u;
    // 0x373af8: 0x26490020  addiu       $t1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x373AF4u, 0x373AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373AFCu;
label_373afc:
    // 0x373afc: 0xae420564  sw          $v0, 0x564($s2)
    ctx->pc = 0x373afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1380), GPR_U32(ctx, 2));
    // 0x373b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b04: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373b04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373b08: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373b08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373b0c: 0xc0a9ebc  jal         func_2A7AF0
    ctx->pc = 0x373B0Cu;
    SET_GPR_U32(ctx, 31, 0x373B14u);
    ctx->pc = 0x373B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B0Cu;
    // 0x373b10: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7AF0u, 0x373B0Cu, 0x373B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B14u;
label_373b14:
    // 0x373b14: 0xae420568  sw          $v0, 0x568($s2)
    ctx->pc = 0x373b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1384), GPR_U32(ctx, 2));
    // 0x373b18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b1c: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373b1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373b20: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373b20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373b24: 0xc0a9ebc  jal         func_2A7AF0
    ctx->pc = 0x373B24u;
    SET_GPR_U32(ctx, 31, 0x373B2Cu);
    ctx->pc = 0x373B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B24u;
    // 0x373b28: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7AF0u, 0x373B24u, 0x373B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B2Cu;
label_373b2c:
    // 0x373b2c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x373B2Cu;
    {
        const bool branch_taken_0x373b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373B2Cu;
        // 0x373b30: 0xae42056c  sw          $v0, 0x56C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373b2c) {
            ctx->pc = 0x373BA8u;
            goto label_373ba8;
        }
    }
    ctx->pc = 0x373B34u;
    // 0x373b34: 0x0  nop
    ctx->pc = 0x373b34u;
    // NOP
label_373b38:
    // 0x373b38: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373b38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373b3c: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373b3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373b40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x373b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x373b44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x373b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b48: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x373b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373b4c: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x373B4Cu;
    SET_GPR_U32(ctx, 31, 0x373B54u);
    ctx->pc = 0x373B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B4Cu;
    // 0x373b50: 0x26490020  addiu       $t1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x373B4Cu, 0x373B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B54u;
label_373b54:
    // 0x373b54: 0xae420560  sw          $v0, 0x560($s2)
    ctx->pc = 0x373b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
    // 0x373b58: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x373b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x373b5c: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373b5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373b60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x373b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b64: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373b64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373b68: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x373b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373b6c: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x373B6Cu;
    SET_GPR_U32(ctx, 31, 0x373B74u);
    ctx->pc = 0x373B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B6Cu;
    // 0x373b70: 0x26490020  addiu       $t1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x373B6Cu, 0x373B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B74u;
label_373b74:
    // 0x373b74: 0xae420564  sw          $v0, 0x564($s2)
    ctx->pc = 0x373b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1380), GPR_U32(ctx, 2));
    // 0x373b78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b7c: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373b7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373b80: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373b80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373b84: 0xc0a9edc  jal         func_2A7B70
    ctx->pc = 0x373B84u;
    SET_GPR_U32(ctx, 31, 0x373B8Cu);
    ctx->pc = 0x373B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B84u;
    // 0x373b88: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B70u, 0x373B84u, 0x373B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B8Cu;
label_373b8c:
    // 0x373b8c: 0xae420568  sw          $v0, 0x568($s2)
    ctx->pc = 0x373b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1384), GPR_U32(ctx, 2));
    // 0x373b90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b94: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x373b94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x373b98: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x373b98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x373b9c: 0xc0a9edc  jal         func_2A7B70
    ctx->pc = 0x373B9Cu;
    SET_GPR_U32(ctx, 31, 0x373BA4u);
    ctx->pc = 0x373BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B9Cu;
    // 0x373ba0: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B70u, 0x373B9Cu, 0x373BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BA4u;
label_373ba4:
    // 0x373ba4: 0xae42056c  sw          $v0, 0x56C($s2)
    ctx->pc = 0x373ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1388), GPR_U32(ctx, 2));
label_373ba8:
    // 0x373ba8: 0x8642052a  lh          $v0, 0x52A($s2)
    ctx->pc = 0x373ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1322)));
    // 0x373bac: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x373bacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x373bb0: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x373bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x373bb4: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x373bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x373bb8: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x373bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x373bbc: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x373bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x373bc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373bc4: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x373bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_373bc8:
    // 0x373bc8: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x373bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x373bcc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x373bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x373bd0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x373BD0u;
    SET_GPR_U32(ctx, 31, 0x373BD8u);
    ctx->pc = 0x373BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BD0u;
    // 0x373bd4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x373BD0u, 0x373BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BD8u;
label_373bd8:
    // 0x373bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x373bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bdc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x373BDCu;
    {
        const bool branch_taken_0x373bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x373BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BDCu;
        // 0x373be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bdc) {
            ctx->pc = 0x373BF8u;
            goto label_373bf8;
        }
    }
    ctx->pc = 0x373BE4u;
    // 0x373be4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373BE4u;
    SET_GPR_U32(ctx, 31, 0x373BECu);
    ctx->pc = 0x373BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BE4u;
    // 0x373be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373BE4u, 0x373BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BECu;
label_373bec:
    // 0x373bec: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x373BECu;
    {
        const bool branch_taken_0x373bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373bec) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373BF4u;
    // 0x373bf4: 0x0  nop
    ctx->pc = 0x373bf4u;
    // NOP
label_373bf8:
    // 0x373bf8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x373bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x373bfc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x373bfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373c00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373C00u;
    {
        const bool branch_taken_0x373c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C00u;
        // 0x373c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c00) {
            ctx->pc = 0x373C18u;
            goto label_373c18;
        }
    }
    ctx->pc = 0x373C08u;
    // 0x373c08: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373C08u;
    SET_GPR_U32(ctx, 31, 0x373C10u);
    ctx->pc = 0x373C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C08u;
    // 0x373c0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373C08u, 0x373C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C10u;
label_373c10:
    // 0x373c10: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x373C10u;
    {
        const bool branch_taken_0x373c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373c10) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373C18u;
label_373c18:
    // 0x373c18: 0xc097864  jal         func_25E190
    ctx->pc = 0x373C18u;
    SET_GPR_U32(ctx, 31, 0x373C20u);
    ctx->pc = 0x373C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C18u;
    // 0x373c1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x373C18u, 0x373C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C20u;
label_373c20:
    // 0x373c20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373C20u;
    {
        const bool branch_taken_0x373c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C20u;
        // 0x373c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c20) {
            ctx->pc = 0x373C38u;
            goto label_373c38;
        }
    }
    ctx->pc = 0x373C28u;
    // 0x373c28: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373C28u;
    SET_GPR_U32(ctx, 31, 0x373C30u);
    ctx->pc = 0x373C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C28u;
    // 0x373c2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373C28u, 0x373C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C30u;
label_373c30:
    // 0x373c30: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x373C30u;
    {
        const bool branch_taken_0x373c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373c30) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373C38u;
label_373c38:
    // 0x373c38: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373C38u;
    {
        const bool branch_taken_0x373c38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x373C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C38u;
        // 0x373c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c38) {
            ctx->pc = 0x373C48u;
            goto label_373c48;
        }
    }
    ctx->pc = 0x373C40u;
    // 0x373c40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x373C40u;
    {
        const bool branch_taken_0x373c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373c40) {
            ctx->pc = 0x373C80u;
            goto label_373c80;
        }
    }
    ctx->pc = 0x373C48u;
label_373c48:
    // 0x373c48: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x373c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x373c4c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x373c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373c50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373C50u;
    {
        const bool branch_taken_0x373c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C50u;
        // 0x373c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c50) {
            ctx->pc = 0x373C60u;
            goto label_373c60;
        }
    }
    ctx->pc = 0x373C58u;
    // 0x373c58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x373C58u;
    {
        const bool branch_taken_0x373c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373c58) {
            ctx->pc = 0x373C80u;
            goto label_373c80;
        }
    }
    ctx->pc = 0x373C60u;
label_373c60:
    // 0x373c60: 0xc0c085c  jal         func_302170
    ctx->pc = 0x373C60u;
    SET_GPR_U32(ctx, 31, 0x373C68u);
    ctx->pc = 0x373C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C60u;
    // 0x373c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x373C60u, 0x373C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C68u;
label_373c68:
    // 0x373c68: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x373c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x373c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c70: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x373c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x373c74: 0xc0976ac  jal         func_25DAB0
    ctx->pc = 0x373C74u;
    SET_GPR_U32(ctx, 31, 0x373C7Cu);
    ctx->pc = 0x373C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C74u;
    // 0x373c78: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DAB0u, 0x373C74u, 0x373C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C7Cu;
label_373c7c:
    // 0x373c7c: 0x0  nop
    ctx->pc = 0x373c7cu;
    // NOP
label_373c80:
    // 0x373c80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373C80u;
    {
        const bool branch_taken_0x373c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373C80u;
        // 0x373c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c80) {
            ctx->pc = 0x373C98u;
            goto label_373c98;
        }
    }
    ctx->pc = 0x373C88u;
    // 0x373c88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373C88u;
    SET_GPR_U32(ctx, 31, 0x373C90u);
    ctx->pc = 0x373C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C88u;
    // 0x373c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373C88u, 0x373C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C90u;
label_373c90:
    // 0x373c90: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x373C90u;
    {
        const bool branch_taken_0x373c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373c90) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373C98u;
label_373c98:
    // 0x373c98: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x373c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x373c9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x373c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x373ca0: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x373ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x373ca4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x373ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x373ca8: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x373ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x373cac: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x373cacu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x373cb0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x373cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x373cb4: 0x92430577  lbu         $v1, 0x577($s2)
    ctx->pc = 0x373cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1399)));
    // 0x373cb8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x373cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x373cbc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x373cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x373cc0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x373CC0u;
    SET_GPR_U32(ctx, 31, 0x373CC8u);
    ctx->pc = 0x373CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CC0u;
    // 0x373cc4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x373CC0u, 0x373CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CC8u;
label_373cc8:
    // 0x373cc8: 0x8e450560  lw          $a1, 0x560($s2)
    ctx->pc = 0x373cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x373ccc: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x373CCCu;
    SET_GPR_U32(ctx, 31, 0x373CD4u);
    ctx->pc = 0x373CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CCCu;
    // 0x373cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x373CCCu, 0x373CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CD4u;
label_373cd4:
    // 0x373cd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x373CD4u;
    {
        const bool branch_taken_0x373cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373CD4u;
        // 0x373cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373cd4) {
            ctx->pc = 0x373CF0u;
            goto label_373cf0;
        }
    }
    ctx->pc = 0x373CDCu;
    // 0x373cdc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373CDCu;
    SET_GPR_U32(ctx, 31, 0x373CE4u);
    ctx->pc = 0x373CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CDCu;
    // 0x373ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373CDCu, 0x373CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CE4u;
label_373ce4:
    // 0x373ce4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x373CE4u;
    {
        const bool branch_taken_0x373ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373ce4) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373CECu;
    // 0x373cec: 0x0  nop
    ctx->pc = 0x373cecu;
    // NOP
label_373cf0:
    // 0x373cf0: 0x8e450564  lw          $a1, 0x564($s2)
    ctx->pc = 0x373cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x373cf4: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x373CF4u;
    SET_GPR_U32(ctx, 31, 0x373CFCu);
    ctx->pc = 0x373CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CF4u;
    // 0x373cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x373CF4u, 0x373CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CFCu;
label_373cfc:
    // 0x373cfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x373CFCu;
    {
        const bool branch_taken_0x373cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373CFCu;
        // 0x373d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373cfc) {
            ctx->pc = 0x373D18u;
            goto label_373d18;
        }
    }
    ctx->pc = 0x373D04u;
    // 0x373d04: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373D04u;
    SET_GPR_U32(ctx, 31, 0x373D0Cu);
    ctx->pc = 0x373D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D04u;
    // 0x373d08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373D04u, 0x373D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D0Cu;
label_373d0c:
    // 0x373d0c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x373D0Cu;
    {
        const bool branch_taken_0x373d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373d0c) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373D14u;
    // 0x373d14: 0x0  nop
    ctx->pc = 0x373d14u;
    // NOP
label_373d18:
    // 0x373d18: 0xc096c80  jal         func_25B200
    ctx->pc = 0x373D18u;
    SET_GPR_U32(ctx, 31, 0x373D20u);
    ctx->pc = 0x373D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D18u;
    // 0x373d1c: 0x8e440560  lw          $a0, 0x560($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x373D18u, 0x373D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D20u;
label_373d20:
    // 0x373d20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373D20u;
    {
        const bool branch_taken_0x373d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373d20) {
            ctx->pc = 0x373D38u;
            goto label_373d38;
        }
    }
    ctx->pc = 0x373D28u;
    // 0x373d28: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x373d28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373d2c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x373d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
    // 0x373d30: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x373d30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x373d34: 0x7c430070  sq          $v1, 0x70($v0)
    ctx->pc = 0x373d34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 3));
label_373d38:
    // 0x373d38: 0xc096c80  jal         func_25B200
    ctx->pc = 0x373D38u;
    SET_GPR_U32(ctx, 31, 0x373D40u);
    ctx->pc = 0x373D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D38u;
    // 0x373d3c: 0x8e440564  lw          $a0, 0x564($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x373D38u, 0x373D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D40u;
label_373d40:
    // 0x373d40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373D40u;
    {
        const bool branch_taken_0x373d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373d40) {
            ctx->pc = 0x373D58u;
            goto label_373d58;
        }
    }
    ctx->pc = 0x373D48u;
    // 0x373d48: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x373d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373d4c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x373d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
    // 0x373d50: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x373d50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x373d54: 0x7c430070  sq          $v1, 0x70($v0)
    ctx->pc = 0x373d54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 3));
label_373d58:
    // 0x373d58: 0x8e460568  lw          $a2, 0x568($s2)
    ctx->pc = 0x373d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x373d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d60: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x373D60u;
    SET_GPR_U32(ctx, 31, 0x373D68u);
    ctx->pc = 0x373D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D60u;
    // 0x373d64: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x373D60u, 0x373D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D68u;
label_373d68:
    // 0x373d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373D68u;
    {
        const bool branch_taken_0x373d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373D68u;
        // 0x373d6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373d68) {
            ctx->pc = 0x373D80u;
            goto label_373d80;
        }
    }
    ctx->pc = 0x373D70u;
    // 0x373d70: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373D70u;
    SET_GPR_U32(ctx, 31, 0x373D78u);
    ctx->pc = 0x373D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D70u;
    // 0x373d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373D70u, 0x373D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D78u;
label_373d78:
    // 0x373d78: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x373D78u;
    {
        const bool branch_taken_0x373d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373d78) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373D80u;
label_373d80:
    // 0x373d80: 0x8e46056c  lw          $a2, 0x56C($s2)
    ctx->pc = 0x373d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1388)));
    // 0x373d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d88: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x373D88u;
    SET_GPR_U32(ctx, 31, 0x373D90u);
    ctx->pc = 0x373D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D88u;
    // 0x373d8c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x373D88u, 0x373D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D90u;
label_373d90:
    // 0x373d90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x373D90u;
    {
        const bool branch_taken_0x373d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373D90u;
        // 0x373d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373d90) {
            ctx->pc = 0x373DA8u;
            goto label_373da8;
        }
    }
    ctx->pc = 0x373D98u;
    // 0x373d98: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373D98u;
    SET_GPR_U32(ctx, 31, 0x373DA0u);
    ctx->pc = 0x373D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D98u;
    // 0x373d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373D98u, 0x373DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DA0u;
label_373da0:
    // 0x373da0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x373DA0u;
    {
        const bool branch_taken_0x373da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373da0) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373DA8u;
label_373da8:
    // 0x373da8: 0x92430576  lbu         $v1, 0x576($s2)
    ctx->pc = 0x373da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
    // 0x373dac: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x373DACu;
    {
        const bool branch_taken_0x373dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373DACu;
        // 0x373db0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373dac) {
            ctx->pc = 0x373DE8u;
            goto label_373de8;
        }
    }
    ctx->pc = 0x373DB4u;
    // 0x373db4: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x373DB4u;
    SET_GPR_U32(ctx, 31, 0x373DBCu);
    ctx->pc = 0x373DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DB4u;
    // 0x373db8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x373DB4u, 0x373DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DBCu;
label_373dbc:
    // 0x373dbc: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x373dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
    // 0x373dc0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x373dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x373dc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x373dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x373dc8: 0x0  nop
    ctx->pc = 0x373dc8u;
    // NOP
    // 0x373dcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x373dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373dd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x373DD0u;
    {
        const bool branch_taken_0x373dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x373DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373DD0u;
        // 0x373dd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373dd0) {
            ctx->pc = 0x373DE8u;
            goto label_373de8;
        }
    }
    ctx->pc = 0x373DD8u;
    // 0x373dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373ddc: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x373ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x373de0: 0xa2430576  sb          $v1, 0x576($s2)
    ctx->pc = 0x373de0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1398), (uint8_t)GPR_U32(ctx, 3));
    // 0x373de4: 0x0  nop
    ctx->pc = 0x373de4u;
    // NOP
label_373de8:
    // 0x373de8: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x373de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x373dec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x373DECu;
    {
        const bool branch_taken_0x373dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x373DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373DECu;
        // 0x373df0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373dec) {
            ctx->pc = 0x373E00u;
            goto label_373e00;
        }
    }
    ctx->pc = 0x373DF4u;
    // 0x373df4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x373DF4u;
    {
        const bool branch_taken_0x373df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373df4) {
            ctx->pc = 0x373E80u;
            goto label_373e80;
        }
    }
    ctx->pc = 0x373DFCu;
    // 0x373dfc: 0x0  nop
    ctx->pc = 0x373dfcu;
    // NOP
label_373e00:
    // 0x373e00: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x373e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x373e04: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x373e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x373e08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x373e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x373e0c: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x373e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x373e10: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x373e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x373e14: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x373E14u;
    {
        const bool branch_taken_0x373e14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x373e14) {
            ctx->pc = 0x373E50u;
            goto label_373e50;
        }
    }
    ctx->pc = 0x373E1Cu;
    // 0x373e1c: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x373e1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x373e20: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x373e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x373e24: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373E24u;
    {
        const bool branch_taken_0x373e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373E24u;
        // 0x373e28: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373e24) {
            ctx->pc = 0x373E78u;
            goto label_373e78;
        }
    }
    ctx->pc = 0x373E2Cu;
    // 0x373e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373e30: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x373e30u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x373e34: 0x0  nop
    ctx->pc = 0x373e34u;
    // NOP
    // 0x373e38: 0x0  nop
    ctx->pc = 0x373e38u;
    // NOP
    // 0x373e3c: 0x2010  mfhi        $a0
    ctx->pc = 0x373e3cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x373e40: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x373e40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x373e44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x373E44u;
    {
        const bool branch_taken_0x373e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373E44u;
        // 0x373e48: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373e44) {
            ctx->pc = 0x373E78u;
            goto label_373e78;
        }
    }
    ctx->pc = 0x373E4Cu;
    // 0x373e4c: 0x0  nop
    ctx->pc = 0x373e4cu;
    // NOP
label_373e50:
    // 0x373e50: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x373e50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x373e54: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x373e54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x373e58: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x373E58u;
    {
        const bool branch_taken_0x373e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373e58) {
            ctx->pc = 0x373E78u;
            goto label_373e78;
        }
    }
    ctx->pc = 0x373E60u;
    // 0x373e60: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x373e60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x373e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373e68: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x373e68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x373e6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373E6Cu;
    {
        const bool branch_taken_0x373e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373E6Cu;
        // 0x373e70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373e6c) {
            ctx->pc = 0x373E80u;
            goto label_373e80;
        }
    }
    ctx->pc = 0x373E74u;
    // 0x373e74: 0x0  nop
    ctx->pc = 0x373e74u;
    // NOP
label_373e78:
    // 0x373e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373e7c: 0x0  nop
    ctx->pc = 0x373e7cu;
    // NOP
label_373e80:
    // 0x373e80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x373E80u;
    {
        const bool branch_taken_0x373e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373E80u;
        // 0x373e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373e80) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373E88u;
    // 0x373e88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x373E88u;
    SET_GPR_U32(ctx, 31, 0x373E90u);
    ctx->pc = 0x373E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E88u;
    // 0x373e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x373E88u, 0x373E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E90u;
label_373e90:
    // 0x373e90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x373e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373e94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x373e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x373e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x373EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373EA0u;
        // 0x373ea4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373EA8u;
}
