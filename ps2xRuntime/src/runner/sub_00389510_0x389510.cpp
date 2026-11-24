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

// Function: sub_00389510
// Address: 0x389510 - 0x389a4c
void sub_00389510_0x389510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389510_0x389510");
#endif

    switch (ctx->pc) {
        case 0x389510u: goto label_389510;
        case 0x389514u: goto label_389514;
        case 0x389518u: goto label_389518;
        case 0x38951cu: goto label_38951c;
        case 0x389520u: goto label_389520;
        case 0x389524u: goto label_389524;
        case 0x389528u: goto label_389528;
        case 0x38952cu: goto label_38952c;
        case 0x389530u: goto label_389530;
        case 0x389534u: goto label_389534;
        case 0x389538u: goto label_389538;
        case 0x38953cu: goto label_38953c;
        case 0x389540u: goto label_389540;
        case 0x389544u: goto label_389544;
        case 0x389548u: goto label_389548;
        case 0x38954cu: goto label_38954c;
        case 0x389550u: goto label_389550;
        case 0x389554u: goto label_389554;
        case 0x389558u: goto label_389558;
        case 0x38955cu: goto label_38955c;
        case 0x389560u: goto label_389560;
        case 0x389564u: goto label_389564;
        case 0x389568u: goto label_389568;
        case 0x38956cu: goto label_38956c;
        case 0x389570u: goto label_389570;
        case 0x389574u: goto label_389574;
        case 0x389578u: goto label_389578;
        case 0x38957cu: goto label_38957c;
        case 0x389580u: goto label_389580;
        case 0x389584u: goto label_389584;
        case 0x389588u: goto label_389588;
        case 0x38958cu: goto label_38958c;
        case 0x389590u: goto label_389590;
        case 0x389594u: goto label_389594;
        case 0x389598u: goto label_389598;
        case 0x38959cu: goto label_38959c;
        case 0x3895a0u: goto label_3895a0;
        case 0x3895a4u: goto label_3895a4;
        case 0x3895a8u: goto label_3895a8;
        case 0x3895acu: goto label_3895ac;
        case 0x3895b0u: goto label_3895b0;
        case 0x3895b4u: goto label_3895b4;
        case 0x3895b8u: goto label_3895b8;
        case 0x3895bcu: goto label_3895bc;
        case 0x3895c0u: goto label_3895c0;
        case 0x3895c4u: goto label_3895c4;
        case 0x3895c8u: goto label_3895c8;
        case 0x3895ccu: goto label_3895cc;
        case 0x3895d0u: goto label_3895d0;
        case 0x3895d4u: goto label_3895d4;
        case 0x3895d8u: goto label_3895d8;
        case 0x3895dcu: goto label_3895dc;
        case 0x3895e0u: goto label_3895e0;
        case 0x3895e4u: goto label_3895e4;
        case 0x3895e8u: goto label_3895e8;
        case 0x3895ecu: goto label_3895ec;
        case 0x3895f0u: goto label_3895f0;
        case 0x3895f4u: goto label_3895f4;
        case 0x3895f8u: goto label_3895f8;
        case 0x3895fcu: goto label_3895fc;
        case 0x389600u: goto label_389600;
        case 0x389604u: goto label_389604;
        case 0x389608u: goto label_389608;
        case 0x38960cu: goto label_38960c;
        case 0x389610u: goto label_389610;
        case 0x389614u: goto label_389614;
        case 0x389618u: goto label_389618;
        case 0x38961cu: goto label_38961c;
        case 0x389620u: goto label_389620;
        case 0x389624u: goto label_389624;
        case 0x389628u: goto label_389628;
        case 0x38962cu: goto label_38962c;
        case 0x389630u: goto label_389630;
        case 0x389634u: goto label_389634;
        case 0x389638u: goto label_389638;
        case 0x38963cu: goto label_38963c;
        case 0x389640u: goto label_389640;
        case 0x389644u: goto label_389644;
        case 0x389648u: goto label_389648;
        case 0x38964cu: goto label_38964c;
        case 0x389650u: goto label_389650;
        case 0x389654u: goto label_389654;
        case 0x389658u: goto label_389658;
        case 0x38965cu: goto label_38965c;
        case 0x389660u: goto label_389660;
        case 0x389664u: goto label_389664;
        case 0x389668u: goto label_389668;
        case 0x38966cu: goto label_38966c;
        case 0x389670u: goto label_389670;
        case 0x389674u: goto label_389674;
        case 0x389678u: goto label_389678;
        case 0x38967cu: goto label_38967c;
        case 0x389680u: goto label_389680;
        case 0x389684u: goto label_389684;
        case 0x389688u: goto label_389688;
        case 0x38968cu: goto label_38968c;
        case 0x389690u: goto label_389690;
        case 0x389694u: goto label_389694;
        case 0x389698u: goto label_389698;
        case 0x38969cu: goto label_38969c;
        case 0x3896a0u: goto label_3896a0;
        case 0x3896a4u: goto label_3896a4;
        case 0x3896a8u: goto label_3896a8;
        case 0x3896acu: goto label_3896ac;
        case 0x3896b0u: goto label_3896b0;
        case 0x3896b4u: goto label_3896b4;
        case 0x3896b8u: goto label_3896b8;
        case 0x3896bcu: goto label_3896bc;
        case 0x3896c0u: goto label_3896c0;
        case 0x3896c4u: goto label_3896c4;
        case 0x3896c8u: goto label_3896c8;
        case 0x3896ccu: goto label_3896cc;
        case 0x3896d0u: goto label_3896d0;
        case 0x3896d4u: goto label_3896d4;
        case 0x3896d8u: goto label_3896d8;
        case 0x3896dcu: goto label_3896dc;
        case 0x3896e0u: goto label_3896e0;
        case 0x3896e4u: goto label_3896e4;
        case 0x3896e8u: goto label_3896e8;
        case 0x3896ecu: goto label_3896ec;
        case 0x3896f0u: goto label_3896f0;
        case 0x3896f4u: goto label_3896f4;
        case 0x3896f8u: goto label_3896f8;
        case 0x3896fcu: goto label_3896fc;
        case 0x389700u: goto label_389700;
        case 0x389704u: goto label_389704;
        case 0x389708u: goto label_389708;
        case 0x38970cu: goto label_38970c;
        case 0x389710u: goto label_389710;
        case 0x389714u: goto label_389714;
        case 0x389718u: goto label_389718;
        case 0x38971cu: goto label_38971c;
        case 0x389720u: goto label_389720;
        case 0x389724u: goto label_389724;
        case 0x389728u: goto label_389728;
        case 0x38972cu: goto label_38972c;
        case 0x389730u: goto label_389730;
        case 0x389734u: goto label_389734;
        case 0x389738u: goto label_389738;
        case 0x38973cu: goto label_38973c;
        case 0x389740u: goto label_389740;
        case 0x389744u: goto label_389744;
        case 0x389748u: goto label_389748;
        case 0x38974cu: goto label_38974c;
        case 0x389750u: goto label_389750;
        case 0x389754u: goto label_389754;
        case 0x389758u: goto label_389758;
        case 0x38975cu: goto label_38975c;
        case 0x389760u: goto label_389760;
        case 0x389764u: goto label_389764;
        case 0x389768u: goto label_389768;
        case 0x38976cu: goto label_38976c;
        case 0x389770u: goto label_389770;
        case 0x389774u: goto label_389774;
        case 0x389778u: goto label_389778;
        case 0x38977cu: goto label_38977c;
        case 0x389780u: goto label_389780;
        case 0x389784u: goto label_389784;
        case 0x389788u: goto label_389788;
        case 0x38978cu: goto label_38978c;
        case 0x389790u: goto label_389790;
        case 0x389794u: goto label_389794;
        case 0x389798u: goto label_389798;
        case 0x38979cu: goto label_38979c;
        case 0x3897a0u: goto label_3897a0;
        case 0x3897a4u: goto label_3897a4;
        case 0x3897a8u: goto label_3897a8;
        case 0x3897acu: goto label_3897ac;
        case 0x3897b0u: goto label_3897b0;
        case 0x3897b4u: goto label_3897b4;
        case 0x3897b8u: goto label_3897b8;
        case 0x3897bcu: goto label_3897bc;
        case 0x3897c0u: goto label_3897c0;
        case 0x3897c4u: goto label_3897c4;
        case 0x3897c8u: goto label_3897c8;
        case 0x3897ccu: goto label_3897cc;
        case 0x3897d0u: goto label_3897d0;
        case 0x3897d4u: goto label_3897d4;
        case 0x3897d8u: goto label_3897d8;
        case 0x3897dcu: goto label_3897dc;
        case 0x3897e0u: goto label_3897e0;
        case 0x3897e4u: goto label_3897e4;
        case 0x3897e8u: goto label_3897e8;
        case 0x3897ecu: goto label_3897ec;
        case 0x3897f0u: goto label_3897f0;
        case 0x3897f4u: goto label_3897f4;
        case 0x3897f8u: goto label_3897f8;
        case 0x3897fcu: goto label_3897fc;
        case 0x389800u: goto label_389800;
        case 0x389804u: goto label_389804;
        case 0x389808u: goto label_389808;
        case 0x38980cu: goto label_38980c;
        case 0x389810u: goto label_389810;
        case 0x389814u: goto label_389814;
        case 0x389818u: goto label_389818;
        case 0x38981cu: goto label_38981c;
        case 0x389820u: goto label_389820;
        case 0x389824u: goto label_389824;
        case 0x389828u: goto label_389828;
        case 0x38982cu: goto label_38982c;
        case 0x389830u: goto label_389830;
        case 0x389834u: goto label_389834;
        case 0x389838u: goto label_389838;
        case 0x38983cu: goto label_38983c;
        case 0x389840u: goto label_389840;
        case 0x389844u: goto label_389844;
        case 0x389848u: goto label_389848;
        case 0x38984cu: goto label_38984c;
        case 0x389850u: goto label_389850;
        case 0x389854u: goto label_389854;
        case 0x389858u: goto label_389858;
        case 0x38985cu: goto label_38985c;
        case 0x389860u: goto label_389860;
        case 0x389864u: goto label_389864;
        case 0x389868u: goto label_389868;
        case 0x38986cu: goto label_38986c;
        case 0x389870u: goto label_389870;
        case 0x389874u: goto label_389874;
        case 0x389878u: goto label_389878;
        case 0x38987cu: goto label_38987c;
        case 0x389880u: goto label_389880;
        case 0x389884u: goto label_389884;
        case 0x389888u: goto label_389888;
        case 0x38988cu: goto label_38988c;
        case 0x389890u: goto label_389890;
        case 0x389894u: goto label_389894;
        case 0x389898u: goto label_389898;
        case 0x38989cu: goto label_38989c;
        case 0x3898a0u: goto label_3898a0;
        case 0x3898a4u: goto label_3898a4;
        case 0x3898a8u: goto label_3898a8;
        case 0x3898acu: goto label_3898ac;
        case 0x3898b0u: goto label_3898b0;
        case 0x3898b4u: goto label_3898b4;
        case 0x3898b8u: goto label_3898b8;
        case 0x3898bcu: goto label_3898bc;
        case 0x3898c0u: goto label_3898c0;
        case 0x3898c4u: goto label_3898c4;
        case 0x3898c8u: goto label_3898c8;
        case 0x3898ccu: goto label_3898cc;
        case 0x3898d0u: goto label_3898d0;
        case 0x3898d4u: goto label_3898d4;
        case 0x3898d8u: goto label_3898d8;
        case 0x3898dcu: goto label_3898dc;
        case 0x3898e0u: goto label_3898e0;
        case 0x3898e4u: goto label_3898e4;
        case 0x3898e8u: goto label_3898e8;
        case 0x3898ecu: goto label_3898ec;
        case 0x3898f0u: goto label_3898f0;
        case 0x3898f4u: goto label_3898f4;
        case 0x3898f8u: goto label_3898f8;
        case 0x3898fcu: goto label_3898fc;
        case 0x389900u: goto label_389900;
        case 0x389904u: goto label_389904;
        case 0x389908u: goto label_389908;
        case 0x38990cu: goto label_38990c;
        case 0x389910u: goto label_389910;
        case 0x389914u: goto label_389914;
        case 0x389918u: goto label_389918;
        case 0x38991cu: goto label_38991c;
        case 0x389920u: goto label_389920;
        case 0x389924u: goto label_389924;
        case 0x389928u: goto label_389928;
        case 0x38992cu: goto label_38992c;
        case 0x389930u: goto label_389930;
        case 0x389934u: goto label_389934;
        case 0x389938u: goto label_389938;
        case 0x38993cu: goto label_38993c;
        case 0x389940u: goto label_389940;
        case 0x389944u: goto label_389944;
        case 0x389948u: goto label_389948;
        case 0x38994cu: goto label_38994c;
        case 0x389950u: goto label_389950;
        case 0x389954u: goto label_389954;
        case 0x389958u: goto label_389958;
        case 0x38995cu: goto label_38995c;
        case 0x389960u: goto label_389960;
        case 0x389964u: goto label_389964;
        case 0x389968u: goto label_389968;
        case 0x38996cu: goto label_38996c;
        case 0x389970u: goto label_389970;
        case 0x389974u: goto label_389974;
        case 0x389978u: goto label_389978;
        case 0x38997cu: goto label_38997c;
        case 0x389980u: goto label_389980;
        case 0x389984u: goto label_389984;
        case 0x389988u: goto label_389988;
        case 0x38998cu: goto label_38998c;
        case 0x389990u: goto label_389990;
        case 0x389994u: goto label_389994;
        case 0x389998u: goto label_389998;
        case 0x38999cu: goto label_38999c;
        case 0x3899a0u: goto label_3899a0;
        case 0x3899a4u: goto label_3899a4;
        case 0x3899a8u: goto label_3899a8;
        case 0x3899acu: goto label_3899ac;
        case 0x3899b0u: goto label_3899b0;
        case 0x3899b4u: goto label_3899b4;
        case 0x3899b8u: goto label_3899b8;
        case 0x3899bcu: goto label_3899bc;
        case 0x3899c0u: goto label_3899c0;
        case 0x3899c4u: goto label_3899c4;
        case 0x3899c8u: goto label_3899c8;
        case 0x3899ccu: goto label_3899cc;
        case 0x3899d0u: goto label_3899d0;
        case 0x3899d4u: goto label_3899d4;
        case 0x3899d8u: goto label_3899d8;
        case 0x3899dcu: goto label_3899dc;
        case 0x3899e0u: goto label_3899e0;
        case 0x3899e4u: goto label_3899e4;
        case 0x3899e8u: goto label_3899e8;
        case 0x3899ecu: goto label_3899ec;
        case 0x3899f0u: goto label_3899f0;
        case 0x3899f4u: goto label_3899f4;
        case 0x3899f8u: goto label_3899f8;
        case 0x3899fcu: goto label_3899fc;
        case 0x389a00u: goto label_389a00;
        case 0x389a04u: goto label_389a04;
        case 0x389a08u: goto label_389a08;
        case 0x389a0cu: goto label_389a0c;
        case 0x389a10u: goto label_389a10;
        case 0x389a14u: goto label_389a14;
        case 0x389a18u: goto label_389a18;
        case 0x389a1cu: goto label_389a1c;
        case 0x389a20u: goto label_389a20;
        case 0x389a24u: goto label_389a24;
        case 0x389a28u: goto label_389a28;
        case 0x389a2cu: goto label_389a2c;
        case 0x389a30u: goto label_389a30;
        case 0x389a34u: goto label_389a34;
        case 0x389a38u: goto label_389a38;
        case 0x389a3cu: goto label_389a3c;
        case 0x389a40u: goto label_389a40;
        case 0x389a44u: goto label_389a44;
        case 0x389a48u: goto label_389a48;
        default: break;
    }

    ctx->pc = 0x389510u;

