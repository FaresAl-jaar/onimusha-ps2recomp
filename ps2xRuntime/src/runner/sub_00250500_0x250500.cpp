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

// Function: sub_00250500
// Address: 0x250500 - 0x2505fc
void sub_00250500_0x250500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250500_0x250500");
#endif

    switch (ctx->pc) {
        case 0x250500u: goto label_250500;
        case 0x250504u: goto label_250504;
        case 0x250508u: goto label_250508;
        case 0x25050cu: goto label_25050c;
        case 0x250510u: goto label_250510;
        case 0x250514u: goto label_250514;
        case 0x250518u: goto label_250518;
        case 0x25051cu: goto label_25051c;
        case 0x250520u: goto label_250520;
        case 0x250524u: goto label_250524;
        case 0x250528u: goto label_250528;
        case 0x25052cu: goto label_25052c;
        case 0x250530u: goto label_250530;
        case 0x250534u: goto label_250534;
        case 0x250538u: goto label_250538;
        case 0x25053cu: goto label_25053c;
        case 0x250540u: goto label_250540;
        case 0x250544u: goto label_250544;
        case 0x250548u: goto label_250548;
        case 0x25054cu: goto label_25054c;
        case 0x250550u: goto label_250550;
        case 0x250554u: goto label_250554;
        case 0x250558u: goto label_250558;
        case 0x25055cu: goto label_25055c;
        case 0x250560u: goto label_250560;
        case 0x250564u: goto label_250564;
        case 0x250568u: goto label_250568;
        case 0x25056cu: goto label_25056c;
        case 0x250570u: goto label_250570;
        case 0x250574u: goto label_250574;
        case 0x250578u: goto label_250578;
        case 0x25057cu: goto label_25057c;
        case 0x250580u: goto label_250580;
        case 0x250584u: goto label_250584;
        case 0x250588u: goto label_250588;
        case 0x25058cu: goto label_25058c;
        case 0x250590u: goto label_250590;
        case 0x250594u: goto label_250594;
        case 0x250598u: goto label_250598;
        case 0x25059cu: goto label_25059c;
        case 0x2505a0u: goto label_2505a0;
        case 0x2505a4u: goto label_2505a4;
        case 0x2505a8u: goto label_2505a8;
        case 0x2505acu: goto label_2505ac;
        case 0x2505b0u: goto label_2505b0;
        case 0x2505b4u: goto label_2505b4;
        case 0x2505b8u: goto label_2505b8;
        case 0x2505bcu: goto label_2505bc;
        case 0x2505c0u: goto label_2505c0;
        case 0x2505c4u: goto label_2505c4;
        case 0x2505c8u: goto label_2505c8;
        case 0x2505ccu: goto label_2505cc;
        case 0x2505d0u: goto label_2505d0;
        case 0x2505d4u: goto label_2505d4;
        case 0x2505d8u: goto label_2505d8;
        case 0x2505dcu: goto label_2505dc;
        case 0x2505e0u: goto label_2505e0;
        case 0x2505e4u: goto label_2505e4;
        case 0x2505e8u: goto label_2505e8;
        case 0x2505ecu: goto label_2505ec;
        case 0x2505f0u: goto label_2505f0;
        case 0x2505f4u: goto label_2505f4;
        case 0x2505f8u: goto label_2505f8;
        default: break;
    }

    ctx->pc = 0x250500u;

label_250500:
    // 0x250500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_250504:
    // 0x250504: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x250504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250508:
    // 0x250508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25050c:
    // 0x25050c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_250510:
    if (ctx->pc == 0x250510u) {
        ctx->pc = 0x250510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25050Cu;
        // 0x250510: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250514u;
        goto label_250514;
    }
    ctx->pc = 0x25050Cu;
    {
        const bool branch_taken_0x25050c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x250510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25050Cu;
        // 0x250510: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25050c) {
            ctx->pc = 0x250530u;
            goto label_250530;
        }
    }
    ctx->pc = 0x250514u;
label_250514:
    // 0x250514: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250518:
    // 0x250518: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_25051c:
    // 0x25051c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25051cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250520:
    // 0x250520: 0x2484eab8  addiu       $a0, $a0, -0x1548
    ctx->pc = 0x250520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961848));
