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

// Function: sub_00334050
// Address: 0x334050 - 0x3343f8
void sub_00334050_0x334050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334050_0x334050");
#endif

    switch (ctx->pc) {
        case 0x334050u: goto label_334050;
        case 0x334054u: goto label_334054;
        case 0x334058u: goto label_334058;
        case 0x33405cu: goto label_33405c;
        case 0x334060u: goto label_334060;
        case 0x334064u: goto label_334064;
        case 0x334068u: goto label_334068;
        case 0x33406cu: goto label_33406c;
        case 0x334070u: goto label_334070;
        case 0x334074u: goto label_334074;
        case 0x334078u: goto label_334078;
        case 0x33407cu: goto label_33407c;
        case 0x334080u: goto label_334080;
        case 0x334084u: goto label_334084;
        case 0x334088u: goto label_334088;
        case 0x33408cu: goto label_33408c;
        case 0x334090u: goto label_334090;
        case 0x334094u: goto label_334094;
        case 0x334098u: goto label_334098;
        case 0x33409cu: goto label_33409c;
        case 0x3340a0u: goto label_3340a0;
        case 0x3340a4u: goto label_3340a4;
        case 0x3340a8u: goto label_3340a8;
        case 0x3340acu: goto label_3340ac;
        case 0x3340b0u: goto label_3340b0;
        case 0x3340b4u: goto label_3340b4;
        case 0x3340b8u: goto label_3340b8;
        case 0x3340bcu: goto label_3340bc;
        case 0x3340c0u: goto label_3340c0;
        case 0x3340c4u: goto label_3340c4;
        case 0x3340c8u: goto label_3340c8;
        case 0x3340ccu: goto label_3340cc;
        case 0x3340d0u: goto label_3340d0;
        case 0x3340d4u: goto label_3340d4;
        case 0x3340d8u: goto label_3340d8;
        case 0x3340dcu: goto label_3340dc;
        case 0x3340e0u: goto label_3340e0;
        case 0x3340e4u: goto label_3340e4;
        case 0x3340e8u: goto label_3340e8;
        case 0x3340ecu: goto label_3340ec;
        case 0x3340f0u: goto label_3340f0;
        case 0x3340f4u: goto label_3340f4;
        case 0x3340f8u: goto label_3340f8;
        case 0x3340fcu: goto label_3340fc;
        case 0x334100u: goto label_334100;
        case 0x334104u: goto label_334104;
        case 0x334108u: goto label_334108;
        case 0x33410cu: goto label_33410c;
        case 0x334110u: goto label_334110;
        case 0x334114u: goto label_334114;
        case 0x334118u: goto label_334118;
        case 0x33411cu: goto label_33411c;
        case 0x334120u: goto label_334120;
        case 0x334124u: goto label_334124;
        case 0x334128u: goto label_334128;
        case 0x33412cu: goto label_33412c;
        case 0x334130u: goto label_334130;
        case 0x334134u: goto label_334134;
        case 0x334138u: goto label_334138;
        case 0x33413cu: goto label_33413c;
        case 0x334140u: goto label_334140;
        case 0x334144u: goto label_334144;
        case 0x334148u: goto label_334148;
        case 0x33414cu: goto label_33414c;
        case 0x334150u: goto label_334150;
        case 0x334154u: goto label_334154;
        case 0x334158u: goto label_334158;
        case 0x33415cu: goto label_33415c;
        case 0x334160u: goto label_334160;
        case 0x334164u: goto label_334164;
        case 0x334168u: goto label_334168;
        case 0x33416cu: goto label_33416c;
        case 0x334170u: goto label_334170;
        case 0x334174u: goto label_334174;
        case 0x334178u: goto label_334178;
        case 0x33417cu: goto label_33417c;
        case 0x334180u: goto label_334180;
        case 0x334184u: goto label_334184;
        case 0x334188u: goto label_334188;
        case 0x33418cu: goto label_33418c;
        case 0x334190u: goto label_334190;
        case 0x334194u: goto label_334194;
        case 0x334198u: goto label_334198;
        case 0x33419cu: goto label_33419c;
        case 0x3341a0u: goto label_3341a0;
        case 0x3341a4u: goto label_3341a4;
        case 0x3341a8u: goto label_3341a8;
        case 0x3341acu: goto label_3341ac;
        case 0x3341b0u: goto label_3341b0;
        case 0x3341b4u: goto label_3341b4;
        case 0x3341b8u: goto label_3341b8;
        case 0x3341bcu: goto label_3341bc;
        case 0x3341c0u: goto label_3341c0;
        case 0x3341c4u: goto label_3341c4;
        case 0x3341c8u: goto label_3341c8;
        case 0x3341ccu: goto label_3341cc;
        case 0x3341d0u: goto label_3341d0;
        case 0x3341d4u: goto label_3341d4;
        case 0x3341d8u: goto label_3341d8;
        case 0x3341dcu: goto label_3341dc;
        case 0x3341e0u: goto label_3341e0;
        case 0x3341e4u: goto label_3341e4;
        case 0x3341e8u: goto label_3341e8;
        case 0x3341ecu: goto label_3341ec;
        case 0x3341f0u: goto label_3341f0;
        case 0x3341f4u: goto label_3341f4;
        case 0x3341f8u: goto label_3341f8;
        case 0x3341fcu: goto label_3341fc;
        case 0x334200u: goto label_334200;
        case 0x334204u: goto label_334204;
        case 0x334208u: goto label_334208;
        case 0x33420cu: goto label_33420c;
        case 0x334210u: goto label_334210;
        case 0x334214u: goto label_334214;
        case 0x334218u: goto label_334218;
        case 0x33421cu: goto label_33421c;
        case 0x334220u: goto label_334220;
        case 0x334224u: goto label_334224;
        case 0x334228u: goto label_334228;
        case 0x33422cu: goto label_33422c;
        case 0x334230u: goto label_334230;
        case 0x334234u: goto label_334234;
        case 0x334238u: goto label_334238;
        case 0x33423cu: goto label_33423c;
        case 0x334240u: goto label_334240;
        case 0x334244u: goto label_334244;
        case 0x334248u: goto label_334248;
        case 0x33424cu: goto label_33424c;
        case 0x334250u: goto label_334250;
        case 0x334254u: goto label_334254;
        case 0x334258u: goto label_334258;
        case 0x33425cu: goto label_33425c;
        case 0x334260u: goto label_334260;
        case 0x334264u: goto label_334264;
        case 0x334268u: goto label_334268;
        case 0x33426cu: goto label_33426c;
        case 0x334270u: goto label_334270;
        case 0x334274u: goto label_334274;
        case 0x334278u: goto label_334278;
        case 0x33427cu: goto label_33427c;
        case 0x334280u: goto label_334280;
        case 0x334284u: goto label_334284;
        case 0x334288u: goto label_334288;
        case 0x33428cu: goto label_33428c;
        case 0x334290u: goto label_334290;
        case 0x334294u: goto label_334294;
        case 0x334298u: goto label_334298;
        case 0x33429cu: goto label_33429c;
        case 0x3342a0u: goto label_3342a0;
        case 0x3342a4u: goto label_3342a4;
        case 0x3342a8u: goto label_3342a8;
        case 0x3342acu: goto label_3342ac;
        case 0x3342b0u: goto label_3342b0;
        case 0x3342b4u: goto label_3342b4;
        case 0x3342b8u: goto label_3342b8;
        case 0x3342bcu: goto label_3342bc;
        case 0x3342c0u: goto label_3342c0;
        case 0x3342c4u: goto label_3342c4;
        case 0x3342c8u: goto label_3342c8;
        case 0x3342ccu: goto label_3342cc;
        case 0x3342d0u: goto label_3342d0;
        case 0x3342d4u: goto label_3342d4;
        case 0x3342d8u: goto label_3342d8;
        case 0x3342dcu: goto label_3342dc;
        case 0x3342e0u: goto label_3342e0;
        case 0x3342e4u: goto label_3342e4;
        case 0x3342e8u: goto label_3342e8;
        case 0x3342ecu: goto label_3342ec;
        case 0x3342f0u: goto label_3342f0;
        case 0x3342f4u: goto label_3342f4;
        case 0x3342f8u: goto label_3342f8;
        case 0x3342fcu: goto label_3342fc;
        case 0x334300u: goto label_334300;
        case 0x334304u: goto label_334304;
        case 0x334308u: goto label_334308;
        case 0x33430cu: goto label_33430c;
        case 0x334310u: goto label_334310;
        case 0x334314u: goto label_334314;
        case 0x334318u: goto label_334318;
        case 0x33431cu: goto label_33431c;
        case 0x334320u: goto label_334320;
        case 0x334324u: goto label_334324;
        case 0x334328u: goto label_334328;
        case 0x33432cu: goto label_33432c;
        case 0x334330u: goto label_334330;
        case 0x334334u: goto label_334334;
        case 0x334338u: goto label_334338;
        case 0x33433cu: goto label_33433c;
        case 0x334340u: goto label_334340;
        case 0x334344u: goto label_334344;
        case 0x334348u: goto label_334348;
        case 0x33434cu: goto label_33434c;
        case 0x334350u: goto label_334350;
        case 0x334354u: goto label_334354;
        case 0x334358u: goto label_334358;
        case 0x33435cu: goto label_33435c;
        case 0x334360u: goto label_334360;
        case 0x334364u: goto label_334364;
        case 0x334368u: goto label_334368;
        case 0x33436cu: goto label_33436c;
        case 0x334370u: goto label_334370;
        case 0x334374u: goto label_334374;
        case 0x334378u: goto label_334378;
        case 0x33437cu: goto label_33437c;
        case 0x334380u: goto label_334380;
        case 0x334384u: goto label_334384;
        case 0x334388u: goto label_334388;
        case 0x33438cu: goto label_33438c;
        case 0x334390u: goto label_334390;
        case 0x334394u: goto label_334394;
        case 0x334398u: goto label_334398;
        case 0x33439cu: goto label_33439c;
        case 0x3343a0u: goto label_3343a0;
        case 0x3343a4u: goto label_3343a4;
        case 0x3343a8u: goto label_3343a8;
        case 0x3343acu: goto label_3343ac;
        case 0x3343b0u: goto label_3343b0;
        case 0x3343b4u: goto label_3343b4;
        case 0x3343b8u: goto label_3343b8;
        case 0x3343bcu: goto label_3343bc;
        case 0x3343c0u: goto label_3343c0;
        case 0x3343c4u: goto label_3343c4;
        case 0x3343c8u: goto label_3343c8;
        case 0x3343ccu: goto label_3343cc;
        case 0x3343d0u: goto label_3343d0;
        case 0x3343d4u: goto label_3343d4;
        case 0x3343d8u: goto label_3343d8;
        case 0x3343dcu: goto label_3343dc;
        case 0x3343e0u: goto label_3343e0;
        case 0x3343e4u: goto label_3343e4;
        case 0x3343e8u: goto label_3343e8;
        case 0x3343ecu: goto label_3343ec;
        case 0x3343f0u: goto label_3343f0;
        case 0x3343f4u: goto label_3343f4;
        default: break;
    }

    ctx->pc = 0x334050u;

