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

// Function: sub_0027D290
// Address: 0x27d290 - 0x27db88
void sub_0027D290_0x27d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D290_0x27d290");
#endif

    switch (ctx->pc) {
        case 0x27d314u: goto label_27d314;
        case 0x27d330u: goto label_27d330;
        case 0x27d340u: goto label_27d340;
        case 0x27d360u: goto label_27d360;
        case 0x27d388u: goto label_27d388;
        case 0x27d390u: goto label_27d390;
        case 0x27d3a4u: goto label_27d3a4;
        case 0x27d3b0u: goto label_27d3b0;
        case 0x27d3b8u: goto label_27d3b8;
        case 0x27d3ccu: goto label_27d3cc;
        case 0x27d3d8u: goto label_27d3d8;
        case 0x27d3e0u: goto label_27d3e0;
        case 0x27d3f4u: goto label_27d3f4;
        case 0x27d400u: goto label_27d400;
        case 0x27d408u: goto label_27d408;
        case 0x27d418u: goto label_27d418;
        case 0x27d420u: goto label_27d420;
        case 0x27d428u: goto label_27d428;
        case 0x27d438u: goto label_27d438;
        case 0x27d440u: goto label_27d440;
        case 0x27d448u: goto label_27d448;
        case 0x27d458u: goto label_27d458;
        case 0x27d460u: goto label_27d460;
        case 0x27d468u: goto label_27d468;
        case 0x27d478u: goto label_27d478;
        case 0x27d480u: goto label_27d480;
        case 0x27d488u: goto label_27d488;
        case 0x27d498u: goto label_27d498;
        case 0x27d4a0u: goto label_27d4a0;
        case 0x27d4a8u: goto label_27d4a8;
        case 0x27d4b8u: goto label_27d4b8;
        case 0x27d4c0u: goto label_27d4c0;
        case 0x27d4c8u: goto label_27d4c8;
        case 0x27d4d8u: goto label_27d4d8;
        case 0x27d4e0u: goto label_27d4e0;
        case 0x27d4e8u: goto label_27d4e8;
        case 0x27d4f8u: goto label_27d4f8;
        case 0x27d500u: goto label_27d500;
        case 0x27d508u: goto label_27d508;
        case 0x27d518u: goto label_27d518;
        case 0x27d520u: goto label_27d520;
        case 0x27d528u: goto label_27d528;
        case 0x27d53cu: goto label_27d53c;
        case 0x27d548u: goto label_27d548;
        case 0x27d564u: goto label_27d564;
        case 0x27d580u: goto label_27d580;
        case 0x27d590u: goto label_27d590;
        case 0x27d5a0u: goto label_27d5a0;
        case 0x27d5a8u: goto label_27d5a8;
        case 0x27d5c4u: goto label_27d5c4;
        case 0x27d5e4u: goto label_27d5e4;
        case 0x27d5f8u: goto label_27d5f8;
        case 0x27d60cu: goto label_27d60c;
        case 0x27d618u: goto label_27d618;
        case 0x27d620u: goto label_27d620;
        case 0x27d634u: goto label_27d634;
        case 0x27d638u: goto label_27d638;
        case 0x27d670u: goto label_27d670;
        case 0x27d698u: goto label_27d698;
        case 0x27d6e8u: goto label_27d6e8;
        case 0x27d718u: goto label_27d718;
        case 0x27d740u: goto label_27d740;
        case 0x27d770u: goto label_27d770;
        case 0x27d798u: goto label_27d798;
        case 0x27d7c8u: goto label_27d7c8;
        case 0x27d7d0u: goto label_27d7d0;
        case 0x27d820u: goto label_27d820;
        case 0x27d850u: goto label_27d850;
        case 0x27d878u: goto label_27d878;
        case 0x27d8a8u: goto label_27d8a8;
        case 0x27d8d0u: goto label_27d8d0;
        case 0x27d900u: goto label_27d900;
        case 0x27d908u: goto label_27d908;
        case 0x27d940u: goto label_27d940;
        case 0x27d954u: goto label_27d954;
        case 0x27d988u: goto label_27d988;
        case 0x27d998u: goto label_27d998;
        case 0x27d9acu: goto label_27d9ac;
        case 0x27d9e0u: goto label_27d9e0;
        case 0x27da1cu: goto label_27da1c;
        case 0x27da30u: goto label_27da30;
        case 0x27da44u: goto label_27da44;
        case 0x27da78u: goto label_27da78;
        case 0x27da80u: goto label_27da80;
        case 0x27dad0u: goto label_27dad0;
        case 0x27db00u: goto label_27db00;
        case 0x27db28u: goto label_27db28;
        case 0x27db58u: goto label_27db58;
        default: break;
    }

    ctx->pc = 0x27d290u;

    // 0x27d290: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x27d290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x27d294: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27d294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27d298: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27d29c: 0x246361c0  addiu       $v1, $v1, 0x61C0
    ctx->pc = 0x27d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25024));
    // 0x27d2a0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x27d2a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27d2a8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x27d2ac: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x27d2acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27d2b4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x27d2b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27d2bc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x27d2bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27d2c4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x27d2c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27d2cc: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x27d2ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27d2d4: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x27d2d4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x27d2d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27d2dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27d2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27d2e0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x27d2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2e4: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x27d2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x27d2e8: 0x90730000  lbu         $s3, 0x0($v1)
    ctx->pc = 0x27d2e8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d2ec: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x27d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x27d2f0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x27d2f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27d2f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D2F4u;
    {
        const bool branch_taken_0x27d2f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2F4u;
        // 0x27d2f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2f4) {
            ctx->pc = 0x27D300u;
            goto label_27d300;
        }
    }
    ctx->pc = 0x27D2FCu;
    // 0x27d2fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27d2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d300:
    // 0x27d300: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27D300u;
    {
        const bool branch_taken_0x27d300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d300) {
            ctx->pc = 0x27D348u;
            goto label_27d348;
        }
    }
    ctx->pc = 0x27D308u;
    // 0x27d308: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d30c: 0xc096f84  jal         func_25BE10
    ctx->pc = 0x27D30Cu;
    SET_GPR_U32(ctx, 31, 0x27D314u);
    ctx->pc = 0x27D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D30Cu;
    // 0x27d310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE10u, 0x27D30Cu, 0x27D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D314u;
