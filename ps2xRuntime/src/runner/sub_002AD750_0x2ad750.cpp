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

// Function: sub_002AD750
// Address: 0x2ad750 - 0x2adb38
void sub_002AD750_0x2ad750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD750_0x2ad750");
#endif

    switch (ctx->pc) {
        case 0x2ad750u: goto label_2ad750;
        case 0x2ad754u: goto label_2ad754;
        case 0x2ad758u: goto label_2ad758;
        case 0x2ad75cu: goto label_2ad75c;
        case 0x2ad760u: goto label_2ad760;
        case 0x2ad764u: goto label_2ad764;
        case 0x2ad768u: goto label_2ad768;
        case 0x2ad76cu: goto label_2ad76c;
        case 0x2ad770u: goto label_2ad770;
        case 0x2ad774u: goto label_2ad774;
        case 0x2ad778u: goto label_2ad778;
        case 0x2ad77cu: goto label_2ad77c;
        case 0x2ad780u: goto label_2ad780;
        case 0x2ad784u: goto label_2ad784;
        case 0x2ad788u: goto label_2ad788;
        case 0x2ad78cu: goto label_2ad78c;
        case 0x2ad790u: goto label_2ad790;
        case 0x2ad794u: goto label_2ad794;
        case 0x2ad798u: goto label_2ad798;
        case 0x2ad79cu: goto label_2ad79c;
        case 0x2ad7a0u: goto label_2ad7a0;
        case 0x2ad7a4u: goto label_2ad7a4;
        case 0x2ad7a8u: goto label_2ad7a8;
        case 0x2ad7acu: goto label_2ad7ac;
        case 0x2ad7b0u: goto label_2ad7b0;
        case 0x2ad7b4u: goto label_2ad7b4;
        case 0x2ad7b8u: goto label_2ad7b8;
        case 0x2ad7bcu: goto label_2ad7bc;
        case 0x2ad7c0u: goto label_2ad7c0;
        case 0x2ad7c4u: goto label_2ad7c4;
        case 0x2ad7c8u: goto label_2ad7c8;
        case 0x2ad7ccu: goto label_2ad7cc;
        case 0x2ad7d0u: goto label_2ad7d0;
        case 0x2ad7d4u: goto label_2ad7d4;
        case 0x2ad7d8u: goto label_2ad7d8;
        case 0x2ad7dcu: goto label_2ad7dc;
        case 0x2ad7e0u: goto label_2ad7e0;
        case 0x2ad7e4u: goto label_2ad7e4;
        case 0x2ad7e8u: goto label_2ad7e8;
        case 0x2ad7ecu: goto label_2ad7ec;
        case 0x2ad7f0u: goto label_2ad7f0;
        case 0x2ad7f4u: goto label_2ad7f4;
        case 0x2ad7f8u: goto label_2ad7f8;
        case 0x2ad7fcu: goto label_2ad7fc;
        case 0x2ad800u: goto label_2ad800;
        case 0x2ad804u: goto label_2ad804;
        case 0x2ad808u: goto label_2ad808;
        case 0x2ad80cu: goto label_2ad80c;
        case 0x2ad810u: goto label_2ad810;
        case 0x2ad814u: goto label_2ad814;
        case 0x2ad818u: goto label_2ad818;
        case 0x2ad81cu: goto label_2ad81c;
        case 0x2ad820u: goto label_2ad820;
        case 0x2ad824u: goto label_2ad824;
        case 0x2ad828u: goto label_2ad828;
        case 0x2ad82cu: goto label_2ad82c;
        case 0x2ad830u: goto label_2ad830;
        case 0x2ad834u: goto label_2ad834;
        case 0x2ad838u: goto label_2ad838;
        case 0x2ad83cu: goto label_2ad83c;
        case 0x2ad840u: goto label_2ad840;
        case 0x2ad844u: goto label_2ad844;
        case 0x2ad848u: goto label_2ad848;
        case 0x2ad84cu: goto label_2ad84c;
        case 0x2ad850u: goto label_2ad850;
        case 0x2ad854u: goto label_2ad854;
        case 0x2ad858u: goto label_2ad858;
        case 0x2ad85cu: goto label_2ad85c;
        case 0x2ad860u: goto label_2ad860;
        case 0x2ad864u: goto label_2ad864;
        case 0x2ad868u: goto label_2ad868;
        case 0x2ad86cu: goto label_2ad86c;
        case 0x2ad870u: goto label_2ad870;
        case 0x2ad874u: goto label_2ad874;
        case 0x2ad878u: goto label_2ad878;
        case 0x2ad87cu: goto label_2ad87c;
        case 0x2ad880u: goto label_2ad880;
        case 0x2ad884u: goto label_2ad884;
        case 0x2ad888u: goto label_2ad888;
        case 0x2ad88cu: goto label_2ad88c;
        case 0x2ad890u: goto label_2ad890;
        case 0x2ad894u: goto label_2ad894;
        case 0x2ad898u: goto label_2ad898;
        case 0x2ad89cu: goto label_2ad89c;
        case 0x2ad8a0u: goto label_2ad8a0;
        case 0x2ad8a4u: goto label_2ad8a4;
        case 0x2ad8a8u: goto label_2ad8a8;
        case 0x2ad8acu: goto label_2ad8ac;
        case 0x2ad8b0u: goto label_2ad8b0;
        case 0x2ad8b4u: goto label_2ad8b4;
        case 0x2ad8b8u: goto label_2ad8b8;
        case 0x2ad8bcu: goto label_2ad8bc;
        case 0x2ad8c0u: goto label_2ad8c0;
        case 0x2ad8c4u: goto label_2ad8c4;
        case 0x2ad8c8u: goto label_2ad8c8;
        case 0x2ad8ccu: goto label_2ad8cc;
        case 0x2ad8d0u: goto label_2ad8d0;
        case 0x2ad8d4u: goto label_2ad8d4;
        case 0x2ad8d8u: goto label_2ad8d8;
        case 0x2ad8dcu: goto label_2ad8dc;
        case 0x2ad8e0u: goto label_2ad8e0;
        case 0x2ad8e4u: goto label_2ad8e4;
        case 0x2ad8e8u: goto label_2ad8e8;
        case 0x2ad8ecu: goto label_2ad8ec;
        case 0x2ad8f0u: goto label_2ad8f0;
        case 0x2ad8f4u: goto label_2ad8f4;
        case 0x2ad8f8u: goto label_2ad8f8;
        case 0x2ad8fcu: goto label_2ad8fc;
        case 0x2ad900u: goto label_2ad900;
        case 0x2ad904u: goto label_2ad904;
        case 0x2ad908u: goto label_2ad908;
        case 0x2ad90cu: goto label_2ad90c;
        case 0x2ad910u: goto label_2ad910;
        case 0x2ad914u: goto label_2ad914;
        case 0x2ad918u: goto label_2ad918;
        case 0x2ad91cu: goto label_2ad91c;
        case 0x2ad920u: goto label_2ad920;
        case 0x2ad924u: goto label_2ad924;
        case 0x2ad928u: goto label_2ad928;
        case 0x2ad92cu: goto label_2ad92c;
        case 0x2ad930u: goto label_2ad930;
        case 0x2ad934u: goto label_2ad934;
        case 0x2ad938u: goto label_2ad938;
        case 0x2ad93cu: goto label_2ad93c;
        case 0x2ad940u: goto label_2ad940;
        case 0x2ad944u: goto label_2ad944;
        case 0x2ad948u: goto label_2ad948;
        case 0x2ad94cu: goto label_2ad94c;
        case 0x2ad950u: goto label_2ad950;
        case 0x2ad954u: goto label_2ad954;
        case 0x2ad958u: goto label_2ad958;
        case 0x2ad95cu: goto label_2ad95c;
        case 0x2ad960u: goto label_2ad960;
        case 0x2ad964u: goto label_2ad964;
        case 0x2ad968u: goto label_2ad968;
        case 0x2ad96cu: goto label_2ad96c;
        case 0x2ad970u: goto label_2ad970;
        case 0x2ad974u: goto label_2ad974;
        case 0x2ad978u: goto label_2ad978;
        case 0x2ad97cu: goto label_2ad97c;
        case 0x2ad980u: goto label_2ad980;
        case 0x2ad984u: goto label_2ad984;
        case 0x2ad988u: goto label_2ad988;
        case 0x2ad98cu: goto label_2ad98c;
        case 0x2ad990u: goto label_2ad990;
        case 0x2ad994u: goto label_2ad994;
        case 0x2ad998u: goto label_2ad998;
        case 0x2ad99cu: goto label_2ad99c;
        case 0x2ad9a0u: goto label_2ad9a0;
        case 0x2ad9a4u: goto label_2ad9a4;
        case 0x2ad9a8u: goto label_2ad9a8;
        case 0x2ad9acu: goto label_2ad9ac;
        case 0x2ad9b0u: goto label_2ad9b0;
        case 0x2ad9b4u: goto label_2ad9b4;
        case 0x2ad9b8u: goto label_2ad9b8;
        case 0x2ad9bcu: goto label_2ad9bc;
        case 0x2ad9c0u: goto label_2ad9c0;
        case 0x2ad9c4u: goto label_2ad9c4;
        case 0x2ad9c8u: goto label_2ad9c8;
        case 0x2ad9ccu: goto label_2ad9cc;
        case 0x2ad9d0u: goto label_2ad9d0;
        case 0x2ad9d4u: goto label_2ad9d4;
        case 0x2ad9d8u: goto label_2ad9d8;
        case 0x2ad9dcu: goto label_2ad9dc;
        case 0x2ad9e0u: goto label_2ad9e0;
        case 0x2ad9e4u: goto label_2ad9e4;
        case 0x2ad9e8u: goto label_2ad9e8;
        case 0x2ad9ecu: goto label_2ad9ec;
        case 0x2ad9f0u: goto label_2ad9f0;
        case 0x2ad9f4u: goto label_2ad9f4;
        case 0x2ad9f8u: goto label_2ad9f8;
        case 0x2ad9fcu: goto label_2ad9fc;
        case 0x2ada00u: goto label_2ada00;
        case 0x2ada04u: goto label_2ada04;
        case 0x2ada08u: goto label_2ada08;
        case 0x2ada0cu: goto label_2ada0c;
        case 0x2ada10u: goto label_2ada10;
        case 0x2ada14u: goto label_2ada14;
        case 0x2ada18u: goto label_2ada18;
        case 0x2ada1cu: goto label_2ada1c;
        case 0x2ada20u: goto label_2ada20;
        case 0x2ada24u: goto label_2ada24;
        case 0x2ada28u: goto label_2ada28;
        case 0x2ada2cu: goto label_2ada2c;
        case 0x2ada30u: goto label_2ada30;
        case 0x2ada34u: goto label_2ada34;
        case 0x2ada38u: goto label_2ada38;
        case 0x2ada3cu: goto label_2ada3c;
        case 0x2ada40u: goto label_2ada40;
        case 0x2ada44u: goto label_2ada44;
        case 0x2ada48u: goto label_2ada48;
        case 0x2ada4cu: goto label_2ada4c;
        case 0x2ada50u: goto label_2ada50;
        case 0x2ada54u: goto label_2ada54;
        case 0x2ada58u: goto label_2ada58;
        case 0x2ada5cu: goto label_2ada5c;
        case 0x2ada60u: goto label_2ada60;
        case 0x2ada64u: goto label_2ada64;
        case 0x2ada68u: goto label_2ada68;
        case 0x2ada6cu: goto label_2ada6c;
        case 0x2ada70u: goto label_2ada70;
        case 0x2ada74u: goto label_2ada74;
        case 0x2ada78u: goto label_2ada78;
        case 0x2ada7cu: goto label_2ada7c;
        case 0x2ada80u: goto label_2ada80;
        case 0x2ada84u: goto label_2ada84;
        case 0x2ada88u: goto label_2ada88;
        case 0x2ada8cu: goto label_2ada8c;
        case 0x2ada90u: goto label_2ada90;
        case 0x2ada94u: goto label_2ada94;
        case 0x2ada98u: goto label_2ada98;
        case 0x2ada9cu: goto label_2ada9c;
        case 0x2adaa0u: goto label_2adaa0;
        case 0x2adaa4u: goto label_2adaa4;
        case 0x2adaa8u: goto label_2adaa8;
        case 0x2adaacu: goto label_2adaac;
        case 0x2adab0u: goto label_2adab0;
        case 0x2adab4u: goto label_2adab4;
        case 0x2adab8u: goto label_2adab8;
        case 0x2adabcu: goto label_2adabc;
        case 0x2adac0u: goto label_2adac0;
        case 0x2adac4u: goto label_2adac4;
        case 0x2adac8u: goto label_2adac8;
        case 0x2adaccu: goto label_2adacc;
        case 0x2adad0u: goto label_2adad0;
        case 0x2adad4u: goto label_2adad4;
        case 0x2adad8u: goto label_2adad8;
        case 0x2adadcu: goto label_2adadc;
        case 0x2adae0u: goto label_2adae0;
        case 0x2adae4u: goto label_2adae4;
        case 0x2adae8u: goto label_2adae8;
        case 0x2adaecu: goto label_2adaec;
        case 0x2adaf0u: goto label_2adaf0;
        case 0x2adaf4u: goto label_2adaf4;
        case 0x2adaf8u: goto label_2adaf8;
        case 0x2adafcu: goto label_2adafc;
        case 0x2adb00u: goto label_2adb00;
        case 0x2adb04u: goto label_2adb04;
        case 0x2adb08u: goto label_2adb08;
        case 0x2adb0cu: goto label_2adb0c;
        case 0x2adb10u: goto label_2adb10;
        case 0x2adb14u: goto label_2adb14;
        case 0x2adb18u: goto label_2adb18;
        case 0x2adb1cu: goto label_2adb1c;
        case 0x2adb20u: goto label_2adb20;
        case 0x2adb24u: goto label_2adb24;
        case 0x2adb28u: goto label_2adb28;
        case 0x2adb2cu: goto label_2adb2c;
        case 0x2adb30u: goto label_2adb30;
        case 0x2adb34u: goto label_2adb34;
        default: break;
    }

    ctx->pc = 0x2ad750u;