label_334050:
    // 0x334050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_334054:
    // 0x334054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x334054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334058:
    // 0x334058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33405c:
    // 0x33405c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_334060:
    // 0x334060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334064:
    // 0x334064: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x334064u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_334068:
    // 0x334068: 0x108300df  beq         $a0, $v1, . + 4 + (0xDF << 2)
label_33406c:
    if (ctx->pc == 0x33406Cu) {
        ctx->pc = 0x33406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334068u;
        // 0x33406c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334070u;
        goto label_334070;
    }
    ctx->pc = 0x334068u;
    {
        const bool branch_taken_0x334068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334068u;
        // 0x33406c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334068) {
            ctx->pc = 0x3343E8u;
            goto label_3343e8;
        }
    }
    ctx->pc = 0x334070u;
label_334070:
    // 0x334070: 0x108300af  beq         $a0, $v1, . + 4 + (0xAF << 2)
label_334074:
    if (ctx->pc == 0x334074u) {
        ctx->pc = 0x334078u;
        goto label_334078;
    }
    ctx->pc = 0x334070u;
    {
        const bool branch_taken_0x334070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x334070) {
            ctx->pc = 0x334330u;
            goto label_334330;
        }
    }
    ctx->pc = 0x334078u;
label_334078:
    // 0x334078: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_33407c:
    if (ctx->pc == 0x33407Cu) {
        ctx->pc = 0x334080u;
        goto label_334080;
    }
    ctx->pc = 0x334078u;
    {
        const bool branch_taken_0x334078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x334078) {
            ctx->pc = 0x334088u;
            goto label_334088;
        }
    }
    ctx->pc = 0x334080u;