label_27d314:
    // 0x27d314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27d314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d318: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x27d318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x27d31c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x27d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x27d320: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27d324: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x27d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27d328: 0xc0766ec  jal         func_1D9BB0
    ctx->pc = 0x27D328u;
    SET_GPR_U32(ctx, 31, 0x27D330u);
    ctx->pc = 0x27D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D328u;
    // 0x27d32c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BB0u, 0x27D328u, 0x27D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D330u;
label_27d330:
    // 0x27d330: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27d330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d334: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x27d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27d338: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x27D338u;
    SET_GPR_U32(ctx, 31, 0x27D340u);
    ctx->pc = 0x27D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D338u;
    // 0x27d33c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x27D338u, 0x27D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D340u;
label_27d340:
    // 0x27d340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D340u;
    {
        const bool branch_taken_0x27d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d340) {
            ctx->pc = 0x27D350u;
            goto label_27d350;
        }
    }
    ctx->pc = 0x27D348u;
label_27d348:
    // 0x27d348: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x27d348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d34c: 0x0  nop
    ctx->pc = 0x27d34cu;
    // NOP
label_27d350:
    // 0x27d350: 0x33c600ff  andi        $a2, $fp, 0xFF
    ctx->pc = 0x27d350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x27d354: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27d354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27d358: 0xc096d1c  jal         func_25B470
    ctx->pc = 0x27D358u;
    SET_GPR_U32(ctx, 31, 0x27D360u);
    ctx->pc = 0x27D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D358u;
    // 0x27d35c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B470u, 0x27D358u, 0x27D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D360u;
label_27d360:
    // 0x27d360: 0x26e3ffef  addiu       $v1, $s7, -0x11
    ctx->pc = 0x27d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967279));
    // 0x27d364: 0x2c610033  sltiu       $at, $v1, 0x33
    ctx->pc = 0x27d364u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x27d368: 0x102000b3  beqz        $at, . + 4 + (0xB3 << 2)
    ctx->pc = 0x27D368u;
    {
        const bool branch_taken_0x27d368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D368u;
        // 0x27d36c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d368) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D370u;
    // 0x27d370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27d374: 0x24846230  addiu       $a0, $a0, 0x6230
    ctx->pc = 0x27d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25136));
    // 0x27d378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27d378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27d37c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d380: 0x600008  jr          $v1
    ctx->pc = 0x27D380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D388u: goto label_27d388;
            case 0x27D3B0u: goto label_27d3b0;
            case 0x27D3D8u: goto label_27d3d8;
            case 0x27D400u: goto label_27d400;
            case 0x27D420u: goto label_27d420;
            case 0x27D440u: goto label_27d440;
            case 0x27D460u: goto label_27d460;
            case 0x27D480u: goto label_27d480;
            case 0x27D4A0u: goto label_27d4a0;
            case 0x27D4C0u: goto label_27d4c0;
            case 0x27D4E0u: goto label_27d4e0;
            case 0x27D500u: goto label_27d500;
            case 0x27D520u: goto label_27d520;
            case 0x27D548u: goto label_27d548;
            case 0x27D5A8u: goto label_27d5a8;
            case 0x27D618u: goto label_27d618;
            case 0x27D638u: goto label_27d638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27D388u;
label_27d388:
    // 0x27d388: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D388u;
    SET_GPR_U32(ctx, 31, 0x27D390u);
    ctx->pc = 0x27D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D388u;
    // 0x27d38c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D388u, 0x27D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D390u;
label_27d390:
    // 0x27d390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d394: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d398: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d39c: 0xc0a8f40  jal         func_2A3D00
    ctx->pc = 0x27D39Cu;
    SET_GPR_U32(ctx, 31, 0x27D3A4u);
    ctx->pc = 0x27D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D39Cu;
    // 0x27d3a0: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3D00u, 0x27D39Cu, 0x27D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3A4u;
label_27d3a4:
    // 0x27d3a4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x27D3A4u;
    {
        const bool branch_taken_0x27d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3a4) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D3ACu;
    // 0x27d3ac: 0x0  nop
    ctx->pc = 0x27d3acu;
    // NOP
label_27d3b0:
    // 0x27d3b0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D3B0u;
    SET_GPR_U32(ctx, 31, 0x27D3B8u);
    ctx->pc = 0x27D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D3B0u;
    // 0x27d3b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D3B0u, 0x27D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3B8u;
label_27d3b8:
    // 0x27d3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d3c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3c4: 0xc0a8f50  jal         func_2A3D40
    ctx->pc = 0x27D3C4u;
    SET_GPR_U32(ctx, 31, 0x27D3CCu);
    ctx->pc = 0x27D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D3C4u;
    // 0x27d3c8: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3D40u, 0x27D3C4u, 0x27D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3CCu;
