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

// Function: sub_00183540
// Address: 0x183540 - 0x183e18
void sub_00183540_0x183540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183540_0x183540");
#endif

    switch (ctx->pc) {
        case 0x183540u: goto label_183540;
        case 0x183544u: goto label_183544;
        case 0x183548u: goto label_183548;
        case 0x18354cu: goto label_18354c;
        case 0x183550u: goto label_183550;
        case 0x183554u: goto label_183554;
        case 0x183558u: goto label_183558;
        case 0x18355cu: goto label_18355c;
        case 0x183560u: goto label_183560;
        case 0x183564u: goto label_183564;
        case 0x183568u: goto label_183568;
        case 0x18356cu: goto label_18356c;
        case 0x183570u: goto label_183570;
        case 0x183574u: goto label_183574;
        case 0x183578u: goto label_183578;
        case 0x18357cu: goto label_18357c;
        case 0x183580u: goto label_183580;
        case 0x183584u: goto label_183584;
        case 0x183588u: goto label_183588;
        case 0x18358cu: goto label_18358c;
        case 0x183590u: goto label_183590;
        case 0x183594u: goto label_183594;
        case 0x183598u: goto label_183598;
        case 0x18359cu: goto label_18359c;
        case 0x1835a0u: goto label_1835a0;
        case 0x1835a4u: goto label_1835a4;
        case 0x1835a8u: goto label_1835a8;
        case 0x1835acu: goto label_1835ac;
        case 0x1835b0u: goto label_1835b0;
        case 0x1835b4u: goto label_1835b4;
        case 0x1835b8u: goto label_1835b8;
        case 0x1835bcu: goto label_1835bc;
        case 0x1835c0u: goto label_1835c0;
        case 0x1835c4u: goto label_1835c4;
        case 0x1835c8u: goto label_1835c8;
        case 0x1835ccu: goto label_1835cc;
        case 0x1835d0u: goto label_1835d0;
        case 0x1835d4u: goto label_1835d4;
        case 0x1835d8u: goto label_1835d8;
        case 0x1835dcu: goto label_1835dc;
        case 0x1835e0u: goto label_1835e0;
        case 0x1835e4u: goto label_1835e4;
        case 0x1835e8u: goto label_1835e8;
        case 0x1835ecu: goto label_1835ec;
        case 0x1835f0u: goto label_1835f0;
        case 0x1835f4u: goto label_1835f4;
        case 0x1835f8u: goto label_1835f8;
        case 0x1835fcu: goto label_1835fc;
        case 0x183600u: goto label_183600;
        case 0x183604u: goto label_183604;
        case 0x183608u: goto label_183608;
        case 0x18360cu: goto label_18360c;
        case 0x183610u: goto label_183610;
        case 0x183614u: goto label_183614;
        case 0x183618u: goto label_183618;
        case 0x18361cu: goto label_18361c;
        case 0x183620u: goto label_183620;
        case 0x183624u: goto label_183624;
        case 0x183628u: goto label_183628;
        case 0x18362cu: goto label_18362c;
        case 0x183630u: goto label_183630;
        case 0x183634u: goto label_183634;
        case 0x183638u: goto label_183638;
        case 0x18363cu: goto label_18363c;
        case 0x183640u: goto label_183640;
        case 0x183644u: goto label_183644;
        case 0x183648u: goto label_183648;
        case 0x18364cu: goto label_18364c;
        case 0x183650u: goto label_183650;
        case 0x183654u: goto label_183654;
        case 0x183658u: goto label_183658;
        case 0x18365cu: goto label_18365c;
        case 0x183660u: goto label_183660;
        case 0x183664u: goto label_183664;
        case 0x183668u: goto label_183668;
        case 0x18366cu: goto label_18366c;
        case 0x183670u: goto label_183670;
        case 0x183674u: goto label_183674;
        case 0x183678u: goto label_183678;
        case 0x18367cu: goto label_18367c;
        case 0x183680u: goto label_183680;
        case 0x183684u: goto label_183684;
        case 0x183688u: goto label_183688;
        case 0x18368cu: goto label_18368c;
        case 0x183690u: goto label_183690;
        case 0x183694u: goto label_183694;
        case 0x183698u: goto label_183698;
        case 0x18369cu: goto label_18369c;
        case 0x1836a0u: goto label_1836a0;
        case 0x1836a4u: goto label_1836a4;
        case 0x1836a8u: goto label_1836a8;
        case 0x1836acu: goto label_1836ac;
        case 0x1836b0u: goto label_1836b0;
        case 0x1836b4u: goto label_1836b4;
        case 0x1836b8u: goto label_1836b8;
        case 0x1836bcu: goto label_1836bc;
        case 0x1836c0u: goto label_1836c0;
        case 0x1836c4u: goto label_1836c4;
        case 0x1836c8u: goto label_1836c8;
        case 0x1836ccu: goto label_1836cc;
        case 0x1836d0u: goto label_1836d0;
        case 0x1836d4u: goto label_1836d4;
        case 0x1836d8u: goto label_1836d8;
        case 0x1836dcu: goto label_1836dc;
        case 0x1836e0u: goto label_1836e0;
        case 0x1836e4u: goto label_1836e4;
        case 0x1836e8u: goto label_1836e8;
        case 0x1836ecu: goto label_1836ec;
        case 0x1836f0u: goto label_1836f0;
        case 0x1836f4u: goto label_1836f4;
        case 0x1836f8u: goto label_1836f8;
        case 0x1836fcu: goto label_1836fc;
        case 0x183700u: goto label_183700;
        case 0x183704u: goto label_183704;
        case 0x183708u: goto label_183708;
        case 0x18370cu: goto label_18370c;
        case 0x183710u: goto label_183710;
        case 0x183714u: goto label_183714;
        case 0x183718u: goto label_183718;
        case 0x18371cu: goto label_18371c;
        case 0x183720u: goto label_183720;
        case 0x183724u: goto label_183724;
        case 0x183728u: goto label_183728;
        case 0x18372cu: goto label_18372c;
        case 0x183730u: goto label_183730;
        case 0x183734u: goto label_183734;
        case 0x183738u: goto label_183738;
        case 0x18373cu: goto label_18373c;
        case 0x183740u: goto label_183740;
        case 0x183744u: goto label_183744;
        case 0x183748u: goto label_183748;
        case 0x18374cu: goto label_18374c;
        case 0x183750u: goto label_183750;
        case 0x183754u: goto label_183754;
        case 0x183758u: goto label_183758;
        case 0x18375cu: goto label_18375c;
        case 0x183760u: goto label_183760;
        case 0x183764u: goto label_183764;
        case 0x183768u: goto label_183768;
        case 0x18376cu: goto label_18376c;
        case 0x183770u: goto label_183770;
        case 0x183774u: goto label_183774;
        case 0x183778u: goto label_183778;
        case 0x18377cu: goto label_18377c;
        case 0x183780u: goto label_183780;
        case 0x183784u: goto label_183784;
        case 0x183788u: goto label_183788;
        case 0x18378cu: goto label_18378c;
        case 0x183790u: goto label_183790;
        case 0x183794u: goto label_183794;
        case 0x183798u: goto label_183798;
        case 0x18379cu: goto label_18379c;
        case 0x1837a0u: goto label_1837a0;
        case 0x1837a4u: goto label_1837a4;
        case 0x1837a8u: goto label_1837a8;
        case 0x1837acu: goto label_1837ac;
        case 0x1837b0u: goto label_1837b0;
        case 0x1837b4u: goto label_1837b4;
        case 0x1837b8u: goto label_1837b8;
        case 0x1837bcu: goto label_1837bc;
        case 0x1837c0u: goto label_1837c0;
        case 0x1837c4u: goto label_1837c4;
        case 0x1837c8u: goto label_1837c8;
        case 0x1837ccu: goto label_1837cc;
        case 0x1837d0u: goto label_1837d0;
        case 0x1837d4u: goto label_1837d4;
        case 0x1837d8u: goto label_1837d8;
        case 0x1837dcu: goto label_1837dc;
        case 0x1837e0u: goto label_1837e0;
        case 0x1837e4u: goto label_1837e4;
        case 0x1837e8u: goto label_1837e8;
        case 0x1837ecu: goto label_1837ec;
        case 0x1837f0u: goto label_1837f0;
        case 0x1837f4u: goto label_1837f4;
        case 0x1837f8u: goto label_1837f8;
        case 0x1837fcu: goto label_1837fc;
        case 0x183800u: goto label_183800;
        case 0x183804u: goto label_183804;
        case 0x183808u: goto label_183808;
        case 0x18380cu: goto label_18380c;
        case 0x183810u: goto label_183810;
        case 0x183814u: goto label_183814;
        case 0x183818u: goto label_183818;
        case 0x18381cu: goto label_18381c;
        case 0x183820u: goto label_183820;
        case 0x183824u: goto label_183824;
        case 0x183828u: goto label_183828;
        case 0x18382cu: goto label_18382c;
        case 0x183830u: goto label_183830;
        case 0x183834u: goto label_183834;
        case 0x183838u: goto label_183838;
        case 0x18383cu: goto label_18383c;
        case 0x183840u: goto label_183840;
        case 0x183844u: goto label_183844;
        case 0x183848u: goto label_183848;
        case 0x18384cu: goto label_18384c;
        case 0x183850u: goto label_183850;
        case 0x183854u: goto label_183854;
        case 0x183858u: goto label_183858;
        case 0x18385cu: goto label_18385c;
        case 0x183860u: goto label_183860;
        case 0x183864u: goto label_183864;
        case 0x183868u: goto label_183868;
        case 0x18386cu: goto label_18386c;
        case 0x183870u: goto label_183870;
        case 0x183874u: goto label_183874;
        case 0x183878u: goto label_183878;
        case 0x18387cu: goto label_18387c;
        case 0x183880u: goto label_183880;
        case 0x183884u: goto label_183884;
        case 0x183888u: goto label_183888;
        case 0x18388cu: goto label_18388c;
        case 0x183890u: goto label_183890;
        case 0x183894u: goto label_183894;
        case 0x183898u: goto label_183898;
        case 0x18389cu: goto label_18389c;
        case 0x1838a0u: goto label_1838a0;
        case 0x1838a4u: goto label_1838a4;
        case 0x1838a8u: goto label_1838a8;
        case 0x1838acu: goto label_1838ac;
        case 0x1838b0u: goto label_1838b0;
        case 0x1838b4u: goto label_1838b4;
        case 0x1838b8u: goto label_1838b8;
        case 0x1838bcu: goto label_1838bc;
        case 0x1838c0u: goto label_1838c0;
        case 0x1838c4u: goto label_1838c4;
        case 0x1838c8u: goto label_1838c8;
        case 0x1838ccu: goto label_1838cc;
        case 0x1838d0u: goto label_1838d0;
        case 0x1838d4u: goto label_1838d4;
        case 0x1838d8u: goto label_1838d8;
        case 0x1838dcu: goto label_1838dc;
        case 0x1838e0u: goto label_1838e0;
        case 0x1838e4u: goto label_1838e4;
        case 0x1838e8u: goto label_1838e8;
        case 0x1838ecu: goto label_1838ec;
        case 0x1838f0u: goto label_1838f0;
        case 0x1838f4u: goto label_1838f4;
        case 0x1838f8u: goto label_1838f8;
        case 0x1838fcu: goto label_1838fc;
        case 0x183900u: goto label_183900;
        case 0x183904u: goto label_183904;
        case 0x183908u: goto label_183908;
        case 0x18390cu: goto label_18390c;
        case 0x183910u: goto label_183910;
        case 0x183914u: goto label_183914;
        case 0x183918u: goto label_183918;
        case 0x18391cu: goto label_18391c;
        case 0x183920u: goto label_183920;
        case 0x183924u: goto label_183924;
        case 0x183928u: goto label_183928;
        case 0x18392cu: goto label_18392c;
        case 0x183930u: goto label_183930;
        case 0x183934u: goto label_183934;
        case 0x183938u: goto label_183938;
        case 0x18393cu: goto label_18393c;
        case 0x183940u: goto label_183940;
        case 0x183944u: goto label_183944;
        case 0x183948u: goto label_183948;
        case 0x18394cu: goto label_18394c;
        case 0x183950u: goto label_183950;
        case 0x183954u: goto label_183954;
        case 0x183958u: goto label_183958;
        case 0x18395cu: goto label_18395c;
        case 0x183960u: goto label_183960;
        case 0x183964u: goto label_183964;
        case 0x183968u: goto label_183968;
        case 0x18396cu: goto label_18396c;
        case 0x183970u: goto label_183970;
        case 0x183974u: goto label_183974;
        case 0x183978u: goto label_183978;
        case 0x18397cu: goto label_18397c;
        case 0x183980u: goto label_183980;
        case 0x183984u: goto label_183984;
        case 0x183988u: goto label_183988;
        case 0x18398cu: goto label_18398c;
        case 0x183990u: goto label_183990;
        case 0x183994u: goto label_183994;
        case 0x183998u: goto label_183998;
        case 0x18399cu: goto label_18399c;
        case 0x1839a0u: goto label_1839a0;
        case 0x1839a4u: goto label_1839a4;
        case 0x1839a8u: goto label_1839a8;
        case 0x1839acu: goto label_1839ac;
        case 0x1839b0u: goto label_1839b0;
        case 0x1839b4u: goto label_1839b4;
        case 0x1839b8u: goto label_1839b8;
        case 0x1839bcu: goto label_1839bc;
        case 0x1839c0u: goto label_1839c0;
        case 0x1839c4u: goto label_1839c4;
        case 0x1839c8u: goto label_1839c8;
        case 0x1839ccu: goto label_1839cc;
        case 0x1839d0u: goto label_1839d0;
        case 0x1839d4u: goto label_1839d4;
        case 0x1839d8u: goto label_1839d8;
        case 0x1839dcu: goto label_1839dc;
        case 0x1839e0u: goto label_1839e0;
        case 0x1839e4u: goto label_1839e4;
        case 0x1839e8u: goto label_1839e8;
        case 0x1839ecu: goto label_1839ec;
        case 0x1839f0u: goto label_1839f0;
        case 0x1839f4u: goto label_1839f4;
        case 0x1839f8u: goto label_1839f8;
        case 0x1839fcu: goto label_1839fc;
        case 0x183a00u: goto label_183a00;
        case 0x183a04u: goto label_183a04;
        case 0x183a08u: goto label_183a08;
        case 0x183a0cu: goto label_183a0c;
        case 0x183a10u: goto label_183a10;
        case 0x183a14u: goto label_183a14;
        case 0x183a18u: goto label_183a18;
        case 0x183a1cu: goto label_183a1c;
        case 0x183a20u: goto label_183a20;
        case 0x183a24u: goto label_183a24;
        case 0x183a28u: goto label_183a28;
        case 0x183a2cu: goto label_183a2c;
        case 0x183a30u: goto label_183a30;
        case 0x183a34u: goto label_183a34;
        case 0x183a38u: goto label_183a38;
        case 0x183a3cu: goto label_183a3c;
        case 0x183a40u: goto label_183a40;
        case 0x183a44u: goto label_183a44;
        case 0x183a48u: goto label_183a48;
        case 0x183a4cu: goto label_183a4c;
        case 0x183a50u: goto label_183a50;
        case 0x183a54u: goto label_183a54;
        case 0x183a58u: goto label_183a58;
        case 0x183a5cu: goto label_183a5c;
        case 0x183a60u: goto label_183a60;
        case 0x183a64u: goto label_183a64;
        case 0x183a68u: goto label_183a68;
        case 0x183a6cu: goto label_183a6c;
        case 0x183a70u: goto label_183a70;
        case 0x183a74u: goto label_183a74;
        case 0x183a78u: goto label_183a78;
        case 0x183a7cu: goto label_183a7c;
        case 0x183a80u: goto label_183a80;
        case 0x183a84u: goto label_183a84;
        case 0x183a88u: goto label_183a88;
        case 0x183a8cu: goto label_183a8c;
        case 0x183a90u: goto label_183a90;
        case 0x183a94u: goto label_183a94;
        case 0x183a98u: goto label_183a98;
        case 0x183a9cu: goto label_183a9c;
        case 0x183aa0u: goto label_183aa0;
        case 0x183aa4u: goto label_183aa4;
        case 0x183aa8u: goto label_183aa8;
        case 0x183aacu: goto label_183aac;
        case 0x183ab0u: goto label_183ab0;
        case 0x183ab4u: goto label_183ab4;
        case 0x183ab8u: goto label_183ab8;
        case 0x183abcu: goto label_183abc;
        case 0x183ac0u: goto label_183ac0;
        case 0x183ac4u: goto label_183ac4;
        case 0x183ac8u: goto label_183ac8;
        case 0x183accu: goto label_183acc;
        case 0x183ad0u: goto label_183ad0;
        case 0x183ad4u: goto label_183ad4;
        case 0x183ad8u: goto label_183ad8;
        case 0x183adcu: goto label_183adc;
        case 0x183ae0u: goto label_183ae0;
        case 0x183ae4u: goto label_183ae4;
        case 0x183ae8u: goto label_183ae8;
        case 0x183aecu: goto label_183aec;
        case 0x183af0u: goto label_183af0;
        case 0x183af4u: goto label_183af4;
        case 0x183af8u: goto label_183af8;
        case 0x183afcu: goto label_183afc;
        case 0x183b00u: goto label_183b00;
        case 0x183b04u: goto label_183b04;
        case 0x183b08u: goto label_183b08;
        case 0x183b0cu: goto label_183b0c;
        case 0x183b10u: goto label_183b10;
        case 0x183b14u: goto label_183b14;
        case 0x183b18u: goto label_183b18;
        case 0x183b1cu: goto label_183b1c;
        case 0x183b20u: goto label_183b20;
        case 0x183b24u: goto label_183b24;
        case 0x183b28u: goto label_183b28;
        case 0x183b2cu: goto label_183b2c;
        case 0x183b30u: goto label_183b30;
        case 0x183b34u: goto label_183b34;
        case 0x183b38u: goto label_183b38;
        case 0x183b3cu: goto label_183b3c;
        case 0x183b40u: goto label_183b40;
        case 0x183b44u: goto label_183b44;
        case 0x183b48u: goto label_183b48;
        case 0x183b4cu: goto label_183b4c;
        case 0x183b50u: goto label_183b50;
        case 0x183b54u: goto label_183b54;
        case 0x183b58u: goto label_183b58;
        case 0x183b5cu: goto label_183b5c;
        case 0x183b60u: goto label_183b60;
        case 0x183b64u: goto label_183b64;
        case 0x183b68u: goto label_183b68;
        case 0x183b6cu: goto label_183b6c;
        case 0x183b70u: goto label_183b70;
        case 0x183b74u: goto label_183b74;
        case 0x183b78u: goto label_183b78;
        case 0x183b7cu: goto label_183b7c;
        case 0x183b80u: goto label_183b80;
        case 0x183b84u: goto label_183b84;
        case 0x183b88u: goto label_183b88;
        case 0x183b8cu: goto label_183b8c;
        case 0x183b90u: goto label_183b90;
        case 0x183b94u: goto label_183b94;
        case 0x183b98u: goto label_183b98;
        case 0x183b9cu: goto label_183b9c;
        case 0x183ba0u: goto label_183ba0;
        case 0x183ba4u: goto label_183ba4;
        case 0x183ba8u: goto label_183ba8;
        case 0x183bacu: goto label_183bac;
        case 0x183bb0u: goto label_183bb0;
        case 0x183bb4u: goto label_183bb4;
        case 0x183bb8u: goto label_183bb8;
        case 0x183bbcu: goto label_183bbc;
        case 0x183bc0u: goto label_183bc0;
        case 0x183bc4u: goto label_183bc4;
        case 0x183bc8u: goto label_183bc8;
        case 0x183bccu: goto label_183bcc;
        case 0x183bd0u: goto label_183bd0;
        case 0x183bd4u: goto label_183bd4;
        case 0x183bd8u: goto label_183bd8;
        case 0x183bdcu: goto label_183bdc;
        case 0x183be0u: goto label_183be0;
        case 0x183be4u: goto label_183be4;
        case 0x183be8u: goto label_183be8;
        case 0x183becu: goto label_183bec;
        case 0x183bf0u: goto label_183bf0;
        case 0x183bf4u: goto label_183bf4;
        case 0x183bf8u: goto label_183bf8;
        case 0x183bfcu: goto label_183bfc;
        case 0x183c00u: goto label_183c00;
        case 0x183c04u: goto label_183c04;
        case 0x183c08u: goto label_183c08;
        case 0x183c0cu: goto label_183c0c;
        case 0x183c10u: goto label_183c10;
        case 0x183c14u: goto label_183c14;
        case 0x183c18u: goto label_183c18;
        case 0x183c1cu: goto label_183c1c;
        case 0x183c20u: goto label_183c20;
        case 0x183c24u: goto label_183c24;
        case 0x183c28u: goto label_183c28;
        case 0x183c2cu: goto label_183c2c;
        case 0x183c30u: goto label_183c30;
        case 0x183c34u: goto label_183c34;
        case 0x183c38u: goto label_183c38;
        case 0x183c3cu: goto label_183c3c;
        case 0x183c40u: goto label_183c40;
        case 0x183c44u: goto label_183c44;
        case 0x183c48u: goto label_183c48;
        case 0x183c4cu: goto label_183c4c;
        case 0x183c50u: goto label_183c50;
        case 0x183c54u: goto label_183c54;
        case 0x183c58u: goto label_183c58;
        case 0x183c5cu: goto label_183c5c;
        case 0x183c60u: goto label_183c60;
        case 0x183c64u: goto label_183c64;
        case 0x183c68u: goto label_183c68;
        case 0x183c6cu: goto label_183c6c;
        case 0x183c70u: goto label_183c70;
        case 0x183c74u: goto label_183c74;
        case 0x183c78u: goto label_183c78;
        case 0x183c7cu: goto label_183c7c;
        case 0x183c80u: goto label_183c80;
        case 0x183c84u: goto label_183c84;
        case 0x183c88u: goto label_183c88;
        case 0x183c8cu: goto label_183c8c;
        case 0x183c90u: goto label_183c90;
        case 0x183c94u: goto label_183c94;
        case 0x183c98u: goto label_183c98;
        case 0x183c9cu: goto label_183c9c;
        case 0x183ca0u: goto label_183ca0;
        case 0x183ca4u: goto label_183ca4;
        case 0x183ca8u: goto label_183ca8;
        case 0x183cacu: goto label_183cac;
        case 0x183cb0u: goto label_183cb0;
        case 0x183cb4u: goto label_183cb4;
        case 0x183cb8u: goto label_183cb8;
        case 0x183cbcu: goto label_183cbc;
        case 0x183cc0u: goto label_183cc0;
        case 0x183cc4u: goto label_183cc4;
        case 0x183cc8u: goto label_183cc8;
        case 0x183cccu: goto label_183ccc;
        case 0x183cd0u: goto label_183cd0;
        case 0x183cd4u: goto label_183cd4;
        case 0x183cd8u: goto label_183cd8;
        case 0x183cdcu: goto label_183cdc;
        case 0x183ce0u: goto label_183ce0;
        case 0x183ce4u: goto label_183ce4;
        case 0x183ce8u: goto label_183ce8;
        case 0x183cecu: goto label_183cec;
        case 0x183cf0u: goto label_183cf0;
        case 0x183cf4u: goto label_183cf4;
        case 0x183cf8u: goto label_183cf8;
        case 0x183cfcu: goto label_183cfc;
        case 0x183d00u: goto label_183d00;
        case 0x183d04u: goto label_183d04;
        case 0x183d08u: goto label_183d08;
        case 0x183d0cu: goto label_183d0c;
        case 0x183d10u: goto label_183d10;
        case 0x183d14u: goto label_183d14;
        case 0x183d18u: goto label_183d18;
        case 0x183d1cu: goto label_183d1c;
        case 0x183d20u: goto label_183d20;
        case 0x183d24u: goto label_183d24;
        case 0x183d28u: goto label_183d28;
        case 0x183d2cu: goto label_183d2c;
        case 0x183d30u: goto label_183d30;
        case 0x183d34u: goto label_183d34;
        case 0x183d38u: goto label_183d38;
        case 0x183d3cu: goto label_183d3c;
        case 0x183d40u: goto label_183d40;
        case 0x183d44u: goto label_183d44;
        case 0x183d48u: goto label_183d48;
        case 0x183d4cu: goto label_183d4c;
        case 0x183d50u: goto label_183d50;
        case 0x183d54u: goto label_183d54;
        case 0x183d58u: goto label_183d58;
        case 0x183d5cu: goto label_183d5c;
        case 0x183d60u: goto label_183d60;
        case 0x183d64u: goto label_183d64;
        case 0x183d68u: goto label_183d68;
        case 0x183d6cu: goto label_183d6c;
        case 0x183d70u: goto label_183d70;
        case 0x183d74u: goto label_183d74;
        case 0x183d78u: goto label_183d78;
        case 0x183d7cu: goto label_183d7c;
        case 0x183d80u: goto label_183d80;
        case 0x183d84u: goto label_183d84;
        case 0x183d88u: goto label_183d88;
        case 0x183d8cu: goto label_183d8c;
        case 0x183d90u: goto label_183d90;
        case 0x183d94u: goto label_183d94;
        case 0x183d98u: goto label_183d98;
        case 0x183d9cu: goto label_183d9c;
        case 0x183da0u: goto label_183da0;
        case 0x183da4u: goto label_183da4;
        case 0x183da8u: goto label_183da8;
        case 0x183dacu: goto label_183dac;
        case 0x183db0u: goto label_183db0;
        case 0x183db4u: goto label_183db4;
        case 0x183db8u: goto label_183db8;
        case 0x183dbcu: goto label_183dbc;
        case 0x183dc0u: goto label_183dc0;
        case 0x183dc4u: goto label_183dc4;
        case 0x183dc8u: goto label_183dc8;
        case 0x183dccu: goto label_183dcc;
        case 0x183dd0u: goto label_183dd0;
        case 0x183dd4u: goto label_183dd4;
        case 0x183dd8u: goto label_183dd8;
        case 0x183ddcu: goto label_183ddc;
        case 0x183de0u: goto label_183de0;
        case 0x183de4u: goto label_183de4;
        case 0x183de8u: goto label_183de8;
        case 0x183decu: goto label_183dec;
        case 0x183df0u: goto label_183df0;
        case 0x183df4u: goto label_183df4;
        case 0x183df8u: goto label_183df8;
        case 0x183dfcu: goto label_183dfc;
        case 0x183e00u: goto label_183e00;
        case 0x183e04u: goto label_183e04;
        case 0x183e08u: goto label_183e08;
        case 0x183e0cu: goto label_183e0c;
        case 0x183e10u: goto label_183e10;
        case 0x183e14u: goto label_183e14;
        default: break;
    }

    ctx->pc = 0x183540u;