label_250524:
    // 0x250524: 0x24a5e9c8  addiu       $a1, $a1, -0x1638
    ctx->pc = 0x250524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
label_250528:
    // 0x250528: 0x8093f54  j           func_24FD50
label_25052c:
    if (ctx->pc == 0x25052Cu) {
        ctx->pc = 0x25052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250528u;
        // 0x25052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250530u;
        goto label_250530;
    }
    ctx->pc = 0x250528u;
    ctx->pc = 0x25052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250528u;
    // 0x25052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x250530u;
label_250530:
    // 0x250530: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x250530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_250534:
    // 0x250534: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_250538:
    if (ctx->pc == 0x250538u) {
        ctx->pc = 0x250538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250534u;
        // 0x250538: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25053Cu;
        goto label_25053c;
    }
    ctx->pc = 0x250534u;
    {
        const bool branch_taken_0x250534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250534) {
            ctx->pc = 0x250538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250534u;
            // 0x250538: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250558u;
            goto label_250558;
        }
    }
    ctx->pc = 0x25053Cu;
label_25053c:
    // 0x25053c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25053cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_250540:
    // 0x250540: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250544:
    // 0x250544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250548:
    // 0x250548: 0x2484eac8  addiu       $a0, $a0, -0x1538
    ctx->pc = 0x250548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961864));
label_25054c:
    // 0x25054c: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x25054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
label_250550:
    // 0x250550: 0x8093f54  j           func_24FD50
label_250554:
    if (ctx->pc == 0x250554u) {
        ctx->pc = 0x250554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250550u;
        // 0x250554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250558u;
        goto label_250558;
    }
    ctx->pc = 0x250550u;
    ctx->pc = 0x250554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250550u;
    // 0x250554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x250558u;
label_250558:
    // 0x250558: 0x18c00026  blez        $a2, . + 4 + (0x26 << 2)
label_25055c:
    if (ctx->pc == 0x25055Cu) {
        ctx->pc = 0x25055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250558u;
        // 0x25055c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250560u;
        goto label_250560;
    }
    ctx->pc = 0x250558u;
    {
        const bool branch_taken_0x250558 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x25055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250558u;
        // 0x25055c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250558) {
            ctx->pc = 0x2505F4u;
            goto label_2505f4;
        }
    }
    ctx->pc = 0x250560u;
label_250560:
    // 0x250560: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x250560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_250564:
    // 0x250564: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
label_250568:
    if (ctx->pc == 0x250568u) {
        ctx->pc = 0x25056Cu;
        goto label_25056c;
    }
    ctx->pc = 0x250564u;
    {
        const bool branch_taken_0x250564 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x250564) {
            ctx->pc = 0x2505F4u;
            goto label_2505f4;
        }
    }
    ctx->pc = 0x25056Cu;
label_25056c:
    // 0x25056c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_250570:
    if (ctx->pc == 0x250570u) {
        ctx->pc = 0x250570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25056Cu;
        // 0x250570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250574u;
        goto label_250574;
    }
    ctx->pc = 0x25056Cu;
    {
        const bool branch_taken_0x25056c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25056Cu;
        // 0x250570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25056c) {
            ctx->pc = 0x2505B8u;
            goto label_2505b8;
        }
    }
    ctx->pc = 0x250574u;
label_250574:
    // 0x250574: 0x54a20018  bnel        $a1, $v0, . + 4 + (0x18 << 2)
label_250578:
    if (ctx->pc == 0x250578u) {
        ctx->pc = 0x250578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250574u;
        // 0x250578: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25057Cu;
        goto label_25057c;
    }
    ctx->pc = 0x250574u;
    {
        const bool branch_taken_0x250574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x250574) {
            ctx->pc = 0x250578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250574u;
            // 0x250578: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2505D8u;
            goto label_2505d8;
        }
    }
    ctx->pc = 0x25057Cu;