label_27d3cc:
    // 0x27d3cc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x27D3CCu;
    {
        const bool branch_taken_0x27d3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3cc) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D3D4u;
    // 0x27d3d4: 0x0  nop
    ctx->pc = 0x27d3d4u;
    // NOP
label_27d3d8:
    // 0x27d3d8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D3D8u;
    SET_GPR_U32(ctx, 31, 0x27D3E0u);
    ctx->pc = 0x27D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D3D8u;
    // 0x27d3dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D3D8u, 0x27D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3E0u;
label_27d3e0:
    // 0x27d3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d3e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3ec: 0xc0a8f60  jal         func_2A3D80
    ctx->pc = 0x27D3ECu;
    SET_GPR_U32(ctx, 31, 0x27D3F4u);
    ctx->pc = 0x27D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D3ECu;
    // 0x27d3f0: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3D80u, 0x27D3ECu, 0x27D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3F4u;
label_27d3f4:
    // 0x27d3f4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x27D3F4u;
    {
        const bool branch_taken_0x27d3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3f4) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D3FCu;
    // 0x27d3fc: 0x0  nop
    ctx->pc = 0x27d3fcu;
    // NOP
label_27d400:
    // 0x27d400: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D400u;
    SET_GPR_U32(ctx, 31, 0x27D408u);
    ctx->pc = 0x27D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D400u;
    // 0x27d404: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D400u, 0x27D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D408u;
label_27d408:
    // 0x27d408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d40c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d410: 0xc0a909c  jal         func_2A4270
    ctx->pc = 0x27D410u;
    SET_GPR_U32(ctx, 31, 0x27D418u);
    ctx->pc = 0x27D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D410u;
    // 0x27d414: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4270u, 0x27D410u, 0x27D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D418u;
label_27d418:
    // 0x27d418: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x27D418u;
    {
        const bool branch_taken_0x27d418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d418) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D420u;
label_27d420:
    // 0x27d420: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D420u;
    SET_GPR_U32(ctx, 31, 0x27D428u);
    ctx->pc = 0x27D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D420u;
    // 0x27d424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D420u, 0x27D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D428u;
label_27d428:
    // 0x27d428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d42c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d430: 0xc0a90ac  jal         func_2A42B0
    ctx->pc = 0x27D430u;
    SET_GPR_U32(ctx, 31, 0x27D438u);
    ctx->pc = 0x27D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D430u;
    // 0x27d434: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A42B0u, 0x27D430u, 0x27D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D438u;
label_27d438:
    // 0x27d438: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x27D438u;
    {
        const bool branch_taken_0x27d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d438) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D440u;
label_27d440:
    // 0x27d440: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D440u;
    SET_GPR_U32(ctx, 31, 0x27D448u);
    ctx->pc = 0x27D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D440u;
    // 0x27d444: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D440u, 0x27D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D448u;
label_27d448:
    // 0x27d448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d44c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d450: 0xc0a90bc  jal         func_2A42F0
    ctx->pc = 0x27D450u;
    SET_GPR_U32(ctx, 31, 0x27D458u);
    ctx->pc = 0x27D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D450u;
    // 0x27d454: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A42F0u, 0x27D450u, 0x27D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D458u;
label_27d458:
    // 0x27d458: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x27D458u;
    {
        const bool branch_taken_0x27d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d458) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D460u;
label_27d460:
    // 0x27d460: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D460u;
    SET_GPR_U32(ctx, 31, 0x27D468u);
    ctx->pc = 0x27D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D460u;
    // 0x27d464: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D460u, 0x27D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D468u;
label_27d468:
    // 0x27d468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d46c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d470: 0xc0a8f70  jal         func_2A3DC0
    ctx->pc = 0x27D470u;
    SET_GPR_U32(ctx, 31, 0x27D478u);
    ctx->pc = 0x27D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D470u;
    // 0x27d474: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3DC0u, 0x27D470u, 0x27D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D478u;
label_27d478:
    // 0x27d478: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x27D478u;
    {
        const bool branch_taken_0x27d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d478) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D480u;
label_27d480:
    // 0x27d480: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D480u;
    SET_GPR_U32(ctx, 31, 0x27D488u);
    ctx->pc = 0x27D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D480u;
    // 0x27d484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D480u, 0x27D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D488u;
label_27d488:
    // 0x27d488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d48c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d490: 0xc0a8f80  jal         func_2A3E00
    ctx->pc = 0x27D490u;
    SET_GPR_U32(ctx, 31, 0x27D498u);
    ctx->pc = 0x27D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D490u;
    // 0x27d494: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E00u, 0x27D490u, 0x27D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D498u;
label_27d498:
    // 0x27d498: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x27D498u;
    {
        const bool branch_taken_0x27d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d498) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D4A0u;
label_27d4a0:
    // 0x27d4a0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D4A0u;
    SET_GPR_U32(ctx, 31, 0x27D4A8u);
    ctx->pc = 0x27D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4A0u;
    // 0x27d4a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D4A0u, 0x27D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4A8u;
label_27d4a8:
    // 0x27d4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d4b0: 0xc0a8f90  jal         func_2A3E40
    ctx->pc = 0x27D4B0u;
    SET_GPR_U32(ctx, 31, 0x27D4B8u);
    ctx->pc = 0x27D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4B0u;
    // 0x27d4b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E40u, 0x27D4B0u, 0x27D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4B8u;
label_27d4b8:
    // 0x27d4b8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x27D4B8u;
    {
        const bool branch_taken_0x27d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4b8) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D4C0u;
label_27d4c0:
    // 0x27d4c0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D4C0u;
    SET_GPR_U32(ctx, 31, 0x27D4C8u);
    ctx->pc = 0x27D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4C0u;
    // 0x27d4c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D4C0u, 0x27D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4C8u;
