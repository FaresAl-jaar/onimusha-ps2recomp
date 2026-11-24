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

// Function: sub_001E24C0
// Address: 0x1e24c0 - 0x1e2598
void sub_001E24C0_0x1e24c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E24C0_0x1e24c0");
#endif

    switch (ctx->pc) {
        case 0x1e24c0u: goto label_1e24c0;
        case 0x1e24c4u: goto label_1e24c4;
        case 0x1e24c8u: goto label_1e24c8;
        case 0x1e24ccu: goto label_1e24cc;
        case 0x1e24d0u: goto label_1e24d0;
        case 0x1e24d4u: goto label_1e24d4;
        case 0x1e24d8u: goto label_1e24d8;
        case 0x1e24dcu: goto label_1e24dc;
        case 0x1e24e0u: goto label_1e24e0;
        case 0x1e24e4u: goto label_1e24e4;
        case 0x1e24e8u: goto label_1e24e8;
        case 0x1e24ecu: goto label_1e24ec;
        case 0x1e24f0u: goto label_1e24f0;
        case 0x1e24f4u: goto label_1e24f4;
        case 0x1e24f8u: goto label_1e24f8;
        case 0x1e24fcu: goto label_1e24fc;
        case 0x1e2500u: goto label_1e2500;
        case 0x1e2504u: goto label_1e2504;
        case 0x1e2508u: goto label_1e2508;
        case 0x1e250cu: goto label_1e250c;
        case 0x1e2510u: goto label_1e2510;
        case 0x1e2514u: goto label_1e2514;
        case 0x1e2518u: goto label_1e2518;
        case 0x1e251cu: goto label_1e251c;
        case 0x1e2520u: goto label_1e2520;
        case 0x1e2524u: goto label_1e2524;
        case 0x1e2528u: goto label_1e2528;
        case 0x1e252cu: goto label_1e252c;
        case 0x1e2530u: goto label_1e2530;
        case 0x1e2534u: goto label_1e2534;
        case 0x1e2538u: goto label_1e2538;
        case 0x1e253cu: goto label_1e253c;
        case 0x1e2540u: goto label_1e2540;
        case 0x1e2544u: goto label_1e2544;
        case 0x1e2548u: goto label_1e2548;
        case 0x1e254cu: goto label_1e254c;
        case 0x1e2550u: goto label_1e2550;
        case 0x1e2554u: goto label_1e2554;
        case 0x1e2558u: goto label_1e2558;
        case 0x1e255cu: goto label_1e255c;
        case 0x1e2560u: goto label_1e2560;
        case 0x1e2564u: goto label_1e2564;
        case 0x1e2568u: goto label_1e2568;
        case 0x1e256cu: goto label_1e256c;
        case 0x1e2570u: goto label_1e2570;
        case 0x1e2574u: goto label_1e2574;
        case 0x1e2578u: goto label_1e2578;
        case 0x1e257cu: goto label_1e257c;
        case 0x1e2580u: goto label_1e2580;
        case 0x1e2584u: goto label_1e2584;
        case 0x1e2588u: goto label_1e2588;
        case 0x1e258cu: goto label_1e258c;
        case 0x1e2590u: goto label_1e2590;
        case 0x1e2594u: goto label_1e2594;
        default: break;
    }

    ctx->pc = 0x1e24c0u;

label_1e24c0:
    // 0x1e24c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e24c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e24c4:
    // 0x1e24c4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e24c8:
    // 0x1e24c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e24c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e24cc:
    // 0x1e24cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e24ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e24d0:
    // 0x1e24d0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e24d4:
    // 0x1e24d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e24d8:
    if (ctx->pc == 0x1E24D8u) {
        ctx->pc = 0x1E24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24D4u;
        // 0x1e24d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24DCu;
        goto label_1e24dc;
    }
    ctx->pc = 0x1E24D4u;
    {
        const bool branch_taken_0x1e24d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24D4u;
        // 0x1e24d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24d4) {
            ctx->pc = 0x1E24E8u;
            goto label_1e24e8;
        }
    }
    ctx->pc = 0x1E24DCu;
label_1e24dc:
    // 0x1e24dc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1e24e0:
    if (ctx->pc == 0x1E24E0u) {
        ctx->pc = 0x1E24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24DCu;
        // 0x1e24e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24E4u;
        goto label_1e24e4;
    }
    ctx->pc = 0x1E24DCu;
    {
        const bool branch_taken_0x1e24dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24DCu;
        // 0x1e24e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24dc) {
            ctx->pc = 0x1E2588u;
            goto label_1e2588;
        }
    }
    ctx->pc = 0x1E24E4u;
label_1e24e4:
    // 0x1e24e4: 0x0  nop
    ctx->pc = 0x1e24e4u;
    // NOP
label_1e24e8:
    // 0x1e24e8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1e24ec:
    if (ctx->pc == 0x1E24ECu) {
        ctx->pc = 0x1E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E8u;
        // 0x1e24ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24F0u;
        goto label_1e24f0;
    }
    ctx->pc = 0x1E24E8u;
    {
        const bool branch_taken_0x1e24e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E8u;
        // 0x1e24ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24e8) {
            ctx->pc = 0x1E2518u;
            goto label_1e2518;
        }
    }
    ctx->pc = 0x1E24F0u;
label_1e24f0:
    // 0x1e24f0: 0xc07679c  jal         func_1D9E70
label_1e24f4:
    if (ctx->pc == 0x1E24F4u) {
        ctx->pc = 0x1E24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24F0u;
        // 0x1e24f4: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24F8u;
        goto label_1e24f8;
    }
    ctx->pc = 0x1E24F0u;
    SET_GPR_U32(ctx, 31, 0x1E24F8u);
    ctx->pc = 0x1E24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E24F0u;
    // 0x1e24f4: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E24F0u, 0x1E24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E24F8u;
