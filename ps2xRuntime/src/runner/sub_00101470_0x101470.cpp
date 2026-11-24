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

// Function: sub_00101470
// Address: 0x101470 - 0x101c84
void sub_00101470_0x101470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101470_0x101470");
#endif

    switch (ctx->pc) {
        case 0x101470u: goto label_101470;
        case 0x101474u: goto label_101474;
        case 0x101478u: goto label_101478;
        case 0x10147cu: goto label_10147c;
        case 0x101480u: goto label_101480;
        case 0x101484u: goto label_101484;
        case 0x101488u: goto label_101488;
        case 0x10148cu: goto label_10148c;
        case 0x101490u: goto label_101490;
        case 0x101494u: goto label_101494;
        case 0x101498u: goto label_101498;
        case 0x10149cu: goto label_10149c;
        case 0x1014a0u: goto label_1014a0;
        case 0x1014a4u: goto label_1014a4;
        case 0x1014a8u: goto label_1014a8;
        case 0x1014acu: goto label_1014ac;
        case 0x1014b0u: goto label_1014b0;
        case 0x1014b4u: goto label_1014b4;
        case 0x1014b8u: goto label_1014b8;
        case 0x1014bcu: goto label_1014bc;
        case 0x1014c0u: goto label_1014c0;
        case 0x1014c4u: goto label_1014c4;
        case 0x1014c8u: goto label_1014c8;
        case 0x1014ccu: goto label_1014cc;
        case 0x1014d0u: goto label_1014d0;
        case 0x1014d4u: goto label_1014d4;
        case 0x1014d8u: goto label_1014d8;
        case 0x1014dcu: goto label_1014dc;
        case 0x1014e0u: goto label_1014e0;
        case 0x1014e4u: goto label_1014e4;
        case 0x1014e8u: goto label_1014e8;
        case 0x1014ecu: goto label_1014ec;
        case 0x1014f0u: goto label_1014f0;
        case 0x1014f4u: goto label_1014f4;
        case 0x1014f8u: goto label_1014f8;
        case 0x1014fcu: goto label_1014fc;
        case 0x101500u: goto label_101500;
        case 0x101504u: goto label_101504;
        case 0x101508u: goto label_101508;
        case 0x10150cu: goto label_10150c;
        case 0x101510u: goto label_101510;
        case 0x101514u: goto label_101514;
        case 0x101518u: goto label_101518;
        case 0x10151cu: goto label_10151c;
        case 0x101520u: goto label_101520;
        case 0x101524u: goto label_101524;
        case 0x101528u: goto label_101528;
        case 0x10152cu: goto label_10152c;
        case 0x101530u: goto label_101530;
        case 0x101534u: goto label_101534;
        case 0x101538u: goto label_101538;
        case 0x10153cu: goto label_10153c;
        case 0x101540u: goto label_101540;
        case 0x101544u: goto label_101544;
        case 0x101548u: goto label_101548;
        case 0x10154cu: goto label_10154c;
        case 0x101550u: goto label_101550;
        case 0x101554u: goto label_101554;
        case 0x101558u: goto label_101558;
        case 0x10155cu: goto label_10155c;
        case 0x101560u: goto label_101560;
        case 0x101564u: goto label_101564;
        case 0x101568u: goto label_101568;
        case 0x10156cu: goto label_10156c;
        case 0x101570u: goto label_101570;
        case 0x101574u: goto label_101574;
        case 0x101578u: goto label_101578;
        case 0x10157cu: goto label_10157c;
        case 0x101580u: goto label_101580;
        case 0x101584u: goto label_101584;
        case 0x101588u: goto label_101588;
        case 0x10158cu: goto label_10158c;
        case 0x101590u: goto label_101590;
        case 0x101594u: goto label_101594;
        case 0x101598u: goto label_101598;
        case 0x10159cu: goto label_10159c;
        case 0x1015a0u: goto label_1015a0;
        case 0x1015a4u: goto label_1015a4;
        case 0x1015a8u: goto label_1015a8;
        case 0x1015acu: goto label_1015ac;
        case 0x1015b0u: goto label_1015b0;
        case 0x1015b4u: goto label_1015b4;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015bcu: goto label_1015bc;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015c4u: goto label_1015c4;
        case 0x1015c8u: goto label_1015c8;
        case 0x1015ccu: goto label_1015cc;
        case 0x1015d0u: goto label_1015d0;
        case 0x1015d4u: goto label_1015d4;
        case 0x1015d8u: goto label_1015d8;
        case 0x1015dcu: goto label_1015dc;
        case 0x1015e0u: goto label_1015e0;
        case 0x1015e4u: goto label_1015e4;
        case 0x1015e8u: goto label_1015e8;
        case 0x1015ecu: goto label_1015ec;
        case 0x1015f0u: goto label_1015f0;
        case 0x1015f4u: goto label_1015f4;
        case 0x1015f8u: goto label_1015f8;
        case 0x1015fcu: goto label_1015fc;
        case 0x101600u: goto label_101600;
        case 0x101604u: goto label_101604;
        case 0x101608u: goto label_101608;
        case 0x10160cu: goto label_10160c;
        case 0x101610u: goto label_101610;
        case 0x101614u: goto label_101614;
        case 0x101618u: goto label_101618;
        case 0x10161cu: goto label_10161c;
        case 0x101620u: goto label_101620;
        case 0x101624u: goto label_101624;
        case 0x101628u: goto label_101628;
        case 0x10162cu: goto label_10162c;
        case 0x101630u: goto label_101630;
        case 0x101634u: goto label_101634;
        case 0x101638u: goto label_101638;
        case 0x10163cu: goto label_10163c;
        case 0x101640u: goto label_101640;
        case 0x101644u: goto label_101644;
        case 0x101648u: goto label_101648;
        case 0x10164cu: goto label_10164c;
        case 0x101650u: goto label_101650;
        case 0x101654u: goto label_101654;
        case 0x101658u: goto label_101658;
        case 0x10165cu: goto label_10165c;
        case 0x101660u: goto label_101660;
        case 0x101664u: goto label_101664;
        case 0x101668u: goto label_101668;
        case 0x10166cu: goto label_10166c;
        case 0x101670u: goto label_101670;
        case 0x101674u: goto label_101674;
        case 0x101678u: goto label_101678;
        case 0x10167cu: goto label_10167c;
        case 0x101680u: goto label_101680;
        case 0x101684u: goto label_101684;
        case 0x101688u: goto label_101688;
        case 0x10168cu: goto label_10168c;
        case 0x101690u: goto label_101690;
        case 0x101694u: goto label_101694;
        case 0x101698u: goto label_101698;
        case 0x10169cu: goto label_10169c;
        case 0x1016a0u: goto label_1016a0;
        case 0x1016a4u: goto label_1016a4;
        case 0x1016a8u: goto label_1016a8;
        case 0x1016acu: goto label_1016ac;
        case 0x1016b0u: goto label_1016b0;
        case 0x1016b4u: goto label_1016b4;
        case 0x1016b8u: goto label_1016b8;
        case 0x1016bcu: goto label_1016bc;
        case 0x1016c0u: goto label_1016c0;
        case 0x1016c4u: goto label_1016c4;
        case 0x1016c8u: goto label_1016c8;
        case 0x1016ccu: goto label_1016cc;
        case 0x1016d0u: goto label_1016d0;
        case 0x1016d4u: goto label_1016d4;
        case 0x1016d8u: goto label_1016d8;
        case 0x1016dcu: goto label_1016dc;
        case 0x1016e0u: goto label_1016e0;
        case 0x1016e4u: goto label_1016e4;
        case 0x1016e8u: goto label_1016e8;
        case 0x1016ecu: goto label_1016ec;
        case 0x1016f0u: goto label_1016f0;
        case 0x1016f4u: goto label_1016f4;
        case 0x1016f8u: goto label_1016f8;
        case 0x1016fcu: goto label_1016fc;
        case 0x101700u: goto label_101700;
        case 0x101704u: goto label_101704;
        case 0x101708u: goto label_101708;
        case 0x10170cu: goto label_10170c;
        case 0x101710u: goto label_101710;
        case 0x101714u: goto label_101714;
        case 0x101718u: goto label_101718;
        case 0x10171cu: goto label_10171c;
        case 0x101720u: goto label_101720;
        case 0x101724u: goto label_101724;
        case 0x101728u: goto label_101728;
        case 0x10172cu: goto label_10172c;
        case 0x101730u: goto label_101730;
        case 0x101734u: goto label_101734;
        case 0x101738u: goto label_101738;
        case 0x10173cu: goto label_10173c;
        case 0x101740u: goto label_101740;
        case 0x101744u: goto label_101744;
        case 0x101748u: goto label_101748;
        case 0x10174cu: goto label_10174c;
        case 0x101750u: goto label_101750;
        case 0x101754u: goto label_101754;
        case 0x101758u: goto label_101758;
        case 0x10175cu: goto label_10175c;
        case 0x101760u: goto label_101760;
        case 0x101764u: goto label_101764;
        case 0x101768u: goto label_101768;
        case 0x10176cu: goto label_10176c;
        case 0x101770u: goto label_101770;
        case 0x101774u: goto label_101774;
        case 0x101778u: goto label_101778;
        case 0x10177cu: goto label_10177c;
        case 0x101780u: goto label_101780;
        case 0x101784u: goto label_101784;
        case 0x101788u: goto label_101788;
        case 0x10178cu: goto label_10178c;
        case 0x101790u: goto label_101790;
        case 0x101794u: goto label_101794;
        case 0x101798u: goto label_101798;
        case 0x10179cu: goto label_10179c;
        case 0x1017a0u: goto label_1017a0;
        case 0x1017a4u: goto label_1017a4;
        case 0x1017a8u: goto label_1017a8;
        case 0x1017acu: goto label_1017ac;
        case 0x1017b0u: goto label_1017b0;
        case 0x1017b4u: goto label_1017b4;
        case 0x1017b8u: goto label_1017b8;
        case 0x1017bcu: goto label_1017bc;
        case 0x1017c0u: goto label_1017c0;
        case 0x1017c4u: goto label_1017c4;
        case 0x1017c8u: goto label_1017c8;
        case 0x1017ccu: goto label_1017cc;
        case 0x1017d0u: goto label_1017d0;
        case 0x1017d4u: goto label_1017d4;
        case 0x1017d8u: goto label_1017d8;
        case 0x1017dcu: goto label_1017dc;
        case 0x1017e0u: goto label_1017e0;
        case 0x1017e4u: goto label_1017e4;
        case 0x1017e8u: goto label_1017e8;
        case 0x1017ecu: goto label_1017ec;
        case 0x1017f0u: goto label_1017f0;
        case 0x1017f4u: goto label_1017f4;
        case 0x1017f8u: goto label_1017f8;
        case 0x1017fcu: goto label_1017fc;
        case 0x101800u: goto label_101800;
        case 0x101804u: goto label_101804;
        case 0x101808u: goto label_101808;
        case 0x10180cu: goto label_10180c;
        case 0x101810u: goto label_101810;
        case 0x101814u: goto label_101814;
        case 0x101818u: goto label_101818;
        case 0x10181cu: goto label_10181c;
        case 0x101820u: goto label_101820;
        case 0x101824u: goto label_101824;
        case 0x101828u: goto label_101828;
        case 0x10182cu: goto label_10182c;
        case 0x101830u: goto label_101830;
        case 0x101834u: goto label_101834;
        case 0x101838u: goto label_101838;
        case 0x10183cu: goto label_10183c;
        case 0x101840u: goto label_101840;
        case 0x101844u: goto label_101844;
        case 0x101848u: goto label_101848;
        case 0x10184cu: goto label_10184c;
        case 0x101850u: goto label_101850;
        case 0x101854u: goto label_101854;
        case 0x101858u: goto label_101858;
        case 0x10185cu: goto label_10185c;
        case 0x101860u: goto label_101860;
        case 0x101864u: goto label_101864;
        case 0x101868u: goto label_101868;
        case 0x10186cu: goto label_10186c;
        case 0x101870u: goto label_101870;
        case 0x101874u: goto label_101874;
        case 0x101878u: goto label_101878;
        case 0x10187cu: goto label_10187c;
        case 0x101880u: goto label_101880;
        case 0x101884u: goto label_101884;
        case 0x101888u: goto label_101888;
        case 0x10188cu: goto label_10188c;
        case 0x101890u: goto label_101890;
        case 0x101894u: goto label_101894;
        case 0x101898u: goto label_101898;
        case 0x10189cu: goto label_10189c;
        case 0x1018a0u: goto label_1018a0;
        case 0x1018a4u: goto label_1018a4;
        case 0x1018a8u: goto label_1018a8;
        case 0x1018acu: goto label_1018ac;
        case 0x1018b0u: goto label_1018b0;
        case 0x1018b4u: goto label_1018b4;
        case 0x1018b8u: goto label_1018b8;
        case 0x1018bcu: goto label_1018bc;
        case 0x1018c0u: goto label_1018c0;
        case 0x1018c4u: goto label_1018c4;
        case 0x1018c8u: goto label_1018c8;
        case 0x1018ccu: goto label_1018cc;
        case 0x1018d0u: goto label_1018d0;
        case 0x1018d4u: goto label_1018d4;
        case 0x1018d8u: goto label_1018d8;
        case 0x1018dcu: goto label_1018dc;
        case 0x1018e0u: goto label_1018e0;
        case 0x1018e4u: goto label_1018e4;
        case 0x1018e8u: goto label_1018e8;
        case 0x1018ecu: goto label_1018ec;
        case 0x1018f0u: goto label_1018f0;
        case 0x1018f4u: goto label_1018f4;
        case 0x1018f8u: goto label_1018f8;
        case 0x1018fcu: goto label_1018fc;
        case 0x101900u: goto label_101900;
        case 0x101904u: goto label_101904;
        case 0x101908u: goto label_101908;
        case 0x10190cu: goto label_10190c;
        case 0x101910u: goto label_101910;
        case 0x101914u: goto label_101914;
        case 0x101918u: goto label_101918;
        case 0x10191cu: goto label_10191c;
        case 0x101920u: goto label_101920;
        case 0x101924u: goto label_101924;
        case 0x101928u: goto label_101928;
        case 0x10192cu: goto label_10192c;
        case 0x101930u: goto label_101930;
        case 0x101934u: goto label_101934;
        case 0x101938u: goto label_101938;
        case 0x10193cu: goto label_10193c;
        case 0x101940u: goto label_101940;
        case 0x101944u: goto label_101944;
        case 0x101948u: goto label_101948;
        case 0x10194cu: goto label_10194c;
        case 0x101950u: goto label_101950;
        case 0x101954u: goto label_101954;
        case 0x101958u: goto label_101958;
        case 0x10195cu: goto label_10195c;
        case 0x101960u: goto label_101960;
        case 0x101964u: goto label_101964;
        case 0x101968u: goto label_101968;
        case 0x10196cu: goto label_10196c;
        case 0x101970u: goto label_101970;
        case 0x101974u: goto label_101974;
        case 0x101978u: goto label_101978;
        case 0x10197cu: goto label_10197c;
        case 0x101980u: goto label_101980;
        case 0x101984u: goto label_101984;
        case 0x101988u: goto label_101988;
        case 0x10198cu: goto label_10198c;
        case 0x101990u: goto label_101990;
        case 0x101994u: goto label_101994;
        case 0x101998u: goto label_101998;
        case 0x10199cu: goto label_10199c;
        case 0x1019a0u: goto label_1019a0;
        case 0x1019a4u: goto label_1019a4;
        case 0x1019a8u: goto label_1019a8;
        case 0x1019acu: goto label_1019ac;
        case 0x1019b0u: goto label_1019b0;
        case 0x1019b4u: goto label_1019b4;
        case 0x1019b8u: goto label_1019b8;
        case 0x1019bcu: goto label_1019bc;
        case 0x1019c0u: goto label_1019c0;
        case 0x1019c4u: goto label_1019c4;
        case 0x1019c8u: goto label_1019c8;
        case 0x1019ccu: goto label_1019cc;
        case 0x1019d0u: goto label_1019d0;
        case 0x1019d4u: goto label_1019d4;
        case 0x1019d8u: goto label_1019d8;
        case 0x1019dcu: goto label_1019dc;
        case 0x1019e0u: goto label_1019e0;
        case 0x1019e4u: goto label_1019e4;
        case 0x1019e8u: goto label_1019e8;
        case 0x1019ecu: goto label_1019ec;
        case 0x1019f0u: goto label_1019f0;
        case 0x1019f4u: goto label_1019f4;
        case 0x1019f8u: goto label_1019f8;
        case 0x1019fcu: goto label_1019fc;
        case 0x101a00u: goto label_101a00;
        case 0x101a04u: goto label_101a04;
        case 0x101a08u: goto label_101a08;
        case 0x101a0cu: goto label_101a0c;
        case 0x101a10u: goto label_101a10;
        case 0x101a14u: goto label_101a14;
        case 0x101a18u: goto label_101a18;
        case 0x101a1cu: goto label_101a1c;
        case 0x101a20u: goto label_101a20;
        case 0x101a24u: goto label_101a24;
        case 0x101a28u: goto label_101a28;
        case 0x101a2cu: goto label_101a2c;
        case 0x101a30u: goto label_101a30;
        case 0x101a34u: goto label_101a34;
        case 0x101a38u: goto label_101a38;
        case 0x101a3cu: goto label_101a3c;
        case 0x101a40u: goto label_101a40;
        case 0x101a44u: goto label_101a44;
        case 0x101a48u: goto label_101a48;
        case 0x101a4cu: goto label_101a4c;
        case 0x101a50u: goto label_101a50;
        case 0x101a54u: goto label_101a54;
        case 0x101a58u: goto label_101a58;
        case 0x101a5cu: goto label_101a5c;
        case 0x101a60u: goto label_101a60;
        case 0x101a64u: goto label_101a64;
        case 0x101a68u: goto label_101a68;
        case 0x101a6cu: goto label_101a6c;
        case 0x101a70u: goto label_101a70;
        case 0x101a74u: goto label_101a74;
        case 0x101a78u: goto label_101a78;
        case 0x101a7cu: goto label_101a7c;
        case 0x101a80u: goto label_101a80;
        case 0x101a84u: goto label_101a84;
        case 0x101a88u: goto label_101a88;
        case 0x101a8cu: goto label_101a8c;
        case 0x101a90u: goto label_101a90;
        case 0x101a94u: goto label_101a94;
        case 0x101a98u: goto label_101a98;
        case 0x101a9cu: goto label_101a9c;
        case 0x101aa0u: goto label_101aa0;
        case 0x101aa4u: goto label_101aa4;
        case 0x101aa8u: goto label_101aa8;
        case 0x101aacu: goto label_101aac;
        case 0x101ab0u: goto label_101ab0;
        case 0x101ab4u: goto label_101ab4;
        case 0x101ab8u: goto label_101ab8;
        case 0x101abcu: goto label_101abc;
        case 0x101ac0u: goto label_101ac0;
        case 0x101ac4u: goto label_101ac4;
        case 0x101ac8u: goto label_101ac8;
        case 0x101accu: goto label_101acc;
        case 0x101ad0u: goto label_101ad0;
        case 0x101ad4u: goto label_101ad4;
        case 0x101ad8u: goto label_101ad8;
        case 0x101adcu: goto label_101adc;
        case 0x101ae0u: goto label_101ae0;
        case 0x101ae4u: goto label_101ae4;
        case 0x101ae8u: goto label_101ae8;
        case 0x101aecu: goto label_101aec;
        case 0x101af0u: goto label_101af0;
        case 0x101af4u: goto label_101af4;
        case 0x101af8u: goto label_101af8;
        case 0x101afcu: goto label_101afc;
        case 0x101b00u: goto label_101b00;
        case 0x101b04u: goto label_101b04;
        case 0x101b08u: goto label_101b08;
        case 0x101b0cu: goto label_101b0c;
        case 0x101b10u: goto label_101b10;
        case 0x101b14u: goto label_101b14;
        case 0x101b18u: goto label_101b18;
        case 0x101b1cu: goto label_101b1c;
        case 0x101b20u: goto label_101b20;
        case 0x101b24u: goto label_101b24;
        case 0x101b28u: goto label_101b28;
        case 0x101b2cu: goto label_101b2c;
        case 0x101b30u: goto label_101b30;
        case 0x101b34u: goto label_101b34;
        case 0x101b38u: goto label_101b38;
        case 0x101b3cu: goto label_101b3c;
        case 0x101b40u: goto label_101b40;
        case 0x101b44u: goto label_101b44;
        case 0x101b48u: goto label_101b48;
        case 0x101b4cu: goto label_101b4c;
        case 0x101b50u: goto label_101b50;
        case 0x101b54u: goto label_101b54;
        case 0x101b58u: goto label_101b58;
        case 0x101b5cu: goto label_101b5c;
        case 0x101b60u: goto label_101b60;
        case 0x101b64u: goto label_101b64;
        case 0x101b68u: goto label_101b68;
        case 0x101b6cu: goto label_101b6c;
        case 0x101b70u: goto label_101b70;
        case 0x101b74u: goto label_101b74;
        case 0x101b78u: goto label_101b78;
        case 0x101b7cu: goto label_101b7c;
        case 0x101b80u: goto label_101b80;
        case 0x101b84u: goto label_101b84;
        case 0x101b88u: goto label_101b88;
        case 0x101b8cu: goto label_101b8c;
        case 0x101b90u: goto label_101b90;
        case 0x101b94u: goto label_101b94;
        case 0x101b98u: goto label_101b98;
        case 0x101b9cu: goto label_101b9c;
        case 0x101ba0u: goto label_101ba0;
        case 0x101ba4u: goto label_101ba4;
        case 0x101ba8u: goto label_101ba8;
        case 0x101bacu: goto label_101bac;
        case 0x101bb0u: goto label_101bb0;
        case 0x101bb4u: goto label_101bb4;
        case 0x101bb8u: goto label_101bb8;
        case 0x101bbcu: goto label_101bbc;
        case 0x101bc0u: goto label_101bc0;
        case 0x101bc4u: goto label_101bc4;
        case 0x101bc8u: goto label_101bc8;
        case 0x101bccu: goto label_101bcc;
        case 0x101bd0u: goto label_101bd0;
        case 0x101bd4u: goto label_101bd4;
        case 0x101bd8u: goto label_101bd8;
        case 0x101bdcu: goto label_101bdc;
        case 0x101be0u: goto label_101be0;
        case 0x101be4u: goto label_101be4;
        case 0x101be8u: goto label_101be8;
        case 0x101becu: goto label_101bec;
        case 0x101bf0u: goto label_101bf0;
        case 0x101bf4u: goto label_101bf4;
        case 0x101bf8u: goto label_101bf8;
        case 0x101bfcu: goto label_101bfc;
        case 0x101c00u: goto label_101c00;
        case 0x101c04u: goto label_101c04;
        case 0x101c08u: goto label_101c08;
        case 0x101c0cu: goto label_101c0c;
        case 0x101c10u: goto label_101c10;
        case 0x101c14u: goto label_101c14;
        case 0x101c18u: goto label_101c18;
        case 0x101c1cu: goto label_101c1c;
        case 0x101c20u: goto label_101c20;
        case 0x101c24u: goto label_101c24;
        case 0x101c28u: goto label_101c28;
        case 0x101c2cu: goto label_101c2c;
        case 0x101c30u: goto label_101c30;
        case 0x101c34u: goto label_101c34;
        case 0x101c38u: goto label_101c38;
        case 0x101c3cu: goto label_101c3c;
        case 0x101c40u: goto label_101c40;
        case 0x101c44u: goto label_101c44;
        case 0x101c48u: goto label_101c48;
        case 0x101c4cu: goto label_101c4c;
        case 0x101c50u: goto label_101c50;
        case 0x101c54u: goto label_101c54;
        case 0x101c58u: goto label_101c58;
        case 0x101c5cu: goto label_101c5c;
        case 0x101c60u: goto label_101c60;
        case 0x101c64u: goto label_101c64;
        case 0x101c68u: goto label_101c68;
        case 0x101c6cu: goto label_101c6c;
        case 0x101c70u: goto label_101c70;
        case 0x101c74u: goto label_101c74;
        case 0x101c78u: goto label_101c78;
        case 0x101c7cu: goto label_101c7c;
        case 0x101c80u: goto label_101c80;
        default: break;
    }

    ctx->pc = 0x101470u;