label_389510:
    // 0x389510: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x389510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_389514:
    // 0x389514: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x389514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_389518:
    // 0x389518: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x389518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38951c:
    // 0x38951c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_389520:
    // 0x389520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x389520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_389524:
    // 0x389524: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x389524u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
label_389528:
    // 0x389528: 0x10c300a1  beq         $a2, $v1, . + 4 + (0xA1 << 2)
label_38952c:
    if (ctx->pc == 0x38952Cu) {
        ctx->pc = 0x38952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389528u;
        // 0x38952c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389530u;
        goto label_389530;
    }
    ctx->pc = 0x389528u;
    {
        const bool branch_taken_0x389528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x38952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389528u;
        // 0x38952c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389528) {
            ctx->pc = 0x3897B0u;
            goto label_3897b0;
        }
    }
    ctx->pc = 0x389530u;
label_389530:
    // 0x389530: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x389530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_389534:
    // 0x389534: 0x10c30088  beq         $a2, $v1, . + 4 + (0x88 << 2)
label_389538:
    if (ctx->pc == 0x389538u) {
        ctx->pc = 0x389538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389534u;
        // 0x389538: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38953Cu;
        goto label_38953c;
    }
    ctx->pc = 0x389534u;
    {
        const bool branch_taken_0x389534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x389538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389534u;
        // 0x389538: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389534) {
            ctx->pc = 0x389758u;
            goto label_389758;
        }
    }
    ctx->pc = 0x38953Cu;