label_2ad750:
    // 0x2ad750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ad754:
    // 0x2ad754: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ad754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ad758:
    // 0x2ad758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ad75c:
    // 0x2ad75c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2ad75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
label_2ad760:
    // 0x2ad760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ad764:
    // 0x2ad764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ad764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ad768:
    // 0x2ad768: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ad768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad76c:
    // 0x2ad76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad770:
    // 0x2ad770: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2ad770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
label_2ad774:
    // 0x2ad774: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ad774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ad778:
    // 0x2ad778: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ad778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad77c:
    // 0x2ad77c: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x2ad77cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
label_2ad780:
    // 0x2ad780: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ad780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ad784:
    // 0x2ad784: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ad784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad788:
    // 0x2ad788: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x2ad788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_2ad78c:
    // 0x2ad78c: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ad78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ad790:
    // 0x2ad790: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ad790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad794:
    // 0x2ad794: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x2ad794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
label_2ad798:
    // 0x2ad798: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ad798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ad79c:
    // 0x2ad79c: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2ad79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad7a0:
    // 0x2ad7a0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x2ad7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_2ad7a4:
    // 0x2ad7a4: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2ad7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_2ad7a8:
    // 0x2ad7a8: 0xa025e000  sb          $a1, -0x2000($at)
    ctx->pc = 0x2ad7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959104), (uint8_t)GPR_U32(ctx, 5));