label_101470:
    // 0x101470: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x101470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_101474:
    // 0x101474: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x101474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_101478:
    // 0x101478: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x101478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_10147c:
    // 0x10147c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_101480:
    // 0x101480: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x101480u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_101484:
    // 0x101484: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x101484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_101488:
    // 0x101488: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x101488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10148c:
    // 0x10148c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_101490:
    // 0x101490: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101494:
    // 0x101494: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_101498:
    // 0x101498: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x101498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10149c:
    // 0x10149c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1014a0:
    // 0x1014a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1014a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1014a4:
    // 0x1014a4: 0x0  nop
    ctx->pc = 0x1014a4u;
    // NOP
label_1014a8:
    // 0x1014a8: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x1014a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1014ac:
    // 0x1014ac: 0x15000012  bnez        $t0, . + 4 + (0x12 << 2)
label_1014b0:
    if (ctx->pc == 0x1014B0u) {
        ctx->pc = 0x1014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014ACu;
        // 0x1014b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014B4u;
        goto label_1014b4;
    }
    ctx->pc = 0x1014ACu;
    {
        const bool branch_taken_0x1014ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014ACu;
        // 0x1014b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014ac) {
            ctx->pc = 0x1014F8u;
            goto label_1014f8;
        }
    }
    ctx->pc = 0x1014B4u;
