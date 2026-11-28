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

// Function: sub_00122700
// Address: 0x122700 - 0x1238c8
void sub_00122700_0x122700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122700_0x122700");
#endif

    switch (ctx->pc) {
        case 0x122774u: goto label_122774;
        case 0x1227f0u: goto label_1227f0;
        case 0x122810u: goto label_122810;
        case 0x122814u: goto label_122814;
        case 0x122840u: goto label_122840;
        case 0x122858u: goto label_122858;
        case 0x122898u: goto label_122898;
        case 0x1228f0u: goto label_1228f0;
        case 0x122900u: goto label_122900;
        case 0x122910u: goto label_122910;
        case 0x122920u: goto label_122920;
        case 0x12292cu: goto label_12292c;
        case 0x12293cu: goto label_12293c;
        case 0x122948u: goto label_122948;
        case 0x122954u: goto label_122954;
        case 0x122964u: goto label_122964;
        case 0x122974u: goto label_122974;
        case 0x122980u: goto label_122980;
        case 0x1229c4u: goto label_1229c4;
        case 0x1229f0u: goto label_1229f0;
        case 0x122a0cu: goto label_122a0c;
        case 0x122a74u: goto label_122a74;
        case 0x122a7cu: goto label_122a7c;
        case 0x122a90u: goto label_122a90;
        case 0x122abcu: goto label_122abc;
        case 0x122b30u: goto label_122b30;
        case 0x122b44u: goto label_122b44;
        case 0x122b5cu: goto label_122b5c;
        case 0x122b78u: goto label_122b78;
        case 0x122b7cu: goto label_122b7c;
        case 0x122b80u: goto label_122b80;
        case 0x122b94u: goto label_122b94;
        case 0x122bbcu: goto label_122bbc;
        case 0x122bd8u: goto label_122bd8;
        case 0x122be4u: goto label_122be4;
        case 0x122bf4u: goto label_122bf4;
        case 0x122c2cu: goto label_122c2c;
        case 0x122c40u: goto label_122c40;
        case 0x122c50u: goto label_122c50;
        case 0x122c5cu: goto label_122c5c;
        case 0x122c64u: goto label_122c64;
        case 0x122cd8u: goto label_122cd8;
        case 0x122ce4u: goto label_122ce4;
        case 0x122cf0u: goto label_122cf0;
        case 0x122d08u: goto label_122d08;
        case 0x122d14u: goto label_122d14;
        case 0x122d3cu: goto label_122d3c;
        case 0x122d48u: goto label_122d48;
        case 0x122d4cu: goto label_122d4c;
        case 0x122d54u: goto label_122d54;
        case 0x122d7cu: goto label_122d7c;
        case 0x122d80u: goto label_122d80;
        case 0x122d90u: goto label_122d90;
        case 0x122d98u: goto label_122d98;
        case 0x122da0u: goto label_122da0;
        case 0x122dacu: goto label_122dac;
        case 0x122db8u: goto label_122db8;
        case 0x122dc4u: goto label_122dc4;
        case 0x122de4u: goto label_122de4;
        case 0x122df4u: goto label_122df4;
        case 0x122e04u: goto label_122e04;
        case 0x122e14u: goto label_122e14;
        case 0x122e38u: goto label_122e38;
        case 0x122e58u: goto label_122e58;
        case 0x122e9cu: goto label_122e9c;
        case 0x122eacu: goto label_122eac;
        case 0x122efcu: goto label_122efc;
        case 0x122f10u: goto label_122f10;
        case 0x122f7cu: goto label_122f7c;
        case 0x122f90u: goto label_122f90;
        case 0x122fa4u: goto label_122fa4;
        case 0x122fb8u: goto label_122fb8;
        case 0x122fc0u: goto label_122fc0;
        case 0x122fd0u: goto label_122fd0;
        case 0x122fecu: goto label_122fec;
        case 0x123058u: goto label_123058;
        case 0x123064u: goto label_123064;
        case 0x123098u: goto label_123098;
        case 0x12309cu: goto label_12309c;
        case 0x1230b4u: goto label_1230b4;
        case 0x1230d0u: goto label_1230d0;
        case 0x1230e8u: goto label_1230e8;
        case 0x123104u: goto label_123104;
        case 0x123130u: goto label_123130;
        case 0x123174u: goto label_123174;
        case 0x123184u: goto label_123184;
        case 0x1231b4u: goto label_1231b4;
        case 0x1231d0u: goto label_1231d0;
        case 0x1231f0u: goto label_1231f0;
        case 0x123200u: goto label_123200;
        case 0x123218u: goto label_123218;
        case 0x123224u: goto label_123224;
        case 0x123234u: goto label_123234;
        case 0x123248u: goto label_123248;
        case 0x123260u: goto label_123260;
        case 0x123264u: goto label_123264;
        case 0x123270u: goto label_123270;
        case 0x123294u: goto label_123294;
        case 0x123298u: goto label_123298;
        case 0x1232a0u: goto label_1232a0;
        case 0x1232a4u: goto label_1232a4;
        case 0x1232b0u: goto label_1232b0;
        case 0x1232d0u: goto label_1232d0;
        case 0x12334cu: goto label_12334c;
        case 0x12335cu: goto label_12335c;
        case 0x1233ccu: goto label_1233cc;
        case 0x1233f0u: goto label_1233f0;
        case 0x1233f8u: goto label_1233f8;
        case 0x123414u: goto label_123414;
        case 0x12342cu: goto label_12342c;
        case 0x123434u: goto label_123434;
        case 0x123444u: goto label_123444;
        case 0x123454u: goto label_123454;
        case 0x123478u: goto label_123478;
        case 0x1234a8u: goto label_1234a8;
        case 0x1234b4u: goto label_1234b4;
        case 0x1234e4u: goto label_1234e4;
        case 0x1235acu: goto label_1235ac;
        case 0x1235b8u: goto label_1235b8;
        case 0x1235c0u: goto label_1235c0;
        case 0x1235c8u: goto label_1235c8;
        case 0x1235d4u: goto label_1235d4;
        case 0x1235e0u: goto label_1235e0;
        case 0x1235f8u: goto label_1235f8;
        case 0x123610u: goto label_123610;
        case 0x12361cu: goto label_12361c;
        case 0x123640u: goto label_123640;
        case 0x123654u: goto label_123654;
        case 0x12367cu: goto label_12367c;
        case 0x123680u: goto label_123680;
        case 0x123688u: goto label_123688;
        case 0x123694u: goto label_123694;
        case 0x1236a0u: goto label_1236a0;
        case 0x1236ccu: goto label_1236cc;
        case 0x1236d8u: goto label_1236d8;
        case 0x1236e8u: goto label_1236e8;
        case 0x1236f4u: goto label_1236f4;
        case 0x123700u: goto label_123700;
        case 0x12373cu: goto label_12373c;
        case 0x123774u: goto label_123774;
        case 0x123788u: goto label_123788;
        case 0x1237a0u: goto label_1237a0;
        case 0x1237b8u: goto label_1237b8;
        case 0x1237bcu: goto label_1237bc;
        case 0x1237dcu: goto label_1237dc;
        case 0x1237e0u: goto label_1237e0;
        case 0x12386cu: goto label_12386c;
        case 0x123874u: goto label_123874;
        case 0x12388cu: goto label_12388c;
        default: break;
    }

    ctx->pc = 0x122700u;

    // 0x122700: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x122700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x122704: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x122704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x122708: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x122708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x12270c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x12270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x122710: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x122710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122714: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x122714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x122718: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x122718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12271c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x12271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x122720: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x122720u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122724: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x122724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x122728: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x122728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x12272c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x12272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x122730: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x122730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x122734: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x122734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x122738: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x122738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12273c: 0x8c8d0040  lw          $t5, 0x40($a0)
    ctx->pc = 0x12273cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x122740: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x122740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x122744: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x122744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x122748: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x122748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x12274c: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x12274Cu;
    {
        const bool branch_taken_0x12274c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x122750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12274Cu;
        // 0x122750: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12274c) {
            ctx->pc = 0x122778u;
            goto label_122778;
        }
    }
    ctx->pc = 0x122754u;
    // 0x122754: 0x8c8f0044  lw          $t7, 0x44($a0)
    ctx->pc = 0x122754u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x122758: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x122758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12275c: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x12275cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x122760: 0x8c8e0044  lw          $t6, 0x44($a0)
    ctx->pc = 0x122760u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x122764: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x122764u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122768: 0x1cf7804  sllv        $t7, $t7, $t6
    ctx->pc = 0x122768u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
    // 0x12276c: 0xc049616  jal         func_125858
    ctx->pc = 0x12276Cu;
    SET_GPR_U32(ctx, 31, 0x122774u);
    ctx->pc = 0x122770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12276Cu;
    // 0x122770: 0xadaf0008  sw          $t7, 0x8($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x12276Cu, 0x122774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122774u;
label_122774:
    // 0x122774: 0xaea00040  sw          $zero, 0x40($s5)
    ctx->pc = 0x122774u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
label_122778:
    // 0x122778: 0x14703e  dsrl32      $t6, $s4, 0
    ctx->pc = 0x122778u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x12277c: 0xe683c  dsll32      $t5, $t6, 0
    ctx->pc = 0x12277cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << (32 + 0));
    // 0x122780: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x122780u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x122784: 0x5a3000b  bgezl       $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x122784u;
    {
        const bool branch_taken_0x122784 = (GPR_S64(ctx, 13) >= 0);
        if (branch_taken_0x122784) {
            ctx->pc = 0x122788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122784u;
            // 0x122788: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1227B4u;
            goto label_1227b4;
        }
    }
    ctx->pc = 0x12278Cu;
    // 0x12278c: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x12278cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x122790: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x122790u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122794: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x122794u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x122798: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x122798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x12279c: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x12279cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1227a0: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x1227a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x1227a4: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x1227a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x1227a8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1227a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1227ac: 0x28fa025  or          $s4, $s4, $t7
    ctx->pc = 0x1227acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
    // 0x1227b0: 0x14703e  dsrl32      $t6, $s4, 0
    ctx->pc = 0x1227b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) >> (32 + 0));
label_1227b4:
    // 0x1227b4: 0xe803c  dsll32      $s0, $t6, 0
    ctx->pc = 0x1227b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1227b8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1227b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1227bc: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x1227c0: 0x20e7824  and         $t7, $s0, $t6
    ctx->pc = 0x1227c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x1227c4: 0x15ee0022  bne         $t7, $t6, . + 4 + (0x22 << 2)
    ctx->pc = 0x1227C4u;
    {
        const bool branch_taken_0x1227c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x1227C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227C4u;
        // 0x1227c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227c4) {
            ctx->pc = 0x122850u;
            goto label_122850;
        }
    }
    ctx->pc = 0x1227CCu;
    // 0x1227cc: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x1227ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1227d0: 0x240e270f  addiu       $t6, $zero, 0x270F
    ctx->pc = 0x1227d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1227d4: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x1227d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1227d8: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x1227d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x1227dc: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x1227dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x1227e0: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1227E0u;
    {
        const bool branch_taken_0x1227e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1227E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227E0u;
        // 0x1227e4: 0xadae0000  sw          $t6, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227e0) {
            ctx->pc = 0x122844u;
            goto label_122844;
        }
    }
    ctx->pc = 0x1227E8u;
    // 0x1227e8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x1227e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x1227ec: 0x25f63b90  addiu       $s6, $t7, 0x3B90
    ctx->pc = 0x1227ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 15248));
label_1227f0:
    // 0x1227f0: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x1227f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1227f4: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1227F4u;
    {
        const bool branch_taken_0x1227f4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227F4u;
        // 0x1227f8: 0x26ce0008  addiu       $t6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227f4) {
            ctx->pc = 0x122810u;
            goto label_122810;
        }
    }
    ctx->pc = 0x1227FCu;
    // 0x1227fc: 0x82cf0003  lb          $t7, 0x3($s6)
    ctx->pc = 0x1227fcu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x122800: 0x26cd0003  addiu       $t5, $s6, 0x3
    ctx->pc = 0x122800u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x122804: 0x1af700a  movz        $t6, $t5, $t7
    ctx->pc = 0x122804u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 13));
    // 0x122808: 0x8faf0014  lw          $t7, 0x14($sp)
    ctx->pc = 0x122808u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12280c: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x12280cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
label_122810:
    // 0x122810: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x122810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_122814:
    // 0x122814: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x122814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122818: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x122818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12281c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12281cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122820: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x122820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122824: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x122824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x122828: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x122828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12282c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x12282cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122830: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x122830u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x122834: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x122834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x122838: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x122838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12283c: 0x3e00008  jr          $ra
label_122840:
    if (ctx->pc == 0x122840u) {
        ctx->pc = 0x122840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12283Cu;
        // 0x122840: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122844u;
        goto label_122844;
    }
    ctx->pc = 0x12283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12283Cu;
        // 0x122840: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12283Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122844u;
label_122844:
    // 0x122844: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x122844u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x122848: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x122848u;
    {
        const bool branch_taken_0x122848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122848u;
        // 0x12284c: 0x25f63ba0  addiu       $s6, $t7, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122848) {
            ctx->pc = 0x1227F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1227f0;
        }
    }
    ctx->pc = 0x122850u;
label_122850:
    // 0x122850: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122850u;
    SET_GPR_U32(ctx, 31, 0x122858u);
    ctx->pc = 0x122854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122850u;
    // 0x122854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122850u, 0x122858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122858u;
label_122858:
    // 0x122858: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x122858u;
    {
        const bool branch_taken_0x122858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122858u;
        // 0x12285c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122858) {
            ctx->pc = 0x122888u;
            goto label_122888;
        }
    }
    ctx->pc = 0x122860u;
    // 0x122860: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x122860u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x122864: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x122864u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122868: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x122868u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12286c: 0x25d63ba8  addiu       $s6, $t6, 0x3BA8
    ctx->pc = 0x12286cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 15272));
    // 0x122870: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x122870u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x122874: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x122874u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x122878: 0x11c0ffe5  beqz        $t6, . + 4 + (-0x1B << 2)
    ctx->pc = 0x122878u;
    {
        const bool branch_taken_0x122878 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122878u;
        // 0x12287c: 0x26cf0001  addiu       $t7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122878) {
            ctx->pc = 0x122810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122810;
        }
    }
    ctx->pc = 0x122880u;
    // 0x122880: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x122880u;
    {
        const bool branch_taken_0x122880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122880u;
        // 0x122884: 0xadcf0000  sw          $t7, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122880) {
            ctx->pc = 0x122810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122810;
        }
    }
    ctx->pc = 0x122888u;