label_183540:
    // 0x183540: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x183540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_183544:
    // 0x183544: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x183544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_183548:
    // 0x183548: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x183548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_18354c:
    // 0x18354c: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x18354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
label_183550:
    // 0x183550: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x183550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_183554:
    // 0x183554: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x183554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_183558:
    // 0x183558: 0x30de00ff  andi        $fp, $a2, 0xFF
    ctx->pc = 0x183558u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_18355c:
    // 0x18355c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_183560:
    // 0x183560: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_183564:
    // 0x183564: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x183564u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_183568:
    // 0x183568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18356c:
    // 0x18356c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_183570:
    // 0x183570: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x183570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_183574:
    // 0x183574: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_183578:
    // 0x183578: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x183578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18357c:
    // 0x18357c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18357cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_183580:
    // 0x183580: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x183580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_183584:
    // 0x183584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_183588:
    // 0x183588: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x183588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18358c:
    // 0x18358c: 0x8c970048  lw          $s7, 0x48($a0)
    ctx->pc = 0x18358cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_183590:
    // 0x183590: 0xc060d40  jal         func_183500
label_183594:
    if (ctx->pc == 0x183594u) {
        ctx->pc = 0x183594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183590u;
        // 0x183594: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183598u;
        goto label_183598;
    }
    ctx->pc = 0x183590u;
    SET_GPR_U32(ctx, 31, 0x183598u);
    ctx->pc = 0x183594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183590u;
    // 0x183594: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x183590u, 0x183598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183598u;