label_1014b4:
    // 0x1014b4: 0xc040900  jal         func_102400
label_1014b8:
    if (ctx->pc == 0x1014B8u) {
        ctx->pc = 0x1014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014B4u;
        // 0x1014b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014BCu;
        goto label_1014bc;
    }
    ctx->pc = 0x1014B4u;
    SET_GPR_U32(ctx, 31, 0x1014BCu);
    ctx->pc = 0x1014B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014B4u;
    // 0x1014b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102400u, 0x1014B4u, 0x1014BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014BCu;
label_1014bc:
    // 0x1014bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1014bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1014c0:
    // 0x1014c0: 0xc040804  jal         func_102010
label_1014c4:
    if (ctx->pc == 0x1014C4u) {
        ctx->pc = 0x1014C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014C0u;
        // 0x1014c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014C8u;
        goto label_1014c8;
    }
    ctx->pc = 0x1014C0u;
    SET_GPR_U32(ctx, 31, 0x1014C8u);
    ctx->pc = 0x1014C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014C0u;
    // 0x1014c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102010u, 0x1014C0u, 0x1014C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014C8u;
label_1014c8:
    // 0x1014c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1014c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1014cc:
    // 0x1014cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1014d0:
    if (ctx->pc == 0x1014D0u) {
        ctx->pc = 0x1014D4u;
        goto label_1014d4;
    }
    ctx->pc = 0x1014CCu;
    {
        const bool branch_taken_0x1014cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1014cc) {
            ctx->pc = 0x1014E0u;
            goto label_1014e0;
        }
    }
    ctx->pc = 0x1014D4u;
label_1014d4:
    // 0x1014d4: 0xc040224  jal         func_100890
label_1014d8:
    if (ctx->pc == 0x1014D8u) {
        ctx->pc = 0x1014DCu;
        goto label_1014dc;
    }
    ctx->pc = 0x1014D4u;
    SET_GPR_U32(ctx, 31, 0x1014DCu);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x1014D4u, 0x1014DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014DCu;
label_1014dc:
    // 0x1014dc: 0x0  nop
    ctx->pc = 0x1014dcu;
    // NOP
label_1014e0:
    // 0x1014e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1014e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1014e4:
    // 0x1014e4: 0xc0408d0  jal         func_102340
label_1014e8:
    if (ctx->pc == 0x1014E8u) {
        ctx->pc = 0x1014E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014E4u;
        // 0x1014e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014ECu;
        goto label_1014ec;
    }
    ctx->pc = 0x1014E4u;
    SET_GPR_U32(ctx, 31, 0x1014ECu);
    ctx->pc = 0x1014E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014E4u;
    // 0x1014e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102340u, 0x1014E4u, 0x1014ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014ECu;
label_1014ec:
    // 0x1014ec: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x1014ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1014f0:
    // 0x1014f0: 0x1100ffed  beqz        $t0, . + 4 + (-0x13 << 2)
label_1014f4:
    if (ctx->pc == 0x1014F4u) {
        ctx->pc = 0x1014F8u;
        goto label_1014f8;
    }
    ctx->pc = 0x1014F0u;
    {
        const bool branch_taken_0x1014f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1014f0) {
            ctx->pc = 0x1014A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1014a8;
        }
    }
    ctx->pc = 0x1014F8u;
label_1014f8:
    // 0x1014f8: 0x91100000  lbu         $s0, 0x0($t0)
    ctx->pc = 0x1014f8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1014fc:
    // 0x1014fc: 0x3203001f  andi        $v1, $s0, 0x1F
    ctx->pc = 0x1014fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_101500:
    // 0x101500: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_101504:
    // 0x101504: 0x102001d8  beqz        $at, . + 4 + (0x1D8 << 2)
label_101508:
    if (ctx->pc == 0x101508u) {
        ctx->pc = 0x101508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101504u;
        // 0x101508: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10150Cu;
        goto label_10150c;
    }
    ctx->pc = 0x101504u;
    {
        const bool branch_taken_0x101504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x101508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101504u;
        // 0x101508: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101504) {
            ctx->pc = 0x101C68u;
            goto label_101c68;
        }
    }
    ctx->pc = 0x10150Cu;
label_10150c:
    // 0x10150c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_101510:
    // 0x101510: 0x24841980  addiu       $a0, $a0, 0x1980
    ctx->pc = 0x101510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6528));
label_101514:
    // 0x101514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x101514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_101518:
    // 0x101518: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x101518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10151c:
    // 0x10151c: 0x600008  jr          $v1
label_101520:
    if (ctx->pc == 0x101520u) {
        ctx->pc = 0x101524u;
        goto label_101524;
    }
    ctx->pc = 0x10151Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101528u: goto label_101528;
            case 0x101548u: goto label_101548;
            case 0x1015A0u: goto label_1015a0;
            case 0x101640u: goto label_101640;
            case 0x1016C0u: goto label_1016c0;
            case 0x101758u: goto label_101758;
            case 0x1017E8u: goto label_1017e8;
            case 0x101878u: goto label_101878;
            case 0x101958u: goto label_101958;
            case 0x101A38u: goto label_101a38;
            case 0x101AB8u: goto label_101ab8;
            case 0x101B80u: goto label_101b80;
            case 0x101BD8u: goto label_101bd8;
            case 0x101C28u: goto label_101c28;
            case 0x101C68u: goto label_101c68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10151Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x101524u;
label_101524:
    // 0x101524: 0x0  nop
    ctx->pc = 0x101524u;
    // NOP
label_101528:
    // 0x101528: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_10152c:
    // 0x10152c: 0xc0402a8  jal         func_100AA0
label_101530:
    if (ctx->pc == 0x101530u) {
        ctx->pc = 0x101530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10152Cu;
        // 0x101530: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101534u;
        goto label_101534;
    }
    ctx->pc = 0x10152Cu;
    SET_GPR_U32(ctx, 31, 0x101534u);
    ctx->pc = 0x101530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10152Cu;
    // 0x101530: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x10152Cu, 0x101534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101534u;
label_101534:
    // 0x101534: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_101538:
    // 0x101538: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_10153c:
    // 0x10153c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_101540:
    // 0x101540: 0x100001cb  b           . + 4 + (0x1CB << 2)
