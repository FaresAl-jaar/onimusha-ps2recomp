#include <cstdio>
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

// Function: sub_00177150
// Address: 0x177150 - 0x177610
void sub_00177150_0x177150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177150_0x177150");
#endif

    switch (ctx->pc) {
        case 0x177168u: goto label_177168;
        case 0x177170u: goto label_177170;
        case 0x1771a8u: goto label_1771a8;
        case 0x1771fcu: goto label_1771fc;
        case 0x177200u: goto label_177200;
        case 0x177234u: goto label_177234;
        case 0x177240u: goto label_177240;
        case 0x177258u: goto label_177258;
        case 0x177260u: goto label_177260;
        case 0x177268u: goto label_177268;
        case 0x177278u: goto label_177278;
        case 0x177324u: goto label_177324;
        case 0x1773b4u: goto label_1773b4;
        case 0x177454u: goto label_177454;
        case 0x177460u: goto label_177460;
        case 0x177468u: goto label_177468;
        case 0x177474u: goto label_177474;
        case 0x177480u: goto label_177480;
        case 0x177488u: goto label_177488;
        case 0x177494u: goto label_177494;
        case 0x1774b0u: goto label_1774b0;
        case 0x1774bcu: goto label_1774bc;
        case 0x1774c8u: goto label_1774c8;
        case 0x1774d4u: goto label_1774d4;
        case 0x1774e0u: goto label_1774e0;
        case 0x1774f0u: goto label_1774f0;
        case 0x177504u: goto label_177504;
        case 0x177510u: goto label_177510;
        case 0x17751cu: goto label_17751c;
        case 0x177528u: goto label_177528;
        case 0x177548u: goto label_177548;
        case 0x177554u: goto label_177554;
        case 0x177574u: goto label_177574;
        case 0x177580u: goto label_177580;
        case 0x177588u: goto label_177588;
        case 0x177594u: goto label_177594;
        case 0x17759cu: goto label_17759c;
        case 0x1775acu: goto label_1775ac;
        case 0x1775bcu: goto label_1775bc;
        case 0x1775ccu: goto label_1775cc;
        case 0x1775d8u: goto label_1775d8;
        case 0x1775e0u: goto label_1775e0;
        case 0x1775f0u: goto label_1775f0;
        case 0x1775fcu: goto label_1775fc;
        case 0x177608u: goto label_177608;
        default: break;
    }

    ctx->pc = 0x177150u;

    // 0x177150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x177154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17715c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17715cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177160: 0xc05e328  jal         func_178CA0
    ctx->pc = 0x177160u;
    SET_GPR_U32(ctx, 31, 0x177168u);
    ctx->pc = 0x177164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177160u;
    // 0x177164: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178CA0u, 0x177160u, 0x177168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177168u;
label_177168:
    // 0x177168: 0xc05dc04  jal         func_177010
    ctx->pc = 0x177168u;
    SET_GPR_U32(ctx, 31, 0x177170u);
    ctx->pc = 0x177010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177010u, 0x177168u, 0x177170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177170u;
label_177170:
    // 0x177170: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x177174: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x177174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x177178: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x177178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x17717c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17717cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177180: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x177180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x177184: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177184u;
    {
        const bool branch_taken_0x177184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177184u;
        // 0x177188: 0x3c024248  lui         $v0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177184) {
            ctx->pc = 0x177198u;
            goto label_177198;
        }
    }
    ctx->pc = 0x17718Cu;
    // 0x17718c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17718Cu;
    {
        const bool branch_taken_0x17718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17718Cu;
        // 0x177190: 0xaf828078  sw          $v0, -0x7F88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17718c) {
            ctx->pc = 0x1771A0u;
            goto label_1771a0;
        }
    }
    ctx->pc = 0x177194u;
    // 0x177194: 0x0  nop
    ctx->pc = 0x177194u;
    // NOP