label_334080:
    // 0x334080: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_334084:
    if (ctx->pc == 0x334084u) {
        ctx->pc = 0x334088u;
        goto label_334088;
    }
    ctx->pc = 0x334080u;
    {
        const bool branch_taken_0x334080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334080) {
            ctx->pc = 0x3343E8u;
            goto label_3343e8;
        }
    }
    ctx->pc = 0x334088u;
label_334088:
    // 0x334088: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x334088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_33408c:
    // 0x33408c: 0xc053b28  jal         func_14ECA0
label_334090:
    if (ctx->pc == 0x334090u) {
        ctx->pc = 0x334090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33408Cu;
        // 0x334090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334094u;
        goto label_334094;
    }
    ctx->pc = 0x33408Cu;
    SET_GPR_U32(ctx, 31, 0x334094u);
    ctx->pc = 0x334090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33408Cu;
    // 0x334090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x33408Cu, 0x334094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334094u;
label_334094:
    // 0x334094: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x334094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_334098:
    // 0x334098: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_33409c:
    // 0x33409c: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x33409cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
label_3340a0:
    // 0x3340a0: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3340a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_3340a4:
    // 0x3340a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3340a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3340a8:
    // 0x3340a8: 0x24c6a230  addiu       $a2, $a2, -0x5DD0
    ctx->pc = 0x3340a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943280));
label_3340ac:
    // 0x3340ac: 0x2508a270  addiu       $t0, $t0, -0x5D90
    ctx->pc = 0x3340acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943344));