label_101544:
    if (ctx->pc == 0x101544u) {
        ctx->pc = 0x101544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101540u;
        // 0x101544: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101548u;
        goto label_101548;
    }
    ctx->pc = 0x101540u;
    {
        const bool branch_taken_0x101540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101540u;
        // 0x101544: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101540) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101548u;
label_101548:
    // 0x101548: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_10154c:
    // 0x10154c: 0xc0402a8  jal         func_100AA0
label_101550:
    if (ctx->pc == 0x101550u) {
        ctx->pc = 0x101550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10154Cu;
        // 0x101550: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101554u;
        goto label_101554;
    }
    ctx->pc = 0x10154Cu;
    SET_GPR_U32(ctx, 31, 0x101554u);
    ctx->pc = 0x101550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10154Cu;
    // 0x101550: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x10154Cu, 0x101554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101554u;
label_101554:
    // 0x101554: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x101554u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101558:
    // 0x101558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10155c:
    // 0x10155c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x10155cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101560:
    // 0x101560: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101564:
    // 0x101564: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x101564u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101568:
    // 0x101568: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x101568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_10156c:
    // 0x10156c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x10156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_101570:
    // 0x101570: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x101570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_101574:
    // 0x101574: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_101578:
    // 0x101578: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x101578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_10157c:
    // 0x10157c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x10157cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_101580:
    // 0x101580: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x101580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_101584:
    // 0x101584: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_101588:
    // 0x101588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x101588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10158c:
    // 0x10158c: 0x40f809  jalr        $v0
label_101590:
    if (ctx->pc == 0x101590u) {
        ctx->pc = 0x101590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10158Cu;
        // 0x101590: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101594u;
        goto label_101594;
    }
    ctx->pc = 0x10158Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101594u);
        ctx->pc = 0x101590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10158Cu;
        // 0x101590: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10158Cu, 0x101594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101594u;
label_101594:
    // 0x101594: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x101594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_101598:
    // 0x101598: 0x100001b5  b           . + 4 + (0x1B5 << 2)
label_10159c:
    if (ctx->pc == 0x10159Cu) {
        ctx->pc = 0x10159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101598u;
        // 0x10159c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015A0u;
        goto label_1015a0;
    }
    ctx->pc = 0x101598u;
    {
        const bool branch_taken_0x101598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101598u;
        // 0x10159c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101598) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x1015A0u;
label_1015a0:
    // 0x1015a0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1015a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1015a4:
    // 0x1015a4: 0x27a50104  addiu       $a1, $sp, 0x104
    ctx->pc = 0x1015a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_1015a8:
    // 0x1015a8: 0xc0402a8  jal         func_100AA0
label_1015ac:
    if (ctx->pc == 0x1015ACu) {
        ctx->pc = 0x1015ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015A8u;
        // 0x1015ac: 0x32120040  andi        $s2, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015B0u;
        goto label_1015b0;
    }
    ctx->pc = 0x1015A8u;
    SET_GPR_U32(ctx, 31, 0x1015B0u);
    ctx->pc = 0x1015ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015A8u;
    // 0x1015ac: 0x32120040  andi        $s2, $s0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x1015A8u, 0x1015B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015B0u;
label_1015b0:
    // 0x1015b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1015b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1015b4:
    // 0x1015b4: 0xc0402a8  jal         func_100AA0
label_1015b8:
    if (ctx->pc == 0x1015B8u) {
        ctx->pc = 0x1015B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015B4u;
        // 0x1015b8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015BCu;
        goto label_1015bc;
    }
    ctx->pc = 0x1015B4u;
    SET_GPR_U32(ctx, 31, 0x1015BCu);
    ctx->pc = 0x1015B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015B4u;
    // 0x1015b8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x1015B4u, 0x1015BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015BCu;
label_1015bc:
    // 0x1015bc: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1015bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1015c0:
    // 0x1015c0: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1015c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1015c4:
    // 0x1015c4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1015c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1015c8:
    // 0x1015c8: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1015c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1015cc:
    // 0x1015cc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1015ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1015d0:
    // 0x1015d0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1015d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1015d4:
    // 0x1015d4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1015d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1015d8:
    // 0x1015d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1015dc:
    // 0x1015dc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1015dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1015e0:
    // 0x1015e0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1015e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1015e4:
    // 0x1015e4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_1015e8:
    if (ctx->pc == 0x1015E8u) {
        ctx->pc = 0x1015E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015E4u;
        // 0x1015e8: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015ECu;
        goto label_1015ec;
    }
    ctx->pc = 0x1015E4u;
    {
        const bool branch_taken_0x1015e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015E4u;
        // 0x1015e8: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015e4) {
            ctx->pc = 0x101608u;
            goto label_101608;
        }
    }
    ctx->pc = 0x1015ECu;
label_1015ec:
    // 0x1015ec: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x1015ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1015f0:
    // 0x1015f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1015f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1015f4:
    // 0x1015f4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1015f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1015f8:
    // 0x1015f8: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x1015f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1015fc:
    // 0x1015fc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1015fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_101600:
    // 0x101600: 0x10000005  b           . + 4 + (0x5 << 2)
label_101604:
    if (ctx->pc == 0x101604u) {
        ctx->pc = 0x101604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101600u;
        // 0x101604: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101608u;
        goto label_101608;
    }
    ctx->pc = 0x101600u;
    {
        const bool branch_taken_0x101600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101600u;
        // 0x101604: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101600) {
            ctx->pc = 0x101618u;
            goto label_101618;
        }
    }
    ctx->pc = 0x101608u;
label_101608:
    // 0x101608: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x101608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_10160c:
    // 0x10160c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x10160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_101610:
    // 0x101610: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x101610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_101614:
    // 0x101614: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x101614u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_101618:
    // 0x101618: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_10161c:
    if (ctx->pc == 0x10161Cu) {
        ctx->pc = 0x101620u;
        goto label_101620;
    }
    ctx->pc = 0x101618u;
    {
        const bool branch_taken_0x101618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101618) {
            ctx->pc = 0x101638u;
            goto label_101638;
        }
    }
    ctx->pc = 0x101620u;
label_101620:
    // 0x101620: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x101620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101624:
    // 0x101624: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101628:
    // 0x101628: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x101628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_10162c:
    // 0x10162c: 0xc0f809  jalr        $a2
label_101630:
    if (ctx->pc == 0x101630u) {
        ctx->pc = 0x101630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10162Cu;
        // 0x101630: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101634u;
        goto label_101634;
    }
    ctx->pc = 0x10162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x101634u);
        ctx->pc = 0x101630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10162Cu;
        // 0x101630: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10162Cu, 0x101634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101634u;
label_101634:
    // 0x101634: 0x0  nop
    ctx->pc = 0x101634u;
    // NOP
label_101638:
    // 0x101638: 0x1000018d  b           . + 4 + (0x18D << 2)
label_10163c:
    if (ctx->pc == 0x10163Cu) {
        ctx->pc = 0x10163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101638u;
        // 0x10163c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101640u;
        goto label_101640;
    }
    ctx->pc = 0x101638u;
    {
        const bool branch_taken_0x101638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101638u;
        // 0x10163c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101638) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101640u;
label_101640:
    // 0x101640: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_101644:
    // 0x101644: 0x27a500fc  addiu       $a1, $sp, 0xFC
    ctx->pc = 0x101644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_101648:
    // 0x101648: 0xc0402a8  jal         func_100AA0
label_10164c:
    if (ctx->pc == 0x10164Cu) {
        ctx->pc = 0x10164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101648u;
        // 0x10164c: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101650u;
        goto label_101650;
    }
    ctx->pc = 0x101648u;
    SET_GPR_U32(ctx, 31, 0x101650u);
    ctx->pc = 0x10164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101648u;
    // 0x10164c: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101648u, 0x101650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101650u;
label_101650:
    // 0x101650: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x101650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101654:
    // 0x101654: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_101658:
    // 0x101658: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x101658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_10165c:
    // 0x10165c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x10165cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101660:
    // 0x101660: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x101660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_101664:
    // 0x101664: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_101668:
    // 0x101668: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x101668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_10166c:
    // 0x10166c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10166cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101670:
    // 0x101670: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_101674:
    // 0x101674: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_101678:
    // 0x101678: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_10167c:
    if (ctx->pc == 0x10167Cu) {
        ctx->pc = 0x10167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101678u;
        // 0x10167c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101680u;
        goto label_101680;
    }
    ctx->pc = 0x101678u;
    {
        const bool branch_taken_0x101678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101678u;
        // 0x10167c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101678) {
            ctx->pc = 0x10169Cu;
            goto label_10169c;
        }
    }
    ctx->pc = 0x101680u;
label_101680:
    // 0x101680: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x101680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_101684:
    // 0x101684: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101688:
    // 0x101688: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_10168c:
    // 0x10168c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x10168cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101690:
    // 0x101690: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x101690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_101694:
    // 0x101694: 0x10000005  b           . + 4 + (0x5 << 2)
label_101698:
    if (ctx->pc == 0x101698u) {
        ctx->pc = 0x101698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101694u;
        // 0x101698: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10169Cu;
        goto label_10169c;
    }
    ctx->pc = 0x101694u;
    {
        const bool branch_taken_0x101694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101694u;
        // 0x101698: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101694) {
            ctx->pc = 0x1016ACu;
            goto label_1016ac;
        }
    }
    ctx->pc = 0x10169Cu;
label_10169c:
    // 0x10169c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x10169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1016a0:
    // 0x1016a0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1016a4:
    // 0x1016a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1016a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1016a8:
    // 0x1016a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1016a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1016ac:
    // 0x1016ac: 0xc0f809  jalr        $a2
label_1016b0:
    if (ctx->pc == 0x1016B0u) {
        ctx->pc = 0x1016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ACu;
        // 0x1016b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016B4u;
        goto label_1016b4;
    }
    ctx->pc = 0x1016ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1016B4u);
        ctx->pc = 0x1016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ACu;
        // 0x1016b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016ACu, 0x1016B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1016B4u;
label_1016b4:
    // 0x1016b4: 0x1000016e  b           . + 4 + (0x16E << 2)