label_38953c:
    // 0x38953c: 0x10c3003c  beq         $a2, $v1, . + 4 + (0x3C << 2)
label_389540:
    if (ctx->pc == 0x389540u) {
        ctx->pc = 0x389544u;
        goto label_389544;
    }
    ctx->pc = 0x38953Cu;
    {
        const bool branch_taken_0x38953c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x38953c) {
            ctx->pc = 0x389630u;
            goto label_389630;
        }
    }
    ctx->pc = 0x389544u;
label_389544:
    // 0x389544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389548:
    // 0x389548: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
label_38954c:
    if (ctx->pc == 0x38954Cu) {
        ctx->pc = 0x389550u;
        goto label_389550;
    }
    ctx->pc = 0x389548u;
    {
        const bool branch_taken_0x389548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x389548) {
            ctx->pc = 0x3895F0u;
            goto label_3895f0;
        }
    }
    ctx->pc = 0x389550u;
label_389550:
    // 0x389550: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_389554:
    if (ctx->pc == 0x389554u) {
        ctx->pc = 0x389558u;
        goto label_389558;
    }
    ctx->pc = 0x389550u;
    {
        const bool branch_taken_0x389550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x389550) {
            ctx->pc = 0x389560u;
            goto label_389560;
        }
    }
    ctx->pc = 0x389558u;
label_389558:
    // 0x389558: 0x10000137  b           . + 4 + (0x137 << 2)
label_38955c:
    if (ctx->pc == 0x38955Cu) {
        ctx->pc = 0x389560u;
        goto label_389560;
    }
    ctx->pc = 0x389558u;
    {
        const bool branch_taken_0x389558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389558) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x389560u;
label_389560:
    // 0x389560: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_389564:
    if (ctx->pc == 0x389564u) {
        ctx->pc = 0x389568u;
        goto label_389568;
    }
    ctx->pc = 0x389560u;
    {
        const bool branch_taken_0x389560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x389560) {
            ctx->pc = 0x3895D8u;
            goto label_3895d8;
        }
    }
    ctx->pc = 0x389568u;
label_389568:
    // 0x389568: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x389568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
label_38956c:
    // 0x38956c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x38956cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_389570:
    // 0x389570: 0xc0aa1e8  jal         func_2A87A0
label_389574:
    if (ctx->pc == 0x389574u) {
        ctx->pc = 0x389574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389570u;
        // 0x389574: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389578u;
        goto label_389578;
    }
    ctx->pc = 0x389570u;
    SET_GPR_U32(ctx, 31, 0x389578u);
    ctx->pc = 0x389574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389570u;
    // 0x389574: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x389570u, 0x389578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389578u;
label_389578:
    // 0x389578: 0x92040561  lbu         $a0, 0x561($s0)
    ctx->pc = 0x389578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1377)));
label_38957c:
    // 0x38957c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x38957cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_389580:
    // 0x389580: 0x2463201c  addiu       $v1, $v1, 0x201C
    ctx->pc = 0x389580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8220));
label_389584:
    // 0x389584: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x389584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_389588:
    // 0x389588: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x389588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38958c:
    // 0x38958c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x38958cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_389590:
    // 0x389590: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_389594:
    if (ctx->pc == 0x389594u) {
        ctx->pc = 0x389598u;
        goto label_389598;
    }
    ctx->pc = 0x389590u;
    {
        const bool branch_taken_0x389590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x389590) {
            ctx->pc = 0x3895E0u;
            goto label_3895e0;
        }
    }
    ctx->pc = 0x389598u;
label_389598:
    // 0x389598: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x389598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_38959c:
    // 0x38959c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x38959cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3895a0:
    // 0x3895a0: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x3895a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
label_3895a4:
    // 0x3895a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3895a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3895a8:
    // 0x3895a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3895a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3895ac:
    // 0x3895ac: 0x34454c02  ori         $a1, $v0, 0x4C02
    ctx->pc = 0x3895acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19458);
label_3895b0:
    // 0x3895b0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3895b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3895b4:
    // 0x3895b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3895b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3895b8:
    // 0x3895b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3895b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3895bc:
    // 0x3895bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3895bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3895c0:
    // 0x3895c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3895c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3895c4:
    // 0x3895c4: 0xc05e9e8  jal         func_17A7A0