label_1e24f8:
    // 0x1e24f8: 0x92080031  lbu         $t0, 0x31($s0)
    ctx->pc = 0x1e24f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
label_1e24fc:
    // 0x1e24fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e2500:
    // 0x1e2500: 0x92090032  lbu         $t1, 0x32($s0)
    ctx->pc = 0x1e2500u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
label_1e2504:
    // 0x1e2504: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1e2504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1e2508:
    // 0x1e2508: 0x860a0034  lh          $t2, 0x34($s0)
    ctx->pc = 0x1e2508u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1e250c:
    // 0x1e250c: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x1e250cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e2510:
    // 0x1e2510: 0xc096344  jal         func_258D10
label_1e2514:
    if (ctx->pc == 0x1E2514u) {
        ctx->pc = 0x1E2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2510u;
        // 0x1e2514: 0x26070060  addiu       $a3, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2518u;
        goto label_1e2518;
    }
    ctx->pc = 0x1E2510u;
    SET_GPR_U32(ctx, 31, 0x1E2518u);
    ctx->pc = 0x1E2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2510u;
    // 0x1e2514: 0x26070060  addiu       $a3, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D10u, 0x1E2510u, 0x1E2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2518u;
label_1e2518:
    // 0x1e2518: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1e2518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1e251c:
    // 0x1e251c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e2520:
    // 0x1e2520: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e2520u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e2524:
    // 0x1e2524: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e2524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2528:
    // 0x1e2528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e2528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e252c:
    // 0x1e252c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e252cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e2530:
    // 0x1e2530: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x1e2530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1e2534:
    // 0x1e2534: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e2538:
    if (ctx->pc == 0x1E2538u) {
        ctx->pc = 0x1E253Cu;
        goto label_1e253c;
    }
    ctx->pc = 0x1E2534u;
    {
        const bool branch_taken_0x1e2534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2534) {
            ctx->pc = 0x1E2558u;
            goto label_1e2558;
        }
    }
    ctx->pc = 0x1E253Cu;
label_1e253c:
    // 0x1e253c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e253cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2540:
    // 0x1e2540: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e2540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e2544:
    // 0x1e2544: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e2548:
    if (ctx->pc == 0x1E2548u) {
        ctx->pc = 0x1E2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2544u;
        // 0x1e2548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E254Cu;
        goto label_1e254c;
    }
    ctx->pc = 0x1E2544u;
    {
        const bool branch_taken_0x1e2544 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2544u;
        // 0x1e2548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2544) {
            ctx->pc = 0x1E2580u;
            goto label_1e2580;
        }
    }
    ctx->pc = 0x1E254Cu;
label_1e254c:
    // 0x1e254c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e254cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e2550:
    // 0x1e2550: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e2554:
    if (ctx->pc == 0x1E2554u) {
        ctx->pc = 0x1E2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2550u;
        // 0x1e2554: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2558u;
        goto label_1e2558;
    }
    ctx->pc = 0x1E2550u;
    {
        const bool branch_taken_0x1e2550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2550u;
        // 0x1e2554: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2550) {
            ctx->pc = 0x1E2580u;
            goto label_1e2580;
        }
    }
    ctx->pc = 0x1E2558u;
label_1e2558:
    // 0x1e2558: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e2558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e255c:
    // 0x1e255c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e255cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2560:
    // 0x1e2560: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e2564:
    if (ctx->pc == 0x1E2564u) {
        ctx->pc = 0x1E2568u;
        goto label_1e2568;
    }
    ctx->pc = 0x1E2560u;
    {
        const bool branch_taken_0x1e2560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2560) {
            ctx->pc = 0x1E2580u;
            goto label_1e2580;
        }
    }
    ctx->pc = 0x1E2568u;
label_1e2568:
    // 0x1e2568: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e2568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e256c:
    // 0x1e256c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e2570:
    // 0x1e2570: 0x320f809  jalr        $t9
label_1e2574:
    if (ctx->pc == 0x1E2574u) {
        ctx->pc = 0x1E2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2570u;
        // 0x1e2574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2578u;
        goto label_1e2578;
    }
    ctx->pc = 0x1E2570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2578u);
        ctx->pc = 0x1E2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2570u;
        // 0x1e2574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2570u, 0x1E2578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2578u;
label_1e2578:
    // 0x1e2578: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e257c:
    if (ctx->pc == 0x1E257Cu) {
        ctx->pc = 0x1E257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2578u;
        // 0x1e257c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2580u;
        goto label_1e2580;
    }
    ctx->pc = 0x1E2578u;
    {
        const bool branch_taken_0x1e2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2578u;
        // 0x1e257c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2578) {
            ctx->pc = 0x1E2588u;
            goto label_1e2588;
        }
    }
    ctx->pc = 0x1E2580u;
label_1e2580:
    // 0x1e2580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2584:
    // 0x1e2584: 0x0  nop
    ctx->pc = 0x1e2584u;
    // NOP
label_1e2588:
    // 0x1e2588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e258c:
    // 0x1e258c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e258cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2590:
    // 0x1e2590: 0x3e00008  jr          $ra
label_1e2594:
    if (ctx->pc == 0x1E2594u) {
        ctx->pc = 0x1E2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2590u;
        // 0x1e2594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2598u;
        goto label_fallthrough_0x1e2590;
    }
    ctx->pc = 0x1E2590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2590u;
        // 0x1e2594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2590:
    ctx->pc = 0x1E2598u;
}
