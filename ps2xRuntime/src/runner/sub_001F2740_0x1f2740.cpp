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

// Function: sub_001F2740
// Address: 0x1f2740 - 0x1f2aa8
void sub_001F2740_0x1f2740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2740_0x1f2740");
#endif

    switch (ctx->pc) {
        case 0x1f2740u: goto label_1f2740;
        case 0x1f2744u: goto label_1f2744;
        case 0x1f2748u: goto label_1f2748;
        case 0x1f274cu: goto label_1f274c;
        case 0x1f2750u: goto label_1f2750;
        case 0x1f2754u: goto label_1f2754;
        case 0x1f2758u: goto label_1f2758;
        case 0x1f275cu: goto label_1f275c;
        case 0x1f2760u: goto label_1f2760;
        case 0x1f2764u: goto label_1f2764;
        case 0x1f2768u: goto label_1f2768;
        case 0x1f276cu: goto label_1f276c;
        case 0x1f2770u: goto label_1f2770;
        case 0x1f2774u: goto label_1f2774;
        case 0x1f2778u: goto label_1f2778;
        case 0x1f277cu: goto label_1f277c;
        case 0x1f2780u: goto label_1f2780;
        case 0x1f2784u: goto label_1f2784;
        case 0x1f2788u: goto label_1f2788;
        case 0x1f278cu: goto label_1f278c;
        case 0x1f2790u: goto label_1f2790;
        case 0x1f2794u: goto label_1f2794;
        case 0x1f2798u: goto label_1f2798;
        case 0x1f279cu: goto label_1f279c;
        case 0x1f27a0u: goto label_1f27a0;
        case 0x1f27a4u: goto label_1f27a4;
        case 0x1f27a8u: goto label_1f27a8;
        case 0x1f27acu: goto label_1f27ac;
        case 0x1f27b0u: goto label_1f27b0;
        case 0x1f27b4u: goto label_1f27b4;
        case 0x1f27b8u: goto label_1f27b8;
        case 0x1f27bcu: goto label_1f27bc;
        case 0x1f27c0u: goto label_1f27c0;
        case 0x1f27c4u: goto label_1f27c4;
        case 0x1f27c8u: goto label_1f27c8;
        case 0x1f27ccu: goto label_1f27cc;
        case 0x1f27d0u: goto label_1f27d0;
        case 0x1f27d4u: goto label_1f27d4;
        case 0x1f27d8u: goto label_1f27d8;
        case 0x1f27dcu: goto label_1f27dc;
        case 0x1f27e0u: goto label_1f27e0;
        case 0x1f27e4u: goto label_1f27e4;
        case 0x1f27e8u: goto label_1f27e8;
        case 0x1f27ecu: goto label_1f27ec;
        case 0x1f27f0u: goto label_1f27f0;
        case 0x1f27f4u: goto label_1f27f4;
        case 0x1f27f8u: goto label_1f27f8;
        case 0x1f27fcu: goto label_1f27fc;
        case 0x1f2800u: goto label_1f2800;
        case 0x1f2804u: goto label_1f2804;
        case 0x1f2808u: goto label_1f2808;
        case 0x1f280cu: goto label_1f280c;
        case 0x1f2810u: goto label_1f2810;
        case 0x1f2814u: goto label_1f2814;
        case 0x1f2818u: goto label_1f2818;
        case 0x1f281cu: goto label_1f281c;
        case 0x1f2820u: goto label_1f2820;
        case 0x1f2824u: goto label_1f2824;
        case 0x1f2828u: goto label_1f2828;
        case 0x1f282cu: goto label_1f282c;
        case 0x1f2830u: goto label_1f2830;
        case 0x1f2834u: goto label_1f2834;
        case 0x1f2838u: goto label_1f2838;
        case 0x1f283cu: goto label_1f283c;
        case 0x1f2840u: goto label_1f2840;
        case 0x1f2844u: goto label_1f2844;
        case 0x1f2848u: goto label_1f2848;
        case 0x1f284cu: goto label_1f284c;
        case 0x1f2850u: goto label_1f2850;
        case 0x1f2854u: goto label_1f2854;
        case 0x1f2858u: goto label_1f2858;
        case 0x1f285cu: goto label_1f285c;
        case 0x1f2860u: goto label_1f2860;
        case 0x1f2864u: goto label_1f2864;
        case 0x1f2868u: goto label_1f2868;
        case 0x1f286cu: goto label_1f286c;
        case 0x1f2870u: goto label_1f2870;
        case 0x1f2874u: goto label_1f2874;
        case 0x1f2878u: goto label_1f2878;
        case 0x1f287cu: goto label_1f287c;
        case 0x1f2880u: goto label_1f2880;
        case 0x1f2884u: goto label_1f2884;
        case 0x1f2888u: goto label_1f2888;
        case 0x1f288cu: goto label_1f288c;
        case 0x1f2890u: goto label_1f2890;
        case 0x1f2894u: goto label_1f2894;
        case 0x1f2898u: goto label_1f2898;
        case 0x1f289cu: goto label_1f289c;
        case 0x1f28a0u: goto label_1f28a0;
        case 0x1f28a4u: goto label_1f28a4;
        case 0x1f28a8u: goto label_1f28a8;
        case 0x1f28acu: goto label_1f28ac;
        case 0x1f28b0u: goto label_1f28b0;
        case 0x1f28b4u: goto label_1f28b4;
        case 0x1f28b8u: goto label_1f28b8;
        case 0x1f28bcu: goto label_1f28bc;
        case 0x1f28c0u: goto label_1f28c0;
        case 0x1f28c4u: goto label_1f28c4;
        case 0x1f28c8u: goto label_1f28c8;
        case 0x1f28ccu: goto label_1f28cc;
        case 0x1f28d0u: goto label_1f28d0;
        case 0x1f28d4u: goto label_1f28d4;
        case 0x1f28d8u: goto label_1f28d8;
        case 0x1f28dcu: goto label_1f28dc;
        case 0x1f28e0u: goto label_1f28e0;
        case 0x1f28e4u: goto label_1f28e4;
        case 0x1f28e8u: goto label_1f28e8;
        case 0x1f28ecu: goto label_1f28ec;
        case 0x1f28f0u: goto label_1f28f0;
        case 0x1f28f4u: goto label_1f28f4;
        case 0x1f28f8u: goto label_1f28f8;
        case 0x1f28fcu: goto label_1f28fc;
        case 0x1f2900u: goto label_1f2900;
        case 0x1f2904u: goto label_1f2904;
        case 0x1f2908u: goto label_1f2908;
        case 0x1f290cu: goto label_1f290c;
        case 0x1f2910u: goto label_1f2910;
        case 0x1f2914u: goto label_1f2914;
        case 0x1f2918u: goto label_1f2918;
        case 0x1f291cu: goto label_1f291c;
        case 0x1f2920u: goto label_1f2920;
        case 0x1f2924u: goto label_1f2924;
        case 0x1f2928u: goto label_1f2928;
        case 0x1f292cu: goto label_1f292c;
        case 0x1f2930u: goto label_1f2930;
        case 0x1f2934u: goto label_1f2934;
        case 0x1f2938u: goto label_1f2938;
        case 0x1f293cu: goto label_1f293c;
        case 0x1f2940u: goto label_1f2940;
        case 0x1f2944u: goto label_1f2944;
        case 0x1f2948u: goto label_1f2948;
        case 0x1f294cu: goto label_1f294c;
        case 0x1f2950u: goto label_1f2950;
        case 0x1f2954u: goto label_1f2954;
        case 0x1f2958u: goto label_1f2958;
        case 0x1f295cu: goto label_1f295c;
        case 0x1f2960u: goto label_1f2960;
        case 0x1f2964u: goto label_1f2964;
        case 0x1f2968u: goto label_1f2968;
        case 0x1f296cu: goto label_1f296c;
        case 0x1f2970u: goto label_1f2970;
        case 0x1f2974u: goto label_1f2974;
        case 0x1f2978u: goto label_1f2978;
        case 0x1f297cu: goto label_1f297c;
        case 0x1f2980u: goto label_1f2980;
        case 0x1f2984u: goto label_1f2984;
        case 0x1f2988u: goto label_1f2988;
        case 0x1f298cu: goto label_1f298c;
        case 0x1f2990u: goto label_1f2990;
        case 0x1f2994u: goto label_1f2994;
        case 0x1f2998u: goto label_1f2998;
        case 0x1f299cu: goto label_1f299c;
        case 0x1f29a0u: goto label_1f29a0;
        case 0x1f29a4u: goto label_1f29a4;
        case 0x1f29a8u: goto label_1f29a8;
        case 0x1f29acu: goto label_1f29ac;
        case 0x1f29b0u: goto label_1f29b0;
        case 0x1f29b4u: goto label_1f29b4;
        case 0x1f29b8u: goto label_1f29b8;
        case 0x1f29bcu: goto label_1f29bc;
        case 0x1f29c0u: goto label_1f29c0;
        case 0x1f29c4u: goto label_1f29c4;
        case 0x1f29c8u: goto label_1f29c8;
        case 0x1f29ccu: goto label_1f29cc;
        case 0x1f29d0u: goto label_1f29d0;
        case 0x1f29d4u: goto label_1f29d4;
        case 0x1f29d8u: goto label_1f29d8;
        case 0x1f29dcu: goto label_1f29dc;
        case 0x1f29e0u: goto label_1f29e0;
        case 0x1f29e4u: goto label_1f29e4;
        case 0x1f29e8u: goto label_1f29e8;
        case 0x1f29ecu: goto label_1f29ec;
        case 0x1f29f0u: goto label_1f29f0;
        case 0x1f29f4u: goto label_1f29f4;
        case 0x1f29f8u: goto label_1f29f8;
        case 0x1f29fcu: goto label_1f29fc;
        case 0x1f2a00u: goto label_1f2a00;
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a08u: goto label_1f2a08;
        case 0x1f2a0cu: goto label_1f2a0c;
        case 0x1f2a10u: goto label_1f2a10;
        case 0x1f2a14u: goto label_1f2a14;
        case 0x1f2a18u: goto label_1f2a18;
        case 0x1f2a1cu: goto label_1f2a1c;
        case 0x1f2a20u: goto label_1f2a20;
        case 0x1f2a24u: goto label_1f2a24;
        case 0x1f2a28u: goto label_1f2a28;
        case 0x1f2a2cu: goto label_1f2a2c;
        case 0x1f2a30u: goto label_1f2a30;
        case 0x1f2a34u: goto label_1f2a34;
        case 0x1f2a38u: goto label_1f2a38;
        case 0x1f2a3cu: goto label_1f2a3c;
        case 0x1f2a40u: goto label_1f2a40;
        case 0x1f2a44u: goto label_1f2a44;
        case 0x1f2a48u: goto label_1f2a48;
        case 0x1f2a4cu: goto label_1f2a4c;
        case 0x1f2a50u: goto label_1f2a50;
        case 0x1f2a54u: goto label_1f2a54;
        case 0x1f2a58u: goto label_1f2a58;
        case 0x1f2a5cu: goto label_1f2a5c;
        case 0x1f2a60u: goto label_1f2a60;
        case 0x1f2a64u: goto label_1f2a64;
        case 0x1f2a68u: goto label_1f2a68;
        case 0x1f2a6cu: goto label_1f2a6c;
        case 0x1f2a70u: goto label_1f2a70;
        case 0x1f2a74u: goto label_1f2a74;
        case 0x1f2a78u: goto label_1f2a78;
        case 0x1f2a7cu: goto label_1f2a7c;
        case 0x1f2a80u: goto label_1f2a80;
        case 0x1f2a84u: goto label_1f2a84;
        case 0x1f2a88u: goto label_1f2a88;
        case 0x1f2a8cu: goto label_1f2a8c;
        case 0x1f2a90u: goto label_1f2a90;
        case 0x1f2a94u: goto label_1f2a94;
        case 0x1f2a98u: goto label_1f2a98;
        case 0x1f2a9cu: goto label_1f2a9c;
        case 0x1f2aa0u: goto label_1f2aa0;
        case 0x1f2aa4u: goto label_1f2aa4;
        default: break;
    }

    ctx->pc = 0x1f2740u;