label_2ad7ac:
    // 0x2ad7ac: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2ad7acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2ad7b0:
    // 0x2ad7b0: 0x108300c9  beq         $a0, $v1, . + 4 + (0xC9 << 2)
label_2ad7b4:
    if (ctx->pc == 0x2AD7B4u) {
        ctx->pc = 0x2AD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7B0u;
        // 0x2ad7b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD7B8u;
        goto label_2ad7b8;
    }
    ctx->pc = 0x2AD7B0u;
    {
        const bool branch_taken_0x2ad7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7B0u;
        // 0x2ad7b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7b0) {
            ctx->pc = 0x2ADAD8u;
            goto label_2adad8;
        }
    }
    ctx->pc = 0x2AD7B8u;
label_2ad7b8:
    // 0x2ad7b8: 0x10830093  beq         $a0, $v1, . + 4 + (0x93 << 2)
label_2ad7bc:
    if (ctx->pc == 0x2AD7BCu) {
        ctx->pc = 0x2AD7C0u;
        goto label_2ad7c0;
    }
    ctx->pc = 0x2AD7B8u;
    {
        const bool branch_taken_0x2ad7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ad7b8) {
            ctx->pc = 0x2ADA08u;
            goto label_2ada08;
        }
    }
    ctx->pc = 0x2AD7C0u;