label_122888:
    // 0x122888: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x122888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12288c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12288cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122890: 0xc049936  jal         func_1264D8
    ctx->pc = 0x122890u;
    SET_GPR_U32(ctx, 31, 0x122898u);
    ctx->pc = 0x122894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122890u;
    // 0x122894: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1264D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1264D8u, 0x122890u, 0x122898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122898u;
label_122898:
    // 0x122898: 0x107d02  srl         $t7, $s0, 20
    ctx->pc = 0x122898u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x12289c: 0x31f307ff  andi        $s3, $t7, 0x7FF
    ctx->pc = 0x12289cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x1228a0: 0x126003e4  beqz        $s3, . + 4 + (0x3E4 << 2)
    ctx->pc = 0x1228A0u;
    {
        const bool branch_taken_0x1228a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228A0u;
        // 0x1228a4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228a0) {
            ctx->pc = 0x123834u;
            goto label_123834;
        }
    }
    ctx->pc = 0x1228A8u;
    // 0x1228a8: 0x3c0f000f  lui         $t7, 0xF
    ctx->pc = 0x1228a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
    // 0x1228ac: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1228acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1228b0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1228b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1228b4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1228b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1228b8: 0x14703f  dsra32      $t6, $s4, 0
    ctx->pc = 0x1228b8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x1228bc: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1228bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1228c0: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x1228c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x1228c4: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x1228c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x1228c8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1228c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1228cc: 0x28cb824  and         $s7, $s4, $t4
    ctx->pc = 0x1228ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) & GPR_U64(ctx, 12));
    // 0x1228d0: 0x2eeb825  or          $s7, $s7, $t6
    ctx->pc = 0x1228d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
    // 0x1228d4: 0x3c0f3ff0  lui         $t7, 0x3FF0
    ctx->pc = 0x1228d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16368 << 16));
    // 0x1228d8: 0x17683e  dsrl32      $t5, $s7, 0
    ctx->pc = 0x1228d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x1228dc: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x1228dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x1228e0: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x1228e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x1228e4: 0x2ecb824  and         $s7, $s7, $t4
    ctx->pc = 0x1228e4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 12));
    // 0x1228e8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1228e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1228ec: 0x2edb825  or          $s7, $s7, $t5
    ctx->pc = 0x1228ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 13));
label_1228f0:
    // 0x1228f0: 0x240507ff  addiu       $a1, $zero, 0x7FF
    ctx->pc = 0x1228f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1228f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1228f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228f8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x1228F8u;
    SET_GPR_U32(ctx, 31, 0x122900u);
    ctx->pc = 0x1228FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228F8u;
    // 0x1228fc: 0x52cfc  dsll32      $a1, $a1, 19 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x1228F8u, 0x122900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122900u;
label_122900:
    // 0x122900: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x122900u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x122904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122908: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122908u;
    SET_GPR_U32(ctx, 31, 0x122910u);
    ctx->pc = 0x12290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122908u;
    // 0x12290c: 0xdde53bb0  ld          $a1, 0x3BB0($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 15280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122908u, 0x122910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122910u;
label_122910:
    // 0x122910: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x122914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122918: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x122918u;
    SET_GPR_U32(ctx, 31, 0x122920u);
    ctx->pc = 0x12291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122918u;
    // 0x12291c: 0xdde53bb8  ld          $a1, 0x3BB8($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 15288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x122918u, 0x122920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122920u;
label_122920:
    // 0x122920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122924: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x122924u;
    SET_GPR_U32(ctx, 31, 0x12292Cu);
    ctx->pc = 0x122928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122924u;
    // 0x122928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x122924u, 0x12292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12292Cu;
label_12292c:
    // 0x12292c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12292cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x122930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122934: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122934u;
    SET_GPR_U32(ctx, 31, 0x12293Cu);
    ctx->pc = 0x122938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122934u;
    // 0x122938: 0xdde53bc0  ld          $a1, 0x3BC0($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 15296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122934u, 0x12293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12293Cu;
label_12293c:
    // 0x12293c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12293cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122940: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x122940u;
    SET_GPR_U32(ctx, 31, 0x122948u);
    ctx->pc = 0x122944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122940u;
    // 0x122944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x122940u, 0x122948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122948u;
label_122948:
    // 0x122948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12294c: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x12294Cu;
    SET_GPR_U32(ctx, 31, 0x122954u);
    ctx->pc = 0x122950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12294Cu;
    // 0x122950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x12294Cu, 0x122954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122954u;
label_122954:
    // 0x122954: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x122954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x122958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12295c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12295Cu;
    SET_GPR_U32(ctx, 31, 0x122964u);
    ctx->pc = 0x122960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12295Cu;
    // 0x122960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12295Cu, 0x122964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122964u;
label_122964:
    // 0x122964: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x122964u;
    {
        const bool branch_taken_0x122964 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x122968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122964u;
        // 0x122968: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122964) {
            ctx->pc = 0x122994u;
            goto label_122994;
        }
    }
    ctx->pc = 0x12296Cu;
    // 0x12296c: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x12296Cu;
    SET_GPR_U32(ctx, 31, 0x122974u);
    ctx->pc = 0x122970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12296Cu;
    // 0x122970: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x12296Cu, 0x122974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122974u;
label_122974:
    // 0x122974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122978: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122978u;
    SET_GPR_U32(ctx, 31, 0x122980u);
    ctx->pc = 0x12297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122978u;
    // 0x12297c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122978u, 0x122980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122980u;
label_122980:
    // 0x122980: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x122980u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x122984: 0x25afffff  addiu       $t7, $t5, -0x1
    ctx->pc = 0x122984u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x122988: 0x1e2680b  movn        $t5, $t7, $v0
    ctx->pc = 0x122988u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 15));
    // 0x12298c: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x12298cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x122990: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x122990u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122994:
    // 0x122994: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x122994u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x122998: 0x2daf0017  sltiu       $t7, $t5, 0x17
    ctx->pc = 0x122998u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x12299c: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12299Cu;
    {
        const bool branch_taken_0x12299c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12299Cu;
        // 0x1229a0: 0xafae0034  sw          $t6, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12299c) {
            ctx->pc = 0x1229D8u;
            goto label_1229d8;
        }
    }
    ctx->pc = 0x1229A4u;
    // 0x1229a4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x1229a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x1229a8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1229a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1229ac: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x1229acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x1229b0: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x1229b4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1229b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1229b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1229b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229bc: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x1229BCu;
    SET_GPR_U32(ctx, 31, 0x1229C4u);
    ctx->pc = 0x1229C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229BCu;
    // 0x1229c0: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x1229BCu, 0x1229C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229C4u;
label_1229c4:
    // 0x1229c4: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x1229c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1229c8: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1229cc: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x1229ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1229d0: 0x1e2700b  movn        $t6, $t7, $v0
    ctx->pc = 0x1229d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x1229d4: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x1229d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
label_1229d8:
    // 0x1229d8: 0x2537823  subu        $t7, $s2, $s3
    ctx->pc = 0x1229d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1229dc: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x1229dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1229e0: 0x6020391  bltzl       $s0, . + 4 + (0x391 << 2)
    ctx->pc = 0x1229E0u;
    {
        const bool branch_taken_0x1229e0 = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x1229e0) {
            ctx->pc = 0x1229E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1229E0u;
            // 0x1229e4: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123828u;
            goto label_123828;
        }
    }
    ctx->pc = 0x1229E8u;
    // 0x1229e8: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x1229e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    // 0x1229ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1229ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1229f0:
    // 0x1229f0: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x1229f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1229f4: 0x5e00384  bltz        $t7, . + 4 + (0x384 << 2)
    ctx->pc = 0x1229F4u;
    {
        const bool branch_taken_0x1229f4 = (GPR_S64(ctx, 15) < 0);
        ctx->pc = 0x1229F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229F4u;
        // 0x1229f8: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229f4) {
            ctx->pc = 0x123808u;
            goto label_123808;
        }
    }
    ctx->pc = 0x1229FCu;
    // 0x1229fc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1229fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x122a00: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x122a00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x122a04: 0xafaf0040  sw          $t7, 0x40($sp)
    ctx->pc = 0x122a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 15));
    // 0x122a08: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x122a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
label_122a0c:
    // 0x122a0c: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x122a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122a10: 0x2dee000a  sltiu       $t6, $t7, 0xA
    ctx->pc = 0x122a10u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x122a14: 0xe780a  movz        $t7, $zero, $t6
    ctx->pc = 0x122a14u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x122a18: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x122a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x122a1c: 0x29ef0006  slti        $t7, $t7, 0x6
    ctx->pc = 0x122a1cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x122a20: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122A20u;
    {
        const bool branch_taken_0x122a20 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A20u;
        // 0x122a24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a20) {
            ctx->pc = 0x122A38u;
            goto label_122a38;
        }
    }
    ctx->pc = 0x122A28u;
    // 0x122a28: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x122a28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122a2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x122a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a30: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x122a34: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x122a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
label_122a38:
    // 0x122a38: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x122a38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122a3c: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x122a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122a40: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x122a40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122a44: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x122a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x122a48: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x122a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x122a4c: 0x2daf0006  sltiu       $t7, $t5, 0x6
    ctx->pc = 0x122a4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x122a50: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x122A50u;
    {
        const bool branch_taken_0x122a50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A50u;
        // 0x122a54: 0xafae0038  sw          $t6, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a50) {
            ctx->pc = 0x122A7Cu;
            goto label_122a7c;
        }
    }
    ctx->pc = 0x122A58u;
    // 0x122a58: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x122a5c: 0xd7880  sll         $t7, $t5, 2
    ctx->pc = 0x122a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x122a60: 0x25ce3bc8  addiu       $t6, $t6, 0x3BC8
    ctx->pc = 0x122a60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15304));
    // 0x122a64: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x122a64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x122a68: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x122a68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x122a6c: 0x1a00008  jr          $t5
    ctx->pc = 0x122A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122A74u: goto label_122a74;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122A6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122A74u;
label_122a74:
    // 0x122a74: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x122a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x122a78: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x122a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_122a7c:
    // 0x122a7c: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x122a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
    // 0x122a80: 0x2e6f0018  sltiu       $t7, $s3, 0x18
    ctx->pc = 0x122a80u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x122a84: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x122A84u;
    {
        const bool branch_taken_0x122a84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A84u;
        // 0x122a88: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a84) {
            ctx->pc = 0x122AB0u;
            goto label_122ab0;
        }
    }
    ctx->pc = 0x122A8Cu;
    // 0x122a8c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x122a8cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122a90:
    // 0x122a90: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x122a90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x122a94: 0x260f0014  addiu       $t7, $s0, 0x14
    ctx->pc = 0x122a94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x122a98: 0x26f782b  sltu        $t7, $s3, $t7
    ctx->pc = 0x122a98u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x122a9c: 0x0  nop
    ctx->pc = 0x122a9cu;
    // NOP
    // 0x122aa0: 0x0  nop
    ctx->pc = 0x122aa0u;
    // NOP
    // 0x122aa4: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122AA4u;
    {
        const bool branch_taken_0x122aa4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AA4u;
        // 0x122aa8: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122aa4) {
            ctx->pc = 0x122A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a90;
        }
    }
    ctx->pc = 0x122AACu;
    // 0x122aac: 0xaead0044  sw          $t5, 0x44($s5)
    ctx->pc = 0x122aacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 13));
label_122ab0:
    // 0x122ab0: 0x8ea50044  lw          $a1, 0x44($s5)
    ctx->pc = 0x122ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x122ab4: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x122AB4u;
    SET_GPR_U32(ctx, 31, 0x122ABCu);
    ctx->pc = 0x122AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AB4u;
    // 0x122ab8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x122AB4u, 0x122ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122ABCu;
label_122abc:
    // 0x122abc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x122abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x122ac0: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x122ac0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122ac4: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x122ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
    // 0x122ac8: 0x2daf000f  sltiu       $t7, $t5, 0xF
    ctx->pc = 0x122ac8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x122acc: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x122ACCu;
    {
        const bool branch_taken_0x122acc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122ACCu;
        // 0x122ad0: 0x8fb60054  lw          $s6, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122acc) {
            ctx->pc = 0x122C7Cu;
            goto label_122c7c;
        }
    }
    ctx->pc = 0x122AD4u;
    // 0x122ad4: 0x12200069  beqz        $s1, . + 4 + (0x69 << 2)
    ctx->pc = 0x122AD4u;
    {
        const bool branch_taken_0x122ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AD4u;
        // 0x122ad8: 0x8fae002c  lw          $t6, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ad4) {
            ctx->pc = 0x122C7Cu;
            goto label_122c7c;
        }
    }
    ctx->pc = 0x122ADCu;
    // 0x122adc: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x122adcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ae0: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x122ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x122ae4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x122ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122ae8: 0x19c00316  blez        $t6, . + 4 + (0x316 << 2)
    ctx->pc = 0x122AE8u;
    {
        const bool branch_taken_0x122ae8 = (GPR_S64(ctx, 14) <= 0);
        ctx->pc = 0x122AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AE8u;
        // 0x122aec: 0xafae0030  sw          $t6, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ae8) {
            ctx->pc = 0x123744u;
            goto label_123744;
        }
    }
    ctx->pc = 0x122AF0u;
    // 0x122af0: 0x31cf000f  andi        $t7, $t6, 0xF
    ctx->pc = 0x122af0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x122af4: 0x8fad002c  lw          $t5, 0x2C($sp)
    ctx->pc = 0x122af4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x122af8: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x122af8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x122afc: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x122afcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x122b00: 0x25ce3c40  addiu       $t6, $t6, 0x3C40
    ctx->pc = 0x122b00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15424));
    // 0x122b04: 0xd8103  sra         $s0, $t5, 4
    ctx->pc = 0x122b04u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 13), 4));
    // 0x122b08: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x122b08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x122b0c: 0x320e0010  andi        $t6, $s0, 0x10
    ctx->pc = 0x122b0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x122b10: 0x11c00008  beqz        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x122B10u;
    {
        const bool branch_taken_0x122b10 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B10u;
        // 0x122b14: 0xddf10000  ld          $s1, 0x0($t7) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b10) {
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x122B18u;
    // 0x122b18: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x122b18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x122b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x122b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b20: 0xdde53d28  ld          $a1, 0x3D28($t7)
    ctx->pc = 0x122b20u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x663D28u));
    // 0x122b24: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x122b24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x122b28: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x122B28u;
    SET_GPR_U32(ctx, 31, 0x122B30u);
    ctx->pc = 0x122B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B28u;
    // 0x122b2c: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x122B28u, 0x122B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B30u;