label_1f2740:
    // 0x1f2740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f2744:
    // 0x1f2744: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2748:
    // 0x1f2748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f274c:
    // 0x1f274c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f274cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1f2750:
    // 0x1f2750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f2754:
    // 0x1f2754: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f2754u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f2758:
    // 0x1f2758: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1f2758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1f275c:
    // 0x1f275c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f2760:
    if (ctx->pc == 0x1F2760u) {
        ctx->pc = 0x1F2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F275Cu;
        // 0x1f2760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2764u;
        goto label_1f2764;
    }
    ctx->pc = 0x1F275Cu;
    {
        const bool branch_taken_0x1f275c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F275Cu;
        // 0x1f2760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f275c) {
            ctx->pc = 0x1F2778u;
            goto label_1f2778;
        }
    }
    ctx->pc = 0x1F2764u;
label_1f2764:
    // 0x1f2764: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1f2764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_1f2768:
    // 0x1f2768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f276c:
    // 0x1f276c: 0xc0ceb48  jal         func_33AD20
label_1f2770:
    if (ctx->pc == 0x1F2770u) {
        ctx->pc = 0x1F2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F276Cu;
        // 0x1f2770: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2774u;
        goto label_1f2774;
    }
    ctx->pc = 0x1F276Cu;
    SET_GPR_U32(ctx, 31, 0x1F2774u);
    ctx->pc = 0x1F2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F276Cu;
    // 0x1f2770: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD20u, 0x1F276Cu, 0x1F2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2774u;