label_27d4c8:
    // 0x27d4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d4d0: 0xc0a906c  jal         func_2A41B0
    ctx->pc = 0x27D4D0u;
    SET_GPR_U32(ctx, 31, 0x27D4D8u);
    ctx->pc = 0x27D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4D0u;
    // 0x27d4d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A41B0u, 0x27D4D0u, 0x27D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4D8u;
label_27d4d8:
    // 0x27d4d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x27D4D8u;
    {
        const bool branch_taken_0x27d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4d8) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D4E0u;
label_27d4e0:
    // 0x27d4e0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D4E0u;
    SET_GPR_U32(ctx, 31, 0x27D4E8u);
    ctx->pc = 0x27D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4E0u;
    // 0x27d4e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D4E0u, 0x27D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4E8u;
label_27d4e8:
    // 0x27d4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d4f0: 0xc0a907c  jal         func_2A41F0
    ctx->pc = 0x27D4F0u;
    SET_GPR_U32(ctx, 31, 0x27D4F8u);
    ctx->pc = 0x27D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4F0u;
    // 0x27d4f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A41F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A41F0u, 0x27D4F0u, 0x27D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4F8u;
label_27d4f8:
    // 0x27d4f8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x27D4F8u;
    {
        const bool branch_taken_0x27d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4f8) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D500u;
label_27d500:
    // 0x27d500: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D500u;
    SET_GPR_U32(ctx, 31, 0x27D508u);
    ctx->pc = 0x27D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D500u;
    // 0x27d504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D500u, 0x27D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D508u;
label_27d508:
    // 0x27d508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d50c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d510: 0xc0a908c  jal         func_2A4230
    ctx->pc = 0x27D510u;
    SET_GPR_U32(ctx, 31, 0x27D518u);
    ctx->pc = 0x27D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D510u;
    // 0x27d514: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4230u, 0x27D510u, 0x27D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D518u;
label_27d518:
    // 0x27d518: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x27D518u;
    {
        const bool branch_taken_0x27d518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d518) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D520u;
label_27d520:
    // 0x27d520: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D520u;
    SET_GPR_U32(ctx, 31, 0x27D528u);
    ctx->pc = 0x27D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D520u;
    // 0x27d524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D520u, 0x27D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D528u;
label_27d528:
    // 0x27d528: 0x8e26085c  lw          $a2, 0x85C($s1)
    ctx->pc = 0x27d528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x27d52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d530: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d534: 0xc0aae28  jal         func_2AB8A0
    ctx->pc = 0x27D534u;
    SET_GPR_U32(ctx, 31, 0x27D53Cu);
    ctx->pc = 0x27D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D534u;
    // 0x27d538: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB8A0u, 0x27D534u, 0x27D53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D53Cu;
label_27d53c:
    // 0x27d53c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x27D53Cu;
    {
        const bool branch_taken_0x27d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d53c) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D544u;
    // 0x27d544: 0x0  nop
    ctx->pc = 0x27d544u;
    // NOP
label_27d548:
    // 0x27d548: 0x8e91004c  lw          $s1, 0x4C($s4)
    ctx->pc = 0x27d548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x27d54c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x27D54Cu;
    {
        const bool branch_taken_0x27d54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D54Cu;
        // 0x27d550: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d54c) {
            ctx->pc = 0x27D588u;
            goto label_27d588;
        }
    }
    ctx->pc = 0x27D554u;
    // 0x27d554: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27D554u;
    {
        const bool branch_taken_0x27d554 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D554u;
        // 0x27d558: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d554) {
            ctx->pc = 0x27D588u;
            goto label_27d588;
        }
    }
    ctx->pc = 0x27D55Cu;
    // 0x27d55c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D55Cu;
    SET_GPR_U32(ctx, 31, 0x27D564u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D55Cu, 0x27D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D564u;
label_27d564:
    // 0x27d564: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x27d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x27d568: 0x123180  sll         $a2, $s2, 6
    ctx->pc = 0x27d568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x27d56c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d570: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d574: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x27d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27d578: 0xc0aa610  jal         func_2A9840
    ctx->pc = 0x27D578u;
    SET_GPR_U32(ctx, 31, 0x27D580u);
    ctx->pc = 0x27D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D578u;
    // 0x27d57c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9840u, 0x27D578u, 0x27D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D580u;
label_27d580:
    // 0x27d580: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x27D580u;
    {
        const bool branch_taken_0x27d580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d580) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D588u;
label_27d588:
    // 0x27d588: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D588u;
    SET_GPR_U32(ctx, 31, 0x27D590u);
    ctx->pc = 0x27D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D588u;
    // 0x27d58c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D588u, 0x27D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D590u;
label_27d590:
    // 0x27d590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d594: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d598: 0xc0aa610  jal         func_2A9840
    ctx->pc = 0x27D598u;
    SET_GPR_U32(ctx, 31, 0x27D5A0u);
    ctx->pc = 0x27D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D598u;
    // 0x27d59c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9840u, 0x27D598u, 0x27D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5A0u;
label_27d5a0:
    // 0x27d5a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x27D5A0u;
    {
        const bool branch_taken_0x27d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d5a0) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D5A8u;
label_27d5a8:
    // 0x27d5a8: 0x8e91004c  lw          $s1, 0x4C($s4)
    ctx->pc = 0x27d5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x27d5ac: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27D5ACu;
    {
        const bool branch_taken_0x27d5ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5ACu;
        // 0x27d5b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5ac) {
            ctx->pc = 0x27D5F0u;
            goto label_27d5f0;
        }
    }
    ctx->pc = 0x27D5B4u;
    // 0x27d5b4: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27D5B4u;
    {
        const bool branch_taken_0x27d5b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5B4u;
        // 0x27d5b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5b4) {
            ctx->pc = 0x27D5F0u;
            goto label_27d5f0;
        }
    }
    ctx->pc = 0x27D5BCu;
    // 0x27d5bc: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D5BCu;
    SET_GPR_U32(ctx, 31, 0x27D5C4u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D5BCu, 0x27D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5C4u;
label_27d5c4:
    // 0x27d5c4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x27d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x27d5c8: 0x123180  sll         $a2, $s2, 6
    ctx->pc = 0x27d5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x27d5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x27d5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d5d8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x27d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27d5dc: 0xc0aa5e4  jal         func_2A9790
    ctx->pc = 0x27D5DCu;
    SET_GPR_U32(ctx, 31, 0x27D5E4u);
    ctx->pc = 0x27D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5DCu;
    // 0x27d5e0: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9790u, 0x27D5DCu, 0x27D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5E4u;
label_27d5e4:
    // 0x27d5e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27D5E4u;
    {
        const bool branch_taken_0x27d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d5e4) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D5ECu;
    // 0x27d5ec: 0x0  nop
    ctx->pc = 0x27d5ecu;
    // NOP
label_27d5f0:
    // 0x27d5f0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D5F0u;
    SET_GPR_U32(ctx, 31, 0x27D5F8u);
    ctx->pc = 0x27D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5F0u;
    // 0x27d5f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D5F0u, 0x27D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5F8u;
label_27d5f8:
    // 0x27d5f8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x27d5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d600: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d604: 0xc0aa5e4  jal         func_2A9790
    ctx->pc = 0x27D604u;
    SET_GPR_U32(ctx, 31, 0x27D60Cu);
    ctx->pc = 0x27D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D604u;
    // 0x27d608: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9790u, 0x27D604u, 0x27D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D60Cu;
label_27d60c:
    // 0x27d60c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27D60Cu;
    {
        const bool branch_taken_0x27d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d60c) {
            ctx->pc = 0x27D638u;
            goto label_27d638;
        }
    }
    ctx->pc = 0x27D614u;
    // 0x27d614: 0x0  nop
    ctx->pc = 0x27d614u;
    // NOP