label_122b30:
    // 0x122b30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122b30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122b34:
    // 0x122b34: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x122B34u;
    {
        const bool branch_taken_0x122b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B34u;
        // 0x122b38: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b34) {
            ctx->pc = 0x122B6Cu;
            goto label_122b6c;
        }
    }
    ctx->pc = 0x122B3Cu;
    // 0x122b3c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x122b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b40: 0x25f03d08  addiu       $s0, $t7, 0x3D08
    ctx->pc = 0x122b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15624));
label_122b44:
    // 0x122b44: 0x324f0001  andi        $t7, $s2, 0x1
    ctx->pc = 0x122b44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x122b48: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122B48u;
    {
        const bool branch_taken_0x122b48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B48u;
        // 0x122b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b48) {
            ctx->pc = 0x122B60u;
            goto label_122b60;
        }
    }
    ctx->pc = 0x122B50u;
    // 0x122b50: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x122b50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122b54: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122B54u;
    SET_GPR_U32(ctx, 31, 0x122B5Cu);
    ctx->pc = 0x122B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B54u;
    // 0x122b58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122B54u, 0x122B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B5Cu;
label_122b5c:
    // 0x122b5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122b60:
    // 0x122b60: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x122b60u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x122b64: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x122B64u;
    {
        const bool branch_taken_0x122b64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B64u;
        // 0x122b68: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b64) {
            ctx->pc = 0x122B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122b44;
        }
    }
    ctx->pc = 0x122B6Cu;
label_122b6c:
    // 0x122b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x122b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b70: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x122B70u;
    SET_GPR_U32(ctx, 31, 0x122B78u);
    ctx->pc = 0x122B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B70u;
    // 0x122b74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x122B70u, 0x122B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B78u;
label_122b78:
    // 0x122b78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122b78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122b7c:
    // 0x122b7c: 0x8faf0034  lw          $t7, 0x34($sp)
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_122b80:
    // 0x122b80: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x122B80u;
    {
        const bool branch_taken_0x122b80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B80u;
        // 0x122b84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b80) {
            ctx->pc = 0x122BD0u;
            goto label_122bd0;
        }
    }
    ctx->pc = 0x122B88u;
    // 0x122b88: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x122b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x122b8c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122B8Cu;
    SET_GPR_U32(ctx, 31, 0x122B94u);
    ctx->pc = 0x122B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B8Cu;
    // 0x122b90: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122B8Cu, 0x122B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B94u;
label_122b94:
    // 0x122b94: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x122B94u;
    {
        const bool branch_taken_0x122b94 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x122B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B94u;
        // 0x122b98: 0x8fad0020  lw          $t5, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b94) {
            ctx->pc = 0x122BD0u;
            goto label_122bd0;
        }
    }
    ctx->pc = 0x122B9Cu;
    // 0x122b9c: 0x19a0000c  blez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x122B9Cu;
    {
        const bool branch_taken_0x122b9c = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x122BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B9Cu;
        // 0x122ba0: 0x8fae0028  lw          $t6, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b9c) {
            ctx->pc = 0x122BD0u;
            goto label_122bd0;
        }
    }
    ctx->pc = 0x122BA4u;
    // 0x122ba4: 0x19c0002f  blez        $t6, . + 4 + (0x2F << 2)
    ctx->pc = 0x122BA4u;
    {
        const bool branch_taken_0x122ba4 = (GPR_S64(ctx, 14) <= 0);
        ctx->pc = 0x122BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BA4u;
        // 0x122ba8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ba4) {
            ctx->pc = 0x122C64u;
            goto label_122c64;
        }
    }
    ctx->pc = 0x122BACu;
    // 0x122bac: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x122bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x122bb0: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x122bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x122bb4: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122BB4u;
    SET_GPR_U32(ctx, 31, 0x122BBCu);
    ctx->pc = 0x122BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BB4u;
    // 0x122bb8: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122BB4u, 0x122BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BBCu;
label_122bbc:
    // 0x122bbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x122bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x122bc0: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x122bc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bc8: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x122bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x122bcc: 0xafaf002c  sw          $t7, 0x2C($sp)
    ctx->pc = 0x122bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
label_122bd0:
    // 0x122bd0: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x122BD0u;
    SET_GPR_U32(ctx, 31, 0x122BD8u);
    ctx->pc = 0x122BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BD0u;
    // 0x122bd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x122BD0u, 0x122BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BD8u;
label_122bd8:
    // 0x122bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bdc: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122BDCu;
    SET_GPR_U32(ctx, 31, 0x122BE4u);
    ctx->pc = 0x122BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BDCu;
    // 0x122be0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122BDCu, 0x122BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BE4u;
label_122be4:
    // 0x122be4: 0x24051007  addiu       $a1, $zero, 0x1007
    ctx->pc = 0x122be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4103));
    // 0x122be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bec: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x122BECu;
    SET_GPR_U32(ctx, 31, 0x122BF4u);
    ctx->pc = 0x122BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BECu;
    // 0x122bf0: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x122BECu, 0x122BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BF4u;
label_122bf4:
    // 0x122bf4: 0x2783f  dsra32      $t7, $v0, 0
    ctx->pc = 0x122bf4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x122bf8: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x122bf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122bfc: 0x3c0efcc0  lui         $t6, 0xFCC0
    ctx->pc = 0x122bfcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64704 << 16));
    // 0x122c00: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x122c00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x122c04: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x122c04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x122c08: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x122c08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x122c0c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x122c0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x122c10: 0x15a0025a  bnez        $t5, . + 4 + (0x25A << 2)
    ctx->pc = 0x122C10u;
    {
        const bool branch_taken_0x122c10 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x122C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C10u;
        // 0x122c14: 0x24f9025  or          $s2, $s2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c10) {
            ctx->pc = 0x12357Cu;
            goto label_12357c;
        }
    }
    ctx->pc = 0x122C18u;
    // 0x122c18: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x122c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x122c1c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x122c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x122c20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x122c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c24: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x122C24u;
    SET_GPR_U32(ctx, 31, 0x122C2Cu);
    ctx->pc = 0x122C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C24u;
    // 0x122c28: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x122C24u, 0x122C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C2Cu;
label_122c2c:
    // 0x122c2c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x122c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x122c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c38: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122C38u;
    SET_GPR_U32(ctx, 31, 0x122C40u);
    ctx->pc = 0x122C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C38u;
    // 0x122c3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122C38u, 0x122C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C40u;
label_122c40:
    // 0x122c40: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x122C40u;
    {
        const bool branch_taken_0x122c40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x122C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C40u;
        // 0x122c44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c40) {
            ctx->pc = 0x122CECu;
            goto label_122cec;
        }
    }
    ctx->pc = 0x122C48u;
    // 0x122c48: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x122C48u;
    SET_GPR_U32(ctx, 31, 0x122C50u);
    ctx->pc = 0x122C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C48u;
    // 0x122c4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x122C48u, 0x122C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C50u;
label_122c50:
    // 0x122c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c54: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122C54u;
    SET_GPR_U32(ctx, 31, 0x122C5Cu);
    ctx->pc = 0x122C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C54u;
    // 0x122c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122C54u, 0x122C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C5Cu;
label_122c5c:
    // 0x122c5c: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x122C5Cu;
    {
        const bool branch_taken_0x122c5c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x122C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C5Cu;
        // 0x122c60: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c5c) {
            ctx->pc = 0x122D80u;
            goto label_122d80;
        }
    }
    ctx->pc = 0x122C64u;
label_122c64:
    // 0x122c64: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x122c64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122c68: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x122c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c6c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x122c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x122c70: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x122c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
    // 0x122c74: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x122c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x122c78: 0x8fb60054  lw          $s6, 0x54($sp)
    ctx->pc = 0x122c78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_122c7c:
    // 0x122c7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x122c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c80: 0x440008e  bltz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x122C80u;
    {
        const bool branch_taken_0x122c80 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x122C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C80u;
        // 0x122c84: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c80) {
            ctx->pc = 0x122EBCu;
            goto label_122ebc;
        }
    }
    ctx->pc = 0x122C88u;
    // 0x122c88: 0x29af000f  slti        $t7, $t5, 0xF
    ctx->pc = 0x122c88u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x122c8c: 0x11e0008b  beqz        $t7, . + 4 + (0x8B << 2)
    ctx->pc = 0x122C8Cu;
    {
        const bool branch_taken_0x122c8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C8Cu;
        // 0x122c90: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c8c) {
            ctx->pc = 0x122EBCu;
            goto label_122ebc;
        }
    }
    ctx->pc = 0x122C94u;
    // 0x122c94: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x122c98: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x122c98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x122c9c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x122c9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x122ca0: 0xddd10000  ld          $s1, 0x0($t6)
    ctx->pc = 0x122ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x122ca4: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x122ca4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x122ca8: 0x5c30038  bgezl       $t6, . + 4 + (0x38 << 2)
    ctx->pc = 0x122CA8u;
    {
        const bool branch_taken_0x122ca8 = (GPR_S64(ctx, 14) >= 0);
        if (branch_taken_0x122ca8) {
            ctx->pc = 0x122CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122CA8u;
            // 0x122cac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122D8Cu;
            goto label_122d8c;
        }
    }
    ctx->pc = 0x122CB0u;
    // 0x122cb0: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122cb4: 0x5de00035  bgtzl       $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x122CB4u;
    {
        const bool branch_taken_0x122cb4 = (GPR_S64(ctx, 15) > 0);
        if (branch_taken_0x122cb4) {
            ctx->pc = 0x122CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122CB4u;
            // 0x122cb8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122D8Cu;
            goto label_122d8c;
        }
    }
    ctx->pc = 0x122CBCu;
    // 0x122cbc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x122cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x122cc0: 0x5e0002e  bltz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x122CC0u;
    {
        const bool branch_taken_0x122cc0 = (GPR_S64(ctx, 15) < 0);
        ctx->pc = 0x122CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CC0u;
        // 0x122cc4: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cc0) {
            ctx->pc = 0x122D7Cu;
            goto label_122d7c;
        }
    }
    ctx->pc = 0x122CC8u;
    // 0x122cc8: 0x24051005  addiu       $a1, $zero, 0x1005
    ctx->pc = 0x122cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x122ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cd0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122CD0u;
    SET_GPR_U32(ctx, 31, 0x122CD8u);
    ctx->pc = 0x122CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CD0u;
    // 0x122cd4: 0x52cbc  dsll32      $a1, $a1, 18 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122CD0u, 0x122CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CD8u;
label_122cd8:
    // 0x122cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cdc: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122CDCu;
    SET_GPR_U32(ctx, 31, 0x122CE4u);
    ctx->pc = 0x122CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CDCu;
    // 0x122ce0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122CDCu, 0x122CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CE4u;
label_122ce4:
    // 0x122ce4: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x122CE4u;
    {
        const bool branch_taken_0x122ce4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x122CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CE4u;
        // 0x122ce8: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ce4) {
            ctx->pc = 0x122D80u;
            goto label_122d80;
        }
    }
    ctx->pc = 0x122CECu;
label_122cec:
    // 0x122cec: 0x8fad0054  lw          $t5, 0x54($sp)
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_122cf0:
    // 0x122cf0: 0x240f0031  addiu       $t7, $zero, 0x31
    ctx->pc = 0x122cf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x122cf4: 0xa1af0000  sb          $t7, 0x0($t5)
    ctx->pc = 0x122cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x122cf8: 0x25b60001  addiu       $s6, $t5, 0x1
    ctx->pc = 0x122cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x122cfc: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x122cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x122d00: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x122d04: 0xafae002c  sw          $t6, 0x2C($sp)
    ctx->pc = 0x122d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
label_122d08:
    // 0x122d08: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x122d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122d0c: 0xc049616  jal         func_125858
    ctx->pc = 0x122D0Cu;
    SET_GPR_U32(ctx, 31, 0x122D14u);
    ctx->pc = 0x122D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D0Cu;
    // 0x122d10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x122D0Cu, 0x122D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D14u;
label_122d14:
    // 0x122d14: 0x8faf004c  lw          $t7, 0x4C($sp)
    ctx->pc = 0x122d14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x122d18: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x122D18u;
    {
        const bool branch_taken_0x122d18 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D18u;
        // 0x122d1c: 0x8fad0048  lw          $t5, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d18) {
            ctx->pc = 0x122D48u;
            goto label_122d48;
        }
    }
    ctx->pc = 0x122D20u;
    // 0x122d20: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x122D20u;
    {
        const bool branch_taken_0x122d20 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D20u;
        // 0x122d24: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d20) {
            ctx->pc = 0x122D40u;
            goto label_122d40;
        }
    }
    ctx->pc = 0x122D28u;
    // 0x122d28: 0x11af0005  beq         $t5, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122D28u;
    {
        const bool branch_taken_0x122d28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x122d28) {
            ctx->pc = 0x122D40u;
            goto label_122d40;
        }
    }
    ctx->pc = 0x122D30u;
    // 0x122d30: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x122d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122d34: 0xc049616  jal         func_125858
    ctx->pc = 0x122D34u;
    SET_GPR_U32(ctx, 31, 0x122D3Cu);
    ctx->pc = 0x122D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D34u;
    // 0x122d38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x122D34u, 0x122D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D3Cu;
label_122d3c:
    // 0x122d3c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x122d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_122d40:
    // 0x122d40: 0xc049616  jal         func_125858
    ctx->pc = 0x122D40u;
    SET_GPR_U32(ctx, 31, 0x122D48u);
    ctx->pc = 0x122D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D40u;
    // 0x122d44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x122D40u, 0x122D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D48u;
label_122d48:
    // 0x122d48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_122d4c:
    // 0x122d4c: 0xc049616  jal         func_125858
    ctx->pc = 0x122D4Cu;
    SET_GPR_U32(ctx, 31, 0x122D54u);
    ctx->pc = 0x122D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D4Cu;
    // 0x122d50: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x122D4Cu, 0x122D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D54u;
label_122d54:
    // 0x122d54: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x122d54u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x122d58: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x122d58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x122d5c: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x122d5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d60: 0x25cf0001  addiu       $t7, $t6, 0x1
    ctx->pc = 0x122d60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x122d64: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x122d64u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x122d68: 0x8fae0014  lw          $t6, 0x14($sp)
    ctx->pc = 0x122d68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x122d6c: 0x55c00001  bnel        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x122D6Cu;
    {
        const bool branch_taken_0x122d6c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d6c) {
            ctx->pc = 0x122D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122D6Cu;
            // 0x122d70: 0xadd60000  sw          $s6, 0x0($t6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122D74u;
            goto label_122d74;
        }
    }
    ctx->pc = 0x122D74u;