label_2ad7c0:
    // 0x2ad7c0: 0x1085005d  beq         $a0, $a1, . + 4 + (0x5D << 2)
label_2ad7c4:
    if (ctx->pc == 0x2AD7C4u) {
        ctx->pc = 0x2AD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7C0u;
        // 0x2ad7c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD7C8u;
        goto label_2ad7c8;
    }
    ctx->pc = 0x2AD7C0u;
    {
        const bool branch_taken_0x2ad7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7C0u;
        // 0x2ad7c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7c0) {
            ctx->pc = 0x2AD938u;
            goto label_2ad938;
        }
    }
    ctx->pc = 0x2AD7C8u;
label_2ad7c8:
    // 0x2ad7c8: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_2ad7cc:
    if (ctx->pc == 0x2AD7CCu) {
        ctx->pc = 0x2AD7D0u;
        goto label_2ad7d0;
    }
    ctx->pc = 0x2AD7C8u;
    {
        const bool branch_taken_0x2ad7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ad7c8) {
            ctx->pc = 0x2AD868u;
            goto label_2ad868;
        }
    }
    ctx->pc = 0x2AD7D0u;
label_2ad7d0:
    // 0x2ad7d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ad7d4:
    if (ctx->pc == 0x2AD7D4u) {
        ctx->pc = 0x2AD7D8u;
        goto label_2ad7d8;
    }
    ctx->pc = 0x2AD7D0u;
    {
        const bool branch_taken_0x2ad7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad7d0) {
            ctx->pc = 0x2AD7E0u;
            goto label_2ad7e0;
        }
    }
    ctx->pc = 0x2AD7D8u;
label_2ad7d8:
    // 0x2ad7d8: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2ad7dc:
    if (ctx->pc == 0x2AD7DCu) {
        ctx->pc = 0x2AD7E0u;
        goto label_2ad7e0;
    }
    ctx->pc = 0x2AD7D8u;
    {
        const bool branch_taken_0x2ad7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad7d8) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2AD7E0u;
label_2ad7e0:
    // 0x2ad7e0: 0x860408a0  lh          $a0, 0x8A0($s0)
    ctx->pc = 0x2ad7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2208)));
label_2ad7e4:
    // 0x2ad7e4: 0x24030c66  addiu       $v1, $zero, 0xC66
    ctx->pc = 0x2ad7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3174));
label_2ad7e8:
    // 0x2ad7e8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2ad7ec:
    if (ctx->pc == 0x2AD7ECu) {
        ctx->pc = 0x2AD7F0u;
        goto label_2ad7f0;
    }
    ctx->pc = 0x2AD7E8u;
    {
        const bool branch_taken_0x2ad7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ad7e8) {
            ctx->pc = 0x2AD7F8u;
            goto label_2ad7f8;
        }
    }
    ctx->pc = 0x2AD7F0u;
label_2ad7f0:
    // 0x2ad7f0: 0xa60400c2  sh          $a0, 0xC2($s0)
    ctx->pc = 0x2ad7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 4));
label_2ad7f4:
    // 0x2ad7f4: 0x0  nop
    ctx->pc = 0x2ad7f4u;
    // NOP
label_2ad7f8:
    // 0x2ad7f8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2ad7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2ad7fc:
    // 0x2ad7fc: 0xc6010890  lwc1        $f1, 0x890($s0)
    ctx->pc = 0x2ad7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ad800:
    // 0x2ad800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ad804:
    // 0x2ad804: 0x0  nop
    ctx->pc = 0x2ad804u;
    // NOP
label_2ad808:
    // 0x2ad808: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ad808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad80c:
    // 0x2ad80c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2ad810:
    if (ctx->pc == 0x2AD810u) {
        ctx->pc = 0x2AD814u;
        goto label_2ad814;
    }
    ctx->pc = 0x2AD80Cu;
    {
        const bool branch_taken_0x2ad80c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad80c) {
            ctx->pc = 0x2AD824u;
            goto label_2ad824;
        }
    }
    ctx->pc = 0x2AD814u;
label_2ad814:
    // 0x2ad814: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad818:
    // 0x2ad818: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad81c:
    // 0x2ad81c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ad820:
    if (ctx->pc == 0x2AD820u) {
        ctx->pc = 0x2AD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD81Cu;
        // 0x2ad820: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD824u;
        goto label_2ad824;
    }
    ctx->pc = 0x2AD81Cu;
    {
        const bool branch_taken_0x2ad81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD81Cu;
        // 0x2ad820: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad81c) {
            ctx->pc = 0x2AD840u;
            goto label_2ad840;
        }
    }
    ctx->pc = 0x2AD824u;
label_2ad824:
    // 0x2ad824: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ad824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ad828:
    // 0x2ad828: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad82c:
    // 0x2ad82c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad82cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad830:
    // 0x2ad830: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad834:
    // 0x2ad834: 0x0  nop
    ctx->pc = 0x2ad834u;
    // NOP
label_2ad838:
    // 0x2ad838: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ad838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ad83c:
    // 0x2ad83c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad840:
    // 0x2ad840: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2ad840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ad844:
    // 0x2ad844: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ad844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ad848:
    // 0x2ad848: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad84c:
    // 0x2ad84c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ad84cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2ad850:
    // 0x2ad850: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ad850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ad854:
    // 0x2ad854: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x2ad854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
label_2ad858:
    // 0x2ad858: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2ad858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
