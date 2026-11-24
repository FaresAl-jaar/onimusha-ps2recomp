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

// Function: sub_001C25D0
// Address: 0x1c25d0 - 0x1c2968
void sub_001C25D0_0x1c25d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C25D0_0x1c25d0");
#endif

    switch (ctx->pc) {
        case 0x1c260cu: goto label_1c260c;
        case 0x1c2628u: goto label_1c2628;
        case 0x1c2744u: goto label_1c2744;
        case 0x1c2750u: goto label_1c2750;
        case 0x1c2794u: goto label_1c2794;
        case 0x1c27d4u: goto label_1c27d4;
        case 0x1c27dcu: goto label_1c27dc;
        case 0x1c2808u: goto label_1c2808;
        case 0x1c2818u: goto label_1c2818;
        case 0x1c2828u: goto label_1c2828;
        case 0x1c2838u: goto label_1c2838;
        case 0x1c2880u: goto label_1c2880;
        case 0x1c28c8u: goto label_1c28c8;
        case 0x1c28dcu: goto label_1c28dc;
        case 0x1c2900u: goto label_1c2900;
        case 0x1c2910u: goto label_1c2910;
        case 0x1c2928u: goto label_1c2928;
        default: break;
    }

    ctx->pc = 0x1c25d0u;

    // 0x1c25d0: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1c25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1c25d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c25d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c25d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c25dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c25e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c25e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c25e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c25e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c25e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c25ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c25ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c25f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c25f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c25f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25f8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c25f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c25fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2604: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C2604u;
    SET_GPR_U32(ctx, 31, 0x1C260Cu);
    ctx->pc = 0x1C2608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2604u;
    // 0x1c2608: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C2604u, 0x1C260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C260Cu;
label_1c260c:
    // 0x1c260c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c260cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2618: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c2618u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c261c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2620: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x1c2624: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x1c2624u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
label_1c2628:
    // 0x1c2628: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c262c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1c262cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c2630: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c2634: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1c2634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c2638: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c263c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1c263cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1c2640: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1c2640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1c2644: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c2644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c2648: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c264c: 0x24ea0100  addiu       $t2, $a3, 0x100
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x1c2650: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c2650u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c2654: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c2654u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c2658: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c265c: 0x24cc0002  addiu       $t4, $a2, 0x2
    ctx->pc = 0x1c265cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1c2660: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1c2660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1c2664: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c2664u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c2668: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c2668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c266c: 0x24ea0200  addiu       $t2, $a3, 0x200
    ctx->pc = 0x1c266cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1c2670: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c2670u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c2674: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c2674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c2678: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c2678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c267c: 0x24cc0003  addiu       $t4, $a2, 0x3
    ctx->pc = 0x1c267cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1c2680: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1c2680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1c2684: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c2684u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c2688: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c2688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c268c: 0x24ea0300  addiu       $t2, $a3, 0x300
    ctx->pc = 0x1c268cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
    // 0x1c2690: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c2690u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c2694: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c2694u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c2698: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c2698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c269c: 0x24cc0004  addiu       $t4, $a2, 0x4
    ctx->pc = 0x1c269cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c26a0: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1c26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1c26a4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c26a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c26a8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c26a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c26ac: 0x24ea0400  addiu       $t2, $a3, 0x400
    ctx->pc = 0x1c26acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x1c26b0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c26b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c26b4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c26b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c26b8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c26b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c26bc: 0x24cc0005  addiu       $t4, $a2, 0x5
    ctx->pc = 0x1c26bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1c26c0: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1c26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1c26c4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c26c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c26c8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c26c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c26cc: 0x24ea0500  addiu       $t2, $a3, 0x500
    ctx->pc = 0x1c26ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x1c26d0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c26d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c26d4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c26d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c26d8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c26d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c26dc: 0x24cc0006  addiu       $t4, $a2, 0x6
    ctx->pc = 0x1c26dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1c26e0: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1c26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1c26e4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c26e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c26e8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c26e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c26ec: 0x24ea0600  addiu       $t2, $a3, 0x600
    ctx->pc = 0x1c26ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1536));
    // 0x1c26f0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c26f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c26f4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c26f8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c26f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c26fc: 0x24cc0007  addiu       $t4, $a2, 0x7
    ctx->pc = 0x1c26fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1c2700: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x1c2700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x1c2704: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c2704u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c2708: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c2708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c270c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1c270cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1c2710: 0x24ea0700  addiu       $t2, $a3, 0x700
    ctx->pc = 0x1c2710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x1c2714: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x1c2714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x1c2718: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c2718u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c271c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c271cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c2720: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c2720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c2724: 0xac47001c  sw          $a3, 0x1C($v0)
    ctx->pc = 0x1c2724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    // 0x1c2728: 0x2cc70100  sltiu       $a3, $a2, 0x100
    ctx->pc = 0x1c2728u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c272c: 0x14e0ffbe  bnez        $a3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1C272Cu;
    {
        const bool branch_taken_0x1c272c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C272Cu;
        // 0x1c2730: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c272c) {
            ctx->pc = 0x1C2628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2628;
        }
    }
    ctx->pc = 0x1C2734u;
    // 0x1c2734: 0x8e6578d0  lw          $a1, 0x78D0($s3)
    ctx->pc = 0x1c2734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1c2738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c273c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1C273Cu;
    SET_GPR_U32(ctx, 31, 0x1C2744u);
    ctx->pc = 0x1C2740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C273Cu;
    // 0x1c2740: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1C273Cu, 0x1C2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2744u;
