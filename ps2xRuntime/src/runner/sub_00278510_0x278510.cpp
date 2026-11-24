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

// Function: sub_00278510
// Address: 0x278510 - 0x278b60
void sub_00278510_0x278510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278510_0x278510");
#endif

    switch (ctx->pc) {
        case 0x278510u: goto label_278510;
        case 0x278514u: goto label_278514;
        case 0x278518u: goto label_278518;
        case 0x27851cu: goto label_27851c;
        case 0x278520u: goto label_278520;
        case 0x278524u: goto label_278524;
        case 0x278528u: goto label_278528;
        case 0x27852cu: goto label_27852c;
        case 0x278530u: goto label_278530;
        case 0x278534u: goto label_278534;
        case 0x278538u: goto label_278538;
        case 0x27853cu: goto label_27853c;
        case 0x278540u: goto label_278540;
        case 0x278544u: goto label_278544;
        case 0x278548u: goto label_278548;
        case 0x27854cu: goto label_27854c;
        case 0x278550u: goto label_278550;
        case 0x278554u: goto label_278554;
        case 0x278558u: goto label_278558;
        case 0x27855cu: goto label_27855c;
        case 0x278560u: goto label_278560;
        case 0x278564u: goto label_278564;
        case 0x278568u: goto label_278568;
        case 0x27856cu: goto label_27856c;
        case 0x278570u: goto label_278570;
        case 0x278574u: goto label_278574;
        case 0x278578u: goto label_278578;
        case 0x27857cu: goto label_27857c;
        case 0x278580u: goto label_278580;
        case 0x278584u: goto label_278584;
        case 0x278588u: goto label_278588;
        case 0x27858cu: goto label_27858c;
        case 0x278590u: goto label_278590;
        case 0x278594u: goto label_278594;
        case 0x278598u: goto label_278598;
        case 0x27859cu: goto label_27859c;
        case 0x2785a0u: goto label_2785a0;
        case 0x2785a4u: goto label_2785a4;
        case 0x2785a8u: goto label_2785a8;
        case 0x2785acu: goto label_2785ac;
        case 0x2785b0u: goto label_2785b0;
        case 0x2785b4u: goto label_2785b4;
        case 0x2785b8u: goto label_2785b8;
        case 0x2785bcu: goto label_2785bc;
        case 0x2785c0u: goto label_2785c0;
        case 0x2785c4u: goto label_2785c4;
        case 0x2785c8u: goto label_2785c8;
        case 0x2785ccu: goto label_2785cc;
        case 0x2785d0u: goto label_2785d0;
        case 0x2785d4u: goto label_2785d4;
        case 0x2785d8u: goto label_2785d8;
        case 0x2785dcu: goto label_2785dc;
        case 0x2785e0u: goto label_2785e0;
        case 0x2785e4u: goto label_2785e4;
        case 0x2785e8u: goto label_2785e8;
        case 0x2785ecu: goto label_2785ec;
        case 0x2785f0u: goto label_2785f0;
        case 0x2785f4u: goto label_2785f4;
        case 0x2785f8u: goto label_2785f8;
        case 0x2785fcu: goto label_2785fc;
        case 0x278600u: goto label_278600;
        case 0x278604u: goto label_278604;
        case 0x278608u: goto label_278608;
        case 0x27860cu: goto label_27860c;
        case 0x278610u: goto label_278610;
        case 0x278614u: goto label_278614;
        case 0x278618u: goto label_278618;
        case 0x27861cu: goto label_27861c;
        case 0x278620u: goto label_278620;
        case 0x278624u: goto label_278624;
        case 0x278628u: goto label_278628;
        case 0x27862cu: goto label_27862c;
        case 0x278630u: goto label_278630;
        case 0x278634u: goto label_278634;
        case 0x278638u: goto label_278638;
        case 0x27863cu: goto label_27863c;
        case 0x278640u: goto label_278640;
        case 0x278644u: goto label_278644;
        case 0x278648u: goto label_278648;
        case 0x27864cu: goto label_27864c;
        case 0x278650u: goto label_278650;
        case 0x278654u: goto label_278654;
        case 0x278658u: goto label_278658;
        case 0x27865cu: goto label_27865c;
        case 0x278660u: goto label_278660;
        case 0x278664u: goto label_278664;
        case 0x278668u: goto label_278668;
        case 0x27866cu: goto label_27866c;
        case 0x278670u: goto label_278670;
        case 0x278674u: goto label_278674;
        case 0x278678u: goto label_278678;
        case 0x27867cu: goto label_27867c;
        case 0x278680u: goto label_278680;
        case 0x278684u: goto label_278684;
        case 0x278688u: goto label_278688;
        case 0x27868cu: goto label_27868c;
        case 0x278690u: goto label_278690;
        case 0x278694u: goto label_278694;
        case 0x278698u: goto label_278698;
        case 0x27869cu: goto label_27869c;
        case 0x2786a0u: goto label_2786a0;
        case 0x2786a4u: goto label_2786a4;
        case 0x2786a8u: goto label_2786a8;
        case 0x2786acu: goto label_2786ac;
        case 0x2786b0u: goto label_2786b0;
        case 0x2786b4u: goto label_2786b4;
        case 0x2786b8u: goto label_2786b8;
        case 0x2786bcu: goto label_2786bc;
        case 0x2786c0u: goto label_2786c0;
        case 0x2786c4u: goto label_2786c4;
        case 0x2786c8u: goto label_2786c8;
        case 0x2786ccu: goto label_2786cc;
        case 0x2786d0u: goto label_2786d0;
        case 0x2786d4u: goto label_2786d4;
        case 0x2786d8u: goto label_2786d8;
        case 0x2786dcu: goto label_2786dc;
        case 0x2786e0u: goto label_2786e0;
        case 0x2786e4u: goto label_2786e4;
        case 0x2786e8u: goto label_2786e8;
        case 0x2786ecu: goto label_2786ec;
        case 0x2786f0u: goto label_2786f0;
        case 0x2786f4u: goto label_2786f4;
        case 0x2786f8u: goto label_2786f8;
        case 0x2786fcu: goto label_2786fc;
        case 0x278700u: goto label_278700;
        case 0x278704u: goto label_278704;
        case 0x278708u: goto label_278708;
        case 0x27870cu: goto label_27870c;
        case 0x278710u: goto label_278710;
        case 0x278714u: goto label_278714;
        case 0x278718u: goto label_278718;
        case 0x27871cu: goto label_27871c;
        case 0x278720u: goto label_278720;
        case 0x278724u: goto label_278724;
        case 0x278728u: goto label_278728;
        case 0x27872cu: goto label_27872c;
        case 0x278730u: goto label_278730;
        case 0x278734u: goto label_278734;
        case 0x278738u: goto label_278738;
        case 0x27873cu: goto label_27873c;
        case 0x278740u: goto label_278740;
        case 0x278744u: goto label_278744;
        case 0x278748u: goto label_278748;
        case 0x27874cu: goto label_27874c;
        case 0x278750u: goto label_278750;
        case 0x278754u: goto label_278754;
        case 0x278758u: goto label_278758;
        case 0x27875cu: goto label_27875c;
        case 0x278760u: goto label_278760;
        case 0x278764u: goto label_278764;
        case 0x278768u: goto label_278768;
        case 0x27876cu: goto label_27876c;
        case 0x278770u: goto label_278770;
        case 0x278774u: goto label_278774;
        case 0x278778u: goto label_278778;
        case 0x27877cu: goto label_27877c;
        case 0x278780u: goto label_278780;
        case 0x278784u: goto label_278784;
        case 0x278788u: goto label_278788;
        case 0x27878cu: goto label_27878c;
        case 0x278790u: goto label_278790;
        case 0x278794u: goto label_278794;
        case 0x278798u: goto label_278798;
        case 0x27879cu: goto label_27879c;
        case 0x2787a0u: goto label_2787a0;
        case 0x2787a4u: goto label_2787a4;
        case 0x2787a8u: goto label_2787a8;
        case 0x2787acu: goto label_2787ac;
        case 0x2787b0u: goto label_2787b0;
        case 0x2787b4u: goto label_2787b4;
        case 0x2787b8u: goto label_2787b8;
        case 0x2787bcu: goto label_2787bc;
        case 0x2787c0u: goto label_2787c0;
        case 0x2787c4u: goto label_2787c4;
        case 0x2787c8u: goto label_2787c8;
        case 0x2787ccu: goto label_2787cc;
        case 0x2787d0u: goto label_2787d0;
        case 0x2787d4u: goto label_2787d4;
        case 0x2787d8u: goto label_2787d8;
        case 0x2787dcu: goto label_2787dc;
        case 0x2787e0u: goto label_2787e0;
        case 0x2787e4u: goto label_2787e4;
        case 0x2787e8u: goto label_2787e8;
        case 0x2787ecu: goto label_2787ec;
        case 0x2787f0u: goto label_2787f0;
        case 0x2787f4u: goto label_2787f4;
        case 0x2787f8u: goto label_2787f8;
        case 0x2787fcu: goto label_2787fc;
        case 0x278800u: goto label_278800;
        case 0x278804u: goto label_278804;
        case 0x278808u: goto label_278808;
        case 0x27880cu: goto label_27880c;
        case 0x278810u: goto label_278810;
        case 0x278814u: goto label_278814;
        case 0x278818u: goto label_278818;
        case 0x27881cu: goto label_27881c;
        case 0x278820u: goto label_278820;
        case 0x278824u: goto label_278824;
        case 0x278828u: goto label_278828;
        case 0x27882cu: goto label_27882c;
        case 0x278830u: goto label_278830;
        case 0x278834u: goto label_278834;
        case 0x278838u: goto label_278838;
        case 0x27883cu: goto label_27883c;
        case 0x278840u: goto label_278840;
        case 0x278844u: goto label_278844;
        case 0x278848u: goto label_278848;
        case 0x27884cu: goto label_27884c;
        case 0x278850u: goto label_278850;
        case 0x278854u: goto label_278854;
        case 0x278858u: goto label_278858;
        case 0x27885cu: goto label_27885c;
        case 0x278860u: goto label_278860;
        case 0x278864u: goto label_278864;
        case 0x278868u: goto label_278868;
        case 0x27886cu: goto label_27886c;
        case 0x278870u: goto label_278870;
        case 0x278874u: goto label_278874;
        case 0x278878u: goto label_278878;
        case 0x27887cu: goto label_27887c;
        case 0x278880u: goto label_278880;
        case 0x278884u: goto label_278884;
        case 0x278888u: goto label_278888;
        case 0x27888cu: goto label_27888c;
        case 0x278890u: goto label_278890;
        case 0x278894u: goto label_278894;
        case 0x278898u: goto label_278898;
        case 0x27889cu: goto label_27889c;
        case 0x2788a0u: goto label_2788a0;
        case 0x2788a4u: goto label_2788a4;
        case 0x2788a8u: goto label_2788a8;
        case 0x2788acu: goto label_2788ac;
        case 0x2788b0u: goto label_2788b0;
        case 0x2788b4u: goto label_2788b4;
        case 0x2788b8u: goto label_2788b8;
        case 0x2788bcu: goto label_2788bc;
        case 0x2788c0u: goto label_2788c0;
        case 0x2788c4u: goto label_2788c4;
        case 0x2788c8u: goto label_2788c8;
        case 0x2788ccu: goto label_2788cc;
        case 0x2788d0u: goto label_2788d0;
        case 0x2788d4u: goto label_2788d4;
        case 0x2788d8u: goto label_2788d8;
        case 0x2788dcu: goto label_2788dc;
        case 0x2788e0u: goto label_2788e0;
        case 0x2788e4u: goto label_2788e4;
        case 0x2788e8u: goto label_2788e8;
        case 0x2788ecu: goto label_2788ec;
        case 0x2788f0u: goto label_2788f0;
        case 0x2788f4u: goto label_2788f4;
        case 0x2788f8u: goto label_2788f8;
        case 0x2788fcu: goto label_2788fc;
        case 0x278900u: goto label_278900;
        case 0x278904u: goto label_278904;
        case 0x278908u: goto label_278908;
        case 0x27890cu: goto label_27890c;
        case 0x278910u: goto label_278910;
        case 0x278914u: goto label_278914;
        case 0x278918u: goto label_278918;
        case 0x27891cu: goto label_27891c;
        case 0x278920u: goto label_278920;
        case 0x278924u: goto label_278924;
        case 0x278928u: goto label_278928;
        case 0x27892cu: goto label_27892c;
        case 0x278930u: goto label_278930;
        case 0x278934u: goto label_278934;
        case 0x278938u: goto label_278938;
        case 0x27893cu: goto label_27893c;
        case 0x278940u: goto label_278940;
        case 0x278944u: goto label_278944;
        case 0x278948u: goto label_278948;
        case 0x27894cu: goto label_27894c;
        case 0x278950u: goto label_278950;
        case 0x278954u: goto label_278954;
        case 0x278958u: goto label_278958;
        case 0x27895cu: goto label_27895c;
        case 0x278960u: goto label_278960;
        case 0x278964u: goto label_278964;
        case 0x278968u: goto label_278968;
        case 0x27896cu: goto label_27896c;
        case 0x278970u: goto label_278970;
        case 0x278974u: goto label_278974;
        case 0x278978u: goto label_278978;
        case 0x27897cu: goto label_27897c;
        case 0x278980u: goto label_278980;
        case 0x278984u: goto label_278984;
        case 0x278988u: goto label_278988;
        case 0x27898cu: goto label_27898c;
        case 0x278990u: goto label_278990;
        case 0x278994u: goto label_278994;
        case 0x278998u: goto label_278998;
        case 0x27899cu: goto label_27899c;
        case 0x2789a0u: goto label_2789a0;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789acu: goto label_2789ac;
        case 0x2789b0u: goto label_2789b0;
        case 0x2789b4u: goto label_2789b4;
        case 0x2789b8u: goto label_2789b8;
        case 0x2789bcu: goto label_2789bc;
        case 0x2789c0u: goto label_2789c0;
        case 0x2789c4u: goto label_2789c4;
        case 0x2789c8u: goto label_2789c8;
        case 0x2789ccu: goto label_2789cc;
        case 0x2789d0u: goto label_2789d0;
        case 0x2789d4u: goto label_2789d4;
        case 0x2789d8u: goto label_2789d8;
        case 0x2789dcu: goto label_2789dc;
        case 0x2789e0u: goto label_2789e0;
        case 0x2789e4u: goto label_2789e4;
        case 0x2789e8u: goto label_2789e8;
        case 0x2789ecu: goto label_2789ec;
        case 0x2789f0u: goto label_2789f0;
        case 0x2789f4u: goto label_2789f4;
        case 0x2789f8u: goto label_2789f8;
        case 0x2789fcu: goto label_2789fc;
        case 0x278a00u: goto label_278a00;
        case 0x278a04u: goto label_278a04;
        case 0x278a08u: goto label_278a08;
        case 0x278a0cu: goto label_278a0c;
        case 0x278a10u: goto label_278a10;
        case 0x278a14u: goto label_278a14;
        case 0x278a18u: goto label_278a18;
        case 0x278a1cu: goto label_278a1c;
        case 0x278a20u: goto label_278a20;
        case 0x278a24u: goto label_278a24;
        case 0x278a28u: goto label_278a28;
        case 0x278a2cu: goto label_278a2c;
        case 0x278a30u: goto label_278a30;
        case 0x278a34u: goto label_278a34;
        case 0x278a38u: goto label_278a38;
        case 0x278a3cu: goto label_278a3c;
        case 0x278a40u: goto label_278a40;
        case 0x278a44u: goto label_278a44;
        case 0x278a48u: goto label_278a48;
        case 0x278a4cu: goto label_278a4c;
        case 0x278a50u: goto label_278a50;
        case 0x278a54u: goto label_278a54;
        case 0x278a58u: goto label_278a58;
        case 0x278a5cu: goto label_278a5c;
        case 0x278a60u: goto label_278a60;
        case 0x278a64u: goto label_278a64;
        case 0x278a68u: goto label_278a68;
        case 0x278a6cu: goto label_278a6c;
        case 0x278a70u: goto label_278a70;
        case 0x278a74u: goto label_278a74;
        case 0x278a78u: goto label_278a78;
        case 0x278a7cu: goto label_278a7c;
        case 0x278a80u: goto label_278a80;
        case 0x278a84u: goto label_278a84;
        case 0x278a88u: goto label_278a88;
        case 0x278a8cu: goto label_278a8c;
        case 0x278a90u: goto label_278a90;
        case 0x278a94u: goto label_278a94;
        case 0x278a98u: goto label_278a98;
        case 0x278a9cu: goto label_278a9c;
        case 0x278aa0u: goto label_278aa0;
        case 0x278aa4u: goto label_278aa4;
        case 0x278aa8u: goto label_278aa8;
        case 0x278aacu: goto label_278aac;
        case 0x278ab0u: goto label_278ab0;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ab8u: goto label_278ab8;
        case 0x278abcu: goto label_278abc;
        case 0x278ac0u: goto label_278ac0;
        case 0x278ac4u: goto label_278ac4;
        case 0x278ac8u: goto label_278ac8;
        case 0x278accu: goto label_278acc;
        case 0x278ad0u: goto label_278ad0;
        case 0x278ad4u: goto label_278ad4;
        case 0x278ad8u: goto label_278ad8;
        case 0x278adcu: goto label_278adc;
        case 0x278ae0u: goto label_278ae0;
        case 0x278ae4u: goto label_278ae4;
        case 0x278ae8u: goto label_278ae8;
        case 0x278aecu: goto label_278aec;
        case 0x278af0u: goto label_278af0;
        case 0x278af4u: goto label_278af4;
        case 0x278af8u: goto label_278af8;
        case 0x278afcu: goto label_278afc;
        case 0x278b00u: goto label_278b00;
        case 0x278b04u: goto label_278b04;
        case 0x278b08u: goto label_278b08;
        case 0x278b0cu: goto label_278b0c;
        case 0x278b10u: goto label_278b10;
        case 0x278b14u: goto label_278b14;
        case 0x278b18u: goto label_278b18;
        case 0x278b1cu: goto label_278b1c;
        case 0x278b20u: goto label_278b20;
        case 0x278b24u: goto label_278b24;
        case 0x278b28u: goto label_278b28;
        case 0x278b2cu: goto label_278b2c;
        case 0x278b30u: goto label_278b30;
        case 0x278b34u: goto label_278b34;
        case 0x278b38u: goto label_278b38;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278b44u: goto label_278b44;
        case 0x278b48u: goto label_278b48;
        case 0x278b4cu: goto label_278b4c;
        case 0x278b50u: goto label_278b50;
        case 0x278b54u: goto label_278b54;
        case 0x278b58u: goto label_278b58;
        case 0x278b5cu: goto label_278b5c;
        default: break;
    }

    ctx->pc = 0x278510u;