label_3895c8:
    if (ctx->pc == 0x3895C8u) {
        ctx->pc = 0x3895C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895C4u;
        // 0x3895c8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3895CCu;
        goto label_3895cc;
    }
    ctx->pc = 0x3895C4u;
    SET_GPR_U32(ctx, 31, 0x3895CCu);
    ctx->pc = 0x3895C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3895C4u;
    // 0x3895c8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3895C4u, 0x3895CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3895CCu;
label_3895cc:
    // 0x3895cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3895d0:
    if (ctx->pc == 0x3895D0u) {
        ctx->pc = 0x3895D4u;
        goto label_3895d4;
    }
    ctx->pc = 0x3895CCu;
    {
        const bool branch_taken_0x3895cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3895cc) {
            ctx->pc = 0x3895E0u;
            goto label_3895e0;
        }
    }
    ctx->pc = 0x3895D4u;
label_3895d4:
    // 0x3895d4: 0x0  nop
    ctx->pc = 0x3895d4u;
    // NOP
label_3895d8:
    // 0x3895d8: 0xc0c0830  jal         func_3020C0
label_3895dc:
    if (ctx->pc == 0x3895DCu) {
        ctx->pc = 0x3895DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895D8u;
        // 0x3895dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3895E0u;
        goto label_3895e0;
    }
    ctx->pc = 0x3895D8u;
    SET_GPR_U32(ctx, 31, 0x3895E0u);
    ctx->pc = 0x3895DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3895D8u;
    // 0x3895dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3895D8u, 0x3895E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3895E0u;
label_3895e0:
    // 0x3895e0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3895e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
label_3895e4:
    // 0x3895e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3895e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3895e8:
    // 0x3895e8: 0x10000113  b           . + 4 + (0x113 << 2)
label_3895ec:
    if (ctx->pc == 0x3895ECu) {
        ctx->pc = 0x3895ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895E8u;
        // 0x3895ec: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3895F0u;
        goto label_3895f0;
    }
    ctx->pc = 0x3895E8u;
    {
        const bool branch_taken_0x3895e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3895ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895E8u;
        // 0x3895ec: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3895e8) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x3895F0u;
label_3895f0:
    // 0x3895f0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3895f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
label_3895f4:
    // 0x3895f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3895f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3895f8:
    // 0x3895f8: 0x24060812  addiu       $a2, $zero, 0x812
    ctx->pc = 0x3895f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2066));
label_3895fc:
    // 0x3895fc: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3895fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
label_389600:
    // 0x389600: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x389600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
label_389604:
    // 0x389604: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x389604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
label_389608:
    // 0x389608: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x389608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
label_38960c:
    // 0x38960c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x38960cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
label_389610:
    // 0x389610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x389610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_389614:
    // 0x389614: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x389614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_389618:
    // 0x389618: 0xa2000508  sb          $zero, 0x508($s0)
    ctx->pc = 0x389618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1288), (uint8_t)GPR_U32(ctx, 0));
label_38961c:
    // 0x38961c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_389620:
    // 0x389620: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x389620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_389624:
    // 0x389624: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x389624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_389628:
    // 0x389628: 0x320f809  jalr        $t9
label_38962c:
    if (ctx->pc == 0x38962Cu) {
        ctx->pc = 0x38962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389628u;
        // 0x38962c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389630u;
        goto label_389630;
    }
    ctx->pc = 0x389628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x389630u);
        ctx->pc = 0x38962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389628u;
        // 0x38962c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389628u, 0x389630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389630u;
label_389630:
    // 0x389630: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x389630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
label_389634:
    // 0x389634: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x389634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_389638:
    // 0x389638: 0xc07cce0  jal         func_1F3380
label_38963c:
    if (ctx->pc == 0x38963Cu) {
        ctx->pc = 0x38963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389638u;
        // 0x38963c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389640u;
        goto label_389640;
    }
    ctx->pc = 0x389638u;
    SET_GPR_U32(ctx, 31, 0x389640u);
    ctx->pc = 0x38963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389638u;
    // 0x38963c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x389638u, 0x389640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389640u;
label_389640:
    // 0x389640: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_389644:
    if (ctx->pc == 0x389644u) {
        ctx->pc = 0x389648u;
        goto label_389648;
    }
    ctx->pc = 0x389640u;
    {
        const bool branch_taken_0x389640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x389640) {
            ctx->pc = 0x389688u;
            goto label_389688;
        }
    }
    ctx->pc = 0x389648u;
label_389648:
    // 0x389648: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x389648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_38964c:
    // 0x38964c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x38964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_389650:
    // 0x389650: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x389650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_389654:
    // 0x389654: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x389654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_389658:
    // 0x389658: 0xc0766b8  jal         func_1D9AE0
label_38965c:
    if (ctx->pc == 0x38965Cu) {
        ctx->pc = 0x38965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389658u;
        // 0x38965c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389660u;
        goto label_389660;
    }
    ctx->pc = 0x389658u;
    SET_GPR_U32(ctx, 31, 0x389660u);
    ctx->pc = 0x38965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389658u;
    // 0x38965c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x389658u, 0x389660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389660u;
label_389660:
    // 0x389660: 0x92030561  lbu         $v1, 0x561($s0)
    ctx->pc = 0x389660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1377)));
label_389664:
    // 0x389664: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x389664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_389668:
    // 0x389668: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x389668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_38966c:
    // 0x38966c: 0x24422010  addiu       $v0, $v0, 0x2010
    ctx->pc = 0x38966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
label_389670:
    // 0x389670: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x389670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_389674:
    // 0x389674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x389674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_389678:
    // 0x389678: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x389678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38967c:
    // 0x38967c: 0xc0766c8  jal         func_1D9B20
label_389680:
    if (ctx->pc == 0x389680u) {
        ctx->pc = 0x389680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38967Cu;
        // 0x389680: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389684u;
        goto label_389684;
    }
    ctx->pc = 0x38967Cu;
    SET_GPR_U32(ctx, 31, 0x389684u);
    ctx->pc = 0x389680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38967Cu;
    // 0x389680: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x38967Cu, 0x389684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389684u;
label_389684:
    // 0x389684: 0x0  nop
    ctx->pc = 0x389684u;
    // NOP
label_389688:
    // 0x389688: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x389688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_38968c:
    // 0x38968c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_389690:
    // 0x389690: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x389690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
label_389694:
    // 0x389694: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x389694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_389698:
    // 0x389698: 0xc097384  jal         func_25CE10
label_38969c:
    if (ctx->pc == 0x38969Cu) {
        ctx->pc = 0x38969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389698u;
        // 0x38969c: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3896A0u;
        goto label_3896a0;
    }
    ctx->pc = 0x389698u;
    SET_GPR_U32(ctx, 31, 0x3896A0u);
    ctx->pc = 0x38969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389698u;
    // 0x38969c: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x389698u, 0x3896A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896A0u;
label_3896a0:
    // 0x3896a0: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3896a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3896a4:
    // 0x3896a4: 0xc0763bc  jal         func_1D8EF0
label_3896a8:
    if (ctx->pc == 0x3896A8u) {
        ctx->pc = 0x3896A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896A4u;
        // 0x3896a8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3896ACu;
        goto label_3896ac;
    }
    ctx->pc = 0x3896A4u;
    SET_GPR_U32(ctx, 31, 0x3896ACu);
    ctx->pc = 0x3896A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3896A4u;
    // 0x3896a8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3896A4u, 0x3896ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3896ACu;
