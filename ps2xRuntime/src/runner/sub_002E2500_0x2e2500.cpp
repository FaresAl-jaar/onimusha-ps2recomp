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

// Function: sub_002E2500
// Address: 0x2e2500 - 0x2e2a3c
void sub_002E2500_0x2e2500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2500_0x2e2500");
#endif

    switch (ctx->pc) {
        case 0x2e2568u: goto label_2e2568;
        case 0x2e2658u: goto label_2e2658;
        case 0x2e26d8u: goto label_2e26d8;
        case 0x2e27bcu: goto label_2e27bc;
        case 0x2e2820u: goto label_2e2820;
        case 0x2e2828u: goto label_2e2828;
        case 0x2e2844u: goto label_2e2844;
        case 0x2e2858u: goto label_2e2858;
        case 0x2e2870u: goto label_2e2870;
        case 0x2e2884u: goto label_2e2884;
        case 0x2e28d8u: goto label_2e28d8;
        case 0x2e29d8u: goto label_2e29d8;
        default: break;
    }

    ctx->pc = 0x2e2500u;

    // 0x2e2500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e2500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e2504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2508: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e2508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e250c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e2510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e2510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e2514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e251c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e251cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2520: 0x908406b2  lbu         $a0, 0x6B2($a0)
    ctx->pc = 0x2e2520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1714)));
    // 0x2e2524: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2E2524u;
    {
        const bool branch_taken_0x2e2524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2524u;
        // 0x2e2528: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2524) {
            ctx->pc = 0x2E26C0u;
            goto label_2e26c0;
        }
    }
    ctx->pc = 0x2E252Cu;
    // 0x2e252c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E252Cu;
    {
        const bool branch_taken_0x2e252c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e252c) {
            ctx->pc = 0x2E2550u;
            goto label_2e2550;
        }
    }
    ctx->pc = 0x2E2534u;
    // 0x2e2534: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2534u;
    {
        const bool branch_taken_0x2e2534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2534) {
            ctx->pc = 0x2E2548u;
            goto label_2e2548;
        }
    }
    ctx->pc = 0x2E253Cu;
    // 0x2e253c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x2E253Cu;
    {
        const bool branch_taken_0x2e253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e253c) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E2544u;
    // 0x2e2544: 0x0  nop
    ctx->pc = 0x2e2544u;
    // NOP
label_2e2548:
    // 0x2e2548: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2E2548u;
    {
        const bool branch_taken_0x2e2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2548u;
        // 0x2e254c: 0xa20306b1  sb          $v1, 0x6B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1713), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2548) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E2550u;
label_2e2550:
    // 0x2e2550: 0x920306b0  lbu         $v1, 0x6B0($s0)
    ctx->pc = 0x2e2550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x2e2554: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e2554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2558: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E2558u;
    {
        const bool branch_taken_0x2e2558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2558u;
        // 0x2e255c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2558) {
            ctx->pc = 0x2E26A0u;
            goto label_2e26a0;
        }
    }
    ctx->pc = 0x2E2560u;
    // 0x2e2560: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e2560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2564: 0x0  nop
    ctx->pc = 0x2e2564u;
    // NOP
label_2e2568:
    // 0x2e2568: 0x92250648  lbu         $a1, 0x648($s1)
    ctx->pc = 0x2e2568u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
    // 0x2e256c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2570: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2570u;
    {
        const bool branch_taken_0x2e2570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2570u;
        // 0x2e2574: 0x26320630  addiu       $s2, $s1, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2570) {
            ctx->pc = 0x2E2588u;
            goto label_2e2588;
        }
    }
    ctx->pc = 0x2E2578u;
    // 0x2e2578: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2578u;
    {
        const bool branch_taken_0x2e2578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2578) {
            ctx->pc = 0x2E2588u;
            goto label_2e2588;
        }
    }
    ctx->pc = 0x2E2580u;
    // 0x2e2580: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E2580u;
    {
        const bool branch_taken_0x2e2580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2580) {
            ctx->pc = 0x2E2688u;
            goto label_2e2688;
        }
    }
    ctx->pc = 0x2E2588u;