label_278510:
    // 0x278510: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x278510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_278514:
    // 0x278514: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x278514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_278518:
    // 0x278518: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x278518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27851c:
    // 0x27851c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_278520:
    // 0x278520: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x278520u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_278524:
    // 0x278524: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x278524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_278528:
    // 0x278528: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x278528u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_27852c:
    // 0x27852c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_278530:
    // 0x278530: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278534:
    // 0x278534: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x278534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_278538:
    // 0x278538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27853c:
    // 0x27853c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x27853cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_278540:
    // 0x278540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x278540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_278544:
    // 0x278544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_278548:
    // 0x278548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27854c:
    // 0x27854c: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x27854cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_278550:
    // 0x278550: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x278550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_278554:
    // 0x278554: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x278554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
label_278558:
    // 0x278558: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x278558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
label_27855c:
    // 0x27855c: 0xc09d4d4  jal         func_275350
label_278560:
    if (ctx->pc == 0x278560u) {
        ctx->pc = 0x278560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27855Cu;
        // 0x278560: 0xafaa00ac  sw          $t2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278564u;
        goto label_278564;
    }
    ctx->pc = 0x27855Cu;
    SET_GPR_U32(ctx, 31, 0x278564u);
    ctx->pc = 0x278560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27855Cu;
    // 0x278560: 0xafaa00ac  sw          $t2, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x27855Cu, 0x278564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278564u;