label_2ad85c:
    // 0x2ad85c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ad85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad860:
    // 0x2ad860: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x2ad860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
label_2ad864:
    // 0x2ad864: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2ad864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2ad868:
    // 0x2ad868: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ad868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2ad86c:
    // 0x2ad86c: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
label_2ad870:
    if (ctx->pc == 0x2AD870u) {
        ctx->pc = 0x2AD874u;
        goto label_2ad874;
    }
    ctx->pc = 0x2AD86Cu;
    {
        const bool branch_taken_0x2ad86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad86c) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2AD874u;
label_2ad874:
    // 0x2ad874: 0x8e0308c4  lw          $v1, 0x8C4($s0)
    ctx->pc = 0x2ad874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
label_2ad878:
    // 0x2ad878: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ad87c:
    if (ctx->pc == 0x2AD87Cu) {
        ctx->pc = 0x2AD880u;
        goto label_2ad880;
    }
    ctx->pc = 0x2AD878u;
    {
        const bool branch_taken_0x2ad878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad878) {
            ctx->pc = 0x2AD888u;
            goto label_2ad888;
        }
    }
    ctx->pc = 0x2AD880u;
label_2ad880:
    // 0x2ad880: 0x60f809  jalr        $v1
label_2ad884:
    if (ctx->pc == 0x2AD884u) {
        ctx->pc = 0x2AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD880u;
        // 0x2ad884: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD888u;
        goto label_2ad888;
    }
    ctx->pc = 0x2AD880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD888u);
        ctx->pc = 0x2AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD880u;
        // 0x2ad884: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD880u, 0x2AD888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD888u;
label_2ad888:
    // 0x2ad888: 0xc6010894  lwc1        $f1, 0x894($s0)
    ctx->pc = 0x2ad888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ad88c:
    // 0x2ad88c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ad88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ad890:
    // 0x2ad890: 0x0  nop
    ctx->pc = 0x2ad890u;
    // NOP
label_2ad894:
    // 0x2ad894: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ad894u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad898:
    // 0x2ad898: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_2ad89c:
    if (ctx->pc == 0x2AD89Cu) {
        ctx->pc = 0x2AD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD898u;
        // 0x2ad89c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD8A0u;
        goto label_2ad8a0;
    }
    ctx->pc = 0x2AD898u;
    {
        const bool branch_taken_0x2ad898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD898u;
        // 0x2ad89c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad898) {
            ctx->pc = 0x2AD908u;
            goto label_2ad908;
        }
    }
    ctx->pc = 0x2AD8A0u;
label_2ad8a0:
    // 0x2ad8a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad8a4:
    // 0x2ad8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ad8a8:
    // 0x2ad8a8: 0x0  nop
    ctx->pc = 0x2ad8a8u;
    // NOP
label_2ad8ac:
    // 0x2ad8ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ad8acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad8b0:
    // 0x2ad8b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2ad8b4:
    if (ctx->pc == 0x2AD8B4u) {
        ctx->pc = 0x2AD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8B0u;
        // 0x2ad8b4: 0xa20007f4  sb          $zero, 0x7F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD8B8u;
        goto label_2ad8b8;
    }
    ctx->pc = 0x2AD8B0u;
    {
        const bool branch_taken_0x2ad8b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8B0u;
        // 0x2ad8b4: 0xa20007f4  sb          $zero, 0x7F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8b0) {
            ctx->pc = 0x2AD8C8u;
            goto label_2ad8c8;
        }
    }
    ctx->pc = 0x2AD8B8u;
label_2ad8b8:
    // 0x2ad8b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad8b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad8bc:
    // 0x2ad8bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad8c0:
    // 0x2ad8c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ad8c4:
    if (ctx->pc == 0x2AD8C4u) {
        ctx->pc = 0x2AD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8C0u;
        // 0x2ad8c4: 0xa60407f2  sh          $a0, 0x7F2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD8C8u;
        goto label_2ad8c8;
    }
    ctx->pc = 0x2AD8C0u;
    {
        const bool branch_taken_0x2ad8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD8C0u;
        // 0x2ad8c4: 0xa60407f2  sh          $a0, 0x7F2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad8c0) {
            ctx->pc = 0x2AD8E4u;
            goto label_2ad8e4;
        }
    }
    ctx->pc = 0x2AD8C8u;
label_2ad8c8:
    // 0x2ad8c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ad8c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ad8cc:
    // 0x2ad8cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad8d0:
    // 0x2ad8d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad8d4:
    // 0x2ad8d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad8d8:
    // 0x2ad8d8: 0x0  nop
    ctx->pc = 0x2ad8d8u;
    // NOP
label_2ad8dc:
    // 0x2ad8dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ad8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ad8e0:
    // 0x2ad8e0: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ad8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2ad8e4:
    // 0x2ad8e4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ad8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ad8e8:
    // 0x2ad8e8: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2ad8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2ad8ec:
    // 0x2ad8ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad8f0:
    // 0x2ad8f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ad8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ad8f4:
    // 0x2ad8f4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ad8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_2ad8f8:
    // 0x2ad8f8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2ad8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_2ad8fc:
    // 0x2ad8fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ad8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ad900:
    // 0x2ad900: 0x10000089  b           . + 4 + (0x89 << 2)