label_3340b0:
    // 0x3340b0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3340b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3340b4:
    // 0x3340b4: 0xc053ae8  jal         func_14EBA0
label_3340b8:
    if (ctx->pc == 0x3340B8u) {
        ctx->pc = 0x3340B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3340B4u;
        // 0x3340b8: 0x24470400  addiu       $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3340BCu;
        goto label_3340bc;
    }
    ctx->pc = 0x3340B4u;
    SET_GPR_U32(ctx, 31, 0x3340BCu);
    ctx->pc = 0x3340B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340B4u;
    // 0x3340b8: 0x24470400  addiu       $a3, $v0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3340B4u, 0x3340BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340BCu;
label_3340bc:
    // 0x3340bc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3340bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3340c0:
    // 0x3340c0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x3340c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_3340c4:
    // 0x3340c4: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x3340c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
label_3340c8:
    // 0x3340c8: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3340c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_3340cc:
    // 0x3340cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3340ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3340d0:
    // 0x3340d0: 0x24c6a230  addiu       $a2, $a2, -0x5DD0
    ctx->pc = 0x3340d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943280));
label_3340d4:
    // 0x3340d4: 0x2508a270  addiu       $t0, $t0, -0x5D90
    ctx->pc = 0x3340d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943344));
label_3340d8:
    // 0x3340d8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3340d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_3340dc:
    // 0x3340dc: 0xc053ae8  jal         func_14EBA0
label_3340e0:
    if (ctx->pc == 0x3340E0u) {
        ctx->pc = 0x3340E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3340DCu;
        // 0x3340e0: 0x24470500  addiu       $a3, $v0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3340E4u;
        goto label_3340e4;
    }
    ctx->pc = 0x3340DCu;
    SET_GPR_U32(ctx, 31, 0x3340E4u);
    ctx->pc = 0x3340E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3340DCu;
    // 0x3340e0: 0x24470500  addiu       $a3, $v0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3340DCu, 0x3340E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3340E4u;
label_3340e4:
    // 0x3340e4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3340e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3340e8:
    // 0x3340e8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x3340e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_3340ec:
    // 0x3340ec: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x3340ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
label_3340f0:
    // 0x3340f0: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3340f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_3340f4:
    // 0x3340f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3340f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3340f8:
    // 0x3340f8: 0x24c6a230  addiu       $a2, $a2, -0x5DD0
    ctx->pc = 0x3340f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943280));
label_3340fc:
    // 0x3340fc: 0x2508a270  addiu       $t0, $t0, -0x5D90
    ctx->pc = 0x3340fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943344));
label_334100:
    // 0x334100: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x334100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_334104:
    // 0x334104: 0xc053ae8  jal         func_14EBA0
label_334108:
    if (ctx->pc == 0x334108u) {
        ctx->pc = 0x334108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334104u;
        // 0x334108: 0x244702c0  addiu       $a3, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33410Cu;
        goto label_33410c;
    }
    ctx->pc = 0x334104u;
    SET_GPR_U32(ctx, 31, 0x33410Cu);
    ctx->pc = 0x334108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334104u;
    // 0x334108: 0x244702c0  addiu       $a3, $v0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x334104u, 0x33410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33410Cu;
label_33410c:
    // 0x33410c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x33410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_334110:
    // 0x334110: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x334110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_334114:
    // 0x334114: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x334114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
label_334118:
    // 0x334118: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x334118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_33411c:
    // 0x33411c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_334120:
    // 0x334120: 0xc0e360c  jal         func_38D830
label_334124:
    if (ctx->pc == 0x334124u) {
        ctx->pc = 0x334124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334120u;
        // 0x334124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334128u;
        goto label_334128;
    }
    ctx->pc = 0x334120u;
    SET_GPR_U32(ctx, 31, 0x334128u);
    ctx->pc = 0x334124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334120u;
    // 0x334124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x334120u, 0x334128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334128u;
label_334128:
    // 0x334128: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33412c:
    // 0x33412c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33412cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_334130:
    // 0x334130: 0xa2030734  sb          $v1, 0x734($s0)
    ctx->pc = 0x334130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1844), (uint8_t)GPR_U32(ctx, 3));
label_334134:
    // 0x334134: 0x3c090800  lui         $t1, 0x800
    ctx->pc = 0x334134u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2048 << 16));
label_334138:
    // 0x334138: 0xa2020730  sb          $v0, 0x730($s0)
    ctx->pc = 0x334138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 2));
label_33413c:
    // 0x33413c: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x33413cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_334140:
    // 0x334140: 0xae030700  sw          $v1, 0x700($s0)
    ctx->pc = 0x334140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 3));
label_334144:
    // 0x334144: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x334144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_334148:
    // 0x334148: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x334148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
label_33414c:
    // 0x33414c: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x33414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_334150:
    // 0x334150: 0xae000708  sw          $zero, 0x708($s0)
    ctx->pc = 0x334150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 0));