label_183598:
    // 0x183598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x183598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18359c:
    // 0x18359c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_1835a0:
    if (ctx->pc == 0x1835A0u) {
        ctx->pc = 0x1835A4u;
        goto label_1835a4;
    }
    ctx->pc = 0x18359Cu;
    {
        const bool branch_taken_0x18359c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18359c) {
            ctx->pc = 0x1835B0u;
            goto label_1835b0;
        }
    }
    ctx->pc = 0x1835A4u;
label_1835a4:
    // 0x1835a4: 0x10000210  b           . + 4 + (0x210 << 2)
label_1835a8:
    if (ctx->pc == 0x1835A8u) {
        ctx->pc = 0x1835A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835A4u;
        // 0x1835a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835ACu;
        goto label_1835ac;
    }
    ctx->pc = 0x1835A4u;
    {
        const bool branch_taken_0x1835a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1835A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835A4u;
        // 0x1835a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835a4) {
            ctx->pc = 0x183DE8u;
            goto label_183de8;
        }
    }
    ctx->pc = 0x1835ACu;
label_1835ac:
    // 0x1835ac: 0x0  nop
    ctx->pc = 0x1835acu;
    // NOP
label_1835b0:
    // 0x1835b0: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
label_1835b4:
    if (ctx->pc == 0x1835B4u) {
        ctx->pc = 0x1835B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835B0u;
        // 0x1835b4: 0x33c200ff  andi        $v0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835B8u;
        goto label_1835b8;
    }
    ctx->pc = 0x1835B0u;
    {
        const bool branch_taken_0x1835b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1835B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835B0u;
        // 0x1835b4: 0x33c200ff  andi        $v0, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835b0) {
            ctx->pc = 0x183608u;
            goto label_183608;
        }
    }
    ctx->pc = 0x1835B8u;
label_1835b8:
    // 0x1835b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1835b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1835bc:
    // 0x1835bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1835c0:
    if (ctx->pc == 0x1835C0u) {
        ctx->pc = 0x1835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835BCu;
        // 0x1835c0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835C4u;
        goto label_1835c4;
    }
    ctx->pc = 0x1835BCu;
    {
        const bool branch_taken_0x1835bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835BCu;
        // 0x1835c0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835bc) {
            ctx->pc = 0x1835F0u;
            goto label_1835f0;
        }
    }
    ctx->pc = 0x1835C4u;
label_1835c4:
    // 0x1835c4: 0x0  nop
    ctx->pc = 0x1835c4u;
    // NOP
label_1835c8:
    // 0x1835c8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1835c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1835cc:
    // 0x1835cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1835ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1835d0:
    // 0x1835d0: 0x8c530030  lw          $s3, 0x30($v0)
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1835d4:
    // 0x1835d4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1835d8:
    if (ctx->pc == 0x1835D8u) {
        ctx->pc = 0x1835D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835D4u;
        // 0x1835d8: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835DCu;
        goto label_1835dc;
    }
    ctx->pc = 0x1835D4u;
    {
        const bool branch_taken_0x1835d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1835D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835D4u;
        // 0x1835d8: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835d4) {
            ctx->pc = 0x1835E8u;
            goto label_1835e8;
        }
    }
    ctx->pc = 0x1835DCu;
label_1835dc:
    // 0x1835dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1835e0:
    // 0x1835e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1835e4:
    if (ctx->pc == 0x1835E4u) {
        ctx->pc = 0x1835E8u;
        goto label_1835e8;
    }
    ctx->pc = 0x1835E0u;
    {
        const bool branch_taken_0x1835e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1835e0) {
            ctx->pc = 0x1835F8u;
            goto label_1835f8;
        }
    }
    ctx->pc = 0x1835E8u;
label_1835e8:
    // 0x1835e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1835e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1835ec:
    // 0x1835ec: 0x0  nop
    ctx->pc = 0x1835ecu;
    // NOP
label_1835f0:
    // 0x1835f0: 0x481fff5  bgez        $a0, . + 4 + (-0xB << 2)
label_1835f4:
    if (ctx->pc == 0x1835F4u) {
        ctx->pc = 0x1835F8u;
        goto label_1835f8;
    }
    ctx->pc = 0x1835F0u;
    {
        const bool branch_taken_0x1835f0 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1835f0) {
            ctx->pc = 0x1835C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1835c8;
        }
    }
    ctx->pc = 0x1835F8u;
label_1835f8:
    // 0x1835f8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_1835fc:
    if (ctx->pc == 0x1835FCu) {
        ctx->pc = 0x1835FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835F8u;
        // 0x1835fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183600u;
        goto label_183600;
    }
    ctx->pc = 0x1835F8u;
    {
        const bool branch_taken_0x1835f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1835FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835F8u;
        // 0x1835fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835f8) {
            ctx->pc = 0x183608u;
            goto label_183608;
        }
    }
    ctx->pc = 0x183600u;
label_183600:
    // 0x183600: 0x100001f9  b           . + 4 + (0x1F9 << 2)
label_183604:
    if (ctx->pc == 0x183604u) {
        ctx->pc = 0x183608u;
        goto label_183608;
    }
    ctx->pc = 0x183600u;
    {
        const bool branch_taken_0x183600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183600) {
            ctx->pc = 0x183DE8u;
            goto label_183de8;
        }
    }
    ctx->pc = 0x183608u;
label_183608:
    // 0x183608: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x183608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18360c:
    // 0x18360c: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x18360cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_183610:
    // 0x183610: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x183610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_183614:
    // 0x183614: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_183618:
    if (ctx->pc == 0x183618u) {
        ctx->pc = 0x183618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183614u;
        // 0x183618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18361Cu;
        goto label_18361c;
    }
    ctx->pc = 0x183614u;
    {
        const bool branch_taken_0x183614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x183618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183614u;
        // 0x183618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183614) {
            ctx->pc = 0x183628u;
            goto label_183628;
        }
    }
    ctx->pc = 0x18361Cu;
label_18361c:
    // 0x18361c: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_183620:
    if (ctx->pc == 0x183620u) {
        ctx->pc = 0x183624u;
        goto label_183624;
    }
    ctx->pc = 0x18361Cu;
    {
        const bool branch_taken_0x18361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18361c) {
            ctx->pc = 0x183DE8u;
            goto label_183de8;
        }
    }
    ctx->pc = 0x183624u;
label_183624:
    // 0x183624: 0x0  nop
    ctx->pc = 0x183624u;
    // NOP
label_183628:
    // 0x183628: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x183628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18362c:
    // 0x18362c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_183630:
    // 0x183630: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x183630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_183634:
    // 0x183634: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_183638:
    if (ctx->pc == 0x183638u) {
        ctx->pc = 0x18363Cu;
        goto label_18363c;
    }
    ctx->pc = 0x183634u;
    {
        const bool branch_taken_0x183634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183634) {
            ctx->pc = 0x183648u;
            goto label_183648;
        }
    }
    ctx->pc = 0x18363Cu;
label_18363c:
    // 0x18363c: 0xae2011c4  sw          $zero, 0x11C4($s1)
    ctx->pc = 0x18363cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4548), GPR_U32(ctx, 0));
label_183640:
    // 0x183640: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_183644:
    if (ctx->pc == 0x183644u) {
        ctx->pc = 0x183644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183640u;
        // 0x183644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183648u;
        goto label_183648;
    }
    ctx->pc = 0x183640u;
    {
        const bool branch_taken_0x183640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183640u;
        // 0x183644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183640) {
            ctx->pc = 0x183DE8u;
            goto label_183de8;
        }
    }
    ctx->pc = 0x183648u;
label_183648:
    // 0x183648: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x183648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_18364c:
    // 0x18364c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
label_183650:
    if (ctx->pc == 0x183650u) {
        ctx->pc = 0x183654u;
        goto label_183654;
    }
    ctx->pc = 0x18364Cu;
    {
        const bool branch_taken_0x18364c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x18364c) {
            ctx->pc = 0x183660u;
            goto label_183660;
        }
    }
    ctx->pc = 0x183654u;
label_183654:
    // 0x183654: 0xae2011c4  sw          $zero, 0x11C4($s1)
    ctx->pc = 0x183654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4548), GPR_U32(ctx, 0));
label_183658:
    // 0x183658: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_18365c:
    if (ctx->pc == 0x18365Cu) {
        ctx->pc = 0x18365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183658u;
        // 0x18365c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183660u;
        goto label_183660;
    }
    ctx->pc = 0x183658u;
    {
        const bool branch_taken_0x183658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183658u;
        // 0x18365c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183658) {
            ctx->pc = 0x183DE8u;
            goto label_183de8;
        }
    }
    ctx->pc = 0x183660u;
label_183660:
    // 0x183660: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x183660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_183664:
    // 0x183664: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_183668:
    if (ctx->pc == 0x183668u) {
        ctx->pc = 0x18366Cu;
        goto label_18366c;
    }
    ctx->pc = 0x183664u;
    {
        const bool branch_taken_0x183664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183664) {
            ctx->pc = 0x1836A8u;
            goto label_1836a8;
        }
    }
    ctx->pc = 0x18366Cu;
label_18366c:
    // 0x18366c: 0x922211dd  lbu         $v0, 0x11DD($s1)
    ctx->pc = 0x18366cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4573)));
label_183670:
    // 0x183670: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_183674:
    if (ctx->pc == 0x183674u) {
        ctx->pc = 0x183678u;
        goto label_183678;
    }
    ctx->pc = 0x183670u;
    {
        const bool branch_taken_0x183670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x183670) {
            ctx->pc = 0x1836A8u;
            goto label_1836a8;
        }
    }
    ctx->pc = 0x183678u;
label_183678:
    // 0x183678: 0x8e2211c4  lw          $v0, 0x11C4($s1)
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4548)));
label_18367c:
    // 0x18367c: 0x1448000a  bne         $v0, $t0, . + 4 + (0xA << 2)
label_183680:
    if (ctx->pc == 0x183680u) {
        ctx->pc = 0x183684u;
        goto label_183684;
    }
    ctx->pc = 0x18367Cu;
    {
        const bool branch_taken_0x18367c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x18367c) {
            ctx->pc = 0x1836A8u;
            goto label_1836a8;
        }
    }
    ctx->pc = 0x183684u;
label_183684:
    // 0x183684: 0x8e2311d4  lw          $v1, 0x11D4($s1)
    ctx->pc = 0x183684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_183688:
    // 0x183688: 0x32440080  andi        $a0, $s2, 0x80
    ctx->pc = 0x183688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
label_18368c:
    // 0x18368c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x18368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_183690:
    // 0x183690: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_183694:
    if (ctx->pc == 0x183694u) {
        ctx->pc = 0x183698u;
        goto label_183698;
    }
    ctx->pc = 0x183690u;
    {
        const bool branch_taken_0x183690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x183690) {
            ctx->pc = 0x1836A8u;
            goto label_1836a8;
        }
    }
    ctx->pc = 0x183698u;
label_183698:
    // 0x183698: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x183698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_18369c:
    // 0x18369c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18369cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1836a0:
    // 0x1836a0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_1836a4:
    if (ctx->pc == 0x1836A4u) {
        ctx->pc = 0x1836A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836A0u;
        // 0x1836a4: 0xae2311d4  sw          $v1, 0x11D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1836A8u;
        goto label_1836a8;
    }
    ctx->pc = 0x1836A0u;
    {
        const bool branch_taken_0x1836a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836A0u;
        // 0x1836a4: 0xae2311d4  sw          $v1, 0x11D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836a0) {
            ctx->pc = 0x183DE8u;
            goto label_183de8;
        }
    }
    ctx->pc = 0x1836A8u;