label_25057c:
    // 0x25057c: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x25057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_250580:
    // 0x250580: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x250580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_250584:
    // 0x250584: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x250584u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_250588:
    // 0x250588: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x250588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_25058c:
    // 0x25058c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x25058cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_250590:
    // 0x250590: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x250590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_250594:
    // 0x250594: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x250594u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_250598:
    // 0x250598: 0x1263023  subu        $a2, $t1, $a2
    ctx->pc = 0x250598u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_25059c:
    // 0x25059c: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x25059cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_2505a0:
    // 0x2505a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2505a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2505a4:
    // 0x2505a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2505a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2505a8:
    // 0x2505a8: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x2505a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2505ac:
    // 0x2505ac: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x2505acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_2505b0:
    // 0x2505b0: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
label_2505b4:
    if (ctx->pc == 0x2505B4u) {
        ctx->pc = 0x2505B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505B0u;
        // 0x2505b4: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505B8u;
        goto label_2505b8;
    }
    ctx->pc = 0x2505B0u;
    {
        const bool branch_taken_0x2505b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2505B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505B0u;
        // 0x2505b4: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505b0) {
            ctx->pc = 0x2505F4u;
            goto label_2505f4;
        }
    }
    ctx->pc = 0x2505B8u;
label_2505b8:
    // 0x2505b8: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x2505b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_2505bc:
    // 0x2505bc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2505c0:
    if (ctx->pc == 0x2505C0u) {
        ctx->pc = 0x2505C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505BCu;
        // 0x2505c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505C4u;
        goto label_2505c4;
    }
    ctx->pc = 0x2505BCu;
    {
        const bool branch_taken_0x2505bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2505bc) {
            ctx->pc = 0x2505C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2505BCu;
            // 0x2505c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2505F4u;
            goto label_2505f4;
        }
    }
    ctx->pc = 0x2505C4u;
label_2505c4:
    // 0x2505c4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x2505c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_2505c8:
    // 0x2505c8: 0x40f809  jalr        $v0
label_2505cc:
    if (ctx->pc == 0x2505CCu) {
        ctx->pc = 0x2505CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505C8u;
        // 0x2505cc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505D0u;
        goto label_2505d0;
    }
    ctx->pc = 0x2505C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2505D0u);
        ctx->pc = 0x2505CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505C8u;
        // 0x2505cc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505C8u, 0x2505D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2505D0u;
label_2505d0:
    // 0x2505d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2505d4:
    if (ctx->pc == 0x2505D4u) {
        ctx->pc = 0x2505D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505D0u;
        // 0x2505d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505D8u;
        goto label_2505d8;
    }
    ctx->pc = 0x2505D0u;
    {
        const bool branch_taken_0x2505d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2505D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505D0u;
        // 0x2505d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505d0) {
            ctx->pc = 0x2505F4u;
            goto label_2505f4;
        }
    }
    ctx->pc = 0x2505D8u;
label_2505d8:
    // 0x2505d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2505d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2505dc:
    // 0x2505dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2505e0:
    if (ctx->pc == 0x2505E0u) {
        ctx->pc = 0x2505E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505DCu;
        // 0x2505e0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505E4u;
        goto label_2505e4;
    }
    ctx->pc = 0x2505DCu;
    {
        const bool branch_taken_0x2505dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2505E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505DCu;
        // 0x2505e0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505dc) {
            ctx->pc = 0x2505F0u;
            goto label_2505f0;
        }
    }
    ctx->pc = 0x2505E4u;
label_2505e4:
    // 0x2505e4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x2505e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_2505e8:
    // 0x2505e8: 0x40f809  jalr        $v0
label_2505ec:
    if (ctx->pc == 0x2505ECu) {
        ctx->pc = 0x2505ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505E8u;
        // 0x2505ec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505F0u;
        goto label_2505f0;
    }
    ctx->pc = 0x2505E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2505F0u);
        ctx->pc = 0x2505ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505E8u;
        // 0x2505ec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505E8u, 0x2505F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2505F0u;
label_2505f0:
    // 0x2505f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2505f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2505f4:
    // 0x2505f4: 0x3e00008  jr          $ra
label_2505f8:
    if (ctx->pc == 0x2505F8u) {
        ctx->pc = 0x2505F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505F4u;
        // 0x2505f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505FCu;
        goto label_fallthrough_0x2505f4;
    }
    ctx->pc = 0x2505F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2505F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505F4u;
        // 0x2505f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2505F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2505f4:
    ctx->pc = 0x2505FCu;
}