label_122d74:
    // 0x122d74: 0x1000fea7  b           . + 4 + (-0x159 << 2)
    ctx->pc = 0x122D74u;
    {
        const bool branch_taken_0x122d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D74u;
        // 0x122d78: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d74) {
            ctx->pc = 0x122814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122814;
        }
    }
    ctx->pc = 0x122D7Cu;
label_122d7c:
    // 0x122d7c: 0x8faf000c  lw          $t7, 0xC($sp)
    ctx->pc = 0x122d7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_122d80:
    // 0x122d80: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x122d80u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x122d84: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x122D84u;
    {
        const bool branch_taken_0x122d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D84u;
        // 0x122d88: 0xafaf002c  sw          $t7, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d84) {
            ctx->pc = 0x122D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d08;
        }
    }
    ctx->pc = 0x122D8Cu;
label_122d8c:
    // 0x122d8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122d90:
    // 0x122d90: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x122D90u;
    SET_GPR_U32(ctx, 31, 0x122D98u);
    ctx->pc = 0x122D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D90u;
    // 0x122d94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x122D90u, 0x122D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D98u;
label_122d98:
    // 0x122d98: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x122D98u;
    SET_GPR_U32(ctx, 31, 0x122DA0u);
    ctx->pc = 0x122D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D98u;
    // 0x122d9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x122D98u, 0x122DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DA0u;
label_122da0:
    // 0x122da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122da4: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x122DA4u;
    SET_GPR_U32(ctx, 31, 0x122DACu);
    ctx->pc = 0x122DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DA4u;
    // 0x122da8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x122DA4u, 0x122DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DACu;
label_122dac:
    // 0x122dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122db0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122DB0u;
    SET_GPR_U32(ctx, 31, 0x122DB8u);
    ctx->pc = 0x122DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DB0u;
    // 0x122db4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122DB0u, 0x122DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DB8u;
label_122db8:
    // 0x122db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dbc: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x122DBCu;
    SET_GPR_U32(ctx, 31, 0x122DC4u);
    ctx->pc = 0x122DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DBCu;
    // 0x122dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x122DBCu, 0x122DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DC4u;
label_122dc4:
    // 0x122dc4: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x122dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x122dc8: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x122dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x122dcc: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x122dccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122dd0: 0x166d002d  bne         $s3, $t5, . + 4 + (0x2D << 2)
    ctx->pc = 0x122DD0u;
    {
        const bool branch_taken_0x122dd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x122DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DD0u;
        // 0x122dd4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dd0) {
            ctx->pc = 0x122E88u;
            goto label_122e88;
        }
    }
    ctx->pc = 0x122DD8u;
    // 0x122dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ddc: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x122DDCu;
    SET_GPR_U32(ctx, 31, 0x122DE4u);
    ctx->pc = 0x122DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DDCu;
    // 0x122de0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x122DDCu, 0x122DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DE4u;
label_122de4:
    // 0x122de4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x122de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dec: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122DECu;
    SET_GPR_U32(ctx, 31, 0x122DF4u);
    ctx->pc = 0x122DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DECu;
    // 0x122df0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122DECu, 0x122DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DF4u;
label_122df4:
    // 0x122df4: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x122DF4u;
    {
        const bool branch_taken_0x122df4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x122DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DF4u;
        // 0x122df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122df4) {
            ctx->pc = 0x122E14u;
            goto label_122e14;
        }
    }
    ctx->pc = 0x122DFCu;
    // 0x122dfc: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122DFCu;
    SET_GPR_U32(ctx, 31, 0x122E04u);
    ctx->pc = 0x122E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DFCu;
    // 0x122e00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122DFCu, 0x122E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E04u;
label_122e04:
    // 0x122e04: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x122E04u;
    {
        const bool branch_taken_0x122e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E04u;
        // 0x122e08: 0x320f0001  andi        $t7, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e04) {
            ctx->pc = 0x122D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d48;
        }
    }
    ctx->pc = 0x122E0Cu;
    // 0x122e0c: 0x11e0ffcf  beqz        $t7, . + 4 + (-0x31 << 2)
    ctx->pc = 0x122E0Cu;
    {
        const bool branch_taken_0x122e0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E0Cu;
        // 0x122e10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e0c) {
            ctx->pc = 0x122D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d4c;
        }
    }
    ctx->pc = 0x122E14u;
label_122e14:
    // 0x122e14: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x122e14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x122e18: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x122e18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x122e1c: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x122e1cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x122e20: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x122e20u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x122e24: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x122e24u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x122e28: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x122E28u;
    {
        const bool branch_taken_0x122e28 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x122E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E28u;
        // 0x122e2c: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e28) {
            ctx->pc = 0x122E5Cu;
            goto label_122e5c;
        }
    }
    ctx->pc = 0x122E30u;
    // 0x122e30: 0x240e0039  addiu       $t6, $zero, 0x39
    ctx->pc = 0x122e30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x122e34: 0x8faf0054  lw          $t7, 0x54($sp)
    ctx->pc = 0x122e34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_122e38:
    // 0x122e38: 0x12cf000b  beq         $s6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x122E38u;
    {
        const bool branch_taken_0x122e38 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 15));
        ctx->pc = 0x122E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E38u;
        // 0x122e3c: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e38) {
            ctx->pc = 0x122E68u;
            goto label_122e68;
        }
    }
    ctx->pc = 0x122E40u;
    // 0x122e40: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x122e40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x122e44: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x122e44u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x122e48: 0xd7e00  sll         $t7, $t5, 24
    ctx->pc = 0x122e48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x122e4c: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x122e4cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x122e50: 0x11eefff9  beq         $t7, $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122E50u;
    {
        const bool branch_taken_0x122e50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x122E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E50u;
        // 0x122e54: 0x8faf0054  lw          $t7, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e50) {
            ctx->pc = 0x122E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122e38;
        }
    }
    ctx->pc = 0x122E58u;
label_122e58:
    // 0x122e58: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x122e58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_122e5c:
    // 0x122e5c: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x122e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x122e60: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x122E60u;
    {
        const bool branch_taken_0x122e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E60u;
        // 0x122e64: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e60) {
            ctx->pc = 0x122D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d48;
        }
    }
    ctx->pc = 0x122E68u;
label_122e68:
    // 0x122e68: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x122e68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x122e6c: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x122e6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x122e70: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x122e70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x122e74: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x122e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x122e78: 0xa1cf0000  sb          $t7, 0x0($t6)
    ctx->pc = 0x122e78u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x122e7c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x122E7Cu;
    {
        const bool branch_taken_0x122e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E7Cu;
        // 0x122e80: 0x240d0030  addiu       $t5, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e7c) {
            ctx->pc = 0x122E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122e58;
        }
    }
    ctx->pc = 0x122E84u;
    // 0x122e84: 0x0  nop
    ctx->pc = 0x122e84u;
    // NOP
label_122e88:
    // 0x122e88: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x122e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x122e8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e90: 0x424bc  dsll32      $a0, $a0, 18
    ctx->pc = 0x122e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    // 0x122e94: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x122E94u;
    SET_GPR_U32(ctx, 31, 0x122E9Cu);
    ctx->pc = 0x122E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E94u;
    // 0x122e98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x122E94u, 0x122E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E9Cu;
label_122e9c:
    // 0x122e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ea4: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x122EA4u;
    SET_GPR_U32(ctx, 31, 0x122EACu);
    ctx->pc = 0x122EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EA4u;
    // 0x122ea8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x122EA4u, 0x122EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EACu;
label_122eac:
    // 0x122eac: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x122EACu;
    {
        const bool branch_taken_0x122eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EACu;
        // 0x122eb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122eac) {
            ctx->pc = 0x122D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d90;
        }
    }
    ctx->pc = 0x122EB4u;
    // 0x122eb4: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
    ctx->pc = 0x122EB4u;
    {
        const bool branch_taken_0x122eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EB4u;
        // 0x122eb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122eb4) {
            ctx->pc = 0x122D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d4c;
        }
    }
    ctx->pc = 0x122EBCu;
label_122ebc:
    // 0x122ebc: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x122ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122ec0: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122ec4: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x122ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x122ec8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x122ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x122ecc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x122eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x122ed0: 0x8fad0038  lw          $t5, 0x38($sp)
    ctx->pc = 0x122ed0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x122ed4: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x122ED4u;
    {
        const bool branch_taken_0x122ed4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x122ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122ED4u;
        // 0x122ed8: 0x29f70002  slti        $s7, $t7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ed4) {
            ctx->pc = 0x122F20u;
            goto label_122f20;
        }
    }
    ctx->pc = 0x122EDCu;
    // 0x122edc: 0x12e00193  beqz        $s7, . + 4 + (0x193 << 2)
    ctx->pc = 0x122EDCu;
    {
        const bool branch_taken_0x122edc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EDCu;
        // 0x122ee0: 0x8fae0044  lw          $t6, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122edc) {
            ctx->pc = 0x12352Cu;
            goto label_12352c;
        }
    }
    ctx->pc = 0x122EE4u;
    // 0x122ee4: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x122EE4u;
    {
        const bool branch_taken_0x122ee4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x122EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EE4u;
        // 0x122ee8: 0x24530433  addiu       $s3, $v0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ee4) {
            ctx->pc = 0x122EF8u;
            goto label_122ef8;
        }
    }
    ctx->pc = 0x122EECu;
    // 0x122eec: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x122eecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x122ef0: 0x240e0036  addiu       $t6, $zero, 0x36
    ctx->pc = 0x122ef0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x122ef4: 0x1cf9823  subu        $s3, $t6, $t7
    ctx->pc = 0x122ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_122ef8:
    // 0x122ef8: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x122ef8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_122efc:
    // 0x122efc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x122f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122f04: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x122f04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x122f08: 0xc049700  jal         func_125C00
    ctx->pc = 0x122F08u;
    SET_GPR_U32(ctx, 31, 0x122F10u);
    ctx->pc = 0x122F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F08u;
    // 0x122f0c: 0xafad003c  sw          $t5, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C00u, 0x122F08u, 0x122F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F10u;
label_122f10:
    // 0x122f10: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122f14: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x122f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x122f18: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x122f18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x122f1c: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x122f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_122f20:
    // 0x122f20: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x122F20u;
    {
        const bool branch_taken_0x122f20 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x122F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F20u;
        // 0x122f24: 0x8faf003c  lw          $t7, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f20) {
            ctx->pc = 0x122F54u;
            goto label_122f54;
        }
    }
    ctx->pc = 0x122F28u;
    // 0x122f28: 0x19e0000a  blez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x122F28u;
    {
        const bool branch_taken_0x122f28 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x122F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F28u;
        // 0x122f2c: 0x8fb3003c  lw          $s3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f28) {
            ctx->pc = 0x122F54u;
            goto label_122f54;
        }
    }
    ctx->pc = 0x122F30u;
    // 0x122f30: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x122f34: 0x233782a  slt         $t7, $s1, $s3
    ctx->pc = 0x122f34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x122f38: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x122f38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122f3c: 0x22f980b  movn        $s3, $s1, $t7
    ctx->pc = 0x122f3cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x122f40: 0x1b36823  subu        $t5, $t5, $s3
    ctx->pc = 0x122f40u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x122f44: 0x1d37023  subu        $t6, $t6, $s3
    ctx->pc = 0x122f44u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x122f48: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x122f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    // 0x122f4c: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x122f50: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x122f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
label_122f54:
    // 0x122f54: 0x8faf001c  lw          $t7, 0x1C($sp)
    ctx->pc = 0x122f54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x122f58: 0x19e0001a  blez        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x122F58u;
    {
        const bool branch_taken_0x122f58 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x122F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F58u;
        // 0x122f5c: 0x8fad0038  lw          $t5, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f58) {
            ctx->pc = 0x122FC4u;
            goto label_122fc4;
        }
    }
    ctx->pc = 0x122F60u;
    // 0x122f60: 0x11a00170  beqz        $t5, . + 4 + (0x170 << 2)
    ctx->pc = 0x122F60u;
    {
        const bool branch_taken_0x122f60 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F60u;
        // 0x122f64: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f60) {
            ctx->pc = 0x123524u;
            goto label_123524;
        }
    }
    ctx->pc = 0x122F68u;
    // 0x122f68: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x122F68u;
    {
        const bool branch_taken_0x122f68 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x122F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F68u;
        // 0x122f6c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f68) {
            ctx->pc = 0x122FA4u;
            goto label_122fa4;
        }
    }
    ctx->pc = 0x122F70u;
    // 0x122f70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f74: 0xc049790  jal         func_125E40
    ctx->pc = 0x122F74u;
    SET_GPR_U32(ctx, 31, 0x122F7Cu);
    ctx->pc = 0x122F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F74u;
    // 0x122f78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E40u, 0x122F74u, 0x122F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F7Cu;
label_122f7c:
    // 0x122f7c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x122f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x122f80: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x122f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f88: 0xc04970e  jal         func_125C38
    ctx->pc = 0x122F88u;
    SET_GPR_U32(ctx, 31, 0x122F90u);
    ctx->pc = 0x122F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F88u;
    // 0x122f8c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x122F88u, 0x122F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F90u;
label_122f90:
    // 0x122f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f94: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x122f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f9c: 0xc049616  jal         func_125858
    ctx->pc = 0x122F9Cu;
    SET_GPR_U32(ctx, 31, 0x122FA4u);
    ctx->pc = 0x122FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F9Cu;
    // 0x122fa0: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x122F9Cu, 0x122FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FA4u;
label_122fa4:
    // 0x122fa4: 0x8fae001c  lw          $t6, 0x1C($sp)
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x122fa8: 0x1d28023  subu        $s0, $t6, $s2
    ctx->pc = 0x122fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x122fac: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x122FACu;
    {
        const bool branch_taken_0x122fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FACu;
        // 0x122fb0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fac) {
            ctx->pc = 0x122FC4u;
            goto label_122fc4;
        }
    }
    ctx->pc = 0x122FB4u;
    // 0x122fb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x122fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122fb8:
    // 0x122fb8: 0xc049790  jal         func_125E40
    ctx->pc = 0x122FB8u;
    SET_GPR_U32(ctx, 31, 0x122FC0u);
    ctx->pc = 0x122FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FB8u;
    // 0x122fbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E40u, 0x122FB8u, 0x122FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FC0u;
label_122fc0:
    // 0x122fc0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x122fc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122fc4:
    // 0x122fc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fc8: 0xc049700  jal         func_125C00
    ctx->pc = 0x122FC8u;
    SET_GPR_U32(ctx, 31, 0x122FD0u);
    ctx->pc = 0x122FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FC8u;
    // 0x122fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C00u, 0x122FC8u, 0x122FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FD0u;