label_177198:
    // 0x177198: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x177198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x17719c: 0xaf828078  sw          $v0, -0x7F88($gp)
    ctx->pc = 0x17719cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934648), GPR_U32(ctx, 2));
label_1771a0:
    // 0x1771a0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1771A0u;
    SET_GPR_U32(ctx, 31, 0x1771A8u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1771A0u, 0x1771A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771A8u;
label_1771a8:
    // 0x1771a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1771a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1771ac: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1771b0: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x1771b4: 0x3443a9e5  ori         $v1, $v0, 0xA9E5
    ctx->pc = 0x1771b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1771b8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1771bc: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1771bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1771c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1771c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1771c4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1771c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1771c8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1771c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1771cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1771ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1771d0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1771d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1771d4: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x1771d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x1771d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1771d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1771dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1771dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1771e0: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x1771e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1771e4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x1771e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1771e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1771e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1771ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1771ECu;
    {
        const bool branch_taken_0x1771ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1771ec) {
            ctx->pc = 0x177200u;
            goto label_177200;
        }
    }
    ctx->pc = 0x1771F4u;
    // 0x1771f4: 0xc081bda  jal         func_206F68
    ctx->pc = 0x1771F4u;
    SET_GPR_U32(ctx, 31, 0x1771FCu);
    ctx->pc = 0x206F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206F68u, 0x1771F4u, 0x1771FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771FCu;
label_1771fc:
    // 0x1771fc: 0x0  nop
    ctx->pc = 0x1771fcu;
    // NOP
label_177200:
    // 0x177200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177204: 0x0  nop
    ctx->pc = 0x177204u;
    // NOP
    // 0x177208: 0x0  nop
    ctx->pc = 0x177208u;
    // NOP
    // 0x17720c: 0x0  nop
    ctx->pc = 0x17720cu;
    // NOP
    // 0x177210: 0x0  nop
    ctx->pc = 0x177210u;
    // NOP
    // 0x177214: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x177214u;
    {
        const bool branch_taken_0x177214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177214) {
            ctx->pc = 0x177200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177200;
        }
    }
    ctx->pc = 0x17721Cu;
    // 0x17721c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x177220: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x177224: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x177224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x177228: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17722c: 0xc05ec74  jal         func_17B1D0
    ctx->pc = 0x17722Cu;
    SET_GPR_U32(ctx, 31, 0x177234u);
    ctx->pc = 0x177230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17722Cu;
    // 0x177230: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1D0u, 0x17722Cu, 0x177234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177234u;
label_177234:
    // 0x177234: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x177234u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177238: 0xc061c84  jal         func_187210
    ctx->pc = 0x177238u;
    SET_GPR_U32(ctx, 31, 0x177240u);
    ctx->pc = 0x17723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177238u;
    // 0x17723c: 0x262423b0  addiu       $a0, $s1, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187210u, 0x177238u, 0x177240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177240u;
label_177240:
    // 0x177240: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x177240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177244: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x177244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x177248: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x177248u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x17724c: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x17724cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177250: 0xc061c38  jal         func_1870E0
    ctx->pc = 0x177250u;
    SET_GPR_U32(ctx, 31, 0x177258u);
    ctx->pc = 0x177254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177250u;
    // 0x177254: 0x262423b0  addiu       $a0, $s1, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870E0u, 0x177250u, 0x177258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177258u;
label_177258:
    // 0x177258: 0xc05e328  jal         func_178CA0
    ctx->pc = 0x177258u;
    SET_GPR_U32(ctx, 31, 0x177260u);
    ctx->pc = 0x17725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177258u;
    // 0x17725c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178CA0u, 0x177258u, 0x177260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177260u;
label_177260:
    // 0x177260: 0xc05e0dc  jal         func_178370
    ctx->pc = 0x177260u;
    SET_GPR_U32(ctx, 31, 0x177268u);
    ctx->pc = 0x177264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177260u;
    // 0x177264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178370u, 0x177260u, 0x177268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177268u;