label_2e2588:
    // 0x2e2588: 0x92440019  lbu         $a0, 0x19($s2)
    ctx->pc = 0x2e2588u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
    // 0x2e258c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2590: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E2590u;
    {
        const bool branch_taken_0x2e2590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2590u;
        // 0x2e2594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2590) {
            ctx->pc = 0x2E2608u;
            goto label_2e2608;
        }
    }
    ctx->pc = 0x2E2598u;
    // 0x2e2598: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e259c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E259Cu;
    {
        const bool branch_taken_0x2e259c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E259Cu;
        // 0x2e25a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e259c) {
            ctx->pc = 0x2E2600u;
            goto label_2e2600;
        }
    }
    ctx->pc = 0x2E25A4u;
    // 0x2e25a4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E25A4u;
    {
        const bool branch_taken_0x2e25a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e25a4) {
            ctx->pc = 0x2E25E0u;
            goto label_2e25e0;
        }
    }
    ctx->pc = 0x2E25ACu;
    // 0x2e25ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E25ACu;
    {
        const bool branch_taken_0x2e25ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25ac) {
            ctx->pc = 0x2E25C0u;
            goto label_2e25c0;
        }
    }
    ctx->pc = 0x2E25B4u;
    // 0x2e25b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E25B4u;
    {
        const bool branch_taken_0x2e25b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e25b4) {
            ctx->pc = 0x2E2610u;
            goto label_2e2610;
        }
    }
    ctx->pc = 0x2E25BCu;
    // 0x2e25bc: 0x0  nop
    ctx->pc = 0x2e25bcu;
    // NOP
label_2e25c0:
    // 0x2e25c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2e25c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2e25c4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2e25c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2e25c8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2e25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2e25cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e25d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e25d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E25D4u;
    {
        const bool branch_taken_0x2e25d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25D4u;
        // 0x2e25d8: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25d4) {
            ctx->pc = 0x2E2610u;
            goto label_2e2610;
        }
    }
    ctx->pc = 0x2E25DCu;
    // 0x2e25dc: 0x0  nop
    ctx->pc = 0x2e25dcu;
    // NOP
label_2e25e0:
    // 0x2e25e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2e25e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2e25e4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2e25e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2e25e8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2e25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2e25ec: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2e25ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2e25f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e25f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e25f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e25f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E25F8u;
    {
        const bool branch_taken_0x2e25f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25F8u;
        // 0x2e25fc: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e25f8) {
            ctx->pc = 0x2E2610u;
            goto label_2e2610;
        }
    }
    ctx->pc = 0x2E2600u;
label_2e2600:
    // 0x2e2600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2600u;
    {
        const bool branch_taken_0x2e2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2600u;
        // 0x2e2604: 0x8f868060  lw          $a2, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2600) {
            ctx->pc = 0x2E2610u;
            goto label_2e2610;
        }
    }
    ctx->pc = 0x2E2608u;
label_2e2608:
    // 0x2e2608: 0x8f868064  lw          $a2, -0x7F9C($gp)
    ctx->pc = 0x2e2608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x2e260c: 0x0  nop
    ctx->pc = 0x2e260cu;
    // NOP
label_2e2610:
    // 0x2e2610: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E2610u;
    {
        const bool branch_taken_0x2e2610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2610) {
            ctx->pc = 0x2E2688u;
            goto label_2e2688;
        }
    }
    ctx->pc = 0x2E2618u;
    // 0x2e2618: 0x8cc4004c  lw          $a0, 0x4C($a2)
    ctx->pc = 0x2e2618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2e261c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E261Cu;
    {
        const bool branch_taken_0x2e261c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E261Cu;
        // 0x2e2620: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e261c) {
            ctx->pc = 0x2E2688u;
            goto label_2e2688;
        }
    }
    ctx->pc = 0x2E2624u;
    // 0x2e2624: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2624u;
    {
        const bool branch_taken_0x2e2624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2624) {
            ctx->pc = 0x2E2640u;
            goto label_2e2640;
        }
    }
    ctx->pc = 0x2E262Cu;
    // 0x2e262c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E262Cu;
    {
        const bool branch_taken_0x2e262c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e262c) {
            ctx->pc = 0x2E2640u;
            goto label_2e2640;
        }
    }
    ctx->pc = 0x2E2634u;
    // 0x2e2634: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2634u;
    {
        const bool branch_taken_0x2e2634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2634) {
            ctx->pc = 0x2E2670u;
            goto label_2e2670;
        }
    }
    ctx->pc = 0x2E263Cu;
    // 0x2e263c: 0x0  nop
    ctx->pc = 0x2e263cu;
    // NOP