label_1c2744:
    // 0x1c2744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2748: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C2748u;
    SET_GPR_U32(ctx, 31, 0x1C2750u);
    ctx->pc = 0x1C274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2748u;
    // 0x1c274c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C2748u, 0x1C2750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2750u;
label_1c2750:
    // 0x1c2750: 0x112182  srl         $a0, $s1, 6
    ctx->pc = 0x1c2750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x1c2754: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1c2758: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1c2758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c275c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2760: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c2760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c2764: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c2764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c2768: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c2768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c276c: 0x23eb8  dsll        $a3, $v0, 26
    ctx->pc = 0x1c276cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 26);
    // 0x1c2770: 0x533b8  dsll        $a2, $a1, 14
    ctx->pc = 0x1c2770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 14);
    // 0x1c2774: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c2774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c2778: 0x3c0201b0  lui         $v0, 0x1B0
    ctx->pc = 0x1c2778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)432 << 16));
    // 0x1c277c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c2780: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c278c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C278Cu;
    SET_GPR_U32(ctx, 31, 0x1C2794u);
    ctx->pc = 0x1C2790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C278Cu;
    // 0x1c2790: 0x479025  or          $s2, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C278Cu, 0x1C2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2794u;
label_1c2794:
    // 0x1c2794: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c2794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2798: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c2798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c279c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c27a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c27a4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c27a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c27a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c27a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c27ac: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1c27acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1c27b0: 0x9e6378d0  lwu         $v1, 0x78D0($s3)
    ctx->pc = 0x1c27b0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1c27b4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c27b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c27b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c27bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c27bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c27c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c27c4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c27c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c27c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c27c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c27cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C27CCu;
    SET_GPR_U32(ctx, 31, 0x1C27D4u);
    ctx->pc = 0x1C27D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27CCu;
    // 0x1c27d0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C27CCu, 0x1C27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27D4u;
label_1c27d4:
    // 0x1c27d4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1C27D4u;
    SET_GPR_U32(ctx, 31, 0x1C27DCu);
    ctx->pc = 0x1C27D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27D4u;
    // 0x1c27d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1C27D4u, 0x1C27DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27DCu;
label_1c27dc:
    // 0x1c27dc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1c27dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c27e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c27e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27e4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1c27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1c27e8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c27e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c27ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c27ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c27f0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c27f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c27f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c27f8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1c27f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c27fc: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1c27fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1c2800: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2800u;
    SET_GPR_U32(ctx, 31, 0x1C2808u);
    ctx->pc = 0x1C2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2800u;
    // 0x1c2804: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2800u, 0x1C2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2808u;
label_1c2808:
    // 0x1c2808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c280c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c2810: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2810u;
    SET_GPR_U32(ctx, 31, 0x1C2818u);
    ctx->pc = 0x1C2814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2810u;
    // 0x1c2814: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2810u, 0x1C2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2818u;