label_177268:
    // 0x177268: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x17726c: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x17726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x177270: 0xc05e360  jal         func_178D80
    ctx->pc = 0x177270u;
    SET_GPR_U32(ctx, 31, 0x177278u);
    ctx->pc = 0x177274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177270u;
    // 0x177274: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x177270u, 0x177278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177278u;
label_177278:
    // 0x177278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17727c: 0x12000076  beqz        $s0, . + 4 + (0x76 << 2)
    ctx->pc = 0x17727Cu;
    {
        const bool branch_taken_0x17727c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17727c) {
            ctx->pc = 0x177458u;
            goto label_177458;
        }
    }
    ctx->pc = 0x177284u;
    // 0x177284: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177288: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17728c: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x17728cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x177290: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177294: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x177294u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x177298: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x17729c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x17729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1772a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1772a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1772a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1772a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1772a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1772a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772ac: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x1772acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1772b0: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1772b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1772b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1772b8: 0x262423b0  addiu       $a0, $s1, 0x23B0
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9136));
    // 0x1772bc: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1772bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1772c0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1772c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1772c4: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1772c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1772c8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1772c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1772cc: 0x8c28f014  lw          $t0, -0xFEC($at)
    ctx->pc = 0x1772ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x1772d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1772d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1772d4: 0x70024b89  pcpyld      $t1, $zero, $v0
    ctx->pc = 0x1772d4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1772d8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1772d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1772dc: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1772dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1772e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1772e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1772e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1772e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1772e8: 0xdd080020  ld          $t0, 0x20($t0)
    ctx->pc = 0x1772e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1772ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1772ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1772f0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1772f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1772f4: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x1772f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x1772f8: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x1772f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x1772fc: 0x8c26f014  lw          $a2, -0xFEC($at)
    ctx->pc = 0x1772fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F014u));
    // 0x177300: 0xdcc60020  ld          $a2, 0x20($a2)
    ctx->pc = 0x177300u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x177304: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x177304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x177308: 0xfe060010  sd          $a2, 0x10($s0)
    ctx->pc = 0x177308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
    // 0x17730c: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x17730cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x177310: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x177314: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x177314u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x177318: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x177318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17731c: 0xc061c60  jal         func_187180
    ctx->pc = 0x17731Cu;
    SET_GPR_U32(ctx, 31, 0x177324u);
    ctx->pc = 0x177320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17731Cu;
    // 0x177320: 0xfe000008  sd          $zero, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x17731Cu, 0x177324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177324u;
label_177324:
    // 0x177324: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177328: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x177328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17732c: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x17732cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x177330: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177334: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x177334u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x177338: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x177338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x17733c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x17733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x177340: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x177340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x177344: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x177344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x177348: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17734c: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x17734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x177350: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x177350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x177354: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x177354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177358: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x177358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x17735c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x17735cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x177360: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x177360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x177364: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x177364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x177368: 0x262423b0  addiu       $a0, $s1, 0x23B0
    ctx->pc = 0x177368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9136));
    // 0x17736c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17736cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x177370: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x177370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x177374: 0x8c28f014  lw          $t0, -0xFEC($at)
    ctx->pc = 0x177374u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F014u));
    // 0x177378: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x177378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17737c: 0xdd080020  ld          $t0, 0x20($t0)
    ctx->pc = 0x17737cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x177380: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x177380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x177384: 0xfe080010  sd          $t0, 0x10($s0)
    ctx->pc = 0x177384u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 8));
    // 0x177388: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x177388u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x17738c: 0x8c28f014  lw          $t0, -0xFEC($at)
    ctx->pc = 0x17738cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F014u));
    // 0x177390: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x177390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x177394: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x177394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x177398: 0xdd080020  ld          $t0, 0x20($t0)
    ctx->pc = 0x177398u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x17739c: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x17739cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x1773a0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1773a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1773a4: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1773a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1773a8: 0xfe000018  sd          $zero, 0x18($s0)
    ctx->pc = 0x1773a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
    // 0x1773ac: 0xc061c70  jal         func_1871C0
    ctx->pc = 0x1773ACu;
    SET_GPR_U32(ctx, 31, 0x1773B4u);
    ctx->pc = 0x1773B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773ACu;
    // 0x1773b0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871C0u, 0x1773ACu, 0x1773B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773B4u;