label_2e2640:
    // 0x2e2640: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x2e2640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2e2644: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x2e2644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e2648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e2648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e264c: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x2e264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e2650: 0xc0b8298  jal         func_2E0A60
    ctx->pc = 0x2E2650u;
    SET_GPR_U32(ctx, 31, 0x2E2658u);
    ctx->pc = 0x2E2654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2650u;
    // 0x2e2654: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A60u, 0x2E2650u, 0x2E2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2658u;
label_2e2658:
    // 0x2e2658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2658u;
    {
        const bool branch_taken_0x2e2658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2658u;
        // 0x2e265c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2658) {
            ctx->pc = 0x2E2668u;
            goto label_2e2668;
        }
    }
    ctx->pc = 0x2E2660u;
    // 0x2e2660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2660u;
    {
        const bool branch_taken_0x2e2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2660u;
        // 0x2e2664: 0xa243001a  sb          $v1, 0x1A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2660) {
            ctx->pc = 0x2E2670u;
            goto label_2e2670;
        }
    }
    ctx->pc = 0x2E2668u;
label_2e2668:
    // 0x2e2668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e266c: 0xa243001a  sb          $v1, 0x1A($s2)
    ctx->pc = 0x2e266cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 26), (uint8_t)GPR_U32(ctx, 3));
label_2e2670:
    // 0x2e2670: 0x9244001a  lbu         $a0, 0x1A($s2)
    ctx->pc = 0x2e2670u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x2e2674: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2678: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2678u;
    {
        const bool branch_taken_0x2e2678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2678u;
        // 0x2e267c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2678) {
            ctx->pc = 0x2E2688u;
            goto label_2e2688;
        }
    }
    ctx->pc = 0x2E2680u;
    // 0x2e2680: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2680u;
    {
        const bool branch_taken_0x2e2680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2680u;
        // 0x2e2684: 0xa20306b1  sb          $v1, 0x6B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1713), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2680) {
            ctx->pc = 0x2E26A0u;
            goto label_2e26a0;
        }
    }
    ctx->pc = 0x2E2688u;
label_2e2688:
    // 0x2e2688: 0x920306b0  lbu         $v1, 0x6B0($s0)
    ctx->pc = 0x2e2688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x2e268c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e268cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e2690: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2e2690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2694: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2E2694u;
    {
        const bool branch_taken_0x2e2694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2694u;
        // 0x2e2698: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2694) {
            ctx->pc = 0x2E2568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2568;
        }
    }
    ctx->pc = 0x2E269Cu;
    // 0x2e269c: 0x0  nop
    ctx->pc = 0x2e269cu;
    // NOP