label_2ad904:
    if (ctx->pc == 0x2AD904u) {
        ctx->pc = 0x2AD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD900u;
        // 0x2ad904: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD908u;
        goto label_2ad908;
    }
    ctx->pc = 0x2AD900u;
    {
        const bool branch_taken_0x2ad900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD900u;
        // 0x2ad904: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad900) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2AD908u;
label_2ad908:
    // 0x2ad908: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad90c:
    // 0x2ad90c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ad90cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ad910:
    // 0x2ad910: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ad910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ad914:
    // 0x2ad914: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2ad914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2ad918:
    // 0x2ad918: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ad918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ad91c:
    // 0x2ad91c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2ad91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2ad920:
    // 0x2ad920: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad924:
    // 0x2ad924: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ad924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ad928:
    // 0x2ad928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ad928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad92c:
    // 0x2ad92c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2ad92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
label_2ad930:
    // 0x2ad930: 0x1000007d  b           . + 4 + (0x7D << 2)
label_2ad934:
    if (ctx->pc == 0x2AD934u) {
        ctx->pc = 0x2AD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD930u;
        // 0x2ad934: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD938u;
        goto label_2ad938;
    }
    ctx->pc = 0x2AD930u;
    {
        const bool branch_taken_0x2ad930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD930u;
        // 0x2ad934: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad930) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2AD938u;
label_2ad938:
    // 0x2ad938: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ad938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2ad93c:
    // 0x2ad93c: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
label_2ad940:
    if (ctx->pc == 0x2AD940u) {
        ctx->pc = 0x2AD944u;
        goto label_2ad944;
    }
    ctx->pc = 0x2AD93Cu;
    {
        const bool branch_taken_0x2ad93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad93c) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2AD944u;
label_2ad944:
    // 0x2ad944: 0x8e0308c4  lw          $v1, 0x8C4($s0)
    ctx->pc = 0x2ad944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
label_2ad948:
    // 0x2ad948: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ad94c:
    if (ctx->pc == 0x2AD94Cu) {
        ctx->pc = 0x2AD950u;
        goto label_2ad950;
    }
    ctx->pc = 0x2AD948u;
    {
        const bool branch_taken_0x2ad948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad948) {
            ctx->pc = 0x2AD958u;
            goto label_2ad958;
        }
    }
    ctx->pc = 0x2AD950u;
label_2ad950:
    // 0x2ad950: 0x60f809  jalr        $v1
label_2ad954:
    if (ctx->pc == 0x2AD954u) {
        ctx->pc = 0x2AD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD950u;
        // 0x2ad954: 0x8e0408b8  lw          $a0, 0x8B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD958u;
        goto label_2ad958;
    }
    ctx->pc = 0x2AD950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD958u);
        ctx->pc = 0x2AD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD950u;
        // 0x2ad954: 0x8e0408b8  lw          $a0, 0x8B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD950u, 0x2AD958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD958u;
label_2ad958:
    // 0x2ad958: 0xc6010898  lwc1        $f1, 0x898($s0)
    ctx->pc = 0x2ad958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ad95c:
    // 0x2ad95c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ad95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ad960:
    // 0x2ad960: 0x0  nop
    ctx->pc = 0x2ad960u;
    // NOP
label_2ad964:
    // 0x2ad964: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ad964u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad968:
    // 0x2ad968: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_2ad96c:
    if (ctx->pc == 0x2AD96Cu) {
        ctx->pc = 0x2AD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD968u;
        // 0x2ad96c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD970u;
        goto label_2ad970;
    }
    ctx->pc = 0x2AD968u;
    {
        const bool branch_taken_0x2ad968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD968u;
        // 0x2ad96c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad968) {
            ctx->pc = 0x2AD9D8u;
            goto label_2ad9d8;
        }
    }
    ctx->pc = 0x2AD970u;
label_2ad970:
    // 0x2ad970: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad974:
    // 0x2ad974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ad978:
    // 0x2ad978: 0x0  nop
    ctx->pc = 0x2ad978u;
    // NOP
label_2ad97c:
    // 0x2ad97c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ad97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad980:
    // 0x2ad980: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2ad984:
    if (ctx->pc == 0x2AD984u) {
        ctx->pc = 0x2AD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD980u;
        // 0x2ad984: 0xa20007f4  sb          $zero, 0x7F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD988u;
        goto label_2ad988;
    }
    ctx->pc = 0x2AD980u;
    {
        const bool branch_taken_0x2ad980 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD980u;
        // 0x2ad984: 0xa20007f4  sb          $zero, 0x7F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad980) {
            ctx->pc = 0x2AD998u;
            goto label_2ad998;
        }
    }
    ctx->pc = 0x2AD988u;
label_2ad988:
    // 0x2ad988: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad98c:
    // 0x2ad98c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad990:
    // 0x2ad990: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ad994:
    if (ctx->pc == 0x2AD994u) {
        ctx->pc = 0x2AD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD990u;
        // 0x2ad994: 0xa60407f2  sh          $a0, 0x7F2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD998u;
        goto label_2ad998;
    }
    ctx->pc = 0x2AD990u;
    {
        const bool branch_taken_0x2ad990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD990u;
        // 0x2ad994: 0xa60407f2  sh          $a0, 0x7F2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad990) {
            ctx->pc = 0x2AD9B4u;
            goto label_2ad9b4;
        }
    }
    ctx->pc = 0x2AD998u;
label_2ad998:
    // 0x2ad998: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ad998u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ad99c:
    // 0x2ad99c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad9a0:
    // 0x2ad9a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad9a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad9a4:
    // 0x2ad9a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad9a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad9a8:
    // 0x2ad9a8: 0x0  nop
    ctx->pc = 0x2ad9a8u;
    // NOP