label_1c2818:
    // 0x1c2818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c281c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c281cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2820: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2820u;
    SET_GPR_U32(ctx, 31, 0x1C2828u);
    ctx->pc = 0x1C2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2820u;
    // 0x1c2824: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2820u, 0x1C2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2828u;
label_1c2828:
    // 0x1c2828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c282c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c282cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c2830: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2830u;
    SET_GPR_U32(ctx, 31, 0x1C2838u);
    ctx->pc = 0x1C2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2830u;
    // 0x1c2834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2830u, 0x1C2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2838u;
label_1c2838:
    // 0x1c2838: 0x8e6378c8  lw          $v1, 0x78C8($s3)
    ctx->pc = 0x1c2838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1c283c: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c283cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c2840: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1c2840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c2844: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C2844u;
    {
        const bool branch_taken_0x1c2844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2844u;
        // 0x1c2848: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2844) {
            ctx->pc = 0x1C2948u;
            goto label_1c2948;
        }
    }
    ctx->pc = 0x1C284Cu;
    // 0x1c284c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1c284cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c2850: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1c2850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c2854: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1c2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1c2858: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1c2858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1c285c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2860: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c2860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c2864: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c2864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c2868: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c2868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c286c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c2870: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x1c2870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c2874: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c2874u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c287c: 0x0  nop
    ctx->pc = 0x1c287cu;
    // NOP
label_1c2880:
    // 0x1c2880: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1c2880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c2884: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c2884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c2888: 0x9e6678c0  lwu         $a2, 0x78C0($s3)
    ctx->pc = 0x1c2888u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 30912)));
    // 0x1c288c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c288cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c2890: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1c2890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c2894: 0x8e6278c4  lw          $v0, 0x78C4($s3)
    ctx->pc = 0x1c2894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30916)));
    // 0x1c2898: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c2898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c289c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c28a0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c28a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c28a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c28a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c28ac: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c28acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c28b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c28b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c28b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c28b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c28b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c28bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c28bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c28c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C28C0u;
    SET_GPR_U32(ctx, 31, 0x1C28C8u);
    ctx->pc = 0x1C28C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28C0u;
    // 0x1c28c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C28C0u, 0x1C28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28C8u;
label_1c28c8:
    // 0x1c28c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c28cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c28ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c28d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C28D4u;
    SET_GPR_U32(ctx, 31, 0x1C28DCu);
    ctx->pc = 0x1C28D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28D4u;
    // 0x1c28d8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C28D4u, 0x1C28DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28DCu;
label_1c28dc:
    // 0x1c28dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c28e0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c28e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c28e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c28e8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c28e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c28ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c28ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c28f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c28f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c28f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C28F8u;
    SET_GPR_U32(ctx, 31, 0x1C2900u);
    ctx->pc = 0x1C28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28F8u;
    // 0x1c28fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C28F8u, 0x1C2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2900u;
label_1c2900:
    // 0x1c2900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2904: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2908: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2908u;
    SET_GPR_U32(ctx, 31, 0x1C2910u);
    ctx->pc = 0x1C290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2908u;
    // 0x1c290c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2908u, 0x1C2910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2910u;
label_1c2910:
    // 0x1c2910: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c2910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c2914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2918: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c2918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c291c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c2920: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2920u;
    SET_GPR_U32(ctx, 31, 0x1C2928u);
    ctx->pc = 0x1C2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2920u;
    // 0x1c2924: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2920u, 0x1C2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2928u;
label_1c2928:
    // 0x1c2928: 0x8e6378c8  lw          $v1, 0x78C8($s3)
    ctx->pc = 0x1c2928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1c292c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c292cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c2930: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c2930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c2934: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c2934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c2938: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1c2938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c293c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C293Cu;
    {
        const bool branch_taken_0x1c293c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C293Cu;
        // 0x1c2940: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c293c) {
            ctx->pc = 0x1C2880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2880;
        }
    }
    ctx->pc = 0x1C2944u;
    // 0x1c2944: 0x0  nop
    ctx->pc = 0x1c2944u;
    // NOP
label_1c2948:
    // 0x1c2948: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c2948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c294c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c294cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2950: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c2950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c295c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c295cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2960: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2960u;
        // 0x1c2964: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2968u;
}