label_3896ac:
    // 0x3896ac: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3896acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
label_3896b0:
    // 0x3896b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3896b4:
    if (ctx->pc == 0x3896B4u) {
        ctx->pc = 0x3896B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896B0u;
        // 0x3896b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3896B8u;
        goto label_3896b8;
    }
    ctx->pc = 0x3896B0u;
    {
        const bool branch_taken_0x3896b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3896B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896B0u;
        // 0x3896b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896b0) {
            ctx->pc = 0x3896C0u;
            goto label_3896c0;
        }
    }
    ctx->pc = 0x3896B8u;
label_3896b8:
    // 0x3896b8: 0x10000021  b           . + 4 + (0x21 << 2)
label_3896bc:
    if (ctx->pc == 0x3896BCu) {
        ctx->pc = 0x3896C0u;
        goto label_3896c0;
    }
    ctx->pc = 0x3896B8u;
    {
        const bool branch_taken_0x3896b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3896b8) {
            ctx->pc = 0x389740u;
            goto label_389740;
        }
    }
    ctx->pc = 0x3896C0u;
label_3896c0:
    // 0x3896c0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3896c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
label_3896c4:
    // 0x3896c4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3896c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3896c8:
    // 0x3896c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3896c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3896cc:
    // 0x3896cc: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3896ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3896d0:
    // 0x3896d0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3896d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
label_3896d4:
    // 0x3896d4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3896d8:
    if (ctx->pc == 0x3896D8u) {
        ctx->pc = 0x3896DCu;
        goto label_3896dc;
    }
    ctx->pc = 0x3896D4u;
    {
        const bool branch_taken_0x3896d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3896d4) {
            ctx->pc = 0x389710u;
            goto label_389710;
        }
    }
    ctx->pc = 0x3896DCu;
label_3896dc:
    // 0x3896dc: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3896dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
label_3896e0:
    // 0x3896e0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3896e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3896e4:
    // 0x3896e4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3896e8:
    if (ctx->pc == 0x3896E8u) {
        ctx->pc = 0x3896E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896E4u;
        // 0x3896e8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3896ECu;
        goto label_3896ec;
    }
    ctx->pc = 0x3896E4u;
    {
        const bool branch_taken_0x3896e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3896E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896E4u;
        // 0x3896e8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896e4) {
            ctx->pc = 0x389738u;
            goto label_389738;
        }
    }
    ctx->pc = 0x3896ECu;
label_3896ec:
    // 0x3896ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3896ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3896f0:
    // 0x3896f0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3896f0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3896f4:
    // 0x3896f4: 0x0  nop
    ctx->pc = 0x3896f4u;
    // NOP
label_3896f8:
    // 0x3896f8: 0x0  nop
    ctx->pc = 0x3896f8u;
    // NOP
label_3896fc:
    // 0x3896fc: 0x2010  mfhi        $a0
    ctx->pc = 0x3896fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_389700:
    // 0x389700: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x389700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
label_389704:
    // 0x389704: 0x1000000c  b           . + 4 + (0xC << 2)
label_389708:
    if (ctx->pc == 0x389708u) {
        ctx->pc = 0x389708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389704u;
        // 0x389708: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38970Cu;
        goto label_38970c;
    }
    ctx->pc = 0x389704u;
    {
        const bool branch_taken_0x389704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389704u;
        // 0x389708: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389704) {
            ctx->pc = 0x389738u;
            goto label_389738;
        }
    }
    ctx->pc = 0x38970Cu;
label_38970c:
    // 0x38970c: 0x0  nop
    ctx->pc = 0x38970cu;
    // NOP
label_389710:
    // 0x389710: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x389710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
label_389714:
    // 0x389714: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x389714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_389718:
    // 0x389718: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_38971c:
    if (ctx->pc == 0x38971Cu) {
        ctx->pc = 0x389720u;
        goto label_389720;
    }
    ctx->pc = 0x389718u;
    {
        const bool branch_taken_0x389718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x389718) {
            ctx->pc = 0x389738u;
            goto label_389738;
        }
    }
    ctx->pc = 0x389720u;
label_389720:
    // 0x389720: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x389720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
label_389724:
    // 0x389724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389728:
    // 0x389728: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x389728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
label_38972c:
    // 0x38972c: 0x10000004  b           . + 4 + (0x4 << 2)
label_389730:
    if (ctx->pc == 0x389730u) {
        ctx->pc = 0x389730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38972Cu;
        // 0x389730: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389734u;
        goto label_389734;
    }
    ctx->pc = 0x38972Cu;
    {
        const bool branch_taken_0x38972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38972Cu;
        // 0x389730: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38972c) {
            ctx->pc = 0x389740u;
            goto label_389740;
        }
    }
    ctx->pc = 0x389734u;
label_389734:
    // 0x389734: 0x0  nop
    ctx->pc = 0x389734u;
    // NOP
label_389738:
    // 0x389738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38973c:
    // 0x38973c: 0x0  nop
    ctx->pc = 0x38973cu;
    // NOP
label_389740:
    // 0x389740: 0x146000bd  bnez        $v1, . + 4 + (0xBD << 2)
label_389744:
    if (ctx->pc == 0x389744u) {
        ctx->pc = 0x389748u;
        goto label_389748;
    }
    ctx->pc = 0x389740u;
    {
        const bool branch_taken_0x389740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x389740) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x389748u;
label_389748:
    // 0x389748: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x389748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
label_38974c:
    // 0x38974c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_389750:
    // 0x389750: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_389754:
    if (ctx->pc == 0x389754u) {
        ctx->pc = 0x389754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389750u;
        // 0x389754: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389758u;
        goto label_389758;
    }
    ctx->pc = 0x389750u;
    {
        const bool branch_taken_0x389750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389750u;
        // 0x389754: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389750) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x389758u;
label_389758:
    // 0x389758: 0x86030528  lh          $v1, 0x528($s0)
    ctx->pc = 0x389758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1320)));
label_38975c:
    // 0x38975c: 0x3c022900  lui         $v0, 0x2900
    ctx->pc = 0x38975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10496 << 16));
label_389760:
    // 0x389760: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x389760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_389764:
    // 0x389764: 0x34454c02  ori         $a1, $v0, 0x4C02
    ctx->pc = 0x389764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19458);
label_389768:
    // 0x389768: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x389768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_38976c:
    // 0x38976c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38976cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389770:
    // 0x389770: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x389770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_389774:
    // 0x389774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x389774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389778:
    // 0x389778: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x389778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38977c:
    // 0x38977c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38977cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389780:
    // 0x389780: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x389780u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389784:
    // 0x389784: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x389784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
label_389788:
    // 0x389788: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x389788u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
label_38978c:
    // 0x38978c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x38978cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
label_389790:
    // 0x389790: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x389790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
label_389794:
    // 0x389794: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x389794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
label_389798:
    // 0x389798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x389798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38979c:
    // 0x38979c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x38979cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3897a0:
    // 0x3897a0: 0x9202052e  lbu         $v0, 0x52E($s0)
    ctx->pc = 0x3897a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_3897a4:
    // 0x3897a4: 0xc05e9e8  jal         func_17A7A0