label_2ad9ac:
    // 0x2ad9ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ad9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ad9b0:
    // 0x2ad9b0: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ad9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2ad9b4:
    // 0x2ad9b4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ad9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ad9b8:
    // 0x2ad9b8: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2ad9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2ad9bc:
    // 0x2ad9bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad9c0:
    // 0x2ad9c0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ad9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ad9c4:
    // 0x2ad9c4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ad9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_2ad9c8:
    // 0x2ad9c8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2ad9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_2ad9cc:
    // 0x2ad9cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ad9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ad9d0:
    // 0x2ad9d0: 0x10000055  b           . + 4 + (0x55 << 2)
label_2ad9d4:
    if (ctx->pc == 0x2AD9D4u) {
        ctx->pc = 0x2AD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9D0u;
        // 0x2ad9d4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD9D8u;
        goto label_2ad9d8;
    }
    ctx->pc = 0x2AD9D0u;
    {
        const bool branch_taken_0x2ad9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9D0u;
        // 0x2ad9d4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad9d0) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2AD9D8u;
label_2ad9d8:
    // 0x2ad9d8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad9dc:
    // 0x2ad9dc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ad9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ad9e0:
    // 0x2ad9e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ad9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ad9e4:
    // 0x2ad9e4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2ad9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2ad9e8:
    // 0x2ad9e8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ad9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ad9ec:
    // 0x2ad9ec: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2ad9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2ad9f0:
    // 0x2ad9f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad9f4:
    // 0x2ad9f4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ad9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ad9f8:
    // 0x2ad9f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ad9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad9fc:
    // 0x2ad9fc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2ad9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
label_2ada00:
    // 0x2ada00: 0x10000049  b           . + 4 + (0x49 << 2)
label_2ada04:
    if (ctx->pc == 0x2ADA04u) {
        ctx->pc = 0x2ADA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA00u;
        // 0x2ada04: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA08u;
        goto label_2ada08;
    }
    ctx->pc = 0x2ADA00u;
    {
        const bool branch_taken_0x2ada00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA00u;
        // 0x2ada04: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada00) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADA08u;
label_2ada08:
    // 0x2ada08: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ada08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2ada0c:
    // 0x2ada0c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_2ada10:
    if (ctx->pc == 0x2ADA10u) {
        ctx->pc = 0x2ADA14u;
        goto label_2ada14;
    }
    ctx->pc = 0x2ADA0Cu;
    {
        const bool branch_taken_0x2ada0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ada0c) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADA14u;
label_2ada14:
    // 0x2ada14: 0x8e0308c4  lw          $v1, 0x8C4($s0)
    ctx->pc = 0x2ada14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
label_2ada18:
    // 0x2ada18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ada1c:
    if (ctx->pc == 0x2ADA1Cu) {
        ctx->pc = 0x2ADA20u;
        goto label_2ada20;
    }
    ctx->pc = 0x2ADA18u;
    {
        const bool branch_taken_0x2ada18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ada18) {
            ctx->pc = 0x2ADA28u;
            goto label_2ada28;
        }
    }
    ctx->pc = 0x2ADA20u;
label_2ada20:
    // 0x2ada20: 0x60f809  jalr        $v1
label_2ada24:
    if (ctx->pc == 0x2ADA24u) {
        ctx->pc = 0x2ADA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA20u;
        // 0x2ada24: 0x8e0408bc  lw          $a0, 0x8BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA28u;
        goto label_2ada28;
    }
    ctx->pc = 0x2ADA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ADA28u);
        ctx->pc = 0x2ADA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA20u;
        // 0x2ada24: 0x8e0408bc  lw          $a0, 0x8BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2236)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADA20u, 0x2ADA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ADA28u;
label_2ada28:
    // 0x2ada28: 0xc601089c  lwc1        $f1, 0x89C($s0)
    ctx->pc = 0x2ada28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ada2c:
    // 0x2ada2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ada2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ada30:
    // 0x2ada30: 0x0  nop
    ctx->pc = 0x2ada30u;
    // NOP
label_2ada34:
    // 0x2ada34: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ada34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ada38:
    // 0x2ada38: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_2ada3c:
    if (ctx->pc == 0x2ADA3Cu) {
        ctx->pc = 0x2ADA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA38u;
        // 0x2ada3c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA40u;
        goto label_2ada40;
    }
    ctx->pc = 0x2ADA38u;
    {
        const bool branch_taken_0x2ada38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA38u;
        // 0x2ada3c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada38) {
            ctx->pc = 0x2ADAA8u;
            goto label_2adaa8;
        }
    }
    ctx->pc = 0x2ADA40u;
label_2ada40:
    // 0x2ada40: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ada40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ada44:
    // 0x2ada44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ada48:
    // 0x2ada48: 0x0  nop
    ctx->pc = 0x2ada48u;
    // NOP
label_2ada4c:
    // 0x2ada4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ada4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ada50:
    // 0x2ada50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2ada54:
    if (ctx->pc == 0x2ADA54u) {
        ctx->pc = 0x2ADA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA50u;
        // 0x2ada54: 0xa20007f4  sb          $zero, 0x7F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA58u;
        goto label_2ada58;
    }
    ctx->pc = 0x2ADA50u;
    {
        const bool branch_taken_0x2ada50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA50u;
        // 0x2ada54: 0xa20007f4  sb          $zero, 0x7F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada50) {
            ctx->pc = 0x2ADA68u;
            goto label_2ada68;
        }
    }
    ctx->pc = 0x2ADA58u;
label_2ada58:
    // 0x2ada58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ada58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ada5c:
    // 0x2ada5c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ada5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ada60:
    // 0x2ada60: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ada64:
    if (ctx->pc == 0x2ADA64u) {
        ctx->pc = 0x2ADA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA60u;
        // 0x2ada64: 0xa60407f2  sh          $a0, 0x7F2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADA68u;
        goto label_2ada68;
    }
    ctx->pc = 0x2ADA60u;
    {
        const bool branch_taken_0x2ada60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA60u;
        // 0x2ada64: 0xa60407f2  sh          $a0, 0x7F2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada60) {
            ctx->pc = 0x2ADA84u;
            goto label_2ada84;
        }
    }
    ctx->pc = 0x2ADA68u;