label_1f2774:
    // 0x1f2774: 0x0  nop
    ctx->pc = 0x1f2774u;
    // NOP
label_1f2778:
    // 0x1f2778: 0x9783881c  lhu         $v1, -0x77E4($gp)
    ctx->pc = 0x1f2778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
label_1f277c:
    // 0x1f277c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f2780:
    if (ctx->pc == 0x1F2780u) {
        ctx->pc = 0x1F2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F277Cu;
        // 0x1f2780: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2784u;
        goto label_1f2784;
    }
    ctx->pc = 0x1F277Cu;
    {
        const bool branch_taken_0x1f277c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F277Cu;
        // 0x1f2780: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f277c) {
            ctx->pc = 0x1F2798u;
            goto label_1f2798;
        }
    }
    ctx->pc = 0x1F2784u;
label_1f2784:
    // 0x1f2784: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2784u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2788:
    // 0x1f2788: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f2788u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f278c:
    // 0x1f278c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1f2790:
    // 0x1f2790: 0x106000c1  beqz        $v1, . + 4 + (0xC1 << 2)
label_1f2794:
    if (ctx->pc == 0x1F2794u) {
        ctx->pc = 0x1F2798u;
        goto label_1f2798;
    }
    ctx->pc = 0x1F2790u;
    {
        const bool branch_taken_0x1f2790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2790) {
            ctx->pc = 0x1F2A98u;
            goto label_1f2a98;
        }
    }
    ctx->pc = 0x1F2798u;
label_1f2798:
    // 0x1f2798: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f279c:
    // 0x1f279c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f279cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f27a0:
    // 0x1f27a0: 0x9022a3d9  lbu         $v0, -0x5C27($at)
    ctx->pc = 0x1f27a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943705)));
label_1f27a4:
    // 0x1f27a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f27a8:
    if (ctx->pc == 0x1F27A8u) {
        ctx->pc = 0x1F27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27A4u;
        // 0x1f27a8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27ACu;
        goto label_1f27ac;
    }
    ctx->pc = 0x1F27A4u;
    {
        const bool branch_taken_0x1f27a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27A4u;
        // 0x1f27a8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27a4) {
            ctx->pc = 0x1F27B8u;
            goto label_1f27b8;
        }
    }
    ctx->pc = 0x1F27ACu;
label_1f27ac:
    // 0x1f27ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f27acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f27b0:
    // 0x1f27b0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f27b4:
    // 0x1f27b4: 0xa022a3d9  sb          $v0, -0x5C27($at)
    ctx->pc = 0x1f27b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943705), (uint8_t)GPR_U32(ctx, 2));
label_1f27b8:
    // 0x1f27b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f27b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f27bc:
    // 0x1f27bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f27bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f27c0:
    // 0x1f27c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f27c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f27c4:
    // 0x1f27c4: 0x0  nop
    ctx->pc = 0x1f27c4u;
    // NOP