label_3897a8:
    if (ctx->pc == 0x3897A8u) {
        ctx->pc = 0x3897A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897A4u;
        // 0x3897a8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3897ACu;
        goto label_3897ac;
    }
    ctx->pc = 0x3897A4u;
    SET_GPR_U32(ctx, 31, 0x3897ACu);
    ctx->pc = 0x3897A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3897A4u;
    // 0x3897a8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3897A4u, 0x3897ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3897ACu;
label_3897ac:
    // 0x3897ac: 0x0  nop
    ctx->pc = 0x3897acu;
    // NOP
label_3897b0:
    // 0x3897b0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3897b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_3897b4:
    // 0x3897b4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3897b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_3897b8:
    // 0x3897b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3897b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3897bc:
    // 0x3897bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3897bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3897c0:
    // 0x3897c0: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3897c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_3897c4:
    // 0x3897c4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3897c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3897c8:
    // 0x3897c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3897c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3897cc:
    // 0x3897cc: 0xc07681c  jal         func_1DA070
label_3897d0:
    if (ctx->pc == 0x3897D0u) {
        ctx->pc = 0x3897D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897CCu;
        // 0x3897d0: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3897D4u;
        goto label_3897d4;
    }
    ctx->pc = 0x3897CCu;
    SET_GPR_U32(ctx, 31, 0x3897D4u);
    ctx->pc = 0x3897D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3897CCu;
    // 0x3897d0: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3897CCu, 0x3897D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3897D4u;
label_3897d4:
    // 0x3897d4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3897d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3897d8:
    // 0x3897d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3897d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3897dc:
    // 0x3897dc: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3897dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
label_3897e0:
    // 0x3897e0: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3897e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_3897e4:
    // 0x3897e4: 0xc097384  jal         func_25CE10
label_3897e8:
    if (ctx->pc == 0x3897E8u) {
        ctx->pc = 0x3897E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897E4u;
        // 0x3897e8: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3897ECu;
        goto label_3897ec;
    }
    ctx->pc = 0x3897E4u;
    SET_GPR_U32(ctx, 31, 0x3897ECu);
    ctx->pc = 0x3897E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3897E4u;
    // 0x3897e8: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3897E4u, 0x3897ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3897ECu;
label_3897ec:
    // 0x3897ec: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3897ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3897f0:
    // 0x3897f0: 0xc0763bc  jal         func_1D8EF0
label_3897f4:
    if (ctx->pc == 0x3897F4u) {
        ctx->pc = 0x3897F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897F0u;
        // 0x3897f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3897F8u;
        goto label_3897f8;
    }
    ctx->pc = 0x3897F0u;
    SET_GPR_U32(ctx, 31, 0x3897F8u);
    ctx->pc = 0x3897F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3897F0u;
    // 0x3897f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3897F0u, 0x3897F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3897F8u;
label_3897f8:
    // 0x3897f8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3897f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3897fc:
    // 0x3897fc: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x3897fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_389800:
    // 0x389800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389804:
    // 0x389804: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x389804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_389808:
    // 0x389808: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x389808u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_38980c:
    // 0x38980c: 0x92060560  lbu         $a2, 0x560($s0)
    ctx->pc = 0x38980cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1376)));
label_389810:
    // 0x389810: 0xc60c055c  lwc1        $f12, 0x55C($s0)
    ctx->pc = 0x389810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_389814:
    // 0x389814: 0xc0c0960  jal         func_302580
label_389818:
    if (ctx->pc == 0x389818u) {
        ctx->pc = 0x389818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389814u;
        // 0x389818: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38981Cu;
        goto label_38981c;
    }
    ctx->pc = 0x389814u;
    SET_GPR_U32(ctx, 31, 0x38981Cu);
    ctx->pc = 0x389818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389814u;
    // 0x389818: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x389814u, 0x38981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38981Cu;
label_38981c:
    // 0x38981c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_389820:
    if (ctx->pc == 0x389820u) {
        ctx->pc = 0x389824u;
        goto label_389824;
    }
    ctx->pc = 0x38981Cu;
    {
        const bool branch_taken_0x38981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38981c) {
            ctx->pc = 0x3898C0u;
            goto label_3898c0;
        }
    }
    ctx->pc = 0x389824u;
label_389824:
    // 0x389824: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x389824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
label_389828:
    // 0x389828: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x389828u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_38982c:
    // 0x38982c: 0xc0aa1e8  jal         func_2A87A0
label_389830:
    if (ctx->pc == 0x389830u) {
        ctx->pc = 0x389830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38982Cu;
        // 0x389830: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389834u;
        goto label_389834;
    }
    ctx->pc = 0x38982Cu;
    SET_GPR_U32(ctx, 31, 0x389834u);
    ctx->pc = 0x389830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38982Cu;
    // 0x389830: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x38982Cu, 0x389834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389834u;
label_389834:
    // 0x389834: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x389834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_389838:
    // 0x389838: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x389838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_38983c:
    // 0x38983c: 0x3c022c00  lui         $v0, 0x2C00
    ctx->pc = 0x38983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11264 << 16));
label_389840:
    // 0x389840: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x389840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_389844:
    // 0x389844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x389844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389848:
    // 0x389848: 0x34454c02  ori         $a1, $v0, 0x4C02
    ctx->pc = 0x389848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19458);
label_38984c:
    // 0x38984c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x38984cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_389850:
    // 0x389850: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x389850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389854:
    // 0x389854: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x389854u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389858:
    // 0x389858: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x389858u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38985c:
    // 0x38985c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38985cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389860:
    // 0x389860: 0xc05e9e8  jal         func_17A7A0
label_389864:
    if (ctx->pc == 0x389864u) {
        ctx->pc = 0x389864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389860u;
        // 0x389864: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389868u;
        goto label_389868;
    }
    ctx->pc = 0x389860u;
    SET_GPR_U32(ctx, 31, 0x389868u);
    ctx->pc = 0x389864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389860u;
    // 0x389864: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x389860u, 0x389868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389868u;
label_389868:
    // 0x389868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38986c:
    // 0x38986c: 0xc0c0830  jal         func_3020C0
label_389870:
    if (ctx->pc == 0x389870u) {
        ctx->pc = 0x389870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38986Cu;
        // 0x389870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389874u;
        goto label_389874;
    }
    ctx->pc = 0x38986Cu;
    SET_GPR_U32(ctx, 31, 0x389874u);
    ctx->pc = 0x389870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38986Cu;
    // 0x389870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38986Cu, 0x389874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389874u;
label_389874:
    // 0x389874: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x389874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_389878:
    // 0x389878: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x389878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38987c:
    // 0x38987c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x38987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_389880:
    // 0x389880: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x389880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_389884:
    // 0x389884: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x389884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_389888:
    // 0x389888: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x389888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38988c:
    // 0x38988c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38988cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389890:
    // 0x389890: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x389890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_389894:
    // 0x389894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x389894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_389898:
    // 0x389898: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x389898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_38989c:
    // 0x38989c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x38989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3898a0:
    // 0x3898a0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3898a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3898a4:
    // 0x3898a4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3898a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_3898a8:
    // 0x3898a8: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3898a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
label_3898ac:
    // 0x3898ac: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3898acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_3898b0:
    // 0x3898b0: 0xc0aa590  jal         func_2A9640