label_27d618:
    // 0x27d618: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D618u;
    SET_GPR_U32(ctx, 31, 0x27D620u);
    ctx->pc = 0x27D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D618u;
    // 0x27d61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D618u, 0x27D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D620u;
label_27d620:
    // 0x27d620: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x27d620u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x27d624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d628: 0x8e26085c  lw          $a2, 0x85C($s1)
    ctx->pc = 0x27d628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x27d62c: 0xc0aae38  jal         func_2AB8E0
    ctx->pc = 0x27D62Cu;
    SET_GPR_U32(ctx, 31, 0x27D634u);
    ctx->pc = 0x27D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D62Cu;
    // 0x27d630: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB8E0u, 0x27D62Cu, 0x27D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D634u;
label_27d634:
    // 0x27d634: 0x0  nop
    ctx->pc = 0x27d634u;
    // NOP
label_27d638:
    // 0x27d638: 0x12600147  beqz        $s3, . + 4 + (0x147 << 2)
    ctx->pc = 0x27D638u;
    {
        const bool branch_taken_0x27d638 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d638) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D640u;
    // 0x27d640: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x27d640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27d644: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d648: 0x10830143  beq         $a0, $v1, . + 4 + (0x143 << 2)
    ctx->pc = 0x27D648u;
    {
        const bool branch_taken_0x27d648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D648u;
        // 0x27d64c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d648) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D650u;
    // 0x27d650: 0x10830141  beq         $a0, $v1, . + 4 + (0x141 << 2)
    ctx->pc = 0x27D650u;
    {
        const bool branch_taken_0x27d650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d650) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D658u;
    // 0x27d658: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27d658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27d65c: 0x1083013e  beq         $a0, $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x27D65Cu;
    {
        const bool branch_taken_0x27d65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d65c) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D664u;
    // 0x27d664: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x27d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x27d668: 0xc096d04  jal         func_25B410
    ctx->pc = 0x27D668u;
    SET_GPR_U32(ctx, 31, 0x27D670u);
    ctx->pc = 0x27D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D668u;
    // 0x27d66c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x27D668u, 0x27D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D670u;
label_27d670:
    // 0x27d670: 0x2ec10007  sltiu       $at, $s6, 0x7
    ctx->pc = 0x27d670u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27d674: 0x10200138  beqz        $at, . + 4 + (0x138 << 2)
    ctx->pc = 0x27D674u;
    {
        const bool branch_taken_0x27d674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D674u;
        // 0x27d678: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d674) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D67Cu;
    // 0x27d67c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x27d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x27d680: 0x24846210  addiu       $a0, $a0, 0x6210
    ctx->pc = 0x27d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25104));
    // 0x27d684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27d688: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27d688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d68c: 0x600008  jr          $v1
    ctx->pc = 0x27D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D698u: goto label_27d698;
            case 0x27D7D0u: goto label_27d7d0;
            case 0x27D908u: goto label_27d908;
            case 0x27DA80u: goto label_27da80;
            case 0x27DB58u: goto label_27db58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D68Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27D694u;
    // 0x27d694: 0x0  nop
    ctx->pc = 0x27d694u;
    // NOP