label_1016b8:
    if (ctx->pc == 0x1016B8u) {
        ctx->pc = 0x1016B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016B4u;
        // 0x1016b8: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016BCu;
        goto label_1016bc;
    }
    ctx->pc = 0x1016B4u;
    {
        const bool branch_taken_0x1016b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016B4u;
        // 0x1016b8: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016b4) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x1016BCu;
label_1016bc:
    // 0x1016bc: 0x0  nop
    ctx->pc = 0x1016bcu;
    // NOP
label_1016c0:
    // 0x1016c0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1016c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1016c4:
    // 0x1016c4: 0xc0402a8  jal         func_100AA0
label_1016c8:
    if (ctx->pc == 0x1016C8u) {
        ctx->pc = 0x1016C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016C4u;
        // 0x1016c8: 0x27a500f8  addiu       $a1, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016CCu;
        goto label_1016cc;
    }
    ctx->pc = 0x1016C4u;
    SET_GPR_U32(ctx, 31, 0x1016CCu);
    ctx->pc = 0x1016C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016C4u;
    // 0x1016c8: 0x27a500f8  addiu       $a1, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x1016C4u, 0x1016CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016CCu;
label_1016cc:
    // 0x1016cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1016ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1016d0:
    // 0x1016d0: 0xc04027c  jal         func_1009F0
label_1016d4:
    if (ctx->pc == 0x1016D4u) {
        ctx->pc = 0x1016D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016D0u;
        // 0x1016d4: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016D8u;
        goto label_1016d8;
    }
    ctx->pc = 0x1016D0u;
    SET_GPR_U32(ctx, 31, 0x1016D8u);
    ctx->pc = 0x1016D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016D0u;
    // 0x1016d4: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1016D0u, 0x1016D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016D8u;
label_1016d8:
    // 0x1016d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1016d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1016dc:
    // 0x1016dc: 0xc04027c  jal         func_1009F0
label_1016e0:
    if (ctx->pc == 0x1016E0u) {
        ctx->pc = 0x1016E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016DCu;
        // 0x1016e0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016E4u;
        goto label_1016e4;
    }
    ctx->pc = 0x1016DCu;
    SET_GPR_U32(ctx, 31, 0x1016E4u);
    ctx->pc = 0x1016E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016DCu;
    // 0x1016e0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1016DCu, 0x1016E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016E4u;
label_1016e4:
    // 0x1016e4: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x1016e4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1016e8:
    // 0x1016e8: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1016e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1016ec:
    // 0x1016ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1016ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1016f0:
    // 0x1016f0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1016f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1016f4:
    // 0x1016f4: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x1016f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1016f8:
    // 0x1016f8: 0x8fb200f4  lw          $s2, 0xF4($sp)
    ctx->pc = 0x1016f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_1016fc:
    // 0x1016fc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1016fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101700:
    // 0x101700: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x101700u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_101704:
    // 0x101704: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x101704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_101708:
    // 0x101708: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x101708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_10170c:
    // 0x10170c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x10170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_101710:
    // 0x101710: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x101710u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_101714:
    // 0x101714: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x101714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_101718:
    // 0x101718: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x101718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_10171c:
    // 0x10171c: 0xc7b025  or          $s6, $a2, $a3
    ctx->pc = 0x10171cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_101720:
    // 0x101720: 0xa4a821  addu        $s5, $a1, $a0
    ctx->pc = 0x101720u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_101724:
    // 0x101724: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x101724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_101728:
    // 0x101728: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_10172c:
    if (ctx->pc == 0x10172Cu) {
        ctx->pc = 0x10172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101728u;
        // 0x10172c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101730u;
        goto label_101730;
    }
    ctx->pc = 0x101728u;
    {
        const bool branch_taken_0x101728 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101728u;
        // 0x10172c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101728) {
            ctx->pc = 0x101750u;
            goto label_101750;
        }
    }
    ctx->pc = 0x101730u;
label_101730:
    // 0x101730: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x101730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_101734:
    // 0x101734: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101738:
    // 0x101738: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x101738u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_10173c:
    // 0x10173c: 0x2c0f809  jalr        $s6
label_101740:
    if (ctx->pc == 0x101740u) {
        ctx->pc = 0x101740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10173Cu;
        // 0x101740: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101744u;
        goto label_101744;
    }
    ctx->pc = 0x10173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x101744u);
        ctx->pc = 0x101740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10173Cu;
        // 0x101740: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10173Cu, 0x101744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101744u;
label_101744:
    // 0x101744: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x101744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_101748:
    // 0x101748: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
label_10174c:
    if (ctx->pc == 0x10174Cu) {
        ctx->pc = 0x101750u;
        goto label_101750;
    }
    ctx->pc = 0x101748u;
    {
        const bool branch_taken_0x101748 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x101748) {
            ctx->pc = 0x101730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101730;
        }
    }
    ctx->pc = 0x101750u;
label_101750:
    // 0x101750: 0x10000147  b           . + 4 + (0x147 << 2)
label_101754:
    if (ctx->pc == 0x101754u) {
        ctx->pc = 0x101754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101750u;
        // 0x101754: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101758u;
        goto label_101758;
    }
    ctx->pc = 0x101750u;
    {
        const bool branch_taken_0x101750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101750u;
        // 0x101754: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101750) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101758u;
label_101758:
    // 0x101758: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_10175c:
    // 0x10175c: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x10175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_101760:
    // 0x101760: 0xc0402a8  jal         func_100AA0
label_101764:
    if (ctx->pc == 0x101764u) {
        ctx->pc = 0x101764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101760u;
        // 0x101764: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101768u;
        goto label_101768;
    }
    ctx->pc = 0x101760u;
    SET_GPR_U32(ctx, 31, 0x101768u);
    ctx->pc = 0x101764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101760u;
    // 0x101764: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101760u, 0x101768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101768u;
label_101768:
    // 0x101768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10176c:
    // 0x10176c: 0xc0402a8  jal         func_100AA0
label_101770:
    if (ctx->pc == 0x101770u) {
        ctx->pc = 0x101770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10176Cu;
        // 0x101770: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101774u;
        goto label_101774;
    }
    ctx->pc = 0x10176Cu;
    SET_GPR_U32(ctx, 31, 0x101774u);
    ctx->pc = 0x101770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10176Cu;
    // 0x101770: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x10176Cu, 0x101774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101774u;
label_101774:
    // 0x101774: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x101774u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101778:
    // 0x101778: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_10177c:
    // 0x10177c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x10177cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101780:
    // 0x101780: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x101780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101784:
    // 0x101784: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_101788:
    // 0x101788: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_10178c:
    // 0x10178c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x10178cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101790:
    // 0x101790: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101794:
    // 0x101794: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_101798:
    // 0x101798: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10179c:
    // 0x10179c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_1017a0:
    if (ctx->pc == 0x1017A0u) {
        ctx->pc = 0x1017A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10179Cu;
        // 0x1017a0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1017A4u;
        goto label_1017a4;
    }
    ctx->pc = 0x10179Cu;
    {
        const bool branch_taken_0x10179c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1017A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10179Cu;
        // 0x1017a0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10179c) {
            ctx->pc = 0x1017C0u;
            goto label_1017c0;
        }
    }
    ctx->pc = 0x1017A4u;
label_1017a4:
    // 0x1017a4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1017a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1017a8:
    // 0x1017a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1017a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1017ac:
    // 0x1017ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1017acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1017b0:
    // 0x1017b0: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1017b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1017b4:
    // 0x1017b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1017b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1017b8:
    // 0x1017b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1017bc:
    if (ctx->pc == 0x1017BCu) {
        ctx->pc = 0x1017BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017B8u;
        // 0x1017bc: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1017C0u;
        goto label_1017c0;
    }
    ctx->pc = 0x1017B8u;
    {
        const bool branch_taken_0x1017b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1017BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017B8u;
        // 0x1017bc: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1017b8) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1017C0u;
label_1017c0:
    // 0x1017c0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1017c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1017c4:
    // 0x1017c4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1017c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1017c8:
    // 0x1017c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1017c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1017cc:
    // 0x1017cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1017ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1017d0:
    // 0x1017d0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1017d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1017d4:
    // 0x1017d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1017d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1017d8:
    // 0x1017d8: 0xc0f809  jalr        $a2
label_1017dc:
    if (ctx->pc == 0x1017DCu) {
        ctx->pc = 0x1017DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017D8u;
        // 0x1017dc: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1017E0u;
        goto label_1017e0;
    }
    ctx->pc = 0x1017D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1017E0u);
        ctx->pc = 0x1017DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017D8u;
        // 0x1017dc: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1017D8u, 0x1017E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1017E0u;
label_1017e0:
    // 0x1017e0: 0x10000123  b           . + 4 + (0x123 << 2)
label_1017e4:
    if (ctx->pc == 0x1017E4u) {
        ctx->pc = 0x1017E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017E0u;
        // 0x1017e4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1017E8u;
        goto label_1017e8;
    }
    ctx->pc = 0x1017E0u;
    {
        const bool branch_taken_0x1017e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1017E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017E0u;
        // 0x1017e4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1017e0) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x1017E8u;
label_1017e8:
    // 0x1017e8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1017e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1017ec:
    // 0x1017ec: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x1017ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1017f0:
    // 0x1017f0: 0xc0402a8  jal         func_100AA0
label_1017f4:
    if (ctx->pc == 0x1017F4u) {
        ctx->pc = 0x1017F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017F0u;
        // 0x1017f4: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1017F8u;
        goto label_1017f8;
    }
    ctx->pc = 0x1017F0u;
    SET_GPR_U32(ctx, 31, 0x1017F8u);
    ctx->pc = 0x1017F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017F0u;
    // 0x1017f4: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x1017F0u, 0x1017F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017F8u;
label_1017f8:
    // 0x1017f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1017f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1017fc:
    // 0x1017fc: 0xc0402a8  jal         func_100AA0
label_101800:
    if (ctx->pc == 0x101800u) {
        ctx->pc = 0x101800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017FCu;
        // 0x101800: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101804u;
        goto label_101804;
    }
    ctx->pc = 0x1017FCu;
    SET_GPR_U32(ctx, 31, 0x101804u);
    ctx->pc = 0x101800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017FCu;
    // 0x101800: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x1017FCu, 0x101804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101804u;
label_101804:
    // 0x101804: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x101804u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101808:
    // 0x101808: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_10180c:
    // 0x10180c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x10180cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101810:
    // 0x101810: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x101810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101814:
    // 0x101814: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x101814u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_101818:
    // 0x101818: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_10181c:
    // 0x10181c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x10181cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101820:
    // 0x101820: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101824:
    // 0x101824: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_101828:
    // 0x101828: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10182c:
    // 0x10182c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_101830:
    if (ctx->pc == 0x101830u) {
        ctx->pc = 0x101830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10182Cu;
        // 0x101830: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101834u;
        goto label_101834;
    }
    ctx->pc = 0x10182Cu;
    {
        const bool branch_taken_0x10182c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x101830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10182Cu;
        // 0x101830: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10182c) {
            ctx->pc = 0x101850u;
            goto label_101850;
        }
    }
    ctx->pc = 0x101834u;
label_101834:
    // 0x101834: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x101834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_101838:
    // 0x101838: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10183c:
    // 0x10183c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101840:
    // 0x101840: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101844:
    // 0x101844: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x101844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_101848:
    // 0x101848: 0x10000005  b           . + 4 + (0x5 << 2)
label_10184c:
    if (ctx->pc == 0x10184Cu) {
        ctx->pc = 0x10184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101848u;
        // 0x10184c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101850u;
        goto label_101850;
    }
    ctx->pc = 0x101848u;
    {
        const bool branch_taken_0x101848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101848u;
        // 0x10184c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101848) {
            ctx->pc = 0x101860u;
            goto label_101860;
        }
    }
    ctx->pc = 0x101850u;
label_101850:
    // 0x101850: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x101850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101854:
    // 0x101854: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x101854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_101858:
    // 0x101858: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10185c:
    // 0x10185c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101860:
    // 0x101860: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x101860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_101864:
    // 0x101864: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101868:
    // 0x101868: 0xc0f809  jalr        $a2
label_10186c:
    if (ctx->pc == 0x10186Cu) {
        ctx->pc = 0x10186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101868u;
        // 0x10186c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101870u;
        goto label_101870;
    }
    ctx->pc = 0x101868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x101870u);
        ctx->pc = 0x10186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101868u;
        // 0x10186c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101868u, 0x101870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101870u;