label_3898b4:
    if (ctx->pc == 0x3898B4u) {
        ctx->pc = 0x3898B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898B0u;
        // 0x3898b4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3898B8u;
        goto label_3898b8;
    }
    ctx->pc = 0x3898B0u;
    SET_GPR_U32(ctx, 31, 0x3898B8u);
    ctx->pc = 0x3898B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3898B0u;
    // 0x3898b4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3898B0u, 0x3898B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3898B8u;
label_3898b8:
    // 0x3898b8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_3898bc:
    if (ctx->pc == 0x3898BCu) {
        ctx->pc = 0x3898C0u;
        goto label_3898c0;
    }
    ctx->pc = 0x3898B8u;
    {
        const bool branch_taken_0x3898b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3898b8) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x3898C0u;
label_3898c0:
    // 0x3898c0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3898c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3898c4:
    // 0x3898c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3898c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3898c8:
    // 0x3898c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3898c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3898cc:
    // 0x3898cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3898ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3898d0:
    // 0x3898d0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3898d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3898d4:
    // 0x3898d4: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3898d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
label_3898d8:
    // 0x3898d8: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3898d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3898dc:
    // 0x3898dc: 0xc0c0900  jal         func_302400
label_3898e0:
    if (ctx->pc == 0x3898E0u) {
        ctx->pc = 0x3898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898DCu;
        // 0x3898e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3898E4u;
        goto label_3898e4;
    }
    ctx->pc = 0x3898DCu;
    SET_GPR_U32(ctx, 31, 0x3898E4u);
    ctx->pc = 0x3898E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3898DCu;
    // 0x3898e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3898DCu, 0x3898E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3898E4u;
label_3898e4:
    // 0x3898e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3898e8:
    if (ctx->pc == 0x3898E8u) {
        ctx->pc = 0x3898ECu;
        goto label_3898ec;
    }
    ctx->pc = 0x3898E4u;
    {
        const bool branch_taken_0x3898e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3898e4) {
            ctx->pc = 0x389910u;
            goto label_389910;
        }
    }
    ctx->pc = 0x3898ECu;
label_3898ec:
    // 0x3898ec: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3898ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
label_3898f0:
    // 0x3898f0: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3898f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_3898f4:
    // 0x3898f4: 0xc0aa1e8  jal         func_2A87A0
label_3898f8:
    if (ctx->pc == 0x3898F8u) {
        ctx->pc = 0x3898F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898F4u;
        // 0x3898f8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3898FCu;
        goto label_3898fc;
    }
    ctx->pc = 0x3898F4u;
    SET_GPR_U32(ctx, 31, 0x3898FCu);
    ctx->pc = 0x3898F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3898F4u;
    // 0x3898f8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x3898F4u, 0x3898FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3898FCu;
label_3898fc:
    // 0x3898fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3898fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389900:
    // 0x389900: 0xc0c0830  jal         func_3020C0
label_389904:
    if (ctx->pc == 0x389904u) {
        ctx->pc = 0x389904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389900u;
        // 0x389904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389908u;
        goto label_389908;
    }
    ctx->pc = 0x389900u;
    SET_GPR_U32(ctx, 31, 0x389908u);
    ctx->pc = 0x389904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389900u;
    // 0x389904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x389900u, 0x389908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389908u;
label_389908:
    // 0x389908: 0x1000004b  b           . + 4 + (0x4B << 2)
label_38990c:
    if (ctx->pc == 0x38990Cu) {
        ctx->pc = 0x389910u;
        goto label_389910;
    }
    ctx->pc = 0x389908u;
    {
        const bool branch_taken_0x389908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389908) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x389910u;
label_389910:
    // 0x389910: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x389910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_389914:
    // 0x389914: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x389914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_389918:
    // 0x389918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38991c:
    // 0x38991c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x38991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_389920:
    // 0x389920: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x389920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_389924:
    // 0x389924: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x389924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_389928:
    // 0x389928: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x389928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_38992c:
    // 0x38992c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x38992cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389930:
    // 0x389930: 0xc0c0980  jal         func_302600
label_389934:
    if (ctx->pc == 0x389934u) {
        ctx->pc = 0x389934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389930u;
        // 0x389934: 0x27aa00bc  addiu       $t2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389938u;
        goto label_389938;
    }
    ctx->pc = 0x389930u;
    SET_GPR_U32(ctx, 31, 0x389938u);
    ctx->pc = 0x389934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389930u;
    // 0x389934: 0x27aa00bc  addiu       $t2, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x389930u, 0x389938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389938u;
label_389938:
    // 0x389938: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_38993c:
    if (ctx->pc == 0x38993Cu) {
        ctx->pc = 0x38993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389938u;
        // 0x38993c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389940u;
        goto label_389940;
    }
    ctx->pc = 0x389938u;
    {
        const bool branch_taken_0x389938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389938u;
        // 0x38993c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389938) {
            ctx->pc = 0x389978u;
            goto label_389978;
        }
    }
    ctx->pc = 0x389940u;
label_389940:
    // 0x389940: 0xc0766dc  jal         func_1D9B70
label_389944:
    if (ctx->pc == 0x389944u) {
        ctx->pc = 0x389944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389940u;
        // 0x389944: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389948u;
        goto label_389948;
    }
    ctx->pc = 0x389940u;
    SET_GPR_U32(ctx, 31, 0x389948u);
    ctx->pc = 0x389944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389940u;
    // 0x389944: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x389940u, 0x389948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389948u;
label_389948:
    // 0x389948: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x389948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38994c:
    // 0x38994c: 0xc0766e8  jal         func_1D9BA0
label_389950:
    if (ctx->pc == 0x389950u) {
        ctx->pc = 0x389950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38994Cu;
        // 0x389950: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389954u;
        goto label_389954;
    }
    ctx->pc = 0x38994Cu;
    SET_GPR_U32(ctx, 31, 0x389954u);
    ctx->pc = 0x389950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38994Cu;
    // 0x389950: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x38994Cu, 0x389954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389954u;
label_389954:
    // 0x389954: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x389954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
label_389958:
    // 0x389958: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x389958u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_38995c:
    // 0x38995c: 0xc0aa1e8  jal         func_2A87A0
label_389960:
    if (ctx->pc == 0x389960u) {
        ctx->pc = 0x389960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38995Cu;
        // 0x389960: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389964u;
        goto label_389964;
    }
    ctx->pc = 0x38995Cu;
    SET_GPR_U32(ctx, 31, 0x389964u);
    ctx->pc = 0x389960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38995Cu;
    // 0x389960: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x38995Cu, 0x389964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389964u;
label_389964:
    // 0x389964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389968:
    // 0x389968: 0xc0c0830  jal         func_3020C0
label_38996c:
    if (ctx->pc == 0x38996Cu) {
        ctx->pc = 0x38996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389968u;
        // 0x38996c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389970u;
        goto label_389970;
    }
    ctx->pc = 0x389968u;
    SET_GPR_U32(ctx, 31, 0x389970u);
    ctx->pc = 0x38996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389968u;
    // 0x38996c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x389968u, 0x389970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389970u;
label_389970:
    // 0x389970: 0x10000031  b           . + 4 + (0x31 << 2)
label_389974:
    if (ctx->pc == 0x389974u) {
        ctx->pc = 0x389978u;
        goto label_389978;
    }
    ctx->pc = 0x389970u;
    {
        const bool branch_taken_0x389970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389970) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x389978u;