label_1836a8:
    // 0x1836a8: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x1836a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_1836ac:
    // 0x1836ac: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1836acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1836b0:
    // 0x1836b0: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x1836b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1836b4:
    // 0x1836b4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1836b8:
    // 0x1836b8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1836b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1836bc:
    // 0x1836bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1836bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1836c0:
    // 0x1836c0: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1836c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1836c4:
    // 0x1836c4: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x1836c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1836c8:
    // 0x1836c8: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x1836c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1836cc:
    // 0x1836cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1836ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1836d0:
    // 0x1836d0: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x1836d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_1836d4:
    // 0x1836d4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1836d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1836d8:
    // 0x1836d8: 0x1255824  and         $t3, $t1, $a1
    ctx->pc = 0x1836d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_1836dc:
    // 0x1836dc: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x1836dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1836e0:
    // 0x1836e0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1836e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1836e4:
    // 0x1836e4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1836e8:
    if (ctx->pc == 0x1836E8u) {
        ctx->pc = 0x1836E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836E4u;
        // 0x1836e8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1836ECu;
        goto label_1836ec;
    }
    ctx->pc = 0x1836E4u;
    {
        const bool branch_taken_0x1836e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836E4u;
        // 0x1836e8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836e4) {
            ctx->pc = 0x183758u;
            goto label_183758;
        }
    }
    ctx->pc = 0x1836ECu;
label_1836ec:
    // 0x1836ec: 0x0  nop
    ctx->pc = 0x1836ecu;
    // NOP
label_1836f0:
    // 0x1836f0: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x1836f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1836f4:
    // 0x1836f4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_1836f8:
    if (ctx->pc == 0x1836F8u) {
        ctx->pc = 0x1836F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836F4u;
        // 0x1836f8: 0x25040  sll         $t2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1836FCu;
        goto label_1836fc;
    }
    ctx->pc = 0x1836F4u;
    {
        const bool branch_taken_0x1836f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836F4u;
        // 0x1836f8: 0x25040  sll         $t2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836f4) {
            ctx->pc = 0x183768u;
            goto label_183768;
        }
    }
    ctx->pc = 0x1836FCu;
label_1836fc:
    // 0x1836fc: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x1836fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_183700:
    // 0x183700: 0x1426821  addu        $t5, $t2, $v0
    ctx->pc = 0x183700u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_183704:
    // 0x183704: 0x1695021  addu        $t2, $t3, $t1
    ctx->pc = 0x183704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_183708:
    // 0x183708: 0xd7040  sll         $t6, $t5, 1
    ctx->pc = 0x183708u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_18370c:
    // 0x18370c: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x18370cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_183710:
    // 0x183710: 0x1314821  addu        $t1, $t1, $s1
    ctx->pc = 0x183710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
label_183714:
    // 0x183714: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x183714u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
label_183718:
    // 0x183718: 0xe26821  addu        $t5, $a3, $v0
    ctx->pc = 0x183718u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_18371c:
    // 0x18371c: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x18371cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_183720:
    // 0x183720: 0xad2a0040  sw          $t2, 0x40($t1)
    ctx->pc = 0x183720u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 10));
label_183724:
    // 0x183724: 0xa5c00144  sh          $zero, 0x144($t6)
    ctx->pc = 0x183724u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 324), (uint16_t)GPR_U32(ctx, 0));
label_183728:
    // 0x183728: 0xa5c00142  sh          $zero, 0x142($t6)
    ctx->pc = 0x183728u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 322), (uint16_t)GPR_U32(ctx, 0));
label_18372c:
    // 0x18372c: 0xa5c00140  sh          $zero, 0x140($t6)
    ctx->pc = 0x18372cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 320), (uint16_t)GPR_U32(ctx, 0));
label_183730:
    // 0x183730: 0x91aa0000  lbu         $t2, 0x0($t5)
    ctx->pc = 0x183730u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_183734:
    // 0x183734: 0x31490001  andi        $t1, $t2, 0x1
    ctx->pc = 0x183734u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_183738:
    // 0x183738: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
label_18373c:
    if (ctx->pc == 0x18373Cu) {
        ctx->pc = 0x18373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183738u;
        // 0x18373c: 0x31490004  andi        $t1, $t2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183740u;
        goto label_183740;
    }
    ctx->pc = 0x183738u;
    {
        const bool branch_taken_0x183738 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183738u;
        // 0x18373c: 0x31490004  andi        $t1, $t2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183738) {
            ctx->pc = 0x183750u;
            goto label_183750;
        }
    }
    ctx->pc = 0x183740u;
label_183740:
    // 0x183740: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_183744:
    if (ctx->pc == 0x183744u) {
        ctx->pc = 0x183748u;
        goto label_183748;
    }
    ctx->pc = 0x183740u;
    {
        const bool branch_taken_0x183740 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x183740) {
            ctx->pc = 0x183750u;
            goto label_183750;
        }
    }
    ctx->pc = 0x183748u;
label_183748:
    // 0x183748: 0x2ae3c  dsll32      $s5, $v0, 24
    ctx->pc = 0x183748u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 24));
label_18374c:
    // 0x18374c: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x18374cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
label_183750:
    // 0x183750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x183750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_183754:
    // 0x183754: 0x0  nop
    ctx->pc = 0x183754u;
    // NOP
label_183758:
    // 0x183758: 0x4c482a  slt         $t1, $v0, $t4
    ctx->pc = 0x183758u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_18375c:
    // 0x18375c: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
label_183760:
    if (ctx->pc == 0x183760u) {
        ctx->pc = 0x183764u;
        goto label_183764;
    }
    ctx->pc = 0x18375Cu;
    {
        const bool branch_taken_0x18375c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x18375c) {
            ctx->pc = 0x1836F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1836f0;
        }
    }
    ctx->pc = 0x183764u;
label_183764:
    // 0x183764: 0x0  nop
    ctx->pc = 0x183764u;
    // NOP
label_183768:
    // 0x183768: 0x1000000b  b           . + 4 + (0xB << 2)
label_18376c:
    if (ctx->pc == 0x18376Cu) {
        ctx->pc = 0x18376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183768u;
        // 0x18376c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183770u;
        goto label_183770;
    }
    ctx->pc = 0x183768u;
    {
        const bool branch_taken_0x183768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183768u;
        // 0x18376c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183768) {
            ctx->pc = 0x183798u;
            goto label_183798;
        }
    }
    ctx->pc = 0x183770u;
label_183770:
    // 0x183770: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x183770u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_183774:
    // 0x183774: 0x1225023  subu        $t2, $t1, $v0
    ctx->pc = 0x183774u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_183778:
    // 0x183778: 0x8ee90080  lw          $t1, 0x80($s7)
    ctx->pc = 0x183778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
label_18377c:
    // 0x18377c: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x18377cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_183780:
    // 0x183780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x183780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_183784:
    // 0x183784: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x183784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_183788:
    // 0x183788: 0x956900c6  lhu         $t1, 0xC6($t3)
    ctx->pc = 0x183788u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 198)));
label_18378c:
    // 0x18378c: 0x3129fff7  andi        $t1, $t1, 0xFFF7
    ctx->pc = 0x18378cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65527);
label_183790:
    // 0x183790: 0xa56900c6  sh          $t1, 0xC6($t3)
    ctx->pc = 0x183790u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 198), (uint16_t)GPR_U32(ctx, 9));
label_183794:
    // 0x183794: 0x0  nop
    ctx->pc = 0x183794u;
    // NOP
label_183798:
    // 0x183798: 0x96e9006a  lhu         $t1, 0x6A($s7)
    ctx->pc = 0x183798u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 106)));
label_18379c:
    // 0x18379c: 0x49482a  slt         $t1, $v0, $t1
    ctx->pc = 0x18379cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1837a0:
    // 0x1837a0: 0x1520fff3  bnez        $t1, . + 4 + (-0xD << 2)
label_1837a4:
    if (ctx->pc == 0x1837A4u) {
        ctx->pc = 0x1837A8u;
        goto label_1837a8;
    }
    ctx->pc = 0x1837A0u;
    {
        const bool branch_taken_0x1837a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1837a0) {
            ctx->pc = 0x183770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183770;
        }
    }
    ctx->pc = 0x1837A8u;
label_1837a8:
    // 0x1837a8: 0x8e890044  lw          $t1, 0x44($s4)
    ctx->pc = 0x1837a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_1837ac:
    // 0x1837ac: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x1837acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_1837b0:
    // 0x1837b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1837b4:
    if (ctx->pc == 0x1837B4u) {
        ctx->pc = 0x1837B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837B0u;
        // 0x1837b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1837B8u;
        goto label_1837b8;
    }
    ctx->pc = 0x1837B0u;
    {
        const bool branch_taken_0x1837b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837B0u;
        // 0x1837b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837b0) {
            ctx->pc = 0x1837C8u;
            goto label_1837c8;
        }
    }
    ctx->pc = 0x1837B8u;
label_1837b8:
    // 0x1837b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1837b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1837bc:
    // 0x1837bc: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x1837bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_1837c0:
    // 0x1837c0: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1837c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_1837c4:
    // 0x1837c4: 0x0  nop
    ctx->pc = 0x1837c4u;
    // NOP
label_1837c8:
    // 0x1837c8: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x1837c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
label_1837cc:
    // 0x1837cc: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_1837d0:
    if (ctx->pc == 0x1837D0u) {
        ctx->pc = 0x1837D4u;
        goto label_1837d4;
    }
    ctx->pc = 0x1837CCu;
    {
        const bool branch_taken_0x1837cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1837cc) {
            ctx->pc = 0x1839A0u;
            goto label_1839a0;
        }
    }
    ctx->pc = 0x1837D4u;
label_1837d4:
    // 0x1837d4: 0x12000070  beqz        $s0, . + 4 + (0x70 << 2)
label_1837d8:
    if (ctx->pc == 0x1837D8u) {
        ctx->pc = 0x1837D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837D4u;
        // 0x1837d8: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1837DCu;
        goto label_1837dc;
    }
    ctx->pc = 0x1837D4u;
    {
        const bool branch_taken_0x1837d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837D4u;
        // 0x1837d8: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837d4) {
            ctx->pc = 0x183998u;
            goto label_183998;
        }
    }
    ctx->pc = 0x1837DCu;
label_1837dc:
    // 0x1837dc: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_1837e0:
    if (ctx->pc == 0x1837E0u) {
        ctx->pc = 0x1837E4u;
        goto label_1837e4;
    }
    ctx->pc = 0x1837DCu;
    {
        const bool branch_taken_0x1837dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1837dc) {
            ctx->pc = 0x183998u;
            goto label_183998;
        }
    }
    ctx->pc = 0x1837E4u;
label_1837e4:
    // 0x1837e4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_1837e8:
    if (ctx->pc == 0x1837E8u) {
        ctx->pc = 0x1837E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837E4u;
        // 0x1837e8: 0x104842  srl         $t1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1837ECu;
        goto label_1837ec;
    }
    ctx->pc = 0x1837E4u;
    {
        const bool branch_taken_0x1837e4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1837E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837E4u;
        // 0x1837e8: 0x104842  srl         $t1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837e4) {
            ctx->pc = 0x1837F8u;
            goto label_1837f8;
        }
    }
    ctx->pc = 0x1837ECu;
label_1837ec:
    // 0x1837ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1837ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1837f0:
    // 0x1837f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1837f4:
    if (ctx->pc == 0x1837F4u) {
        ctx->pc = 0x1837F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837F0u;
        // 0x1837f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1837F8u;
        goto label_1837f8;
    }
    ctx->pc = 0x1837F0u;
    {
        const bool branch_taken_0x1837f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837F0u;
        // 0x1837f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837f0) {
            ctx->pc = 0x183810u;
            goto label_183810;
        }
    }
    ctx->pc = 0x1837F8u;
label_1837f8:
    // 0x1837f8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1837f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1837fc:
    // 0x1837fc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1837fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_183800:
    // 0x183800: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x183800u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183804:
    // 0x183804: 0x0  nop
    ctx->pc = 0x183804u;
    // NOP
label_183808:
    // 0x183808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x183808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18380c:
    // 0x18380c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18380cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_183810:
    // 0x183810: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x183810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_183814:
    // 0x183814: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x183814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_183818:
    // 0x183818: 0xe62011f4  swc1        $f0, 0x11F4($s1)
    ctx->pc = 0x183818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4596), bits); }
label_18381c:
    // 0x18381c: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x18381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
label_183820:
    // 0x183820: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x183820u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183824:
    // 0x183824: 0x0  nop
    ctx->pc = 0x183824u;
    // NOP
label_183828:
    // 0x183828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x183828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18382c:
    // 0x18382c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_183830:
    if (ctx->pc == 0x183830u) {
        ctx->pc = 0x183830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18382Cu;
        // 0x183830: 0xe62011f8  swc1        $f0, 0x11F8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4600), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183834u;
        goto label_183834;
    }
    ctx->pc = 0x18382Cu;
    {
        const bool branch_taken_0x18382c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18382Cu;
        // 0x183830: 0xe62011f8  swc1        $f0, 0x11F8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18382c) {
            ctx->pc = 0x183848u;
            goto label_183848;
        }
    }
    ctx->pc = 0x183834u;
label_183834:
    // 0x183834: 0x26290030  addiu       $t1, $s1, 0x30
    ctx->pc = 0x183834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_183838:
    // 0x183838: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_18383c:
    // 0x18383c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18383cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_183840:
    // 0x183840: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x183840u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_183844:
    // 0x183844: 0x0  nop
    ctx->pc = 0x183844u;
    // NOP