label_27d698:
    // 0x27d698: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27d698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d69c: 0x12630036  beq         $s3, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27D69Cu;
    {
        const bool branch_taken_0x27d69c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D69Cu;
        // 0x27d6a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d69c) {
            ctx->pc = 0x27D778u;
            goto label_27d778;
        }
    }
    ctx->pc = 0x27D6A4u;
    // 0x27d6a4: 0x1263012c  beq         $s3, $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x27D6A4u;
    {
        const bool branch_taken_0x27d6a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d6a4) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D6ACu;
    // 0x27d6ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d6b0: 0x1263001b  beq         $s3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x27D6B0u;
    {
        const bool branch_taken_0x27d6b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6B0u;
        // 0x27d6b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6b0) {
            ctx->pc = 0x27D720u;
            goto label_27d720;
        }
    }
    ctx->pc = 0x27D6B8u;
    // 0x27d6b8: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D6B8u;
    {
        const bool branch_taken_0x27d6b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d6b8) {
            ctx->pc = 0x27D6C8u;
            goto label_27d6c8;
        }
    }
    ctx->pc = 0x27D6C0u;
    // 0x27d6c0: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x27D6C0u;
    {
        const bool branch_taken_0x27d6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d6c0) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D6C8u;
label_27d6c8:
    // 0x27d6c8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d6cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27d6d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6d4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27d6d8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27d6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d6dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d6e0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D6E0u;
    SET_GPR_U32(ctx, 31, 0x27D6E8u);
    ctx->pc = 0x27D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6E0u;
    // 0x27d6e4: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D6E0u, 0x27D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6E8u;
label_27d6e8:
    // 0x27d6e8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d6ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6f0: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27d6f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27d6f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27d6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d6fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d700: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27d700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d704: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27d704u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27d708: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27d708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27d70c: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27d70cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27d710: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27D710u;
    SET_GPR_U32(ctx, 31, 0x27D718u);
    ctx->pc = 0x27D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D710u;
    // 0x27d714: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27D710u, 0x27D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D718u;
label_27d718:
    // 0x27d718: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x27D718u;
    {
        const bool branch_taken_0x27d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d718) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D720u;
label_27d720:
    // 0x27d720: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d724: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27d728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d72c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27d730: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27d730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d738: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D738u;
    SET_GPR_U32(ctx, 31, 0x27D740u);
    ctx->pc = 0x27D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D738u;
    // 0x27d73c: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D738u, 0x27D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D740u;
label_27d740:
    // 0x27d740: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d748: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27d748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27d74c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27d74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d750: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d758: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27d758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d75c: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27d760: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27d764: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27d764u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27d768: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27D768u;
    SET_GPR_U32(ctx, 31, 0x27D770u);
    ctx->pc = 0x27D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D768u;
    // 0x27d76c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27D768u, 0x27D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D770u;
label_27d770:
    // 0x27d770: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x27D770u;
    {
        const bool branch_taken_0x27d770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d770) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D778u;
label_27d778:
    // 0x27d778: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d77c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27d780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d784: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27d784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27d788: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27d788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d78c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d790: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D790u;
    SET_GPR_U32(ctx, 31, 0x27D798u);
    ctx->pc = 0x27D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D790u;
    // 0x27d794: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D790u, 0x27D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D798u;
label_27d798:
    // 0x27d798: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d79c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7a0: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27d7a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27d7a4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27d7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d7ac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x27d7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27d7b0: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27d7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d7b4: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27d7b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27d7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27d7bc: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27d7bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27d7c0: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27D7C0u;
    SET_GPR_U32(ctx, 31, 0x27D7C8u);
    ctx->pc = 0x27D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7C0u;
    // 0x27d7c4: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27D7C0u, 0x27D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7C8u;
label_27d7c8:
    // 0x27d7c8: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x27D7C8u;
    {
        const bool branch_taken_0x27d7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7c8) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D7D0u;
label_27d7d0:
    // 0x27d7d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d7d4: 0x12630036  beq         $s3, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27D7D4u;
    {
        const bool branch_taken_0x27d7d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7D4u;
        // 0x27d7d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7d4) {
            ctx->pc = 0x27D8B0u;
            goto label_27d8b0;
        }
    }
    ctx->pc = 0x27D7DCu;
    // 0x27d7dc: 0x126300de  beq         $s3, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x27D7DCu;
    {
        const bool branch_taken_0x27d7dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d7dc) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D7E4u;
    // 0x27d7e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d7e8: 0x1263001b  beq         $s3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x27D7E8u;
    {
        const bool branch_taken_0x27d7e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7E8u;
        // 0x27d7ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7e8) {
            ctx->pc = 0x27D858u;
            goto label_27d858;
        }
    }
    ctx->pc = 0x27D7F0u;
    // 0x27d7f0: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D7F0u;
    {
        const bool branch_taken_0x27d7f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d7f0) {
            ctx->pc = 0x27D800u;
            goto label_27d800;
        }
    }
    ctx->pc = 0x27D7F8u;
    // 0x27d7f8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x27D7F8u;
    {
        const bool branch_taken_0x27d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d7f8) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D800u;
label_27d800:
    // 0x27d800: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d804: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27d804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27d808: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d80c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27d80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27d810: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27d810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d818: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D818u;
    SET_GPR_U32(ctx, 31, 0x27D820u);
    ctx->pc = 0x27D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D818u;
    // 0x27d81c: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D818u, 0x27D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D820u;
label_27d820:
    // 0x27d820: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d828: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27d828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27d82c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27d82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d838: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27d838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d83c: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27d840: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27d844: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27d844u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27d848: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27D848u;
    SET_GPR_U32(ctx, 31, 0x27D850u);
    ctx->pc = 0x27D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D848u;
    // 0x27d84c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27D848u, 0x27D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D850u;