label_122fd0:
    // 0x122fd0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x122fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x122fd4: 0x8faf0040  lw          $t7, 0x40($sp)
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122fd8: 0x19e00005  blez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122FD8u;
    {
        const bool branch_taken_0x122fd8 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x122FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FD8u;
        // 0x122fdc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fd8) {
            ctx->pc = 0x122FF0u;
            goto label_122ff0;
        }
    }
    ctx->pc = 0x122FE0u;
    // 0x122fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x122fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fe4: 0xc049790  jal         func_125E40
    ctx->pc = 0x122FE4u;
    SET_GPR_U32(ctx, 31, 0x122FECu);
    ctx->pc = 0x122FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FE4u;
    // 0x122fe8: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E40u, 0x122FE4u, 0x122FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FECu;
label_122fec:
    // 0x122fec: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x122fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_122ff0:
    // 0x122ff0: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x122FF0u;
    {
        const bool branch_taken_0x122ff0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FF0u;
        // 0x122ff4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ff0) {
            ctx->pc = 0x123038u;
            goto label_123038;
        }
    }
    ctx->pc = 0x122FF8u;
    // 0x122ff8: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x122ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x122ffc: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x122ffcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x123000: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x123000u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x123004: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x123004u;
    {
        const bool branch_taken_0x123004 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123004u;
        // 0x123008: 0x8faf0040  lw          $t7, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123004) {
            ctx->pc = 0x12303Cu;
            goto label_12303c;
        }
    }
    ctx->pc = 0x12300Cu;
    // 0x12300c: 0x14783f  dsra32      $t7, $s4, 0
    ctx->pc = 0x12300cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x123010: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x123010u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x123014: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x123014u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x123018: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123018u;
    {
        const bool branch_taken_0x123018 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123018u;
        // 0x12301c: 0x8fad0018  lw          $t5, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123018) {
            ctx->pc = 0x123038u;
            goto label_123038;
        }
    }
    ctx->pc = 0x123020u;
    // 0x123020: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x123020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123024: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x123024u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123028: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x123028u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12302c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12302cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x123030: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x123030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
    // 0x123034: 0xafae003c  sw          $t6, 0x3C($sp)
    ctx->pc = 0x123034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 14));
label_123038:
    // 0x123038: 0x8faf0040  lw          $t7, 0x40($sp)
    ctx->pc = 0x123038u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_12303c:
    // 0x12303c: 0x11e00135  beqz        $t7, . + 4 + (0x135 << 2)
    ctx->pc = 0x12303Cu;
    {
        const bool branch_taken_0x12303c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12303Cu;
        // 0x123040: 0x8fad0050  lw          $t5, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12303c) {
            ctx->pc = 0x123514u;
            goto label_123514;
        }
    }
    ctx->pc = 0x123044u;
    // 0x123044: 0x8daf0010  lw          $t7, 0x10($t5)
    ctx->pc = 0x123044u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x123048: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x123048u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12304c: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12304cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x123050: 0xc0496b0  jal         func_125AC0
    ctx->pc = 0x123050u;
    SET_GPR_U32(ctx, 31, 0x123058u);
    ctx->pc = 0x123054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123050u;
    // 0x123054: 0x8de40010  lw          $a0, 0x10($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125AC0u, 0x123050u, 0x123058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123058u;
label_123058:
    // 0x123058: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x123058u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12305c: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x12305cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x123060: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x123060u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_123064:
    // 0x123064: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x123064u;
    {
        const bool branch_taken_0x123064 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123064u;
        // 0x123068: 0x240f0020  addiu       $t7, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123064) {
            ctx->pc = 0x123070u;
            goto label_123070;
        }
    }
    ctx->pc = 0x12306Cu;
    // 0x12306c: 0x1f39823  subu        $s3, $t7, $s3
    ctx->pc = 0x12306cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_123070:
    // 0x123070: 0x2a6f0005  slti        $t7, $s3, 0x5
    ctx->pc = 0x123070u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x123074: 0x15e0011e  bnez        $t7, . + 4 + (0x11E << 2)
    ctx->pc = 0x123074u;
    {
        const bool branch_taken_0x123074 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123074u;
        // 0x123078: 0x2a6f0004  slti        $t7, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123074) {
            ctx->pc = 0x1234F0u;
            goto label_1234f0;
        }
    }
    ctx->pc = 0x12307Cu;
    // 0x12307c: 0x8fae003c  lw          $t6, 0x3C($sp)
    ctx->pc = 0x12307cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123080: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x123080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x123084: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x123084u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123088: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x12308c: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x123090: 0xafae003c  sw          $t6, 0x3C($sp)
    ctx->pc = 0x123090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 14));
    // 0x123094: 0xafaf0018  sw          $t7, 0x18($sp)
    ctx->pc = 0x123094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 15));
label_123098:
    // 0x123098: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x123098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_12309c:
    // 0x12309c: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x12309cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1230a0: 0x19e00005  blez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1230A0u;
    {
        const bool branch_taken_0x1230a0 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x1230A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230A0u;
        // 0x1230a4: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230a0) {
            ctx->pc = 0x1230B8u;
            goto label_1230b8;
        }
    }
    ctx->pc = 0x1230A8u;
    // 0x1230a8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1230a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230ac: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x1230ACu;
    SET_GPR_U32(ctx, 31, 0x1230B4u);
    ctx->pc = 0x1230B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230ACu;
    // 0x1230b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x1230ACu, 0x1230B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230B4u;
label_1230b4:
    // 0x1230b4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1230b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1230b8:
    // 0x1230b8: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x1230b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1230bc: 0x19a00005  blez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1230BCu;
    {
        const bool branch_taken_0x1230bc = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x1230C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230BCu;
        // 0x1230c0: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230bc) {
            ctx->pc = 0x1230D4u;
            goto label_1230d4;
        }
    }
    ctx->pc = 0x1230C4u;
    // 0x1230c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1230c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230c8: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x1230C8u;
    SET_GPR_U32(ctx, 31, 0x1230D0u);
    ctx->pc = 0x1230CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230C8u;
    // 0x1230cc: 0x8fa6003c  lw          $a2, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x1230C8u, 0x1230D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230D0u;
label_1230d0:
    // 0x1230d0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1230d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1230d4:
    // 0x1230d4: 0x8fae0034  lw          $t6, 0x34($sp)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1230d8: 0x11c00018  beqz        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x1230D8u;
    {
        const bool branch_taken_0x1230d8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230D8u;
        // 0x1230dc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230d8) {
            ctx->pc = 0x12313Cu;
            goto label_12313c;
        }
    }
    ctx->pc = 0x1230E0u;
    // 0x1230e0: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x1230E0u;
    SET_GPR_U32(ctx, 31, 0x1230E8u);
    ctx->pc = 0x1230E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230E0u;
    // 0x1230e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x1230E0u, 0x1230E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1230E8u;
label_1230e8:
    // 0x1230e8: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1230E8u;
    {
        const bool branch_taken_0x1230e8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1230ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230E8u;
        // 0x1230ec: 0x8faf0020  lw          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230e8) {
            ctx->pc = 0x123140u;
            goto label_123140;
        }
    }
    ctx->pc = 0x1230F0u;
    // 0x1230f0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1230f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1230f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230f8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1230f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1230fc: 0xc049622  jal         func_125888
    ctx->pc = 0x1230FCu;
    SET_GPR_U32(ctx, 31, 0x123104u);
    ctx->pc = 0x123100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1230FCu;
    // 0x123100: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x1230FCu, 0x123104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123104u;
label_123104:
    // 0x123104: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x123104u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123108: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x123108u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12310c: 0x8fad0038  lw          $t5, 0x38($sp)
    ctx->pc = 0x12310cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x123110: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x123114: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x123114u;
    {
        const bool branch_taken_0x123114 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x123118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123114u;
        // 0x123118: 0xafaf002c  sw          $t7, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123114) {
            ctx->pc = 0x123134u;
            goto label_123134;
        }
    }
    ctx->pc = 0x12311Cu;
    // 0x12311c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12311cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x123120: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123124: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x123124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x123128: 0xc049622  jal         func_125888
    ctx->pc = 0x123128u;
    SET_GPR_U32(ctx, 31, 0x123130u);
    ctx->pc = 0x12312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123128u;
    // 0x12312c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x123128u, 0x123130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123130u;
label_123130:
    // 0x123130: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x123130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_123134:
    // 0x123134: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x123134u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123138: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x123138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
label_12313c:
    // 0x12313c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x12313cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_123140:
    // 0x123140: 0x1de00015  bgtz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x123140u;
    {
        const bool branch_taken_0x123140 = (GPR_S64(ctx, 15) > 0);
        ctx->pc = 0x123144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123140u;
        // 0x123144: 0x8faf0038  lw          $t7, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123140) {
            ctx->pc = 0x123198u;
            goto label_123198;
        }
    }
    ctx->pc = 0x123148u;
    // 0x123148: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x123148u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12314c: 0x29af0003  slti        $t7, $t5, 0x3
    ctx->pc = 0x12314cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x123150: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x123150u;
    {
        const bool branch_taken_0x123150 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123150u;
        // 0x123154: 0x8faf0038  lw          $t7, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123150) {
            ctx->pc = 0x123198u;
            goto label_123198;
        }
    }
    ctx->pc = 0x123158u;
    // 0x123158: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x123158u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12315c: 0x5c0ff07  bltz        $t6, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x12315Cu;
    {
        const bool branch_taken_0x12315c = (GPR_S64(ctx, 14) < 0);
        ctx->pc = 0x123160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12315Cu;
        // 0x123160: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12315c) {
            ctx->pc = 0x122D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d7c;
        }
    }
    ctx->pc = 0x123164u;
    // 0x123164: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123168: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x123168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12316c: 0xc049622  jal         func_125888
    ctx->pc = 0x12316Cu;
    SET_GPR_U32(ctx, 31, 0x123174u);
    ctx->pc = 0x123170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12316Cu;
    // 0x123170: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x12316Cu, 0x123174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123174u;
label_123174:
    // 0x123174: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x123174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x123178: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x123178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12317c: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x12317Cu;
    SET_GPR_U32(ctx, 31, 0x123184u);
    ctx->pc = 0x123180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12317Cu;
    // 0x123180: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x12317Cu, 0x123184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123184u;
label_123184:
    // 0x123184: 0x1c40feda  bgtz        $v0, . + 4 + (-0x126 << 2)
    ctx->pc = 0x123184u;
    {
        const bool branch_taken_0x123184 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x123188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123184u;
        // 0x123188: 0x8fad0054  lw          $t5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123184) {
            ctx->pc = 0x122CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122cf0;
        }
    }
    ctx->pc = 0x12318Cu;
    // 0x12318c: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x12318Cu;
    {
        const bool branch_taken_0x12318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12318Cu;
        // 0x123190: 0x8faf000c  lw          $t7, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12318c) {
            ctx->pc = 0x122D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d80;
        }
    }
    ctx->pc = 0x123194u;
    // 0x123194: 0x0  nop
    ctx->pc = 0x123194u;
    // NOP
label_123198:
    // 0x123198: 0x11e000c3  beqz        $t7, . + 4 + (0xC3 << 2)
    ctx->pc = 0x123198u;
    {
        const bool branch_taken_0x123198 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123198u;
        // 0x12319c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123198) {
            ctx->pc = 0x1234A8u;
            goto label_1234a8;
        }
    }
    ctx->pc = 0x1231A0u;
    // 0x1231a0: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1231A0u;
    {
        const bool branch_taken_0x1231a0 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x1231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231A0u;
        // 0x1231a4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231a0) {
            ctx->pc = 0x1231B8u;
            goto label_1231b8;
        }
    }
    ctx->pc = 0x1231A8u;
    // 0x1231a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1231a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231ac: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x1231ACu;
    SET_GPR_U32(ctx, 31, 0x1231B4u);
    ctx->pc = 0x1231B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231ACu;
    // 0x1231b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x1231ACu, 0x1231B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231B4u;
label_1231b4:
    // 0x1231b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1231b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1231b8:
    // 0x1231b8: 0x8fad004c  lw          $t5, 0x4C($sp)
    ctx->pc = 0x1231b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1231bc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1231BCu;
    {
        const bool branch_taken_0x1231bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231BCu;
        // 0x1231c0: 0xafad0048  sw          $t5, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231bc) {
            ctx->pc = 0x123204u;
            goto label_123204;
        }
    }
    ctx->pc = 0x1231C4u;
    // 0x1231c4: 0x8da50004  lw          $a1, 0x4($t5)
    ctx->pc = 0x1231c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1231c8: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x1231C8u;
    SET_GPR_U32(ctx, 31, 0x1231D0u);
    ctx->pc = 0x1231CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231C8u;
    // 0x1231cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x1231C8u, 0x1231D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231D0u;
label_1231d0:
    // 0x1231d0: 0x8fae0048  lw          $t6, 0x48($sp)
    ctx->pc = 0x1231d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1231d4: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1231d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1231d8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1231d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1231dc: 0x8dc60010  lw          $a2, 0x10($t6)
    ctx->pc = 0x1231dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1231e0: 0x25c5000c  addiu       $a1, $t6, 0xC
    ctx->pc = 0x1231e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
    // 0x1231e4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1231e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1231e8: 0xc049522  jal         func_125488
    ctx->pc = 0x1231E8u;
    SET_GPR_U32(ctx, 31, 0x1231F0u);
    ctx->pc = 0x1231ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231E8u;
    // 0x1231ec: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1231E8u, 0x1231F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231F0u;
label_1231f0:
    // 0x1231f0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1231f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1231f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1231f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231f8: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x1231F8u;
    SET_GPR_U32(ctx, 31, 0x123200u);
    ctx->pc = 0x1231FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231F8u;
    // 0x1231fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x1231F8u, 0x123200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123200u;
label_123200:
    // 0x123200: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x123200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_123204:
    // 0x123204: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x123204u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x123208: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x123208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12320c: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12320cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x123210: 0x31f70001  andi        $s7, $t7, 0x1
    ctx->pc = 0x123210u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x123214: 0xafb70058  sw          $s7, 0x58($sp)
    ctx->pc = 0x123214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 23));
label_123218:
    // 0x123218: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x123218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12321c: 0xc048934  jal         func_1224D0
    ctx->pc = 0x12321Cu;
    SET_GPR_U32(ctx, 31, 0x123224u);
    ctx->pc = 0x123220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12321Cu;
    // 0x123220: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224D0u, 0x12321Cu, 0x123224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123224u;