label_2e26a0:
    // 0x2e26a0: 0x920306b1  lbu         $v1, 0x6B1($s0)
    ctx->pc = 0x2e26a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1713)));
    // 0x2e26a4: 0x106000de  beqz        $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x2E26A4u;
    {
        const bool branch_taken_0x2e26a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e26a4) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E26ACu;
    // 0x2e26ac: 0x920306b2  lbu         $v1, 0x6B2($s0)
    ctx->pc = 0x2e26acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1714)));
    // 0x2e26b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e26b4: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x2E26B4u;
    {
        const bool branch_taken_0x2e26b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26B4u;
        // 0x2e26b8: 0xa20306b2  sb          $v1, 0x6B2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1714), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26b4) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E26BCu;
    // 0x2e26bc: 0x0  nop
    ctx->pc = 0x2e26bcu;
    // NOP
label_2e26c0:
    // 0x2e26c0: 0xa20006b1  sb          $zero, 0x6B1($s0)
    ctx->pc = 0x2e26c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1713), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e26c4: 0x920306b0  lbu         $v1, 0x6B0($s0)
    ctx->pc = 0x2e26c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x2e26c8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e26c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e26cc: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x2E26CCu;
    {
        const bool branch_taken_0x2e26cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26CCu;
        // 0x2e26d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26cc) {
            ctx->pc = 0x2E28B0u;
            goto label_2e28b0;
        }
    }
    ctx->pc = 0x2E26D4u;
    // 0x2e26d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e26d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e26d8:
    // 0x2e26d8: 0x92440648  lbu         $a0, 0x648($s2)
    ctx->pc = 0x2e26d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1608)));
    // 0x2e26dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e26e0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E26E0u;
    {
        const bool branch_taken_0x2e26e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26E0u;
        // 0x2e26e4: 0x26530630  addiu       $s3, $s2, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26e0) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E26E8u;
    // 0x2e26e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e26ec: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E26ECu;
    {
        const bool branch_taken_0x2e26ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26ECu;
        // 0x2e26f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26ec) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E26F4u;
    // 0x2e26f4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E26F4u;
    {
        const bool branch_taken_0x2e26f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e26f4) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E26FCu;
    // 0x2e26fc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2E26FCu;
    {
        const bool branch_taken_0x2e26fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e26fc) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E2704u;
    // 0x2e2704: 0x0  nop
    ctx->pc = 0x2e2704u;
    // NOP
label_2e2708:
    // 0x2e2708: 0x92640019  lbu         $a0, 0x19($s3)
    ctx->pc = 0x2e2708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
    // 0x2e270c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2710: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E2710u;
    {
        const bool branch_taken_0x2e2710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2710u;
        // 0x2e2714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2710) {
            ctx->pc = 0x2E2788u;
            goto label_2e2788;
        }
    }
    ctx->pc = 0x2E2718u;
    // 0x2e2718: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e271c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E271Cu;
    {
        const bool branch_taken_0x2e271c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E271Cu;
        // 0x2e2720: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e271c) {
            ctx->pc = 0x2E2780u;
            goto label_2e2780;
        }
    }
    ctx->pc = 0x2E2724u;
    // 0x2e2724: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2724u;
    {
        const bool branch_taken_0x2e2724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2724) {
            ctx->pc = 0x2E2760u;
            goto label_2e2760;
        }
    }
    ctx->pc = 0x2E272Cu;
    // 0x2e272c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E272Cu;
    {
        const bool branch_taken_0x2e272c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e272c) {
            ctx->pc = 0x2E2740u;
            goto label_2e2740;
        }
    }
    ctx->pc = 0x2E2734u;
    // 0x2e2734: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2734u;
    {
        const bool branch_taken_0x2e2734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2734) {
            ctx->pc = 0x2E2790u;
            goto label_2e2790;
        }
    }
    ctx->pc = 0x2E273Cu;
    // 0x2e273c: 0x0  nop
    ctx->pc = 0x2e273cu;
    // NOP
label_2e2740:
    // 0x2e2740: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2e2740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2e2744: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2e2744u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2e2748: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2e2748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2e274c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e274cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e2750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2754: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2754u;
    {
        const bool branch_taken_0x2e2754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2754u;
        // 0x2e2758: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2754) {
            ctx->pc = 0x2E2790u;
            goto label_2e2790;
        }
    }
    ctx->pc = 0x2E275Cu;
    // 0x2e275c: 0x0  nop
    ctx->pc = 0x2e275cu;
    // NOP
label_2e2760:
    // 0x2e2760: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2e2760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2e2764: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2e2764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2e2768: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2e2768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2e276c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2e276cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2e2770: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e2770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e2774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2778: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2778u;
    {
        const bool branch_taken_0x2e2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2778u;
        // 0x2e277c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2778) {
            ctx->pc = 0x2E2790u;
            goto label_2e2790;
        }
    }
    ctx->pc = 0x2E2780u;
label_2e2780:
    // 0x2e2780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2780u;
    {
        const bool branch_taken_0x2e2780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2780u;
        // 0x2e2784: 0x8f858060  lw          $a1, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2780) {
            ctx->pc = 0x2E2790u;
            goto label_2e2790;
        }
    }
    ctx->pc = 0x2E2788u;
label_2e2788:
    // 0x2e2788: 0x8f858064  lw          $a1, -0x7F9C($gp)
    ctx->pc = 0x2e2788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x2e278c: 0x0  nop
    ctx->pc = 0x2e278cu;
    // NOP