label_27d850:
    // 0x27d850: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x27D850u;
    {
        const bool branch_taken_0x27d850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d850) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D858u;
label_27d858:
    // 0x27d858: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d85c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27d860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d864: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27d864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27d868: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27d868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d870: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D870u;
    SET_GPR_U32(ctx, 31, 0x27D878u);
    ctx->pc = 0x27D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D870u;
    // 0x27d874: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D870u, 0x27D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D878u;
label_27d878:
    // 0x27d878: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d880: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27d880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27d884: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27d884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d888: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d88c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d890: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27d890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d894: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27d894u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27d898: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27d89c: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27d89cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27d8a0: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27D8A0u;
    SET_GPR_U32(ctx, 31, 0x27D8A8u);
    ctx->pc = 0x27D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D8A0u;
    // 0x27d8a4: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27D8A0u, 0x27D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8A8u;
label_27d8a8:
    // 0x27d8a8: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x27D8A8u;
    {
        const bool branch_taken_0x27d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d8a8) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D8B0u;
label_27d8b0:
    // 0x27d8b0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d8b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27d8b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8bc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27d8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27d8c0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27d8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27d8c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27d8c8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D8C8u;
    SET_GPR_U32(ctx, 31, 0x27D8D0u);
    ctx->pc = 0x27D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D8C8u;
    // 0x27d8cc: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D8C8u, 0x27D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8D0u;
label_27d8d0:
    // 0x27d8d0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27d8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8d8: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27d8d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27d8dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27d8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d8e4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x27d8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27d8e8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27d8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d8ec: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27d8f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27d8f4: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27d8f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27d8f8: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27D8F8u;
    SET_GPR_U32(ctx, 31, 0x27D900u);
    ctx->pc = 0x27D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D8F8u;
    // 0x27d8fc: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27D8F8u, 0x27D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D900u;
label_27d900:
    // 0x27d900: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x27D900u;
    {
        const bool branch_taken_0x27d900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d900) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D908u;
label_27d908:
    // 0x27d908: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27d908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d90c: 0x12630046  beq         $s3, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x27D90Cu;
    {
        const bool branch_taken_0x27d90c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D90Cu;
        // 0x27d910: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d90c) {
            ctx->pc = 0x27DA28u;
            goto label_27da28;
        }
    }
    ctx->pc = 0x27D914u;
    // 0x27d914: 0x12630034  beq         $s3, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x27D914u;
    {
        const bool branch_taken_0x27d914 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d914) {
            ctx->pc = 0x27D9E8u;
            goto label_27d9e8;
        }
    }
    ctx->pc = 0x27D91Cu;
    // 0x27d91c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d920: 0x1263001b  beq         $s3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x27D920u;
    {
        const bool branch_taken_0x27d920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D920u;
        // 0x27d924: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d920) {
            ctx->pc = 0x27D990u;
            goto label_27d990;
        }
    }
    ctx->pc = 0x27D928u;
    // 0x27d928: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D928u;
    {
        const bool branch_taken_0x27d928 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d928) {
            ctx->pc = 0x27D938u;
            goto label_27d938;
        }
    }
    ctx->pc = 0x27D930u;
    // 0x27d930: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x27D930u;
    {
        const bool branch_taken_0x27d930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d930) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D938u;
label_27d938:
    // 0x27d938: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D938u;
    SET_GPR_U32(ctx, 31, 0x27D940u);
    ctx->pc = 0x27D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D938u;
    // 0x27d93c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D938u, 0x27D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D940u;
label_27d940:
    // 0x27d940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d944: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d948: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d94c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x27D94Cu;
    SET_GPR_U32(ctx, 31, 0x27D954u);
    ctx->pc = 0x27D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D94Cu;
    // 0x27d950: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x27D94Cu, 0x27D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D954u;
label_27d954:
    // 0x27d954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d958: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27d958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x27d95c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27d960: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27d960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d964: 0x3c023100  lui         $v0, 0x3100
    ctx->pc = 0x27d964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12544 << 16));
    // 0x27d968: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x27d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x27d96c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d970: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x27d970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x27d974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27d974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d978: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27d978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d97c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27d97cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d980: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x27D980u;
    SET_GPR_U32(ctx, 31, 0x27D988u);
    ctx->pc = 0x27D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D980u;
    // 0x27d984: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x27D980u, 0x27D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D988u;
label_27d988:
    // 0x27d988: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x27D988u;
    {
        const bool branch_taken_0x27d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d988) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D990u;
label_27d990:
    // 0x27d990: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27D990u;
    SET_GPR_U32(ctx, 31, 0x27D998u);
    ctx->pc = 0x27D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D990u;
    // 0x27d994: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27D990u, 0x27D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D998u;
label_27d998:
    // 0x27d998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d99c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d9a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9a4: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x27D9A4u;
    SET_GPR_U32(ctx, 31, 0x27D9ACu);
    ctx->pc = 0x27D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9A4u;
    // 0x27d9a8: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x27D9A4u, 0x27D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9ACu;
label_27d9ac:
    // 0x27d9ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d9b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x27d9b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27d9b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27d9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9bc: 0x3c023100  lui         $v0, 0x3100
    ctx->pc = 0x27d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12544 << 16));
    // 0x27d9c0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x27d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x27d9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9c8: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x27d9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x27d9cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27d9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27d9d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27d9d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9d8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x27D9D8u;
    SET_GPR_U32(ctx, 31, 0x27D9E0u);
    ctx->pc = 0x27D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9D8u;
    // 0x27d9dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x27D9D8u, 0x27D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9E0u;