label_1773b4:
    // 0x1773b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1773b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1773b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1773bc: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x1773bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1773c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1773c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1773c4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1773c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1773c8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1773c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1773cc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1773ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1773d0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1773d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1773d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1773d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1773d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1773d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773dc: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x1773dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1773e0: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1773e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1773e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1773e8: 0x262423b0  addiu       $a0, $s1, 0x23B0
    ctx->pc = 0x1773e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9136));
    // 0x1773ec: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1773ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1773f0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1773f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1773f4: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1773f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1773f8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1773fc: 0x8c28f014  lw          $t0, -0xFEC($at)
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x177400: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177404: 0x70024b89  pcpyld      $t1, $zero, $v0
    ctx->pc = 0x177404u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x177408: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17740c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x17740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x177410: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x177410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x177414: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x177418: 0xdd080020  ld          $t0, 0x20($t0)
    ctx->pc = 0x177418u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x17741c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17741cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x177420: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x177420u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x177424: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x177424u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x177428: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x177428u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x17742c: 0x8c26f014  lw          $a2, -0xFEC($at)
    ctx->pc = 0x17742cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F014u));
    // 0x177430: 0xdcc60020  ld          $a2, 0x20($a2)
    ctx->pc = 0x177430u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x177434: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x177434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x177438: 0xfe060010  sd          $a2, 0x10($s0)
    ctx->pc = 0x177438u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
    // 0x17743c: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x17743cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x177440: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x177440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x177444: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x177444u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x177448: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x177448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17744c: 0xc061c60  jal         func_187180
    ctx->pc = 0x17744Cu;
    SET_GPR_U32(ctx, 31, 0x177454u);
    ctx->pc = 0x177450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17744Cu;
    // 0x177450: 0xfe000008  sd          $zero, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x17744Cu, 0x177454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177454u;
label_177454:
    // 0x177454: 0x0  nop
    ctx->pc = 0x177454u;
    // NOP
label_177458:
    // 0x177458: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x177458u;
    SET_GPR_U32(ctx, 31, 0x177460u);
    ctx->pc = 0x17745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177458u;
    // 0x17745c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x177458u, 0x177460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177460u;
label_177460:
    // 0x177460: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x177460u;
    SET_GPR_U32(ctx, 31, 0x177468u);
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x177460u, 0x177468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177468u;
label_177468:
    // 0x177468: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x17746c: 0xc04c358  jal         func_130D60
    ctx->pc = 0x17746Cu;
    SET_GPR_U32(ctx, 31, 0x177474u);
    ctx->pc = 0x177470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17746Cu;
    // 0x177470: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130D60u, 0x17746Cu, 0x177474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177474u;
label_177474:
    // 0x177474: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x177474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x177478: 0xc0c7f0c  jal         func_31FC30
    ctx->pc = 0x177478u;
    SET_GPR_U32(ctx, 31, 0x177480u);
    ctx->pc = 0x17747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177478u;
    // 0x17747c: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FC30u, 0x177478u, 0x177480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177480u;
label_177480:
    // 0x177480: 0xc08d1fc  jal         func_2347F0
    ctx->pc = 0x177480u;
    SET_GPR_U32(ctx, 31, 0x177488u);
    ctx->pc = 0x2347F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347F0u, 0x177480u, 0x177488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177488u;
label_177488:
    // 0x177488: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x177488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17748c: 0xc051d0c  jal         func_147430
    ctx->pc = 0x17748Cu;
    SET_GPR_U32(ctx, 31, 0x177494u);
    ctx->pc = 0x177490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17748Cu;
    // 0x177490: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147430u, 0x17748Cu, 0x177494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177494u;