label_278564:
    // 0x278564: 0xc09d968  jal         func_2765A0
label_278568:
    if (ctx->pc == 0x278568u) {
        ctx->pc = 0x27856Cu;
        goto label_27856c;
    }
    ctx->pc = 0x278564u;
    SET_GPR_U32(ctx, 31, 0x27856Cu);
    ctx->pc = 0x2765A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765A0u, 0x278564u, 0x27856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27856Cu;
label_27856c:
    // 0x27856c: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x27856cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
label_278570:
    // 0x278570: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_278574:
    if (ctx->pc == 0x278574u) {
        ctx->pc = 0x278574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278570u;
        // 0x278574: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278578u;
        goto label_278578;
    }
    ctx->pc = 0x278570u;
    {
        const bool branch_taken_0x278570 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x278574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278570u;
        // 0x278574: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278570) {
            ctx->pc = 0x278588u;
            goto label_278588;
        }
    }
    ctx->pc = 0x278578u;
label_278578:
    // 0x278578: 0xc09d4d8  jal         func_275360
label_27857c:
    if (ctx->pc == 0x27857Cu) {
        ctx->pc = 0x27857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278578u;
        // 0x27857c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278580u;
        goto label_278580;
    }
    ctx->pc = 0x278578u;
    SET_GPR_U32(ctx, 31, 0x278580u);
    ctx->pc = 0x27857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278578u;
    // 0x27857c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x278578u, 0x278580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278580u;
label_278580:
    // 0x278580: 0x1000016b  b           . + 4 + (0x16B << 2)
label_278584:
    if (ctx->pc == 0x278584u) {
        ctx->pc = 0x278584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278580u;
        // 0x278584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278588u;
        goto label_278588;
    }
    ctx->pc = 0x278580u;
    {
        const bool branch_taken_0x278580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278580u;
        // 0x278584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278580) {
            ctx->pc = 0x278B30u;
            goto label_278b30;
        }
    }
    ctx->pc = 0x278588u;
label_278588:
    // 0x278588: 0xc0741a4  jal         func_1D0690
label_27858c:
    if (ctx->pc == 0x27858Cu) {
        ctx->pc = 0x27858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278588u;
        // 0x27858c: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278590u;
        goto label_278590;
    }
    ctx->pc = 0x278588u;
    SET_GPR_U32(ctx, 31, 0x278590u);
    ctx->pc = 0x27858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278588u;
    // 0x27858c: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x278588u, 0x278590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278590u;
label_278590:
    // 0x278590: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x278590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278594:
    // 0x278594: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_278598:
    if (ctx->pc == 0x278598u) {
        ctx->pc = 0x278598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278594u;
        // 0x278598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27859Cu;
        goto label_27859c;
    }
    ctx->pc = 0x278594u;
    {
        const bool branch_taken_0x278594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x278598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278594u;
        // 0x278598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278594) {
            ctx->pc = 0x2785D8u;
            goto label_2785d8;
        }
    }
    ctx->pc = 0x27859Cu;
label_27859c:
    // 0x27859c: 0xc096b00  jal         func_25AC00
label_2785a0:
    if (ctx->pc == 0x2785A0u) {
        ctx->pc = 0x2785A4u;
        goto label_2785a4;
    }
    ctx->pc = 0x27859Cu;
    SET_GPR_U32(ctx, 31, 0x2785A4u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x27859Cu, 0x2785A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785A4u;
label_2785a4:
    // 0x2785a4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2785a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2785a8:
    // 0x2785a8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2785a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2785ac:
    // 0x2785ac: 0x24427520  addiu       $v0, $v0, 0x7520
    ctx->pc = 0x2785acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
label_2785b0:
    // 0x2785b0: 0x24637500  addiu       $v1, $v1, 0x7500
    ctx->pc = 0x2785b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29952));
label_2785b4:
    // 0x2785b4: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x2785b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_2785b8:
    // 0x2785b8: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x2785b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_2785bc:
    // 0x2785bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2785bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2785c0:
    // 0x2785c0: 0xae600118  sw          $zero, 0x118($s3)
    ctx->pc = 0x2785c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
label_2785c4:
    // 0x2785c4: 0xae60011c  sw          $zero, 0x11C($s3)
    ctx->pc = 0x2785c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 0));
label_2785c8:
    // 0x2785c8: 0xa26200b3  sb          $v0, 0xB3($s3)
    ctx->pc = 0x2785c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 179), (uint8_t)GPR_U32(ctx, 2));
label_2785cc:
    // 0x2785cc: 0xae6000b8  sw          $zero, 0xB8($s3)
    ctx->pc = 0x2785ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 0));
label_2785d0:
    // 0x2785d0: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x2785d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_2785d4:
    // 0x2785d4: 0x0  nop
    ctx->pc = 0x2785d4u;
    // NOP
label_2785d8:
    // 0x2785d8: 0x12600151  beqz        $s3, . + 4 + (0x151 << 2)
label_2785dc:
    if (ctx->pc == 0x2785DCu) {
        ctx->pc = 0x2785DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785D8u;
        // 0x2785dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785E0u;
        goto label_2785e0;
    }
    ctx->pc = 0x2785D8u;
    {
        const bool branch_taken_0x2785d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2785DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785D8u;
        // 0x2785dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785d8) {
            ctx->pc = 0x278B20u;
            goto label_278b20;
        }
    }
    ctx->pc = 0x2785E0u;
label_2785e0:
    // 0x2785e0: 0xc09d4fc  jal         func_2753F0