label_1f27c8:
    // 0x1f27c8: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1f27cc:
    // 0x1f27cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f27d0:
    if (ctx->pc == 0x1F27D0u) {
        ctx->pc = 0x1F27D4u;
        goto label_1f27d4;
    }
    ctx->pc = 0x1F27CCu;
    {
        const bool branch_taken_0x1f27cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f27cc) {
            ctx->pc = 0x1F2800u;
            goto label_1f2800;
        }
    }
    ctx->pc = 0x1F27D4u;
label_1f27d4:
    // 0x1f27d4: 0x84830280  lh          $v1, 0x280($a0)
    ctx->pc = 0x1f27d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 640)));
label_1f27d8:
    // 0x1f27d8: 0x84820380  lh          $v0, 0x380($a0)
    ctx->pc = 0x1f27d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 896)));
label_1f27dc:
    // 0x1f27dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f27e0:
    // 0x1f27e0: 0xa4820280  sh          $v0, 0x280($a0)
    ctx->pc = 0x1f27e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 640), (uint16_t)GPR_U32(ctx, 2));
label_1f27e4:
    // 0x1f27e4: 0x84820280  lh          $v0, 0x280($a0)
    ctx->pc = 0x1f27e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 640)));
label_1f27e8:
    // 0x1f27e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1f27e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1f27ec:
    // 0x1f27ec: 0xa4820280  sh          $v0, 0x280($a0)
    ctx->pc = 0x1f27ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 640), (uint16_t)GPR_U32(ctx, 2));
label_1f27f0:
    // 0x1f27f0: 0x84830280  lh          $v1, 0x280($a0)
    ctx->pc = 0x1f27f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 640)));
label_1f27f4:
    // 0x1f27f4: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x1f27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1f27f8:
    // 0x1f27f8: 0xa44300c2  sh          $v1, 0xC2($v0)
    ctx->pc = 0x1f27f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 3));
label_1f27fc:
    // 0x1f27fc: 0x0  nop
    ctx->pc = 0x1f27fcu;
    // NOP
label_1f2800:
    // 0x1f2800: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f2800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f2804:
    // 0x1f2804: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x1f2804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_1f2808:
    // 0x1f2808: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f2808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1f280c:
    // 0x1f280c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f2810:
    if (ctx->pc == 0x1F2810u) {
        ctx->pc = 0x1F2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F280Cu;
        // 0x1f2810: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2814u;
        goto label_1f2814;
    }
    ctx->pc = 0x1F280Cu;
    {
        const bool branch_taken_0x1f280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F280Cu;
        // 0x1f2810: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f280c) {
            ctx->pc = 0x1F27C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f27c8;
        }
    }
    ctx->pc = 0x1F2814u;
label_1f2814:
    // 0x1f2814: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x1f2814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
label_1f2818:
    // 0x1f2818: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f281c:
    if (ctx->pc == 0x1F281Cu) {
        ctx->pc = 0x1F2820u;
        goto label_1f2820;
    }
    ctx->pc = 0x1F2818u;
    {
        const bool branch_taken_0x1f2818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2818) {
            ctx->pc = 0x1F2850u;
            goto label_1f2850;
        }
    }
    ctx->pc = 0x1F2820u;
label_1f2820:
    // 0x1f2820: 0x92030036  lbu         $v1, 0x36($s0)
    ctx->pc = 0x1f2820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_1f2824:
    // 0x1f2824: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f2824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2828:
    // 0x1f2828: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1f282c:
    if (ctx->pc == 0x1F282Cu) {
        ctx->pc = 0x1F282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2828u;
        // 0x1f282c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2830u;
        goto label_1f2830;
    }
    ctx->pc = 0x1F2828u;
    {
        const bool branch_taken_0x1f2828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2828u;
        // 0x1f282c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2828) {
            ctx->pc = 0x1F2850u;
            goto label_1f2850;
        }
    }
    ctx->pc = 0x1F2830u;
label_1f2830:
    // 0x1f2830: 0xc07bdd0  jal         func_1EF740
label_1f2834:
    if (ctx->pc == 0x1F2834u) {
        ctx->pc = 0x1F2838u;
        goto label_1f2838;
    }
    ctx->pc = 0x1F2830u;
    SET_GPR_U32(ctx, 31, 0x1F2838u);
    ctx->pc = 0x1EF740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF740u, 0x1F2830u, 0x1F2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2838u;
label_1f2838:
    // 0x1f2838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f283c:
    if (ctx->pc == 0x1F283Cu) {
        ctx->pc = 0x1F283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2838u;
        // 0x1f283c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2840u;
        goto label_1f2840;
    }
    ctx->pc = 0x1F2838u;
    {
        const bool branch_taken_0x1f2838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2838u;
        // 0x1f283c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2838) {
            ctx->pc = 0x1F2850u;
            goto label_1f2850;
        }
    }
    ctx->pc = 0x1F2840u;
label_1f2840:
    // 0x1f2840: 0xc07bda8  jal         func_1EF6A0
label_1f2844:
    if (ctx->pc == 0x1F2844u) {
        ctx->pc = 0x1F2848u;
        goto label_1f2848;
    }
    ctx->pc = 0x1F2840u;
    SET_GPR_U32(ctx, 31, 0x1F2848u);
    ctx->pc = 0x1EF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6A0u, 0x1F2840u, 0x1F2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2848u;
label_1f2848:
    // 0x1f2848: 0x10000055  b           . + 4 + (0x55 << 2)