label_177494:
    // 0x177494: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x177494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177498: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x177498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x17749c: 0xac223010  sw          $v0, 0x3010($at)
    ctx->pc = 0x17749cu;
    runtime->Store32(rdram, ctx, 0x10003010u, GPR_U32(ctx, 2)); // MMIO: 0x10003010
    // 0x1774a0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1774a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1774a4: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x1774a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1774a8: 0xc04c7f4  jal         func_131FD0
    ctx->pc = 0x1774A8u;
    SET_GPR_U32(ctx, 31, 0x1774B0u);
    ctx->pc = 0x1774ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774A8u;
    // 0x1774ac: 0x24846700  addiu       $a0, $a0, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131FD0u, 0x1774A8u, 0x1774B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774B0u;
label_1774b0:
    // 0x1774b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1774b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1774b4: 0xc04fb18  jal         func_13EC60
    ctx->pc = 0x1774B4u;
    SET_GPR_U32(ctx, 31, 0x1774BCu);
    ctx->pc = 0x1774B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774B4u;
    // 0x1774b8: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC60u, 0x1774B4u, 0x1774BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774BCu;
label_1774bc:
    // 0x1774bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1774bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1774c0: 0xc04fb18  jal         func_13EC60
    ctx->pc = 0x1774C0u;
    SET_GPR_U32(ctx, 31, 0x1774C8u);
    ctx->pc = 0x1774C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774C0u;
    // 0x1774c4: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC60u, 0x1774C0u, 0x1774C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774C8u;
label_1774c8:
    // 0x1774c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1774c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1774cc: 0xc04fb18  jal         func_13EC60
    ctx->pc = 0x1774CCu;
    SET_GPR_U32(ctx, 31, 0x1774D4u);
    ctx->pc = 0x1774D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774CCu;
    // 0x1774d0: 0x2484cc80  addiu       $a0, $a0, -0x3380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC60u, 0x1774CCu, 0x1774D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774D4u;
label_1774d4:
    // 0x1774d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1774d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1774d8: 0xc04fb18  jal         func_13EC60
    ctx->pc = 0x1774D8u;
    SET_GPR_U32(ctx, 31, 0x1774E0u);
    ctx->pc = 0x1774DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774D8u;
    // 0x1774dc: 0x2484cca0  addiu       $a0, $a0, -0x3360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC60u, 0x1774D8u, 0x1774E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774E0u;
label_1774e0:
    // 0x1774e0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1774e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1774e4: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1774e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1774e8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1774E8u;
    SET_GPR_U32(ctx, 31, 0x1774F0u);
    ctx->pc = 0x1774ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774E8u;
    // 0x1774ec: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1774E8u, 0x1774F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774F0u;
label_1774f0:
    // 0x1774f0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1774f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1774f4: 0xae22215c  sw          $v0, 0x215C($s1)
    ctx->pc = 0x1774f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8540), GPR_U32(ctx, 2));
    // 0x1774f8: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1774f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1774fc: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1774FCu;
    SET_GPR_U32(ctx, 31, 0x177504u);
    ctx->pc = 0x177500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774FCu;
    // 0x177500: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1774FCu, 0x177504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177504u;
label_177504:
    // 0x177504: 0xae222160  sw          $v0, 0x2160($s1)
    ctx->pc = 0x177504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8544), GPR_U32(ctx, 2));
    // 0x177508: 0xc05f8a8  jal         func_17E2A0
    ctx->pc = 0x177508u;
    SET_GPR_U32(ctx, 31, 0x177510u);
    ctx->pc = 0x17750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177508u;
    // 0x17750c: 0x27848660  addiu       $a0, $gp, -0x79A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E2A0u, 0x177508u, 0x177510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177510u;