label_2e2790:
    // 0x2e2790: 0x10a00041  beqz        $a1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E2790u;
    {
        const bool branch_taken_0x2e2790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2790) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E2798u;
    // 0x2e2798: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x2e2798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2e279c: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E279Cu;
    {
        const bool branch_taken_0x2e279c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e279c) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E27A4u;
    // 0x2e27a4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2e27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2e27a8: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x2e27a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e27ac: 0xc66d0014  lwc1        $f13, 0x14($s3)
    ctx->pc = 0x2e27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e27b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e27b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27b4: 0xc0b8298  jal         func_2E0A60
    ctx->pc = 0x2E27B4u;
    SET_GPR_U32(ctx, 31, 0x2E27BCu);
    ctx->pc = 0x2E27B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E27B4u;
    // 0x2e27b8: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A60u, 0x2E27B4u, 0x2E27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E27BCu;
label_2e27bc:
    // 0x2e27bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E27BCu;
    {
        const bool branch_taken_0x2e27bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27BCu;
        // 0x2e27c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27bc) {
            ctx->pc = 0x2E27D0u;
            goto label_2e27d0;
        }
    }
    ctx->pc = 0x2E27C4u;
    // 0x2e27c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E27C4u;
    {
        const bool branch_taken_0x2e27c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27C4u;
        // 0x2e27c8: 0xa263001a  sb          $v1, 0x1A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27c4) {
            ctx->pc = 0x2E27D8u;
            goto label_2e27d8;
        }
    }
    ctx->pc = 0x2E27CCu;
    // 0x2e27cc: 0x0  nop
    ctx->pc = 0x2e27ccu;
    // NOP
label_2e27d0:
    // 0x2e27d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e27d4: 0xa263001a  sb          $v1, 0x1A($s3)
    ctx->pc = 0x2e27d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 26), (uint8_t)GPR_U32(ctx, 3));
label_2e27d8:
    // 0x2e27d8: 0x9263001a  lbu         $v1, 0x1A($s3)
    ctx->pc = 0x2e27d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x2e27dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e27dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e27e0: 0x1065002d  beq         $v1, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E27E0u;
    {
        const bool branch_taken_0x2e27e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2e27e0) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E27E8u;
    // 0x2e27e8: 0x92640018  lbu         $a0, 0x18($s3)
    ctx->pc = 0x2e27e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2e27ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e27f0: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E27F0u;
    {
        const bool branch_taken_0x2e27f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E27F0u;
        // 0x2e27f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27f0) {
            ctx->pc = 0x2E2860u;
            goto label_2e2860;
        }
    }
    ctx->pc = 0x2E27F8u;
    // 0x2e27f8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E27F8u;
    {
        const bool branch_taken_0x2e27f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e27f8) {
            ctx->pc = 0x2E2830u;
            goto label_2e2830;
        }
    }
    ctx->pc = 0x2E2800u;
    // 0x2e2800: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e2800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2804: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2804u;
    {
        const bool branch_taken_0x2e2804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2804) {
            ctx->pc = 0x2E2818u;
            goto label_2e2818;
        }
    }
    ctx->pc = 0x2E280Cu;
    // 0x2e280c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E280Cu;
    {
        const bool branch_taken_0x2e280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e280c) {
            ctx->pc = 0x2E2888u;
            goto label_2e2888;
        }
    }
    ctx->pc = 0x2E2814u;
    // 0x2e2814: 0x0  nop
    ctx->pc = 0x2e2814u;
    // NOP
label_2e2818:
    // 0x2e2818: 0xc0b87e4  jal         func_2E1F90
    ctx->pc = 0x2E2818u;
    SET_GPR_U32(ctx, 31, 0x2E2820u);
    ctx->pc = 0x2E281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2818u;
    // 0x2e281c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F90u, 0x2E2818u, 0x2E2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2820u;
label_2e2820:
    // 0x2e2820: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E2820u;
    SET_GPR_U32(ctx, 31, 0x2E2828u);
    ctx->pc = 0x2E2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2820u;
    // 0x2e2824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E2820u, 0x2E2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2828u;
label_2e2828:
    // 0x2e2828: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2828u;
    {
        const bool branch_taken_0x2e2828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2828) {
            ctx->pc = 0x2E2888u;
            goto label_2e2888;
        }
    }
    ctx->pc = 0x2E2830u;
label_2e2830:
    // 0x2e2830: 0x8262001e  lb          $v0, 0x1E($s3)
    ctx->pc = 0x2e2830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2e2834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e283c: 0xc0b885c  jal         func_2E2170
    ctx->pc = 0x2E283Cu;
    SET_GPR_U32(ctx, 31, 0x2E2844u);
    ctx->pc = 0x2E2840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E283Cu;
    // 0x2e2840: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2170u, 0x2E283Cu, 0x2E2844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2844u;