label_2785e4:
    if (ctx->pc == 0x2785E4u) {
        ctx->pc = 0x2785E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785E0u;
        // 0x2785e4: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785E8u;
        goto label_2785e8;
    }
    ctx->pc = 0x2785E0u;
    SET_GPR_U32(ctx, 31, 0x2785E8u);
    ctx->pc = 0x2785E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785E0u;
    // 0x2785e4: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2785E0u, 0x2785E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785E8u;
label_2785e8:
    // 0x2785e8: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x2785e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2785ec:
    // 0x2785ec: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2785ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2785f0:
    // 0x2785f0: 0xc09d524  jal         func_275490
label_2785f4:
    if (ctx->pc == 0x2785F4u) {
        ctx->pc = 0x2785F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785F0u;
        // 0x2785f4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785F8u;
        goto label_2785f8;
    }
    ctx->pc = 0x2785F0u;
    SET_GPR_U32(ctx, 31, 0x2785F8u);
    ctx->pc = 0x2785F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2785F0u;
    // 0x2785f4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2785F0u, 0x2785F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785F8u;
label_2785f8:
    // 0x2785f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2785f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2785fc:
    // 0x2785fc: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_278600:
    if (ctx->pc == 0x278600u) {
        ctx->pc = 0x278604u;
        goto label_278604;
    }
    ctx->pc = 0x2785FCu;
    {
        const bool branch_taken_0x2785fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2785fc) {
            ctx->pc = 0x278638u;
            goto label_278638;
        }
    }
    ctx->pc = 0x278604u;
label_278604:
    // 0x278604: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_278608:
    if (ctx->pc == 0x278608u) {
        ctx->pc = 0x27860Cu;
        goto label_27860c;
    }
    ctx->pc = 0x278604u;
    {
        const bool branch_taken_0x278604 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x278604) {
            ctx->pc = 0x278620u;
            goto label_278620;
        }
    }
    ctx->pc = 0x27860Cu;
label_27860c:
    // 0x27860c: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x27860cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_278610:
    // 0x278610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278614:
    // 0x278614: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x278614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_278618:
    // 0x278618: 0x320f809  jalr        $t9
label_27861c:
    if (ctx->pc == 0x27861Cu) {
        ctx->pc = 0x27861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278618u;
        // 0x27861c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278620u;
        goto label_278620;
    }
    ctx->pc = 0x278618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x278620u);
        ctx->pc = 0x27861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278618u;
        // 0x27861c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278618u, 0x278620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278620u;
label_278620:
    // 0x278620: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278624:
    // 0x278624: 0xc09d4d8  jal         func_275360
label_278628:
    if (ctx->pc == 0x278628u) {
        ctx->pc = 0x278628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278624u;
        // 0x278628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27862Cu;
        goto label_27862c;
    }
    ctx->pc = 0x278624u;
    SET_GPR_U32(ctx, 31, 0x27862Cu);
    ctx->pc = 0x278628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278624u;
    // 0x278628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x278624u, 0x27862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27862Cu;
label_27862c:
    // 0x27862c: 0x10000140  b           . + 4 + (0x140 << 2)
label_278630:
    if (ctx->pc == 0x278630u) {
        ctx->pc = 0x278630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27862Cu;
        // 0x278630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278634u;
        goto label_278634;
    }
    ctx->pc = 0x27862Cu;
    {
        const bool branch_taken_0x27862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27862Cu;
        // 0x278630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27862c) {
            ctx->pc = 0x278B30u;
            goto label_278b30;
        }
    }
    ctx->pc = 0x278634u;
label_278634:
    // 0x278634: 0x0  nop
    ctx->pc = 0x278634u;
    // NOP
label_278638:
    // 0x278638: 0x92460004  lbu         $a2, 0x4($s2)
    ctx->pc = 0x278638u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_27863c:
    // 0x27863c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x27863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278640:
    // 0x278640: 0xc09d524  jal         func_275490
label_278644:
    if (ctx->pc == 0x278644u) {
        ctx->pc = 0x278644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278640u;
        // 0x278644: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278648u;
        goto label_278648;
    }
    ctx->pc = 0x278640u;
    SET_GPR_U32(ctx, 31, 0x278648u);
    ctx->pc = 0x278644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278640u;
    // 0x278644: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x278640u, 0x278648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278648u;
label_278648:
    // 0x278648: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x278648u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_27864c:
    // 0x27864c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27864cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278650:
    // 0x278650: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278654:
    // 0x278654: 0xc09d524  jal         func_275490
label_278658:
    if (ctx->pc == 0x278658u) {
        ctx->pc = 0x278658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278654u;
        // 0x278658: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27865Cu;
        goto label_27865c;
    }
    ctx->pc = 0x278654u;
    SET_GPR_U32(ctx, 31, 0x27865Cu);
    ctx->pc = 0x278658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278654u;
    // 0x278658: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x278654u, 0x27865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27865Cu;
label_27865c:
    // 0x27865c: 0x92460006  lbu         $a2, 0x6($s2)
    ctx->pc = 0x27865cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_278660:
    // 0x278660: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x278660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278664:
    // 0x278664: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278668:
    // 0x278668: 0xc09d524  jal         func_275490
label_27866c:
    if (ctx->pc == 0x27866Cu) {
        ctx->pc = 0x27866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278668u;
        // 0x27866c: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278670u;
        goto label_278670;
    }
    ctx->pc = 0x278668u;
    SET_GPR_U32(ctx, 31, 0x278670u);
    ctx->pc = 0x27866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278668u;
    // 0x27866c: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x278668u, 0x278670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278670u;
label_278670:
    // 0x278670: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x278670u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_278674:
    // 0x278674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x278674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278678:
    // 0x278678: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_27867c:
    // 0x27867c: 0xc09d524  jal         func_275490
label_278680:
    if (ctx->pc == 0x278680u) {
        ctx->pc = 0x278680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27867Cu;
        // 0x278680: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278684u;
        goto label_278684;
    }
    ctx->pc = 0x27867Cu;
    SET_GPR_U32(ctx, 31, 0x278684u);
    ctx->pc = 0x278680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27867Cu;
    // 0x278680: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x27867Cu, 0x278684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278684u;
label_278684:
    // 0x278684: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x278684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_278688:
    // 0x278688: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x278688u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27868c:
    // 0x27868c: 0x8fa900b4  lw          $t1, 0xB4($sp)
    ctx->pc = 0x27868cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_278690:
    // 0x278690: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x278690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_278694:
    // 0x278694: 0x8faa00b0  lw          $t2, 0xB0($sp)
    ctx->pc = 0x278694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_278698:
    // 0x278698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27869c:
    // 0x27869c: 0x8fab00ac  lw          $t3, 0xAC($sp)
    ctx->pc = 0x27869cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2786a0:
    // 0x2786a0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2786a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2786a4:
    // 0x2786a4: 0xc096b38  jal         func_25ACE0
label_2786a8:
    if (ctx->pc == 0x2786A8u) {
        ctx->pc = 0x2786A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786A4u;
        // 0x2786a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786ACu;
        goto label_2786ac;
    }
    ctx->pc = 0x2786A4u;
    SET_GPR_U32(ctx, 31, 0x2786ACu);
    ctx->pc = 0x2786A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786A4u;
    // 0x2786a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2786A4u, 0x2786ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786ACu;
label_2786ac:
    // 0x2786ac: 0x92630064  lbu         $v1, 0x64($s3)
    ctx->pc = 0x2786acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
label_2786b0:
    // 0x2786b0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2786b4:
    // 0x2786b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2786b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_2786b8:
    // 0x2786b8: 0xa2630064  sb          $v1, 0x64($s3)
    ctx->pc = 0x2786b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 3));
label_2786bc:
    // 0x2786bc: 0xa677005a  sh          $s7, 0x5A($s3)
    ctx->pc = 0x2786bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 23));
label_2786c0:
    // 0x2786c0: 0xa6770058  sh          $s7, 0x58($s3)
    ctx->pc = 0x2786c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 23));
label_2786c4:
    // 0x2786c4: 0xa6770056  sh          $s7, 0x56($s3)
    ctx->pc = 0x2786c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 23));
label_2786c8:
    // 0x2786c8: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x2786c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_2786cc:
    // 0x2786cc: 0xae7200a0  sw          $s2, 0xA0($s3)
    ctx->pc = 0x2786ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 18));
label_2786d0:
    // 0x2786d0: 0xa66000ac  sh          $zero, 0xAC($s3)
    ctx->pc = 0x2786d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 172), (uint16_t)GPR_U32(ctx, 0));
label_2786d4:
    // 0x2786d4: 0xa66200ae  sh          $v0, 0xAE($s3)
    ctx->pc = 0x2786d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 174), (uint16_t)GPR_U32(ctx, 2));