label_1f284c:
    if (ctx->pc == 0x1F284Cu) {
        ctx->pc = 0x1F2850u;
        goto label_1f2850;
    }
    ctx->pc = 0x1F2848u;
    {
        const bool branch_taken_0x1f2848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2848) {
            ctx->pc = 0x1F29A0u;
            goto label_1f29a0;
        }
    }
    ctx->pc = 0x1F2850u;
label_1f2850:
    // 0x1f2850: 0x92030036  lbu         $v1, 0x36($s0)
    ctx->pc = 0x1f2850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_1f2854:
    // 0x1f2854: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2858:
    // 0x1f2858: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_1f285c:
    if (ctx->pc == 0x1F285Cu) {
        ctx->pc = 0x1F285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2858u;
        // 0x1f285c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2860u;
        goto label_1f2860;
    }
    ctx->pc = 0x1F2858u;
    {
        const bool branch_taken_0x1f2858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2858u;
        // 0x1f285c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2858) {
            ctx->pc = 0x1F28F8u;
            goto label_1f28f8;
        }
    }
    ctx->pc = 0x1F2860u;
label_1f2860:
    // 0x1f2860: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_1f2864:
    if (ctx->pc == 0x1F2864u) {
        ctx->pc = 0x1F2868u;
        goto label_1f2868;
    }
    ctx->pc = 0x1F2860u;
    {
        const bool branch_taken_0x1f2860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2860) {
            ctx->pc = 0x1F28F0u;
            goto label_1f28f0;
        }
    }
    ctx->pc = 0x1F2868u;
label_1f2868:
    // 0x1f2868: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f286c:
    // 0x1f286c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_1f2870:
    if (ctx->pc == 0x1F2870u) {
        ctx->pc = 0x1F2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F286Cu;
        // 0x1f2870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2874u;
        goto label_1f2874;
    }
    ctx->pc = 0x1F286Cu;
    {
        const bool branch_taken_0x1f286c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F286Cu;
        // 0x1f2870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f286c) {
            ctx->pc = 0x1F28C8u;
            goto label_1f28c8;
        }
    }
    ctx->pc = 0x1F2874u;
label_1f2874:
    // 0x1f2874: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1f2878:
    if (ctx->pc == 0x1F2878u) {
        ctx->pc = 0x1F287Cu;
        goto label_1f287c;
    }
    ctx->pc = 0x1F2874u;
    {
        const bool branch_taken_0x1f2874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2874) {
            ctx->pc = 0x1F2898u;
            goto label_1f2898;
        }
    }
    ctx->pc = 0x1F287Cu;
label_1f287c:
    // 0x1f287c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1f2880:
    if (ctx->pc == 0x1F2880u) {
        ctx->pc = 0x1F2884u;
        goto label_1f2884;
    }
    ctx->pc = 0x1F287Cu;
    {
        const bool branch_taken_0x1f287c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f287c) {
            ctx->pc = 0x1F2890u;
            goto label_1f2890;
        }
    }
    ctx->pc = 0x1F2884u;
label_1f2884:
    // 0x1f2884: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1f2888:
    if (ctx->pc == 0x1F2888u) {
        ctx->pc = 0x1F288Cu;
        goto label_1f288c;
    }
    ctx->pc = 0x1F2884u;
    {
        const bool branch_taken_0x1f2884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2884) {
            ctx->pc = 0x1F28F8u;
            goto label_1f28f8;
        }
    }
    ctx->pc = 0x1F288Cu;
label_1f288c:
    // 0x1f288c: 0x0  nop
    ctx->pc = 0x1f288cu;
    // NOP
label_1f2890:
    // 0x1f2890: 0xa2020036  sb          $v0, 0x36($s0)
    ctx->pc = 0x1f2890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
label_1f2894:
    // 0x1f2894: 0x0  nop
    ctx->pc = 0x1f2894u;
    // NOP
label_1f2898:
    // 0x1f2898: 0xc07c4a4  jal         func_1F1290
label_1f289c:
    if (ctx->pc == 0x1F289Cu) {
        ctx->pc = 0x1F289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2898u;
        // 0x1f289c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28A0u;
        goto label_1f28a0;
    }
    ctx->pc = 0x1F2898u;
    SET_GPR_U32(ctx, 31, 0x1F28A0u);
    ctx->pc = 0x1F289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2898u;
    // 0x1f289c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1290u, 0x1F2898u, 0x1F28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28A0u;
label_1f28a0:
    // 0x1f28a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f28a4:
    if (ctx->pc == 0x1F28A4u) {
        ctx->pc = 0x1F28A8u;
        goto label_1f28a8;
    }
    ctx->pc = 0x1F28A0u;
    {
        const bool branch_taken_0x1f28a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f28a0) {
            ctx->pc = 0x1F28F8u;
            goto label_1f28f8;
        }
    }
    ctx->pc = 0x1F28A8u;
label_1f28a8:
    // 0x1f28a8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1f28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1f28ac:
    // 0x1f28ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f28acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f28b0:
    // 0x1f28b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f28b4:
    // 0x1f28b4: 0xc07bda8  jal         func_1EF6A0
label_1f28b8:
    if (ctx->pc == 0x1F28B8u) {
        ctx->pc = 0x1F28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28B4u;
        // 0x1f28b8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28BCu;
        goto label_1f28bc;
    }
    ctx->pc = 0x1F28B4u;
    SET_GPR_U32(ctx, 31, 0x1F28BCu);
    ctx->pc = 0x1F28B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28B4u;
    // 0x1f28b8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6A0u, 0x1F28B4u, 0x1F28BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28BCu;