label_177510:
    // 0x177510: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177514: 0xc04c8c0  jal         func_132300
    ctx->pc = 0x177514u;
    SET_GPR_U32(ctx, 31, 0x17751Cu);
    ctx->pc = 0x177518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177514u;
    // 0x177518: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132300u, 0x177514u, 0x17751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17751Cu;
label_17751c:
    // 0x17751c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x17751cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x177520: 0xc0f015c  jal         func_3C0570
    ctx->pc = 0x177520u;
    SET_GPR_U32(ctx, 31, 0x177528u);
    ctx->pc = 0x177524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177520u;
    // 0x177524: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0570u, 0x177520u, 0x177528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177528u;
label_177528:
    // 0x177528: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x17752c: 0x9022c638  lbu         $v0, -0x39C8($at)
    ctx->pc = 0x17752cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x86C638u));
    // 0x177530: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x177530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x177534: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x177534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    { static uint32_t n=0; ++n; if (n<=5||(n%300)==0) fprintf(stderr,"[gate 177538] n=%u v0=0x%x byte86c638=0x%x\n",n,GPR_U32(ctx,2),(unsigned)READ8(0x86c638u)); }
    // 0x177538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177538u;
    {
        const bool branch_taken_0x177538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177538u;
        // 0x17753c: 0x3c040087  lui         $a0, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177538) {
            ctx->pc = 0x177548u;
            goto label_177548;
        }
    }
    ctx->pc = 0x177540u;
    // 0x177540: 0xc0740d4  jal         func_1D0350
    ctx->pc = 0x177540u;
    SET_GPR_U32(ctx, 31, 0x177548u);
    ctx->pc = 0x177544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177540u;
    // 0x177544: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0350u, 0x177540u, 0x177548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177548u;
label_177548:
    // 0x177548: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17754c: 0xc063d50  jal         func_18F540
    ctx->pc = 0x17754Cu;
    SET_GPR_U32(ctx, 31, 0x177554u);
    ctx->pc = 0x177550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17754Cu;
    // 0x177550: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F540u, 0x17754Cu, 0x177554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177554u;
label_177554:
    // 0x177554: 0x8e2223a8  lw          $v0, 0x23A8($s1)
    ctx->pc = 0x177554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9128)));
    // 0x177558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177558u;
    {
        const bool branch_taken_0x177558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177558) {
            ctx->pc = 0x177568u;
            goto label_177568;
        }
    }
    ctx->pc = 0x177560u;
    // 0x177560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177564: 0xae2223a8  sw          $v0, 0x23A8($s1)
    ctx->pc = 0x177564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9128), GPR_U32(ctx, 2));
label_177568:
    // 0x177568: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x17756c: 0xc04c7f8  jal         func_131FE0
    ctx->pc = 0x17756Cu;
    SET_GPR_U32(ctx, 31, 0x177574u);
    ctx->pc = 0x177570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17756Cu;
    // 0x177570: 0x24846700  addiu       $a0, $a0, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131FE0u, 0x17756Cu, 0x177574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177574u;
label_177574:
    // 0x177574: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x177574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x177578: 0xc094fd0  jal         func_253F40
    ctx->pc = 0x177578u;
    SET_GPR_U32(ctx, 31, 0x177580u);
    ctx->pc = 0x17757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177578u;
    // 0x17757c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F40u, 0x177578u, 0x177580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177580u;
label_177580:
    // 0x177580: 0xc05f8ac  jal         func_17E2B0
    ctx->pc = 0x177580u;
    SET_GPR_U32(ctx, 31, 0x177588u);
    ctx->pc = 0x177584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177580u;
    // 0x177584: 0x27848660  addiu       $a0, $gp, -0x79A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E2B0u, 0x177580u, 0x177588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177588u;
label_177588:
    // 0x177588: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17758c: 0xc05e7fc  jal         func_179FF0
    ctx->pc = 0x17758Cu;
    SET_GPR_U32(ctx, 31, 0x177594u);
    ctx->pc = 0x177590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17758Cu;
    // 0x177590: 0x2484cdb0  addiu       $a0, $a0, -0x3250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FF0u, 0x17758Cu, 0x177594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177594u;