label_2786d8:
    // 0x2786d8: 0xa66000b4  sh          $zero, 0xB4($s3)
    ctx->pc = 0x2786d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 180), (uint16_t)GPR_U32(ctx, 0));
label_2786dc:
    // 0x2786dc: 0xae6000b8  sw          $zero, 0xB8($s3)
    ctx->pc = 0x2786dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 0));
label_2786e0:
    // 0x2786e0: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x2786e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_2786e4:
    // 0x2786e4: 0xa26000b7  sb          $zero, 0xB7($s3)
    ctx->pc = 0x2786e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 183), (uint8_t)GPR_U32(ctx, 0));
label_2786e8:
    // 0x2786e8: 0xae6000c0  sw          $zero, 0xC0($s3)
    ctx->pc = 0x2786e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 0));
label_2786ec:
    // 0x2786ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2786f0:
    if (ctx->pc == 0x2786F0u) {
        ctx->pc = 0x2786F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786ECu;
        // 0x2786f0: 0xa66000c4  sh          $zero, 0xC4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786F4u;
        goto label_2786f4;
    }
    ctx->pc = 0x2786ECu;
    {
        const bool branch_taken_0x2786ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786ECu;
        // 0x2786f0: 0xa66000c4  sh          $zero, 0xC4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786ec) {
            ctx->pc = 0x278700u;
            goto label_278700;
        }
    }
    ctx->pc = 0x2786F4u;
label_2786f4:
    // 0x2786f4: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x2786f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_2786f8:
    // 0x2786f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2786fc:
    if (ctx->pc == 0x2786FCu) {
        ctx->pc = 0x2786FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786F8u;
        // 0x2786fc: 0xa26200b0  sb          $v0, 0xB0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 176), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278700u;
        goto label_278700;
    }
    ctx->pc = 0x2786F8u;
    {
        const bool branch_taken_0x2786f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786F8u;
        // 0x2786fc: 0xa26200b0  sb          $v0, 0xB0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 176), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786f8) {
            ctx->pc = 0x278708u;
            goto label_278708;
        }
    }
    ctx->pc = 0x278700u;
label_278700:
    // 0x278700: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x278700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_278704:
    // 0x278704: 0xa26200b0  sb          $v0, 0xB0($s3)
    ctx->pc = 0x278704u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 176), (uint8_t)GPR_U32(ctx, 2));
label_278708:
    // 0x278708: 0x7a630040  lq          $v1, 0x40($s3)
    ctx->pc = 0x278708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_27870c:
    // 0x27870c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_278710:
    // 0x278710: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x278710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_278714:
    // 0x278714: 0x7e630070  sq          $v1, 0x70($s3)
    ctx->pc = 0x278714u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), GPR_VEC(ctx, 3));
label_278718:
    // 0x278718: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x278718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_27871c:
    // 0x27871c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x27871cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_278720:
    // 0x278720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_278724:
    // 0x278724: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x278724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_278728:
    // 0x278728: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x278728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_27872c:
    // 0x27872c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x27872cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_278730:
    // 0x278730: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_278734:
    if (ctx->pc == 0x278734u) {
        ctx->pc = 0x278734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278730u;
        // 0x278734: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278738u;
        goto label_278738;
    }
    ctx->pc = 0x278730u;
    {
        const bool branch_taken_0x278730 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x278734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278730u;
        // 0x278734: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278730) {
            ctx->pc = 0x278744u;
            goto label_278744;
        }
    }
    ctx->pc = 0x278738u;
label_278738:
    // 0x278738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27873c:
    // 0x27873c: 0x10000007  b           . + 4 + (0x7 << 2)
label_278740:
    if (ctx->pc == 0x278740u) {
        ctx->pc = 0x278740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27873Cu;
        // 0x278740: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278744u;
        goto label_278744;
    }
    ctx->pc = 0x27873Cu;
    {
        const bool branch_taken_0x27873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27873Cu;
        // 0x278740: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27873c) {
            ctx->pc = 0x27875Cu;
            goto label_27875c;
        }
    }
    ctx->pc = 0x278744u;
label_278744:
    // 0x278744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_278748:
    // 0x278748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x278748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27874c:
    // 0x27874c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27874cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278750:
    // 0x278750: 0x0  nop
    ctx->pc = 0x278750u;
    // NOP
label_278754:
    // 0x278754: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x278754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_278758:
    // 0x278758: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x278758u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27875c:
    // 0x27875c: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x27875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_278760:
    // 0x278760: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x278760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_278764:
    // 0x278764: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x278764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_278768:
    // 0x278768: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x278768u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27876c:
    // 0x27876c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27876cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_278770:
    // 0x278770: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x278770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_278774:
    // 0x278774: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x278774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_278778:
    // 0x278778: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x278778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_27877c:
    // 0x27877c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27877cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_278780:
    // 0x278780: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x278780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_278784:
    // 0x278784: 0xe6600080  swc1        $f0, 0x80($s3)
    ctx->pc = 0x278784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_278788:
    // 0x278788: 0xae630084  sw          $v1, 0x84($s3)
    ctx->pc = 0x278788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
label_27878c:
    // 0x27878c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x27878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_278790:
    // 0x278790: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x278790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_278794:
    // 0x278794: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_278798:
    // 0x278798: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x278798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_27879c:
    // 0x27879c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x27879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_2787a0:
    // 0x2787a0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2787a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_2787a4:
    // 0x2787a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2787a8:
    if (ctx->pc == 0x2787A8u) {
        ctx->pc = 0x2787A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787A4u;
        // 0x2787a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787ACu;
        goto label_2787ac;
    }
    ctx->pc = 0x2787A4u;
    {
        const bool branch_taken_0x2787a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2787A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787A4u;
        // 0x2787a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787a4) {
            ctx->pc = 0x2787B8u;
            goto label_2787b8;
        }
    }
    ctx->pc = 0x2787ACu;
label_2787ac:
    // 0x2787ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2787acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2787b0:
    // 0x2787b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2787b4:
    if (ctx->pc == 0x2787B4u) {
        ctx->pc = 0x2787B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787B0u;
        // 0x2787b4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787B8u;
        goto label_2787b8;
    }
    ctx->pc = 0x2787B0u;
    {
        const bool branch_taken_0x2787b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2787B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787B0u;
        // 0x2787b4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787b0) {
            ctx->pc = 0x2787D0u;
            goto label_2787d0;
        }
    }
    ctx->pc = 0x2787B8u;
label_2787b8:
    // 0x2787b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2787b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2787bc:
    // 0x2787bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2787bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2787c0:
    // 0x2787c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2787c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2787c4:
    // 0x2787c4: 0x0  nop
    ctx->pc = 0x2787c4u;
    // NOP
label_2787c8:
    // 0x2787c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2787c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2787cc:
    // 0x2787cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2787ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2787d0:
    // 0x2787d0: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x2787d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_2787d4:
    // 0x2787d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2787d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2787d8:
    // 0x2787d8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2787d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_2787dc:
    // 0x2787dc: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x2787dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_2787e0:
    // 0x2787e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2787e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2787e4:
    // 0x2787e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2787e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2787e8:
    // 0x2787e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2787e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2787ec:
    // 0x2787ec: 0x0  nop
    ctx->pc = 0x2787ecu;
    // NOP
label_2787f0:
    // 0x2787f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2787f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2787f4:
    // 0x2787f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2787f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2787f8:
    // 0x2787f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2787f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2787fc:
    // 0x2787fc: 0xe6600088  swc1        $f0, 0x88($s3)
    ctx->pc = 0x2787fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
label_278800:
    // 0x278800: 0xc0766dc  jal         func_1D9B70
label_278804:
    if (ctx->pc == 0x278804u) {
        ctx->pc = 0x278804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278800u;
        // 0x278804: 0xae62008c  sw          $v0, 0x8C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278808u;
        goto label_278808;
    }
    ctx->pc = 0x278800u;
    SET_GPR_U32(ctx, 31, 0x278808u);
    ctx->pc = 0x278804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278800u;
    // 0x278804: 0xae62008c  sw          $v0, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x278800u, 0x278808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278808u;
label_278808:
    // 0x278808: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x278808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_27880c:
    // 0x27880c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_278810:
    // 0x278810: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x278810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_278814:
    // 0x278814: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x278814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_278818:
    // 0x278818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27881c:
    // 0x27881c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x27881cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_278820:
    // 0x278820: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x278820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_278824:
    // 0x278824: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x278824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_278828:
    // 0x278828: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_27882c:
    if (ctx->pc == 0x27882Cu) {
        ctx->pc = 0x27882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278828u;
        // 0x27882c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278830u;
        goto label_278830;
    }
    ctx->pc = 0x278828u;
    {
        const bool branch_taken_0x278828 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278828u;
        // 0x27882c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278828) {
            ctx->pc = 0x27883Cu;
            goto label_27883c;
        }
    }
    ctx->pc = 0x278830u;