label_101870:
    // 0x101870: 0x100000ff  b           . + 4 + (0xFF << 2)
label_101874:
    if (ctx->pc == 0x101874u) {
        ctx->pc = 0x101874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101870u;
        // 0x101874: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101878u;
        goto label_101878;
    }
    ctx->pc = 0x101870u;
    {
        const bool branch_taken_0x101870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101870u;
        // 0x101874: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101870) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101878u;
label_101878:
    // 0x101878: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_10187c:
    // 0x10187c: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x10187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_101880:
    // 0x101880: 0xc0402a8  jal         func_100AA0
label_101884:
    if (ctx->pc == 0x101884u) {
        ctx->pc = 0x101884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101880u;
        // 0x101884: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101888u;
        goto label_101888;
    }
    ctx->pc = 0x101880u;
    SET_GPR_U32(ctx, 31, 0x101888u);
    ctx->pc = 0x101884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101880u;
    // 0x101884: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101880u, 0x101888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101888u;
label_101888:
    // 0x101888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10188c:
    // 0x10188c: 0xc0402a8  jal         func_100AA0
label_101890:
    if (ctx->pc == 0x101890u) {
        ctx->pc = 0x101890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10188Cu;
        // 0x101890: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101894u;
        goto label_101894;
    }
    ctx->pc = 0x10188Cu;
    SET_GPR_U32(ctx, 31, 0x101894u);
    ctx->pc = 0x101890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10188Cu;
    // 0x101890: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x10188Cu, 0x101894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101894u;
label_101894:
    // 0x101894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101898:
    // 0x101898: 0xc0402a8  jal         func_100AA0
label_10189c:
    if (ctx->pc == 0x10189Cu) {
        ctx->pc = 0x10189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101898u;
        // 0x10189c: 0x27a500d4  addiu       $a1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1018A0u;
        goto label_1018a0;
    }
    ctx->pc = 0x101898u;
    SET_GPR_U32(ctx, 31, 0x1018A0u);
    ctx->pc = 0x10189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101898u;
    // 0x10189c: 0x27a500d4  addiu       $a1, $sp, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101898u, 0x1018A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1018A0u;
label_1018a0:
    // 0x1018a0: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x1018a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1018a4:
    // 0x1018a4: 0x32040040  andi        $a0, $s0, 0x40
    ctx->pc = 0x1018a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_1018a8:
    // 0x1018a8: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x1018a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1018ac:
    // 0x1018ac: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1018acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1018b0:
    // 0x1018b0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1018b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1018b4:
    // 0x1018b4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1018b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1018b8:
    // 0x1018b8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1018b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1018bc:
    // 0x1018bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1018bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1018c0:
    // 0x1018c0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1018c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1018c4:
    // 0x1018c4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1018c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1018c8:
    // 0x1018c8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1018c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1018cc:
    // 0x1018cc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1018d0:
    if (ctx->pc == 0x1018D0u) {
        ctx->pc = 0x1018D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018CCu;
        // 0x1018d0: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1018D4u;
        goto label_1018d4;
    }
    ctx->pc = 0x1018CCu;
    {
        const bool branch_taken_0x1018cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018CCu;
        // 0x1018d0: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018cc) {
            ctx->pc = 0x1018F0u;
            goto label_1018f0;
        }
    }
    ctx->pc = 0x1018D4u;
label_1018d4:
    // 0x1018d4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1018d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1018d8:
    // 0x1018d8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1018d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1018dc:
    // 0x1018dc: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1018dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1018e0:
    // 0x1018e0: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1018e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1018e4:
    // 0x1018e4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1018e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_1018e8:
    // 0x1018e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1018ec:
    if (ctx->pc == 0x1018ECu) {
        ctx->pc = 0x1018ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018E8u;
        // 0x1018ec: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1018F0u;
        goto label_1018f0;
    }
    ctx->pc = 0x1018E8u;
    {
        const bool branch_taken_0x1018e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018E8u;
        // 0x1018ec: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018e8) {
            ctx->pc = 0x101900u;
            goto label_101900;
        }
    }
    ctx->pc = 0x1018F0u;
label_1018f0:
    // 0x1018f0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1018f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1018f4:
    // 0x1018f4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1018f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1018f8:
    // 0x1018f8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1018f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1018fc:
    // 0x1018fc: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1018fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_101900:
    // 0x101900: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_101904:
    if (ctx->pc == 0x101904u) {
        ctx->pc = 0x101908u;
        goto label_101908;
    }
    ctx->pc = 0x101900u;
    {
        const bool branch_taken_0x101900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x101900) {
            ctx->pc = 0x101950u;
            goto label_101950;
        }
    }
    ctx->pc = 0x101908u;
label_101908:
    // 0x101908: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_10190c:
    if (ctx->pc == 0x10190Cu) {
        ctx->pc = 0x101910u;
        goto label_101910;
    }
    ctx->pc = 0x101908u;
    {
        const bool branch_taken_0x101908 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x101908) {
            ctx->pc = 0x10192Cu;
            goto label_10192c;
        }
    }
    ctx->pc = 0x101910u;
label_101910:
    // 0x101910: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x101910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_101914:
    // 0x101914: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101918:
    // 0x101918: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_10191c:
    // 0x10191c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x10191cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101920:
    // 0x101920: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x101920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_101924:
    // 0x101924: 0x10000005  b           . + 4 + (0x5 << 2)
label_101928:
    if (ctx->pc == 0x101928u) {
        ctx->pc = 0x101928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101924u;
        // 0x101928: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10192Cu;
        goto label_10192c;
    }
    ctx->pc = 0x101924u;
    {
        const bool branch_taken_0x101924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101924u;
        // 0x101928: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101924) {
            ctx->pc = 0x10193Cu;
            goto label_10193c;
        }
    }
    ctx->pc = 0x10192Cu;
label_10192c:
    // 0x10192c: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x10192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101930:
    // 0x101930: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x101930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_101934:
    // 0x101934: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_101938:
    // 0x101938: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10193c:
    // 0x10193c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x10193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_101940:
    // 0x101940: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101944:
    // 0x101944: 0x60f809  jalr        $v1
label_101948:
    if (ctx->pc == 0x101948u) {
        ctx->pc = 0x101948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101944u;
        // 0x101948: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10194Cu;
        goto label_10194c;
    }
    ctx->pc = 0x101944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10194Cu);
        ctx->pc = 0x101948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101944u;
        // 0x101948: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101944u, 0x10194Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10194Cu;
label_10194c:
    // 0x10194c: 0x0  nop
    ctx->pc = 0x10194cu;
    // NOP
label_101950:
    // 0x101950: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_101954:
    if (ctx->pc == 0x101954u) {
        ctx->pc = 0x101954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101950u;
        // 0x101954: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101958u;
        goto label_101958;
    }
    ctx->pc = 0x101950u;
    {
        const bool branch_taken_0x101950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101950u;
        // 0x101954: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101950) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101958u;
label_101958:
    // 0x101958: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_10195c:
    // 0x10195c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x10195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_101960:
    // 0x101960: 0xc0402a8  jal         func_100AA0
label_101964:
    if (ctx->pc == 0x101964u) {
        ctx->pc = 0x101964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101960u;
        // 0x101964: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101968u;
        goto label_101968;
    }
    ctx->pc = 0x101960u;
    SET_GPR_U32(ctx, 31, 0x101968u);
    ctx->pc = 0x101964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101960u;
    // 0x101964: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101960u, 0x101968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101968u;
label_101968:
    // 0x101968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10196c:
    // 0x10196c: 0xc0402a8  jal         func_100AA0
label_101970:
    if (ctx->pc == 0x101970u) {
        ctx->pc = 0x101970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10196Cu;
        // 0x101970: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101974u;
        goto label_101974;
    }
    ctx->pc = 0x10196Cu;
    SET_GPR_U32(ctx, 31, 0x101974u);
    ctx->pc = 0x101970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10196Cu;
    // 0x101970: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x10196Cu, 0x101974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101974u;
label_101974:
    // 0x101974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101978:
    // 0x101978: 0xc04027c  jal         func_1009F0
label_10197c:
    if (ctx->pc == 0x10197Cu) {
        ctx->pc = 0x10197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101978u;
        // 0x10197c: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101980u;
        goto label_101980;
    }
    ctx->pc = 0x101978u;
    SET_GPR_U32(ctx, 31, 0x101980u);
    ctx->pc = 0x10197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101978u;
    // 0x10197c: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101978u, 0x101980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101980u;
label_101980:
    // 0x101980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101984:
    // 0x101984: 0xc04027c  jal         func_1009F0
label_101988:
    if (ctx->pc == 0x101988u) {
        ctx->pc = 0x101988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101984u;
        // 0x101988: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10198Cu;
        goto label_10198c;
    }
    ctx->pc = 0x101984u;
    SET_GPR_U32(ctx, 31, 0x10198Cu);
    ctx->pc = 0x101988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101984u;
    // 0x101988: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101984u, 0x10198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10198Cu;
label_10198c:
    // 0x10198c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x10198cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101990:
    // 0x101990: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_101994:
    // 0x101994: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x101994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101998:
    // 0x101998: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x101998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_10199c:
    // 0x10199c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x10199cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1019a0:
    // 0x1019a0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1019a4:
    // 0x1019a4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1019a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1019a8:
    // 0x1019a8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1019a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1019ac:
    // 0x1019ac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1019acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1019b0:
    // 0x1019b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1019b4:
    // 0x1019b4: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_1019b8:
    if (ctx->pc == 0x1019B8u) {
        ctx->pc = 0x1019B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019B4u;
        // 0x1019b8: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019BCu;
        goto label_1019bc;
    }
    ctx->pc = 0x1019B4u;
    {
        const bool branch_taken_0x1019b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1019B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019B4u;
        // 0x1019b8: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019b4) {
            ctx->pc = 0x1019E0u;
            goto label_1019e0;
        }
    }
    ctx->pc = 0x1019BCu;
label_1019bc:
    // 0x1019bc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1019bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1019c0:
    // 0x1019c0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1019c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1019c4:
    // 0x1019c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1019c8:
    // 0x1019c8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1019cc:
    // 0x1019cc: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1019ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1019d0:
    // 0x1019d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1019d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1019d4:
    // 0x1019d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1019d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1019d8:
    // 0x1019d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1019dc:
    if (ctx->pc == 0x1019DCu) {
        ctx->pc = 0x1019DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019D8u;
        // 0x1019dc: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019E0u;
        goto label_1019e0;
    }
    ctx->pc = 0x1019D8u;
    {
        const bool branch_taken_0x1019d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1019DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019D8u;
        // 0x1019dc: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019d8) {
            ctx->pc = 0x1019F8u;
            goto label_1019f8;
        }
    }
    ctx->pc = 0x1019E0u;