label_183848:
    // 0x183848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18384c:
    // 0x18384c: 0x32490004  andi        $t1, $s2, 0x4
    ctx->pc = 0x18384cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_183850:
    // 0x183850: 0x1000001f  b           . + 4 + (0x1F << 2)
label_183854:
    if (ctx->pc == 0x183854u) {
        ctx->pc = 0x183854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183850u;
        // 0x183854: 0x324a0005  andi        $t2, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183858u;
        goto label_183858;
    }
    ctx->pc = 0x183850u;
    {
        const bool branch_taken_0x183850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183850u;
        // 0x183854: 0x324a0005  andi        $t2, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183850) {
            ctx->pc = 0x1838D0u;
            goto label_1838d0;
        }
    }
    ctx->pc = 0x183858u;
label_183858:
    // 0x183858: 0x258c0  sll         $t3, $v0, 3
    ctx->pc = 0x183858u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18385c:
    // 0x18385c: 0x1626023  subu        $t4, $t3, $v0
    ctx->pc = 0x18385cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_183860:
    // 0x183860: 0x8eeb0080  lw          $t3, 0x80($s7)
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
label_183864:
    // 0x183864: 0xc6140  sll         $t4, $t4, 5
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_183868:
    // 0x183868: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_18386c:
    if (ctx->pc == 0x18386Cu) {
        ctx->pc = 0x18386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183868u;
        // 0x18386c: 0x16c5821  addu        $t3, $t3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183870u;
        goto label_183870;
    }
    ctx->pc = 0x183868u;
    {
        const bool branch_taken_0x183868 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x18386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183868u;
        // 0x18386c: 0x16c5821  addu        $t3, $t3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183868) {
            ctx->pc = 0x1838A0u;
            goto label_1838a0;
        }
    }
    ctx->pc = 0x183870u;
label_183870:
    // 0x183870: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
label_183874:
    if (ctx->pc == 0x183874u) {
        ctx->pc = 0x183878u;
        goto label_183878;
    }
    ctx->pc = 0x183870u;
    {
        const bool branch_taken_0x183870 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x183870) {
            ctx->pc = 0x183890u;
            goto label_183890;
        }
    }
    ctx->pc = 0x183878u;
label_183878:
    // 0x183878: 0x956c00c6  lhu         $t4, 0xC6($t3)
    ctx->pc = 0x183878u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 198)));
label_18387c:
    // 0x18387c: 0x318c0004  andi        $t4, $t4, 0x4
    ctx->pc = 0x18387cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
label_183880:
    // 0x183880: 0x15800007  bnez        $t4, . + 4 + (0x7 << 2)
label_183884:
    if (ctx->pc == 0x183884u) {
        ctx->pc = 0x183888u;
        goto label_183888;
    }
    ctx->pc = 0x183880u;
    {
        const bool branch_taken_0x183880 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x183880) {
            ctx->pc = 0x1838A0u;
            goto label_1838a0;
        }
    }
    ctx->pc = 0x183888u;
label_183888:
    // 0x183888: 0x1000000f  b           . + 4 + (0xF << 2)
label_18388c:
    if (ctx->pc == 0x18388Cu) {
        ctx->pc = 0x183890u;
        goto label_183890;
    }
    ctx->pc = 0x183888u;
    {
        const bool branch_taken_0x183888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183888) {
            ctx->pc = 0x1838C8u;
            goto label_1838c8;
        }
    }
    ctx->pc = 0x183890u;
label_183890:
    // 0x183890: 0x956c00c6  lhu         $t4, 0xC6($t3)
    ctx->pc = 0x183890u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 198)));
label_183894:
    // 0x183894: 0x318c0002  andi        $t4, $t4, 0x2
    ctx->pc = 0x183894u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2);
label_183898:
    // 0x183898: 0x1180000b  beqz        $t4, . + 4 + (0xB << 2)
label_18389c:
    if (ctx->pc == 0x18389Cu) {
        ctx->pc = 0x1838A0u;
        goto label_1838a0;
    }
    ctx->pc = 0x183898u;
    {
        const bool branch_taken_0x183898 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x183898) {
            ctx->pc = 0x1838C8u;
            goto label_1838c8;
        }
    }
    ctx->pc = 0x1838A0u;
label_1838a0:
    // 0x1838a0: 0x8fac00ac  lw          $t4, 0xAC($sp)
    ctx->pc = 0x1838a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1838a4:
    // 0x1838a4: 0x256d0080  addiu       $t5, $t3, 0x80
    ctx->pc = 0x1838a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
label_1838a8:
    // 0x1838a8: 0x796c0000  lq          $t4, 0x0($t3)
    ctx->pc = 0x1838a8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_1838ac:
    // 0x1838ac: 0x7dac0000  sq          $t4, 0x0($t5)
    ctx->pc = 0x1838acu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 12));
label_1838b0:
    // 0x1838b0: 0x796c0010  lq          $t4, 0x10($t3)
    ctx->pc = 0x1838b0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 16)));
label_1838b4:
    // 0x1838b4: 0x7dac0010  sq          $t4, 0x10($t5)
    ctx->pc = 0x1838b4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 12));
label_1838b8:
    // 0x1838b8: 0x796c0020  lq          $t4, 0x20($t3)
    ctx->pc = 0x1838b8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 32)));
label_1838bc:
    // 0x1838bc: 0x7dac0020  sq          $t4, 0x20($t5)
    ctx->pc = 0x1838bcu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 12));
label_1838c0:
    // 0x1838c0: 0x796c0030  lq          $t4, 0x30($t3)
    ctx->pc = 0x1838c0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 48)));
label_1838c4:
    // 0x1838c4: 0x7dac0030  sq          $t4, 0x30($t5)
    ctx->pc = 0x1838c4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 12));
label_1838c8:
    // 0x1838c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1838cc:
    // 0x1838cc: 0x0  nop
    ctx->pc = 0x1838ccu;
    // NOP
label_1838d0:
    // 0x1838d0: 0x96eb006a  lhu         $t3, 0x6A($s7)
    ctx->pc = 0x1838d0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 106)));
label_1838d4:
    // 0x1838d4: 0x4b582a  slt         $t3, $v0, $t3
    ctx->pc = 0x1838d4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_1838d8:
    // 0x1838d8: 0x1560ffdf  bnez        $t3, . + 4 + (-0x21 << 2)
label_1838dc:
    if (ctx->pc == 0x1838DCu) {
        ctx->pc = 0x1838E0u;
        goto label_1838e0;
    }
    ctx->pc = 0x1838D8u;
    {
        const bool branch_taken_0x1838d8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1838d8) {
            ctx->pc = 0x183858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183858;
        }
    }
    ctx->pc = 0x1838E0u;
label_1838e0:
    // 0x1838e0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x1838e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_1838e4:
    // 0x1838e4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1838e8:
    if (ctx->pc == 0x1838E8u) {
        ctx->pc = 0x1838E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838E4u;
        // 0x1838e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1838ECu;
        goto label_1838ec;
    }
    ctx->pc = 0x1838E4u;
    {
        const bool branch_taken_0x1838e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1838E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838E4u;
        // 0x1838e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838e4) {
            ctx->pc = 0x1839A0u;
            goto label_1839a0;
        }
    }
    ctx->pc = 0x1838ECu;
label_1838ec:
    // 0x1838ec: 0x32490004  andi        $t1, $s2, 0x4
    ctx->pc = 0x1838ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_1838f0:
    // 0x1838f0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1838f4:
    if (ctx->pc == 0x1838F4u) {
        ctx->pc = 0x1838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838F0u;
        // 0x1838f4: 0x324a0005  andi        $t2, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1838F8u;
        goto label_1838f8;
    }
    ctx->pc = 0x1838F0u;
    {
        const bool branch_taken_0x1838f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838F0u;
        // 0x1838f4: 0x324a0005  andi        $t2, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838f0) {
            ctx->pc = 0x183978u;
            goto label_183978;
        }
    }
    ctx->pc = 0x1838F8u;
label_1838f8:
    // 0x1838f8: 0x8e8d004c  lw          $t5, 0x4C($s4)
    ctx->pc = 0x1838f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_1838fc:
    // 0x1838fc: 0x258c0  sll         $t3, $v0, 3
    ctx->pc = 0x1838fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_183900:
    // 0x183900: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x183900u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_183904:
    // 0x183904: 0xb6140  sll         $t4, $t3, 5
    ctx->pc = 0x183904u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
label_183908:
    // 0x183908: 0x8dab0080  lw          $t3, 0x80($t5)
    ctx->pc = 0x183908u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 128)));
label_18390c:
    // 0x18390c: 0x1140000e  beqz        $t2, . + 4 + (0xE << 2)
label_183910:
    if (ctx->pc == 0x183910u) {
        ctx->pc = 0x183910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18390Cu;
        // 0x183910: 0x16c5821  addu        $t3, $t3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183914u;
        goto label_183914;
    }
    ctx->pc = 0x18390Cu;
    {
        const bool branch_taken_0x18390c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x183910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18390Cu;
        // 0x183910: 0x16c5821  addu        $t3, $t3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18390c) {
            ctx->pc = 0x183948u;
            goto label_183948;
        }
    }
    ctx->pc = 0x183914u;
label_183914:
    // 0x183914: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_183918:
    if (ctx->pc == 0x183918u) {
        ctx->pc = 0x18391Cu;
        goto label_18391c;
    }
    ctx->pc = 0x183914u;
    {
        const bool branch_taken_0x183914 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x183914) {
            ctx->pc = 0x183938u;
            goto label_183938;
        }
    }
    ctx->pc = 0x18391Cu;
label_18391c:
    // 0x18391c: 0x956c00c6  lhu         $t4, 0xC6($t3)
    ctx->pc = 0x18391cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 198)));
label_183920:
    // 0x183920: 0x318c0004  andi        $t4, $t4, 0x4
    ctx->pc = 0x183920u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
label_183924:
    // 0x183924: 0x15800008  bnez        $t4, . + 4 + (0x8 << 2)
label_183928:
    if (ctx->pc == 0x183928u) {
        ctx->pc = 0x18392Cu;
        goto label_18392c;
    }
    ctx->pc = 0x183924u;
    {
        const bool branch_taken_0x183924 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x183924) {
            ctx->pc = 0x183948u;
            goto label_183948;
        }
    }
    ctx->pc = 0x18392Cu;
label_18392c:
    // 0x18392c: 0x10000010  b           . + 4 + (0x10 << 2)
label_183930:
    if (ctx->pc == 0x183930u) {
        ctx->pc = 0x183934u;
        goto label_183934;
    }
    ctx->pc = 0x18392Cu;
    {
        const bool branch_taken_0x18392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18392c) {
            ctx->pc = 0x183970u;
            goto label_183970;
        }
    }
    ctx->pc = 0x183934u;
label_183934:
    // 0x183934: 0x0  nop
    ctx->pc = 0x183934u;
    // NOP
label_183938:
    // 0x183938: 0x956c00c6  lhu         $t4, 0xC6($t3)
    ctx->pc = 0x183938u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 198)));
label_18393c:
    // 0x18393c: 0x318c0002  andi        $t4, $t4, 0x2
    ctx->pc = 0x18393cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2);
label_183940:
    // 0x183940: 0x1180000b  beqz        $t4, . + 4 + (0xB << 2)
label_183944:
    if (ctx->pc == 0x183944u) {
        ctx->pc = 0x183948u;
        goto label_183948;
    }
    ctx->pc = 0x183940u;
    {
        const bool branch_taken_0x183940 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x183940) {
            ctx->pc = 0x183970u;
            goto label_183970;
        }
    }
    ctx->pc = 0x183948u;
label_183948:
    // 0x183948: 0x8fac00a8  lw          $t4, 0xA8($sp)
    ctx->pc = 0x183948u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_18394c:
    // 0x18394c: 0x256d0080  addiu       $t5, $t3, 0x80
    ctx->pc = 0x18394cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
label_183950:
    // 0x183950: 0x796c0000  lq          $t4, 0x0($t3)
    ctx->pc = 0x183950u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_183954:
    // 0x183954: 0x7dac0000  sq          $t4, 0x0($t5)
    ctx->pc = 0x183954u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 12));
label_183958:
    // 0x183958: 0x796c0010  lq          $t4, 0x10($t3)
    ctx->pc = 0x183958u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 16)));
label_18395c:
    // 0x18395c: 0x7dac0010  sq          $t4, 0x10($t5)
    ctx->pc = 0x18395cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 12));
label_183960:
    // 0x183960: 0x796c0020  lq          $t4, 0x20($t3)
    ctx->pc = 0x183960u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 32)));
label_183964:
    // 0x183964: 0x7dac0020  sq          $t4, 0x20($t5)
    ctx->pc = 0x183964u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 12));
label_183968:
    // 0x183968: 0x796c0030  lq          $t4, 0x30($t3)
    ctx->pc = 0x183968u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 48)));
label_18396c:
    // 0x18396c: 0x7dac0030  sq          $t4, 0x30($t5)
    ctx->pc = 0x18396cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 12));
label_183970:
    // 0x183970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x183970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_183974:
    // 0x183974: 0x0  nop
    ctx->pc = 0x183974u;
    // NOP