label_123224:
    // 0x123224: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x123228: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x123228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12322c: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x12322Cu;
    SET_GPR_U32(ctx, 31, 0x123234u);
    ctx->pc = 0x123230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12322Cu;
    // 0x123230: 0x24540030  addiu       $s4, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x12322Cu, 0x123234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123234u;
label_123234:
    // 0x123234: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x123234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12323c: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x12323cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x123240: 0xc049844  jal         func_126110
    ctx->pc = 0x123240u;
    SET_GPR_U32(ctx, 31, 0x123248u);
    ctx->pc = 0x123244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123240u;
    // 0x123244: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126110u, 0x123240u, 0x123248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123248u;
label_123248:
    // 0x123248: 0x8c4f000c  lw          $t7, 0xC($v0)
    ctx->pc = 0x123248u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12324c: 0x15e00094  bnez        $t7, . + 4 + (0x94 << 2)
    ctx->pc = 0x12324Cu;
    {
        const bool branch_taken_0x12324c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12324Cu;
        // 0x123250: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12324c) {
            ctx->pc = 0x1234A0u;
            goto label_1234a0;
        }
    }
    ctx->pc = 0x123254u;
    // 0x123254: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x123254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123258: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x123258u;
    SET_GPR_U32(ctx, 31, 0x123260u);
    ctx->pc = 0x12325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123258u;
    // 0x12325c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x123258u, 0x123260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123260u;
label_123260:
    // 0x123260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x123260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123264:
    // 0x123264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123268: 0xc049616  jal         func_125858
    ctx->pc = 0x123268u;
    SET_GPR_U32(ctx, 31, 0x123270u);
    ctx->pc = 0x12326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123268u;
    // 0x12326c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125858u, 0x123268u, 0x123270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123270u;
label_123270:
    // 0x123270: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x123270u;
    {
        const bool branch_taken_0x123270 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x123274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123270u;
        // 0x123274: 0x8faf0008  lw          $t7, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123270) {
            ctx->pc = 0x123318u;
            goto label_123318;
        }
    }
    ctx->pc = 0x123278u;
    // 0x123278: 0x15e00027  bnez        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x123278u;
    {
        const bool branch_taken_0x123278 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x123278) {
            ctx->pc = 0x123318u;
            goto label_123318;
        }
    }
    ctx->pc = 0x123280u;
    // 0x123280: 0x16e00025  bnez        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x123280u;
    {
        const bool branch_taken_0x123280 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x123284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123280u;
        // 0x123284: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123280) {
            ctx->pc = 0x123318u;
            goto label_123318;
        }
    }
    ctx->pc = 0x123288u;
    // 0x123288: 0x128f0005  beq         $s4, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123288u;
    {
        const bool branch_taken_0x123288 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x12328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123288u;
        // 0x12328c: 0x250782a  slt         $t7, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123288) {
            ctx->pc = 0x1232A0u;
            goto label_1232a0;
        }
    }
    ctx->pc = 0x123290u;
    // 0x123290: 0x28fa021  addu        $s4, $s4, $t7
    ctx->pc = 0x123290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
label_123294:
    // 0x123294: 0xa2d40000  sb          $s4, 0x0($s6)
    ctx->pc = 0x123294u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
label_123298:
    // 0x123298: 0x1000fe9b  b           . + 4 + (-0x165 << 2)
    ctx->pc = 0x123298u;
    {
        const bool branch_taken_0x123298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123298u;
        // 0x12329c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123298) {
            ctx->pc = 0x122D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d08;
        }
    }
    ctx->pc = 0x1232A0u;
label_1232a0:
    // 0x1232a0: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x1232a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1232a4:
    // 0x1232a4: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x1232a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x1232a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1232a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1232ac: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1232acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1232b0:
    // 0x1232b0: 0x240f0039  addiu       $t7, $zero, 0x39
    ctx->pc = 0x1232b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1232b4: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x1232b4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1232b8: 0xd7600  sll         $t6, $t5, 24
    ctx->pc = 0x1232b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x1232bc: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x1232bcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x1232c0: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1232C0u;
    {
        const bool branch_taken_0x1232c0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232C0u;
        // 0x1232c4: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232c0) {
            ctx->pc = 0x1232F4u;
            goto label_1232f4;
        }
    }
    ctx->pc = 0x1232C8u;
    // 0x1232c8: 0x240e0039  addiu       $t6, $zero, 0x39
    ctx->pc = 0x1232c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1232cc: 0x8faf0054  lw          $t7, 0x54($sp)
    ctx->pc = 0x1232ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1232d0:
    // 0x1232d0: 0x12cf000a  beq         $s6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1232D0u;
    {
        const bool branch_taken_0x1232d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 15));
        ctx->pc = 0x1232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232D0u;
        // 0x1232d4: 0x8fad002c  lw          $t5, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232d0) {
            ctx->pc = 0x1232FCu;
            goto label_1232fc;
        }
    }
    ctx->pc = 0x1232D8u;
    // 0x1232d8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1232d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1232dc: 0x92cd0000  lbu         $t5, 0x0($s6)
    ctx->pc = 0x1232dcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1232e0: 0xd7e00  sll         $t7, $t5, 24
    ctx->pc = 0x1232e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x1232e4: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x1232e4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x1232e8: 0x11eefff9  beq         $t7, $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1232E8u;
    {
        const bool branch_taken_0x1232e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x1232ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232E8u;
        // 0x1232ec: 0x8faf0054  lw          $t7, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232e8) {
            ctx->pc = 0x1232D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1232d0;
        }
    }
    ctx->pc = 0x1232F0u;
    // 0x1232f0: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x1232f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1232f4:
    // 0x1232f4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1232F4u;
    {
        const bool branch_taken_0x1232f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232F4u;
        // 0x1232f8: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232f4) {
            ctx->pc = 0x123298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123298;
        }
    }
    ctx->pc = 0x1232FCu;
label_1232fc:
    // 0x1232fc: 0x240f0031  addiu       $t7, $zero, 0x31
    ctx->pc = 0x1232fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x123300: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x123300u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x123304: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x123304u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x123308: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x123308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x12330c: 0x25d60001  addiu       $s6, $t6, 0x1
    ctx->pc = 0x12330cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x123310: 0x1000fe7d  b           . + 4 + (-0x183 << 2)
    ctx->pc = 0x123310u;
    {
        const bool branch_taken_0x123310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123310u;
        // 0x123314: 0xa1cf0000  sb          $t7, 0x0($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123310) {
            ctx->pc = 0x122D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d08;
        }
    }
    ctx->pc = 0x123318u;
label_123318:
    // 0x123318: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123318u;
    {
        const bool branch_taken_0x123318 = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x123318) {
            ctx->pc = 0x123338u;
            goto label_123338;
        }
    }
    ctx->pc = 0x123320u;
    // 0x123320: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x123320u;
    {
        const bool branch_taken_0x123320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x123324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123320u;
        // 0x123324: 0x8fad0008  lw          $t5, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123320) {
            ctx->pc = 0x123390u;
            goto label_123390;
        }
    }
    ctx->pc = 0x123328u;
    // 0x123328: 0x15a00019  bnez        $t5, . + 4 + (0x19 << 2)
    ctx->pc = 0x123328u;
    {
        const bool branch_taken_0x123328 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123328u;
        // 0x12332c: 0x8fae0058  lw          $t6, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123328) {
            ctx->pc = 0x123390u;
            goto label_123390;
        }
    }
    ctx->pc = 0x123330u;
    // 0x123330: 0x15c00017  bnez        $t6, . + 4 + (0x17 << 2)
    ctx->pc = 0x123330u;
    {
        const bool branch_taken_0x123330 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x123330) {
            ctx->pc = 0x123390u;
            goto label_123390;
        }
    }
    ctx->pc = 0x123338u;
label_123338:
    // 0x123338: 0x1a40ffd6  blez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x123338u;
    {
        const bool branch_taken_0x123338 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x12333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123338u;
        // 0x12333c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123338) {
            ctx->pc = 0x123294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123294;
        }
    }
    ctx->pc = 0x123340u;
    // 0x123340: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123344: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x123344u;
    SET_GPR_U32(ctx, 31, 0x12334Cu);
    ctx->pc = 0x123348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123344u;
    // 0x123348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x123344u, 0x12334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12334Cu;
label_12334c:
    // 0x12334c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12334cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123350: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x123350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123354: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x123354u;
    SET_GPR_U32(ctx, 31, 0x12335Cu);
    ctx->pc = 0x123358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123354u;
    // 0x123358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x123354u, 0x12335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12335Cu;
label_12335c:
    // 0x12335c: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12335Cu;
    {
        const bool branch_taken_0x12335c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x12335c) {
            ctx->pc = 0x123360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12335Cu;
            // 0x123360: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12337Cu;
            goto label_12337c;
        }
    }
    ctx->pc = 0x123364u;
    // 0x123364: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x123364u;
    {
        const bool branch_taken_0x123364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123364) {
            ctx->pc = 0x123368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123364u;
            // 0x123368: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123298;
        }
    }
    ctx->pc = 0x12336Cu;
    // 0x12336c: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12336cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x123370: 0x51e0ffc9  beql        $t7, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x123370u;
    {
        const bool branch_taken_0x123370 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123370) {
            ctx->pc = 0x123374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123370u;
            // 0x123374: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123298;
        }
    }
    ctx->pc = 0x123378u;
    // 0x123378: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x123378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12337c:
    // 0x12337c: 0x240f003a  addiu       $t7, $zero, 0x3A
    ctx->pc = 0x12337cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x123380: 0x128fffc8  beq         $s4, $t7, . + 4 + (-0x38 << 2)
    ctx->pc = 0x123380u;
    {
        const bool branch_taken_0x123380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x123384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123380u;
        // 0x123384: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123380) {
            ctx->pc = 0x1232A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1232a4;
        }
    }
    ctx->pc = 0x123388u;
    // 0x123388: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x123388u;
    {
        const bool branch_taken_0x123388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123388u;
        // 0x12338c: 0xa2d40000  sb          $s4, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123388) {
            ctx->pc = 0x123298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123298;
        }
    }
    ctx->pc = 0x123390u;
label_123390:
    // 0x123390: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x123390u;
    {
        const bool branch_taken_0x123390 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x123394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123390u;
        // 0x123394: 0x240f0039  addiu       $t7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123390) {
            ctx->pc = 0x1233A8u;
            goto label_1233a8;
        }
    }
    ctx->pc = 0x123398u;
    // 0x123398: 0x128fffc1  beq         $s4, $t7, . + 4 + (-0x3F << 2)
    ctx->pc = 0x123398u;
    {
        const bool branch_taken_0x123398 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 15));
        ctx->pc = 0x12339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123398u;
        // 0x12339c: 0x268f0001  addiu       $t7, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123398) {
            ctx->pc = 0x1232A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1232a0;
        }
    }
    ctx->pc = 0x1233A0u;
    // 0x1233a0: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x1233A0u;
    {
        const bool branch_taken_0x1233a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233A0u;
        // 0x1233a4: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233a0) {
            ctx->pc = 0x123298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123298;
        }
    }
    ctx->pc = 0x1233A8u;
label_1233a8:
    // 0x1233a8: 0xa2d40000  sb          $s4, 0x0($s6)
    ctx->pc = 0x1233a8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1233ac: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x1233acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1233b0: 0x126f0020  beq         $s3, $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x1233B0u;
    {
        const bool branch_taken_0x1233b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x1233B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233B0u;
        // 0x1233b4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233b0) {
            ctx->pc = 0x123434u;
            goto label_123434;
        }
    }
    ctx->pc = 0x1233B8u;
    // 0x1233b8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1233b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1233bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1233c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1233c4: 0xc049622  jal         func_125888
    ctx->pc = 0x1233C4u;
    SET_GPR_U32(ctx, 31, 0x1233CCu);
    ctx->pc = 0x1233C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233C4u;
    // 0x1233c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x1233C4u, 0x1233CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233CCu;
label_1233cc:
    // 0x1233cc: 0x8fad0048  lw          $t5, 0x48($sp)
    ctx->pc = 0x1233ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1233d0: 0x8fae004c  lw          $t6, 0x4C($sp)
    ctx->pc = 0x1233d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1233d4: 0x15ae000a  bne         $t5, $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x1233D4u;
    {
        const bool branch_taken_0x1233d4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x1233D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233D4u;
        // 0x1233d8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233d4) {
            ctx->pc = 0x123400u;
            goto label_123400;
        }
    }
    ctx->pc = 0x1233DCu;
    // 0x1233dc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1233dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1233e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1233e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233e4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1233e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1233e8: 0xc049622  jal         func_125888
    ctx->pc = 0x1233E8u;
    SET_GPR_U32(ctx, 31, 0x1233F0u);
    ctx->pc = 0x1233ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233E8u;
    // 0x1233ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x1233E8u, 0x1233F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233F0u;
label_1233f0:
    // 0x1233f0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1233f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1233f4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1233f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1233f8:
    // 0x1233f8: 0x1000ff87  b           . + 4 + (-0x79 << 2)
    ctx->pc = 0x1233F8u;
    {
        const bool branch_taken_0x1233f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233F8u;
        // 0x1233fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233f8) {
            ctx->pc = 0x123218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123218;
        }
    }
    ctx->pc = 0x123400u;
label_123400:
    // 0x123400: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x123404: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x123404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x123408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12340c: 0xc049622  jal         func_125888
    ctx->pc = 0x12340Cu;
    SET_GPR_U32(ctx, 31, 0x123414u);
    ctx->pc = 0x123410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12340Cu;
    // 0x123410: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x12340Cu, 0x123414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123414u;
label_123414:
    // 0x123414: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x123414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x123418: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12341c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12341cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x123420: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x123420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x123424: 0xc049622  jal         func_125888
    ctx->pc = 0x123424u;
    SET_GPR_U32(ctx, 31, 0x12342Cu);
    ctx->pc = 0x123428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123424u;
    // 0x123428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x123424u, 0x12342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12342Cu;
label_12342c:
    // 0x12342c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12342Cu;
    {
        const bool branch_taken_0x12342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12342Cu;
        // 0x123430: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12342c) {
            ctx->pc = 0x1233F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1233f8;
        }
    }
    ctx->pc = 0x123434u;
label_123434:
    // 0x123434: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123438: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x123438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12343c: 0xc0497d2  jal         func_125F48
    ctx->pc = 0x12343Cu;
    SET_GPR_U32(ctx, 31, 0x123444u);
    ctx->pc = 0x123440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12343Cu;
    // 0x123440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F48u, 0x12343Cu, 0x123444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123444u;