label_1019e0:
    // 0x1019e0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1019e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1019e4:
    // 0x1019e4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1019e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1019e8:
    // 0x1019e8: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1019e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1019ec:
    // 0x1019ec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1019ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1019f0:
    // 0x1019f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1019f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1019f4:
    // 0x1019f4: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x1019f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1019f8:
    // 0x1019f8: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x1019f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1019fc:
    // 0x1019fc: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_101a00:
    // 0x101a00: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x101a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_101a04:
    // 0x101a04: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_101a08:
    if (ctx->pc == 0x101A08u) {
        ctx->pc = 0x101A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A04u;
        // 0x101a08: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A0Cu;
        goto label_101a0c;
    }
    ctx->pc = 0x101A04u;
    {
        const bool branch_taken_0x101a04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A04u;
        // 0x101a08: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a04) {
            ctx->pc = 0x101A30u;
            goto label_101a30;
        }
    }
    ctx->pc = 0x101A0Cu;
label_101a0c:
    // 0x101a0c: 0x0  nop
    ctx->pc = 0x101a0cu;
    // NOP
label_101a10:
    // 0x101a10: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x101a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_101a14:
    // 0x101a14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101a18:
    // 0x101a18: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x101a18u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_101a1c:
    // 0x101a1c: 0x2c0f809  jalr        $s6
label_101a20:
    if (ctx->pc == 0x101A20u) {
        ctx->pc = 0x101A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A1Cu;
        // 0x101a20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A24u;
        goto label_101a24;
    }
    ctx->pc = 0x101A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x101A24u);
        ctx->pc = 0x101A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A1Cu;
        // 0x101a20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A1Cu, 0x101A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101A24u;
label_101a24:
    // 0x101a24: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x101a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_101a28:
    // 0x101a28: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
label_101a2c:
    if (ctx->pc == 0x101A2Cu) {
        ctx->pc = 0x101A30u;
        goto label_101a30;
    }
    ctx->pc = 0x101A28u;
    {
        const bool branch_taken_0x101a28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x101a28) {
            ctx->pc = 0x101A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101a10;
        }
    }
    ctx->pc = 0x101A30u;
label_101a30:
    // 0x101a30: 0x1000008f  b           . + 4 + (0x8F << 2)
label_101a34:
    if (ctx->pc == 0x101A34u) {
        ctx->pc = 0x101A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A30u;
        // 0x101a34: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A38u;
        goto label_101a38;
    }
    ctx->pc = 0x101A30u;
    {
        const bool branch_taken_0x101a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A30u;
        // 0x101a34: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a30) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101A38u;
label_101a38:
    // 0x101a38: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_101a3c:
    // 0x101a3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x101a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_101a40:
    // 0x101a40: 0xc0402a8  jal         func_100AA0
label_101a44:
    if (ctx->pc == 0x101A44u) {
        ctx->pc = 0x101A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A40u;
        // 0x101a44: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A48u;
        goto label_101a48;
    }
    ctx->pc = 0x101A40u;
    SET_GPR_U32(ctx, 31, 0x101A48u);
    ctx->pc = 0x101A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A40u;
    // 0x101a44: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101A40u, 0x101A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A48u;
label_101a48:
    // 0x101a48: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x101a48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101a4c:
    // 0x101a4c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_101a50:
    // 0x101a50: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x101a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101a54:
    // 0x101a54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x101a54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101a58:
    // 0x101a58: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x101a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_101a5c:
    // 0x101a5c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_101a60:
    // 0x101a60: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x101a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101a64:
    // 0x101a64: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_101a68:
    // 0x101a68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_101a6c:
    // 0x101a6c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_101a70:
    // 0x101a70: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_101a74:
    if (ctx->pc == 0x101A74u) {
        ctx->pc = 0x101A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A70u;
        // 0x101a74: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A78u;
        goto label_101a78;
    }
    ctx->pc = 0x101A70u;
    {
        const bool branch_taken_0x101a70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A70u;
        // 0x101a74: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a70) {
            ctx->pc = 0x101A94u;
            goto label_101a94;
        }
    }
    ctx->pc = 0x101A78u;
label_101a78:
    // 0x101a78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x101a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_101a7c:
    // 0x101a7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101a80:
    // 0x101a80: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101a84:
    // 0x101a84: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101a88:
    // 0x101a88: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x101a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_101a8c:
    // 0x101a8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_101a90:
    if (ctx->pc == 0x101A90u) {
        ctx->pc = 0x101A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A8Cu;
        // 0x101a90: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A94u;
        goto label_101a94;
    }
    ctx->pc = 0x101A8Cu;
    {
        const bool branch_taken_0x101a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A8Cu;
        // 0x101a90: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a8c) {
            ctx->pc = 0x101AA4u;
            goto label_101aa4;
        }
    }
    ctx->pc = 0x101A94u;
label_101a94:
    // 0x101a94: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x101a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101a98:
    // 0x101a98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x101a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_101a9c:
    // 0x101a9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101aa0:
    // 0x101aa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101aa4:
    // 0x101aa4: 0xa0f809  jalr        $a1
label_101aa8:
    if (ctx->pc == 0x101AA8u) {
        ctx->pc = 0x101AACu;
        goto label_101aac;
    }
    ctx->pc = 0x101AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x101AACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101AA4u, 0x101AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101AACu;
label_101aac:
    // 0x101aac: 0x10000070  b           . + 4 + (0x70 << 2)
label_101ab0:
    if (ctx->pc == 0x101AB0u) {
        ctx->pc = 0x101AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AACu;
        // 0x101ab0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101AB4u;
        goto label_101ab4;
    }
    ctx->pc = 0x101AACu;
    {
        const bool branch_taken_0x101aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AACu;
        // 0x101ab0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101aac) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101AB4u;
label_101ab4:
    // 0x101ab4: 0x0  nop
    ctx->pc = 0x101ab4u;
    // NOP
label_101ab8:
    // 0x101ab8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_101abc:
    // 0x101abc: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x101abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_101ac0:
    // 0x101ac0: 0xc0402a8  jal         func_100AA0
label_101ac4:
    if (ctx->pc == 0x101AC4u) {
        ctx->pc = 0x101AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AC0u;
        // 0x101ac4: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101AC8u;
        goto label_101ac8;
    }
    ctx->pc = 0x101AC0u;
    SET_GPR_U32(ctx, 31, 0x101AC8u);
    ctx->pc = 0x101AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101AC0u;
    // 0x101ac4: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101AC0u, 0x101AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AC8u;
label_101ac8:
    // 0x101ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101acc:
    // 0x101acc: 0xc0402a8  jal         func_100AA0
label_101ad0:
    if (ctx->pc == 0x101AD0u) {
        ctx->pc = 0x101AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ACCu;
        // 0x101ad0: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101AD4u;
        goto label_101ad4;
    }
    ctx->pc = 0x101ACCu;
    SET_GPR_U32(ctx, 31, 0x101AD4u);
    ctx->pc = 0x101AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101ACCu;
    // 0x101ad0: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101ACCu, 0x101AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AD4u;
label_101ad4:
    // 0x101ad4: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x101ad4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_101ad8:
    // 0x101ad8: 0x32040040  andi        $a0, $s0, 0x40
    ctx->pc = 0x101ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_101adc:
    // 0x101adc: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x101adcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_101ae0:
    // 0x101ae0: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_101ae4:
    // 0x101ae4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x101ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_101ae8:
    // 0x101ae8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x101ae8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_101aec:
    // 0x101aec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_101af0:
    // 0x101af0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x101af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_101af4:
    // 0x101af4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_101af8:
    // 0x101af8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x101af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_101afc:
    // 0x101afc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x101afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_101b00:
    // 0x101b00: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_101b04:
    if (ctx->pc == 0x101B04u) {
        ctx->pc = 0x101B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B00u;
        // 0x101b04: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B08u;
        goto label_101b08;
    }
    ctx->pc = 0x101B00u;
    {
        const bool branch_taken_0x101b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B00u;
        // 0x101b04: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b00) {
            ctx->pc = 0x101B24u;
            goto label_101b24;
        }
    }
    ctx->pc = 0x101B08u;
label_101b08:
    // 0x101b08: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x101b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_101b0c:
    // 0x101b0c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x101b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101b10:
    // 0x101b10: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x101b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_101b14:
    // 0x101b14: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x101b14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_101b18:
    // 0x101b18: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x101b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_101b1c:
    // 0x101b1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_101b20:
    if (ctx->pc == 0x101B20u) {
        ctx->pc = 0x101B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B1Cu;
        // 0x101b20: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B24u;
        goto label_101b24;
    }
    ctx->pc = 0x101B1Cu;
    {
        const bool branch_taken_0x101b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B1Cu;
        // 0x101b20: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b1c) {
            ctx->pc = 0x101B34u;
            goto label_101b34;
        }
    }
    ctx->pc = 0x101B24u;
label_101b24:
    // 0x101b24: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x101b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101b28:
    // 0x101b28: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x101b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_101b2c:
    // 0x101b2c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x101b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_101b30:
    // 0x101b30: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x101b30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_101b34:
    // 0x101b34: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_101b38:
    if (ctx->pc == 0x101B38u) {
        ctx->pc = 0x101B3Cu;
        goto label_101b3c;
    }
    ctx->pc = 0x101B34u;
    {
        const bool branch_taken_0x101b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x101b34) {
            ctx->pc = 0x101B78u;
            goto label_101b78;
        }
    }
    ctx->pc = 0x101B3Cu;
label_101b3c:
    // 0x101b3c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_101b40:
    if (ctx->pc == 0x101B40u) {
        ctx->pc = 0x101B44u;
        goto label_101b44;
    }
    ctx->pc = 0x101B3Cu;
    {
        const bool branch_taken_0x101b3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x101b3c) {
            ctx->pc = 0x101B60u;
            goto label_101b60;
        }
    }
    ctx->pc = 0x101B44u;
label_101b44:
    // 0x101b44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x101b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_101b48:
    // 0x101b48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101b4c:
    // 0x101b4c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x101b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_101b50:
    // 0x101b50: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x101b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_101b54:
    // 0x101b54: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x101b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_101b58:
    // 0x101b58: 0x10000005  b           . + 4 + (0x5 << 2)
label_101b5c:
    if (ctx->pc == 0x101B5Cu) {
        ctx->pc = 0x101B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B58u;
        // 0x101b5c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B60u;
        goto label_101b60;
    }
    ctx->pc = 0x101B58u;
    {
        const bool branch_taken_0x101b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B58u;
        // 0x101b5c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b58) {
            ctx->pc = 0x101B70u;
            goto label_101b70;
        }
    }
    ctx->pc = 0x101B60u;
label_101b60:
    // 0x101b60: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x101b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101b64:
    // 0x101b64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x101b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_101b68:
    // 0x101b68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_101b6c:
    // 0x101b6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101b70:
    // 0x101b70: 0x60f809  jalr        $v1
label_101b74:
    if (ctx->pc == 0x101B74u) {
        ctx->pc = 0x101B78u;
        goto label_101b78;
    }
    ctx->pc = 0x101B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101B78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B70u, 0x101B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101B78u;