label_334154:
    // 0x334154: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x334154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_334158:
    // 0x334158: 0xae02070c  sw          $v0, 0x70C($s0)
    ctx->pc = 0x334158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 2));
label_33415c:
    // 0x33415c: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x33415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_334160:
    // 0x334160: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x334160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_334164:
    // 0x334164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x334164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334168:
    // 0x334168: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x334168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_33416c:
    // 0x33416c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x33416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_334170:
    // 0x334170: 0x8c622c94  lw          $v0, 0x2C94($v1)
    ctx->pc = 0x334170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11412)));
label_334174:
    // 0x334174: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x334174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_334178:
    // 0x334178: 0xac622c94  sw          $v0, 0x2C94($v1)
    ctx->pc = 0x334178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11412), GPR_U32(ctx, 2));
label_33417c:
    // 0x33417c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x33417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_334180:
    // 0x334180: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x334180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_334184:
    // 0x334184: 0x8c6241e4  lw          $v0, 0x41E4($v1)
    ctx->pc = 0x334184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16868)));
label_334188:
    // 0x334188: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x334188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_33418c:
    // 0x33418c: 0xac6241e4  sw          $v0, 0x41E4($v1)
    ctx->pc = 0x33418cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16868), GPR_U32(ctx, 2));
label_334190:
    // 0x334190: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x334190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_334194:
    // 0x334194: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x334194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_334198:
    // 0x334198: 0x8c6243d4  lw          $v0, 0x43D4($v1)
    ctx->pc = 0x334198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17364)));
label_33419c:
    // 0x33419c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x33419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_3341a0:
    // 0x3341a0: 0xc050ed4  jal         func_143B50
label_3341a4:
    if (ctx->pc == 0x3341A4u) {
        ctx->pc = 0x3341A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341A0u;
        // 0x3341a4: 0xac6243d4  sw          $v0, 0x43D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3341A8u;
        goto label_3341a8;
    }
    ctx->pc = 0x3341A0u;
    SET_GPR_U32(ctx, 31, 0x3341A8u);
    ctx->pc = 0x3341A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341A0u;
    // 0x3341a4: 0xac6243d4  sw          $v0, 0x43D4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 17364), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x3341A0u, 0x3341A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341A8u;
label_3341a8:
    // 0x3341a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3341ac:
    if (ctx->pc == 0x3341ACu) {
        ctx->pc = 0x3341B0u;
        goto label_3341b0;
    }
    ctx->pc = 0x3341A8u;
    {
        const bool branch_taken_0x3341a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3341a8) {
            ctx->pc = 0x3341F0u;
            goto label_3341f0;
        }
    }
    ctx->pc = 0x3341B0u;
label_3341b0:
    // 0x3341b0: 0x920608e8  lbu         $a2, 0x8E8($s0)
    ctx->pc = 0x3341b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_3341b4:
    // 0x3341b4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x3341b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_3341b8:
    // 0x3341b8: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x3341b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_3341bc:
    // 0x3341bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3341bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3341c0:
    // 0x3341c0: 0x24e7c910  addiu       $a3, $a3, -0x36F0
    ctx->pc = 0x3341c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953232));
label_3341c4:
    // 0x3341c4: 0xc0b2fa4  jal         func_2CBE90
label_3341c8:
    if (ctx->pc == 0x3341C8u) {
        ctx->pc = 0x3341C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341C4u;
        // 0x3341c8: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3341CCu;
        goto label_3341cc;
    }
    ctx->pc = 0x3341C4u;
    SET_GPR_U32(ctx, 31, 0x3341CCu);
    ctx->pc = 0x3341C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341C4u;
    // 0x3341c8: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE90u, 0x3341C4u, 0x3341CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341CCu;
label_3341cc:
    // 0x3341cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3341d0:
    if (ctx->pc == 0x3341D0u) {
        ctx->pc = 0x3341D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341CCu;
        // 0x3341d0: 0xae022b24  sw          $v0, 0x2B24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3341D4u;
        goto label_3341d4;
    }
    ctx->pc = 0x3341CCu;
    {
        const bool branch_taken_0x3341cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3341D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341CCu;
        // 0x3341d0: 0xae022b24  sw          $v0, 0x2B24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341cc) {
            ctx->pc = 0x3341F0u;
            goto label_3341f0;
        }
    }
    ctx->pc = 0x3341D4u;
label_3341d4:
    // 0x3341d4: 0x8e042b24  lw          $a0, 0x2B24($s0)
    ctx->pc = 0x3341d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_3341d8:
    // 0x3341d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3341d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3341dc:
    // 0x3341dc: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x3341dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_3341e0:
    // 0x3341e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3341e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3341e4:
    // 0x3341e4: 0x320f809  jalr        $t9