label_278830:
    // 0x278830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278834:
    // 0x278834: 0x10000007  b           . + 4 + (0x7 << 2)
label_278838:
    if (ctx->pc == 0x278838u) {
        ctx->pc = 0x278838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278834u;
        // 0x278838: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27883Cu;
        goto label_27883c;
    }
    ctx->pc = 0x278834u;
    {
        const bool branch_taken_0x278834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278834u;
        // 0x278838: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278834) {
            ctx->pc = 0x278854u;
            goto label_278854;
        }
    }
    ctx->pc = 0x27883Cu;
label_27883c:
    // 0x27883c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_278840:
    // 0x278840: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x278840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_278844:
    // 0x278844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x278844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278848:
    // 0x278848: 0x0  nop
    ctx->pc = 0x278848u;
    // NOP
label_27884c:
    // 0x27884c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x27884cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_278850:
    // 0x278850: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x278850u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_278854:
    // 0x278854: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x278854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_278858:
    // 0x278858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x278858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27885c:
    // 0x27885c: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x27885cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_278860:
    // 0x278860: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x278860u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_278864:
    // 0x278864: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x278864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_278868:
    // 0x278868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27886c:
    // 0x27886c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27886cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_278870:
    // 0x278870: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x278870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_278874:
    // 0x278874: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x278874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_278878:
    // 0x278878: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x278878u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27887c:
    // 0x27887c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27887cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_278880:
    // 0x278880: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x278880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278884:
    // 0x278884: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x278884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_278888:
    // 0x278888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x278888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27888c:
    // 0x27888c: 0xe6600090  swc1        $f0, 0x90($s3)
    ctx->pc = 0x27888cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
label_278890:
    // 0x278890: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x278890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_278894:
    // 0x278894: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x278894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_278898:
    // 0x278898: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27889c:
    // 0x27889c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x27889cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_2788a0:
    // 0x2788a0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2788a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_2788a4:
    // 0x2788a4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2788a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_2788a8:
    // 0x2788a8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2788ac:
    if (ctx->pc == 0x2788ACu) {
        ctx->pc = 0x2788ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788A8u;
        // 0x2788ac: 0xc6630044  lwc1        $f3, 0x44($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788B0u;
        goto label_2788b0;
    }
    ctx->pc = 0x2788A8u;
    {
        const bool branch_taken_0x2788a8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2788ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788A8u;
        // 0x2788ac: 0xc6630044  lwc1        $f3, 0x44($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788a8) {
            ctx->pc = 0x2788BCu;
            goto label_2788bc;
        }
    }
    ctx->pc = 0x2788B0u;
label_2788b0:
    // 0x2788b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2788b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2788b4:
    // 0x2788b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2788b8:
    if (ctx->pc == 0x2788B8u) {
        ctx->pc = 0x2788B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B4u;
        // 0x2788b8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788BCu;
        goto label_2788bc;
    }
    ctx->pc = 0x2788B4u;
    {
        const bool branch_taken_0x2788b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B4u;
        // 0x2788b8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788b4) {
            ctx->pc = 0x2788D8u;
            goto label_2788d8;
        }
    }
    ctx->pc = 0x2788BCu;
label_2788bc:
    // 0x2788bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2788bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2788c0:
    // 0x2788c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2788c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2788c4:
    // 0x2788c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2788c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2788c8:
    // 0x2788c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2788c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2788cc:
    // 0x2788cc: 0x0  nop
    ctx->pc = 0x2788ccu;
    // NOP
label_2788d0:
    // 0x2788d0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2788d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2788d4:
    // 0x2788d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2788d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2788d8:
    // 0x2788d8: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x2788d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_2788dc:
    // 0x2788dc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2788dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_2788e0:
    // 0x2788e0: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2788e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_2788e4:
    // 0x2788e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2788e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2788e8:
    // 0x2788e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2788ec:
    // 0x2788ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2788ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2788f0:
    // 0x2788f0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2788f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_2788f4:
    // 0x2788f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2788f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2788f8:
    // 0x2788f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2788f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2788fc:
    // 0x2788fc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2788fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_278900:
    // 0x278900: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x278900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_278904:
    // 0x278904: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_278908:
    // 0x278908: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x278908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27890c:
    // 0x27890c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_278910:
    // 0x278910: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x278910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_278914:
    // 0x278914: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x278914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_278918:
    // 0x278918: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x278918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_27891c:
    // 0x27891c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_278920:
    if (ctx->pc == 0x278920u) {
        ctx->pc = 0x278920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27891Cu;
        // 0x278920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278924u;
        goto label_278924;
    }
    ctx->pc = 0x27891Cu;
    {
        const bool branch_taken_0x27891c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x278920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27891Cu;
        // 0x278920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27891c) {
            ctx->pc = 0x278930u;
            goto label_278930;
        }
    }
    ctx->pc = 0x278924u;
label_278924:
    // 0x278924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278928:
    // 0x278928: 0x10000007  b           . + 4 + (0x7 << 2)
label_27892c:
    if (ctx->pc == 0x27892Cu) {
        ctx->pc = 0x27892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278928u;
        // 0x27892c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278930u;
        goto label_278930;
    }
    ctx->pc = 0x278928u;
    {
        const bool branch_taken_0x278928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278928u;
        // 0x27892c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278928) {
            ctx->pc = 0x278948u;
            goto label_278948;
        }
    }
    ctx->pc = 0x278930u;
label_278930:
    // 0x278930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_278934:
    // 0x278934: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x278934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_278938:
    // 0x278938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x278938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27893c:
    // 0x27893c: 0x0  nop
    ctx->pc = 0x27893cu;
    // NOP
label_278940:
    // 0x278940: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x278940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_278944:
    // 0x278944: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x278944u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_278948:
    // 0x278948: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x278948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_27894c:
    // 0x27894c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27894cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_278950:
    // 0x278950: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x278950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_278954:
    // 0x278954: 0x26650074  addiu       $a1, $s3, 0x74
    ctx->pc = 0x278954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
label_278958:
    // 0x278958: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x278958u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27895c:
    // 0x27895c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_278960:
    // 0x278960: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_278964:
    // 0x278964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278968:
    // 0x278968: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x278968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_27896c:
    // 0x27896c: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x27896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_278970:
    // 0x278970: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x278970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
label_278974:
    // 0x278974: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x278974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_278978:
    // 0x278978: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x278978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27897c:
    // 0x27897c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x27897cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_278980:
    // 0x278980: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x278980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_278984:
    // 0x278984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x278984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_278988:
    // 0x278988: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x278988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_27898c:
    // 0x27898c: 0xae63009c  sw          $v1, 0x9C($s3)
    ctx->pc = 0x27898cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 3));
label_278990:
    // 0x278990: 0xc096cb8  jal         func_25B2E0
label_278994:
    if (ctx->pc == 0x278994u) {
        ctx->pc = 0x278994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278990u;
        // 0x278994: 0xae6200a8  sw          $v0, 0xA8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278998u;
        goto label_278998;
    }
    ctx->pc = 0x278990u;
    SET_GPR_U32(ctx, 31, 0x278998u);
    ctx->pc = 0x278994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278990u;
    // 0x278994: 0xae6200a8  sw          $v0, 0xA8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x278990u, 0x278998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278998u;
label_278998:
    // 0x278998: 0xae7100d0  sw          $s1, 0xD0($s3)
    ctx->pc = 0x278998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 17));
label_27899c:
    // 0x27899c: 0xae7500d4  sw          $s5, 0xD4($s3)
    ctx->pc = 0x27899cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 21));
label_2789a0:
    // 0x2789a0: 0xae7000d8  sw          $s0, 0xD8($s3)
    ctx->pc = 0x2789a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 16));
label_2789a4:
    // 0x2789a4: 0xae7600dc  sw          $s6, 0xDC($s3)
    ctx->pc = 0x2789a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 22));
label_2789a8:
    // 0x2789a8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2789ac:
    if (ctx->pc == 0x2789ACu) {
        ctx->pc = 0x2789ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789A8u;
        // 0x2789ac: 0xae600120  sw          $zero, 0x120($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789B0u;
        goto label_2789b0;
    }
    ctx->pc = 0x2789A8u;
    {
        const bool branch_taken_0x2789a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789A8u;
        // 0x2789ac: 0xae600120  sw          $zero, 0x120($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789a8) {
            ctx->pc = 0x2789D0u;
            goto label_2789d0;
        }
    }
    ctx->pc = 0x2789B0u;