label_123444:
    // 0x123444: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x123444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123448: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x123448u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12344c: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x12344Cu;
    SET_GPR_U32(ctx, 31, 0x123454u);
    ctx->pc = 0x123450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12344Cu;
    // 0x123450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x12344Cu, 0x123454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123454u;
label_123454:
    // 0x123454: 0x5c40ff96  bgtzl       $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x123454u;
    {
        const bool branch_taken_0x123454 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x123454) {
            ctx->pc = 0x123458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123454u;
            // 0x123458: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1232B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1232b0;
        }
    }
    ctx->pc = 0x12345Cu;
    // 0x12345c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12345Cu;
    {
        const bool branch_taken_0x12345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12345Cu;
        // 0x123460: 0x240e0030  addiu       $t6, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12345c) {
            ctx->pc = 0x123474u;
            goto label_123474;
        }
    }
    ctx->pc = 0x123464u;
    // 0x123464: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x123468: 0x55e0ff91  bnel        $t7, $zero, . + 4 + (-0x6F << 2)
    ctx->pc = 0x123468u;
    {
        const bool branch_taken_0x123468 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x123468) {
            ctx->pc = 0x12346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123468u;
            // 0x12346c: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1232B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1232b0;
        }
    }
    ctx->pc = 0x123470u;
    // 0x123470: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_123474:
    // 0x123474: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x123474u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_123478:
    // 0x123478: 0x82cf0000  lb          $t7, 0x0($s6)
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12347c: 0x0  nop
    ctx->pc = 0x12347cu;
    // NOP
    // 0x123480: 0x0  nop
    ctx->pc = 0x123480u;
    // NOP
    // 0x123484: 0x0  nop
    ctx->pc = 0x123484u;
    // NOP
    // 0x123488: 0x0  nop
    ctx->pc = 0x123488u;
    // NOP
    // 0x12348c: 0x51eefffa  beql        $t7, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12348Cu;
    {
        const bool branch_taken_0x12348c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x12348c) {
            ctx->pc = 0x123490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12348Cu;
            // 0x123490: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123478;
        }
    }
    ctx->pc = 0x123494u;
    // 0x123494: 0x1000fe1c  b           . + 4 + (-0x1E4 << 2)
    ctx->pc = 0x123494u;
    {
        const bool branch_taken_0x123494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123494u;
        // 0x123498: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123494) {
            ctx->pc = 0x122D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d08;
        }
    }
    ctx->pc = 0x12349Cu;
    // 0x12349c: 0x0  nop
    ctx->pc = 0x12349cu;
    // NOP
label_1234a0:
    // 0x1234a0: 0x1000ff70  b           . + 4 + (-0x90 << 2)
    ctx->pc = 0x1234A0u;
    {
        const bool branch_taken_0x1234a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234A0u;
        // 0x1234a4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234a0) {
            ctx->pc = 0x123264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123264;
        }
    }
    ctx->pc = 0x1234A8u;
label_1234a8:
    // 0x1234a8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1234a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1234ac: 0xc048934  jal         func_1224D0
    ctx->pc = 0x1234ACu;
    SET_GPR_U32(ctx, 31, 0x1234B4u);
    ctx->pc = 0x1234B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234ACu;
    // 0x1234b0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224D0u, 0x1234ACu, 0x1234B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234B4u;
label_1234b4:
    // 0x1234b4: 0x2c0702d  daddu       $t6, $s6, $zero
    ctx->pc = 0x1234b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234b8: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1234b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1234bc: 0xa1d40000  sb          $s4, 0x0($t6)
    ctx->pc = 0x1234bcu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1234c0: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x1234c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1234c4: 0x26d782a  slt         $t7, $s3, $t5
    ctx->pc = 0x1234c4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1234c8: 0x11e0ffda  beqz        $t7, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1234C8u;
    {
        const bool branch_taken_0x1234c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234C8u;
        // 0x1234cc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234c8) {
            ctx->pc = 0x123434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123434;
        }
    }
    ctx->pc = 0x1234D0u;
    // 0x1234d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1234d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1234d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234d8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1234d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1234dc: 0xc049622  jal         func_125888
    ctx->pc = 0x1234DCu;
    SET_GPR_U32(ctx, 31, 0x1234E4u);
    ctx->pc = 0x1234E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234DCu;
    // 0x1234e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x1234DCu, 0x1234E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234E4u;
label_1234e4:
    // 0x1234e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1234e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1234e8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1234E8u;
    {
        const bool branch_taken_0x1234e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234E8u;
        // 0x1234ec: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234e8) {
            ctx->pc = 0x1234A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1234a8;
        }
    }
    ctx->pc = 0x1234F0u;
label_1234f0:
    // 0x1234f0: 0x11e0feea  beqz        $t7, . + 4 + (-0x116 << 2)
    ctx->pc = 0x1234F0u;
    {
        const bool branch_taken_0x1234f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234F0u;
        // 0x1234f4: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234f0) {
            ctx->pc = 0x12309Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12309c;
        }
    }
    ctx->pc = 0x1234F8u;
    // 0x1234f8: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x1234f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1234fc: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x1234fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123500: 0x1b36821  addu        $t5, $t5, $s3
    ctx->pc = 0x123500u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 19)));
    // 0x123504: 0x1d37021  addu        $t6, $t6, $s3
    ctx->pc = 0x123504u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 19)));
    // 0x123508: 0xafad003c  sw          $t5, 0x3C($sp)
    ctx->pc = 0x123508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
    // 0x12350c: 0x1000fee2  b           . + 4 + (-0x11E << 2)
    ctx->pc = 0x12350Cu;
    {
        const bool branch_taken_0x12350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12350Cu;
        // 0x123510: 0xafae0018  sw          $t6, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12350c) {
            ctx->pc = 0x123098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123098;
        }
    }
    ctx->pc = 0x123514u;
label_123514:
    // 0x123514: 0x8fad003c  lw          $t5, 0x3C($sp)
    ctx->pc = 0x123514u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x123518: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x123518u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12351c: 0x1000fed1  b           . + 4 + (-0x12F << 2)
    ctx->pc = 0x12351Cu;
    {
        const bool branch_taken_0x12351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12351Cu;
        // 0x123520: 0x31f3001f  andi        $s3, $t7, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12351c) {
            ctx->pc = 0x123064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123064;
        }
    }
    ctx->pc = 0x123524u;
label_123524:
    // 0x123524: 0x1000fea4  b           . + 4 + (-0x15C << 2)
    ctx->pc = 0x123524u;
    {
        const bool branch_taken_0x123524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123524u;
        // 0x123528: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123524) {
            ctx->pc = 0x122FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122fb8;
        }
    }
    ctx->pc = 0x12352Cu;
label_12352c:
    // 0x12352c: 0x8faf0020  lw          $t7, 0x20($sp)
    ctx->pc = 0x12352cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123530: 0x8fad001c  lw          $t5, 0x1C($sp)
    ctx->pc = 0x123530u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123534: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x123534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x123538: 0x1b0782a  slt         $t7, $t5, $s0
    ctx->pc = 0x123538u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12353c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12353Cu;
    {
        const bool branch_taken_0x12353c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12353Cu;
        // 0x123540: 0x1b09023  subu        $s2, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12353c) {
            ctx->pc = 0x123560u;
            goto label_123560;
        }
    }
    ctx->pc = 0x123544u;
    // 0x123544: 0x8fae0040  lw          $t6, 0x40($sp)
    ctx->pc = 0x123544u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123548: 0x20d8023  subu        $s0, $s0, $t5
    ctx->pc = 0x123548u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x12354c: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x12354cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x123550: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x123550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123554: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x123554u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x123558: 0xafad001c  sw          $t5, 0x1C($sp)
    ctx->pc = 0x123558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
    // 0x12355c: 0xafae0040  sw          $t6, 0x40($sp)
    ctx->pc = 0x12355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 14));
label_123560:
    // 0x123560: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x123560u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123564: 0x661fe65  bgez        $s3, . + 4 + (-0x19B << 2)
    ctx->pc = 0x123564u;
    {
        const bool branch_taken_0x123564 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x123568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123564u;
        // 0x123568: 0x8fad003c  lw          $t5, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123564) {
            ctx->pc = 0x122EFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122efc;
        }
    }
    ctx->pc = 0x12356Cu;
    // 0x12356c: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x12356cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123570: 0x1f38823  subu        $s1, $t7, $s3
    ctx->pc = 0x123570u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x123574: 0x1000fe61  b           . + 4 + (-0x19F << 2)
    ctx->pc = 0x123574u;
    {
        const bool branch_taken_0x123574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123574u;
        // 0x123578: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123574) {
            ctx->pc = 0x122EFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122efc;
        }
    }
    ctx->pc = 0x12357Cu;
label_12357c:
    // 0x12357c: 0x8fae0038  lw          $t6, 0x38($sp)
    ctx->pc = 0x12357cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x123580: 0x11c00036  beqz        $t6, . + 4 + (0x36 << 2)
    ctx->pc = 0x123580u;
    {
        const bool branch_taken_0x123580 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x123584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123580u;
        // 0x123584: 0x8faf0020  lw          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123580) {
            ctx->pc = 0x12365Cu;
            goto label_12365c;
        }
    }
    ctx->pc = 0x123588u;
    // 0x123588: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x123588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x12358c: 0x4257c  dsll32      $a0, $a0, 21
    ctx->pc = 0x12358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 21));
    // 0x123590: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x123590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123594: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x123594u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x123598: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x123598u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12359c: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x12359cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x1235a0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1235a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1235a4: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x1235A4u;
    SET_GPR_U32(ctx, 31, 0x1235ACu);
    ctx->pc = 0x1235A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235A4u;
    // 0x1235a8: 0xddc5fff8  ld          $a1, -0x8($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x1235A4u, 0x1235ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235ACu;
label_1235ac:
    // 0x1235ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1235acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235b0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x1235B0u;
    SET_GPR_U32(ctx, 31, 0x1235B8u);
    ctx->pc = 0x1235B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235B0u;
    // 0x1235b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x1235B0u, 0x1235B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235B8u;
label_1235b8:
    // 0x1235b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1235b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235bc: 0x0  nop
    ctx->pc = 0x1235bcu;
    // NOP
label_1235c0:
    // 0x1235c0: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x1235C0u;
    SET_GPR_U32(ctx, 31, 0x1235C8u);
    ctx->pc = 0x1235C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235C0u;
    // 0x1235c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x1235C0u, 0x1235C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235C8u;
label_1235c8:
    // 0x1235c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1235c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235cc: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x1235CCu;
    SET_GPR_U32(ctx, 31, 0x1235D4u);
    ctx->pc = 0x1235D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235CCu;
    // 0x1235d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x1235CCu, 0x1235D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235D4u;
label_1235d4:
    // 0x1235d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1235d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235d8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x1235D8u;
    SET_GPR_U32(ctx, 31, 0x1235E0u);
    ctx->pc = 0x1235DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235D8u;
    // 0x1235dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x1235D8u, 0x1235E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235E0u;
label_1235e0:
    // 0x1235e0: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x1235e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1235e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1235e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235e8: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x1235e8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x1235ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1235ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235f0: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x1235F0u;
    SET_GPR_U32(ctx, 31, 0x1235F8u);
    ctx->pc = 0x1235F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235F0u;
    // 0x1235f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x1235F0u, 0x1235F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235F8u;
label_1235f8:
    // 0x1235f8: 0x440fdd3  bltz        $v0, . + 4 + (-0x22D << 2)
    ctx->pc = 0x1235F8u;
    {
        const bool branch_taken_0x1235f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1235FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F8u;
        // 0x1235fc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f8) {
            ctx->pc = 0x122D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d48;
        }
    }
    ctx->pc = 0x123600u;
    // 0x123600: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x123600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x123604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123608: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x123608u;
    SET_GPR_U32(ctx, 31, 0x123610u);
    ctx->pc = 0x12360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123608u;
    // 0x12360c: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x123608u, 0x123610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123610u;
label_123610:
    // 0x123610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123614: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x123614u;
    SET_GPR_U32(ctx, 31, 0x12361Cu);
    ctx->pc = 0x123618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123614u;
    // 0x123618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x123614u, 0x12361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12361Cu;
label_12361c:
    // 0x12361c: 0x440fdfd  bltz        $v0, . + 4 + (-0x203 << 2)
    ctx->pc = 0x12361Cu;
    {
        const bool branch_taken_0x12361c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x123620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12361Cu;
        // 0x123620: 0x8fad0020  lw          $t5, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12361c) {
            ctx->pc = 0x122E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122e14;
        }
    }
    ctx->pc = 0x123624u;
    // 0x123624: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x123624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x123628: 0x26d782a  slt         $t7, $s3, $t5
    ctx->pc = 0x123628u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12362c: 0x11e0fd8d  beqz        $t7, . + 4 + (-0x273 << 2)
    ctx->pc = 0x12362Cu;
    {
        const bool branch_taken_0x12362c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12362Cu;
        // 0x123630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12362c) {
            ctx->pc = 0x122C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122c64;
        }
    }
    ctx->pc = 0x123634u;
    // 0x123634: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x123634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x123638: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x123638u;
    SET_GPR_U32(ctx, 31, 0x123640u);
    ctx->pc = 0x12363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123638u;
    // 0x12363c: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x123638u, 0x123640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123640u;
label_123640:
    // 0x123640: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x123640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x123644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x123644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12364c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12364Cu;
    SET_GPR_U32(ctx, 31, 0x123654u);
    ctx->pc = 0x123650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12364Cu;
    // 0x123650: 0x424bc  dsll32      $a0, $a0, 18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12364Cu, 0x123654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123654u;
label_123654:
    // 0x123654: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x123654u;
    {
        const bool branch_taken_0x123654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123654u;
        // 0x123658: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123654) {
            ctx->pc = 0x1235C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1235c0;
        }
    }
    ctx->pc = 0x12365Cu;
label_12365c:
    // 0x12365c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12365cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123660: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x123660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123664: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x123664u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x123668: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x123668u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12366c: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x12366cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x123670: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x123670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x123674: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x123674u;
    SET_GPR_U32(ctx, 31, 0x12367Cu);
    ctx->pc = 0x123678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123674u;
    // 0x123678: 0xddc4fff8  ld          $a0, -0x8($t6) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x123674u, 0x12367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12367Cu;
label_12367c:
    // 0x12367c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12367cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123680:
    // 0x123680: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x123680u;
    SET_GPR_U32(ctx, 31, 0x123688u);
    ctx->pc = 0x123684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123680u;
    // 0x123684: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x123680u, 0x123688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123688u;