label_3341e8:
    if (ctx->pc == 0x3341E8u) {
        ctx->pc = 0x3341E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341E4u;
        // 0x3341e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3341ECu;
        goto label_3341ec;
    }
    ctx->pc = 0x3341E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3341ECu);
        ctx->pc = 0x3341E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341E4u;
        // 0x3341e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3341E4u, 0x3341ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3341ECu;
label_3341ec:
    // 0x3341ec: 0x0  nop
    ctx->pc = 0x3341ecu;
    // NOP
label_3341f0:
    // 0x3341f0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_3341f4:
    // 0x3341f4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3341f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3341f8:
    // 0x3341f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3341f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3341fc:
    // 0x3341fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3341fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_334200:
    // 0x334200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_334204:
    // 0x334204: 0x0  nop
    ctx->pc = 0x334204u;
    // NOP
label_334208:
    // 0x334208: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x334208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_33420c:
    // 0x33420c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33420cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_334210:
    // 0x334210: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_334214:
    if (ctx->pc == 0x334214u) {
        ctx->pc = 0x334218u;
        goto label_334218;
    }
    ctx->pc = 0x334210u;
    {
        const bool branch_taken_0x334210 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x334210) {
            ctx->pc = 0x334228u;
            goto label_334228;
        }
    }
    ctx->pc = 0x334218u;
label_334218:
    // 0x334218: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x334218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_33421c:
    // 0x33421c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x33421cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_334220:
    // 0x334220: 0x10000008  b           . + 4 + (0x8 << 2)
label_334224:
    if (ctx->pc == 0x334224u) {
        ctx->pc = 0x334224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334220u;
        // 0x334224: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334228u;
        goto label_334228;
    }
    ctx->pc = 0x334220u;
    {
        const bool branch_taken_0x334220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334220u;
        // 0x334224: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334220) {
            ctx->pc = 0x334244u;
            goto label_334244;
        }
    }
    ctx->pc = 0x334228u;
label_334228:
    // 0x334228: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x334228u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33422c:
    // 0x33422c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33422cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_334230:
    // 0x334230: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x334230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_334234:
    // 0x334234: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x334234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_334238:
    // 0x334238: 0x0  nop
    ctx->pc = 0x334238u;
    // NOP
label_33423c:
    // 0x33423c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_334240:
    // 0x334240: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x334240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_334244:
    // 0x334244: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x334244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_334248:
    // 0x334248: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x334248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_33424c:
    // 0x33424c: 0x8e022b24  lw          $v0, 0x2B24($s0)
    ctx->pc = 0x33424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_334250:
    // 0x334250: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x334250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_334254:
    // 0x334254: 0x78840430  lq          $a0, 0x430($a0)
    ctx->pc = 0x334254u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 1072)));
label_334258:
    // 0x334258: 0x7c440020  sq          $a0, 0x20($v0)
    ctx->pc = 0x334258u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 4));
label_33425c:
    // 0x33425c: 0x8e022b24  lw          $v0, 0x2B24($s0)
    ctx->pc = 0x33425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_334260:
    // 0x334260: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x334260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_334264:
    // 0x334264: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x334264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
label_334268:
    // 0x334268: 0x2442fb1d  addiu       $v0, $v0, -0x4E3
    ctx->pc = 0x334268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966045));
label_33426c:
    // 0x33426c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x33426cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_334270:
    // 0x334270: 0xc0967cc  jal         func_259F30
label_334274:
    if (ctx->pc == 0x334274u) {
        ctx->pc = 0x334274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334270u;
        // 0x334274: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334278u;
        goto label_334278;
    }
    ctx->pc = 0x334270u;
    SET_GPR_U32(ctx, 31, 0x334278u);
    ctx->pc = 0x334274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334270u;
    // 0x334274: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x334270u, 0x334278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334278u;
label_334278:
    // 0x334278: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x334278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_33427c:
    // 0x33427c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x33427cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_334280:
    // 0x334280: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x334280u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_334284:
    // 0x334284: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x334284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_334288:
    // 0x334288: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x334288u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33428c:
    // 0x33428c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x33428cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_334290:
    // 0x334290: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x334290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_334294:
    // 0x334294: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x334294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_334298:
    // 0x334298: 0x8e022b24  lw          $v0, 0x2B24($s0)
    ctx->pc = 0x334298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_33429c:
    // 0x33429c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x33429cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3342a0:
    // 0x3342a0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x3342a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_3342a4:
    // 0x3342a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3342a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3342a8:
    // 0x3342a8: 0x0  nop
    ctx->pc = 0x3342a8u;
    // NOP
label_3342ac:
    // 0x3342ac: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3342acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3342b0:
    // 0x3342b0: 0x0  nop
    ctx->pc = 0x3342b0u;
    // NOP
label_3342b4:
    // 0x3342b4: 0x0  nop
    ctx->pc = 0x3342b4u;
    // NOP