label_2789b0:
    // 0x2789b0: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x2789b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2789b4:
    // 0x2789b4: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x2789b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_2789b8:
    // 0x2789b8: 0xc074350  jal         func_1D0D40
label_2789bc:
    if (ctx->pc == 0x2789BCu) {
        ctx->pc = 0x2789BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789B8u;
        // 0x2789bc: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789C0u;
        goto label_2789c0;
    }
    ctx->pc = 0x2789B8u;
    SET_GPR_U32(ctx, 31, 0x2789C0u);
    ctx->pc = 0x2789BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789B8u;
    // 0x2789bc: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x2789B8u, 0x2789C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789C0u;
label_2789c0:
    // 0x2789c0: 0x92250006  lbu         $a1, 0x6($s1)
    ctx->pc = 0x2789c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2789c4:
    // 0x2789c4: 0x92260007  lbu         $a2, 0x7($s1)
    ctx->pc = 0x2789c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2789c8:
    // 0x2789c8: 0xc074378  jal         func_1D0DE0
label_2789cc:
    if (ctx->pc == 0x2789CCu) {
        ctx->pc = 0x2789CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789C8u;
        // 0x2789cc: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789D0u;
        goto label_2789d0;
    }
    ctx->pc = 0x2789C8u;
    SET_GPR_U32(ctx, 31, 0x2789D0u);
    ctx->pc = 0x2789CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789C8u;
    // 0x2789cc: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x2789C8u, 0x2789D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789D0u;
label_2789d0:
    // 0x2789d0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_2789d4:
    if (ctx->pc == 0x2789D4u) {
        ctx->pc = 0x2789D8u;
        goto label_2789d8;
    }
    ctx->pc = 0x2789D0u;
    {
        const bool branch_taken_0x2789d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2789d0) {
            ctx->pc = 0x2789F8u;
            goto label_2789f8;
        }
    }
    ctx->pc = 0x2789D8u;
label_2789d8:
    // 0x2789d8: 0x92a50004  lbu         $a1, 0x4($s5)
    ctx->pc = 0x2789d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_2789dc:
    // 0x2789dc: 0x92a60005  lbu         $a2, 0x5($s5)
    ctx->pc = 0x2789dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_2789e0:
    // 0x2789e0: 0xc074350  jal         func_1D0D40
label_2789e4:
    if (ctx->pc == 0x2789E4u) {
        ctx->pc = 0x2789E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789E0u;
        // 0x2789e4: 0x266400f0  addiu       $a0, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789E8u;
        goto label_2789e8;
    }
    ctx->pc = 0x2789E0u;
    SET_GPR_U32(ctx, 31, 0x2789E8u);
    ctx->pc = 0x2789E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789E0u;
    // 0x2789e4: 0x266400f0  addiu       $a0, $s3, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x2789E0u, 0x2789E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789E8u;
label_2789e8:
    // 0x2789e8: 0x92a50006  lbu         $a1, 0x6($s5)
    ctx->pc = 0x2789e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_2789ec:
    // 0x2789ec: 0x92a60007  lbu         $a2, 0x7($s5)
    ctx->pc = 0x2789ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
label_2789f0:
    // 0x2789f0: 0xc074378  jal         func_1D0DE0
label_2789f4:
    if (ctx->pc == 0x2789F4u) {
        ctx->pc = 0x2789F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789F0u;
        // 0x2789f4: 0x266400f0  addiu       $a0, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789F8u;
        goto label_2789f8;
    }
    ctx->pc = 0x2789F0u;
    SET_GPR_U32(ctx, 31, 0x2789F8u);
    ctx->pc = 0x2789F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789F0u;
    // 0x2789f4: 0x266400f0  addiu       $a0, $s3, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x2789F0u, 0x2789F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789F8u;
label_2789f8:
    // 0x2789f8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2789fc:
    if (ctx->pc == 0x2789FCu) {
        ctx->pc = 0x278A00u;
        goto label_278a00;
    }
    ctx->pc = 0x2789F8u;
    {
        const bool branch_taken_0x2789f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2789f8) {
            ctx->pc = 0x278A78u;
            goto label_278a78;
        }
    }
    ctx->pc = 0x278A00u;
label_278a00:
    // 0x278a00: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x278a00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_278a04:
    // 0x278a04: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x278a04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_278a08:
    // 0x278a08: 0xc074350  jal         func_1D0D40
label_278a0c:
    if (ctx->pc == 0x278A0Cu) {
        ctx->pc = 0x278A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A08u;
        // 0x278a0c: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A10u;
        goto label_278a10;
    }
    ctx->pc = 0x278A08u;
    SET_GPR_U32(ctx, 31, 0x278A10u);
    ctx->pc = 0x278A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A08u;
    // 0x278a0c: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x278A08u, 0x278A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A10u;
label_278a10:
    // 0x278a10: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x278a10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_278a14:
    // 0x278a14: 0x92060007  lbu         $a2, 0x7($s0)
    ctx->pc = 0x278a14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_278a18:
    // 0x278a18: 0xc074378  jal         func_1D0DE0
label_278a1c:
    if (ctx->pc == 0x278A1Cu) {
        ctx->pc = 0x278A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A18u;
        // 0x278a1c: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A20u;
        goto label_278a20;
    }
    ctx->pc = 0x278A18u;
    SET_GPR_U32(ctx, 31, 0x278A20u);
    ctx->pc = 0x278A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A18u;
    // 0x278a1c: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x278A18u, 0x278A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A20u;
label_278a20:
    // 0x278a20: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x278a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_278a24:
    // 0x278a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x278a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_278a28:
    // 0x278a28: 0xa6620110  sh          $v0, 0x110($s3)
    ctx->pc = 0x278a28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 272), (uint16_t)GPR_U32(ctx, 2));
label_278a2c:
    // 0x278a2c: 0xa6600112  sh          $zero, 0x112($s3)
    ctx->pc = 0x278a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 274), (uint16_t)GPR_U32(ctx, 0));
label_278a30:
    // 0x278a30: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x278a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_278a34:
    // 0x278a34: 0xa6620114  sh          $v0, 0x114($s3)
    ctx->pc = 0x278a34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 276), (uint16_t)GPR_U32(ctx, 2));
label_278a38:
    // 0x278a38: 0x86620110  lh          $v0, 0x110($s3)
    ctx->pc = 0x278a38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
label_278a3c:
    // 0x278a3c: 0xa6620116  sh          $v0, 0x116($s3)
    ctx->pc = 0x278a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 278), (uint16_t)GPR_U32(ctx, 2));
label_278a40:
    // 0x278a40: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x278a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_278a44:
    // 0x278a44: 0xc0741a4  jal         func_1D0690
label_278a48:
    if (ctx->pc == 0x278A48u) {
        ctx->pc = 0x278A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A44u;
        // 0x278a48: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A4Cu;
        goto label_278a4c;
    }
    ctx->pc = 0x278A44u;
    SET_GPR_U32(ctx, 31, 0x278A4Cu);
    ctx->pc = 0x278A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A44u;
    // 0x278a48: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x278A44u, 0x278A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A4Cu;
label_278a4c:
    // 0x278a4c: 0xae620118  sw          $v0, 0x118($s3)
    ctx->pc = 0x278a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
label_278a50:
    // 0x278a50: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x278a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_278a54:
    // 0x278a54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_278a58:
    if (ctx->pc == 0x278A58u) {
        ctx->pc = 0x278A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A54u;
        // 0x278a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A5Cu;
        goto label_278a5c;
    }
    ctx->pc = 0x278A54u;
    {
        const bool branch_taken_0x278a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A54u;
        // 0x278a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a54) {
            ctx->pc = 0x278A78u;
            goto label_278a78;
        }
    }
    ctx->pc = 0x278A5Cu;
label_278a5c:
    // 0x278a5c: 0xc074268  jal         func_1D09A0
label_278a60:
    if (ctx->pc == 0x278A60u) {
        ctx->pc = 0x278A64u;
        goto label_278a64;
    }
    ctx->pc = 0x278A5Cu;
    SET_GPR_U32(ctx, 31, 0x278A64u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x278A5Cu, 0x278A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A64u;
label_278a64:
    // 0x278a64: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278a68:
    // 0x278a68: 0xc09d4d8  jal         func_275360
label_278a6c:
    if (ctx->pc == 0x278A6Cu) {
        ctx->pc = 0x278A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A68u;
        // 0x278a6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A70u;
        goto label_278a70;
    }
    ctx->pc = 0x278A68u;
    SET_GPR_U32(ctx, 31, 0x278A70u);
    ctx->pc = 0x278A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A68u;
    // 0x278a6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x278A68u, 0x278A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A70u;
label_278a70:
    // 0x278a70: 0x1000002f  b           . + 4 + (0x2F << 2)
label_278a74:
    if (ctx->pc == 0x278A74u) {
        ctx->pc = 0x278A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A70u;
        // 0x278a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A78u;
        goto label_278a78;
    }
    ctx->pc = 0x278A70u;
    {
        const bool branch_taken_0x278a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A70u;
        // 0x278a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a70) {
            ctx->pc = 0x278B30u;
            goto label_278b30;
        }
    }
    ctx->pc = 0x278A78u;