label_123688:
    // 0x123688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12368c: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x12368Cu;
    SET_GPR_U32(ctx, 31, 0x123694u);
    ctx->pc = 0x123690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12368Cu;
    // 0x123690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x12368Cu, 0x123694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123694u;
label_123694:
    // 0x123694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x123694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123698: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x123698u;
    SET_GPR_U32(ctx, 31, 0x1236A0u);
    ctx->pc = 0x12369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123698u;
    // 0x12369c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x123698u, 0x1236A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236A0u;
label_1236a0:
    // 0x1236a0: 0x260f0030  addiu       $t7, $s0, 0x30
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1236a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1236a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236a8: 0xa2cf0000  sb          $t7, 0x0($s6)
    ctx->pc = 0x1236a8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x1236ac: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x1236acu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1236b0: 0x166d001d  bne         $s3, $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x1236B0u;
    {
        const bool branch_taken_0x1236b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 13));
        ctx->pc = 0x1236B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236B0u;
        // 0x1236b4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236b0) {
            ctx->pc = 0x123728u;
            goto label_123728;
        }
    }
    ctx->pc = 0x1236B8u;
    // 0x1236b8: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x1236b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x1236bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1236bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236c0: 0x10857c  dsll32      $s0, $s0, 21
    ctx->pc = 0x1236c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 21));
    // 0x1236c4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x1236C4u;
    SET_GPR_U32(ctx, 31, 0x1236CCu);
    ctx->pc = 0x1236C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236C4u;
    // 0x1236c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x1236C4u, 0x1236CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236CCu;
label_1236cc:
    // 0x1236cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1236ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236d0: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x1236D0u;
    SET_GPR_U32(ctx, 31, 0x1236D8u);
    ctx->pc = 0x1236D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236D0u;
    // 0x1236d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x1236D0u, 0x1236D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236D8u;
label_1236d8:
    // 0x1236d8: 0x440fdce  bltz        $v0, . + 4 + (-0x232 << 2)
    ctx->pc = 0x1236D8u;
    {
        const bool branch_taken_0x1236d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1236DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236D8u;
        // 0x1236dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236d8) {
            ctx->pc = 0x122E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122e14;
        }
    }
    ctx->pc = 0x1236E0u;
    // 0x1236e0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x1236E0u;
    SET_GPR_U32(ctx, 31, 0x1236E8u);
    ctx->pc = 0x1236E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236E0u;
    // 0x1236e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x1236E0u, 0x1236E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236E8u;
label_1236e8:
    // 0x1236e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1236e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236ec: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x1236ECu;
    SET_GPR_U32(ctx, 31, 0x1236F4u);
    ctx->pc = 0x1236F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236ECu;
    // 0x1236f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x1236ECu, 0x1236F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236F4u;
label_1236f4:
    // 0x1236f4: 0x441fd5b  bgez        $v0, . + 4 + (-0x2A5 << 2)
    ctx->pc = 0x1236F4u;
    {
        const bool branch_taken_0x1236f4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1236F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236F4u;
        // 0x1236f8: 0x240e0030  addiu       $t6, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236f4) {
            ctx->pc = 0x122C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122c64;
        }
    }
    ctx->pc = 0x1236FCu;
    // 0x1236fc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1236fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_123700:
    // 0x123700: 0x82cf0000  lb          $t7, 0x0($s6)
    ctx->pc = 0x123700u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x123704: 0x0  nop
    ctx->pc = 0x123704u;
    // NOP
    // 0x123708: 0x0  nop
    ctx->pc = 0x123708u;
    // NOP
    // 0x12370c: 0x0  nop
    ctx->pc = 0x12370cu;
    // NOP
    // 0x123710: 0x0  nop
    ctx->pc = 0x123710u;
    // NOP
    // 0x123714: 0x51eefffa  beql        $t7, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123714u;
    {
        const bool branch_taken_0x123714 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x123714) {
            ctx->pc = 0x123718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123714u;
            // 0x123718: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123700;
        }
    }
    ctx->pc = 0x12371Cu;
    // 0x12371c: 0x1000fd8a  b           . + 4 + (-0x276 << 2)
    ctx->pc = 0x12371Cu;
    {
        const bool branch_taken_0x12371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12371Cu;
        // 0x123720: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12371c) {
            ctx->pc = 0x122D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d48;
        }
    }
    ctx->pc = 0x123724u;
    // 0x123724: 0x0  nop
    ctx->pc = 0x123724u;
    // NOP
label_123728:
    // 0x123728: 0x24041009  addiu       $a0, $zero, 0x1009
    ctx->pc = 0x123728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
    // 0x12372c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123730: 0x424bc  dsll32      $a0, $a0, 18
    ctx->pc = 0x123730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 18));
    // 0x123734: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x123734u;
    SET_GPR_U32(ctx, 31, 0x12373Cu);
    ctx->pc = 0x123738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123734u;
    // 0x123738: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x123734u, 0x12373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12373Cu;
label_12373c:
    // 0x12373c: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x12373Cu;
    {
        const bool branch_taken_0x12373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12373Cu;
        // 0x123740: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12373c) {
            ctx->pc = 0x123680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123680;
        }
    }
    ctx->pc = 0x123744u;
label_123744:
    // 0x123744: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x123744u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123748: 0xe9023  negu        $s2, $t6
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x12374c: 0x1240fd0b  beqz        $s2, . + 4 + (-0x2F5 << 2)
    ctx->pc = 0x12374Cu;
    {
        const bool branch_taken_0x12374c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12374Cu;
        // 0x123750: 0x324e000f  andi        $t6, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12374c) {
            ctx->pc = 0x122B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122b7c;
        }
    }
    ctx->pc = 0x123754u;
    // 0x123754: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x123754u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x123758: 0x25ef3c40  addiu       $t7, $t7, 0x3C40
    ctx->pc = 0x123758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15424));
    // 0x12375c: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x123760: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x123760u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x123764: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x123764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123768: 0xddc40000  ld          $a0, 0x0($t6)
    ctx->pc = 0x123768u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12376c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12376Cu;
    SET_GPR_U32(ctx, 31, 0x123774u);
    ctx->pc = 0x123770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12376Cu;
    // 0x123770: 0x128103  sra         $s0, $s2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12376Cu, 0x123774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123774u;
label_123774:
    // 0x123774: 0x1200fd01  beqz        $s0, . + 4 + (-0x2FF << 2)
    ctx->pc = 0x123774u;
    {
        const bool branch_taken_0x123774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123774u;
        // 0x123778: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123774) {
            ctx->pc = 0x122B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122b7c;
        }
    }
    ctx->pc = 0x12377Cu;
    // 0x12377c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12377cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123780: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x123780u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x123784: 0x25f03d08  addiu       $s0, $t7, 0x3D08
    ctx->pc = 0x123784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15624));
label_123788:
    // 0x123788: 0x324f0001  andi        $t7, $s2, 0x1
    ctx->pc = 0x123788u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x12378c: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12378Cu;
    {
        const bool branch_taken_0x12378c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12378Cu;
        // 0x123790: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12378c) {
            ctx->pc = 0x1237A4u;
            goto label_1237a4;
        }
    }
    ctx->pc = 0x123794u;
    // 0x123794: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x123794u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123798: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x123798u;
    SET_GPR_U32(ctx, 31, 0x1237A0u);
    ctx->pc = 0x12379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123798u;
    // 0x12379c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x123798u, 0x1237A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237A0u;
label_1237a0:
    // 0x1237a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1237a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1237a4:
    // 0x1237a4: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x1237a4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1237a8: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1237A8u;
    {
        const bool branch_taken_0x1237a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1237ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237A8u;
        // 0x1237ac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237a8) {
            ctx->pc = 0x123788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123788;
        }
    }
    ctx->pc = 0x1237B0u;
    // 0x1237b0: 0x1000fcf3  b           . + 4 + (-0x30D << 2)
    ctx->pc = 0x1237B0u;
    {
        const bool branch_taken_0x1237b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237B0u;
        // 0x1237b4: 0x8faf0034  lw          $t7, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237b0) {
            ctx->pc = 0x122B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122b80;
        }
    }
    ctx->pc = 0x1237B8u;
label_1237b8:
    // 0x1237b8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1237b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1237bc:
    // 0x1237bc: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x1237bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1237c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1237c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1237c4: 0xe782a  slt         $t7, $zero, $t6
    ctx->pc = 0x1237c4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1237c8: 0x1cf980b  movn        $s3, $t6, $t7
    ctx->pc = 0x1237c8u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 14));
    // 0x1237cc: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1237ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1237d0: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x1237d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x1237d4: 0x1000fca9  b           . + 4 + (-0x357 << 2)
    ctx->pc = 0x1237D4u;
    {
        const bool branch_taken_0x1237d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237D4u;
        // 0x1237d8: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237d4) {
            ctx->pc = 0x122A7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a7c;
        }
    }
    ctx->pc = 0x1237DCu;
label_1237dc:
    // 0x1237dc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1237dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1237e0:
    // 0x1237e0: 0x8fae002c  lw          $t6, 0x2C($sp)
    ctx->pc = 0x1237e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1237e4: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x1237e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1237e8: 0x1ae7821  addu        $t7, $t5, $t6
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1237ec: 0x25f30001  addiu       $s3, $t7, 0x1
    ctx->pc = 0x1237ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1237f0: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x1237f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x1237f4: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x1237f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x1237f8: 0x13702a  slt         $t6, $zero, $s3
    ctx->pc = 0x1237f8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1237fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1237fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123800: 0x1000fc9e  b           . + 4 + (-0x362 << 2)
    ctx->pc = 0x123800u;
    {
        const bool branch_taken_0x123800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123800u;
        // 0x123804: 0x1ee980a  movz        $s3, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123800) {
            ctx->pc = 0x122A7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a7c;
        }
    }
    ctx->pc = 0x123808u;
label_123808:
    // 0x123808: 0x8fae0018  lw          $t6, 0x18($sp)
    ctx->pc = 0x123808u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12380c: 0x8faf002c  lw          $t7, 0x2C($sp)
    ctx->pc = 0x12380cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x123810: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x123810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x123814: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x123814u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x123818: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x123818u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12381c: 0xafae0018  sw          $t6, 0x18($sp)
    ctx->pc = 0x12381cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 14));
    // 0x123820: 0x1000fc7a  b           . + 4 + (-0x386 << 2)
    ctx->pc = 0x123820u;
    {
        const bool branch_taken_0x123820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123820u;
        // 0x123824: 0xafad001c  sw          $t5, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123820) {
            ctx->pc = 0x122A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a0c;
        }
    }
    ctx->pc = 0x123828u;
label_123828:
    // 0x123828: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x123828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x12382c: 0x1000fc70  b           . + 4 + (-0x390 << 2)
    ctx->pc = 0x12382Cu;
    {
        const bool branch_taken_0x12382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12382Cu;
        // 0x123830: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12382c) {
            ctx->pc = 0x1229F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1229f0;
        }
    }
    ctx->pc = 0x123834u;
label_123834:
    // 0x123834: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x123834u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123838: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12383c: 0x24f6821  addu        $t5, $s2, $t7
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x123840: 0x25b30432  addiu       $s3, $t5, 0x432
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 13), 1074));
    // 0x123844: 0x2a6f0021  slti        $t7, $s3, 0x21
    ctx->pc = 0x123844u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x123848: 0x15e0001b  bnez        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x123848u;
    {
        const bool branch_taken_0x123848 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123848u;
        // 0x12384c: 0x14703c  dsll32      $t6, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123848) {
            ctx->pc = 0x1238B8u;
            goto label_1238b8;
        }
    }
    ctx->pc = 0x123850u;
    // 0x123850: 0x14783c  dsll32      $t7, $s4, 0
    ctx->pc = 0x123850u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) << (32 + 0));
    // 0x123854: 0x25ad0412  addiu       $t5, $t5, 0x412
    ctx->pc = 0x123854u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1042));
    // 0x123858: 0x137023  negu        $t6, $s3
    ctx->pc = 0x123858u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x12385c: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12385cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x123860: 0x1d07004  sllv        $t6, $s0, $t6
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 14) & 0x1F));
    // 0x123864: 0x1af7806  srlv        $t7, $t7, $t5
    ctx->pc = 0x123864u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x123868: 0x1cf8025  or          $s0, $t6, $t7
    ctx->pc = 0x123868u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_12386c:
    // 0x12386c: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x12386Cu;
    SET_GPR_U32(ctx, 31, 0x123874u);
    ctx->pc = 0x123870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12386Cu;
    // 0x123870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x12386Cu, 0x123874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123874u;
label_123874:
    // 0x123874: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123874u;
    {
        const bool branch_taken_0x123874 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x123878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123874u;
        // 0x123878: 0x3c0ffe10  lui         $t7, 0xFE10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65040 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123874) {
            ctx->pc = 0x123890u;
            goto label_123890;
        }
    }
    ctx->pc = 0x12387Cu;
    // 0x12387c: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x12387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x123880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123884: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x123884u;
    SET_GPR_U32(ctx, 31, 0x12388Cu);
    ctx->pc = 0x123888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123884u;
    // 0x123888: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x123884u, 0x12388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12388Cu;
label_12388c:
    // 0x12388c: 0x3c0ffe10  lui         $t7, 0xFE10
    ctx->pc = 0x12388cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65040 << 16));
label_123890:
    // 0x123890: 0x2703f  dsra32      $t6, $v0, 0
    ctx->pc = 0x123890u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x123894: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x123894u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x123898: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x123898u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12389c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12389cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1238a0: 0x17b83e  dsrl32      $s7, $s7, 0
    ctx->pc = 0x1238a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x1238a4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1238a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1238a8: 0xafaf0044  sw          $t7, 0x44($sp)
    ctx->pc = 0x1238a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 15));
    // 0x1238ac: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x1238acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x1238b0: 0x1000fc0f  b           . + 4 + (-0x3F1 << 2)
    ctx->pc = 0x1238B0u;
    {
        const bool branch_taken_0x1238b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238B0u;
        // 0x1238b4: 0x2eeb825  or          $s7, $s7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238b0) {
            ctx->pc = 0x1228F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1228f0;
        }
    }
    ctx->pc = 0x1238B8u;
label_1238b8:
    // 0x1238b8: 0x137823  negu        $t7, $s3
    ctx->pc = 0x1238b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1238bc: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x1238bcu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x1238c0: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x1238C0u;
    {
        const bool branch_taken_0x1238c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238C0u;
        // 0x1238c4: 0x1ee8004  sllv        $s0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238c0) {
            ctx->pc = 0x12386Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12386c;
        }
    }
    ctx->pc = 0x1238C8u;
}