label_3342b8:
    // 0x3342b8: 0xc096784  jal         func_259E10
label_3342bc:
    if (ctx->pc == 0x3342BCu) {
        ctx->pc = 0x3342C0u;
        goto label_3342c0;
    }
    ctx->pc = 0x3342B8u;
    SET_GPR_U32(ctx, 31, 0x3342C0u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3342B8u, 0x3342C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342C0u;
label_3342c0:
    // 0x3342c0: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x3342c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_3342c4:
    // 0x3342c4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3342c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_3342c8:
    // 0x3342c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3342c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3342cc:
    // 0x3342cc: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x3342ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_3342d0:
    // 0x3342d0: 0xc0414dc  jal         func_105370
label_3342d4:
    if (ctx->pc == 0x3342D4u) {
        ctx->pc = 0x3342D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342D0u;
        // 0x3342d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3342D8u;
        goto label_3342d8;
    }
    ctx->pc = 0x3342D0u;
    SET_GPR_U32(ctx, 31, 0x3342D8u);
    ctx->pc = 0x3342D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342D0u;
    // 0x3342d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3342D0u, 0x3342D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342D8u;
label_3342d8:
    // 0x3342d8: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x3342d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_3342dc:
    // 0x3342dc: 0x3c0742a0  lui         $a3, 0x42A0
    ctx->pc = 0x3342dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17056 << 16));
label_3342e0:
    // 0x3342e0: 0x3c02bfd1  lui         $v0, 0xBFD1
    ctx->pc = 0x3342e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49105 << 16));
label_3342e4:
    // 0x3342e4: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3342e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3342e8:
    // 0x3342e8: 0x34461111  ori         $a2, $v0, 0x1111
    ctx->pc = 0x3342e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4369);
label_3342ec:
    // 0x3342ec: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3342ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_3342f0:
    // 0x3342f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3342f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3342f4:
    // 0x3342f4: 0xac670094  sw          $a3, 0x94($v1)
    ctx->pc = 0x3342f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 7));
label_3342f8:
    // 0x3342f8: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x3342f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_3342fc:
    // 0x3342fc: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x3342fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
label_334300:
    // 0x334300: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x334300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_334304:
    // 0x334304: 0xac6600a4  sw          $a2, 0xA4($v1)
    ctx->pc = 0x334304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 6));
label_334308:
    // 0x334308: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x334308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_33430c:
    // 0x33430c: 0xac6000a8  sw          $zero, 0xA8($v1)
    ctx->pc = 0x33430cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
label_334310:
    // 0x334310: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x334310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_334314:
    // 0x334314: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x334314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
label_334318:
    // 0x334318: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x334318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_33431c:
    // 0x33431c: 0xa46500c0  sh          $a1, 0xC0($v1)
    ctx->pc = 0x33431cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 192), (uint16_t)GPR_U32(ctx, 5));
label_334320:
    // 0x334320: 0x8e032b24  lw          $v1, 0x2B24($s0)
    ctx->pc = 0x334320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_334324:
    // 0x334324: 0xa46400c2  sh          $a0, 0xC2($v1)
    ctx->pc = 0x334324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 194), (uint16_t)GPR_U32(ctx, 4));
label_334328:
    // 0x334328: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x334328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_33432c:
    // 0x33432c: 0x0  nop
    ctx->pc = 0x33432cu;
    // NOP
label_334330:
    // 0x334330: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x334330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
label_334334:
    // 0x334334: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x334334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_334338:
    // 0x334338: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_33433c:
    if (ctx->pc == 0x33433Cu) {
        ctx->pc = 0x334340u;
        goto label_334340;
    }
    ctx->pc = 0x334338u;
    {
        const bool branch_taken_0x334338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334338) {
            ctx->pc = 0x334378u;
            goto label_334378;
        }
    }
    ctx->pc = 0x334340u;
label_334340:
    // 0x334340: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x334340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_334344:
    // 0x334344: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x334344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
label_334348:
    // 0x334348: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x334348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_33434c:
    // 0x33434c: 0x34454602  ori         $a1, $v0, 0x4602
    ctx->pc = 0x33434cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17922);
label_334350:
    // 0x334350: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x334350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_334354:
    // 0x334354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x334354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334358:
    // 0x334358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x334358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33435c:
    // 0x33435c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33435cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334360:
    // 0x334360: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x334360u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334364:
    // 0x334364: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x334364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_334368:
    // 0x334368: 0x8e022b24  lw          $v0, 0x2B24($s0)
    ctx->pc = 0x334368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_33436c:
    // 0x33436c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x33436cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_334370:
    // 0x334370: 0xc05e9e8  jal         func_17A7A0