label_177594:
    // 0x177594: 0xc05e498  jal         func_179260
    ctx->pc = 0x177594u;
    SET_GPR_U32(ctx, 31, 0x17759Cu);
    ctx->pc = 0x177598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177594u;
    // 0x177598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179260u, 0x177594u, 0x17759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17759Cu;
label_17759c:
    // 0x17759c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1775a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1775a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1775a4: 0xc04fb38  jal         func_13ECE0
    ctx->pc = 0x1775A4u;
    SET_GPR_U32(ctx, 31, 0x1775ACu);
    ctx->pc = 0x1775A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775A4u;
    // 0x1775a8: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECE0u, 0x1775A4u, 0x1775ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775ACu;
label_1775ac:
    // 0x1775ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1775acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1775b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1775b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1775b4: 0xc04fb38  jal         func_13ECE0
    ctx->pc = 0x1775B4u;
    SET_GPR_U32(ctx, 31, 0x1775BCu);
    ctx->pc = 0x1775B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775B4u;
    // 0x1775b8: 0x2484cc80  addiu       $a0, $a0, -0x3380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECE0u, 0x1775B4u, 0x1775BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775BCu;
label_1775bc:
    // 0x1775bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1775bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1775c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1775c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1775c4: 0xc04fb38  jal         func_13ECE0
    ctx->pc = 0x1775C4u;
    SET_GPR_U32(ctx, 31, 0x1775CCu);
    ctx->pc = 0x1775C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775C4u;
    // 0x1775c8: 0x2484cca0  addiu       $a0, $a0, -0x3360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECE0u, 0x1775C4u, 0x1775CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775CCu;
label_1775cc:
    // 0x1775cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1775ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1775d0: 0xc051d28  jal         func_1474A0
    ctx->pc = 0x1775D0u;
    SET_GPR_U32(ctx, 31, 0x1775D8u);
    ctx->pc = 0x1775D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775D0u;
    // 0x1775d4: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1474A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1474A0u, 0x1775D0u, 0x1775D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775D8u;
label_1775d8:
    // 0x1775d8: 0xc05e514  jal         func_179450
    ctx->pc = 0x1775D8u;
    SET_GPR_U32(ctx, 31, 0x1775E0u);
    ctx->pc = 0x1775DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775D8u;
    // 0x1775dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179450u, 0x1775D8u, 0x1775E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775E0u;
label_1775e0:
    // 0x1775e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1775e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1775e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1775e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1775e8: 0xc04fb38  jal         func_13ECE0
    ctx->pc = 0x1775E8u;
    SET_GPR_U32(ctx, 31, 0x1775F0u);
    ctx->pc = 0x1775ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775E8u;
    // 0x1775ec: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECE0u, 0x1775E8u, 0x1775F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775F0u;
label_1775f0:
    // 0x1775f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1775f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1775f4: 0xc05ee4c  jal         func_17B930
    ctx->pc = 0x1775F4u;
    SET_GPR_U32(ctx, 31, 0x1775FCu);
    ctx->pc = 0x1775F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775F4u;
    // 0x1775f8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B930u, 0x1775F4u, 0x1775FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775FCu;
label_1775fc:
    // 0x1775fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1775fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177600: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x177600u;
    SET_GPR_U32(ctx, 31, 0x177608u);
    ctx->pc = 0x177604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177600u;
    // 0x177604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x177600u, 0x177608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177608u;
label_177608:
    // 0x177608: 0x1000fed7  b           . + 4 + (-0x129 << 2)
    ctx->pc = 0x177608u;
    {
        const bool branch_taken_0x177608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177608) {
            ctx->pc = 0x177168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177168;
        }
    }
    ctx->pc = 0x177610u;
}