label_1f28bc:
    // 0x1f28bc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f28c0:
    if (ctx->pc == 0x1F28C0u) {
        ctx->pc = 0x1F28C4u;
        goto label_1f28c4;
    }
    ctx->pc = 0x1F28BCu;
    {
        const bool branch_taken_0x1f28bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f28bc) {
            ctx->pc = 0x1F28F8u;
            goto label_1f28f8;
        }
    }
    ctx->pc = 0x1F28C4u;
label_1f28c4:
    // 0x1f28c4: 0x0  nop
    ctx->pc = 0x1f28c4u;
    // NOP
label_1f28c8:
    // 0x1f28c8: 0xc07bdc8  jal         func_1EF720
label_1f28cc:
    if (ctx->pc == 0x1F28CCu) {
        ctx->pc = 0x1F28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28C8u;
        // 0x1f28cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28D0u;
        goto label_1f28d0;
    }
    ctx->pc = 0x1F28C8u;
    SET_GPR_U32(ctx, 31, 0x1F28D0u);
    ctx->pc = 0x1F28CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28C8u;
    // 0x1f28cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF720u, 0x1F28C8u, 0x1F28D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28D0u;
label_1f28d0:
    // 0x1f28d0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1f28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1f28d4:
    // 0x1f28d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f28d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f28d8:
    // 0x1f28d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f28dc:
    // 0x1f28dc: 0xc07bda8  jal         func_1EF6A0
label_1f28e0:
    if (ctx->pc == 0x1F28E0u) {
        ctx->pc = 0x1F28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28DCu;
        // 0x1f28e0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28E4u;
        goto label_1f28e4;
    }
    ctx->pc = 0x1F28DCu;
    SET_GPR_U32(ctx, 31, 0x1F28E4u);
    ctx->pc = 0x1F28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28DCu;
    // 0x1f28e0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6A0u, 0x1F28DCu, 0x1F28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28E4u;
label_1f28e4:
    // 0x1f28e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f28e8:
    if (ctx->pc == 0x1F28E8u) {
        ctx->pc = 0x1F28ECu;
        goto label_1f28ec;
    }
    ctx->pc = 0x1F28E4u;
    {
        const bool branch_taken_0x1f28e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f28e4) {
            ctx->pc = 0x1F28F8u;
            goto label_1f28f8;
        }
    }
    ctx->pc = 0x1F28ECu;
label_1f28ec:
    // 0x1f28ec: 0x0  nop
    ctx->pc = 0x1f28ecu;
    // NOP
label_1f28f0:
    // 0x1f28f0: 0xc07c814  jal         func_1F2050
label_1f28f4:
    if (ctx->pc == 0x1F28F4u) {
        ctx->pc = 0x1F28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28F0u;
        // 0x1f28f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28F8u;
        goto label_1f28f8;
    }
    ctx->pc = 0x1F28F0u;
    SET_GPR_U32(ctx, 31, 0x1F28F8u);
    ctx->pc = 0x1F28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28F0u;
    // 0x1f28f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2050u, 0x1F28F0u, 0x1F28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28F8u;
label_1f28f8:
    // 0x1f28f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f28f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f28fc:
    // 0x1f28fc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2900:
    // 0x1f2900: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f2900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f2904:
    // 0x1f2904: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1f2904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1f2908:
    // 0x1f2908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1f290c:
    if (ctx->pc == 0x1F290Cu) {
        ctx->pc = 0x1F2910u;
        goto label_1f2910;
    }
    ctx->pc = 0x1F2908u;
    {
        const bool branch_taken_0x1f2908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2908) {
            ctx->pc = 0x1F2950u;
            goto label_1f2950;
        }
    }
    ctx->pc = 0x1F2910u;
label_1f2910:
    // 0x1f2910: 0x92020037  lbu         $v0, 0x37($s0)
    ctx->pc = 0x1f2910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
label_1f2914:
    // 0x1f2914: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1f2918:
    if (ctx->pc == 0x1F2918u) {
        ctx->pc = 0x1F291Cu;
        goto label_1f291c;
    }
    ctx->pc = 0x1F2914u;
    {
        const bool branch_taken_0x1f2914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2914) {
            ctx->pc = 0x1F2950u;
            goto label_1f2950;
        }
    }
    ctx->pc = 0x1F291Cu;
label_1f291c:
    // 0x1f291c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f2920:
    // 0x1f2920: 0xa2020037  sb          $v0, 0x37($s0)
    ctx->pc = 0x1f2920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
label_1f2924:
    // 0x1f2924: 0x92020037  lbu         $v0, 0x37($s0)
    ctx->pc = 0x1f2924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
label_1f2928:
    // 0x1f2928: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1f292c:
    if (ctx->pc == 0x1F292Cu) {
        ctx->pc = 0x1F292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2928u;
        // 0x1f292c: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2930u;
        goto label_1f2930;
    }
    ctx->pc = 0x1F2928u;
    {
        const bool branch_taken_0x1f2928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2928u;
        // 0x1f292c: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2928) {
            ctx->pc = 0x1F2950u;
            goto label_1f2950;
        }
    }
    ctx->pc = 0x1F2930u;
label_1f2930:
    // 0x1f2930: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f2930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f2934:
    // 0x1f2934: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1f2934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_1f2938:
    // 0x1f2938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f293c:
    // 0x1f293c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f293cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2940:
    // 0x1f2940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f2940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2944:
    // 0x1f2944: 0xc063cd0  jal         func_18F340
label_1f2948:
    if (ctx->pc == 0x1F2948u) {
        ctx->pc = 0x1F2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2944u;
        // 0x1f2948: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F294Cu;
        goto label_1f294c;
    }
    ctx->pc = 0x1F2944u;
    SET_GPR_U32(ctx, 31, 0x1F294Cu);
    ctx->pc = 0x1F2948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2944u;
    // 0x1f2948: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x1F2944u, 0x1F294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F294Cu;