label_2ada68:
    // 0x2ada68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ada68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ada6c:
    // 0x2ada6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ada6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ada70:
    // 0x2ada70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ada70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ada74:
    // 0x2ada74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ada74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ada78:
    // 0x2ada78: 0x0  nop
    ctx->pc = 0x2ada78u;
    // NOP
label_2ada7c:
    // 0x2ada7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ada7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ada80:
    // 0x2ada80: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ada80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2ada84:
    // 0x2ada84: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ada84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ada88:
    // 0x2ada88: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2ada88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2ada8c:
    // 0x2ada8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ada8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ada90:
    // 0x2ada90: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ada90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ada94:
    // 0x2ada94: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ada94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_2ada98:
    // 0x2ada98: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2ada98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_2ada9c:
    // 0x2ada9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ada9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2adaa0:
    // 0x2adaa0: 0x10000021  b           . + 4 + (0x21 << 2)
label_2adaa4:
    if (ctx->pc == 0x2ADAA4u) {
        ctx->pc = 0x2ADAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAA0u;
        // 0x2adaa4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAA8u;
        goto label_2adaa8;
    }
    ctx->pc = 0x2ADAA0u;
    {
        const bool branch_taken_0x2adaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAA0u;
        // 0x2adaa4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adaa0) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADAA8u;
label_2adaa8:
    // 0x2adaa8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2adaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2adaac:
    // 0x2adaac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2adaacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2adab0:
    // 0x2adab0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2adab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2adab4:
    // 0x2adab4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2adab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2adab8:
    // 0x2adab8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2adab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2adabc:
    // 0x2adabc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2adabcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2adac0:
    // 0x2adac0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2adac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2adac4:
    // 0x2adac4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2adac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2adac8:
    // 0x2adac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2adac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adacc:
    // 0x2adacc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2adaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
label_2adad0:
    // 0x2adad0: 0x10000015  b           . + 4 + (0x15 << 2)
label_2adad4:
    if (ctx->pc == 0x2ADAD4u) {
        ctx->pc = 0x2ADAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAD0u;
        // 0x2adad4: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAD8u;
        goto label_2adad8;
    }
    ctx->pc = 0x2ADAD0u;
    {
        const bool branch_taken_0x2adad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAD0u;
        // 0x2adad4: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adad0) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADAD8u;
label_2adad8:
    // 0x2adad8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2adad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2adadc:
    // 0x2adadc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2adae0:
    if (ctx->pc == 0x2ADAE0u) {
        ctx->pc = 0x2ADAE4u;
        goto label_2adae4;
    }
    ctx->pc = 0x2ADADCu;
    {
        const bool branch_taken_0x2adadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adadc) {
            ctx->pc = 0x2ADB28u;
            goto label_2adb28;
        }
    }
    ctx->pc = 0x2ADAE4u;
label_2adae4:
    // 0x2adae4: 0x8e0308c4  lw          $v1, 0x8C4($s0)
    ctx->pc = 0x2adae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
label_2adae8:
    // 0x2adae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2adaec:
    if (ctx->pc == 0x2ADAECu) {
        ctx->pc = 0x2ADAF0u;
        goto label_2adaf0;
    }
    ctx->pc = 0x2ADAE8u;
    {
        const bool branch_taken_0x2adae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adae8) {
            ctx->pc = 0x2ADAF8u;
            goto label_2adaf8;
        }
    }
    ctx->pc = 0x2ADAF0u;
label_2adaf0:
    // 0x2adaf0: 0x60f809  jalr        $v1
label_2adaf4:
    if (ctx->pc == 0x2ADAF4u) {
        ctx->pc = 0x2ADAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAF0u;
        // 0x2adaf4: 0x8e0408c0  lw          $a0, 0x8C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADAF8u;
        goto label_2adaf8;
    }
    ctx->pc = 0x2ADAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ADAF8u);
        ctx->pc = 0x2ADAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAF0u;
        // 0x2adaf4: 0x8e0408c0  lw          $a0, 0x8C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADAF0u, 0x2ADAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ADAF8u;
label_2adaf8:
    // 0x2adaf8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2adaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2adafc:
    // 0x2adafc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2adafcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2adb00:
    // 0x2adb00: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2adb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2adb04:
    // 0x2adb04: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2adb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2adb08:
    // 0x2adb08: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2adb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2adb0c:
    // 0x2adb0c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2adb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2adb10:
    // 0x2adb10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2adb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2adb14:
    // 0x2adb14: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2adb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2adb18:
    // 0x2adb18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2adb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2adb1c:
    // 0x2adb1c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2adb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
label_2adb20:
    // 0x2adb20: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2adb20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2adb24:
    // 0x2adb24: 0x0  nop
    ctx->pc = 0x2adb24u;
    // NOP
label_2adb28:
    // 0x2adb28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2adb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2adb2c:
    // 0x2adb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2adb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2adb30:
    // 0x2adb30: 0x3e00008  jr          $ra
label_2adb34:
    if (ctx->pc == 0x2ADB34u) {
        ctx->pc = 0x2ADB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB30u;
        // 0x2adb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ADB38u;
        goto label_fallthrough_0x2adb30;
    }
    ctx->pc = 0x2ADB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB30u;
        // 0x2adb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2adb30:
    ctx->pc = 0x2ADB38u;
}