label_278a78:
    // 0x278a78: 0x12c0001f  beqz        $s6, . + 4 + (0x1F << 2)
label_278a7c:
    if (ctx->pc == 0x278A7Cu) {
        ctx->pc = 0x278A80u;
        goto label_278a80;
    }
    ctx->pc = 0x278A78u;
    {
        const bool branch_taken_0x278a78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x278a78) {
            ctx->pc = 0x278AF8u;
            goto label_278af8;
        }
    }
    ctx->pc = 0x278A80u;
label_278a80:
    // 0x278a80: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x278a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_278a84:
    // 0x278a84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x278a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_278a88:
    // 0x278a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_278a8c:
    // 0x278a8c: 0xc0741a4  jal         func_1D0690
label_278a90:
    if (ctx->pc == 0x278A90u) {
        ctx->pc = 0x278A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A8Cu;
        // 0x278a90: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A94u;
        goto label_278a94;
    }
    ctx->pc = 0x278A8Cu;
    SET_GPR_U32(ctx, 31, 0x278A94u);
    ctx->pc = 0x278A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A8Cu;
    // 0x278a90: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x278A8Cu, 0x278A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A94u;
label_278a94:
    // 0x278a94: 0xae62011c  sw          $v0, 0x11C($s3)
    ctx->pc = 0x278a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
label_278a98:
    // 0x278a98: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x278a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_278a9c:
    // 0x278a9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_278aa0:
    if (ctx->pc == 0x278AA0u) {
        ctx->pc = 0x278AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A9Cu;
        // 0x278aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AA4u;
        goto label_278aa4;
    }
    ctx->pc = 0x278A9Cu;
    {
        const bool branch_taken_0x278a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A9Cu;
        // 0x278aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a9c) {
            ctx->pc = 0x278AC0u;
            goto label_278ac0;
        }
    }
    ctx->pc = 0x278AA4u;
label_278aa4:
    // 0x278aa4: 0xc074268  jal         func_1D09A0
label_278aa8:
    if (ctx->pc == 0x278AA8u) {
        ctx->pc = 0x278AACu;
        goto label_278aac;
    }
    ctx->pc = 0x278AA4u;
    SET_GPR_U32(ctx, 31, 0x278AACu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x278AA4u, 0x278AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AACu;
label_278aac:
    // 0x278aac: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278ab0:
    // 0x278ab0: 0xc09d4d8  jal         func_275360
label_278ab4:
    if (ctx->pc == 0x278AB4u) {
        ctx->pc = 0x278AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AB0u;
        // 0x278ab4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AB8u;
        goto label_278ab8;
    }
    ctx->pc = 0x278AB0u;
    SET_GPR_U32(ctx, 31, 0x278AB8u);
    ctx->pc = 0x278AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278AB0u;
    // 0x278ab4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x278AB0u, 0x278AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AB8u;
label_278ab8:
    // 0x278ab8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_278abc:
    if (ctx->pc == 0x278ABCu) {
        ctx->pc = 0x278ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AB8u;
        // 0x278abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AC0u;
        goto label_278ac0;
    }
    ctx->pc = 0x278AB8u;
    {
        const bool branch_taken_0x278ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AB8u;
        // 0x278abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ab8) {
            ctx->pc = 0x278B30u;
            goto label_278b30;
        }
    }
    ctx->pc = 0x278AC0u;
label_278ac0:
    // 0x278ac0: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x278ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_278ac4:
    // 0x278ac4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x278ac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_278ac8:
    // 0x278ac8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_278acc:
    if (ctx->pc == 0x278ACCu) {
        ctx->pc = 0x278ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AC8u;
        // 0x278acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AD0u;
        goto label_278ad0;
    }
    ctx->pc = 0x278AC8u;
    {
        const bool branch_taken_0x278ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AC8u;
        // 0x278acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ac8) {
            ctx->pc = 0x278AF8u;
            goto label_278af8;
        }
    }
    ctx->pc = 0x278AD0u;
label_278ad0:
    // 0x278ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x278ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278ad4:
    // 0x278ad4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x278ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_278ad8:
    // 0x278ad8: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x278ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_278adc:
    // 0x278adc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x278adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_278ae0:
    // 0x278ae0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x278ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_278ae4:
    // 0x278ae4: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x278ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_278ae8:
    // 0x278ae8: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x278ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_278aec:
    // 0x278aec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x278aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_278af0:
    // 0x278af0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_278af4:
    if (ctx->pc == 0x278AF4u) {
        ctx->pc = 0x278AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AF0u;
        // 0x278af4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AF8u;
        goto label_278af8;
    }
    ctx->pc = 0x278AF0u;
    {
        const bool branch_taken_0x278af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AF0u;
        // 0x278af4: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278af0) {
            ctx->pc = 0x278AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278ad8;
        }
    }
    ctx->pc = 0x278AF8u;
label_278af8:
    // 0x278af8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278afc:
    // 0x278afc: 0xc09d92c  jal         func_2764B0
label_278b00:
    if (ctx->pc == 0x278B00u) {
        ctx->pc = 0x278B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AFCu;
        // 0x278b00: 0xa27400b3  sb          $s4, 0xB3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 179), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B04u;
        goto label_278b04;
    }
    ctx->pc = 0x278AFCu;
    SET_GPR_U32(ctx, 31, 0x278B04u);
    ctx->pc = 0x278B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278AFCu;
    // 0x278b00: 0xa27400b3  sb          $s4, 0xB3($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 179), (uint8_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2764B0u, 0x278AFCu, 0x278B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B04u;
label_278b04:
    // 0x278b04: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x278b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_278b08:
    // 0x278b08: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278b0c:
    // 0x278b0c: 0xc09d4d8  jal         func_275360
label_278b10:
    if (ctx->pc == 0x278B10u) {
        ctx->pc = 0x278B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B0Cu;
        // 0x278b10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B14u;
        goto label_278b14;
    }
    ctx->pc = 0x278B0Cu;
    SET_GPR_U32(ctx, 31, 0x278B14u);
    ctx->pc = 0x278B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B0Cu;
    // 0x278b10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x278B0Cu, 0x278B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B14u;
label_278b14:
    // 0x278b14: 0x10000006  b           . + 4 + (0x6 << 2)
label_278b18:
    if (ctx->pc == 0x278B18u) {
        ctx->pc = 0x278B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B14u;
        // 0x278b18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B1Cu;
        goto label_278b1c;
    }
    ctx->pc = 0x278B14u;
    {
        const bool branch_taken_0x278b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B14u;
        // 0x278b18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b14) {
            ctx->pc = 0x278B30u;
            goto label_278b30;
        }
    }
    ctx->pc = 0x278B1Cu;
label_278b1c:
    // 0x278b1c: 0x0  nop
    ctx->pc = 0x278b1cu;
    // NOP
label_278b20:
    // 0x278b20: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x278b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_278b24:
    // 0x278b24: 0xc09d4d8  jal         func_275360
label_278b28:
    if (ctx->pc == 0x278B28u) {
        ctx->pc = 0x278B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B24u;
        // 0x278b28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B2Cu;
        goto label_278b2c;
    }
    ctx->pc = 0x278B24u;
    SET_GPR_U32(ctx, 31, 0x278B2Cu);
    ctx->pc = 0x278B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B24u;
    // 0x278b28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x278B24u, 0x278B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B2Cu;
label_278b2c:
    // 0x278b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x278b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278b30:
    // 0x278b30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x278b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_278b34:
    // 0x278b34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x278b34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_278b38:
    // 0x278b38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x278b38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_278b3c:
    // 0x278b3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x278b3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_278b40:
    // 0x278b40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x278b40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_278b44:
    // 0x278b44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x278b44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_278b48:
    // 0x278b48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x278b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_278b4c:
    // 0x278b4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x278b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_278b50:
    // 0x278b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_278b54:
    // 0x278b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_278b58:
    // 0x278b58: 0x3e00008  jr          $ra
label_278b5c:
    if (ctx->pc == 0x278B5Cu) {
        ctx->pc = 0x278B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B58u;
        // 0x278b5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B60u;
        goto label_fallthrough_0x278b58;
    }
    ctx->pc = 0x278B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B58u;
        // 0x278b5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x278b58:
    ctx->pc = 0x278B60u;
}