label_1f294c:
    // 0x1f294c: 0x0  nop
    ctx->pc = 0x1f294cu;
    // NOP
label_1f2950:
    // 0x1f2950: 0xc07c404  jal         func_1F1010
label_1f2954:
    if (ctx->pc == 0x1F2954u) {
        ctx->pc = 0x1F2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2950u;
        // 0x1f2954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2958u;
        goto label_1f2958;
    }
    ctx->pc = 0x1F2950u;
    SET_GPR_U32(ctx, 31, 0x1F2958u);
    ctx->pc = 0x1F2954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2950u;
    // 0x1f2954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1010u, 0x1F2950u, 0x1F2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2958u;
label_1f2958:
    // 0x1f2958: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f295c:
    // 0x1f295c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f295cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2960:
    // 0x1f2960: 0x9423a3c6  lhu         $v1, -0x5C3A($at)
    ctx->pc = 0x1f2960u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943686)));
label_1f2964:
    // 0x1f2964: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1f2968:
    if (ctx->pc == 0x1F2968u) {
        ctx->pc = 0x1F2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2964u;
        // 0x1f2968: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F296Cu;
        goto label_1f296c;
    }
    ctx->pc = 0x1F2964u;
    {
        const bool branch_taken_0x1f2964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2964u;
        // 0x1f2968: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2964) {
            ctx->pc = 0x1F29A0u;
            goto label_1f29a0;
        }
    }
    ctx->pc = 0x1F296Cu;
label_1f296c:
    // 0x1f296c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1f296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1f2970:
    // 0x1f2970: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2970u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2974:
    // 0x1f2974: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f2978:
    // 0x1f2978: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f2978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f297c:
    // 0x1f297c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2980:
    // 0x1f2980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2984:
    // 0x1f2984: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1f2984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1f2988:
    // 0x1f2988: 0x320f809  jalr        $t9
label_1f298c:
    if (ctx->pc == 0x1F298Cu) {
        ctx->pc = 0x1F298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2988u;
        // 0x1f298c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2990u;
        goto label_1f2990;
    }
    ctx->pc = 0x1F2988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F2990u);
        ctx->pc = 0x1F298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2988u;
        // 0x1f298c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2988u, 0x1F2990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2990u;
label_1f2990:
    // 0x1f2990: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2994:
    // 0x1f2994: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2994u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2998:
    // 0x1f2998: 0xa420a3c6  sh          $zero, -0x5C3A($at)
    ctx->pc = 0x1f2998u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943686), (uint16_t)GPR_U32(ctx, 0));
label_1f299c:
    // 0x1f299c: 0x0  nop
    ctx->pc = 0x1f299cu;
    // NOP
label_1f29a0:
    // 0x1f29a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f29a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f29a4:
    // 0x1f29a4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f29a8:
    // 0x1f29a8: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f29a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f29ac:
    // 0x1f29ac: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1f29acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f29b0:
    // 0x1f29b0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_1f29b4:
    if (ctx->pc == 0x1F29B4u) {
        ctx->pc = 0x1F29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29B0u;
        // 0x1f29b4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F29B8u;
        goto label_1f29b8;
    }
    ctx->pc = 0x1F29B0u;
    {
        const bool branch_taken_0x1f29b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29B0u;
        // 0x1f29b4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29b0) {
            ctx->pc = 0x1F2A98u;
            goto label_1f2a98;
        }
    }
    ctx->pc = 0x1F29B8u;
label_1f29b8:
    // 0x1f29b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f29bc:
    // 0x1f29bc: 0x9023a3d9  lbu         $v1, -0x5C27($at)
    ctx->pc = 0x1f29bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943705)));
label_1f29c0:
    // 0x1f29c0: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_1f29c4:
    if (ctx->pc == 0x1F29C4u) {
        ctx->pc = 0x1F29C8u;
        goto label_1f29c8;
    }
    ctx->pc = 0x1F29C0u;
    {
        const bool branch_taken_0x1f29c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f29c0) {
            ctx->pc = 0x1F2A98u;
            goto label_1f2a98;
        }
    }
    ctx->pc = 0x1F29C8u;
label_1f29c8:
    // 0x1f29c8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x1f29c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
label_1f29cc:
    // 0x1f29cc: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x1f29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
label_1f29d0:
    // 0x1f29d0: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x1f29d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
label_1f29d4:
    // 0x1f29d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f29d8:
    if (ctx->pc == 0x1F29D8u) {
        ctx->pc = 0x1F29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29D4u;
        // 0x1f29d8: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F29DCu;
        goto label_1f29dc;
    }
    ctx->pc = 0x1F29D4u;
    {
        const bool branch_taken_0x1f29d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29D4u;
        // 0x1f29d8: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29d4) {
            ctx->pc = 0x1F29F0u;
            goto label_1f29f0;
        }
    }
    ctx->pc = 0x1F29DCu;
label_1f29dc:
    // 0x1f29dc: 0xc054568  jal         func_1515A0
label_1f29e0:
    if (ctx->pc == 0x1F29E0u) {
        ctx->pc = 0x1F29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29DCu;
        // 0x1f29e0: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F29E4u;
        goto label_1f29e4;
    }
    ctx->pc = 0x1F29DCu;
    SET_GPR_U32(ctx, 31, 0x1F29E4u);
    ctx->pc = 0x1F29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29DCu;
    // 0x1f29e0: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x1F29DCu, 0x1F29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29E4u;