label_2e2844:
    // 0x2e2844: 0x8263001e  lb          $v1, 0x1E($s3)
    ctx->pc = 0x2e2844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2e2848: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2848u;
    {
        const bool branch_taken_0x2e2848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2848u;
        // 0x2e284c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2848) {
            ctx->pc = 0x2E2888u;
            goto label_2e2888;
        }
    }
    ctx->pc = 0x2E2850u;
    // 0x2e2850: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E2850u;
    SET_GPR_U32(ctx, 31, 0x2E2858u);
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E2850u, 0x2E2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2858u;
label_2e2858:
    // 0x2e2858: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2858u;
    {
        const bool branch_taken_0x2e2858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2858) {
            ctx->pc = 0x2E2888u;
            goto label_2e2888;
        }
    }
    ctx->pc = 0x2E2860u;
label_2e2860:
    // 0x2e2860: 0x8262001e  lb          $v0, 0x1E($s3)
    ctx->pc = 0x2e2860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x2e2864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2868: 0xc0b88b8  jal         func_2E22E0
    ctx->pc = 0x2E2868u;
    SET_GPR_U32(ctx, 31, 0x2E2870u);
    ctx->pc = 0x2E286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2868u;
    // 0x2e286c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E22E0u, 0x2E2868u, 0x2E2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2870u;
label_2e2870:
    // 0x2e2870: 0x8263001c  lb          $v1, 0x1C($s3)
    ctx->pc = 0x2e2870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2e2874: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2874u;
    {
        const bool branch_taken_0x2e2874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2874u;
        // 0x2e2878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2874) {
            ctx->pc = 0x2E2888u;
            goto label_2e2888;
        }
    }
    ctx->pc = 0x2E287Cu;
    // 0x2e287c: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E287Cu;
    SET_GPR_U32(ctx, 31, 0x2E2884u);
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E287Cu, 0x2E2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2884u;
label_2e2884:
    // 0x2e2884: 0x0  nop
    ctx->pc = 0x2e2884u;
    // NOP
label_2e2888:
    // 0x2e2888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e288c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E288Cu;
    {
        const bool branch_taken_0x2e288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E288Cu;
        // 0x2e2890: 0xa20306b2  sb          $v1, 0x6B2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1714), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e288c) {
            ctx->pc = 0x2E28B0u;
            goto label_2e28b0;
        }
    }
    ctx->pc = 0x2E2894u;
    // 0x2e2894: 0x0  nop
    ctx->pc = 0x2e2894u;
    // NOP
label_2e2898:
    // 0x2e2898: 0x920306b0  lbu         $v1, 0x6B0($s0)
    ctx->pc = 0x2e2898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x2e289c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e289cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e28a0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2e28a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e28a4: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x2E28A4u;
    {
        const bool branch_taken_0x2e28a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28A4u;
        // 0x2e28a8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28a4) {
            ctx->pc = 0x2E26D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e26d8;
        }
    }
    ctx->pc = 0x2E28ACu;
    // 0x2e28ac: 0x0  nop
    ctx->pc = 0x2e28acu;
    // NOP
label_2e28b0:
    // 0x2e28b0: 0x920406b2  lbu         $a0, 0x6B2($s0)
    ctx->pc = 0x2e28b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1714)));
    // 0x2e28b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e28b8: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2E28B8u;
    {
        const bool branch_taken_0x2e28b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e28b8) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E28C0u;
    // 0x2e28c0: 0x920306b0  lbu         $v1, 0x6B0($s0)
    ctx->pc = 0x2e28c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x2e28c4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e28c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e28c8: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x2E28C8u;
    {
        const bool branch_taken_0x2e28c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28C8u;
        // 0x2e28cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28c8) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E28D0u;
    // 0x2e28d0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e28d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28d4: 0x0  nop
    ctx->pc = 0x2e28d4u;
    // NOP
label_2e28d8:
    // 0x2e28d8: 0x92460648  lbu         $a2, 0x648($s2)
    ctx->pc = 0x2e28d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1608)));
    // 0x2e28dc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E28DCu;
    {
        const bool branch_taken_0x2e28dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28DCu;
        // 0x2e28e0: 0x26530630  addiu       $s3, $s2, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e28dc) {
            ctx->pc = 0x2E28F8u;
            goto label_2e28f8;
        }
    }
    ctx->pc = 0x2E28E4u;
    // 0x2e28e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e28e8: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E28E8u;
    {
        const bool branch_taken_0x2e28e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e28e8) {
            ctx->pc = 0x2E28F8u;
            goto label_2e28f8;
        }
    }
    ctx->pc = 0x2E28F0u;
    // 0x2e28f0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2E28F0u;
    {
        const bool branch_taken_0x2e28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28f0) {
            ctx->pc = 0x2E2A08u;
            goto label_2e2a08;
        }
    }
    ctx->pc = 0x2E28F8u;