label_389978:
    // 0x389978: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x389978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
label_38997c:
    // 0x38997c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_389980:
    if (ctx->pc == 0x389980u) {
        ctx->pc = 0x389980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38997Cu;
        // 0x389980: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389984u;
        goto label_389984;
    }
    ctx->pc = 0x38997Cu;
    {
        const bool branch_taken_0x38997c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38997Cu;
        // 0x389980: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38997c) {
            ctx->pc = 0x389990u;
            goto label_389990;
        }
    }
    ctx->pc = 0x389984u;
label_389984:
    // 0x389984: 0x10000022  b           . + 4 + (0x22 << 2)
label_389988:
    if (ctx->pc == 0x389988u) {
        ctx->pc = 0x38998Cu;
        goto label_38998c;
    }
    ctx->pc = 0x389984u;
    {
        const bool branch_taken_0x389984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389984) {
            ctx->pc = 0x389A10u;
            goto label_389a10;
        }
    }
    ctx->pc = 0x38998Cu;
label_38998c:
    // 0x38998c: 0x0  nop
    ctx->pc = 0x38998cu;
    // NOP
label_389990:
    // 0x389990: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x389990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
label_389994:
    // 0x389994: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x389994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_389998:
    // 0x389998: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x389998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38999c:
    // 0x38999c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x38999cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3899a0:
    // 0x3899a0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3899a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
label_3899a4:
    // 0x3899a4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3899a8:
    if (ctx->pc == 0x3899A8u) {
        ctx->pc = 0x3899ACu;
        goto label_3899ac;
    }
    ctx->pc = 0x3899A4u;
    {
        const bool branch_taken_0x3899a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3899a4) {
            ctx->pc = 0x3899E0u;
            goto label_3899e0;
        }
    }
    ctx->pc = 0x3899ACu;
label_3899ac:
    // 0x3899ac: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3899acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
label_3899b0:
    // 0x3899b0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3899b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3899b4:
    // 0x3899b4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3899b8:
    if (ctx->pc == 0x3899B8u) {
        ctx->pc = 0x3899B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899B4u;
        // 0x3899b8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3899BCu;
        goto label_3899bc;
    }
    ctx->pc = 0x3899B4u;
    {
        const bool branch_taken_0x3899b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3899B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899B4u;
        // 0x3899b8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899b4) {
            ctx->pc = 0x389A08u;
            goto label_389a08;
        }
    }
    ctx->pc = 0x3899BCu;
label_3899bc:
    // 0x3899bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3899bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3899c0:
    // 0x3899c0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3899c0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3899c4:
    // 0x3899c4: 0x0  nop
    ctx->pc = 0x3899c4u;
    // NOP
label_3899c8:
    // 0x3899c8: 0x0  nop
    ctx->pc = 0x3899c8u;
    // NOP
label_3899cc:
    // 0x3899cc: 0x2010  mfhi        $a0
    ctx->pc = 0x3899ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3899d0:
    // 0x3899d0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3899d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3899d4:
    // 0x3899d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3899d8:
    if (ctx->pc == 0x3899D8u) {
        ctx->pc = 0x3899D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899D4u;
        // 0x3899d8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3899DCu;
        goto label_3899dc;
    }
    ctx->pc = 0x3899D4u;
    {
        const bool branch_taken_0x3899d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899D4u;
        // 0x3899d8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899d4) {
            ctx->pc = 0x389A08u;
            goto label_389a08;
        }
    }
    ctx->pc = 0x3899DCu;
label_3899dc:
    // 0x3899dc: 0x0  nop
    ctx->pc = 0x3899dcu;
    // NOP
label_3899e0:
    // 0x3899e0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3899e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
label_3899e4:
    // 0x3899e4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3899e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3899e8:
    // 0x3899e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3899ec:
    if (ctx->pc == 0x3899ECu) {
        ctx->pc = 0x3899F0u;
        goto label_3899f0;
    }
    ctx->pc = 0x3899E8u;
    {
        const bool branch_taken_0x3899e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3899e8) {
            ctx->pc = 0x389A08u;
            goto label_389a08;
        }
    }
    ctx->pc = 0x3899F0u;
label_3899f0:
    // 0x3899f0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3899f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3899f4:
    // 0x3899f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3899f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3899f8:
    // 0x3899f8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3899f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3899fc:
    // 0x3899fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_389a00:
    if (ctx->pc == 0x389A00u) {
        ctx->pc = 0x389A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899FCu;
        // 0x389a00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389A04u;
        goto label_389a04;
    }
    ctx->pc = 0x3899FCu;
    {
        const bool branch_taken_0x3899fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899FCu;
        // 0x389a00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899fc) {
            ctx->pc = 0x389A10u;
            goto label_389a10;
        }
    }
    ctx->pc = 0x389A04u;
label_389a04:
    // 0x389a04: 0x0  nop
    ctx->pc = 0x389a04u;
    // NOP
label_389a08:
    // 0x389a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389a0c:
    // 0x389a0c: 0x0  nop
    ctx->pc = 0x389a0cu;
    // NOP
label_389a10:
    // 0x389a10: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_389a14:
    if (ctx->pc == 0x389A14u) {
        ctx->pc = 0x389A18u;
        goto label_389a18;
    }
    ctx->pc = 0x389A10u;
    {
        const bool branch_taken_0x389a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x389a10) {
            ctx->pc = 0x389A38u;
            goto label_389a38;
        }
    }
    ctx->pc = 0x389A18u;
label_389a18:
    // 0x389a18: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x389a18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
label_389a1c:
    // 0x389a1c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x389a1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
label_389a20:
    // 0x389a20: 0xc0aa1e8  jal         func_2A87A0
label_389a24:
    if (ctx->pc == 0x389A24u) {
        ctx->pc = 0x389A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A20u;
        // 0x389a24: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389A28u;
        goto label_389a28;
    }
    ctx->pc = 0x389A20u;
    SET_GPR_U32(ctx, 31, 0x389A28u);
    ctx->pc = 0x389A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389A20u;
    // 0x389a24: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x389A20u, 0x389A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389A28u;
label_389a28:
    // 0x389a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389a2c:
    // 0x389a2c: 0xc0c0830  jal         func_3020C0
label_389a30:
    if (ctx->pc == 0x389A30u) {
        ctx->pc = 0x389A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A2Cu;
        // 0x389a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389A34u;
        goto label_389a34;
    }
    ctx->pc = 0x389A2Cu;
    SET_GPR_U32(ctx, 31, 0x389A34u);
    ctx->pc = 0x389A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389A2Cu;
    // 0x389a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x389A2Cu, 0x389A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389A34u;
label_389a34:
    // 0x389a34: 0x0  nop
    ctx->pc = 0x389a34u;
    // NOP
label_389a38:
    // 0x389a38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x389a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_389a3c:
    // 0x389a3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x389a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389a40:
    // 0x389a40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x389a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389a44:
    // 0x389a44: 0x3e00008  jr          $ra
label_389a48:
    if (ctx->pc == 0x389A48u) {
        ctx->pc = 0x389A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A44u;
        // 0x389a48: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389A4Cu;
        goto label_fallthrough_0x389a44;
    }
    ctx->pc = 0x389A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A44u;
        // 0x389a48: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389a44:
    ctx->pc = 0x389A4Cu;
}