label_27d9e0:
    // 0x27d9e0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x27D9E0u;
    {
        const bool branch_taken_0x27d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d9e0) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27D9E8u;
label_27d9e8:
    // 0x27d9e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d9ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27d9f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x27d9f4: 0x3c023100  lui         $v0, 0x3100
    ctx->pc = 0x27d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12544 << 16));
    // 0x27d9f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27d9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9fc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x27d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x27da00: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x27da00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x27da04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27da04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27da08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27da0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27da10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x27DA14u;
    SET_GPR_U32(ctx, 31, 0x27DA1Cu);
    ctx->pc = 0x27DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA14u;
    // 0x27da18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x27DA14u, 0x27DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA1Cu;
label_27da1c:
    // 0x27da1c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x27DA1Cu;
    {
        const bool branch_taken_0x27da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27da1c) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DA24u;
    // 0x27da24: 0x0  nop
    ctx->pc = 0x27da24u;
    // NOP
label_27da28:
    // 0x27da28: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27DA28u;
    SET_GPR_U32(ctx, 31, 0x27DA30u);
    ctx->pc = 0x27DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA28u;
    // 0x27da2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27DA28u, 0x27DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA30u;
label_27da30:
    // 0x27da30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27da30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27da34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27da38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27da38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da3c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x27DA3Cu;
    SET_GPR_U32(ctx, 31, 0x27DA44u);
    ctx->pc = 0x27DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA3Cu;
    // 0x27da40: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x27DA3Cu, 0x27DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA44u;
label_27da44:
    // 0x27da44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27da48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27da48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x27da4c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27da4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27da50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27da50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da54: 0x3c023100  lui         $v0, 0x3100
    ctx->pc = 0x27da54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12544 << 16));
    // 0x27da58: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x27da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x27da5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27da5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da60: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x27da60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x27da64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27da64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27da68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27da6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da70: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x27DA70u;
    SET_GPR_U32(ctx, 31, 0x27DA78u);
    ctx->pc = 0x27DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA70u;
    // 0x27da74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x27DA70u, 0x27DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA78u;
label_27da78:
    // 0x27da78: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x27DA78u;
    {
        const bool branch_taken_0x27da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27da78) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DA80u;
label_27da80:
    // 0x27da80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27da84: 0x12630020  beq         $s3, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x27DA84u;
    {
        const bool branch_taken_0x27da84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA84u;
        // 0x27da88: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da84) {
            ctx->pc = 0x27DB08u;
            goto label_27db08;
        }
    }
    ctx->pc = 0x27DA8Cu;
    // 0x27da8c: 0x12630032  beq         $s3, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x27DA8Cu;
    {
        const bool branch_taken_0x27da8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27da8c) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DA94u;
    // 0x27da94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27da98: 0x1263002f  beq         $s3, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x27DA98u;
    {
        const bool branch_taken_0x27da98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x27DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA98u;
        // 0x27da9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da98) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DAA0u;
    // 0x27daa0: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DAA0u;
    {
        const bool branch_taken_0x27daa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x27daa0) {
            ctx->pc = 0x27DAB0u;
            goto label_27dab0;
        }
    }
    ctx->pc = 0x27DAA8u;
    // 0x27daa8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27DAA8u;
    {
        const bool branch_taken_0x27daa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27daa8) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DAB0u;
label_27dab0:
    // 0x27dab0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27dab4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27dab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dabc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27dac0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27dac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27dac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27dac8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27DAC8u;
    SET_GPR_U32(ctx, 31, 0x27DAD0u);
    ctx->pc = 0x27DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DAC8u;
    // 0x27dacc: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27DAC8u, 0x27DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAD0u;
label_27dad0:
    // 0x27dad0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27dad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27dad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dad8: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27dad8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27dadc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27dadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dae0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27dae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27dae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dae8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27dae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27daec: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27daecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27daf0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27daf4: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27daf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27daf8: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27DAF8u;
    SET_GPR_U32(ctx, 31, 0x27DB00u);
    ctx->pc = 0x27DAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DAF8u;
    // 0x27dafc: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27DAF8u, 0x27DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB00u;
label_27db00:
    // 0x27db00: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27DB00u;
    {
        const bool branch_taken_0x27db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db00) {
            ctx->pc = 0x27DB58u;
            goto label_27db58;
        }
    }
    ctx->pc = 0x27DB08u;
label_27db08:
    // 0x27db08: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27db0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27db10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27db10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db14: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x27db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x27db18: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27db18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27db1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27db20: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27DB20u;
    SET_GPR_U32(ctx, 31, 0x27DB28u);
    ctx->pc = 0x27DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB20u;
    // 0x27db24: 0xaf8280e0  sw          $v0, -0x7F20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27DB20u, 0x27DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB28u;
label_27db28:
    // 0x27db28: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x27db2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27db2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db30: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x27db30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27db34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27db34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27db38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27db3c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x27db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27db40: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x27db40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27db44: 0x31302  srl         $v0, $v1, 12
    ctx->pc = 0x27db44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x27db48: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27db4c: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x27db4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27db50: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x27DB50u;
    SET_GPR_U32(ctx, 31, 0x27DB58u);
    ctx->pc = 0x27DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB50u;
    // 0x27db54: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x27DB50u, 0x27DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB58u;
label_27db58:
    // 0x27db58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27db58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27db5c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27db5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27db60: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27db60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27db64: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27db64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27db68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27db68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27db6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27db6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27db70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27db70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27db74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27db74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27db78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27db78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27db7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27db7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27db80: 0x3e00008  jr          $ra
    ctx->pc = 0x27DB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB80u;
        // 0x27db84: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DB88u;
}