label_183978:
    // 0x183978: 0x8e8b004c  lw          $t3, 0x4C($s4)
    ctx->pc = 0x183978u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_18397c:
    // 0x18397c: 0x956b006a  lhu         $t3, 0x6A($t3)
    ctx->pc = 0x18397cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 106)));
label_183980:
    // 0x183980: 0x4b582a  slt         $t3, $v0, $t3
    ctx->pc = 0x183980u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_183984:
    // 0x183984: 0x1560ffdc  bnez        $t3, . + 4 + (-0x24 << 2)
label_183988:
    if (ctx->pc == 0x183988u) {
        ctx->pc = 0x18398Cu;
        goto label_18398c;
    }
    ctx->pc = 0x183984u;
    {
        const bool branch_taken_0x183984 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x183984) {
            ctx->pc = 0x1838F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1838f8;
        }
    }
    ctx->pc = 0x18398Cu;
label_18398c:
    // 0x18398c: 0x10000004  b           . + 4 + (0x4 << 2)
label_183990:
    if (ctx->pc == 0x183990u) {
        ctx->pc = 0x183994u;
        goto label_183994;
    }
    ctx->pc = 0x18398Cu;
    {
        const bool branch_taken_0x18398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18398c) {
            ctx->pc = 0x1839A0u;
            goto label_1839a0;
        }
    }
    ctx->pc = 0x183994u;
label_183994:
    // 0x183994: 0x0  nop
    ctx->pc = 0x183994u;
    // NOP
label_183998:
    // 0x183998: 0xae2011f4  sw          $zero, 0x11F4($s1)
    ctx->pc = 0x183998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4596), GPR_U32(ctx, 0));
label_18399c:
    // 0x18399c: 0xae2011f8  sw          $zero, 0x11F8($s1)
    ctx->pc = 0x18399cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4600), GPR_U32(ctx, 0));
label_1839a0:
    // 0x1839a0: 0x32c9ffff  andi        $t1, $s6, 0xFFFF
    ctx->pc = 0x1839a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_1839a4:
    // 0x1839a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1839a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1839a8:
    // 0x1839a8: 0x15220003  bne         $t1, $v0, . + 4 + (0x3 << 2)
label_1839ac:
    if (ctx->pc == 0x1839ACu) {
        ctx->pc = 0x1839B0u;
        goto label_1839b0;
    }
    ctx->pc = 0x1839A8u;
    {
        const bool branch_taken_0x1839a8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1839a8) {
            ctx->pc = 0x1839B8u;
            goto label_1839b8;
        }
    }
    ctx->pc = 0x1839B0u;
label_1839b0:
    // 0x1839b0: 0x3096ffff  andi        $s6, $a0, 0xFFFF
    ctx->pc = 0x1839b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1839b4:
    // 0x1839b4: 0x0  nop
    ctx->pc = 0x1839b4u;
    // NOP
label_1839b8:
    // 0x1839b8: 0x36420008  ori         $v0, $s2, 0x8
    ctx->pc = 0x1839b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
label_1839bc:
    // 0x1839bc: 0xae2211d4  sw          $v0, 0x11D4($s1)
    ctx->pc = 0x1839bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4564), GPR_U32(ctx, 2));
label_1839c0:
    // 0x1839c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1839c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1839c4:
    // 0x1839c4: 0xae2811c4  sw          $t0, 0x11C4($s1)
    ctx->pc = 0x1839c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4548), GPR_U32(ctx, 8));
label_1839c8:
    // 0x1839c8: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1839c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
label_1839cc:
    // 0x1839cc: 0xae2711c8  sw          $a3, 0x11C8($s1)
    ctx->pc = 0x1839ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4552), GPR_U32(ctx, 7));
label_1839d0:
    // 0x1839d0: 0xae2611cc  sw          $a2, 0x11CC($s1)
    ctx->pc = 0x1839d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4556), GPR_U32(ctx, 6));
label_1839d4:
    // 0x1839d4: 0xae2511d0  sw          $a1, 0x11D0($s1)
    ctx->pc = 0x1839d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4560), GPR_U32(ctx, 5));
label_1839d8:
    // 0x1839d8: 0xa23511dc  sb          $s5, 0x11DC($s1)
    ctx->pc = 0x1839d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4572), (uint8_t)GPR_U32(ctx, 21));
label_1839dc:
    // 0x1839dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1839e0:
    if (ctx->pc == 0x1839E0u) {
        ctx->pc = 0x1839E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839DCu;
        // 0x1839e0: 0xa23e11dd  sb          $fp, 0x11DD($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4573), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1839E4u;
        goto label_1839e4;
    }
    ctx->pc = 0x1839DCu;
    {
        const bool branch_taken_0x1839dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1839E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839DCu;
        // 0x1839e0: 0xa23e11dd  sb          $fp, 0x11DD($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4573), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839dc) {
            ctx->pc = 0x1839F0u;
            goto label_1839f0;
        }
    }
    ctx->pc = 0x1839E4u;
label_1839e4:
    // 0x1839e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1839e8:
    if (ctx->pc == 0x1839E8u) {
        ctx->pc = 0x1839ECu;
        goto label_1839ec;
    }
    ctx->pc = 0x1839E4u;
    {
        const bool branch_taken_0x1839e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1839e4) {
            ctx->pc = 0x1839F8u;
            goto label_1839f8;
        }
    }
    ctx->pc = 0x1839ECu;
label_1839ec:
    // 0x1839ec: 0x0  nop
    ctx->pc = 0x1839ecu;
    // NOP
label_1839f0:
    // 0x1839f0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1839f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1839f4:
    // 0x1839f4: 0x0  nop
    ctx->pc = 0x1839f4u;
    // NOP
label_1839f8:
    // 0x1839f8: 0xa22311de  sb          $v1, 0x11DE($s1)
    ctx->pc = 0x1839f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4574), (uint8_t)GPR_U32(ctx, 3));
label_1839fc:
    // 0x1839fc: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x1839fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_183a00:
    // 0x183a00: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x183a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_183a04:
    // 0x183a04: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x183a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_183a08:
    // 0x183a08: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_183a0c:
    // 0x183a0c: 0xae2311e0  sw          $v1, 0x11E0($s1)
    ctx->pc = 0x183a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 3));
label_183a10:
    // 0x183a10: 0xae2211e4  sw          $v0, 0x11E4($s1)
    ctx->pc = 0x183a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4580), GPR_U32(ctx, 2));
label_183a14:
    // 0x183a14: 0x8e2311e0  lw          $v1, 0x11E0($s1)
    ctx->pc = 0x183a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_183a18:
    // 0x183a18: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x183a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_183a1c:
    // 0x183a1c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x183a1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_183a20:
    // 0x183a20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_183a24:
    if (ctx->pc == 0x183A24u) {
        ctx->pc = 0x183A28u;
        goto label_183a28;
    }
    ctx->pc = 0x183A20u;
    {
        const bool branch_taken_0x183a20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183a20) {
            ctx->pc = 0x183A30u;
            goto label_183a30;
        }
    }
    ctx->pc = 0x183A28u;
label_183a28:
    // 0x183a28: 0xae2211e0  sw          $v0, 0x11E0($s1)
    ctx->pc = 0x183a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 2));
label_183a2c:
    // 0x183a2c: 0x0  nop
    ctx->pc = 0x183a2cu;
    // NOP
label_183a30:
    // 0x183a30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_183a34:
    // 0x183a34: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x183a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_183a38:
    // 0x183a38: 0x3c034670  lui         $v1, 0x4670
    ctx->pc = 0x183a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18032 << 16));
label_183a3c:
    // 0x183a3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x183a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_183a40:
    // 0x183a40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x183a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_183a44:
    // 0x183a44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x183a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_183a48:
    // 0x183a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183a4c:
    // 0x183a4c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x183a4cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_183a50:
    // 0x183a50: 0x0  nop
    ctx->pc = 0x183a50u;
    // NOP
label_183a54:
    // 0x183a54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x183a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_183a58:
    // 0x183a58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x183a58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183a5c:
    // 0x183a5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_183a60:
    if (ctx->pc == 0x183A60u) {
        ctx->pc = 0x183A64u;
        goto label_183a64;
    }
    ctx->pc = 0x183A5Cu;
    {
        const bool branch_taken_0x183a5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183a5c) {
            ctx->pc = 0x183A74u;
            goto label_183a74;
        }
    }
    ctx->pc = 0x183A64u;
label_183a64:
    // 0x183a64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183a64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_183a68:
    // 0x183a68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x183a68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183a6c:
    // 0x183a6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_183a70:
    if (ctx->pc == 0x183A70u) {
        ctx->pc = 0x183A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A6Cu;
        // 0x183a70: 0xae2311e8  sw          $v1, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183A74u;
        goto label_183a74;
    }
    ctx->pc = 0x183A6Cu;
    {
        const bool branch_taken_0x183a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A6Cu;
        // 0x183a70: 0xae2311e8  sw          $v1, 0x11E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a6c) {
            ctx->pc = 0x183A90u;
            goto label_183a90;
        }
    }
    ctx->pc = 0x183A74u;
label_183a74:
    // 0x183a74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x183a74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_183a78:
    // 0x183a78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x183a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_183a7c:
    // 0x183a7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_183a80:
    // 0x183a80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x183a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183a84:
    // 0x183a84: 0x0  nop
    ctx->pc = 0x183a84u;
    // NOP
label_183a88:
    // 0x183a88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183a8c:
    // 0x183a8c: 0xae2311e8  sw          $v1, 0x11E8($s1)
    ctx->pc = 0x183a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 3));
label_183a90:
    // 0x183a90: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_183a94:
    if (ctx->pc == 0x183A94u) {
        ctx->pc = 0x183A98u;
        goto label_183a98;
    }
    ctx->pc = 0x183A90u;
    {
        const bool branch_taken_0x183a90 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x183a90) {
            ctx->pc = 0x183AA4u;
            goto label_183aa4;
        }
    }
    ctx->pc = 0x183A98u;
label_183a98:
    // 0x183a98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x183a98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183a9c:
    // 0x183a9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_183aa0:
    if (ctx->pc == 0x183AA0u) {
        ctx->pc = 0x183AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A9Cu;
        // 0x183aa0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183AA4u;
        goto label_183aa4;
    }
    ctx->pc = 0x183A9Cu;
    {
        const bool branch_taken_0x183a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A9Cu;
        // 0x183aa0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a9c) {
            ctx->pc = 0x183AC0u;
            goto label_183ac0;
        }
    }
    ctx->pc = 0x183AA4u;
label_183aa4:
    // 0x183aa4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_183aa8:
    // 0x183aa8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x183aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_183aac:
    // 0x183aac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183ab0:
    // 0x183ab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183ab4:
    // 0x183ab4: 0x0  nop
    ctx->pc = 0x183ab4u;
    // NOP
label_183ab8:
    // 0x183ab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x183ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_183abc:
    // 0x183abc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x183abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_183ac0:
    // 0x183ac0: 0xe62011ec  swc1        $f0, 0x11EC($s1)
    ctx->pc = 0x183ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4588), bits); }
label_183ac4:
    // 0x183ac4: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x183ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_183ac8:
    // 0x183ac8: 0xae2211f0  sw          $v0, 0x11F0($s1)
    ctx->pc = 0x183ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4592), GPR_U32(ctx, 2));
label_183acc:
    // 0x183acc: 0x8e2311f0  lw          $v1, 0x11F0($s1)
    ctx->pc = 0x183accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4592)));
label_183ad0:
    // 0x183ad0: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x183ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
label_183ad4:
    // 0x183ad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x183ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_183ad8:
    // 0x183ad8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x183ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_183adc:
    // 0x183adc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x183adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_183ae0:
    // 0x183ae0: 0xae2311fc  sw          $v1, 0x11FC($s1)
    ctx->pc = 0x183ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 3));
label_183ae4:
    // 0x183ae4: 0xae201200  sw          $zero, 0x1200($s1)
    ctx->pc = 0x183ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4608), GPR_U32(ctx, 0));
label_183ae8:
    // 0x183ae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_183aec:
    if (ctx->pc == 0x183AECu) {
        ctx->pc = 0x183AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AE8u;
        // 0x183aec: 0xae331204  sw          $s3, 0x1204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4612), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183AF0u;
        goto label_183af0;
    }
    ctx->pc = 0x183AE8u;
    {
        const bool branch_taken_0x183ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AE8u;
        // 0x183aec: 0xae331204  sw          $s3, 0x1204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4612), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ae8) {
            ctx->pc = 0x183AF8u;
            goto label_183af8;
        }
    }
    ctx->pc = 0x183AF0u;
label_183af0:
    // 0x183af0: 0xae2011d8  sw          $zero, 0x11D8($s1)
    ctx->pc = 0x183af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4568), GPR_U32(ctx, 0));
label_183af4:
    // 0x183af4: 0x0  nop
    ctx->pc = 0x183af4u;
    // NOP
label_183af8:
    // 0x183af8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x183af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_183afc:
    // 0x183afc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x183afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_183b00:
    // 0x183b00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_183b04:
    if (ctx->pc == 0x183B04u) {
        ctx->pc = 0x183B08u;
        goto label_183b08;
    }
    ctx->pc = 0x183B00u;
    {
        const bool branch_taken_0x183b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b00) {
            ctx->pc = 0x183B18u;
            goto label_183b18;
        }
    }
    ctx->pc = 0x183B08u;