label_334374:
    if (ctx->pc == 0x334374u) {
        ctx->pc = 0x334374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334370u;
        // 0x334374: 0x24470020  addiu       $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334378u;
        goto label_334378;
    }
    ctx->pc = 0x334370u;
    SET_GPR_U32(ctx, 31, 0x334378u);
    ctx->pc = 0x334374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334370u;
    // 0x334374: 0x24470020  addiu       $a3, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x334370u, 0x334378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334378u;
label_334378:
    // 0x334378: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x334378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
label_33437c:
    // 0x33437c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_334380:
    if (ctx->pc == 0x334380u) {
        ctx->pc = 0x334384u;
        goto label_334384;
    }
    ctx->pc = 0x33437Cu;
    {
        const bool branch_taken_0x33437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33437c) {
            ctx->pc = 0x3343D0u;
            goto label_3343d0;
        }
    }
    ctx->pc = 0x334384u;
label_334384:
    // 0x334384: 0x8e022b24  lw          $v0, 0x2B24($s0)
    ctx->pc = 0x334384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_334388:
    // 0x334388: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x334388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_33438c:
    // 0x33438c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x33438cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_334390:
    // 0x334390: 0xc096978  jal         func_25A5E0
label_334394:
    if (ctx->pc == 0x334394u) {
        ctx->pc = 0x334394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334390u;
        // 0x334394: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334398u;
        goto label_334398;
    }
    ctx->pc = 0x334390u;
    SET_GPR_U32(ctx, 31, 0x334398u);
    ctx->pc = 0x334394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334390u;
    // 0x334394: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x334390u, 0x334398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334398u;
label_334398:
    // 0x334398: 0x8e022b24  lw          $v0, 0x2B24($s0)
    ctx->pc = 0x334398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_33439c:
    // 0x33439c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x33439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3343a0:
    // 0x3343a0: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x3343a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_3343a4:
    // 0x3343a4: 0xc096978  jal         func_25A5E0
label_3343a8:
    if (ctx->pc == 0x3343A8u) {
        ctx->pc = 0x3343A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343A4u;
        // 0x3343a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343ACu;
        goto label_3343ac;
    }
    ctx->pc = 0x3343A4u;
    SET_GPR_U32(ctx, 31, 0x3343ACu);
    ctx->pc = 0x3343A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343A4u;
    // 0x3343a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x3343A4u, 0x3343ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343ACu;
label_3343ac:
    // 0x3343ac: 0x8e042b24  lw          $a0, 0x2B24($s0)
    ctx->pc = 0x3343acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_3343b0:
    // 0x3343b0: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x3343b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
label_3343b4:
    // 0x3343b4: 0x246300e3  addiu       $v1, $v1, 0xE3
    ctx->pc = 0x3343b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 227));
label_3343b8:
    // 0x3343b8: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x3343b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
label_3343bc:
    // 0x3343bc: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x3343bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
label_3343c0:
    // 0x3343c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3343c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3343c4:
    // 0x3343c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3343c8:
    if (ctx->pc == 0x3343C8u) {
        ctx->pc = 0x3343C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343C4u;
        // 0x3343c8: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343CCu;
        goto label_3343cc;
    }
    ctx->pc = 0x3343C4u;
    {
        const bool branch_taken_0x3343c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343C4u;
        // 0x3343c8: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343c4) {
            ctx->pc = 0x3343E8u;
            goto label_3343e8;
        }
    }
    ctx->pc = 0x3343CCu;
label_3343cc:
    // 0x3343cc: 0x0  nop
    ctx->pc = 0x3343ccu;
    // NOP
label_3343d0:
    // 0x3343d0: 0x8e052b24  lw          $a1, 0x2B24($s0)
    ctx->pc = 0x3343d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11044)));
label_3343d4:
    // 0x3343d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3343d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_3343d8:
    // 0x3343d8: 0xc0a739c  jal         func_29CE70
label_3343dc:
    if (ctx->pc == 0x3343DCu) {
        ctx->pc = 0x3343DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343D8u;
        // 0x3343dc: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343E0u;
        goto label_3343e0;
    }
    ctx->pc = 0x3343D8u;
    SET_GPR_U32(ctx, 31, 0x3343E0u);
    ctx->pc = 0x3343DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343D8u;
    // 0x3343dc: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x3343D8u, 0x3343E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343E0u;
label_3343e0:
    // 0x3343e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3343e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3343e4:
    // 0x3343e4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3343e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3343e8:
    // 0x3343e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3343e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3343ec:
    // 0x3343ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3343ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3343f0:
    // 0x3343f0: 0x3e00008  jr          $ra
label_3343f4:
    if (ctx->pc == 0x3343F4u) {
        ctx->pc = 0x3343F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343F0u;
        // 0x3343f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343F8u;
        goto label_fallthrough_0x3343f0;
    }
    ctx->pc = 0x3343F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3343F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343F0u;
        // 0x3343f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3343F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3343f0:
    ctx->pc = 0x3343F8u;
}