label_2e28f8:
    // 0x2e28f8: 0x92640019  lbu         $a0, 0x19($s3)
    ctx->pc = 0x2e28f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 25)));
    // 0x2e28fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2900: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E2900u;
    {
        const bool branch_taken_0x2e2900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2900u;
        // 0x2e2904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2900) {
            ctx->pc = 0x2E2978u;
            goto label_2e2978;
        }
    }
    ctx->pc = 0x2E2908u;
    // 0x2e2908: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e290c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E290Cu;
    {
        const bool branch_taken_0x2e290c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E290Cu;
        // 0x2e2910: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e290c) {
            ctx->pc = 0x2E2970u;
            goto label_2e2970;
        }
    }
    ctx->pc = 0x2E2914u;
    // 0x2e2914: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2914u;
    {
        const bool branch_taken_0x2e2914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2914) {
            ctx->pc = 0x2E2950u;
            goto label_2e2950;
        }
    }
    ctx->pc = 0x2E291Cu;
    // 0x2e291c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E291Cu;
    {
        const bool branch_taken_0x2e291c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e291c) {
            ctx->pc = 0x2E2930u;
            goto label_2e2930;
        }
    }
    ctx->pc = 0x2E2924u;
    // 0x2e2924: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2924u;
    {
        const bool branch_taken_0x2e2924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2924) {
            ctx->pc = 0x2E2980u;
            goto label_2e2980;
        }
    }
    ctx->pc = 0x2E292Cu;
    // 0x2e292c: 0x0  nop
    ctx->pc = 0x2e292cu;
    // NOP
label_2e2930:
    // 0x2e2930: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2e2930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2e2934: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2e2934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2e2938: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2e2938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2e293c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e293cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e2940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2944: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2944u;
    {
        const bool branch_taken_0x2e2944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2944u;
        // 0x2e2948: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2944) {
            ctx->pc = 0x2E2980u;
            goto label_2e2980;
        }
    }
    ctx->pc = 0x2E294Cu;
    // 0x2e294c: 0x0  nop
    ctx->pc = 0x2e294cu;
    // NOP
label_2e2950:
    // 0x2e2950: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2e2950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2e2954: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2e2954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2e2958: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2e2958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2e295c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2e295cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2e2960: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e2960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e2964: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2968: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2968u;
    {
        const bool branch_taken_0x2e2968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2968u;
        // 0x2e296c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2968) {
            ctx->pc = 0x2E2980u;
            goto label_2e2980;
        }
    }
    ctx->pc = 0x2E2970u;
label_2e2970:
    // 0x2e2970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2970u;
    {
        const bool branch_taken_0x2e2970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2970u;
        // 0x2e2974: 0x8f858060  lw          $a1, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2970) {
            ctx->pc = 0x2E2980u;
            goto label_2e2980;
        }
    }
    ctx->pc = 0x2E2978u;
label_2e2978:
    // 0x2e2978: 0x8f858064  lw          $a1, -0x7F9C($gp)
    ctx->pc = 0x2e2978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x2e297c: 0x0  nop
    ctx->pc = 0x2e297cu;
    // NOP