label_183b08:
    // 0x183b08: 0x8e2311d4  lw          $v1, 0x11D4($s1)
    ctx->pc = 0x183b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_183b0c:
    // 0x183b0c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_183b10:
    // 0x183b10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183b14:
    // 0x183b14: 0xae2211d4  sw          $v0, 0x11D4($s1)
    ctx->pc = 0x183b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4564), GPR_U32(ctx, 2));
label_183b18:
    // 0x183b18: 0x15163c  dsll32      $v0, $s5, 24
    ctx->pc = 0x183b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 24));
label_183b1c:
    // 0x183b1c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x183b1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_183b20:
    // 0x183b20: 0x4400093  bltz        $v0, . + 4 + (0x93 << 2)
label_183b24:
    if (ctx->pc == 0x183B24u) {
        ctx->pc = 0x183B28u;
        goto label_183b28;
    }
    ctx->pc = 0x183B20u;
    {
        const bool branch_taken_0x183b20 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x183b20) {
            ctx->pc = 0x183D70u;
            goto label_183d70;
        }
    }
    ctx->pc = 0x183B28u;
label_183b28:
    // 0x183b28: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x183b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_183b2c:
    // 0x183b2c: 0xae9101e8  sw          $s1, 0x1E8($s4)
    ctx->pc = 0x183b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 488), GPR_U32(ctx, 17));
label_183b30:
    // 0x183b30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_183b34:
    if (ctx->pc == 0x183B34u) {
        ctx->pc = 0x183B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B30u;
        // 0x183b34: 0xae8201ec  sw          $v0, 0x1EC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B38u;
        goto label_183b38;
    }
    ctx->pc = 0x183B30u;
    {
        const bool branch_taken_0x183b30 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x183B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B30u;
        // 0x183b34: 0xae8201ec  sw          $v0, 0x1EC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b30) {
            ctx->pc = 0x183B44u;
            goto label_183b44;
        }
    }
    ctx->pc = 0x183B38u;
label_183b38:
    // 0x183b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b3c:
    // 0x183b3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_183b40:
    if (ctx->pc == 0x183B40u) {
        ctx->pc = 0x183B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B3Cu;
        // 0x183b40: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B44u;
        goto label_183b44;
    }
    ctx->pc = 0x183B3Cu;
    {
        const bool branch_taken_0x183b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B3Cu;
        // 0x183b40: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b3c) {
            ctx->pc = 0x183B60u;
            goto label_183b60;
        }
    }
    ctx->pc = 0x183B44u;
label_183b44:
    // 0x183b44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x183b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_183b48:
    // 0x183b48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_183b4c:
    // 0x183b4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183b50:
    // 0x183b50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183b50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b54:
    // 0x183b54: 0x0  nop
    ctx->pc = 0x183b54u;
    // NOP
label_183b58:
    // 0x183b58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_183b5c:
    // 0x183b5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x183b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_183b60:
    // 0x183b60: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x183b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_183b64:
    // 0x183b64: 0x15363c  dsll32      $a2, $s5, 24
    ctx->pc = 0x183b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 24));
label_183b68:
    // 0x183b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183b6c:
    // 0x183b6c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x183b6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_183b70:
    // 0x183b70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183b74:
    // 0x183b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183b78:
    // 0x183b78: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x183b78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_183b7c:
    // 0x183b7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183b80:
    // 0x183b80: 0x0  nop
    ctx->pc = 0x183b80u;
    // NOP
label_183b84:
    // 0x183b84: 0x0  nop
    ctx->pc = 0x183b84u;
    // NOP
label_183b88:
    // 0x183b88: 0xc0613b0  jal         func_184EC0
label_183b8c:
    if (ctx->pc == 0x183B8Cu) {
        ctx->pc = 0x183B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B88u;
        // 0x183b8c: 0xe68001f0  swc1        $f0, 0x1F0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B90u;
        goto label_183b90;
    }
    ctx->pc = 0x183B88u;
    SET_GPR_U32(ctx, 31, 0x183B90u);
    ctx->pc = 0x183B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B88u;
    // 0x183b8c: 0xe68001f0  swc1        $f0, 0x1F0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x183B88u, 0x183B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B90u;
label_183b90:
    // 0x183b90: 0x32420800  andi        $v0, $s2, 0x800
    ctx->pc = 0x183b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
label_183b94:
    // 0x183b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_183b98:
    if (ctx->pc == 0x183B98u) {
        ctx->pc = 0x183B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B94u;
        // 0x183b98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183B9Cu;
        goto label_183b9c;
    }
    ctx->pc = 0x183B94u;
    {
        const bool branch_taken_0x183b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183B94u;
        // 0x183b98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b94) {
            ctx->pc = 0x183BA8u;
            goto label_183ba8;
        }
    }
    ctx->pc = 0x183B9Cu;
label_183b9c:
    // 0x183b9c: 0x10000010  b           . + 4 + (0x10 << 2)
label_183ba0:
    if (ctx->pc == 0x183BA0u) {
        ctx->pc = 0x183BA4u;
        goto label_183ba4;
    }
    ctx->pc = 0x183B9Cu;
    {
        const bool branch_taken_0x183b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b9c) {
            ctx->pc = 0x183BE0u;
            goto label_183be0;
        }
    }
    ctx->pc = 0x183BA4u;
label_183ba4:
    // 0x183ba4: 0x0  nop
    ctx->pc = 0x183ba4u;
    // NOP
label_183ba8:
    // 0x183ba8: 0x32421000  andi        $v0, $s2, 0x1000
    ctx->pc = 0x183ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
label_183bac:
    // 0x183bac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_183bb0:
    if (ctx->pc == 0x183BB0u) {
        ctx->pc = 0x183BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BACu;
        // 0x183bb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183BB4u;
        goto label_183bb4;
    }
    ctx->pc = 0x183BACu;
    {
        const bool branch_taken_0x183bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BACu;
        // 0x183bb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bac) {
            ctx->pc = 0x183BC0u;
            goto label_183bc0;
        }
    }
    ctx->pc = 0x183BB4u;
label_183bb4:
    // 0x183bb4: 0x1000000a  b           . + 4 + (0xA << 2)
label_183bb8:
    if (ctx->pc == 0x183BB8u) {
        ctx->pc = 0x183BBCu;
        goto label_183bbc;
    }
    ctx->pc = 0x183BB4u;
    {
        const bool branch_taken_0x183bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183bb4) {
            ctx->pc = 0x183BE0u;
            goto label_183be0;
        }
    }
    ctx->pc = 0x183BBCu;
label_183bbc:
    // 0x183bbc: 0x0  nop
    ctx->pc = 0x183bbcu;
    // NOP
label_183bc0:
    // 0x183bc0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_183bc4:
    if (ctx->pc == 0x183BC4u) {
        ctx->pc = 0x183BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BC0u;
        // 0x183bc4: 0x32422000  andi        $v0, $s2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183BC8u;
        goto label_183bc8;
    }
    ctx->pc = 0x183BC0u;
    {
        const bool branch_taken_0x183bc0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BC0u;
        // 0x183bc4: 0x32422000  andi        $v0, $s2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bc0) {
            ctx->pc = 0x183BD0u;
            goto label_183bd0;
        }
    }
    ctx->pc = 0x183BC8u;
label_183bc8:
    // 0x183bc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_183bcc:
    if (ctx->pc == 0x183BCCu) {
        ctx->pc = 0x183BD0u;
        goto label_183bd0;
    }
    ctx->pc = 0x183BC8u;
    {
        const bool branch_taken_0x183bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183bc8) {
            ctx->pc = 0x183BD8u;
            goto label_183bd8;
        }
    }
    ctx->pc = 0x183BD0u;
label_183bd0:
    // 0x183bd0: 0x10000003  b           . + 4 + (0x3 << 2)
label_183bd4:
    if (ctx->pc == 0x183BD4u) {
        ctx->pc = 0x183BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BD0u;
        // 0x183bd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183BD8u;
        goto label_183bd8;
    }
    ctx->pc = 0x183BD0u;
    {
        const bool branch_taken_0x183bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BD0u;
        // 0x183bd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bd0) {
            ctx->pc = 0x183BE0u;
            goto label_183be0;
        }
    }
    ctx->pc = 0x183BD8u;
label_183bd8:
    // 0x183bd8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x183bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183bdc:
    // 0x183bdc: 0x0  nop
    ctx->pc = 0x183bdcu;
    // NOP
label_183be0:
    // 0x183be0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_183be4:
    // 0x183be4: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
label_183be8:
    if (ctx->pc == 0x183BE8u) {
        ctx->pc = 0x183BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BE4u;
        // 0x183be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183BECu;
        goto label_183bec;
    }
    ctx->pc = 0x183BE4u;
    {
        const bool branch_taken_0x183be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x183BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183BE4u;
        // 0x183be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183be4) {
            ctx->pc = 0x183D58u;
            goto label_183d58;
        }
    }
    ctx->pc = 0x183BECu;
label_183bec:
    // 0x183bec: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_183bf0:
    if (ctx->pc == 0x183BF0u) {
        ctx->pc = 0x183BF4u;
        goto label_183bf4;
    }
    ctx->pc = 0x183BECu;
    {
        const bool branch_taken_0x183bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x183bec) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183BF4u;
label_183bf4:
    // 0x183bf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_183bf8:
    if (ctx->pc == 0x183BF8u) {
        ctx->pc = 0x183BFCu;
        goto label_183bfc;
    }
    ctx->pc = 0x183BF4u;
    {
        const bool branch_taken_0x183bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183bf4) {
            ctx->pc = 0x183C08u;
            goto label_183c08;
        }
    }
    ctx->pc = 0x183BFCu;
label_183bfc:
    // 0x183bfc: 0x10000064  b           . + 4 + (0x64 << 2)
label_183c00:
    if (ctx->pc == 0x183C00u) {
        ctx->pc = 0x183C04u;
        goto label_183c04;
    }
    ctx->pc = 0x183BFCu;
    {
        const bool branch_taken_0x183bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183bfc) {
            ctx->pc = 0x183D90u;
            goto label_183d90;
        }
    }
    ctx->pc = 0x183C04u;
label_183c04:
    // 0x183c04: 0x0  nop
    ctx->pc = 0x183c04u;
    // NOP
label_183c08:
    // 0x183c08: 0x8e2211e0  lw          $v0, 0x11E0($s1)
    ctx->pc = 0x183c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_183c0c:
    // 0x183c0c: 0xae9101e8  sw          $s1, 0x1E8($s4)
    ctx->pc = 0x183c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 488), GPR_U32(ctx, 17));
label_183c10:
    // 0x183c10: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_183c14:
    if (ctx->pc == 0x183C14u) {
        ctx->pc = 0x183C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C10u;
        // 0x183c14: 0xae8201ec  sw          $v0, 0x1EC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183C18u;
        goto label_183c18;
    }
    ctx->pc = 0x183C10u;
    {
        const bool branch_taken_0x183c10 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x183C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C10u;
        // 0x183c14: 0xae8201ec  sw          $v0, 0x1EC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c10) {
            ctx->pc = 0x183C24u;
            goto label_183c24;
        }
    }
    ctx->pc = 0x183C18u;
label_183c18:
    // 0x183c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183c1c:
    // 0x183c1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_183c20:
    if (ctx->pc == 0x183C20u) {
        ctx->pc = 0x183C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C1Cu;
        // 0x183c20: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183C24u;
        goto label_183c24;
    }
    ctx->pc = 0x183C1Cu;
    {
        const bool branch_taken_0x183c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C1Cu;
        // 0x183c20: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c1c) {
            ctx->pc = 0x183C40u;
            goto label_183c40;
        }
    }
    ctx->pc = 0x183C24u;
label_183c24:
    // 0x183c24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x183c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_183c28:
    // 0x183c28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_183c2c:
    // 0x183c2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183c30:
    // 0x183c30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183c30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183c34:
    // 0x183c34: 0x0  nop
    ctx->pc = 0x183c34u;
    // NOP
label_183c38:
    // 0x183c38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_183c3c:
    // 0x183c3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x183c3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_183c40:
    // 0x183c40: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x183c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_183c44:
    // 0x183c44: 0x15363c  dsll32      $a2, $s5, 24
    ctx->pc = 0x183c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 24));
label_183c48:
    // 0x183c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183c4c:
    // 0x183c4c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x183c4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_183c50:
    // 0x183c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183c54:
    // 0x183c54: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x183c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_183c58:
    // 0x183c58: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x183c58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_183c5c:
    // 0x183c5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183c60:
    // 0x183c60: 0x0  nop
    ctx->pc = 0x183c60u;
    // NOP
label_183c64:
    // 0x183c64: 0x0  nop
    ctx->pc = 0x183c64u;
    // NOP
label_183c68:
    // 0x183c68: 0xc0613b0  jal         func_184EC0
label_183c6c:
    if (ctx->pc == 0x183C6Cu) {
        ctx->pc = 0x183C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C68u;
        // 0x183c6c: 0xe68001f0  swc1        $f0, 0x1F0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183C70u;
        goto label_183c70;
    }
    ctx->pc = 0x183C68u;
    SET_GPR_U32(ctx, 31, 0x183C70u);
    ctx->pc = 0x183C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C68u;
    // 0x183c6c: 0xe68001f0  swc1        $f0, 0x1F0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x183C68u, 0x183C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C70u;
label_183c70:
    // 0x183c70: 0x10000047  b           . + 4 + (0x47 << 2)