label_101b78:
    // 0x101b78: 0x1000003d  b           . + 4 + (0x3D << 2)
label_101b7c:
    if (ctx->pc == 0x101B7Cu) {
        ctx->pc = 0x101B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B78u;
        // 0x101b7c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B80u;
        goto label_101b80;
    }
    ctx->pc = 0x101B78u;
    {
        const bool branch_taken_0x101b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B78u;
        // 0x101b7c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b78) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101B80u;
label_101b80:
    // 0x101b80: 0x12e80041  beq         $s7, $t0, . + 4 + (0x41 << 2)
label_101b84:
    if (ctx->pc == 0x101B84u) {
        ctx->pc = 0x101B88u;
        goto label_101b88;
    }
    ctx->pc = 0x101B80u;
    {
        const bool branch_taken_0x101b80 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        if (branch_taken_0x101b80) {
            ctx->pc = 0x101C88u;
            return;
        }
    }
    ctx->pc = 0x101B88u;
label_101b88:
    // 0x101b88: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x101b88u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_101b8c:
    // 0x101b8c: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x101b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_101b90:
    // 0x101b90: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x101b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_101b94:
    // 0x101b94: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x101b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_101b98:
    // 0x101b98: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x101b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_101b9c:
    // 0x101b9c: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x101b9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_101ba0:
    // 0x101ba0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_101ba4:
    // 0x101ba4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_101ba8:
    // 0x101ba8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_101bac:
    // 0x101bac: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x101bacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_101bb0:
    // 0x101bb0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x101bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_101bb4:
    // 0x101bb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x101bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_101bb8:
    // 0x101bb8: 0xc04027c  jal         func_1009F0
label_101bbc:
    if (ctx->pc == 0x101BBCu) {
        ctx->pc = 0x101BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BB8u;
        // 0x101bbc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101BC0u;
        goto label_101bc0;
    }
    ctx->pc = 0x101BB8u;
    SET_GPR_U32(ctx, 31, 0x101BC0u);
    ctx->pc = 0x101BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BB8u;
    // 0x101bbc: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101BB8u, 0x101BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BC0u;
label_101bc0:
    // 0x101bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101bc4:
    // 0x101bc4: 0xc0402a8  jal         func_100AA0
label_101bc8:
    if (ctx->pc == 0x101BC8u) {
        ctx->pc = 0x101BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BC4u;
        // 0x101bc8: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101BCCu;
        goto label_101bcc;
    }
    ctx->pc = 0x101BC4u;
    SET_GPR_U32(ctx, 31, 0x101BCCu);
    ctx->pc = 0x101BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BC4u;
    // 0x101bc8: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101BC4u, 0x101BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BCCu;
label_101bcc:
    // 0x101bcc: 0x10000028  b           . + 4 + (0x28 << 2)
label_101bd0:
    if (ctx->pc == 0x101BD0u) {
        ctx->pc = 0x101BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BCCu;
        // 0x101bd0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101BD4u;
        goto label_101bd4;
    }
    ctx->pc = 0x101BCCu;
    {
        const bool branch_taken_0x101bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BCCu;
        // 0x101bd0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bcc) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101BD4u;
label_101bd4:
    // 0x101bd4: 0x0  nop
    ctx->pc = 0x101bd4u;
    // NOP
label_101bd8:
    // 0x101bd8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_101bdc:
    // 0x101bdc: 0xc0402a8  jal         func_100AA0
label_101be0:
    if (ctx->pc == 0x101BE0u) {
        ctx->pc = 0x101BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BDCu;
        // 0x101be0: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101BE4u;
        goto label_101be4;
    }
    ctx->pc = 0x101BDCu;
    SET_GPR_U32(ctx, 31, 0x101BE4u);
    ctx->pc = 0x101BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BDCu;
    // 0x101be0: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101BDCu, 0x101BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BE4u;
label_101be4:
    // 0x101be4: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x101be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_101be8:
    // 0x101be8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x101be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_101bec:
    // 0x101bec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x101becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_101bf0:
    // 0x101bf0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x101bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_101bf4:
    // 0x101bf4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_101bf8:
    if (ctx->pc == 0x101BF8u) {
        ctx->pc = 0x101BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BF4u;
        // 0x101bf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101BFCu;
        goto label_101bfc;
    }
    ctx->pc = 0x101BF4u;
    {
        const bool branch_taken_0x101bf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x101BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BF4u;
        // 0x101bf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bf4) {
            ctx->pc = 0x101C20u;
            goto label_101c20;
        }
    }
    ctx->pc = 0x101BFCu;
label_101bfc:
    // 0x101bfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x101bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_101c00:
    // 0x101c00: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x101c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_101c04:
    // 0x101c04: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_101c08:
    if (ctx->pc == 0x101C08u) {
        ctx->pc = 0x101C0Cu;
        goto label_101c0c;
    }
    ctx->pc = 0x101C04u;
    {
        const bool branch_taken_0x101c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x101c04) {
            ctx->pc = 0x101C18u;
            goto label_101c18;
        }
    }
    ctx->pc = 0x101C0Cu;
label_101c0c:
    // 0x101c0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_101c10:
    if (ctx->pc == 0x101C10u) {
        ctx->pc = 0x101C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C0Cu;
        // 0x101c10: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C14u;
        goto label_101c14;
    }
    ctx->pc = 0x101C0Cu;
    {
        const bool branch_taken_0x101c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C0Cu;
        // 0x101c10: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c0c) {
            ctx->pc = 0x101C20u;
            goto label_101c20;
        }
    }
    ctx->pc = 0x101C14u;
label_101c14:
    // 0x101c14: 0x0  nop
    ctx->pc = 0x101c14u;
    // NOP
label_101c18:
    // 0x101c18: 0xc0f809  jalr        $a2
label_101c1c:
    if (ctx->pc == 0x101C1Cu) {
        ctx->pc = 0x101C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C18u;
        // 0x101c1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C20u;
        goto label_101c20;
    }
    ctx->pc = 0x101C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x101C20u);
        ctx->pc = 0x101C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C18u;
        // 0x101c1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101C18u, 0x101C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101C20u;
label_101c20:
    // 0x101c20: 0x10000013  b           . + 4 + (0x13 << 2)
label_101c24:
    if (ctx->pc == 0x101C24u) {
        ctx->pc = 0x101C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C20u;
        // 0x101c24: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C28u;
        goto label_101c28;
    }
    ctx->pc = 0x101C20u;
    {
        const bool branch_taken_0x101c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C20u;
        // 0x101c24: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c20) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101C28u;
label_101c28:
    // 0x101c28: 0x12e80017  beq         $s7, $t0, . + 4 + (0x17 << 2)
label_101c2c:
    if (ctx->pc == 0x101C2Cu) {
        ctx->pc = 0x101C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C28u;
        // 0x101c2c: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C30u;
        goto label_101c30;
    }
    ctx->pc = 0x101C28u;
    {
        const bool branch_taken_0x101c28 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        ctx->pc = 0x101C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C28u;
        // 0x101c2c: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c28) {
            ctx->pc = 0x101C88u;
            return;
        }
    }
    ctx->pc = 0x101C30u;
label_101c30:
    // 0x101c30: 0xc04027c  jal         func_1009F0
label_101c34:
    if (ctx->pc == 0x101C34u) {
        ctx->pc = 0x101C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C30u;
        // 0x101c34: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C38u;
        goto label_101c38;
    }
    ctx->pc = 0x101C30u;
    SET_GPR_U32(ctx, 31, 0x101C38u);
    ctx->pc = 0x101C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C30u;
    // 0x101c34: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101C30u, 0x101C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C38u;
label_101c38:
    // 0x101c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101c3c:
    // 0x101c3c: 0xc04027c  jal         func_1009F0
label_101c40:
    if (ctx->pc == 0x101C40u) {
        ctx->pc = 0x101C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C3Cu;
        // 0x101c40: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C44u;
        goto label_101c44;
    }
    ctx->pc = 0x101C3Cu;
    SET_GPR_U32(ctx, 31, 0x101C44u);
    ctx->pc = 0x101C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C3Cu;
    // 0x101c40: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101C3Cu, 0x101C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C44u;
label_101c44:
    // 0x101c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101c48:
    // 0x101c48: 0xc0402a8  jal         func_100AA0
label_101c4c:
    if (ctx->pc == 0x101C4Cu) {
        ctx->pc = 0x101C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C48u;
        // 0x101c4c: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C50u;
        goto label_101c50;
    }
    ctx->pc = 0x101C48u;
    SET_GPR_U32(ctx, 31, 0x101C50u);
    ctx->pc = 0x101C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C48u;
    // 0x101c4c: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101C48u, 0x101C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C50u;
label_101c50:
    // 0x101c50: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x101c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_101c54:
    // 0x101c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_101c58:
    // 0x101c58: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x101c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101c5c:
    // 0x101c5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_101c60:
    if (ctx->pc == 0x101C60u) {
        ctx->pc = 0x101C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C5Cu;
        // 0x101c60: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C64u;
        goto label_101c64;
    }
    ctx->pc = 0x101C5Cu;
    {
        const bool branch_taken_0x101c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C5Cu;
        // 0x101c60: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c5c) {
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101C64u;
label_101c64:
    // 0x101c64: 0x0  nop
    ctx->pc = 0x101c64u;
    // NOP
label_101c68:
    // 0x101c68: 0xc040224  jal         func_100890
label_101c6c:
    if (ctx->pc == 0x101C6Cu) {
        ctx->pc = 0x101C70u;
        goto label_101c70;
    }
    ctx->pc = 0x101C68u;
    SET_GPR_U32(ctx, 31, 0x101C70u);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x101C68u, 0x101C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C70u;
label_101c70:
    // 0x101c70: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x101c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_101c74:
    // 0x101c74: 0x1060fe0c  beqz        $v1, . + 4 + (-0x1F4 << 2)
label_101c78:
    if (ctx->pc == 0x101C78u) {
        ctx->pc = 0x101C7Cu;
        goto label_101c7c;
    }
    ctx->pc = 0x101C74u;
    {
        const bool branch_taken_0x101c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x101c74) {
            ctx->pc = 0x1014A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1014a8;
        }
    }
    ctx->pc = 0x101C7Cu;
label_101c7c:
    // 0x101c7c: 0x1000fe0a  b           . + 4 + (-0x1F6 << 2)
label_101c80:
    if (ctx->pc == 0x101C80u) {
        ctx->pc = 0x101C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C7Cu;
        // 0x101c80: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C84u;
        goto label_fallthrough_0x101c7c;
    }
    ctx->pc = 0x101C7Cu;
    {
        const bool branch_taken_0x101c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C7Cu;
        // 0x101c80: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c7c) {
            ctx->pc = 0x1014A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1014a8;
        }
    }
label_fallthrough_0x101c7c:
    ctx->pc = 0x101C84u;
}