label_2e2980:
    // 0x2e2980: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E2980u;
    {
        const bool branch_taken_0x2e2980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2980) {
            ctx->pc = 0x2E2A08u;
            goto label_2e2a08;
        }
    }
    ctx->pc = 0x2E2988u;
    // 0x2e2988: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x2e2988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2e298c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E298Cu;
    {
        const bool branch_taken_0x2e298c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E298Cu;
        // 0x2e2990: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e298c) {
            ctx->pc = 0x2E2A08u;
            goto label_2e2a08;
        }
    }
    ctx->pc = 0x2E2994u;
    // 0x2e2994: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E2994u;
    {
        const bool branch_taken_0x2e2994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2994) {
            ctx->pc = 0x2E29C0u;
            goto label_2e29c0;
        }
    }
    ctx->pc = 0x2E299Cu;
    // 0x2e299c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E299Cu;
    {
        const bool branch_taken_0x2e299c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e299c) {
            ctx->pc = 0x2E29B0u;
            goto label_2e29b0;
        }
    }
    ctx->pc = 0x2E29A4u;
    // 0x2e29a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E29A4u;
    {
        const bool branch_taken_0x2e29a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e29a4) {
            ctx->pc = 0x2E29F0u;
            goto label_2e29f0;
        }
    }
    ctx->pc = 0x2E29ACu;
    // 0x2e29ac: 0x0  nop
    ctx->pc = 0x2e29acu;
    // NOP
label_2e29b0:
    // 0x2e29b0: 0x9264001a  lbu         $a0, 0x1A($s3)
    ctx->pc = 0x2e29b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x2e29b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e29b8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E29B8u;
    {
        const bool branch_taken_0x2e29b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e29b8) {
            ctx->pc = 0x2E29F0u;
            goto label_2e29f0;
        }
    }
    ctx->pc = 0x2E29C0u;
label_2e29c0:
    // 0x2e29c0: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x2e29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x2e29c4: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x2e29c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e29c8: 0xc66d0014  lwc1        $f13, 0x14($s3)
    ctx->pc = 0x2e29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e29cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e29ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e29d0: 0xc0b8298  jal         func_2E0A60
    ctx->pc = 0x2E29D0u;
    SET_GPR_U32(ctx, 31, 0x2E29D8u);
    ctx->pc = 0x2E29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E29D0u;
    // 0x2e29d4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A60u, 0x2E29D0u, 0x2E29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29D8u;
label_2e29d8:
    // 0x2e29d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E29D8u;
    {
        const bool branch_taken_0x2e29d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29D8u;
        // 0x2e29dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29d8) {
            ctx->pc = 0x2E29E8u;
            goto label_2e29e8;
        }
    }
    ctx->pc = 0x2E29E0u;
    // 0x2e29e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E29E0u;
    {
        const bool branch_taken_0x2e29e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29E0u;
        // 0x2e29e4: 0xa263001a  sb          $v1, 0x1A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29e0) {
            ctx->pc = 0x2E29F0u;
            goto label_2e29f0;
        }
    }
    ctx->pc = 0x2E29E8u;
label_2e29e8:
    // 0x2e29e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e29ec: 0xa263001a  sb          $v1, 0x1A($s3)
    ctx->pc = 0x2e29ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 26), (uint8_t)GPR_U32(ctx, 3));
label_2e29f0:
    // 0x2e29f0: 0x9264001a  lbu         $a0, 0x1A($s3)
    ctx->pc = 0x2e29f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x2e29f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e29f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E29F8u;
    {
        const bool branch_taken_0x2e29f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29F8u;
        // 0x2e29fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29f8) {
            ctx->pc = 0x2E2A08u;
            goto label_2e2a08;
        }
    }
    ctx->pc = 0x2E2A00u;
    // 0x2e2a00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2A00u;
    {
        const bool branch_taken_0x2e2a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A00u;
        // 0x2e2a04: 0xa20306b1  sb          $v1, 0x6B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1713), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a00) {
            ctx->pc = 0x2E2A20u;
            goto label_2e2a20;
        }
    }
    ctx->pc = 0x2E2A08u;
label_2e2a08:
    // 0x2e2a08: 0x920306b0  lbu         $v1, 0x6B0($s0)
    ctx->pc = 0x2e2a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x2e2a0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e2a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e2a10: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2e2a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2a14: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2E2A14u;
    {
        const bool branch_taken_0x2e2a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A14u;
        // 0x2e2a18: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a14) {
            ctx->pc = 0x2E28D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e28d8;
        }
    }
    ctx->pc = 0x2E2A1Cu;
    // 0x2e2a1c: 0x0  nop
    ctx->pc = 0x2e2a1cu;
    // NOP
label_2e2a20:
    // 0x2e2a20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e2a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e2a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e2a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A34u;
        // 0x2e2a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2A3Cu;
}