label_183c74:
    if (ctx->pc == 0x183C74u) {
        ctx->pc = 0x183C78u;
        goto label_183c78;
    }
    ctx->pc = 0x183C70u;
    {
        const bool branch_taken_0x183c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c70) {
            ctx->pc = 0x183D90u;
            goto label_183d90;
        }
    }
    ctx->pc = 0x183C78u;
label_183c78:
    // 0x183c78: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x183c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
label_183c7c:
    // 0x183c7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_183c80:
    if (ctx->pc == 0x183C80u) {
        ctx->pc = 0x183C84u;
        goto label_183c84;
    }
    ctx->pc = 0x183C7Cu;
    {
        const bool branch_taken_0x183c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c7c) {
            ctx->pc = 0x183CB0u;
            goto label_183cb0;
        }
    }
    ctx->pc = 0x183C84u;
label_183c84:
    // 0x183c84: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x183c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_183c88:
    // 0x183c88: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x183c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_183c8c:
    // 0x183c8c: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x183c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_183c90:
    // 0x183c90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x183c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_183c94:
    // 0x183c94: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x183c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_183c98:
    // 0x183c98: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x183c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_183c9c:
    // 0x183c9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_183ca0:
    if (ctx->pc == 0x183CA0u) {
        ctx->pc = 0x183CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C9Cu;
        // 0x183ca0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183CA4u;
        goto label_183ca4;
    }
    ctx->pc = 0x183C9Cu;
    {
        const bool branch_taken_0x183c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183C9Cu;
        // 0x183ca0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c9c) {
            ctx->pc = 0x183CE8u;
            goto label_183ce8;
        }
    }
    ctx->pc = 0x183CA4u;
label_183ca4:
    // 0x183ca4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x183ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_183ca8:
    // 0x183ca8: 0x1000000f  b           . + 4 + (0xF << 2)
label_183cac:
    if (ctx->pc == 0x183CACu) {
        ctx->pc = 0x183CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CA8u;
        // 0x183cac: 0xae2211d8  sw          $v0, 0x11D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183CB0u;
        goto label_183cb0;
    }
    ctx->pc = 0x183CA8u;
    {
        const bool branch_taken_0x183ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CA8u;
        // 0x183cac: 0xae2211d8  sw          $v0, 0x11D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ca8) {
            ctx->pc = 0x183CE8u;
            goto label_183ce8;
        }
    }
    ctx->pc = 0x183CB0u;
label_183cb0:
    // 0x183cb0: 0x8e2211e0  lw          $v0, 0x11E0($s1)
    ctx->pc = 0x183cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_183cb4:
    // 0x183cb4: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x183cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_183cb8:
    // 0x183cb8: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x183cb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_183cbc:
    // 0x183cbc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_183cc0:
    if (ctx->pc == 0x183CC0u) {
        ctx->pc = 0x183CC4u;
        goto label_183cc4;
    }
    ctx->pc = 0x183CBCu;
    {
        const bool branch_taken_0x183cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183cbc) {
            ctx->pc = 0x183CE0u;
            goto label_183ce0;
        }
    }
    ctx->pc = 0x183CC4u;
label_183cc4:
    // 0x183cc4: 0x8e2311e4  lw          $v1, 0x11E4($s1)
    ctx->pc = 0x183cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_183cc8:
    // 0x183cc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x183cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_183ccc:
    // 0x183ccc: 0xae2211d8  sw          $v0, 0x11D8($s1)
    ctx->pc = 0x183cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4568), GPR_U32(ctx, 2));
label_183cd0:
    // 0x183cd0: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x183cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_183cd4:
    // 0x183cd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_183cd8:
    if (ctx->pc == 0x183CD8u) {
        ctx->pc = 0x183CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CD4u;
        // 0x183cd8: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183CDCu;
        goto label_183cdc;
    }
    ctx->pc = 0x183CD4u;
    {
        const bool branch_taken_0x183cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CD4u;
        // 0x183cd8: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cd4) {
            ctx->pc = 0x183CE8u;
            goto label_183ce8;
        }
    }
    ctx->pc = 0x183CDCu;
label_183cdc:
    // 0x183cdc: 0x0  nop
    ctx->pc = 0x183cdcu;
    // NOP
label_183ce0:
    // 0x183ce0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x183ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_183ce4:
    // 0x183ce4: 0x0  nop
    ctx->pc = 0x183ce4u;
    // NOP
label_183ce8:
    // 0x183ce8: 0xae9101e8  sw          $s1, 0x1E8($s4)
    ctx->pc = 0x183ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 488), GPR_U32(ctx, 17));
label_183cec:
    // 0x183cec: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_183cf0:
    if (ctx->pc == 0x183CF0u) {
        ctx->pc = 0x183CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CECu;
        // 0x183cf0: 0xae8401ec  sw          $a0, 0x1EC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183CF4u;
        goto label_183cf4;
    }
    ctx->pc = 0x183CECu;
    {
        const bool branch_taken_0x183cec = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x183CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CECu;
        // 0x183cf0: 0xae8401ec  sw          $a0, 0x1EC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cec) {
            ctx->pc = 0x183D00u;
            goto label_183d00;
        }
    }
    ctx->pc = 0x183CF4u;
label_183cf4:
    // 0x183cf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x183cf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183cf8:
    // 0x183cf8: 0x10000008  b           . + 4 + (0x8 << 2)
label_183cfc:
    if (ctx->pc == 0x183CFCu) {
        ctx->pc = 0x183CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CF8u;
        // 0x183cfc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183D00u;
        goto label_183d00;
    }
    ctx->pc = 0x183CF8u;
    {
        const bool branch_taken_0x183cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183CF8u;
        // 0x183cfc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cf8) {
            ctx->pc = 0x183D1Cu;
            goto label_183d1c;
        }
    }
    ctx->pc = 0x183D00u;
label_183d00:
    // 0x183d00: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x183d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_183d04:
    // 0x183d04: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x183d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_183d08:
    // 0x183d08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183d0c:
    // 0x183d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183d10:
    // 0x183d10: 0x0  nop
    ctx->pc = 0x183d10u;
    // NOP
label_183d14:
    // 0x183d14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_183d18:
    // 0x183d18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x183d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_183d1c:
    // 0x183d1c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x183d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_183d20:
    // 0x183d20: 0x15363c  dsll32      $a2, $s5, 24
    ctx->pc = 0x183d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 24));
label_183d24:
    // 0x183d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183d28:
    // 0x183d28: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x183d28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_183d2c:
    // 0x183d2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183d30:
    // 0x183d30: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x183d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_183d34:
    // 0x183d34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x183d34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_183d38:
    // 0x183d38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183d3c:
    // 0x183d3c: 0x0  nop
    ctx->pc = 0x183d3cu;
    // NOP
label_183d40:
    // 0x183d40: 0x0  nop
    ctx->pc = 0x183d40u;
    // NOP
label_183d44:
    // 0x183d44: 0xc0613b0  jal         func_184EC0
label_183d48:
    if (ctx->pc == 0x183D48u) {
        ctx->pc = 0x183D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D44u;
        // 0x183d48: 0xe68001f0  swc1        $f0, 0x1F0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183D4Cu;
        goto label_183d4c;
    }
    ctx->pc = 0x183D44u;
    SET_GPR_U32(ctx, 31, 0x183D4Cu);
    ctx->pc = 0x183D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D44u;
    // 0x183d48: 0xe68001f0  swc1        $f0, 0x1F0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x184EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EC0u, 0x183D44u, 0x183D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D4Cu;
label_183d4c:
    // 0x183d4c: 0x10000010  b           . + 4 + (0x10 << 2)
label_183d50:
    if (ctx->pc == 0x183D50u) {
        ctx->pc = 0x183D54u;
        goto label_183d54;
    }
    ctx->pc = 0x183D4Cu;
    {
        const bool branch_taken_0x183d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183d4c) {
            ctx->pc = 0x183D90u;
            goto label_183d90;
        }
    }
    ctx->pc = 0x183D54u;
label_183d54:
    // 0x183d54: 0x0  nop
    ctx->pc = 0x183d54u;
    // NOP
label_183d58:
    // 0x183d58: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x183d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_183d5c:
    // 0x183d5c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x183d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_183d60:
    // 0x183d60: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x183d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_183d64:
    // 0x183d64: 0x1000000a  b           . + 4 + (0xA << 2)
label_183d68:
    if (ctx->pc == 0x183D68u) {
        ctx->pc = 0x183D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D64u;
        // 0x183d68: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183D6Cu;
        goto label_183d6c;
    }
    ctx->pc = 0x183D64u;
    {
        const bool branch_taken_0x183d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D64u;
        // 0x183d68: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d64) {
            ctx->pc = 0x183D90u;
            goto label_183d90;
        }
    }
    ctx->pc = 0x183D6Cu;
label_183d6c:
    // 0x183d6c: 0x0  nop
    ctx->pc = 0x183d6cu;
    // NOP
label_183d70:
    // 0x183d70: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x183d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_183d74:
    // 0x183d74: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x183d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_183d78:
    // 0x183d78: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x183d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_183d7c:
    // 0x183d7c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x183d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_183d80:
    // 0x183d80: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x183d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_183d84:
    // 0x183d84: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x183d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_183d88:
    // 0x183d88: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x183d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_183d8c:
    // 0x183d8c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x183d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_183d90:
    // 0x183d90: 0x8e860078  lw          $a2, 0x78($s4)
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_183d94:
    // 0x183d94: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_183d98:
    if (ctx->pc == 0x183D98u) {
        ctx->pc = 0x183D9Cu;
        goto label_183d9c;
    }
    ctx->pc = 0x183D94u;
    {
        const bool branch_taken_0x183d94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x183d94) {
            ctx->pc = 0x183DC0u;
            goto label_183dc0;
        }
    }
    ctx->pc = 0x183D9Cu;
label_183d9c:
    // 0x183d9c: 0x8e2311d4  lw          $v1, 0x11D4($s1)
    ctx->pc = 0x183d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
label_183da0:
    // 0x183da0: 0x278280b0  addiu       $v0, $gp, -0x7F50
    ctx->pc = 0x183da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934704));
label_183da4:
    // 0x183da4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x183da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_183da8:
    // 0x183da8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x183da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_183dac:
    // 0x183dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x183dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_183db0:
    // 0x183db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_183db4:
    // 0x183db4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_183db8:
    // 0x183db8: 0xc0f809  jalr        $a2
label_183dbc:
    if (ctx->pc == 0x183DBCu) {
        ctx->pc = 0x183DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DB8u;
        // 0x183dbc: 0x8e850084  lw          $a1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183DC0u;
        goto label_183dc0;
    }
    ctx->pc = 0x183DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x183DC0u);
        ctx->pc = 0x183DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DB8u;
        // 0x183dbc: 0x8e850084  lw          $a1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183DB8u, 0x183DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183DC0u;
label_183dc0:
    // 0x183dc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183dc4:
    // 0x183dc4: 0xc060d40  jal         func_183500
label_183dc8:
    if (ctx->pc == 0x183DC8u) {
        ctx->pc = 0x183DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DC4u;
        // 0x183dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183DCCu;
        goto label_183dcc;
    }
    ctx->pc = 0x183DC4u;
    SET_GPR_U32(ctx, 31, 0x183DCCu);
    ctx->pc = 0x183DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DC4u;
    // 0x183dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x183DC4u, 0x183DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DCCu;
label_183dcc:
    // 0x183dcc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_183dd0:
    if (ctx->pc == 0x183DD0u) {
        ctx->pc = 0x183DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DCCu;
        // 0x183dd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183DD4u;
        goto label_183dd4;
    }
    ctx->pc = 0x183DCCu;
    {
        const bool branch_taken_0x183dcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x183DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DCCu;
        // 0x183dd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dcc) {
            ctx->pc = 0x183DE0u;
            goto label_183de0;
        }
    }
    ctx->pc = 0x183DD4u;
label_183dd4:
    // 0x183dd4: 0xc061c08  jal         func_187020
label_183dd8:
    if (ctx->pc == 0x183DD8u) {
        ctx->pc = 0x183DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DD4u;
        // 0x183dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183DDCu;
        goto label_183ddc;
    }
    ctx->pc = 0x183DD4u;
    SET_GPR_U32(ctx, 31, 0x183DDCu);
    ctx->pc = 0x183DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183DD4u;
    // 0x183dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187020u, 0x183DD4u, 0x183DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DDCu;
label_183ddc:
    // 0x183ddc: 0x0  nop
    ctx->pc = 0x183ddcu;
    // NOP
label_183de0:
    // 0x183de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183de4:
    // 0x183de4: 0x0  nop
    ctx->pc = 0x183de4u;
    // NOP
label_183de8:
    // 0x183de8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_183dec:
    // 0x183dec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183decu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_183df0:
    // 0x183df0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x183df0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_183df4:
    // 0x183df4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_183df8:
    // 0x183df8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_183dfc:
    // 0x183dfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_183e00:
    // 0x183e00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_183e04:
    // 0x183e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_183e08:
    // 0x183e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_183e0c:
    // 0x183e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_183e10:
    // 0x183e10: 0x3e00008  jr          $ra
label_183e14:
    if (ctx->pc == 0x183E14u) {
        ctx->pc = 0x183E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E10u;
        // 0x183e14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183E18u;
        goto label_fallthrough_0x183e10;
    }
    ctx->pc = 0x183E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E10u;
        // 0x183e14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x183e10:
    ctx->pc = 0x183E18u;
}