label_1f29e4:
    // 0x1f29e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1f29e8:
    if (ctx->pc == 0x1F29E8u) {
        ctx->pc = 0x1F29ECu;
        goto label_1f29ec;
    }
    ctx->pc = 0x1F29E4u;
    {
        const bool branch_taken_0x1f29e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f29e4) {
            ctx->pc = 0x1F2A08u;
            goto label_1f2a08;
        }
    }
    ctx->pc = 0x1F29ECu;
label_1f29ec:
    // 0x1f29ec: 0x0  nop
    ctx->pc = 0x1f29ecu;
    // NOP
label_1f29f0:
    // 0x1f29f0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x1f29f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
label_1f29f4:
    // 0x1f29f4: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x1f29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
label_1f29f8:
    // 0x1f29f8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1f29f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1f29fc:
    // 0x1f29fc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_1f2a00:
    if (ctx->pc == 0x1F2A00u) {
        ctx->pc = 0x1F2A04u;
        goto label_1f2a04;
    }
    ctx->pc = 0x1F29FCu;
    {
        const bool branch_taken_0x1f29fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f29fc) {
            ctx->pc = 0x1F2A98u;
            goto label_1f2a98;
        }
    }
    ctx->pc = 0x1F2A04u;
label_1f2a04:
    // 0x1f2a04: 0x0  nop
    ctx->pc = 0x1f2a04u;
    // NOP
label_1f2a08:
    // 0x1f2a08: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1f2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1f2a0c:
    // 0x1f2a0c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x1f2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2a10:
    // 0x1f2a10: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x1f2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_1f2a14:
    // 0x1f2a14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1f2a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f2a18:
    // 0x1f2a18: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x1f2a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_1f2a1c:
    // 0x1f2a1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f2a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2a20:
    // 0x1f2a20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f2a24:
    // 0x1f2a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2a28:
    // 0x1f2a28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1f2a28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1f2a2c:
    // 0x1f2a2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f2a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f2a30:
    // 0x1f2a30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f2a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2a34:
    // 0x1f2a34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f2a38:
    if (ctx->pc == 0x1F2A38u) {
        ctx->pc = 0x1F2A3Cu;
        goto label_1f2a3c;
    }
    ctx->pc = 0x1F2A34u;
    {
        const bool branch_taken_0x1f2a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2a34) {
            ctx->pc = 0x1F2A4Cu;
            goto label_1f2a4c;
        }
    }
    ctx->pc = 0x1F2A3Cu;
label_1f2a3c:
    // 0x1f2a3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f2a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f2a40:
    // 0x1f2a40: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f2a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1f2a44:
    // 0x1f2a44: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f2a48:
    if (ctx->pc == 0x1F2A48u) {
        ctx->pc = 0x1F2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A44u;
        // 0x1f2a48: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A4Cu;
        goto label_1f2a4c;
    }
    ctx->pc = 0x1F2A44u;
    {
        const bool branch_taken_0x1f2a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A44u;
        // 0x1f2a48: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a44) {
            ctx->pc = 0x1F2A68u;
            goto label_1f2a68;
        }
    }
    ctx->pc = 0x1F2A4Cu;
label_1f2a4c:
    // 0x1f2a4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f2a4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f2a50:
    // 0x1f2a50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1f2a54:
    // 0x1f2a54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f2a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f2a58:
    // 0x1f2a58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f2a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1f2a5c:
    // 0x1f2a5c: 0x0  nop
    ctx->pc = 0x1f2a5cu;
    // NOP
label_1f2a60:
    // 0x1f2a60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f2a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1f2a64:
    // 0x1f2a64: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2a68:
    // 0x1f2a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a6c:
    // 0x1f2a6c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2a70:
    // 0x1f2a70: 0xa023a3d9  sb          $v1, -0x5C27($at)
    ctx->pc = 0x1f2a70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943705), (uint8_t)GPR_U32(ctx, 3));
label_1f2a74:
    // 0x1f2a74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2a78:
    // 0x1f2a78: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2a7c:
    // 0x1f2a7c: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f2a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f2a80:
    // 0x1f2a80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2a84:
    // 0x1f2a84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f2a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1f2a88:
    // 0x1f2a88: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2a88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2a8c:
    // 0x1f2a8c: 0xc07c7d0  jal         func_1F1F40
label_1f2a90:
    if (ctx->pc == 0x1F2A90u) {
        ctx->pc = 0x1F2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A8Cu;
        // 0x1f2a90: 0xa422a3d6  sh          $v0, -0x5C2A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A94u;
        goto label_1f2a94;
    }
    ctx->pc = 0x1F2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A94u);
    ctx->pc = 0x1F2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A8Cu;
    // 0x1f2a90: 0xa422a3d6  sh          $v0, -0x5C2A($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F40u, 0x1F2A8Cu, 0x1F2A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A94u;
label_1f2a94:
    // 0x1f2a94: 0x0  nop
    ctx->pc = 0x1f2a94u;
    // NOP
label_1f2a98:
    // 0x1f2a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f2a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2a9c:
    // 0x1f2a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2aa0:
    // 0x1f2aa0: 0x3e00008  jr          $ra
label_1f2aa4:
    if (ctx->pc == 0x1F2AA4u) {
        ctx->pc = 0x1F2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AA0u;
        // 0x1f2aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2AA8u;
        goto label_fallthrough_0x1f2aa0;
    }
    ctx->pc = 0x1F2AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AA0u;
        // 0x1f2aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f2aa0:
    ctx->pc = 0x1F2AA8u;
}
