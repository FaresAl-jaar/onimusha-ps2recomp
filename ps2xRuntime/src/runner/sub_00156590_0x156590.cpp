#include <cstdio>
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

// Function: sub_00156590
// Address: 0x156590 - 0x157b18
void sub_00156590_0x156590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156590_0x156590");
#endif
    { static uint32_t n=0; ++n; if (n<=5 || (n%600)==0) fprintf(stderr,"[probe e156590] call %u a0=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x156590u: goto label_156590;
        case 0x156594u: goto label_156594;
        case 0x156598u: goto label_156598;
        case 0x15659cu: goto label_15659c;
        case 0x1565a0u: goto label_1565a0;
        case 0x1565a4u: goto label_1565a4;
        case 0x1565a8u: goto label_1565a8;
        case 0x1565acu: goto label_1565ac;
        case 0x1565b0u: goto label_1565b0;
        case 0x1565b4u: goto label_1565b4;
        case 0x1565b8u: goto label_1565b8;
        case 0x1565bcu: goto label_1565bc;
        case 0x1565c0u: goto label_1565c0;
        case 0x1565c4u: goto label_1565c4;
        case 0x1565c8u: goto label_1565c8;
        case 0x1565ccu: goto label_1565cc;
        case 0x1565d0u: goto label_1565d0;
        case 0x1565d4u: goto label_1565d4;
        case 0x1565d8u: goto label_1565d8;
        case 0x1565dcu: goto label_1565dc;
        case 0x1565e0u: goto label_1565e0;
        case 0x1565e4u: goto label_1565e4;
        case 0x1565e8u: goto label_1565e8;
        case 0x1565ecu: goto label_1565ec;
        case 0x1565f0u: goto label_1565f0;
        case 0x1565f4u: goto label_1565f4;
        case 0x1565f8u: goto label_1565f8;
        case 0x1565fcu: goto label_1565fc;
        case 0x156600u: goto label_156600;
        case 0x156604u: goto label_156604;
        case 0x156608u: goto label_156608;
        case 0x15660cu: goto label_15660c;
        case 0x156610u: goto label_156610;
        case 0x156614u: goto label_156614;
        case 0x156618u: goto label_156618;
        case 0x15661cu: goto label_15661c;
        case 0x156620u: goto label_156620;
        case 0x156624u: goto label_156624;
        case 0x156628u: goto label_156628;
        case 0x15662cu: goto label_15662c;
        case 0x156630u: goto label_156630;
        case 0x156634u: goto label_156634;
        case 0x156638u: goto label_156638;
        case 0x15663cu: goto label_15663c;
        case 0x156640u: goto label_156640;
        case 0x156644u: goto label_156644;
        case 0x156648u: goto label_156648;
        case 0x15664cu: goto label_15664c;
        case 0x156650u: goto label_156650;
        case 0x156654u: goto label_156654;
        case 0x156658u: goto label_156658;
        case 0x15665cu: goto label_15665c;
        case 0x156660u: goto label_156660;
        case 0x156664u: goto label_156664;
        case 0x156668u: goto label_156668;
        case 0x15666cu: goto label_15666c;
        case 0x156670u: goto label_156670;
        case 0x156674u: goto label_156674;
        case 0x156678u: goto label_156678;
        case 0x15667cu: goto label_15667c;
        case 0x156680u: goto label_156680;
        case 0x156684u: goto label_156684;
        case 0x156688u: goto label_156688;
        case 0x15668cu: goto label_15668c;
        case 0x156690u: goto label_156690;
        case 0x156694u: goto label_156694;
        case 0x156698u: goto label_156698;
        case 0x15669cu: goto label_15669c;
        case 0x1566a0u: goto label_1566a0;
        case 0x1566a4u: goto label_1566a4;
        case 0x1566a8u: goto label_1566a8;
        case 0x1566acu: goto label_1566ac;
        case 0x1566b0u: goto label_1566b0;
        case 0x1566b4u: goto label_1566b4;
        case 0x1566b8u: goto label_1566b8;
        case 0x1566bcu: goto label_1566bc;
        case 0x1566c0u: goto label_1566c0;
        case 0x1566c4u: goto label_1566c4;
        case 0x1566c8u: goto label_1566c8;
        case 0x1566ccu: goto label_1566cc;
        case 0x1566d0u: goto label_1566d0;
        case 0x1566d4u: goto label_1566d4;
        case 0x1566d8u: goto label_1566d8;
        case 0x1566dcu: goto label_1566dc;
        case 0x1566e0u: goto label_1566e0;
        case 0x1566e4u: goto label_1566e4;
        case 0x1566e8u: goto label_1566e8;
        case 0x1566ecu: goto label_1566ec;
        case 0x1566f0u: goto label_1566f0;
        case 0x1566f4u: goto label_1566f4;
        case 0x1566f8u: goto label_1566f8;
        case 0x1566fcu: goto label_1566fc;
        case 0x156700u: goto label_156700;
        case 0x156704u: goto label_156704;
        case 0x156708u: goto label_156708;
        case 0x15670cu: goto label_15670c;
        case 0x156710u: goto label_156710;
        case 0x156714u: goto label_156714;
        case 0x156718u: goto label_156718;
        case 0x15671cu: goto label_15671c;
        case 0x156720u: goto label_156720;
        case 0x156724u: goto label_156724;
        case 0x156728u: goto label_156728;
        case 0x15672cu: goto label_15672c;
        case 0x156730u: goto label_156730;
        case 0x156734u: goto label_156734;
        case 0x156738u: goto label_156738;
        case 0x15673cu: goto label_15673c;
        case 0x156740u: goto label_156740;
        case 0x156744u: goto label_156744;
        case 0x156748u: goto label_156748;
        case 0x15674cu: goto label_15674c;
        case 0x156750u: goto label_156750;
        case 0x156754u: goto label_156754;
        case 0x156758u: goto label_156758;
        case 0x15675cu: goto label_15675c;
        case 0x156760u: goto label_156760;
        case 0x156764u: goto label_156764;
        case 0x156768u: goto label_156768;
        case 0x15676cu: goto label_15676c;
        case 0x156770u: goto label_156770;
        case 0x156774u: goto label_156774;
        case 0x156778u: goto label_156778;
        case 0x15677cu: goto label_15677c;
        case 0x156780u: goto label_156780;
        case 0x156784u: goto label_156784;
        case 0x156788u: goto label_156788;
        case 0x15678cu: goto label_15678c;
        case 0x156790u: goto label_156790;
        case 0x156794u: goto label_156794;
        case 0x156798u: goto label_156798;
        case 0x15679cu: goto label_15679c;
        case 0x1567a0u: goto label_1567a0;
        case 0x1567a4u: goto label_1567a4;
        case 0x1567a8u: goto label_1567a8;
        case 0x1567acu: goto label_1567ac;
        case 0x1567b0u: goto label_1567b0;
        case 0x1567b4u: goto label_1567b4;
        case 0x1567b8u: goto label_1567b8;
        case 0x1567bcu: goto label_1567bc;
        case 0x1567c0u: goto label_1567c0;
        case 0x1567c4u: goto label_1567c4;
        case 0x1567c8u: goto label_1567c8;
        case 0x1567ccu: goto label_1567cc;
        case 0x1567d0u: goto label_1567d0;
        case 0x1567d4u: goto label_1567d4;
        case 0x1567d8u: goto label_1567d8;
        case 0x1567dcu: goto label_1567dc;
        case 0x1567e0u: goto label_1567e0;
        case 0x1567e4u: goto label_1567e4;
        case 0x1567e8u: goto label_1567e8;
        case 0x1567ecu: goto label_1567ec;
        case 0x1567f0u: goto label_1567f0;
        case 0x1567f4u: goto label_1567f4;
        case 0x1567f8u: goto label_1567f8;
        case 0x1567fcu: goto label_1567fc;
        case 0x156800u: goto label_156800;
        case 0x156804u: goto label_156804;
        case 0x156808u: goto label_156808;
        case 0x15680cu: goto label_15680c;
        case 0x156810u: goto label_156810;
        case 0x156814u: goto label_156814;
        case 0x156818u: goto label_156818;
        case 0x15681cu: goto label_15681c;
        case 0x156820u: goto label_156820;
        case 0x156824u: goto label_156824;
        case 0x156828u: goto label_156828;
        case 0x15682cu: goto label_15682c;
        case 0x156830u: goto label_156830;
        case 0x156834u: goto label_156834;
        case 0x156838u: goto label_156838;
        case 0x15683cu: goto label_15683c;
        case 0x156840u: goto label_156840;
        case 0x156844u: goto label_156844;
        case 0x156848u: goto label_156848;
        case 0x15684cu: goto label_15684c;
        case 0x156850u: goto label_156850;
        case 0x156854u: goto label_156854;
        case 0x156858u: goto label_156858;
        case 0x15685cu: goto label_15685c;
        case 0x156860u: goto label_156860;
        case 0x156864u: goto label_156864;
        case 0x156868u: goto label_156868;
        case 0x15686cu: goto label_15686c;
        case 0x156870u: goto label_156870;
        case 0x156874u: goto label_156874;
        case 0x156878u: goto label_156878;
        case 0x15687cu: goto label_15687c;
        case 0x156880u: goto label_156880;
        case 0x156884u: goto label_156884;
        case 0x156888u: goto label_156888;
        case 0x15688cu: goto label_15688c;
        case 0x156890u: goto label_156890;
        case 0x156894u: goto label_156894;
        case 0x156898u: goto label_156898;
        case 0x15689cu: goto label_15689c;
        case 0x1568a0u: goto label_1568a0;
        case 0x1568a4u: goto label_1568a4;
        case 0x1568a8u: goto label_1568a8;
        case 0x1568acu: goto label_1568ac;
        case 0x1568b0u: goto label_1568b0;
        case 0x1568b4u: goto label_1568b4;
        case 0x1568b8u: goto label_1568b8;
        case 0x1568bcu: goto label_1568bc;
        case 0x1568c0u: goto label_1568c0;
        case 0x1568c4u: goto label_1568c4;
        case 0x1568c8u: goto label_1568c8;
        case 0x1568ccu: goto label_1568cc;
        case 0x1568d0u: goto label_1568d0;
        case 0x1568d4u: goto label_1568d4;
        case 0x1568d8u: goto label_1568d8;
        case 0x1568dcu: goto label_1568dc;
        case 0x1568e0u: goto label_1568e0;
        case 0x1568e4u: goto label_1568e4;
        case 0x1568e8u: goto label_1568e8;
        case 0x1568ecu: goto label_1568ec;
        case 0x1568f0u: goto label_1568f0;
        case 0x1568f4u: goto label_1568f4;
        case 0x1568f8u: goto label_1568f8;
        case 0x1568fcu: goto label_1568fc;
        case 0x156900u: goto label_156900;
        case 0x156904u: goto label_156904;
        case 0x156908u: goto label_156908;
        case 0x15690cu: goto label_15690c;
        case 0x156910u: goto label_156910;
        case 0x156914u: goto label_156914;
        case 0x156918u: goto label_156918;
        case 0x15691cu: goto label_15691c;
        case 0x156920u: goto label_156920;
        case 0x156924u: goto label_156924;
        case 0x156928u: goto label_156928;
        case 0x15692cu: goto label_15692c;
        case 0x156930u: goto label_156930;
        case 0x156934u: goto label_156934;
        case 0x156938u: goto label_156938;
        case 0x15693cu: goto label_15693c;
        case 0x156940u: goto label_156940;
        case 0x156944u: goto label_156944;
        case 0x156948u: goto label_156948;
        case 0x15694cu: goto label_15694c;
        case 0x156950u: goto label_156950;
        case 0x156954u: goto label_156954;
        case 0x156958u: goto label_156958;
        case 0x15695cu: goto label_15695c;
        case 0x156960u: goto label_156960;
        case 0x156964u: goto label_156964;
        case 0x156968u: goto label_156968;
        case 0x15696cu: goto label_15696c;
        case 0x156970u: goto label_156970;
        case 0x156974u: goto label_156974;
        case 0x156978u: goto label_156978;
        case 0x15697cu: goto label_15697c;
        case 0x156980u: goto label_156980;
        case 0x156984u: goto label_156984;
        case 0x156988u: goto label_156988;
        case 0x15698cu: goto label_15698c;
        case 0x156990u: goto label_156990;
        case 0x156994u: goto label_156994;
        case 0x156998u: goto label_156998;
        case 0x15699cu: goto label_15699c;
        case 0x1569a0u: goto label_1569a0;
        case 0x1569a4u: goto label_1569a4;
        case 0x1569a8u: goto label_1569a8;
        case 0x1569acu: goto label_1569ac;
        case 0x1569b0u: goto label_1569b0;
        case 0x1569b4u: goto label_1569b4;
        case 0x1569b8u: goto label_1569b8;
        case 0x1569bcu: goto label_1569bc;
        case 0x1569c0u: goto label_1569c0;
        case 0x1569c4u: goto label_1569c4;
        case 0x1569c8u: goto label_1569c8;
        case 0x1569ccu: goto label_1569cc;
        case 0x1569d0u: goto label_1569d0;
        case 0x1569d4u: goto label_1569d4;
        case 0x1569d8u: goto label_1569d8;
        case 0x1569dcu: goto label_1569dc;
        case 0x1569e0u: goto label_1569e0;
        case 0x1569e4u: goto label_1569e4;
        case 0x1569e8u: goto label_1569e8;
        case 0x1569ecu: goto label_1569ec;
        case 0x1569f0u: goto label_1569f0;
        case 0x1569f4u: goto label_1569f4;
        case 0x1569f8u: goto label_1569f8;
        case 0x1569fcu: goto label_1569fc;
        case 0x156a00u: goto label_156a00;
        case 0x156a04u: goto label_156a04;
        case 0x156a08u: goto label_156a08;
        case 0x156a0cu: goto label_156a0c;
        case 0x156a10u: goto label_156a10;
        case 0x156a14u: goto label_156a14;
        case 0x156a18u: goto label_156a18;
        case 0x156a1cu: goto label_156a1c;
        case 0x156a20u: goto label_156a20;
        case 0x156a24u: goto label_156a24;
        case 0x156a28u: goto label_156a28;
        case 0x156a2cu: goto label_156a2c;
        case 0x156a30u: goto label_156a30;
        case 0x156a34u: goto label_156a34;
        case 0x156a38u: goto label_156a38;
        case 0x156a3cu: goto label_156a3c;
        case 0x156a40u: goto label_156a40;
        case 0x156a44u: goto label_156a44;
        case 0x156a48u: goto label_156a48;
        case 0x156a4cu: goto label_156a4c;
        case 0x156a50u: goto label_156a50;
        case 0x156a54u: goto label_156a54;
        case 0x156a58u: goto label_156a58;
        case 0x156a5cu: goto label_156a5c;
        case 0x156a60u: goto label_156a60;
        case 0x156a64u: goto label_156a64;
        case 0x156a68u: goto label_156a68;
        case 0x156a6cu: goto label_156a6c;
        case 0x156a70u: goto label_156a70;
        case 0x156a74u: goto label_156a74;
        case 0x156a78u: goto label_156a78;
        case 0x156a7cu: goto label_156a7c;
        case 0x156a80u: goto label_156a80;
        case 0x156a84u: goto label_156a84;
        case 0x156a88u: goto label_156a88;
        case 0x156a8cu: goto label_156a8c;
        case 0x156a90u: goto label_156a90;
        case 0x156a94u: goto label_156a94;
        case 0x156a98u: goto label_156a98;
        case 0x156a9cu: goto label_156a9c;
        case 0x156aa0u: goto label_156aa0;
        case 0x156aa4u: goto label_156aa4;
        case 0x156aa8u: goto label_156aa8;
        case 0x156aacu: goto label_156aac;
        case 0x156ab0u: goto label_156ab0;
        case 0x156ab4u: goto label_156ab4;
        case 0x156ab8u: goto label_156ab8;
        case 0x156abcu: goto label_156abc;
        case 0x156ac0u: goto label_156ac0;
        case 0x156ac4u: goto label_156ac4;
        case 0x156ac8u: goto label_156ac8;
        case 0x156accu: goto label_156acc;
        case 0x156ad0u: goto label_156ad0;
        case 0x156ad4u: goto label_156ad4;
        case 0x156ad8u: goto label_156ad8;
        case 0x156adcu: goto label_156adc;
        case 0x156ae0u: goto label_156ae0;
        case 0x156ae4u: goto label_156ae4;
        case 0x156ae8u: goto label_156ae8;
        case 0x156aecu: goto label_156aec;
        case 0x156af0u: goto label_156af0;
        case 0x156af4u: goto label_156af4;
        case 0x156af8u: goto label_156af8;
        case 0x156afcu: goto label_156afc;
        case 0x156b00u: goto label_156b00;
        case 0x156b04u: goto label_156b04;
        case 0x156b08u: goto label_156b08;
        case 0x156b0cu: goto label_156b0c;
        case 0x156b10u: goto label_156b10;
        case 0x156b14u: goto label_156b14;
        case 0x156b18u: goto label_156b18;
        case 0x156b1cu: goto label_156b1c;
        case 0x156b20u: goto label_156b20;
        case 0x156b24u: goto label_156b24;
        case 0x156b28u: goto label_156b28;
        case 0x156b2cu: goto label_156b2c;
        case 0x156b30u: goto label_156b30;
        case 0x156b34u: goto label_156b34;
        case 0x156b38u: goto label_156b38;
        case 0x156b3cu: goto label_156b3c;
        case 0x156b40u: goto label_156b40;
        case 0x156b44u: goto label_156b44;
        case 0x156b48u: goto label_156b48;
        case 0x156b4cu: goto label_156b4c;
        case 0x156b50u: goto label_156b50;
        case 0x156b54u: goto label_156b54;
        case 0x156b58u: goto label_156b58;
        case 0x156b5cu: goto label_156b5c;
        case 0x156b60u: goto label_156b60;
        case 0x156b64u: goto label_156b64;
        case 0x156b68u: goto label_156b68;
        case 0x156b6cu: goto label_156b6c;
        case 0x156b70u: goto label_156b70;
        case 0x156b74u: goto label_156b74;
        case 0x156b78u: goto label_156b78;
        case 0x156b7cu: goto label_156b7c;
        case 0x156b80u: goto label_156b80;
        case 0x156b84u: goto label_156b84;
        case 0x156b88u: goto label_156b88;
        case 0x156b8cu: goto label_156b8c;
        case 0x156b90u: goto label_156b90;
        case 0x156b94u: goto label_156b94;
        case 0x156b98u: goto label_156b98;
        case 0x156b9cu: goto label_156b9c;
        case 0x156ba0u: goto label_156ba0;
        case 0x156ba4u: goto label_156ba4;
        case 0x156ba8u: goto label_156ba8;
        case 0x156bacu: goto label_156bac;
        case 0x156bb0u: goto label_156bb0;
        case 0x156bb4u: goto label_156bb4;
        case 0x156bb8u: goto label_156bb8;
        case 0x156bbcu: goto label_156bbc;
        case 0x156bc0u: goto label_156bc0;
        case 0x156bc4u: goto label_156bc4;
        case 0x156bc8u: goto label_156bc8;
        case 0x156bccu: goto label_156bcc;
        case 0x156bd0u: goto label_156bd0;
        case 0x156bd4u: goto label_156bd4;
        case 0x156bd8u: goto label_156bd8;
        case 0x156bdcu: goto label_156bdc;
        case 0x156be0u: goto label_156be0;
        case 0x156be4u: goto label_156be4;
        case 0x156be8u: goto label_156be8;
        case 0x156becu: goto label_156bec;
        case 0x156bf0u: goto label_156bf0;
        case 0x156bf4u: goto label_156bf4;
        case 0x156bf8u: goto label_156bf8;
        case 0x156bfcu: goto label_156bfc;
        case 0x156c00u: goto label_156c00;
        case 0x156c04u: goto label_156c04;
        case 0x156c08u: goto label_156c08;
        case 0x156c0cu: goto label_156c0c;
        case 0x156c10u: goto label_156c10;
        case 0x156c14u: goto label_156c14;
        case 0x156c18u: goto label_156c18;
        case 0x156c1cu: goto label_156c1c;
        case 0x156c20u: goto label_156c20;
        case 0x156c24u: goto label_156c24;
        case 0x156c28u: goto label_156c28;
        case 0x156c2cu: goto label_156c2c;
        case 0x156c30u: goto label_156c30;
        case 0x156c34u: goto label_156c34;
        case 0x156c38u: goto label_156c38;
        case 0x156c3cu: goto label_156c3c;
        case 0x156c40u: goto label_156c40;
        case 0x156c44u: goto label_156c44;
        case 0x156c48u: goto label_156c48;
        case 0x156c4cu: goto label_156c4c;
        case 0x156c50u: goto label_156c50;
        case 0x156c54u: goto label_156c54;
        case 0x156c58u: goto label_156c58;
        case 0x156c5cu: goto label_156c5c;
        case 0x156c60u: goto label_156c60;
        case 0x156c64u: goto label_156c64;
        case 0x156c68u: goto label_156c68;
        case 0x156c6cu: goto label_156c6c;
        case 0x156c70u: goto label_156c70;
        case 0x156c74u: goto label_156c74;
        case 0x156c78u: goto label_156c78;
        case 0x156c7cu: goto label_156c7c;
        case 0x156c80u: goto label_156c80;
        case 0x156c84u: goto label_156c84;
        case 0x156c88u: goto label_156c88;
        case 0x156c8cu: goto label_156c8c;
        case 0x156c90u: goto label_156c90;
        case 0x156c94u: goto label_156c94;
        case 0x156c98u: goto label_156c98;
        case 0x156c9cu: goto label_156c9c;
        case 0x156ca0u: goto label_156ca0;
        case 0x156ca4u: goto label_156ca4;
        case 0x156ca8u: goto label_156ca8;
        case 0x156cacu: goto label_156cac;
        case 0x156cb0u: goto label_156cb0;
        case 0x156cb4u: goto label_156cb4;
        case 0x156cb8u: goto label_156cb8;
        case 0x156cbcu: goto label_156cbc;
        case 0x156cc0u: goto label_156cc0;
        case 0x156cc4u: goto label_156cc4;
        case 0x156cc8u: goto label_156cc8;
        case 0x156cccu: goto label_156ccc;
        case 0x156cd0u: goto label_156cd0;
        case 0x156cd4u: goto label_156cd4;
        case 0x156cd8u: goto label_156cd8;
        case 0x156cdcu: goto label_156cdc;
        case 0x156ce0u: goto label_156ce0;
        case 0x156ce4u: goto label_156ce4;
        case 0x156ce8u: goto label_156ce8;
        case 0x156cecu: goto label_156cec;
        case 0x156cf0u: goto label_156cf0;
        case 0x156cf4u: goto label_156cf4;
        case 0x156cf8u: goto label_156cf8;
        case 0x156cfcu: goto label_156cfc;
        case 0x156d00u: goto label_156d00;
        case 0x156d04u: goto label_156d04;
        case 0x156d08u: goto label_156d08;
        case 0x156d0cu: goto label_156d0c;
        case 0x156d10u: goto label_156d10;
        case 0x156d14u: goto label_156d14;
        case 0x156d18u: goto label_156d18;
        case 0x156d1cu: goto label_156d1c;
        case 0x156d20u: goto label_156d20;
        case 0x156d24u: goto label_156d24;
        case 0x156d28u: goto label_156d28;
        case 0x156d2cu: goto label_156d2c;
        case 0x156d30u: goto label_156d30;
        case 0x156d34u: goto label_156d34;
        case 0x156d38u: goto label_156d38;
        case 0x156d3cu: goto label_156d3c;
        case 0x156d40u: goto label_156d40;
        case 0x156d44u: goto label_156d44;
        case 0x156d48u: goto label_156d48;
        case 0x156d4cu: goto label_156d4c;
        case 0x156d50u: goto label_156d50;
        case 0x156d54u: goto label_156d54;
        case 0x156d58u: goto label_156d58;
        case 0x156d5cu: goto label_156d5c;
        case 0x156d60u: goto label_156d60;
        case 0x156d64u: goto label_156d64;
        case 0x156d68u: goto label_156d68;
        case 0x156d6cu: goto label_156d6c;
        case 0x156d70u: goto label_156d70;
        case 0x156d74u: goto label_156d74;
        case 0x156d78u: goto label_156d78;
        case 0x156d7cu: goto label_156d7c;
        case 0x156d80u: goto label_156d80;
        case 0x156d84u: goto label_156d84;
        case 0x156d88u: goto label_156d88;
        case 0x156d8cu: goto label_156d8c;
        case 0x156d90u: goto label_156d90;
        case 0x156d94u: goto label_156d94;
        case 0x156d98u: goto label_156d98;
        case 0x156d9cu: goto label_156d9c;
        case 0x156da0u: goto label_156da0;
        case 0x156da4u: goto label_156da4;
        case 0x156da8u: goto label_156da8;
        case 0x156dacu: goto label_156dac;
        case 0x156db0u: goto label_156db0;
        case 0x156db4u: goto label_156db4;
        case 0x156db8u: goto label_156db8;
        case 0x156dbcu: goto label_156dbc;
        case 0x156dc0u: goto label_156dc0;
        case 0x156dc4u: goto label_156dc4;
        case 0x156dc8u: goto label_156dc8;
        case 0x156dccu: goto label_156dcc;
        case 0x156dd0u: goto label_156dd0;
        case 0x156dd4u: goto label_156dd4;
        case 0x156dd8u: goto label_156dd8;
        case 0x156ddcu: goto label_156ddc;
        case 0x156de0u: goto label_156de0;
        case 0x156de4u: goto label_156de4;
        case 0x156de8u: goto label_156de8;
        case 0x156decu: goto label_156dec;
        case 0x156df0u: goto label_156df0;
        case 0x156df4u: goto label_156df4;
        case 0x156df8u: goto label_156df8;
        case 0x156dfcu: goto label_156dfc;
        case 0x156e00u: goto label_156e00;
        case 0x156e04u: goto label_156e04;
        case 0x156e08u: goto label_156e08;
        case 0x156e0cu: goto label_156e0c;
        case 0x156e10u: goto label_156e10;
        case 0x156e14u: goto label_156e14;
        case 0x156e18u: goto label_156e18;
        case 0x156e1cu: goto label_156e1c;
        case 0x156e20u: goto label_156e20;
        case 0x156e24u: goto label_156e24;
        case 0x156e28u: goto label_156e28;
        case 0x156e2cu: goto label_156e2c;
        case 0x156e30u: goto label_156e30;
        case 0x156e34u: goto label_156e34;
        case 0x156e38u: goto label_156e38;
        case 0x156e3cu: goto label_156e3c;
        case 0x156e40u: goto label_156e40;
        case 0x156e44u: goto label_156e44;
        case 0x156e48u: goto label_156e48;
        case 0x156e4cu: goto label_156e4c;
        case 0x156e50u: goto label_156e50;
        case 0x156e54u: goto label_156e54;
        case 0x156e58u: goto label_156e58;
        case 0x156e5cu: goto label_156e5c;
        case 0x156e60u: goto label_156e60;
        case 0x156e64u: goto label_156e64;
        case 0x156e68u: goto label_156e68;
        case 0x156e6cu: goto label_156e6c;
        case 0x156e70u: goto label_156e70;
        case 0x156e74u: goto label_156e74;
        case 0x156e78u: goto label_156e78;
        case 0x156e7cu: goto label_156e7c;
        case 0x156e80u: goto label_156e80;
        case 0x156e84u: goto label_156e84;
        case 0x156e88u: goto label_156e88;
        case 0x156e8cu: goto label_156e8c;
        case 0x156e90u: goto label_156e90;
        case 0x156e94u: goto label_156e94;
        case 0x156e98u: goto label_156e98;
        case 0x156e9cu: goto label_156e9c;
        case 0x156ea0u: goto label_156ea0;
        case 0x156ea4u: goto label_156ea4;
        case 0x156ea8u: goto label_156ea8;
        case 0x156eacu: goto label_156eac;
        case 0x156eb0u: goto label_156eb0;
        case 0x156eb4u: goto label_156eb4;
        case 0x156eb8u: goto label_156eb8;
        case 0x156ebcu: goto label_156ebc;
        case 0x156ec0u: goto label_156ec0;
        case 0x156ec4u: goto label_156ec4;
        case 0x156ec8u: goto label_156ec8;
        case 0x156eccu: goto label_156ecc;
        case 0x156ed0u: goto label_156ed0;
        case 0x156ed4u: goto label_156ed4;
        case 0x156ed8u: goto label_156ed8;
        case 0x156edcu: goto label_156edc;
        case 0x156ee0u: goto label_156ee0;
        case 0x156ee4u: goto label_156ee4;
        case 0x156ee8u: goto label_156ee8;
        case 0x156eecu: goto label_156eec;
        case 0x156ef0u: goto label_156ef0;
        case 0x156ef4u: goto label_156ef4;
        case 0x156ef8u: goto label_156ef8;
        case 0x156efcu: goto label_156efc;
        case 0x156f00u: goto label_156f00;
        case 0x156f04u: goto label_156f04;
        case 0x156f08u: goto label_156f08;
        case 0x156f0cu: goto label_156f0c;
        case 0x156f10u: goto label_156f10;
        case 0x156f14u: goto label_156f14;
        case 0x156f18u: goto label_156f18;
        case 0x156f1cu: goto label_156f1c;
        case 0x156f20u: goto label_156f20;
        case 0x156f24u: goto label_156f24;
        case 0x156f28u: goto label_156f28;
        case 0x156f2cu: goto label_156f2c;
        case 0x156f30u: goto label_156f30;
        case 0x156f34u: goto label_156f34;
        case 0x156f38u: goto label_156f38;
        case 0x156f3cu: goto label_156f3c;
        case 0x156f40u: goto label_156f40;
        case 0x156f44u: goto label_156f44;
        case 0x156f48u: goto label_156f48;
        case 0x156f4cu: goto label_156f4c;
        case 0x156f50u: goto label_156f50;
        case 0x156f54u: goto label_156f54;
        case 0x156f58u: goto label_156f58;
        case 0x156f5cu: goto label_156f5c;
        case 0x156f60u: goto label_156f60;
        case 0x156f64u: goto label_156f64;
        case 0x156f68u: goto label_156f68;
        case 0x156f6cu: goto label_156f6c;
        case 0x156f70u: goto label_156f70;
        case 0x156f74u: goto label_156f74;
        case 0x156f78u: goto label_156f78;
        case 0x156f7cu: goto label_156f7c;
        case 0x156f80u: goto label_156f80;
        case 0x156f84u: goto label_156f84;
        case 0x156f88u: goto label_156f88;
        case 0x156f8cu: goto label_156f8c;
        case 0x156f90u: goto label_156f90;
        case 0x156f94u: goto label_156f94;
        case 0x156f98u: goto label_156f98;
        case 0x156f9cu: goto label_156f9c;
        case 0x156fa0u: goto label_156fa0;
        case 0x156fa4u: goto label_156fa4;
        case 0x156fa8u: goto label_156fa8;
        case 0x156facu: goto label_156fac;
        case 0x156fb0u: goto label_156fb0;
        case 0x156fb4u: goto label_156fb4;
        case 0x156fb8u: goto label_156fb8;
        case 0x156fbcu: goto label_156fbc;
        case 0x156fc0u: goto label_156fc0;
        case 0x156fc4u: goto label_156fc4;
        case 0x156fc8u: goto label_156fc8;
        case 0x156fccu: goto label_156fcc;
        case 0x156fd0u: goto label_156fd0;
        case 0x156fd4u: goto label_156fd4;
        case 0x156fd8u: goto label_156fd8;
        case 0x156fdcu: goto label_156fdc;
        case 0x156fe0u: goto label_156fe0;
        case 0x156fe4u: goto label_156fe4;
        case 0x156fe8u: goto label_156fe8;
        case 0x156fecu: goto label_156fec;
        case 0x156ff0u: goto label_156ff0;
        case 0x156ff4u: goto label_156ff4;
        case 0x156ff8u: goto label_156ff8;
        case 0x156ffcu: goto label_156ffc;
        case 0x157000u: goto label_157000;
        case 0x157004u: goto label_157004;
        case 0x157008u: goto label_157008;
        case 0x15700cu: goto label_15700c;
        case 0x157010u: goto label_157010;
        case 0x157014u: goto label_157014;
        case 0x157018u: goto label_157018;
        case 0x15701cu: goto label_15701c;
        case 0x157020u: goto label_157020;
        case 0x157024u: goto label_157024;
        case 0x157028u: goto label_157028;
        case 0x15702cu: goto label_15702c;
        case 0x157030u: goto label_157030;
        case 0x157034u: goto label_157034;
        case 0x157038u: goto label_157038;
        case 0x15703cu: goto label_15703c;
        case 0x157040u: goto label_157040;
        case 0x157044u: goto label_157044;
        case 0x157048u: goto label_157048;
        case 0x15704cu: goto label_15704c;
        case 0x157050u: goto label_157050;
        case 0x157054u: goto label_157054;
        case 0x157058u: goto label_157058;
        case 0x15705cu: goto label_15705c;
        case 0x157060u: goto label_157060;
        case 0x157064u: goto label_157064;
        case 0x157068u: goto label_157068;
        case 0x15706cu: goto label_15706c;
        case 0x157070u: goto label_157070;
        case 0x157074u: goto label_157074;
        case 0x157078u: goto label_157078;
        case 0x15707cu: goto label_15707c;
        case 0x157080u: goto label_157080;
        case 0x157084u: goto label_157084;
        case 0x157088u: goto label_157088;
        case 0x15708cu: goto label_15708c;
        case 0x157090u: goto label_157090;
        case 0x157094u: goto label_157094;
        case 0x157098u: goto label_157098;
        case 0x15709cu: goto label_15709c;
        case 0x1570a0u: goto label_1570a0;
        case 0x1570a4u: goto label_1570a4;
        case 0x1570a8u: goto label_1570a8;
        case 0x1570acu: goto label_1570ac;
        case 0x1570b0u: goto label_1570b0;
        case 0x1570b4u: goto label_1570b4;
        case 0x1570b8u: goto label_1570b8;
        case 0x1570bcu: goto label_1570bc;
        case 0x1570c0u: goto label_1570c0;
        case 0x1570c4u: goto label_1570c4;
        case 0x1570c8u: goto label_1570c8;
        case 0x1570ccu: goto label_1570cc;
        case 0x1570d0u: goto label_1570d0;
        case 0x1570d4u: goto label_1570d4;
        case 0x1570d8u: goto label_1570d8;
        case 0x1570dcu: goto label_1570dc;
        case 0x1570e0u: goto label_1570e0;
        case 0x1570e4u: goto label_1570e4;
        case 0x1570e8u: goto label_1570e8;
        case 0x1570ecu: goto label_1570ec;
        case 0x1570f0u: goto label_1570f0;
        case 0x1570f4u: goto label_1570f4;
        case 0x1570f8u: goto label_1570f8;
        case 0x1570fcu: goto label_1570fc;
        case 0x157100u: goto label_157100;
        case 0x157104u: goto label_157104;
        case 0x157108u: goto label_157108;
        case 0x15710cu: goto label_15710c;
        case 0x157110u: goto label_157110;
        case 0x157114u: goto label_157114;
        case 0x157118u: goto label_157118;
        case 0x15711cu: goto label_15711c;
        case 0x157120u: goto label_157120;
        case 0x157124u: goto label_157124;
        case 0x157128u: goto label_157128;
        case 0x15712cu: goto label_15712c;
        case 0x157130u: goto label_157130;
        case 0x157134u: goto label_157134;
        case 0x157138u: goto label_157138;
        case 0x15713cu: goto label_15713c;
        case 0x157140u: goto label_157140;
        case 0x157144u: goto label_157144;
        case 0x157148u: goto label_157148;
        case 0x15714cu: goto label_15714c;
        case 0x157150u: goto label_157150;
        case 0x157154u: goto label_157154;
        case 0x157158u: goto label_157158;
        case 0x15715cu: goto label_15715c;
        case 0x157160u: goto label_157160;
        case 0x157164u: goto label_157164;
        case 0x157168u: goto label_157168;
        case 0x15716cu: goto label_15716c;
        case 0x157170u: goto label_157170;
        case 0x157174u: goto label_157174;
        case 0x157178u: goto label_157178;
        case 0x15717cu: goto label_15717c;
        case 0x157180u: goto label_157180;
        case 0x157184u: goto label_157184;
        case 0x157188u: goto label_157188;
        case 0x15718cu: goto label_15718c;
        case 0x157190u: goto label_157190;
        case 0x157194u: goto label_157194;
        case 0x157198u: goto label_157198;
        case 0x15719cu: goto label_15719c;
        case 0x1571a0u: goto label_1571a0;
        case 0x1571a4u: goto label_1571a4;
        case 0x1571a8u: goto label_1571a8;
        case 0x1571acu: goto label_1571ac;
        case 0x1571b0u: goto label_1571b0;
        case 0x1571b4u: goto label_1571b4;
        case 0x1571b8u: goto label_1571b8;
        case 0x1571bcu: goto label_1571bc;
        case 0x1571c0u: goto label_1571c0;
        case 0x1571c4u: goto label_1571c4;
        case 0x1571c8u: goto label_1571c8;
        case 0x1571ccu: goto label_1571cc;
        case 0x1571d0u: goto label_1571d0;
        case 0x1571d4u: goto label_1571d4;
        case 0x1571d8u: goto label_1571d8;
        case 0x1571dcu: goto label_1571dc;
        case 0x1571e0u: goto label_1571e0;
        case 0x1571e4u: goto label_1571e4;
        case 0x1571e8u: goto label_1571e8;
        case 0x1571ecu: goto label_1571ec;
        case 0x1571f0u: goto label_1571f0;
        case 0x1571f4u: goto label_1571f4;
        case 0x1571f8u: goto label_1571f8;
        case 0x1571fcu: goto label_1571fc;
        case 0x157200u: goto label_157200;
        case 0x157204u: goto label_157204;
        case 0x157208u: goto label_157208;
        case 0x15720cu: goto label_15720c;
        case 0x157210u: goto label_157210;
        case 0x157214u: goto label_157214;
        case 0x157218u: goto label_157218;
        case 0x15721cu: goto label_15721c;
        case 0x157220u: goto label_157220;
        case 0x157224u: goto label_157224;
        case 0x157228u: goto label_157228;
        case 0x15722cu: goto label_15722c;
        case 0x157230u: goto label_157230;
        case 0x157234u: goto label_157234;
        case 0x157238u: goto label_157238;
        case 0x15723cu: goto label_15723c;
        case 0x157240u: goto label_157240;
        case 0x157244u: goto label_157244;
        case 0x157248u: goto label_157248;
        case 0x15724cu: goto label_15724c;
        case 0x157250u: goto label_157250;
        case 0x157254u: goto label_157254;
        case 0x157258u: goto label_157258;
        case 0x15725cu: goto label_15725c;
        case 0x157260u: goto label_157260;
        case 0x157264u: goto label_157264;
        case 0x157268u: goto label_157268;
        case 0x15726cu: goto label_15726c;
        case 0x157270u: goto label_157270;
        case 0x157274u: goto label_157274;
        case 0x157278u: goto label_157278;
        case 0x15727cu: goto label_15727c;
        case 0x157280u: goto label_157280;
        case 0x157284u: goto label_157284;
        case 0x157288u: goto label_157288;
        case 0x15728cu: goto label_15728c;
        case 0x157290u: goto label_157290;
        case 0x157294u: goto label_157294;
        case 0x157298u: goto label_157298;
        case 0x15729cu: goto label_15729c;
        case 0x1572a0u: goto label_1572a0;
        case 0x1572a4u: goto label_1572a4;
        case 0x1572a8u: goto label_1572a8;
        case 0x1572acu: goto label_1572ac;
        case 0x1572b0u: goto label_1572b0;
        case 0x1572b4u: goto label_1572b4;
        case 0x1572b8u: goto label_1572b8;
        case 0x1572bcu: goto label_1572bc;
        case 0x1572c0u: goto label_1572c0;
        case 0x1572c4u: goto label_1572c4;
        case 0x1572c8u: goto label_1572c8;
        case 0x1572ccu: goto label_1572cc;
        case 0x1572d0u: goto label_1572d0;
        case 0x1572d4u: goto label_1572d4;
        case 0x1572d8u: goto label_1572d8;
        case 0x1572dcu: goto label_1572dc;
        case 0x1572e0u: goto label_1572e0;
        case 0x1572e4u: goto label_1572e4;
        case 0x1572e8u: goto label_1572e8;
        case 0x1572ecu: goto label_1572ec;
        case 0x1572f0u: goto label_1572f0;
        case 0x1572f4u: goto label_1572f4;
        case 0x1572f8u: goto label_1572f8;
        case 0x1572fcu: goto label_1572fc;
        case 0x157300u: goto label_157300;
        case 0x157304u: goto label_157304;
        case 0x157308u: goto label_157308;
        case 0x15730cu: goto label_15730c;
        case 0x157310u: goto label_157310;
        case 0x157314u: goto label_157314;
        case 0x157318u: goto label_157318;
        case 0x15731cu: goto label_15731c;
        case 0x157320u: goto label_157320;
        case 0x157324u: goto label_157324;
        case 0x157328u: goto label_157328;
        case 0x15732cu: goto label_15732c;
        case 0x157330u: goto label_157330;
        case 0x157334u: goto label_157334;
        case 0x157338u: goto label_157338;
        case 0x15733cu: goto label_15733c;
        case 0x157340u: goto label_157340;
        case 0x157344u: goto label_157344;
        case 0x157348u: goto label_157348;
        case 0x15734cu: goto label_15734c;
        case 0x157350u: goto label_157350;
        case 0x157354u: goto label_157354;
        case 0x157358u: goto label_157358;
        case 0x15735cu: goto label_15735c;
        case 0x157360u: goto label_157360;
        case 0x157364u: goto label_157364;
        case 0x157368u: goto label_157368;
        case 0x15736cu: goto label_15736c;
        case 0x157370u: goto label_157370;
        case 0x157374u: goto label_157374;
        case 0x157378u: goto label_157378;
        case 0x15737cu: goto label_15737c;
        case 0x157380u: goto label_157380;
        case 0x157384u: goto label_157384;
        case 0x157388u: goto label_157388;
        case 0x15738cu: goto label_15738c;
        case 0x157390u: goto label_157390;
        case 0x157394u: goto label_157394;
        case 0x157398u: goto label_157398;
        case 0x15739cu: goto label_15739c;
        case 0x1573a0u: goto label_1573a0;
        case 0x1573a4u: goto label_1573a4;
        case 0x1573a8u: goto label_1573a8;
        case 0x1573acu: goto label_1573ac;
        case 0x1573b0u: goto label_1573b0;
        case 0x1573b4u: goto label_1573b4;
        case 0x1573b8u: goto label_1573b8;
        case 0x1573bcu: goto label_1573bc;
        case 0x1573c0u: goto label_1573c0;
        case 0x1573c4u: goto label_1573c4;
        case 0x1573c8u: goto label_1573c8;
        case 0x1573ccu: goto label_1573cc;
        case 0x1573d0u: goto label_1573d0;
        case 0x1573d4u: goto label_1573d4;
        case 0x1573d8u: goto label_1573d8;
        case 0x1573dcu: goto label_1573dc;
        case 0x1573e0u: goto label_1573e0;
        case 0x1573e4u: goto label_1573e4;
        case 0x1573e8u: goto label_1573e8;
        case 0x1573ecu: goto label_1573ec;
        case 0x1573f0u: goto label_1573f0;
        case 0x1573f4u: goto label_1573f4;
        case 0x1573f8u: goto label_1573f8;
        case 0x1573fcu: goto label_1573fc;
        case 0x157400u: goto label_157400;
        case 0x157404u: goto label_157404;
        case 0x157408u: goto label_157408;
        case 0x15740cu: goto label_15740c;
        case 0x157410u: goto label_157410;
        case 0x157414u: goto label_157414;
        case 0x157418u: goto label_157418;
        case 0x15741cu: goto label_15741c;
        case 0x157420u: goto label_157420;
        case 0x157424u: goto label_157424;
        case 0x157428u: goto label_157428;
        case 0x15742cu: goto label_15742c;
        case 0x157430u: goto label_157430;
        case 0x157434u: goto label_157434;
        case 0x157438u: goto label_157438;
        case 0x15743cu: goto label_15743c;
        case 0x157440u: goto label_157440;
        case 0x157444u: goto label_157444;
        case 0x157448u: goto label_157448;
        case 0x15744cu: goto label_15744c;
        case 0x157450u: goto label_157450;
        case 0x157454u: goto label_157454;
        case 0x157458u: goto label_157458;
        case 0x15745cu: goto label_15745c;
        case 0x157460u: goto label_157460;
        case 0x157464u: goto label_157464;
        case 0x157468u: goto label_157468;
        case 0x15746cu: goto label_15746c;
        case 0x157470u: goto label_157470;
        case 0x157474u: goto label_157474;
        case 0x157478u: goto label_157478;
        case 0x15747cu: goto label_15747c;
        case 0x157480u: goto label_157480;
        case 0x157484u: goto label_157484;
        case 0x157488u: goto label_157488;
        case 0x15748cu: goto label_15748c;
        case 0x157490u: goto label_157490;
        case 0x157494u: goto label_157494;
        case 0x157498u: goto label_157498;
        case 0x15749cu: goto label_15749c;
        case 0x1574a0u: goto label_1574a0;
        case 0x1574a4u: goto label_1574a4;
        case 0x1574a8u: goto label_1574a8;
        case 0x1574acu: goto label_1574ac;
        case 0x1574b0u: goto label_1574b0;
        case 0x1574b4u: goto label_1574b4;
        case 0x1574b8u: goto label_1574b8;
        case 0x1574bcu: goto label_1574bc;
        case 0x1574c0u: goto label_1574c0;
        case 0x1574c4u: goto label_1574c4;
        case 0x1574c8u: goto label_1574c8;
        case 0x1574ccu: goto label_1574cc;
        case 0x1574d0u: goto label_1574d0;
        case 0x1574d4u: goto label_1574d4;
        case 0x1574d8u: goto label_1574d8;
        case 0x1574dcu: goto label_1574dc;
        case 0x1574e0u: goto label_1574e0;
        case 0x1574e4u: goto label_1574e4;
        case 0x1574e8u: goto label_1574e8;
        case 0x1574ecu: goto label_1574ec;
        case 0x1574f0u: goto label_1574f0;
        case 0x1574f4u: goto label_1574f4;
        case 0x1574f8u: goto label_1574f8;
        case 0x1574fcu: goto label_1574fc;
        case 0x157500u: goto label_157500;
        case 0x157504u: goto label_157504;
        case 0x157508u: goto label_157508;
        case 0x15750cu: goto label_15750c;
        case 0x157510u: goto label_157510;
        case 0x157514u: goto label_157514;
        case 0x157518u: goto label_157518;
        case 0x15751cu: goto label_15751c;
        case 0x157520u: goto label_157520;
        case 0x157524u: goto label_157524;
        case 0x157528u: goto label_157528;
        case 0x15752cu: goto label_15752c;
        case 0x157530u: goto label_157530;
        case 0x157534u: goto label_157534;
        case 0x157538u: goto label_157538;
        case 0x15753cu: goto label_15753c;
        case 0x157540u: goto label_157540;
        case 0x157544u: goto label_157544;
        case 0x157548u: goto label_157548;
        case 0x15754cu: goto label_15754c;
        case 0x157550u: goto label_157550;
        case 0x157554u: goto label_157554;
        case 0x157558u: goto label_157558;
        case 0x15755cu: goto label_15755c;
        case 0x157560u: goto label_157560;
        case 0x157564u: goto label_157564;
        case 0x157568u: goto label_157568;
        case 0x15756cu: goto label_15756c;
        case 0x157570u: goto label_157570;
        case 0x157574u: goto label_157574;
        case 0x157578u: goto label_157578;
        case 0x15757cu: goto label_15757c;
        case 0x157580u: goto label_157580;
        case 0x157584u: goto label_157584;
        case 0x157588u: goto label_157588;
        case 0x15758cu: goto label_15758c;
        case 0x157590u: goto label_157590;
        case 0x157594u: goto label_157594;
        case 0x157598u: goto label_157598;
        case 0x15759cu: goto label_15759c;
        case 0x1575a0u: goto label_1575a0;
        case 0x1575a4u: goto label_1575a4;
        case 0x1575a8u: goto label_1575a8;
        case 0x1575acu: goto label_1575ac;
        case 0x1575b0u: goto label_1575b0;
        case 0x1575b4u: goto label_1575b4;
        case 0x1575b8u: goto label_1575b8;
        case 0x1575bcu: goto label_1575bc;
        case 0x1575c0u: goto label_1575c0;
        case 0x1575c4u: goto label_1575c4;
        case 0x1575c8u: goto label_1575c8;
        case 0x1575ccu: goto label_1575cc;
        case 0x1575d0u: goto label_1575d0;
        case 0x1575d4u: goto label_1575d4;
        case 0x1575d8u: goto label_1575d8;
        case 0x1575dcu: goto label_1575dc;
        case 0x1575e0u: goto label_1575e0;
        case 0x1575e4u: goto label_1575e4;
        case 0x1575e8u: goto label_1575e8;
        case 0x1575ecu: goto label_1575ec;
        case 0x1575f0u: goto label_1575f0;
        case 0x1575f4u: goto label_1575f4;
        case 0x1575f8u: goto label_1575f8;
        case 0x1575fcu: goto label_1575fc;
        case 0x157600u: goto label_157600;
        case 0x157604u: goto label_157604;
        case 0x157608u: goto label_157608;
        case 0x15760cu: goto label_15760c;
        case 0x157610u: goto label_157610;
        case 0x157614u: goto label_157614;
        case 0x157618u: goto label_157618;
        case 0x15761cu: goto label_15761c;
        case 0x157620u: goto label_157620;
        case 0x157624u: goto label_157624;
        case 0x157628u: goto label_157628;
        case 0x15762cu: goto label_15762c;
        case 0x157630u: goto label_157630;
        case 0x157634u: goto label_157634;
        case 0x157638u: goto label_157638;
        case 0x15763cu: goto label_15763c;
        case 0x157640u: goto label_157640;
        case 0x157644u: goto label_157644;
        case 0x157648u: goto label_157648;
        case 0x15764cu: goto label_15764c;
        case 0x157650u: goto label_157650;
        case 0x157654u: goto label_157654;
        case 0x157658u: goto label_157658;
        case 0x15765cu: goto label_15765c;
        case 0x157660u: goto label_157660;
        case 0x157664u: goto label_157664;
        case 0x157668u: goto label_157668;
        case 0x15766cu: goto label_15766c;
        case 0x157670u: goto label_157670;
        case 0x157674u: goto label_157674;
        case 0x157678u: goto label_157678;
        case 0x15767cu: goto label_15767c;
        case 0x157680u: goto label_157680;
        case 0x157684u: goto label_157684;
        case 0x157688u: goto label_157688;
        case 0x15768cu: goto label_15768c;
        case 0x157690u: goto label_157690;
        case 0x157694u: goto label_157694;
        case 0x157698u: goto label_157698;
        case 0x15769cu: goto label_15769c;
        case 0x1576a0u: goto label_1576a0;
        case 0x1576a4u: goto label_1576a4;
        case 0x1576a8u: goto label_1576a8;
        case 0x1576acu: goto label_1576ac;
        case 0x1576b0u: goto label_1576b0;
        case 0x1576b4u: goto label_1576b4;
        case 0x1576b8u: goto label_1576b8;
        case 0x1576bcu: goto label_1576bc;
        case 0x1576c0u: goto label_1576c0;
        case 0x1576c4u: goto label_1576c4;
        case 0x1576c8u: goto label_1576c8;
        case 0x1576ccu: goto label_1576cc;
        case 0x1576d0u: goto label_1576d0;
        case 0x1576d4u: goto label_1576d4;
        case 0x1576d8u: goto label_1576d8;
        case 0x1576dcu: goto label_1576dc;
        case 0x1576e0u: goto label_1576e0;
        case 0x1576e4u: goto label_1576e4;
        case 0x1576e8u: goto label_1576e8;
        case 0x1576ecu: goto label_1576ec;
        case 0x1576f0u: goto label_1576f0;
        case 0x1576f4u: goto label_1576f4;
        case 0x1576f8u: goto label_1576f8;
        case 0x1576fcu: goto label_1576fc;
        case 0x157700u: goto label_157700;
        case 0x157704u: goto label_157704;
        case 0x157708u: goto label_157708;
        case 0x15770cu: goto label_15770c;
        case 0x157710u: goto label_157710;
        case 0x157714u: goto label_157714;
        case 0x157718u: goto label_157718;
        case 0x15771cu: goto label_15771c;
        case 0x157720u: goto label_157720;
        case 0x157724u: goto label_157724;
        case 0x157728u: goto label_157728;
        case 0x15772cu: goto label_15772c;
        case 0x157730u: goto label_157730;
        case 0x157734u: goto label_157734;
        case 0x157738u: goto label_157738;
        case 0x15773cu: goto label_15773c;
        case 0x157740u: goto label_157740;
        case 0x157744u: goto label_157744;
        case 0x157748u: goto label_157748;
        case 0x15774cu: goto label_15774c;
        case 0x157750u: goto label_157750;
        case 0x157754u: goto label_157754;
        case 0x157758u: goto label_157758;
        case 0x15775cu: goto label_15775c;
        case 0x157760u: goto label_157760;
        case 0x157764u: goto label_157764;
        case 0x157768u: goto label_157768;
        case 0x15776cu: goto label_15776c;
        case 0x157770u: goto label_157770;
        case 0x157774u: goto label_157774;
        case 0x157778u: goto label_157778;
        case 0x15777cu: goto label_15777c;
        case 0x157780u: goto label_157780;
        case 0x157784u: goto label_157784;
        case 0x157788u: goto label_157788;
        case 0x15778cu: goto label_15778c;
        case 0x157790u: goto label_157790;
        case 0x157794u: goto label_157794;
        case 0x157798u: goto label_157798;
        case 0x15779cu: goto label_15779c;
        case 0x1577a0u: goto label_1577a0;
        case 0x1577a4u: goto label_1577a4;
        case 0x1577a8u: goto label_1577a8;
        case 0x1577acu: goto label_1577ac;
        case 0x1577b0u: goto label_1577b0;
        case 0x1577b4u: goto label_1577b4;
        case 0x1577b8u: goto label_1577b8;
        case 0x1577bcu: goto label_1577bc;
        case 0x1577c0u: goto label_1577c0;
        case 0x1577c4u: goto label_1577c4;
        case 0x1577c8u: goto label_1577c8;
        case 0x1577ccu: goto label_1577cc;
        case 0x1577d0u: goto label_1577d0;
        case 0x1577d4u: goto label_1577d4;
        case 0x1577d8u: goto label_1577d8;
        case 0x1577dcu: goto label_1577dc;
        case 0x1577e0u: goto label_1577e0;
        case 0x1577e4u: goto label_1577e4;
        case 0x1577e8u: goto label_1577e8;
        case 0x1577ecu: goto label_1577ec;
        case 0x1577f0u: goto label_1577f0;
        case 0x1577f4u: goto label_1577f4;
        case 0x1577f8u: goto label_1577f8;
        case 0x1577fcu: goto label_1577fc;
        case 0x157800u: goto label_157800;
        case 0x157804u: goto label_157804;
        case 0x157808u: goto label_157808;
        case 0x15780cu: goto label_15780c;
        case 0x157810u: goto label_157810;
        case 0x157814u: goto label_157814;
        case 0x157818u: goto label_157818;
        case 0x15781cu: goto label_15781c;
        case 0x157820u: goto label_157820;
        case 0x157824u: goto label_157824;
        case 0x157828u: goto label_157828;
        case 0x15782cu: goto label_15782c;
        case 0x157830u: goto label_157830;
        case 0x157834u: goto label_157834;
        case 0x157838u: goto label_157838;
        case 0x15783cu: goto label_15783c;
        case 0x157840u: goto label_157840;
        case 0x157844u: goto label_157844;
        case 0x157848u: goto label_157848;
        case 0x15784cu: goto label_15784c;
        case 0x157850u: goto label_157850;
        case 0x157854u: goto label_157854;
        case 0x157858u: goto label_157858;
        case 0x15785cu: goto label_15785c;
        case 0x157860u: goto label_157860;
        case 0x157864u: goto label_157864;
        case 0x157868u: goto label_157868;
        case 0x15786cu: goto label_15786c;
        case 0x157870u: goto label_157870;
        case 0x157874u: goto label_157874;
        case 0x157878u: goto label_157878;
        case 0x15787cu: goto label_15787c;
        case 0x157880u: goto label_157880;
        case 0x157884u: goto label_157884;
        case 0x157888u: goto label_157888;
        case 0x15788cu: goto label_15788c;
        case 0x157890u: goto label_157890;
        case 0x157894u: goto label_157894;
        case 0x157898u: goto label_157898;
        case 0x15789cu: goto label_15789c;
        case 0x1578a0u: goto label_1578a0;
        case 0x1578a4u: goto label_1578a4;
        case 0x1578a8u: goto label_1578a8;
        case 0x1578acu: goto label_1578ac;
        case 0x1578b0u: goto label_1578b0;
        case 0x1578b4u: goto label_1578b4;
        case 0x1578b8u: goto label_1578b8;
        case 0x1578bcu: goto label_1578bc;
        case 0x1578c0u: goto label_1578c0;
        case 0x1578c4u: goto label_1578c4;
        case 0x1578c8u: goto label_1578c8;
        case 0x1578ccu: goto label_1578cc;
        case 0x1578d0u: goto label_1578d0;
        case 0x1578d4u: goto label_1578d4;
        case 0x1578d8u: goto label_1578d8;
        case 0x1578dcu: goto label_1578dc;
        case 0x1578e0u: goto label_1578e0;
        case 0x1578e4u: goto label_1578e4;
        case 0x1578e8u: goto label_1578e8;
        case 0x1578ecu: goto label_1578ec;
        case 0x1578f0u: goto label_1578f0;
        case 0x1578f4u: goto label_1578f4;
        case 0x1578f8u: goto label_1578f8;
        case 0x1578fcu: goto label_1578fc;
        case 0x157900u: goto label_157900;
        case 0x157904u: goto label_157904;
        case 0x157908u: goto label_157908;
        case 0x15790cu: goto label_15790c;
        case 0x157910u: goto label_157910;
        case 0x157914u: goto label_157914;
        case 0x157918u: goto label_157918;
        case 0x15791cu: goto label_15791c;
        case 0x157920u: goto label_157920;
        case 0x157924u: goto label_157924;
        case 0x157928u: goto label_157928;
        case 0x15792cu: goto label_15792c;
        case 0x157930u: goto label_157930;
        case 0x157934u: goto label_157934;
        case 0x157938u: goto label_157938;
        case 0x15793cu: goto label_15793c;
        case 0x157940u: goto label_157940;
        case 0x157944u: goto label_157944;
        case 0x157948u: goto label_157948;
        case 0x15794cu: goto label_15794c;
        case 0x157950u: goto label_157950;
        case 0x157954u: goto label_157954;
        case 0x157958u: goto label_157958;
        case 0x15795cu: goto label_15795c;
        case 0x157960u: goto label_157960;
        case 0x157964u: goto label_157964;
        case 0x157968u: goto label_157968;
        case 0x15796cu: goto label_15796c;
        case 0x157970u: goto label_157970;
        case 0x157974u: goto label_157974;
        case 0x157978u: goto label_157978;
        case 0x15797cu: goto label_15797c;
        case 0x157980u: goto label_157980;
        case 0x157984u: goto label_157984;
        case 0x157988u: goto label_157988;
        case 0x15798cu: goto label_15798c;
        case 0x157990u: goto label_157990;
        case 0x157994u: goto label_157994;
        case 0x157998u: goto label_157998;
        case 0x15799cu: goto label_15799c;
        case 0x1579a0u: goto label_1579a0;
        case 0x1579a4u: goto label_1579a4;
        case 0x1579a8u: goto label_1579a8;
        case 0x1579acu: goto label_1579ac;
        case 0x1579b0u: goto label_1579b0;
        case 0x1579b4u: goto label_1579b4;
        case 0x1579b8u: goto label_1579b8;
        case 0x1579bcu: goto label_1579bc;
        case 0x1579c0u: goto label_1579c0;
        case 0x1579c4u: goto label_1579c4;
        case 0x1579c8u: goto label_1579c8;
        case 0x1579ccu: goto label_1579cc;
        case 0x1579d0u: goto label_1579d0;
        case 0x1579d4u: goto label_1579d4;
        case 0x1579d8u: goto label_1579d8;
        case 0x1579dcu: goto label_1579dc;
        case 0x1579e0u: goto label_1579e0;
        case 0x1579e4u: goto label_1579e4;
        case 0x1579e8u: goto label_1579e8;
        case 0x1579ecu: goto label_1579ec;
        case 0x1579f0u: goto label_1579f0;
        case 0x1579f4u: goto label_1579f4;
        case 0x1579f8u: goto label_1579f8;
        case 0x1579fcu: goto label_1579fc;
        case 0x157a00u: goto label_157a00;
        case 0x157a04u: goto label_157a04;
        case 0x157a08u: goto label_157a08;
        case 0x157a0cu: goto label_157a0c;
        case 0x157a10u: goto label_157a10;
        case 0x157a14u: goto label_157a14;
        case 0x157a18u: goto label_157a18;
        case 0x157a1cu: goto label_157a1c;
        case 0x157a20u: goto label_157a20;
        case 0x157a24u: goto label_157a24;
        case 0x157a28u: goto label_157a28;
        case 0x157a2cu: goto label_157a2c;
        case 0x157a30u: goto label_157a30;
        case 0x157a34u: goto label_157a34;
        case 0x157a38u: goto label_157a38;
        case 0x157a3cu: goto label_157a3c;
        case 0x157a40u: goto label_157a40;
        case 0x157a44u: goto label_157a44;
        case 0x157a48u: goto label_157a48;
        case 0x157a4cu: goto label_157a4c;
        case 0x157a50u: goto label_157a50;
        case 0x157a54u: goto label_157a54;
        case 0x157a58u: goto label_157a58;
        case 0x157a5cu: goto label_157a5c;
        case 0x157a60u: goto label_157a60;
        case 0x157a64u: goto label_157a64;
        case 0x157a68u: goto label_157a68;
        case 0x157a6cu: goto label_157a6c;
        case 0x157a70u: goto label_157a70;
        case 0x157a74u: goto label_157a74;
        case 0x157a78u: goto label_157a78;
        case 0x157a7cu: goto label_157a7c;
        case 0x157a80u: goto label_157a80;
        case 0x157a84u: goto label_157a84;
        case 0x157a88u: goto label_157a88;
        case 0x157a8cu: goto label_157a8c;
        case 0x157a90u: goto label_157a90;
        case 0x157a94u: goto label_157a94;
        case 0x157a98u: goto label_157a98;
        case 0x157a9cu: goto label_157a9c;
        case 0x157aa0u: goto label_157aa0;
        case 0x157aa4u: goto label_157aa4;
        case 0x157aa8u: goto label_157aa8;
        case 0x157aacu: goto label_157aac;
        case 0x157ab0u: goto label_157ab0;
        case 0x157ab4u: goto label_157ab4;
        case 0x157ab8u: goto label_157ab8;
        case 0x157abcu: goto label_157abc;
        case 0x157ac0u: goto label_157ac0;
        case 0x157ac4u: goto label_157ac4;
        case 0x157ac8u: goto label_157ac8;
        case 0x157accu: goto label_157acc;
        case 0x157ad0u: goto label_157ad0;
        case 0x157ad4u: goto label_157ad4;
        case 0x157ad8u: goto label_157ad8;
        case 0x157adcu: goto label_157adc;
        case 0x157ae0u: goto label_157ae0;
        case 0x157ae4u: goto label_157ae4;
        case 0x157ae8u: goto label_157ae8;
        case 0x157aecu: goto label_157aec;
        case 0x157af0u: goto label_157af0;
        case 0x157af4u: goto label_157af4;
        case 0x157af8u: goto label_157af8;
        case 0x157afcu: goto label_157afc;
        case 0x157b00u: goto label_157b00;
        case 0x157b04u: goto label_157b04;
        case 0x157b08u: goto label_157b08;
        case 0x157b0cu: goto label_157b0c;
        case 0x157b10u: goto label_157b10;
        case 0x157b14u: goto label_157b14;
        default: break;
    }

    ctx->pc = 0x156590u;

label_156590:
    // 0x156590: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x156590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_156594:
    // 0x156594: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x156594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_156598:
    // 0x156598: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x156598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15659c:
    // 0x15659c: 0x24a5ad80  addiu       $a1, $a1, -0x5280
    ctx->pc = 0x15659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946176));
label_1565a0:
    // 0x1565a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1565a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1565a4:
    // 0x1565a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1565a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1565a8:
    // 0x1565a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1565a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1565ac:
    // 0x1565ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1565acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1565b0:
    // 0x1565b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1565b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1565b4:
    // 0x1565b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1565b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1565b8:
    // 0x1565b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1565b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1565bc:
    // 0x1565bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1565bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1565c0:
    // 0x1565c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1565c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1565c4:
    // 0x1565c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1565c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1565c8:
    // 0x1565c8: 0xc049ed2  jal         func_127B48
label_1565cc:
    if (ctx->pc == 0x1565CCu) {
        ctx->pc = 0x1565CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565C8u;
        // 0x1565cc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565D0u;
        goto label_1565d0;
    }
    ctx->pc = 0x1565C8u;
    SET_GPR_U32(ctx, 31, 0x1565D0u);
    ctx->pc = 0x1565CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1565C8u;
    // 0x1565cc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x1565C8u, 0x1565D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1565D0u;
label_1565d0:
    // 0x1565d0: 0xae007a30  sw          $zero, 0x7A30($s0)
    ctx->pc = 0x1565d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31280), GPR_U32(ctx, 0));
label_1565d4:
    // 0x1565d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1565d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1565d8:
    // 0x1565d8: 0x8c24cef4  lw          $a0, -0x310C($at)
    ctx->pc = 0x1565d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954740)));
label_1565dc:
    // 0x1565dc: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1565dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1565e0:
    // 0x1565e0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_1565e4:
    // 0x1565e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1565e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1565e8:
    // 0x1565e8: 0x8c220fe0  lw          $v0, 0xFE0($at)
    ctx->pc = 0x1565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
label_1565ec:
    // 0x1565ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1565ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1565f0:
    // 0x1565f0: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x1565f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
label_1565f4:
    // 0x1565f4: 0xac23cef4  sw          $v1, -0x310C($at)
    ctx->pc = 0x1565f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954740), GPR_U32(ctx, 3));
label_1565f8:
    // 0x1565f8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x1565f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
label_1565fc:
    // 0x1565fc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1565fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_156600:
    // 0x156600: 0xc0d8c60  jal         func_363180
label_156604:
    if (ctx->pc == 0x156604u) {
        ctx->pc = 0x156604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156600u;
        // 0x156604: 0xac220fe0  sw          $v0, 0xFE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156608u;
        goto label_156608;
    }
    ctx->pc = 0x156600u;
    SET_GPR_U32(ctx, 31, 0x156608u);
    ctx->pc = 0x156604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156600u;
    // 0x156604: 0xac220fe0  sw          $v0, 0xFE0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363180u, 0x156600u, 0x156608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156608u;
label_156608:
    // 0x156608: 0xa38089b4  sb          $zero, -0x764C($gp)
    ctx->pc = 0x156608u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937012), (uint8_t)GPR_U32(ctx, 0));
label_15660c:
    // 0x15660c: 0xa38089b8  sb          $zero, -0x7648($gp)
    ctx->pc = 0x15660cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937016), (uint8_t)GPR_U32(ctx, 0));
label_156610:
    // 0x156610: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_156614:
    // 0x156614: 0x2ca10012  sltiu       $at, $a1, 0x12
    ctx->pc = 0x156614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_156618:
    // 0x156618: 0x10200515  beqz        $at, . + 4 + (0x515 << 2)
label_15661c:
    if (ctx->pc == 0x15661Cu) {
        ctx->pc = 0x15661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156618u;
        // 0x15661c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156620u;
        goto label_156620;
    }
    ctx->pc = 0x156618u;
    {
        const bool branch_taken_0x156618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156618u;
        // 0x15661c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156618) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x156620u;
label_156620:
    // 0x156620: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x156620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_156624:
    // 0x156624: 0x248450c0  addiu       $a0, $a0, 0x50C0
    ctx->pc = 0x156624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20672));
label_156628:
    // 0x156628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15662c:
    // 0x15662c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_156630:
    // 0x156630: 0x600008  jr          $v1
label_156634:
    if (ctx->pc == 0x156634u) {
        ctx->pc = 0x156638u;
        goto label_156638;
    }
    ctx->pc = 0x156630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156638u: goto label_156638;
            case 0x1566A0u: goto label_1566a0;
            case 0x157018u: goto label_157018;
            case 0x157078u: goto label_157078;
            case 0x1570D0u: goto label_1570d0;
            case 0x157100u: goto label_157100;
            case 0x157120u: goto label_157120;
            case 0x157140u: goto label_157140;
            case 0x157180u: goto label_157180;
            case 0x157278u: goto label_157278;
            case 0x157A30u: goto label_157a30;
            case 0x157A58u: goto label_157a58;
            case 0x157A70u: goto label_157a70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x156638u;
label_156638:
    // 0x156638: 0x143c  dsll32      $v0, $zero, 16
    ctx->pc = 0x156638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 16));
label_15663c:
    // 0x15663c: 0xa6006838  sh          $zero, 0x6838($s0)
    ctx->pc = 0x15663cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26680), (uint16_t)GPR_U32(ctx, 0));
label_156640:
    // 0x156640: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x156640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_156644:
    // 0x156644: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x156644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_156648:
    // 0x156648: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x156648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_15664c:
    // 0x15664c: 0xae006830  sw          $zero, 0x6830($s0)
    ctx->pc = 0x15664cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26672), GPR_U32(ctx, 0));
label_156650:
    // 0x156650: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x156650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
label_156654:
    // 0x156654: 0xc0ceb18  jal         func_33AC60
label_156658:
    if (ctx->pc == 0x156658u) {
        ctx->pc = 0x156658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156654u;
        // 0x156658: 0xae006834  sw          $zero, 0x6834($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 26676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15665Cu;
        goto label_15665c;
    }
    ctx->pc = 0x156654u;
    SET_GPR_U32(ctx, 31, 0x15665Cu);
    ctx->pc = 0x156658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156654u;
    // 0x156658: 0xae006834  sw          $zero, 0x6834($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 26676), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC60u, 0x156654u, 0x15665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15665Cu;
label_15665c:
    // 0x15665c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x15665cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_156660:
    // 0x156660: 0xc0ce574  jal         func_3395D0
label_156664:
    if (ctx->pc == 0x156664u) {
        ctx->pc = 0x156664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156660u;
        // 0x156664: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156668u;
        goto label_156668;
    }
    ctx->pc = 0x156660u;
    SET_GPR_U32(ctx, 31, 0x156668u);
    ctx->pc = 0x156664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156660u;
    // 0x156664: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395D0u, 0x156660u, 0x156668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156668u;
label_156668:
    // 0x156668: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x156668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_15666c:
    // 0x15666c: 0xc0ceb18  jal         func_33AC60
label_156670:
    if (ctx->pc == 0x156670u) {
        ctx->pc = 0x156670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15666Cu;
        // 0x156670: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156674u;
        goto label_156674;
    }
    ctx->pc = 0x15666Cu;
    SET_GPR_U32(ctx, 31, 0x156674u);
    ctx->pc = 0x156670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15666Cu;
    // 0x156670: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC60u, 0x15666Cu, 0x156674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156674u;
label_156674:
    // 0x156674: 0xc0550b0  jal         func_1542C0
label_156678:
    if (ctx->pc == 0x156678u) {
        ctx->pc = 0x156678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156674u;
        // 0x156678: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15667Cu;
        goto label_15667c;
    }
    ctx->pc = 0x156674u;
    SET_GPR_U32(ctx, 31, 0x15667Cu);
    ctx->pc = 0x156678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156674u;
    // 0x156678: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x156674u, 0x15667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15667Cu;
label_15667c:
    // 0x15667c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_156680:
    // 0x156680: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x156680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
label_156684:
    // 0x156684: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_156688:
    // 0x156688: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x156688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_15668c:
    // 0x15668c: 0x9023c638  lbu         $v1, -0x39C8($at)
    ctx->pc = 0x15668cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952504)));
label_156690:
    // 0x156690: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x156690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_156694:
    // 0x156694: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
label_156698:
    // 0x156698: 0x100004f5  b           . + 4 + (0x4F5 << 2)
label_15669c:
    if (ctx->pc == 0x15669Cu) {
        ctx->pc = 0x15669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156698u;
        // 0x15669c: 0xa023c638  sb          $v1, -0x39C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294952504), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566A0u;
        goto label_1566a0;
    }
    ctx->pc = 0x156698u;
    {
        const bool branch_taken_0x156698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156698u;
        // 0x15669c: 0xa023c638  sb          $v1, -0x39C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294952504), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156698) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1566A0u;
label_1566a0:
    // 0x1566a0: 0xc05551c  jal         func_155470
label_1566a4:
    if (ctx->pc == 0x1566A4u) {
        ctx->pc = 0x1566A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566A0u;
        // 0x1566a4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566A8u;
        goto label_1566a8;
    }
    ctx->pc = 0x1566A0u;
    SET_GPR_U32(ctx, 31, 0x1566A8u);
    ctx->pc = 0x1566A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566A0u;
    // 0x1566a4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x1566A0u, 0x1566A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566A8u;
label_1566a8:
    // 0x1566a8: 0x144004f1  bnez        $v0, . + 4 + (0x4F1 << 2)
label_1566ac:
    if (ctx->pc == 0x1566ACu) {
        ctx->pc = 0x1566ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566A8u;
        // 0x1566ac: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566B0u;
        goto label_1566b0;
    }
    ctx->pc = 0x1566A8u;
    {
        const bool branch_taken_0x1566a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1566ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566A8u;
        // 0x1566ac: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566a8) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1566B0u;
label_1566b0:
    // 0x1566b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1566b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1566b4:
    // 0x1566b4: 0xc05ee50  jal         func_17B940
label_1566b8:
    if (ctx->pc == 0x1566B8u) {
        ctx->pc = 0x1566B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566B4u;
        // 0x1566b8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566BCu;
        goto label_1566bc;
    }
    ctx->pc = 0x1566B4u;
    SET_GPR_U32(ctx, 31, 0x1566BCu);
    ctx->pc = 0x1566B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566B4u;
    // 0x1566b8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x1566B4u, 0x1566BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566BCu;
label_1566bc:
    // 0x1566bc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1566bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_1566c0:
    // 0x1566c0: 0xc04bc40  jal         func_12F100
label_1566c4:
    if (ctx->pc == 0x1566C4u) {
        ctx->pc = 0x1566C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C0u;
        // 0x1566c4: 0x24846ca0  addiu       $a0, $a0, 0x6CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566C8u;
        goto label_1566c8;
    }
    ctx->pc = 0x1566C0u;
    SET_GPR_U32(ctx, 31, 0x1566C8u);
    ctx->pc = 0x1566C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566C0u;
    // 0x1566c4: 0x24846ca0  addiu       $a0, $a0, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F100u, 0x1566C0u, 0x1566C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566C8u;
label_1566c8:
    // 0x1566c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1566c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1566cc:
    // 0x1566cc: 0x26046840  addiu       $a0, $s0, 0x6840
    ctx->pc = 0x1566ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
label_1566d0:
    // 0x1566d0: 0x24a56ca0  addiu       $a1, $a1, 0x6CA0
    ctx->pc = 0x1566d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27808));
label_1566d4:
    // 0x1566d4: 0xc0641f8  jal         func_1907E0
label_1566d8:
    if (ctx->pc == 0x1566D8u) {
        ctx->pc = 0x1566D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566D4u;
        // 0x1566d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566DCu;
        goto label_1566dc;
    }
    ctx->pc = 0x1566D4u;
    SET_GPR_U32(ctx, 31, 0x1566DCu);
    ctx->pc = 0x1566D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566D4u;
    // 0x1566d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1907E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1907E0u, 0x1566D4u, 0x1566DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566DCu;
label_1566dc:
    // 0x1566dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1566dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_1566e0:
    // 0x1566e0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x1566e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
label_1566e4:
    // 0x1566e4: 0x248487d0  addiu       $a0, $a0, -0x7830
    ctx->pc = 0x1566e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936528));
label_1566e8:
    // 0x1566e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1566e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1566ec:
    // 0x1566ec: 0xc051868  jal         func_1461A0
label_1566f0:
    if (ctx->pc == 0x1566F0u) {
        ctx->pc = 0x1566F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566ECu;
        // 0x1566f0: 0xac208b00  sw          $zero, -0x7500($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566F4u;
        goto label_1566f4;
    }
    ctx->pc = 0x1566ECu;
    SET_GPR_U32(ctx, 31, 0x1566F4u);
    ctx->pc = 0x1566F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566ECu;
    // 0x1566f0: 0xac208b00  sw          $zero, -0x7500($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1461A0u, 0x1566ECu, 0x1566F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566F4u;
label_1566f4:
    // 0x1566f4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1566f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_1566f8:
    // 0x1566f8: 0xc0c0c58  jal         func_303160
label_1566fc:
    if (ctx->pc == 0x1566FCu) {
        ctx->pc = 0x1566FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566F8u;
        // 0x1566fc: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156700u;
        goto label_156700;
    }
    ctx->pc = 0x1566F8u;
    SET_GPR_U32(ctx, 31, 0x156700u);
    ctx->pc = 0x1566FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566F8u;
    // 0x1566fc: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303160u, 0x1566F8u, 0x156700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156700u;
label_156700:
    // 0x156700: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156704:
    // 0x156704: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x156704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
label_156708:
    // 0x156708: 0xac20cec4  sw          $zero, -0x313C($at)
    ctx->pc = 0x156708u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 0));
label_15670c:
    // 0x15670c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_156710:
    // 0x156710: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156714:
    // 0x156714: 0x3491ffff  ori         $s1, $a0, 0xFFFF
    ctx->pc = 0x156714u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_156718:
    // 0x156718: 0xac20cec8  sw          $zero, -0x3138($at)
    ctx->pc = 0x156718u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954696), GPR_U32(ctx, 0));
label_15671c:
    // 0x15671c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x15671cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_156720:
    // 0x156720: 0x3442a9e4  ori         $v0, $v0, 0xA9E4
    ctx->pc = 0x156720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43492);
label_156724:
    // 0x156724: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156728:
    // 0x156728: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x156728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
label_15672c:
    // 0x15672c: 0x348f7fff  ori         $t7, $a0, 0x7FFF
    ctx->pc = 0x15672cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
label_156730:
    // 0x156730: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x156730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_156734:
    // 0x156734: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x156734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
label_156738:
    // 0x156738: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x156738u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959104), (uint8_t)GPR_U32(ctx, 2));
label_15673c:
    // 0x15673c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15673cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_156740:
    // 0x156740: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156744:
    // 0x156744: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_156748:
    // 0x156748: 0xac20cecc  sw          $zero, -0x3134($at)
    ctx->pc = 0x156748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954700), GPR_U32(ctx, 0));
label_15674c:
    // 0x15674c: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x15674cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_156750:
    // 0x156750: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156754:
    // 0x156754: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_156758:
    // 0x156758: 0xac20ced0  sw          $zero, -0x3130($at)
    ctx->pc = 0x156758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954704), GPR_U32(ctx, 0));
label_15675c:
    // 0x15675c: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x15675cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_156760:
    // 0x156760: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156764:
    // 0x156764: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x156764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_156768:
    // 0x156768: 0xac20ced4  sw          $zero, -0x312C($at)
    ctx->pc = 0x156768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954708), GPR_U32(ctx, 0));
label_15676c:
    // 0x15676c: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x15676cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_156770:
    // 0x156770: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156774:
    // 0x156774: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x156774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_156778:
    // 0x156778: 0xac20ced8  sw          $zero, -0x3128($at)
    ctx->pc = 0x156778u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954712), GPR_U32(ctx, 0));
label_15677c:
    // 0x15677c: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x15677cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_156780:
    // 0x156780: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156784:
    // 0x156784: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x156784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
label_156788:
    // 0x156788: 0xac20cedc  sw          $zero, -0x3124($at)
    ctx->pc = 0x156788u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954716), GPR_U32(ctx, 0));
label_15678c:
    // 0x15678c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x15678cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_156790:
    // 0x156790: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156794:
    // 0x156794: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x156794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_156798:
    // 0x156798: 0x8c2bceb8  lw          $t3, -0x3148($at)
    ctx->pc = 0x156798u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_15679c:
    // 0x15679c: 0x3452ffff  ori         $s2, $v0, 0xFFFF
    ctx->pc = 0x15679cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1567a0:
    // 0x1567a0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1567a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1567a4:
    // 0x1567a4: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x1567a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_1567a8:
    // 0x1567a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1567a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1567ac:
    // 0x1567ac: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_1567b0:
    // 0x1567b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1567b4:
    // 0x1567b4: 0x1695824  and         $t3, $t3, $t1
    ctx->pc = 0x1567b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
label_1567b8:
    // 0x1567b8: 0x8c2acebc  lw          $t2, -0x3144($at)
    ctx->pc = 0x1567b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1567bc:
    // 0x1567bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1567c0:
    // 0x1567c0: 0x1452824  and         $a1, $t2, $a1
    ctx->pc = 0x1567c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
label_1567c4:
    // 0x1567c4: 0xac2bceb8  sw          $t3, -0x3148($at)
    ctx->pc = 0x1567c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 11));
label_1567c8:
    // 0x1567c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1567cc:
    // 0x1567cc: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x1567ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 5));
label_1567d0:
    // 0x1567d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1567d4:
    // 0x1567d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1567d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1567d8:
    // 0x1567d8: 0x8c2aceb8  lw          $t2, -0x3148($at)
    ctx->pc = 0x1567d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_1567dc:
    // 0x1567dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1567e0:
    // 0x1567e0: 0x148a024  and         $s4, $t2, $t0
    ctx->pc = 0x1567e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_1567e4:
    // 0x1567e4: 0x8c33cebc  lw          $s3, -0x3144($at)
    ctx->pc = 0x1567e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1567e8:
    // 0x1567e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1567ec:
    // 0x1567ec: 0x2724024  and         $t0, $s3, $s2
    ctx->pc = 0x1567ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
label_1567f0:
    // 0x1567f0: 0x8c2ecec4  lw          $t6, -0x313C($at)
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
label_1567f4:
    // 0x1567f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1567f8:
    // 0x1567f8: 0x8c2dcec8  lw          $t5, -0x3138($at)
    ctx->pc = 0x1567f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_1567fc:
    // 0x1567fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1567fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156800:
    // 0x156800: 0x8c2ccecc  lw          $t4, -0x3134($at)
    ctx->pc = 0x156800u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954700)));
label_156804:
    // 0x156804: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156808:
    // 0x156808: 0x8c2bced0  lw          $t3, -0x3130($at)
    ctx->pc = 0x156808u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954704)));
label_15680c:
    // 0x15680c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15680cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156810:
    // 0x156810: 0x8c2aced8  lw          $t2, -0x3128($at)
    ctx->pc = 0x156810u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
label_156814:
    // 0x156814: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156818:
    // 0x156818: 0xac34ceb8  sw          $s4, -0x3148($at)
    ctx->pc = 0x156818u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 20));
label_15681c:
    // 0x15681c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15681cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156820:
    // 0x156820: 0xac28cebc  sw          $t0, -0x3144($at)
    ctx->pc = 0x156820u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 8));
label_156824:
    // 0x156824: 0x1cd4025  or          $t0, $t6, $t5
    ctx->pc = 0x156824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_156828:
    // 0x156828: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15682c:
    // 0x15682c: 0x8c2dceb8  lw          $t5, -0x3148($at)
    ctx->pc = 0x15682cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_156830:
    // 0x156830: 0x1884025  or          $t0, $t4, $t0
    ctx->pc = 0x156830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
label_156834:
    // 0x156834: 0x1685825  or          $t3, $t3, $t0
    ctx->pc = 0x156834u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
label_156838:
    // 0x156838: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x156838u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_15683c:
    // 0x15683c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15683cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156840:
    // 0x156840: 0x1a73824  and         $a3, $t5, $a3
    ctx->pc = 0x156840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) & GPR_U64(ctx, 7));
label_156844:
    // 0x156844: 0x8c2ccebc  lw          $t4, -0x3144($at)
    ctx->pc = 0x156844u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_156848:
    // 0x156848: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15684c:
    // 0x15684c: 0x1835824  and         $t3, $t4, $v1
    ctx->pc = 0x15684cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
label_156850:
    // 0x156850: 0x8c28cedc  lw          $t0, -0x3124($at)
    ctx->pc = 0x156850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
label_156854:
    // 0x156854: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156858:
    // 0x156858: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x156858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 7));
label_15685c:
    // 0x15685c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15685cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156860:
    // 0x156860: 0x10a3825  or          $a3, $t0, $t2
    ctx->pc = 0x156860u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
label_156864:
    // 0x156864: 0xac2bcebc  sw          $t3, -0x3144($at)
    ctx->pc = 0x156864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 11));
label_156868:
    // 0x156868: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15686c:
    // 0x15686c: 0xac27cec0  sw          $a3, -0x3140($at)
    ctx->pc = 0x15686cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 7));
label_156870:
    // 0x156870: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156874:
    // 0x156874: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x156874u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_156878:
    // 0x156878: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15687c:
    // 0x15687c: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x15687cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_156880:
    // 0x156880: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x156880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_156884:
    // 0x156884: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156888:
    // 0x156888: 0xe93024  and         $a2, $a3, $t1
    ctx->pc = 0x156888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
label_15688c:
    // 0x15688c: 0xac28ceb8  sw          $t0, -0x3148($at)
    ctx->pc = 0x15688cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 8));
label_156890:
    // 0x156890: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156894:
    // 0x156894: 0xac26cebc  sw          $a2, -0x3144($at)
    ctx->pc = 0x156894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 6));
label_156898:
    // 0x156898: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15689c:
    // 0x15689c: 0x8c27ceb8  lw          $a3, -0x3148($at)
    ctx->pc = 0x15689cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_1568a0:
    // 0x1568a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1568a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1568a4:
    // 0x1568a4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1568a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1568a8:
    // 0x1568a8: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x1568a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1568ac:
    // 0x1568ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1568acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1568b0:
    // 0x1568b0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1568b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1568b4:
    // 0x1568b4: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x1568b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
label_1568b8:
    // 0x1568b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1568b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1568bc:
    // 0x1568bc: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x1568bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
label_1568c0:
    // 0x1568c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1568c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1568c4:
    // 0x1568c4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x1568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1568c8:
    // 0x1568c8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1568c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_1568cc:
    // 0x1568cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1568d0:
    // 0x1568d0: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x1568d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
label_1568d4:
    // 0x1568d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1568d8:
    // 0x1568d8: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1568dc:
    // 0x1568dc: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x1568dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
label_1568e0:
    // 0x1568e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1568e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1568e4:
    // 0x1568e4: 0xc051020  jal         func_144080
label_1568e8:
    if (ctx->pc == 0x1568E8u) {
        ctx->pc = 0x1568E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568E4u;
        // 0x1568e8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1568ECu;
        goto label_1568ec;
    }
    ctx->pc = 0x1568E4u;
    SET_GPR_U32(ctx, 31, 0x1568ECu);
    ctx->pc = 0x1568E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1568E4u;
    // 0x1568e8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144080u, 0x1568E4u, 0x1568ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1568ECu;
label_1568ec:
    // 0x1568ec: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x1568ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_1568f0:
    // 0x1568f0: 0xc050d80  jal         func_143600
label_1568f4:
    if (ctx->pc == 0x1568F4u) {
        ctx->pc = 0x1568F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568F0u;
        // 0x1568f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1568F8u;
        goto label_1568f8;
    }
    ctx->pc = 0x1568F0u;
    SET_GPR_U32(ctx, 31, 0x1568F8u);
    ctx->pc = 0x1568F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1568F0u;
    // 0x1568f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143600u, 0x1568F0u, 0x1568F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1568F8u;
label_1568f8:
    // 0x1568f8: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x1568f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_1568fc:
    // 0x1568fc: 0xc050d80  jal         func_143600
label_156900:
    if (ctx->pc == 0x156900u) {
        ctx->pc = 0x156900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568FCu;
        // 0x156900: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156904u;
        goto label_156904;
    }
    ctx->pc = 0x1568FCu;
    SET_GPR_U32(ctx, 31, 0x156904u);
    ctx->pc = 0x156900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1568FCu;
    // 0x156900: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143600u, 0x1568FCu, 0x156904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156904u;
label_156904:
    // 0x156904: 0xc05eee4  jal         func_17BB90
label_156908:
    if (ctx->pc == 0x156908u) {
        ctx->pc = 0x156908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156904u;
        // 0x156908: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15690Cu;
        goto label_15690c;
    }
    ctx->pc = 0x156904u;
    SET_GPR_U32(ctx, 31, 0x15690Cu);
    ctx->pc = 0x156908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156904u;
    // 0x156908: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB90u, 0x156904u, 0x15690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15690Cu;
label_15690c:
    // 0x15690c: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x15690cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
label_156910:
    // 0x156910: 0xc0682f4  jal         func_1A0BD0
label_156914:
    if (ctx->pc == 0x156914u) {
        ctx->pc = 0x156914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156910u;
        // 0x156914: 0x24843ad0  addiu       $a0, $a0, 0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156918u;
        goto label_156918;
    }
    ctx->pc = 0x156910u;
    SET_GPR_U32(ctx, 31, 0x156918u);
    ctx->pc = 0x156914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156910u;
    // 0x156914: 0x24843ad0  addiu       $a0, $a0, 0x3AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0BD0u, 0x156910u, 0x156918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156918u;
label_156918:
    // 0x156918: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_15691c:
    // 0x15691c: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x15691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
label_156920:
    // 0x156920: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x156920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_156924:
    // 0x156924: 0xc05e390  jal         func_178E40
label_156928:
    if (ctx->pc == 0x156928u) {
        ctx->pc = 0x156928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156924u;
        // 0x156928: 0x34456000  ori         $a1, $v0, 0x6000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15692Cu;
        goto label_15692c;
    }
    ctx->pc = 0x156924u;
    SET_GPR_U32(ctx, 31, 0x15692Cu);
    ctx->pc = 0x156928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156924u;
    // 0x156928: 0x34456000  ori         $a1, $v0, 0x6000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x156924u, 0x15692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15692Cu;
label_15692c:
    // 0x15692c: 0xc0a2950  jal         func_28A540
label_156930:
    if (ctx->pc == 0x156930u) {
        ctx->pc = 0x156930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15692Cu;
        // 0x156930: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156934u;
        goto label_156934;
    }
    ctx->pc = 0x15692Cu;
    SET_GPR_U32(ctx, 31, 0x156934u);
    ctx->pc = 0x156930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15692Cu;
    // 0x156930: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A540u, 0x15692Cu, 0x156934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156934u;
label_156934:
    // 0x156934: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_156938:
    // 0x156938: 0xc054568  jal         func_1515A0
label_15693c:
    if (ctx->pc == 0x15693Cu) {
        ctx->pc = 0x15693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156938u;
        // 0x15693c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156940u;
        goto label_156940;
    }
    ctx->pc = 0x156938u;
    SET_GPR_U32(ctx, 31, 0x156940u);
    ctx->pc = 0x15693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156938u;
    // 0x15693c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x156938u, 0x156940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156940u;
label_156940:
    // 0x156940: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_156944:
    if (ctx->pc == 0x156944u) {
        ctx->pc = 0x156944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156940u;
        // 0x156944: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156948u;
        goto label_156948;
    }
    ctx->pc = 0x156940u;
    {
        const bool branch_taken_0x156940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156940u;
        // 0x156944: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156940) {
            ctx->pc = 0x1569A8u;
            goto label_1569a8;
        }
    }
    ctx->pc = 0x156948u;
label_156948:
    // 0x156948: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x156948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
label_15694c:
    // 0x15694c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_156950:
    // 0x156950: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x156950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
label_156954:
    // 0x156954: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x156954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_156958:
    // 0x156958: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15695c:
    // 0x15695c: 0xc0569bc  jal         func_15A6F0
label_156960:
    if (ctx->pc == 0x156960u) {
        ctx->pc = 0x156960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15695Cu;
        // 0x156960: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156964u;
        goto label_156964;
    }
    ctx->pc = 0x15695Cu;
    SET_GPR_U32(ctx, 31, 0x156964u);
    ctx->pc = 0x156960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15695Cu;
    // 0x156960: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A6F0u, 0x15695Cu, 0x156964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156964u;
label_156964:
    // 0x156964: 0xc0b3184  jal         func_2CC610
label_156968:
    if (ctx->pc == 0x156968u) {
        ctx->pc = 0x15696Cu;
        goto label_15696c;
    }
    ctx->pc = 0x156964u;
    SET_GPR_U32(ctx, 31, 0x15696Cu);
    ctx->pc = 0x2CC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC610u, 0x156964u, 0x15696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15696Cu;
label_15696c:
    // 0x15696c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15696cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156970:
    // 0x156970: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x156970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_156974:
    // 0x156974: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x156974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_156978:
    // 0x156978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15697c:
    // 0x15697c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_156980:
    // 0x156980: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156984:
    // 0x156984: 0xc0b3394  jal         func_2CCE50
label_156988:
    if (ctx->pc == 0x156988u) {
        ctx->pc = 0x156988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156984u;
        // 0x156988: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15698Cu;
        goto label_15698c;
    }
    ctx->pc = 0x156984u;
    SET_GPR_U32(ctx, 31, 0x15698Cu);
    ctx->pc = 0x156988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156984u;
    // 0x156988: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE50u, 0x156984u, 0x15698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15698Cu;
label_15698c:
    // 0x15698c: 0xc0b3394  jal         func_2CCE50
label_156990:
    if (ctx->pc == 0x156990u) {
        ctx->pc = 0x156990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15698Cu;
        // 0x156990: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156994u;
        goto label_156994;
    }
    ctx->pc = 0x15698Cu;
    SET_GPR_U32(ctx, 31, 0x156994u);
    ctx->pc = 0x156990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15698Cu;
    // 0x156990: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE50u, 0x15698Cu, 0x156994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156994u;
label_156994:
    // 0x156994: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_156998:
    // 0x156998: 0xa3808a55  sb          $zero, -0x75AB($gp)
    ctx->pc = 0x156998u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 0));
label_15699c:
    // 0x15699c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1569a0:
    if (ctx->pc == 0x1569A0u) {
        ctx->pc = 0x1569A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15699Cu;
        // 0x1569a0: 0xa3828a54  sb          $v0, -0x75AC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1569A4u;
        goto label_1569a4;
    }
    ctx->pc = 0x15699Cu;
    {
        const bool branch_taken_0x15699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15699Cu;
        // 0x1569a0: 0xa3828a54  sb          $v0, -0x75AC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15699c) {
            ctx->pc = 0x1569F8u;
            goto label_1569f8;
        }
    }
    ctx->pc = 0x1569A4u;
label_1569a4:
    // 0x1569a4: 0x0  nop
    ctx->pc = 0x1569a4u;
    // NOP
label_1569a8:
    // 0x1569a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1569a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1569ac:
    // 0x1569ac: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1569b0:
    // 0x1569b0: 0x2405dfff  addiu       $a1, $zero, -0x2001
    ctx->pc = 0x1569b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_1569b4:
    // 0x1569b4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1569b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_1569b8:
    // 0x1569b8: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1569b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1569bc:
    // 0x1569bc: 0x24020562  addiu       $v0, $zero, 0x562
    ctx->pc = 0x1569bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
label_1569c0:
    // 0x1569c0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1569c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1569c4:
    // 0x1569c4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1569c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1569c8:
    // 0x1569c8: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1569c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1569cc:
    // 0x1569cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1569ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1569d0:
    // 0x1569d0: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x1569d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 5));
label_1569d4:
    // 0x1569d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1569d8:
    // 0x1569d8: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x1569d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1569dc:
    // 0x1569dc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1569dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1569e0:
    // 0x1569e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1569e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1569e4:
    // 0x1569e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1569e8:
    if (ctx->pc == 0x1569E8u) {
        ctx->pc = 0x1569E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569E4u;
        // 0x1569e8: 0xac24cebc  sw          $a0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1569ECu;
        goto label_1569ec;
    }
    ctx->pc = 0x1569E4u;
    {
        const bool branch_taken_0x1569e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1569E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569E4u;
        // 0x1569e8: 0xac24cebc  sw          $a0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569e4) {
            ctx->pc = 0x1569F8u;
            goto label_1569f8;
        }
    }
    ctx->pc = 0x1569ECu;
label_1569ec:
    // 0x1569ec: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1569f0:
    // 0x1569f0: 0xa3808a55  sb          $zero, -0x75AB($gp)
    ctx->pc = 0x1569f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 0));
label_1569f4:
    // 0x1569f4: 0xa3828a54  sb          $v0, -0x75AC($gp)
    ctx->pc = 0x1569f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
label_1569f8:
    // 0x1569f8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1569f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1569fc:
    // 0x1569fc: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1569fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_156a00:
    // 0x156a00: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x156a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
label_156a04:
    // 0x156a04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_156a08:
    if (ctx->pc == 0x156A08u) {
        ctx->pc = 0x156A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A04u;
        // 0x156a08: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A0Cu;
        goto label_156a0c;
    }
    ctx->pc = 0x156A04u;
    {
        const bool branch_taken_0x156a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x156A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A04u;
        // 0x156a08: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a04) {
            ctx->pc = 0x156A20u;
            goto label_156a20;
        }
    }
    ctx->pc = 0x156A0Cu;
label_156a0c:
    // 0x156a0c: 0xc0569bc  jal         func_15A6F0
label_156a10:
    if (ctx->pc == 0x156A10u) {
        ctx->pc = 0x156A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A0Cu;
        // 0x156a10: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A14u;
        goto label_156a14;
    }
    ctx->pc = 0x156A0Cu;
    SET_GPR_U32(ctx, 31, 0x156A14u);
    ctx->pc = 0x156A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A0Cu;
    // 0x156a10: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A6F0u, 0x156A0Cu, 0x156A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A14u;
label_156a14:
    // 0x156a14: 0xc0d2838  jal         func_34A0E0
label_156a18:
    if (ctx->pc == 0x156A18u) {
        ctx->pc = 0x156A1Cu;
        goto label_156a1c;
    }
    ctx->pc = 0x156A14u;
    SET_GPR_U32(ctx, 31, 0x156A1Cu);
    ctx->pc = 0x34A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A0E0u, 0x156A14u, 0x156A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A1Cu;
label_156a1c:
    // 0x156a1c: 0x0  nop
    ctx->pc = 0x156a1cu;
    // NOP
label_156a20:
    // 0x156a20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156a24:
    // 0x156a24: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x156a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_156a28:
    // 0x156a28: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x156a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_156a2c:
    // 0x156a2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_156a30:
    if (ctx->pc == 0x156A30u) {
        ctx->pc = 0x156A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A2Cu;
        // 0x156a30: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A34u;
        goto label_156a34;
    }
    ctx->pc = 0x156A2Cu;
    {
        const bool branch_taken_0x156a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A2Cu;
        // 0x156a30: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a2c) {
            ctx->pc = 0x156A70u;
            goto label_156a70;
        }
    }
    ctx->pc = 0x156A34u;
label_156a34:
    // 0x156a34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_156a38:
    // 0x156a38: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x156a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_156a3c:
    // 0x156a3c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x156a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_156a40:
    // 0x156a40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156a44:
    // 0x156a44: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x156a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_156a48:
    // 0x156a48: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x156a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_156a4c:
    // 0x156a4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156a50:
    // 0x156a50: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x156a50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
label_156a54:
    // 0x156a54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156a58:
    // 0x156a58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_156a5c:
    // 0x156a5c: 0xac24ceb8  sw          $a0, -0x3148($at)
    ctx->pc = 0x156a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 4));
label_156a60:
    // 0x156a60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x156a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_156a64:
    // 0x156a64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156a68:
    // 0x156a68: 0xac22cee4  sw          $v0, -0x311C($at)
    ctx->pc = 0x156a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954724), GPR_U32(ctx, 2));
label_156a6c:
    // 0x156a6c: 0x0  nop
    ctx->pc = 0x156a6cu;
    // NOP
label_156a70:
    // 0x156a70: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_156a74:
    // 0x156a74: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x156a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_156a78:
    // 0x156a78: 0x24020ff7  addiu       $v0, $zero, 0xFF7
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
label_156a7c:
    // 0x156a7c: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
label_156a80:
    if (ctx->pc == 0x156A80u) {
        ctx->pc = 0x156A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A7Cu;
        // 0x156a80: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A84u;
        goto label_156a84;
    }
    ctx->pc = 0x156A7Cu;
    {
        const bool branch_taken_0x156a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A7Cu;
        // 0x156a80: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a7c) {
            ctx->pc = 0x156BB0u;
            goto label_156bb0;
        }
    }
    ctx->pc = 0x156A84u;
label_156a84:
    // 0x156a84: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_156a88:
    if (ctx->pc == 0x156A88u) {
        ctx->pc = 0x156A8Cu;
        goto label_156a8c;
    }
    ctx->pc = 0x156A84u;
    {
        const bool branch_taken_0x156a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156a84) {
            ctx->pc = 0x156B78u;
            goto label_156b78;
        }
    }
    ctx->pc = 0x156A8Cu;
label_156a8c:
    // 0x156a8c: 0x24020e98  addiu       $v0, $zero, 0xE98
    ctx->pc = 0x156a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3736));
label_156a90:
    // 0x156a90: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_156a94:
    if (ctx->pc == 0x156A94u) {
        ctx->pc = 0x156A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A90u;
        // 0x156a94: 0x24020e97  addiu       $v0, $zero, 0xE97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3735));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156A98u;
        goto label_156a98;
    }
    ctx->pc = 0x156A90u;
    {
        const bool branch_taken_0x156a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A90u;
        // 0x156a94: 0x24020e97  addiu       $v0, $zero, 0xE97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3735));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a90) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156A98u;
label_156a98:
    // 0x156a98: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_156a9c:
    if (ctx->pc == 0x156A9Cu) {
        ctx->pc = 0x156AA0u;
        goto label_156aa0;
    }
    ctx->pc = 0x156A98u;
    {
        const bool branch_taken_0x156a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156a98) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AA0u;
label_156aa0:
    // 0x156aa0: 0x24020e96  addiu       $v0, $zero, 0xE96
    ctx->pc = 0x156aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3734));
label_156aa4:
    // 0x156aa4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_156aa8:
    if (ctx->pc == 0x156AA8u) {
        ctx->pc = 0x156AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AA4u;
        // 0x156aa8: 0x24020e95  addiu       $v0, $zero, 0xE95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3733));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AACu;
        goto label_156aac;
    }
    ctx->pc = 0x156AA4u;
    {
        const bool branch_taken_0x156aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AA4u;
        // 0x156aa8: 0x24020e95  addiu       $v0, $zero, 0xE95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3733));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156aa4) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AACu;
label_156aac:
    // 0x156aac: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_156ab0:
    if (ctx->pc == 0x156AB0u) {
        ctx->pc = 0x156AB4u;
        goto label_156ab4;
    }
    ctx->pc = 0x156AACu;
    {
        const bool branch_taken_0x156aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156aac) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AB4u;
label_156ab4:
    // 0x156ab4: 0x24020e94  addiu       $v0, $zero, 0xE94
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3732));
label_156ab8:
    // 0x156ab8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_156abc:
    if (ctx->pc == 0x156ABCu) {
        ctx->pc = 0x156ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AB8u;
        // 0x156abc: 0x24020e84  addiu       $v0, $zero, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3716));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AC0u;
        goto label_156ac0;
    }
    ctx->pc = 0x156AB8u;
    {
        const bool branch_taken_0x156ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AB8u;
        // 0x156abc: 0x24020e84  addiu       $v0, $zero, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ab8) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AC0u;
label_156ac0:
    // 0x156ac0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_156ac4:
    if (ctx->pc == 0x156AC4u) {
        ctx->pc = 0x156AC8u;
        goto label_156ac8;
    }
    ctx->pc = 0x156AC0u;
    {
        const bool branch_taken_0x156ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156ac0) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AC8u;
label_156ac8:
    // 0x156ac8: 0x24020e93  addiu       $v0, $zero, 0xE93
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3731));
label_156acc:
    // 0x156acc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_156ad0:
    if (ctx->pc == 0x156AD0u) {
        ctx->pc = 0x156AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ACCu;
        // 0x156ad0: 0x24020e92  addiu       $v0, $zero, 0xE92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3730));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AD4u;
        goto label_156ad4;
    }
    ctx->pc = 0x156ACCu;
    {
        const bool branch_taken_0x156acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ACCu;
        // 0x156ad0: 0x24020e92  addiu       $v0, $zero, 0xE92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156acc) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AD4u;
label_156ad4:
    // 0x156ad4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_156ad8:
    if (ctx->pc == 0x156AD8u) {
        ctx->pc = 0x156ADCu;
        goto label_156adc;
    }
    ctx->pc = 0x156AD4u;
    {
        const bool branch_taken_0x156ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156ad4) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156ADCu;
label_156adc:
    // 0x156adc: 0x24020e91  addiu       $v0, $zero, 0xE91
    ctx->pc = 0x156adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3729));
label_156ae0:
    // 0x156ae0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_156ae4:
    if (ctx->pc == 0x156AE4u) {
        ctx->pc = 0x156AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AE0u;
        // 0x156ae4: 0x24020e90  addiu       $v0, $zero, 0xE90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AE8u;
        goto label_156ae8;
    }
    ctx->pc = 0x156AE0u;
    {
        const bool branch_taken_0x156ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AE0u;
        // 0x156ae4: 0x24020e90  addiu       $v0, $zero, 0xE90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ae0) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AE8u;
label_156ae8:
    // 0x156ae8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_156aec:
    if (ctx->pc == 0x156AECu) {
        ctx->pc = 0x156AF0u;
        goto label_156af0;
    }
    ctx->pc = 0x156AE8u;
    {
        const bool branch_taken_0x156ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156ae8) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AF0u;
label_156af0:
    // 0x156af0: 0x24020e85  addiu       $v0, $zero, 0xE85
    ctx->pc = 0x156af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3717));
label_156af4:
    // 0x156af4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_156af8:
    if (ctx->pc == 0x156AF8u) {
        ctx->pc = 0x156AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AF4u;
        // 0x156af8: 0x24020e83  addiu       $v0, $zero, 0xE83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3715));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156AFCu;
        goto label_156afc;
    }
    ctx->pc = 0x156AF4u;
    {
        const bool branch_taken_0x156af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AF4u;
        // 0x156af8: 0x24020e83  addiu       $v0, $zero, 0xE83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3715));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156af4) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156AFCu;
label_156afc:
    // 0x156afc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_156b00:
    if (ctx->pc == 0x156B00u) {
        ctx->pc = 0x156B04u;
        goto label_156b04;
    }
    ctx->pc = 0x156AFCu;
    {
        const bool branch_taken_0x156afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156afc) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156B04u;
label_156b04:
    // 0x156b04: 0x24020e82  addiu       $v0, $zero, 0xE82
    ctx->pc = 0x156b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3714));
label_156b08:
    // 0x156b08: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_156b0c:
    if (ctx->pc == 0x156B0Cu) {
        ctx->pc = 0x156B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B08u;
        // 0x156b0c: 0x24020e81  addiu       $v0, $zero, 0xE81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3713));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156B10u;
        goto label_156b10;
    }
    ctx->pc = 0x156B08u;
    {
        const bool branch_taken_0x156b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B08u;
        // 0x156b0c: 0x24020e81  addiu       $v0, $zero, 0xE81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3713));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b08) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156B10u;
label_156b10:
    // 0x156b10: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_156b14:
    if (ctx->pc == 0x156B14u) {
        ctx->pc = 0x156B18u;
        goto label_156b18;
    }
    ctx->pc = 0x156B10u;
    {
        const bool branch_taken_0x156b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156b10) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156B18u;
label_156b18:
    // 0x156b18: 0x24020e80  addiu       $v0, $zero, 0xE80
    ctx->pc = 0x156b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3712));
label_156b1c:
    // 0x156b1c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_156b20:
    if (ctx->pc == 0x156B20u) {
        ctx->pc = 0x156B24u;
        goto label_156b24;
    }
    ctx->pc = 0x156B1Cu;
    {
        const bool branch_taken_0x156b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156b1c) {
            ctx->pc = 0x156B30u;
            goto label_156b30;
        }
    }
    ctx->pc = 0x156B24u;
label_156b24:
    // 0x156b24: 0x10000030  b           . + 4 + (0x30 << 2)
label_156b28:
    if (ctx->pc == 0x156B28u) {
        ctx->pc = 0x156B2Cu;
        goto label_156b2c;
    }
    ctx->pc = 0x156B24u;
    {
        const bool branch_taken_0x156b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b24) {
            ctx->pc = 0x156BE8u;
            goto label_156be8;
        }
    }
    ctx->pc = 0x156B2Cu;
label_156b2c:
    // 0x156b2c: 0x0  nop
    ctx->pc = 0x156b2cu;
    // NOP
label_156b30:
    // 0x156b30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156b34:
    // 0x156b34: 0x8c25fc98  lw          $a1, -0x368($at)
    ctx->pc = 0x156b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156b38:
    // 0x156b38: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x156b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_156b3c:
    // 0x156b3c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x156b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_156b40:
    // 0x156b40: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x156b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
label_156b44:
    // 0x156b44: 0xc04bf60  jal         func_12FD80
label_156b48:
    if (ctx->pc == 0x156B48u) {
        ctx->pc = 0x156B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B44u;
        // 0x156b48: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x156B4Cu;
        goto label_156b4c;
    }
    ctx->pc = 0x156B44u;
    SET_GPR_U32(ctx, 31, 0x156B4Cu);
    ctx->pc = 0x156B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B44u;
    // 0x156b48: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD80u, 0x156B44u, 0x156B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B4Cu;
label_156b4c:
    // 0x156b4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156b50:
    // 0x156b50: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156b54:
    // 0x156b54: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x156b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156b58:
    // 0x156b58: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x156b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_156b5c:
    // 0x156b5c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x156b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_156b60:
    // 0x156b60: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x156b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_156b64:
    // 0x156b64: 0xc05e390  jal         func_178E40
label_156b68:
    if (ctx->pc == 0x156B68u) {
        ctx->pc = 0x156B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B64u;
        // 0x156b68: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156B6Cu;
        goto label_156b6c;
    }
    ctx->pc = 0x156B64u;
    SET_GPR_U32(ctx, 31, 0x156B6Cu);
    ctx->pc = 0x156B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B64u;
    // 0x156b68: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x156B64u, 0x156B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B6Cu;
label_156b6c:
    // 0x156b6c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_156b70:
    if (ctx->pc == 0x156B70u) {
        ctx->pc = 0x156B74u;
        goto label_156b74;
    }
    ctx->pc = 0x156B6Cu;
    {
        const bool branch_taken_0x156b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156b6c) {
            ctx->pc = 0x156C20u;
            goto label_156c20;
        }
    }
    ctx->pc = 0x156B74u;
label_156b74:
    // 0x156b74: 0x0  nop
    ctx->pc = 0x156b74u;
    // NOP
label_156b78:
    // 0x156b78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156b7c:
    // 0x156b7c: 0x8c25fc98  lw          $a1, -0x368($at)
    ctx->pc = 0x156b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156b80:
    // 0x156b80: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x156b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_156b84:
    // 0x156b84: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x156b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
label_156b88:
    // 0x156b88: 0xc04bf60  jal         func_12FD80
label_156b8c:
    if (ctx->pc == 0x156B8Cu) {
        ctx->pc = 0x156B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B88u;
        // 0x156b8c: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156B90u;
        goto label_156b90;
    }
    ctx->pc = 0x156B88u;
    SET_GPR_U32(ctx, 31, 0x156B90u);
    ctx->pc = 0x156B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B88u;
    // 0x156b8c: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD80u, 0x156B88u, 0x156B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B90u;
label_156b90:
    // 0x156b90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156b94:
    // 0x156b94: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156b98:
    // 0x156b98: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x156b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156b9c:
    // 0x156b9c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x156b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_156ba0:
    // 0x156ba0: 0xc05e390  jal         func_178E40
label_156ba4:
    if (ctx->pc == 0x156BA4u) {
        ctx->pc = 0x156BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BA0u;
        // 0x156ba4: 0x24451000  addiu       $a1, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156BA8u;
        goto label_156ba8;
    }
    ctx->pc = 0x156BA0u;
    SET_GPR_U32(ctx, 31, 0x156BA8u);
    ctx->pc = 0x156BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BA0u;
    // 0x156ba4: 0x24451000  addiu       $a1, $v0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x156BA0u, 0x156BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BA8u;
label_156ba8:
    // 0x156ba8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_156bac:
    if (ctx->pc == 0x156BACu) {
        ctx->pc = 0x156BB0u;
        goto label_156bb0;
    }
    ctx->pc = 0x156BA8u;
    {
        const bool branch_taken_0x156ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ba8) {
            ctx->pc = 0x156C20u;
            goto label_156c20;
        }
    }
    ctx->pc = 0x156BB0u;
label_156bb0:
    // 0x156bb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156bb4:
    // 0x156bb4: 0x8c25fc98  lw          $a1, -0x368($at)
    ctx->pc = 0x156bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156bb8:
    // 0x156bb8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x156bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_156bbc:
    // 0x156bbc: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x156bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
label_156bc0:
    // 0x156bc0: 0xc04bf60  jal         func_12FD80
label_156bc4:
    if (ctx->pc == 0x156BC4u) {
        ctx->pc = 0x156BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BC0u;
        // 0x156bc4: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156BC8u;
        goto label_156bc8;
    }
    ctx->pc = 0x156BC0u;
    SET_GPR_U32(ctx, 31, 0x156BC8u);
    ctx->pc = 0x156BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BC0u;
    // 0x156bc4: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD80u, 0x156BC0u, 0x156BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BC8u;
label_156bc8:
    // 0x156bc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156bcc:
    // 0x156bcc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156bd0:
    // 0x156bd0: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x156bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156bd4:
    // 0x156bd4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x156bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_156bd8:
    // 0x156bd8: 0xc05e390  jal         func_178E40
label_156bdc:
    if (ctx->pc == 0x156BDCu) {
        ctx->pc = 0x156BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BD8u;
        // 0x156bdc: 0x24451000  addiu       $a1, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156BE0u;
        goto label_156be0;
    }
    ctx->pc = 0x156BD8u;
    SET_GPR_U32(ctx, 31, 0x156BE0u);
    ctx->pc = 0x156BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BD8u;
    // 0x156bdc: 0x24451000  addiu       $a1, $v0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x156BD8u, 0x156BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BE0u;
label_156be0:
    // 0x156be0: 0x1000000f  b           . + 4 + (0xF << 2)
label_156be4:
    if (ctx->pc == 0x156BE4u) {
        ctx->pc = 0x156BE8u;
        goto label_156be8;
    }
    ctx->pc = 0x156BE0u;
    {
        const bool branch_taken_0x156be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156be0) {
            ctx->pc = 0x156C20u;
            goto label_156c20;
        }
    }
    ctx->pc = 0x156BE8u;
label_156be8:
    // 0x156be8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156bec:
    // 0x156bec: 0x8c25fc98  lw          $a1, -0x368($at)
    ctx->pc = 0x156becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156bf0:
    // 0x156bf0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x156bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_156bf4:
    // 0x156bf4: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x156bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
label_156bf8:
    // 0x156bf8: 0xc04bf60  jal         func_12FD80
label_156bfc:
    if (ctx->pc == 0x156BFCu) {
        ctx->pc = 0x156BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BF8u;
        // 0x156bfc: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C00u;
        goto label_156c00;
    }
    ctx->pc = 0x156BF8u;
    SET_GPR_U32(ctx, 31, 0x156C00u);
    ctx->pc = 0x156BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BF8u;
    // 0x156bfc: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD80u, 0x156BF8u, 0x156C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C00u;
label_156c00:
    // 0x156c00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156c04:
    // 0x156c04: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156c08:
    // 0x156c08: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x156c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
label_156c0c:
    // 0x156c0c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x156c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_156c10:
    // 0x156c10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_156c14:
    // 0x156c14: 0xc05e390  jal         func_178E40
label_156c18:
    if (ctx->pc == 0x156C18u) {
        ctx->pc = 0x156C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C14u;
        // 0x156c18: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C1Cu;
        goto label_156c1c;
    }
    ctx->pc = 0x156C14u;
    SET_GPR_U32(ctx, 31, 0x156C1Cu);
    ctx->pc = 0x156C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C14u;
    // 0x156c18: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x156C14u, 0x156C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C1Cu;
label_156c1c:
    // 0x156c1c: 0x0  nop
    ctx->pc = 0x156c1cu;
    // NOP
label_156c20:
    // 0x156c20: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156c24:
    // 0x156c24: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x156c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
label_156c28:
    // 0x156c28: 0xc04ca38  jal         func_1328E0
label_156c2c:
    if (ctx->pc == 0x156C2Cu) {
        ctx->pc = 0x156C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C28u;
        // 0x156c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C30u;
        goto label_156c30;
    }
    ctx->pc = 0x156C28u;
    SET_GPR_U32(ctx, 31, 0x156C30u);
    ctx->pc = 0x156C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C28u;
    // 0x156c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156C28u, 0x156C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C30u;
label_156c30:
    // 0x156c30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156c34:
    // 0x156c34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156c38:
    // 0x156c38: 0xc04ca14  jal         func_132850
label_156c3c:
    if (ctx->pc == 0x156C3Cu) {
        ctx->pc = 0x156C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C38u;
        // 0x156c3c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C40u;
        goto label_156c40;
    }
    ctx->pc = 0x156C38u;
    SET_GPR_U32(ctx, 31, 0x156C40u);
    ctx->pc = 0x156C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C38u;
    // 0x156c3c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156C38u, 0x156C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C40u;
label_156c40:
    // 0x156c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156c44:
    // 0x156c44: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_156c48:
    // 0x156c48: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x156c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_156c4c:
    // 0x156c4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_156c50:
    if (ctx->pc == 0x156C50u) {
        ctx->pc = 0x156C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C4Cu;
        // 0x156c50: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C54u;
        goto label_156c54;
    }
    ctx->pc = 0x156C4Cu;
    {
        const bool branch_taken_0x156c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C4Cu;
        // 0x156c50: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c4c) {
            ctx->pc = 0x156C70u;
            goto label_156c70;
        }
    }
    ctx->pc = 0x156C54u;
label_156c54:
    // 0x156c54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x156c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_156c58:
    // 0x156c58: 0xc04ca38  jal         func_1328E0
label_156c5c:
    if (ctx->pc == 0x156C5Cu) {
        ctx->pc = 0x156C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C58u;
        // 0x156c5c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C60u;
        goto label_156c60;
    }
    ctx->pc = 0x156C58u;
    SET_GPR_U32(ctx, 31, 0x156C60u);
    ctx->pc = 0x156C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C58u;
    // 0x156c5c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156C58u, 0x156C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C60u;
label_156c60:
    // 0x156c60: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156c64:
    // 0x156c64: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x156c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_156c68:
    // 0x156c68: 0xc04ca14  jal         func_132850
label_156c6c:
    if (ctx->pc == 0x156C6Cu) {
        ctx->pc = 0x156C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C68u;
        // 0x156c6c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C70u;
        goto label_156c70;
    }
    ctx->pc = 0x156C68u;
    SET_GPR_U32(ctx, 31, 0x156C70u);
    ctx->pc = 0x156C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C68u;
    // 0x156c6c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156C68u, 0x156C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C70u;
label_156c70:
    // 0x156c70: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156c74:
    // 0x156c74: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x156c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
label_156c78:
    // 0x156c78: 0xc04ca38  jal         func_1328E0
label_156c7c:
    if (ctx->pc == 0x156C7Cu) {
        ctx->pc = 0x156C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C78u;
        // 0x156c7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C80u;
        goto label_156c80;
    }
    ctx->pc = 0x156C78u;
    SET_GPR_U32(ctx, 31, 0x156C80u);
    ctx->pc = 0x156C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C78u;
    // 0x156c7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156C78u, 0x156C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C80u;
label_156c80:
    // 0x156c80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156c84:
    // 0x156c84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x156c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_156c88:
    // 0x156c88: 0xc04ca14  jal         func_132850
label_156c8c:
    if (ctx->pc == 0x156C8Cu) {
        ctx->pc = 0x156C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C88u;
        // 0x156c8c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156C90u;
        goto label_156c90;
    }
    ctx->pc = 0x156C88u;
    SET_GPR_U32(ctx, 31, 0x156C90u);
    ctx->pc = 0x156C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C88u;
    // 0x156c8c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156C88u, 0x156C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C90u;
label_156c90:
    // 0x156c90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156c94:
    // 0x156c94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x156c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_156c98:
    // 0x156c98: 0xc04ca38  jal         func_1328E0
label_156c9c:
    if (ctx->pc == 0x156C9Cu) {
        ctx->pc = 0x156C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C98u;
        // 0x156c9c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CA0u;
        goto label_156ca0;
    }
    ctx->pc = 0x156C98u;
    SET_GPR_U32(ctx, 31, 0x156CA0u);
    ctx->pc = 0x156C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C98u;
    // 0x156c9c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156C98u, 0x156CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CA0u;
label_156ca0:
    // 0x156ca0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156ca4:
    // 0x156ca4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x156ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_156ca8:
    // 0x156ca8: 0xc04ca14  jal         func_132850
label_156cac:
    if (ctx->pc == 0x156CACu) {
        ctx->pc = 0x156CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CA8u;
        // 0x156cac: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CB0u;
        goto label_156cb0;
    }
    ctx->pc = 0x156CA8u;
    SET_GPR_U32(ctx, 31, 0x156CB0u);
    ctx->pc = 0x156CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CA8u;
    // 0x156cac: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156CA8u, 0x156CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CB0u;
label_156cb0:
    // 0x156cb0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156cb4:
    // 0x156cb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x156cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_156cb8:
    // 0x156cb8: 0xc04ca38  jal         func_1328E0
label_156cbc:
    if (ctx->pc == 0x156CBCu) {
        ctx->pc = 0x156CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CB8u;
        // 0x156cbc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CC0u;
        goto label_156cc0;
    }
    ctx->pc = 0x156CB8u;
    SET_GPR_U32(ctx, 31, 0x156CC0u);
    ctx->pc = 0x156CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CB8u;
    // 0x156cbc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156CB8u, 0x156CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CC0u;
label_156cc0:
    // 0x156cc0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156cc4:
    // 0x156cc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x156cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_156cc8:
    // 0x156cc8: 0xc04ca14  jal         func_132850
label_156ccc:
    if (ctx->pc == 0x156CCCu) {
        ctx->pc = 0x156CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CC8u;
        // 0x156ccc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CD0u;
        goto label_156cd0;
    }
    ctx->pc = 0x156CC8u;
    SET_GPR_U32(ctx, 31, 0x156CD0u);
    ctx->pc = 0x156CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CC8u;
    // 0x156ccc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156CC8u, 0x156CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CD0u;
label_156cd0:
    // 0x156cd0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156cd4:
    // 0x156cd4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x156cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_156cd8:
    // 0x156cd8: 0xc04ca38  jal         func_1328E0
label_156cdc:
    if (ctx->pc == 0x156CDCu) {
        ctx->pc = 0x156CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CD8u;
        // 0x156cdc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CE0u;
        goto label_156ce0;
    }
    ctx->pc = 0x156CD8u;
    SET_GPR_U32(ctx, 31, 0x156CE0u);
    ctx->pc = 0x156CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CD8u;
    // 0x156cdc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156CD8u, 0x156CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CE0u;
label_156ce0:
    // 0x156ce0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156ce4:
    // 0x156ce4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x156ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_156ce8:
    // 0x156ce8: 0xc04ca14  jal         func_132850
label_156cec:
    if (ctx->pc == 0x156CECu) {
        ctx->pc = 0x156CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CE8u;
        // 0x156cec: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156CF0u;
        goto label_156cf0;
    }
    ctx->pc = 0x156CE8u;
    SET_GPR_U32(ctx, 31, 0x156CF0u);
    ctx->pc = 0x156CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CE8u;
    // 0x156cec: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156CE8u, 0x156CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CF0u;
label_156cf0:
    // 0x156cf0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156cf4:
    // 0x156cf4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x156cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_156cf8:
    // 0x156cf8: 0xc04ca38  jal         func_1328E0
label_156cfc:
    if (ctx->pc == 0x156CFCu) {
        ctx->pc = 0x156CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CF8u;
        // 0x156cfc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D00u;
        goto label_156d00;
    }
    ctx->pc = 0x156CF8u;
    SET_GPR_U32(ctx, 31, 0x156D00u);
    ctx->pc = 0x156CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CF8u;
    // 0x156cfc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156CF8u, 0x156D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D00u;
label_156d00:
    // 0x156d00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d04:
    // 0x156d04: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x156d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_156d08:
    // 0x156d08: 0xc04ca14  jal         func_132850
label_156d0c:
    if (ctx->pc == 0x156D0Cu) {
        ctx->pc = 0x156D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D08u;
        // 0x156d0c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D10u;
        goto label_156d10;
    }
    ctx->pc = 0x156D08u;
    SET_GPR_U32(ctx, 31, 0x156D10u);
    ctx->pc = 0x156D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D08u;
    // 0x156d0c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156D08u, 0x156D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D10u;
label_156d10:
    // 0x156d10: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d14:
    // 0x156d14: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x156d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_156d18:
    // 0x156d18: 0xc04ca38  jal         func_1328E0
label_156d1c:
    if (ctx->pc == 0x156D1Cu) {
        ctx->pc = 0x156D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D18u;
        // 0x156d1c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D20u;
        goto label_156d20;
    }
    ctx->pc = 0x156D18u;
    SET_GPR_U32(ctx, 31, 0x156D20u);
    ctx->pc = 0x156D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D18u;
    // 0x156d1c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156D18u, 0x156D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D20u;
label_156d20:
    // 0x156d20: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d24:
    // 0x156d24: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x156d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_156d28:
    // 0x156d28: 0xc04ca14  jal         func_132850
label_156d2c:
    if (ctx->pc == 0x156D2Cu) {
        ctx->pc = 0x156D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D28u;
        // 0x156d2c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D30u;
        goto label_156d30;
    }
    ctx->pc = 0x156D28u;
    SET_GPR_U32(ctx, 31, 0x156D30u);
    ctx->pc = 0x156D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D28u;
    // 0x156d2c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156D28u, 0x156D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D30u;
label_156d30:
    // 0x156d30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d34:
    // 0x156d34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x156d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_156d38:
    // 0x156d38: 0xc04ca38  jal         func_1328E0
label_156d3c:
    if (ctx->pc == 0x156D3Cu) {
        ctx->pc = 0x156D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D38u;
        // 0x156d3c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D40u;
        goto label_156d40;
    }
    ctx->pc = 0x156D38u;
    SET_GPR_U32(ctx, 31, 0x156D40u);
    ctx->pc = 0x156D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D38u;
    // 0x156d3c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156D38u, 0x156D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D40u;
label_156d40:
    // 0x156d40: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d44:
    // 0x156d44: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x156d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_156d48:
    // 0x156d48: 0xc04ca14  jal         func_132850
label_156d4c:
    if (ctx->pc == 0x156D4Cu) {
        ctx->pc = 0x156D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D48u;
        // 0x156d4c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D50u;
        goto label_156d50;
    }
    ctx->pc = 0x156D48u;
    SET_GPR_U32(ctx, 31, 0x156D50u);
    ctx->pc = 0x156D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D48u;
    // 0x156d4c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156D48u, 0x156D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D50u;
label_156d50:
    // 0x156d50: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d54:
    // 0x156d54: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_156d58:
    // 0x156d58: 0xc04ca38  jal         func_1328E0
label_156d5c:
    if (ctx->pc == 0x156D5Cu) {
        ctx->pc = 0x156D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D58u;
        // 0x156d5c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D60u;
        goto label_156d60;
    }
    ctx->pc = 0x156D58u;
    SET_GPR_U32(ctx, 31, 0x156D60u);
    ctx->pc = 0x156D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D58u;
    // 0x156d5c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156D58u, 0x156D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D60u;
label_156d60:
    // 0x156d60: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d64:
    // 0x156d64: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x156d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_156d68:
    // 0x156d68: 0xc04ca14  jal         func_132850
label_156d6c:
    if (ctx->pc == 0x156D6Cu) {
        ctx->pc = 0x156D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D68u;
        // 0x156d6c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D70u;
        goto label_156d70;
    }
    ctx->pc = 0x156D68u;
    SET_GPR_U32(ctx, 31, 0x156D70u);
    ctx->pc = 0x156D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D68u;
    // 0x156d6c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156D68u, 0x156D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D70u;
label_156d70:
    // 0x156d70: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d74:
    // 0x156d74: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_156d78:
    // 0x156d78: 0xc04ca38  jal         func_1328E0
label_156d7c:
    if (ctx->pc == 0x156D7Cu) {
        ctx->pc = 0x156D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D78u;
        // 0x156d7c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D80u;
        goto label_156d80;
    }
    ctx->pc = 0x156D78u;
    SET_GPR_U32(ctx, 31, 0x156D80u);
    ctx->pc = 0x156D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D78u;
    // 0x156d7c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x156D78u, 0x156D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D80u;
label_156d80:
    // 0x156d80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x156d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_156d84:
    // 0x156d84: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x156d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_156d88:
    // 0x156d88: 0xc04ca14  jal         func_132850
label_156d8c:
    if (ctx->pc == 0x156D8Cu) {
        ctx->pc = 0x156D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D88u;
        // 0x156d8c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D90u;
        goto label_156d90;
    }
    ctx->pc = 0x156D88u;
    SET_GPR_U32(ctx, 31, 0x156D90u);
    ctx->pc = 0x156D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D88u;
    // 0x156d8c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x156D88u, 0x156D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D90u;
label_156d90:
    // 0x156d90: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x156d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_156d94:
    // 0x156d94: 0xc04c188  jal         func_130620
label_156d98:
    if (ctx->pc == 0x156D98u) {
        ctx->pc = 0x156D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D94u;
        // 0x156d98: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156D9Cu;
        goto label_156d9c;
    }
    ctx->pc = 0x156D94u;
    SET_GPR_U32(ctx, 31, 0x156D9Cu);
    ctx->pc = 0x156D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D94u;
    // 0x156d98: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130620u, 0x156D94u, 0x156D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D9Cu;
label_156d9c:
    // 0x156d9c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x156d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_156da0:
    // 0x156da0: 0xc04c210  jal         func_130840
label_156da4:
    if (ctx->pc == 0x156DA4u) {
        ctx->pc = 0x156DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DA0u;
        // 0x156da4: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156DA8u;
        goto label_156da8;
    }
    ctx->pc = 0x156DA0u;
    SET_GPR_U32(ctx, 31, 0x156DA8u);
    ctx->pc = 0x156DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DA0u;
    // 0x156da4: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130840u, 0x156DA0u, 0x156DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DA8u;
label_156da8:
    // 0x156da8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x156da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_156dac:
    // 0x156dac: 0xc053878  jal         func_14E1E0
label_156db0:
    if (ctx->pc == 0x156DB0u) {
        ctx->pc = 0x156DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DACu;
        // 0x156db0: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156DB4u;
        goto label_156db4;
    }
    ctx->pc = 0x156DACu;
    SET_GPR_U32(ctx, 31, 0x156DB4u);
    ctx->pc = 0x156DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DACu;
    // 0x156db0: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E1E0u, 0x156DACu, 0x156DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DB4u;
label_156db4:
    // 0x156db4: 0xc0e7f80  jal         func_39FE00
label_156db8:
    if (ctx->pc == 0x156DB8u) {
        ctx->pc = 0x156DBCu;
        goto label_156dbc;
    }
    ctx->pc = 0x156DB4u;
    SET_GPR_U32(ctx, 31, 0x156DBCu);
    ctx->pc = 0x39FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FE00u, 0x156DB4u, 0x156DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DBCu;
label_156dbc:
    // 0x156dbc: 0xc07cb28  jal         func_1F2CA0
label_156dc0:
    if (ctx->pc == 0x156DC0u) {
        ctx->pc = 0x156DC4u;
        goto label_156dc4;
    }
    ctx->pc = 0x156DBCu;
    SET_GPR_U32(ctx, 31, 0x156DC4u);
    ctx->pc = 0x1F2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2CA0u, 0x156DBCu, 0x156DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DC4u;
label_156dc4:
    // 0x156dc4: 0xc074160  jal         func_1D0580
label_156dc8:
    if (ctx->pc == 0x156DC8u) {
        ctx->pc = 0x156DCCu;
        goto label_156dcc;
    }
    ctx->pc = 0x156DC4u;
    SET_GPR_U32(ctx, 31, 0x156DCCu);
    ctx->pc = 0x1D0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0580u, 0x156DC4u, 0x156DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DCCu;
label_156dcc:
    // 0x156dcc: 0xc0b3634  jal         func_2CD8D0
label_156dd0:
    if (ctx->pc == 0x156DD0u) {
        ctx->pc = 0x156DD4u;
        goto label_156dd4;
    }
    ctx->pc = 0x156DCCu;
    SET_GPR_U32(ctx, 31, 0x156DD4u);
    ctx->pc = 0x2CD8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD8D0u, 0x156DCCu, 0x156DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DD4u;
label_156dd4:
    // 0x156dd4: 0xc099194  jal         func_264650
label_156dd8:
    if (ctx->pc == 0x156DD8u) {
        ctx->pc = 0x156DDCu;
        goto label_156ddc;
    }
    ctx->pc = 0x156DD4u;
    SET_GPR_U32(ctx, 31, 0x156DDCu);
    ctx->pc = 0x264650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264650u, 0x156DD4u, 0x156DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DDCu;
label_156ddc:
    // 0x156ddc: 0xc09f978  jal         func_27E5E0
label_156de0:
    if (ctx->pc == 0x156DE0u) {
        ctx->pc = 0x156DE4u;
        goto label_156de4;
    }
    ctx->pc = 0x156DDCu;
    SET_GPR_U32(ctx, 31, 0x156DE4u);
    ctx->pc = 0x27E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E5E0u, 0x156DDCu, 0x156DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DE4u;
label_156de4:
    // 0x156de4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x156de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_156de8:
    // 0x156de8: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x156de8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
label_156dec:
    // 0x156dec: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x156decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
label_156df0:
    // 0x156df0: 0xc07cc40  jal         func_1F3100
label_156df4:
    if (ctx->pc == 0x156DF4u) {
        ctx->pc = 0x156DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DF0u;
        // 0x156df4: 0xaf808968  sw          $zero, -0x7698($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156DF8u;
        goto label_156df8;
    }
    ctx->pc = 0x156DF0u;
    SET_GPR_U32(ctx, 31, 0x156DF8u);
    ctx->pc = 0x156DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DF0u;
    // 0x156df4: 0xaf808968  sw          $zero, -0x7698($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3100u, 0x156DF0u, 0x156DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DF8u;
label_156df8:
    // 0x156df8: 0xc09cc80  jal         func_273200
label_156dfc:
    if (ctx->pc == 0x156DFCu) {
        ctx->pc = 0x156E00u;
        goto label_156e00;
    }
    ctx->pc = 0x156DF8u;
    SET_GPR_U32(ctx, 31, 0x156E00u);
    ctx->pc = 0x273200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273200u, 0x156DF8u, 0x156E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E00u;
label_156e00:
    // 0x156e00: 0xc0b8618  jal         func_2E1860
label_156e04:
    if (ctx->pc == 0x156E04u) {
        ctx->pc = 0x156E08u;
        goto label_156e08;
    }
    ctx->pc = 0x156E00u;
    SET_GPR_U32(ctx, 31, 0x156E08u);
    ctx->pc = 0x2E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1860u, 0x156E00u, 0x156E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E08u;
label_156e08:
    // 0x156e08: 0xc0e26e4  jal         func_389B90
label_156e0c:
    if (ctx->pc == 0x156E0Cu) {
        ctx->pc = 0x156E10u;
        goto label_156e10;
    }
    ctx->pc = 0x156E08u;
    SET_GPR_U32(ctx, 31, 0x156E10u);
    ctx->pc = 0x389B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389B90u, 0x156E08u, 0x156E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E10u;
label_156e10:
    // 0x156e10: 0xc063e14  jal         func_18F850
label_156e14:
    if (ctx->pc == 0x156E14u) {
        ctx->pc = 0x156E18u;
        goto label_156e18;
    }
    ctx->pc = 0x156E10u;
    SET_GPR_U32(ctx, 31, 0x156E18u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x156E10u, 0x156E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E18u;
label_156e18:
    // 0x156e18: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x156e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_156e1c:
    // 0x156e1c: 0xc0c2a48  jal         func_30A920
label_156e20:
    if (ctx->pc == 0x156E20u) {
        ctx->pc = 0x156E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E1Cu;
        // 0x156e20: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E24u;
        goto label_156e24;
    }
    ctx->pc = 0x156E1Cu;
    SET_GPR_U32(ctx, 31, 0x156E24u);
    ctx->pc = 0x156E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E1Cu;
    // 0x156e20: 0x2484ff20  addiu       $a0, $a0, -0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A920u, 0x156E1Cu, 0x156E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E24u;
label_156e24:
    // 0x156e24: 0xc0c3008  jal         func_30C020
label_156e28:
    if (ctx->pc == 0x156E28u) {
        ctx->pc = 0x156E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E24u;
        // 0x156e28: 0x27848b00  addiu       $a0, $gp, -0x7500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E2Cu;
        goto label_156e2c;
    }
    ctx->pc = 0x156E24u;
    SET_GPR_U32(ctx, 31, 0x156E2Cu);
    ctx->pc = 0x156E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E24u;
    // 0x156e28: 0x27848b00  addiu       $a0, $gp, -0x7500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C020u, 0x156E24u, 0x156E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E2Cu;
label_156e2c:
    // 0x156e2c: 0x1000032a  b           . + 4 + (0x32A << 2)
label_156e30:
    if (ctx->pc == 0x156E30u) {
        ctx->pc = 0x156E34u;
        goto label_156e34;
    }
    ctx->pc = 0x156E2Cu;
    {
        const bool branch_taken_0x156e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156e2c) {
            ctx->pc = 0x157AD8u;
            goto label_157ad8;
        }
    }
    ctx->pc = 0x156E34u;
label_156e34:
    // 0x156e34: 0x0  nop
    ctx->pc = 0x156e34u;
    // NOP
label_156e38:
    // 0x156e38: 0xc0a4efc  jal         func_293BF0
label_156e3c:
    if (ctx->pc == 0x156E3Cu) {
        ctx->pc = 0x156E40u;
        goto label_156e40;
    }
    ctx->pc = 0x156E38u;
    SET_GPR_U32(ctx, 31, 0x156E40u);
    ctx->pc = 0x293BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293BF0u, 0x156E38u, 0x156E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E40u;
label_156e40:
    // 0x156e40: 0xc098f70  jal         func_263DC0
label_156e44:
    if (ctx->pc == 0x156E44u) {
        ctx->pc = 0x156E48u;
        goto label_156e48;
    }
    ctx->pc = 0x156E40u;
    SET_GPR_U32(ctx, 31, 0x156E48u);
    ctx->pc = 0x263DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263DC0u, 0x156E40u, 0x156E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E48u;
label_156e48:
    // 0x156e48: 0xc0a4ec0  jal         func_293B00
label_156e4c:
    if (ctx->pc == 0x156E4Cu) {
        ctx->pc = 0x156E50u;
        goto label_156e50;
    }
    ctx->pc = 0x156E48u;
    SET_GPR_U32(ctx, 31, 0x156E50u);
    ctx->pc = 0x293B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293B00u, 0x156E48u, 0x156E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E50u;
label_156e50:
    // 0x156e50: 0xc0a7234  jal         func_29C8D0
label_156e54:
    if (ctx->pc == 0x156E54u) {
        ctx->pc = 0x156E58u;
        goto label_156e58;
    }
    ctx->pc = 0x156E50u;
    SET_GPR_U32(ctx, 31, 0x156E58u);
    ctx->pc = 0x29C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8D0u, 0x156E50u, 0x156E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E58u;
label_156e58:
    // 0x156e58: 0xc0cd900  jal         func_336400
label_156e5c:
    if (ctx->pc == 0x156E5Cu) {
        ctx->pc = 0x156E60u;
        goto label_156e60;
    }
    ctx->pc = 0x156E58u;
    SET_GPR_U32(ctx, 31, 0x156E60u);
    ctx->pc = 0x336400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336400u, 0x156E58u, 0x156E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E60u;
label_156e60:
    // 0x156e60: 0xc0c9b40  jal         func_326D00
label_156e64:
    if (ctx->pc == 0x156E64u) {
        ctx->pc = 0x156E68u;
        goto label_156e68;
    }
    ctx->pc = 0x156E60u;
    SET_GPR_U32(ctx, 31, 0x156E68u);
    ctx->pc = 0x326D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326D00u, 0x156E60u, 0x156E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E68u;
label_156e68:
    // 0x156e68: 0xc09981c  jal         func_266070
label_156e6c:
    if (ctx->pc == 0x156E6Cu) {
        ctx->pc = 0x156E70u;
        goto label_156e70;
    }
    ctx->pc = 0x156E68u;
    SET_GPR_U32(ctx, 31, 0x156E70u);
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x156E68u, 0x156E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E70u;
label_156e70:
    // 0x156e70: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x156e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_156e74:
    // 0x156e74: 0xc0e35d4  jal         func_38D750
label_156e78:
    if (ctx->pc == 0x156E78u) {
        ctx->pc = 0x156E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E74u;
        // 0x156e78: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E7Cu;
        goto label_156e7c;
    }
    ctx->pc = 0x156E74u;
    SET_GPR_U32(ctx, 31, 0x156E7Cu);
    ctx->pc = 0x156E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E74u;
    // 0x156e78: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D750u, 0x156E74u, 0x156E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E7Cu;
label_156e7c:
    // 0x156e7c: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
label_156e80:
    // 0x156e80: 0xc061cac  jal         func_1872B0
label_156e84:
    if (ctx->pc == 0x156E84u) {
        ctx->pc = 0x156E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E80u;
        // 0x156e84: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E88u;
        goto label_156e88;
    }
    ctx->pc = 0x156E80u;
    SET_GPR_U32(ctx, 31, 0x156E88u);
    ctx->pc = 0x156E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E80u;
    // 0x156e84: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1872B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1872B0u, 0x156E80u, 0x156E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E88u;
label_156e88:
    // 0x156e88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156e8c:
    // 0x156e8c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x156e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_156e90:
    // 0x156e90: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x156e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_156e94:
    // 0x156e94: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x156e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_156e98:
    // 0x156e98: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x156e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
label_156e9c:
    // 0x156e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156ea0:
    // 0x156ea0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x156ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_156ea4:
    // 0x156ea4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_156ea8:
    // 0x156ea8: 0xc0b44cc  jal         func_2D1330
label_156eac:
    if (ctx->pc == 0x156EACu) {
        ctx->pc = 0x156EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EA8u;
        // 0x156eac: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EB0u;
        goto label_156eb0;
    }
    ctx->pc = 0x156EA8u;
    SET_GPR_U32(ctx, 31, 0x156EB0u);
    ctx->pc = 0x156EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EA8u;
    // 0x156eac: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x156EA8u, 0x156EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EB0u;
label_156eb0:
    // 0x156eb0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x156eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_156eb4:
    // 0x156eb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156eb8:
    // 0x156eb8: 0xc0b44cc  jal         func_2D1330
label_156ebc:
    if (ctx->pc == 0x156EBCu) {
        ctx->pc = 0x156EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EB8u;
        // 0x156ebc: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EC0u;
        goto label_156ec0;
    }
    ctx->pc = 0x156EB8u;
    SET_GPR_U32(ctx, 31, 0x156EC0u);
    ctx->pc = 0x156EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EB8u;
    // 0x156ebc: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x156EB8u, 0x156EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EC0u;
label_156ec0:
    // 0x156ec0: 0xc0c76ac  jal         func_31DAB0
label_156ec4:
    if (ctx->pc == 0x156EC4u) {
        ctx->pc = 0x156EC8u;
        goto label_156ec8;
    }
    ctx->pc = 0x156EC0u;
    SET_GPR_U32(ctx, 31, 0x156EC8u);
    ctx->pc = 0x31DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DAB0u, 0x156EC0u, 0x156EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EC8u;
label_156ec8:
    // 0x156ec8: 0xc0b2814  jal         func_2CA050
label_156ecc:
    if (ctx->pc == 0x156ECCu) {
        ctx->pc = 0x156ED0u;
        goto label_156ed0;
    }
    ctx->pc = 0x156EC8u;
    SET_GPR_U32(ctx, 31, 0x156ED0u);
    ctx->pc = 0x2CA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA050u, 0x156EC8u, 0x156ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156ED0u;
label_156ed0:
    // 0x156ed0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x156ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_156ed4:
    // 0x156ed4: 0xc0ceb18  jal         func_33AC60
label_156ed8:
    if (ctx->pc == 0x156ED8u) {
        ctx->pc = 0x156ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ED4u;
        // 0x156ed8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EDCu;
        goto label_156edc;
    }
    ctx->pc = 0x156ED4u;
    SET_GPR_U32(ctx, 31, 0x156EDCu);
    ctx->pc = 0x156ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156ED4u;
    // 0x156ed8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC60u, 0x156ED4u, 0x156EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EDCu;
label_156edc:
    // 0x156edc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x156edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_156ee0:
    // 0x156ee0: 0xc0ce574  jal         func_3395D0
label_156ee4:
    if (ctx->pc == 0x156EE4u) {
        ctx->pc = 0x156EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EE0u;
        // 0x156ee4: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EE8u;
        goto label_156ee8;
    }
    ctx->pc = 0x156EE0u;
    SET_GPR_U32(ctx, 31, 0x156EE8u);
    ctx->pc = 0x156EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EE0u;
    // 0x156ee4: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395D0u, 0x156EE0u, 0x156EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EE8u;
label_156ee8:
    // 0x156ee8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x156ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_156eec:
    // 0x156eec: 0xc0ceb18  jal         func_33AC60
label_156ef0:
    if (ctx->pc == 0x156EF0u) {
        ctx->pc = 0x156EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EECu;
        // 0x156ef0: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EF4u;
        goto label_156ef4;
    }
    ctx->pc = 0x156EECu;
    SET_GPR_U32(ctx, 31, 0x156EF4u);
    ctx->pc = 0x156EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EECu;
    // 0x156ef0: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AC60u, 0x156EECu, 0x156EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EF4u;
label_156ef4:
    // 0x156ef4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x156ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_156ef8:
    // 0x156ef8: 0xc0b655c  jal         func_2D9570
label_156efc:
    if (ctx->pc == 0x156EFCu) {
        ctx->pc = 0x156EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EF8u;
        // 0x156efc: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F00u;
        goto label_156f00;
    }
    ctx->pc = 0x156EF8u;
    SET_GPR_U32(ctx, 31, 0x156F00u);
    ctx->pc = 0x156EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EF8u;
    // 0x156efc: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9570u, 0x156EF8u, 0x156F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F00u;
label_156f00:
    // 0x156f00: 0xc0b9d88  jal         func_2E7620
label_156f04:
    if (ctx->pc == 0x156F04u) {
        ctx->pc = 0x156F08u;
        goto label_156f08;
    }
    ctx->pc = 0x156F00u;
    SET_GPR_U32(ctx, 31, 0x156F08u);
    ctx->pc = 0x2E7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7620u, 0x156F00u, 0x156F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F08u;
label_156f08:
    // 0x156f08: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x156f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_156f0c:
    // 0x156f0c: 0xc0ce0c0  jal         func_338300
label_156f10:
    if (ctx->pc == 0x156F10u) {
        ctx->pc = 0x156F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F0Cu;
        // 0x156f10: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F14u;
        goto label_156f14;
    }
    ctx->pc = 0x156F0Cu;
    SET_GPR_U32(ctx, 31, 0x156F14u);
    ctx->pc = 0x156F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F0Cu;
    // 0x156f10: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338300u, 0x156F0Cu, 0x156F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F14u;
label_156f14:
    // 0x156f14: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x156f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_156f18:
    // 0x156f18: 0xc0cdf34  jal         func_337CD0
label_156f1c:
    if (ctx->pc == 0x156F1Cu) {
        ctx->pc = 0x156F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F18u;
        // 0x156f1c: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F20u;
        goto label_156f20;
    }
    ctx->pc = 0x156F18u;
    SET_GPR_U32(ctx, 31, 0x156F20u);
    ctx->pc = 0x156F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F18u;
    // 0x156f1c: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CD0u, 0x156F18u, 0x156F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F20u;
label_156f20:
    // 0x156f20: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x156f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_156f24:
    // 0x156f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f28:
    // 0x156f28: 0xc0d7c14  jal         func_35F050
label_156f2c:
    if (ctx->pc == 0x156F2Cu) {
        ctx->pc = 0x156F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F28u;
        // 0x156f2c: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F30u;
        goto label_156f30;
    }
    ctx->pc = 0x156F28u;
    SET_GPR_U32(ctx, 31, 0x156F30u);
    ctx->pc = 0x156F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F28u;
    // 0x156f2c: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F050u, 0x156F28u, 0x156F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F30u;
label_156f30:
    // 0x156f30: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_156f34:
    // 0x156f34: 0xc0d372c  jal         func_34DCB0
label_156f38:
    if (ctx->pc == 0x156F38u) {
        ctx->pc = 0x156F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F34u;
        // 0x156f38: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F3Cu;
        goto label_156f3c;
    }
    ctx->pc = 0x156F34u;
    SET_GPR_U32(ctx, 31, 0x156F3Cu);
    ctx->pc = 0x156F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F34u;
    // 0x156f38: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DCB0u, 0x156F34u, 0x156F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F3Cu;
label_156f3c:
    // 0x156f3c: 0xc05a37c  jal         func_168DF0
label_156f40:
    if (ctx->pc == 0x156F40u) {
        ctx->pc = 0x156F44u;
        goto label_156f44;
    }
    ctx->pc = 0x156F3Cu;
    SET_GPR_U32(ctx, 31, 0x156F44u);
    ctx->pc = 0x168DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168DF0u, 0x156F3Cu, 0x156F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F44u;
label_156f44:
    // 0x156f44: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x156f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_156f48:
    // 0x156f48: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
label_156f4c:
    // 0x156f4c: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x156f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967018)));
label_156f50:
    // 0x156f50: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
label_156f54:
    // 0x156f54: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x156f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_156f58:
    // 0x156f58: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_156f5c:
    // 0x156f5c: 0xc069284  jal         func_1A4A10
label_156f60:
    if (ctx->pc == 0x156F60u) {
        ctx->pc = 0x156F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F5Cu;
        // 0x156f60: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F64u;
        goto label_156f64;
    }
    ctx->pc = 0x156F5Cu;
    SET_GPR_U32(ctx, 31, 0x156F64u);
    ctx->pc = 0x156F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F5Cu;
    // 0x156f60: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A10u, 0x156F5Cu, 0x156F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F64u;
label_156f64:
    // 0x156f64: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x156f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_156f68:
    // 0x156f68: 0xc0ad0ac  jal         func_2B42B0
label_156f6c:
    if (ctx->pc == 0x156F6Cu) {
        ctx->pc = 0x156F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F68u;
        // 0x156f6c: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F70u;
        goto label_156f70;
    }
    ctx->pc = 0x156F68u;
    SET_GPR_U32(ctx, 31, 0x156F70u);
    ctx->pc = 0x156F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F68u;
    // 0x156f6c: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42B0u, 0x156F68u, 0x156F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F70u;
label_156f70:
    // 0x156f70: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x156f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
label_156f74:
    // 0x156f74: 0xc0c5e80  jal         func_317A00
label_156f78:
    if (ctx->pc == 0x156F78u) {
        ctx->pc = 0x156F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F74u;
        // 0x156f78: 0x2484bb10  addiu       $a0, $a0, -0x44F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F7Cu;
        goto label_156f7c;
    }
    ctx->pc = 0x156F74u;
    SET_GPR_U32(ctx, 31, 0x156F7Cu);
    ctx->pc = 0x156F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F74u;
    // 0x156f78: 0x2484bb10  addiu       $a0, $a0, -0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317A00u, 0x156F74u, 0x156F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F7Cu;
label_156f7c:
    // 0x156f7c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x156f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
label_156f80:
    // 0x156f80: 0xc0c35f4  jal         func_30D7D0
label_156f84:
    if (ctx->pc == 0x156F84u) {
        ctx->pc = 0x156F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F80u;
        // 0x156f84: 0x2484b500  addiu       $a0, $a0, -0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F88u;
        goto label_156f88;
    }
    ctx->pc = 0x156F80u;
    SET_GPR_U32(ctx, 31, 0x156F88u);
    ctx->pc = 0x156F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F80u;
    // 0x156f84: 0x2484b500  addiu       $a0, $a0, -0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D7D0u, 0x156F80u, 0x156F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F88u;
label_156f88:
    // 0x156f88: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x156f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
label_156f8c:
    // 0x156f8c: 0xc068b04  jal         func_1A2C10
label_156f90:
    if (ctx->pc == 0x156F90u) {
        ctx->pc = 0x156F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F8Cu;
        // 0x156f90: 0x2484f050  addiu       $a0, $a0, -0xFB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F94u;
        goto label_156f94;
    }
    ctx->pc = 0x156F8Cu;
    SET_GPR_U32(ctx, 31, 0x156F94u);
    ctx->pc = 0x156F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F8Cu;
    // 0x156f90: 0x2484f050  addiu       $a0, $a0, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C10u, 0x156F8Cu, 0x156F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F94u;
label_156f94:
    // 0x156f94: 0xc068fdc  jal         func_1A3F70
label_156f98:
    if (ctx->pc == 0x156F98u) {
        ctx->pc = 0x156F9Cu;
        goto label_156f9c;
    }
    ctx->pc = 0x156F94u;
    SET_GPR_U32(ctx, 31, 0x156F9Cu);
    ctx->pc = 0x1A3F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F70u, 0x156F94u, 0x156F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F9Cu;
label_156f9c:
    // 0x156f9c: 0xc069120  jal         func_1A4480
label_156fa0:
    if (ctx->pc == 0x156FA0u) {
        ctx->pc = 0x156FA4u;
        goto label_156fa4;
    }
    ctx->pc = 0x156F9Cu;
    SET_GPR_U32(ctx, 31, 0x156FA4u);
    ctx->pc = 0x1A4480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4480u, 0x156F9Cu, 0x156FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FA4u;
label_156fa4:
    // 0x156fa4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_156fa8:
    // 0x156fa8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x156fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_156fac:
    // 0x156fac: 0xc05eaf8  jal         func_17ABE0
label_156fb0:
    if (ctx->pc == 0x156FB0u) {
        ctx->pc = 0x156FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FACu;
        // 0x156fb0: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FB4u;
        goto label_156fb4;
    }
    ctx->pc = 0x156FACu;
    SET_GPR_U32(ctx, 31, 0x156FB4u);
    ctx->pc = 0x156FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FACu;
    // 0x156fb0: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x156FACu, 0x156FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FB4u;
label_156fb4:
    // 0x156fb4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_156fb8:
    // 0x156fb8: 0xc095094  jal         func_254250
label_156fbc:
    if (ctx->pc == 0x156FBCu) {
        ctx->pc = 0x156FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FB8u;
        // 0x156fbc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FC0u;
        goto label_156fc0;
    }
    ctx->pc = 0x156FB8u;
    SET_GPR_U32(ctx, 31, 0x156FC0u);
    ctx->pc = 0x156FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FB8u;
    // 0x156fbc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254250u, 0x156FB8u, 0x156FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FC0u;
label_156fc0:
    // 0x156fc0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_156fc4:
    // 0x156fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156fc8:
    // 0x156fc8: 0xc052c14  jal         func_14B050
label_156fcc:
    if (ctx->pc == 0x156FCCu) {
        ctx->pc = 0x156FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FC8u;
        // 0x156fcc: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FD0u;
        goto label_156fd0;
    }
    ctx->pc = 0x156FC8u;
    SET_GPR_U32(ctx, 31, 0x156FD0u);
    ctx->pc = 0x156FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FC8u;
    // 0x156fcc: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B050u, 0x156FC8u, 0x156FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FD0u;
label_156fd0:
    // 0x156fd0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_156fd4:
    // 0x156fd4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x156fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_156fd8:
    // 0x156fd8: 0x8c252650  lw          $a1, 0x2650($at)
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9808)));
label_156fdc:
    // 0x156fdc: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
label_156fe0:
    // 0x156fe0: 0xc04e360  jal         func_138D80
label_156fe4:
    if (ctx->pc == 0x156FE4u) {
        ctx->pc = 0x156FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FE0u;
        // 0x156fe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FE8u;
        goto label_156fe8;
    }
    ctx->pc = 0x156FE0u;
    SET_GPR_U32(ctx, 31, 0x156FE8u);
    ctx->pc = 0x156FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FE0u;
    // 0x156fe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D80u, 0x156FE0u, 0x156FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FE8u;
label_156fe8:
    // 0x156fe8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x156fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_156fec:
    // 0x156fec: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x156fecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_156ff0:
    // 0x156ff0: 0x28610ff0  slti        $at, $v1, 0xFF0
    ctx->pc = 0x156ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4080) ? 1 : 0);
label_156ff4:
    // 0x156ff4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_156ff8:
    if (ctx->pc == 0x156FF8u) {
        ctx->pc = 0x156FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FF4u;
        // 0x156ff8: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FFCu;
        goto label_156ffc;
    }
    ctx->pc = 0x156FF4u;
    {
        const bool branch_taken_0x156ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FF4u;
        // 0x156ff8: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ff4) {
            ctx->pc = 0x157008u;
            goto label_157008;
        }
    }
    ctx->pc = 0x156FFCu;
label_156ffc:
    // 0x156ffc: 0xc052e70  jal         func_14B9C0
label_157000:
    if (ctx->pc == 0x157000u) {
        ctx->pc = 0x157000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FFCu;
        // 0x157000: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157004u;
        goto label_157004;
    }
    ctx->pc = 0x156FFCu;
    SET_GPR_U32(ctx, 31, 0x157004u);
    ctx->pc = 0x157000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FFCu;
    // 0x157000: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9C0u, 0x156FFCu, 0x157004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157004u;
label_157004:
    // 0x157004: 0x0  nop
    ctx->pc = 0x157004u;
    // NOP
label_157008:
    // 0x157008: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_15700c:
    // 0x15700c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15700cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_157010:
    // 0x157010: 0x10000297  b           . + 4 + (0x297 << 2)
label_157014:
    if (ctx->pc == 0x157014u) {
        ctx->pc = 0x157014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157010u;
        // 0x157014: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157018u;
        goto label_157018;
    }
    ctx->pc = 0x157010u;
    {
        const bool branch_taken_0x157010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157010u;
        // 0x157014: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157010) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157018u;
label_157018:
    // 0x157018: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15701c:
    // 0x15701c: 0x8c23ceec  lw          $v1, -0x3114($at)
    ctx->pc = 0x15701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
label_157020:
    // 0x157020: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x157020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_157024:
    // 0x157024: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_157028:
    if (ctx->pc == 0x157028u) {
        ctx->pc = 0x157028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157024u;
        // 0x157028: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15702Cu;
        goto label_15702c;
    }
    ctx->pc = 0x157024u;
    {
        const bool branch_taken_0x157024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157024u;
        // 0x157028: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157024) {
            ctx->pc = 0x157038u;
            goto label_157038;
        }
    }
    ctx->pc = 0x15702Cu;
label_15702c:
    // 0x15702c: 0x10000290  b           . + 4 + (0x290 << 2)
label_157030:
    if (ctx->pc == 0x157030u) {
        ctx->pc = 0x157030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15702Cu;
        // 0x157030: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157034u;
        goto label_157034;
    }
    ctx->pc = 0x15702Cu;
    {
        const bool branch_taken_0x15702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15702Cu;
        // 0x157030: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15702c) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157034u;
label_157034:
    // 0x157034: 0x0  nop
    ctx->pc = 0x157034u;
    // NOP
label_157038:
    // 0x157038: 0xc0554f4  jal         func_1553D0
label_15703c:
    if (ctx->pc == 0x15703Cu) {
        ctx->pc = 0x15703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157038u;
        // 0x15703c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157040u;
        goto label_157040;
    }
    ctx->pc = 0x157038u;
    SET_GPR_U32(ctx, 31, 0x157040u);
    ctx->pc = 0x15703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157038u;
    // 0x15703c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x157038u, 0x157040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157040u;
label_157040:
    // 0x157040: 0x1440028b  bnez        $v0, . + 4 + (0x28B << 2)
label_157044:
    if (ctx->pc == 0x157044u) {
        ctx->pc = 0x157048u;
        goto label_157048;
    }
    ctx->pc = 0x157040u;
    {
        const bool branch_taken_0x157040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157040) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x157048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_15704c:
    // 0x15704c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x15704cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_157050:
    // 0x157050: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x157050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
label_157054:
    // 0x157054: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_157058:
    // 0x157058: 0xc095098  jal         func_254260
label_15705c:
    if (ctx->pc == 0x15705Cu) {
        ctx->pc = 0x15705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157058u;
        // 0x15705c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157060u;
        goto label_157060;
    }
    ctx->pc = 0x157058u;
    SET_GPR_U32(ctx, 31, 0x157060u);
    ctx->pc = 0x15705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157058u;
    // 0x15705c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254260u, 0x157058u, 0x157060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157060u;
label_157060:
    // 0x157060: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_157064:
    // 0x157064: 0xa6006838  sh          $zero, 0x6838($s0)
    ctx->pc = 0x157064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26680), (uint16_t)GPR_U32(ctx, 0));
label_157068:
    // 0x157068: 0xc052ea8  jal         func_14BAA0
label_15706c:
    if (ctx->pc == 0x15706Cu) {
        ctx->pc = 0x15706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157068u;
        // 0x15706c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157070u;
        goto label_157070;
    }
    ctx->pc = 0x157068u;
    SET_GPR_U32(ctx, 31, 0x157070u);
    ctx->pc = 0x15706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157068u;
    // 0x15706c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BAA0u, 0x157068u, 0x157070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157070u;
label_157070:
    // 0x157070: 0x1000027f  b           . + 4 + (0x27F << 2)
label_157074:
    if (ctx->pc == 0x157074u) {
        ctx->pc = 0x157078u;
        goto label_157078;
    }
    ctx->pc = 0x157070u;
    {
        const bool branch_taken_0x157070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157070) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157078u;
label_157078:
    // 0x157078: 0xc0554f4  jal         func_1553D0
label_15707c:
    if (ctx->pc == 0x15707Cu) {
        ctx->pc = 0x15707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157078u;
        // 0x15707c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157080u;
        goto label_157080;
    }
    ctx->pc = 0x157078u;
    SET_GPR_U32(ctx, 31, 0x157080u);
    ctx->pc = 0x15707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157078u;
    // 0x15707c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x157078u, 0x157080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157080u;
label_157080:
    // 0x157080: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
label_157084:
    if (ctx->pc == 0x157084u) {
        ctx->pc = 0x157088u;
        goto label_157088;
    }
    ctx->pc = 0x157080u;
    {
        const bool branch_taken_0x157080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157080) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157088u;
label_157088:
    // 0x157088: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x157088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_15708c:
    // 0x15708c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x15708cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
label_157090:
    // 0x157090: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x157090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
label_157094:
    // 0x157094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_157098:
    // 0x157098: 0xc05694c  jal         func_15A530
label_15709c:
    if (ctx->pc == 0x15709Cu) {
        ctx->pc = 0x15709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157098u;
        // 0x15709c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570A0u;
        goto label_1570a0;
    }
    ctx->pc = 0x157098u;
    SET_GPR_U32(ctx, 31, 0x1570A0u);
    ctx->pc = 0x15709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157098u;
    // 0x15709c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A530u, 0x157098u, 0x1570A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570A0u;
label_1570a0:
    // 0x1570a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1570a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1570a4:
    // 0x1570a4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1570a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1570a8:
    // 0x1570a8: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x1570a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1570ac:
    // 0x1570ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1570acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1570b0:
    // 0x1570b0: 0x1060026f  beqz        $v1, . + 4 + (0x26F << 2)
label_1570b4:
    if (ctx->pc == 0x1570B4u) {
        ctx->pc = 0x1570B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570B0u;
        // 0x1570b4: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570B8u;
        goto label_1570b8;
    }
    ctx->pc = 0x1570B0u;
    {
        const bool branch_taken_0x1570b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570B0u;
        // 0x1570b4: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570b0) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1570B8u;
label_1570b8:
    // 0x1570b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1570b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1570bc:
    // 0x1570bc: 0xc05ee50  jal         func_17B940
label_1570c0:
    if (ctx->pc == 0x1570C0u) {
        ctx->pc = 0x1570C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570BCu;
        // 0x1570c0: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570C4u;
        goto label_1570c4;
    }
    ctx->pc = 0x1570BCu;
    SET_GPR_U32(ctx, 31, 0x1570C4u);
    ctx->pc = 0x1570C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570BCu;
    // 0x1570c0: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x1570BCu, 0x1570C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570C4u;
label_1570c4:
    // 0x1570c4: 0x1000026a  b           . + 4 + (0x26A << 2)
label_1570c8:
    if (ctx->pc == 0x1570C8u) {
        ctx->pc = 0x1570CCu;
        goto label_1570cc;
    }
    ctx->pc = 0x1570C4u;
    {
        const bool branch_taken_0x1570c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1570c4) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1570CCu;
label_1570cc:
    // 0x1570cc: 0x0  nop
    ctx->pc = 0x1570ccu;
    // NOP
label_1570d0:
    // 0x1570d0: 0xc0554f4  jal         func_1553D0
label_1570d4:
    if (ctx->pc == 0x1570D4u) {
        ctx->pc = 0x1570D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570D0u;
        // 0x1570d4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570D8u;
        goto label_1570d8;
    }
    ctx->pc = 0x1570D0u;
    SET_GPR_U32(ctx, 31, 0x1570D8u);
    ctx->pc = 0x1570D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570D0u;
    // 0x1570d4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x1570D0u, 0x1570D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570D8u;
label_1570d8:
    // 0x1570d8: 0x14400265  bnez        $v0, . + 4 + (0x265 << 2)
label_1570dc:
    if (ctx->pc == 0x1570DCu) {
        ctx->pc = 0x1570DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570D8u;
        // 0x1570dc: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570E0u;
        goto label_1570e0;
    }
    ctx->pc = 0x1570D8u;
    {
        const bool branch_taken_0x1570d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1570DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570D8u;
        // 0x1570dc: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570d8) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1570E0u;
label_1570e0:
    // 0x1570e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1570e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1570e4:
    // 0x1570e4: 0xc05eaf8  jal         func_17ABE0
label_1570e8:
    if (ctx->pc == 0x1570E8u) {
        ctx->pc = 0x1570E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570E4u;
        // 0x1570e8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570ECu;
        goto label_1570ec;
    }
    ctx->pc = 0x1570E4u;
    SET_GPR_U32(ctx, 31, 0x1570ECu);
    ctx->pc = 0x1570E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1570E4u;
    // 0x1570e8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x1570E4u, 0x1570ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570ECu;
label_1570ec:
    // 0x1570ec: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x1570ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1570f0:
    // 0x1570f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1570f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1570f4:
    // 0x1570f4: 0x1000025e  b           . + 4 + (0x25E << 2)
label_1570f8:
    if (ctx->pc == 0x1570F8u) {
        ctx->pc = 0x1570F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F4u;
        // 0x1570f8: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570FCu;
        goto label_1570fc;
    }
    ctx->pc = 0x1570F4u;
    {
        const bool branch_taken_0x1570f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F4u;
        // 0x1570f8: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570f4) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1570FCu;
label_1570fc:
    // 0x1570fc: 0x0  nop
    ctx->pc = 0x1570fcu;
    // NOP
label_157100:
    // 0x157100: 0xc0554f4  jal         func_1553D0
label_157104:
    if (ctx->pc == 0x157104u) {
        ctx->pc = 0x157104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157100u;
        // 0x157104: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157108u;
        goto label_157108;
    }
    ctx->pc = 0x157100u;
    SET_GPR_U32(ctx, 31, 0x157108u);
    ctx->pc = 0x157104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157100u;
    // 0x157104: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x157100u, 0x157108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157108u;
label_157108:
    // 0x157108: 0x14400259  bnez        $v0, . + 4 + (0x259 << 2)
label_15710c:
    if (ctx->pc == 0x15710Cu) {
        ctx->pc = 0x157110u;
        goto label_157110;
    }
    ctx->pc = 0x157108u;
    {
        const bool branch_taken_0x157108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157108) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157110u;
label_157110:
    // 0x157110: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x157110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_157114:
    // 0x157114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_157118:
    // 0x157118: 0x10000255  b           . + 4 + (0x255 << 2)
label_15711c:
    if (ctx->pc == 0x15711Cu) {
        ctx->pc = 0x15711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157118u;
        // 0x15711c: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157120u;
        goto label_157120;
    }
    ctx->pc = 0x157118u;
    {
        const bool branch_taken_0x157118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157118u;
        // 0x15711c: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157118) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157120u;
label_157120:
    // 0x157120: 0xc0554f4  jal         func_1553D0
label_157124:
    if (ctx->pc == 0x157124u) {
        ctx->pc = 0x157124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157120u;
        // 0x157124: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157128u;
        goto label_157128;
    }
    ctx->pc = 0x157120u;
    SET_GPR_U32(ctx, 31, 0x157128u);
    ctx->pc = 0x157124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157120u;
    // 0x157124: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x157120u, 0x157128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157128u;
label_157128:
    // 0x157128: 0x14400251  bnez        $v0, . + 4 + (0x251 << 2)
label_15712c:
    if (ctx->pc == 0x15712Cu) {
        ctx->pc = 0x157130u;
        goto label_157130;
    }
    ctx->pc = 0x157128u;
    {
        const bool branch_taken_0x157128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157128) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157130u;
label_157130:
    // 0x157130: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x157130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_157134:
    // 0x157134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_157138:
    // 0x157138: 0x1000024d  b           . + 4 + (0x24D << 2)
label_15713c:
    if (ctx->pc == 0x15713Cu) {
        ctx->pc = 0x15713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157138u;
        // 0x15713c: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157140u;
        goto label_157140;
    }
    ctx->pc = 0x157138u;
    {
        const bool branch_taken_0x157138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157138u;
        // 0x15713c: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157138) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157140u;
label_157140:
    // 0x157140: 0xc0554f4  jal         func_1553D0
label_157144:
    if (ctx->pc == 0x157144u) {
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157140u;
        // 0x157144: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157148u;
        goto label_157148;
    }
    ctx->pc = 0x157140u;
    SET_GPR_U32(ctx, 31, 0x157148u);
    ctx->pc = 0x157144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157140u;
    // 0x157144: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x157140u, 0x157148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157148u;
label_157148:
    // 0x157148: 0x14400249  bnez        $v0, . + 4 + (0x249 << 2)
label_15714c:
    if (ctx->pc == 0x15714Cu) {
        ctx->pc = 0x157150u;
        goto label_157150;
    }
    ctx->pc = 0x157148u;
    {
        const bool branch_taken_0x157148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157148) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157150u;
label_157150:
    // 0x157150: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x157150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_157154:
    // 0x157154: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157158:
    // 0x157158: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15715c:
    // 0x15715c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15715cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_157160:
    // 0x157160: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x157160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_157164:
    // 0x157164: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x157164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_157168:
    // 0x157168: 0x14600241  bnez        $v1, . + 4 + (0x241 << 2)
label_15716c:
    if (ctx->pc == 0x15716Cu) {
        ctx->pc = 0x157170u;
        goto label_157170;
    }
    ctx->pc = 0x157168u;
    {
        const bool branch_taken_0x157168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157168) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157170u;
label_157170:
    // 0x157170: 0xc0558b0  jal         func_1562C0
label_157174:
    if (ctx->pc == 0x157174u) {
        ctx->pc = 0x157178u;
        goto label_157178;
    }
    ctx->pc = 0x157170u;
    SET_GPR_U32(ctx, 31, 0x157178u);
    ctx->pc = 0x1562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C0u, 0x157170u, 0x157178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157178u;
label_157178:
    // 0x157178: 0x1000023d  b           . + 4 + (0x23D << 2)
label_15717c:
    if (ctx->pc == 0x15717Cu) {
        ctx->pc = 0x157180u;
        goto label_157180;
    }
    ctx->pc = 0x157178u;
    {
        const bool branch_taken_0x157178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157178) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157180u;
label_157180:
    // 0x157180: 0xc0554f4  jal         func_1553D0
label_157184:
    if (ctx->pc == 0x157184u) {
        ctx->pc = 0x157184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157180u;
        // 0x157184: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157188u;
        goto label_157188;
    }
    ctx->pc = 0x157180u;
    SET_GPR_U32(ctx, 31, 0x157188u);
    ctx->pc = 0x157184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157180u;
    // 0x157184: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x157180u, 0x157188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157188u;
label_157188:
    // 0x157188: 0x14400239  bnez        $v0, . + 4 + (0x239 << 2)
label_15718c:
    if (ctx->pc == 0x15718Cu) {
        ctx->pc = 0x157190u;
        goto label_157190;
    }
    ctx->pc = 0x157188u;
    {
        const bool branch_taken_0x157188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157188) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157190u;
label_157190:
    // 0x157190: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x157190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_157194:
    // 0x157194: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157198:
    // 0x157198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15719c:
    // 0x15719c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x15719cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_1571a0:
    // 0x1571a0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1571a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1571a4:
    // 0x1571a4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1571a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1571a8:
    // 0x1571a8: 0x14600231  bnez        $v1, . + 4 + (0x231 << 2)
label_1571ac:
    if (ctx->pc == 0x1571ACu) {
        ctx->pc = 0x1571ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571A8u;
        // 0x1571ac: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571B0u;
        goto label_1571b0;
    }
    ctx->pc = 0x1571A8u;
    {
        const bool branch_taken_0x1571a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1571ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571A8u;
        // 0x1571ac: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571a8) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1571B0u;
label_1571b0:
    // 0x1571b0: 0x27948a54  addiu       $s4, $gp, -0x75AC
    ctx->pc = 0x1571b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
label_1571b4:
    // 0x1571b4: 0x27938a64  addiu       $s3, $gp, -0x759C
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937188));
label_1571b8:
    // 0x1571b8: 0x27928a60  addiu       $s2, $gp, -0x75A0
    ctx->pc = 0x1571b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_1571bc:
    // 0x1571bc: 0x27918a70  addiu       $s1, $gp, -0x7590
    ctx->pc = 0x1571bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937200));
label_1571c0:
    // 0x1571c0: 0x27908a78  addiu       $s0, $gp, -0x7588
    ctx->pc = 0x1571c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937208));
label_1571c4:
    // 0x1571c4: 0x27968a74  addiu       $s6, $gp, -0x758C
    ctx->pc = 0x1571c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937204));
label_1571c8:
    // 0x1571c8: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x1571c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1571cc:
    // 0x1571cc: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1571d0:
    if (ctx->pc == 0x1571D0u) {
        ctx->pc = 0x1571D4u;
        goto label_1571d4;
    }
    ctx->pc = 0x1571CCu;
    {
        const bool branch_taken_0x1571cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571cc) {
            ctx->pc = 0x157210u;
            goto label_157210;
        }
    }
    ctx->pc = 0x1571D4u;
label_1571d4:
    // 0x1571d4: 0x82660000  lb          $a2, 0x0($s3)
    ctx->pc = 0x1571d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1571d8:
    // 0x1571d8: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
label_1571dc:
    if (ctx->pc == 0x1571DCu) {
        ctx->pc = 0x1571E0u;
        goto label_1571e0;
    }
    ctx->pc = 0x1571D8u;
    {
        const bool branch_taken_0x1571d8 = (GPR_S64(ctx, 6) < 0);
        if (branch_taken_0x1571d8) {
            ctx->pc = 0x157210u;
            goto label_157210;
        }
    }
    ctx->pc = 0x1571E0u;
label_1571e0:
    // 0x1571e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1571e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1571e4:
    // 0x1571e4: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x1571e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1571e8:
    // 0x1571e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1571ec:
    if (ctx->pc == 0x1571ECu) {
        ctx->pc = 0x1571ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571E8u;
        // 0x1571ec: 0x32a700ff  andi        $a3, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571F0u;
        goto label_1571f0;
    }
    ctx->pc = 0x1571E8u;
    {
        const bool branch_taken_0x1571e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571E8u;
        // 0x1571ec: 0x32a700ff  andi        $a3, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571e8) {
            ctx->pc = 0x157200u;
            goto label_157200;
        }
    }
    ctx->pc = 0x1571F0u;
label_1571f0:
    // 0x1571f0: 0xc0b3104  jal         func_2CC410
label_1571f4:
    if (ctx->pc == 0x1571F4u) {
        ctx->pc = 0x1571F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571F0u;
        // 0x1571f4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1571F8u;
        goto label_1571f8;
    }
    ctx->pc = 0x1571F0u;
    SET_GPR_U32(ctx, 31, 0x1571F8u);
    ctx->pc = 0x1571F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571F0u;
    // 0x1571f4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC410u, 0x1571F0u, 0x1571F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571F8u;
label_1571f8:
    // 0x1571f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1571fc:
    if (ctx->pc == 0x1571FCu) {
        ctx->pc = 0x1571FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571F8u;
        // 0x1571fc: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157200u;
        goto label_157200;
    }
    ctx->pc = 0x1571F8u;
    {
        const bool branch_taken_0x1571f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571F8u;
        // 0x1571fc: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571f8) {
            ctx->pc = 0x157210u;
            goto label_157210;
        }
    }
    ctx->pc = 0x157200u;
label_157200:
    // 0x157200: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x157200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_157204:
    // 0x157204: 0xc0b3104  jal         func_2CC410
label_157208:
    if (ctx->pc == 0x157208u) {
        ctx->pc = 0x157208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157204u;
        // 0x157208: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15720Cu;
        goto label_15720c;
    }
    ctx->pc = 0x157204u;
    SET_GPR_U32(ctx, 31, 0x15720Cu);
    ctx->pc = 0x157208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157204u;
    // 0x157208: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC410u, 0x157204u, 0x15720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15720Cu;
label_15720c:
    // 0x15720c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x15720cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_157210:
    // 0x157210: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157214:
    // 0x157214: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x157214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_157218:
    // 0x157218: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x157218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_15721c:
    // 0x15721c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_157220:
    if (ctx->pc == 0x157220u) {
        ctx->pc = 0x157224u;
        goto label_157224;
    }
    ctx->pc = 0x15721Cu;
    {
        const bool branch_taken_0x15721c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15721c) {
            ctx->pc = 0x157248u;
            goto label_157248;
        }
    }
    ctx->pc = 0x157224u;
label_157224:
    // 0x157224: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x157224u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_157228:
    // 0x157228: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_15722c:
    if (ctx->pc == 0x15722Cu) {
        ctx->pc = 0x157230u;
        goto label_157230;
    }
    ctx->pc = 0x157228u;
    {
        const bool branch_taken_0x157228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x157228) {
            ctx->pc = 0x157248u;
            goto label_157248;
        }
    }
    ctx->pc = 0x157230u;
label_157230:
    // 0x157230: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x157230u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_157234:
    // 0x157234: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_157238:
    if (ctx->pc == 0x157238u) {
        ctx->pc = 0x157238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157234u;
        // 0x157238: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15723Cu;
        goto label_15723c;
    }
    ctx->pc = 0x157234u;
    {
        const bool branch_taken_0x157234 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x157238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157234u;
        // 0x157238: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157234) {
            ctx->pc = 0x157248u;
            goto label_157248;
        }
    }
    ctx->pc = 0x15723Cu;
label_15723c:
    // 0x15723c: 0xc0b3104  jal         func_2CC410
label_157240:
    if (ctx->pc == 0x157240u) {
        ctx->pc = 0x157240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15723Cu;
        // 0x157240: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157244u;
        goto label_157244;
    }
    ctx->pc = 0x15723Cu;
    SET_GPR_U32(ctx, 31, 0x157244u);
    ctx->pc = 0x157240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15723Cu;
    // 0x157240: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC410u, 0x15723Cu, 0x157244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157244u;
label_157244:
    // 0x157244: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x157244u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
label_157248:
    // 0x157248: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x157248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_15724c:
    // 0x15724c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x15724cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_157250:
    // 0x157250: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_157254:
    // 0x157254: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x157254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_157258:
    // 0x157258: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x157258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_15725c:
    // 0x15725c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15725cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_157260:
    // 0x157260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x157260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_157264:
    // 0x157264: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_157268:
    if (ctx->pc == 0x157268u) {
        ctx->pc = 0x157268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157264u;
        // 0x157268: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15726Cu;
        goto label_15726c;
    }
    ctx->pc = 0x157264u;
    {
        const bool branch_taken_0x157264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157264u;
        // 0x157268: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157264) {
            ctx->pc = 0x1571C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1571c8;
        }
    }
    ctx->pc = 0x15726Cu;
label_15726c:
    // 0x15726c: 0x10000200  b           . + 4 + (0x200 << 2)
label_157270:
    if (ctx->pc == 0x157270u) {
        ctx->pc = 0x157274u;
        goto label_157274;
    }
    ctx->pc = 0x15726Cu;
    {
        const bool branch_taken_0x15726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15726c) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157274u;
label_157274:
    // 0x157274: 0x0  nop
    ctx->pc = 0x157274u;
    // NOP
label_157278:
    // 0x157278: 0xc0554f4  jal         func_1553D0
label_15727c:
    if (ctx->pc == 0x15727Cu) {
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157278u;
        // 0x15727c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157280u;
        goto label_157280;
    }
    ctx->pc = 0x157278u;
    SET_GPR_U32(ctx, 31, 0x157280u);
    ctx->pc = 0x15727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157278u;
    // 0x15727c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x157278u, 0x157280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157280u;
label_157280:
    // 0x157280: 0x144001fb  bnez        $v0, . + 4 + (0x1FB << 2)
label_157284:
    if (ctx->pc == 0x157284u) {
        ctx->pc = 0x157288u;
        goto label_157288;
    }
    ctx->pc = 0x157280u;
    {
        const bool branch_taken_0x157280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157280) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157288u;
label_157288:
    // 0x157288: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15728c:
    // 0x15728c: 0xc0a2a88  jal         func_28AA20
label_157290:
    if (ctx->pc == 0x157290u) {
        ctx->pc = 0x157290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15728Cu;
        // 0x157290: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157294u;
        goto label_157294;
    }
    ctx->pc = 0x15728Cu;
    SET_GPR_U32(ctx, 31, 0x157294u);
    ctx->pc = 0x157290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15728Cu;
    // 0x157290: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA20u, 0x15728Cu, 0x157294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157294u;
label_157294:
    // 0x157294: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_157298:
    // 0x157298: 0x24020ff7  addiu       $v0, $zero, 0xFF7
    ctx->pc = 0x157298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
label_15729c:
    // 0x15729c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x15729cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1572a0:
    // 0x1572a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1572a4:
    if (ctx->pc == 0x1572A4u) {
        ctx->pc = 0x1572A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572A0u;
        // 0x1572a4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572A8u;
        goto label_1572a8;
    }
    ctx->pc = 0x1572A0u;
    {
        const bool branch_taken_0x1572a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1572A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572A0u;
        // 0x1572a4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572a0) {
            ctx->pc = 0x1572B8u;
            goto label_1572b8;
        }
    }
    ctx->pc = 0x1572A8u;
label_1572a8:
    // 0x1572a8: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x1572a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1572ac:
    // 0x1572ac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1572acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1572b0:
    // 0x1572b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1572b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1572b4:
    // 0x1572b4: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x1572b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
label_1572b8:
    // 0x1572b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1572bc:
    // 0x1572bc: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x1572bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1572c0:
    // 0x1572c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1572c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1572c4:
    // 0x1572c4: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
label_1572c8:
    if (ctx->pc == 0x1572C8u) {
        ctx->pc = 0x1572C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572C4u;
        // 0x1572c8: 0x3c040080  lui         $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572CCu;
        goto label_1572cc;
    }
    ctx->pc = 0x1572C4u;
    {
        const bool branch_taken_0x1572c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1572C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572C4u;
        // 0x1572c8: 0x3c040080  lui         $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572c4) {
            ctx->pc = 0x157640u;
            goto label_157640;
        }
    }
    ctx->pc = 0x1572CCu;
label_1572cc:
    // 0x1572cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1572ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1572d0:
    // 0x1572d0: 0x24841c60  addiu       $a0, $a0, 0x1C60
    ctx->pc = 0x1572d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7264));
label_1572d4:
    // 0x1572d4: 0xc049590  jal         func_125640
label_1572d8:
    if (ctx->pc == 0x1572D8u) {
        ctx->pc = 0x1572D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572D4u;
        // 0x1572d8: 0x24063ca0  addiu       $a2, $zero, 0x3CA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572DCu;
        goto label_1572dc;
    }
    ctx->pc = 0x1572D4u;
    SET_GPR_U32(ctx, 31, 0x1572DCu);
    ctx->pc = 0x1572D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572D4u;
    // 0x1572d8: 0x24063ca0  addiu       $a2, $zero, 0x3CA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1572D4u, 0x1572DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572DCu;
label_1572dc:
    // 0x1572dc: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_1572e0:
    // 0x1572e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1572e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1572e4:
    // 0x1572e4: 0x24845900  addiu       $a0, $a0, 0x5900
    ctx->pc = 0x1572e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22784));
label_1572e8:
    // 0x1572e8: 0xc049590  jal         func_125640
label_1572ec:
    if (ctx->pc == 0x1572ECu) {
        ctx->pc = 0x1572ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572E8u;
        // 0x1572ec: 0x24063ca0  addiu       $a2, $zero, 0x3CA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572F0u;
        goto label_1572f0;
    }
    ctx->pc = 0x1572E8u;
    SET_GPR_U32(ctx, 31, 0x1572F0u);
    ctx->pc = 0x1572ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572E8u;
    // 0x1572ec: 0x24063ca0  addiu       $a2, $zero, 0x3CA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1572E8u, 0x1572F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572F0u;
label_1572f0:
    // 0x1572f0: 0x93828a54  lbu         $v0, -0x75AC($gp)
    ctx->pc = 0x1572f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
label_1572f4:
    // 0x1572f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1572f8:
    if (ctx->pc == 0x1572F8u) {
        ctx->pc = 0x1572FCu;
        goto label_1572fc;
    }
    ctx->pc = 0x1572F4u;
    {
        const bool branch_taken_0x1572f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572f4) {
            ctx->pc = 0x157310u;
            goto label_157310;
        }
    }
    ctx->pc = 0x1572FCu;
label_1572fc:
    // 0x1572fc: 0x93828a55  lbu         $v0, -0x75AB($gp)
    ctx->pc = 0x1572fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
label_157300:
    // 0x157300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_157304:
    if (ctx->pc == 0x157304u) {
        ctx->pc = 0x157304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157300u;
        // 0x157304: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157308u;
        goto label_157308;
    }
    ctx->pc = 0x157300u;
    {
        const bool branch_taken_0x157300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157300u;
        // 0x157304: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157300) {
            ctx->pc = 0x157310u;
            goto label_157310;
        }
    }
    ctx->pc = 0x157308u;
label_157308:
    // 0x157308: 0xa3828a54  sb          $v0, -0x75AC($gp)
    ctx->pc = 0x157308u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
label_15730c:
    // 0x15730c: 0x0  nop
    ctx->pc = 0x15730cu;
    // NOP
label_157310:
    // 0x157310: 0xc0d8e48  jal         func_363920
label_157314:
    if (ctx->pc == 0x157314u) {
        ctx->pc = 0x157314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157310u;
        // 0x157314: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157318u;
        goto label_157318;
    }
    ctx->pc = 0x157310u;
    SET_GPR_U32(ctx, 31, 0x157318u);
    ctx->pc = 0x157314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157310u;
    // 0x157314: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363920u, 0x157310u, 0x157318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157318u;
label_157318:
    // 0x157318: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15731c:
    if (ctx->pc == 0x15731Cu) {
        ctx->pc = 0x157320u;
        goto label_157320;
    }
    ctx->pc = 0x157318u;
    {
        const bool branch_taken_0x157318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157318) {
            ctx->pc = 0x157340u;
            goto label_157340;
        }
    }
    ctx->pc = 0x157320u;
label_157320:
    // 0x157320: 0x93858a55  lbu         $a1, -0x75AB($gp)
    ctx->pc = 0x157320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
label_157324:
    // 0x157324: 0xc0e0f10  jal         func_383C40
label_157328:
    if (ctx->pc == 0x157328u) {
        ctx->pc = 0x157328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157324u;
        // 0x157328: 0x93848a54  lbu         $a0, -0x75AC($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15732Cu;
        goto label_15732c;
    }
    ctx->pc = 0x157324u;
    SET_GPR_U32(ctx, 31, 0x15732Cu);
    ctx->pc = 0x157328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157324u;
    // 0x157328: 0x93848a54  lbu         $a0, -0x75AC($gp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C40u, 0x157324u, 0x15732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15732Cu;
label_15732c:
    // 0x15732c: 0xc0d27e8  jal         func_349FA0
label_157330:
    if (ctx->pc == 0x157330u) {
        ctx->pc = 0x157334u;
        goto label_157334;
    }
    ctx->pc = 0x15732Cu;
    SET_GPR_U32(ctx, 31, 0x157334u);
    ctx->pc = 0x349FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FA0u, 0x15732Cu, 0x157334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157334u;
label_157334:
    // 0x157334: 0xc0d2800  jal         func_34A000
label_157338:
    if (ctx->pc == 0x157338u) {
        ctx->pc = 0x15733Cu;
        goto label_15733c;
    }
    ctx->pc = 0x157334u;
    SET_GPR_U32(ctx, 31, 0x15733Cu);
    ctx->pc = 0x34A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A000u, 0x157334u, 0x15733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15733Cu;
label_15733c:
    // 0x15733c: 0x0  nop
    ctx->pc = 0x15733cu;
    // NOP
label_157340:
    // 0x157340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157344:
    // 0x157344: 0x27928a54  addiu       $s2, $gp, -0x75AC
    ctx->pc = 0x157344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
label_157348:
    // 0x157348: 0x27918a5c  addiu       $s1, $gp, -0x75A4
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937180));
label_15734c:
    // 0x15734c: 0x0  nop
    ctx->pc = 0x15734cu;
    // NOP
label_157350:
    // 0x157350: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x157350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_157354:
    // 0x157354: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_157358:
    if (ctx->pc == 0x157358u) {
        ctx->pc = 0x15735Cu;
        goto label_15735c;
    }
    ctx->pc = 0x157354u;
    {
        const bool branch_taken_0x157354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157354) {
            ctx->pc = 0x157368u;
            goto label_157368;
        }
    }
    ctx->pc = 0x15735Cu;
label_15735c:
    // 0x15735c: 0xc0d25d0  jal         func_349740
label_157360:
    if (ctx->pc == 0x157360u) {
        ctx->pc = 0x157360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15735Cu;
        // 0x157360: 0x82250000  lb          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157364u;
        goto label_157364;
    }
    ctx->pc = 0x15735Cu;
    SET_GPR_U32(ctx, 31, 0x157364u);
    ctx->pc = 0x157360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15735Cu;
    // 0x157360: 0x82250000  lb          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349740u, 0x15735Cu, 0x157364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157364u;
label_157364:
    // 0x157364: 0x0  nop
    ctx->pc = 0x157364u;
    // NOP
label_157368:
    // 0x157368: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x157368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15736c:
    // 0x15736c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x15736cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_157370:
    // 0x157370: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x157370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157374:
    // 0x157374: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_157378:
    if (ctx->pc == 0x157378u) {
        ctx->pc = 0x157378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157374u;
        // 0x157378: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15737Cu;
        goto label_15737c;
    }
    ctx->pc = 0x157374u;
    {
        const bool branch_taken_0x157374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157374u;
        // 0x157378: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157374) {
            ctx->pc = 0x157350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157350;
        }
    }
    ctx->pc = 0x15737Cu;
label_15737c:
    // 0x15737c: 0x3c140080  lui         $s4, 0x80
    ctx->pc = 0x15737cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)128 << 16));
label_157380:
    // 0x157380: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x157380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157384:
    // 0x157384: 0x279e8a54  addiu       $fp, $gp, -0x75AC
    ctx->pc = 0x157384u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
label_157388:
    // 0x157388: 0x26941c60  addiu       $s4, $s4, 0x1C60
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7264));
label_15738c:
    // 0x15738c: 0x27938060  addiu       $s3, $gp, -0x7FA0
    ctx->pc = 0x15738cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_157390:
    // 0x157390: 0x27928a64  addiu       $s2, $gp, -0x759C
    ctx->pc = 0x157390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937188));
label_157394:
    // 0x157394: 0x27968a70  addiu       $s6, $gp, -0x7590
    ctx->pc = 0x157394u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937200));
label_157398:
    // 0x157398: 0x279185f8  addiu       $s1, $gp, -0x7A08
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936056));
label_15739c:
    // 0x15739c: 0x27978a78  addiu       $s7, $gp, -0x7588
    ctx->pc = 0x15739cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937208));
label_1573a0:
    // 0x1573a0: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x1573a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_1573a4:
    // 0x1573a4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1573a8:
    if (ctx->pc == 0x1573A8u) {
        ctx->pc = 0x1573A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573A4u;
        // 0x1573a8: 0x28410040  slti        $at, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573ACu;
        goto label_1573ac;
    }
    ctx->pc = 0x1573A4u;
    {
        const bool branch_taken_0x1573a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573A4u;
        // 0x1573a8: 0x28410040  slti        $at, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573a4) {
            ctx->pc = 0x157430u;
            goto label_157430;
        }
    }
    ctx->pc = 0x1573ACu;
label_1573ac:
    // 0x1573ac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1573b0:
    if (ctx->pc == 0x1573B0u) {
        ctx->pc = 0x1573B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573ACu;
        // 0x1573b0: 0xae740000  sw          $s4, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573B4u;
        goto label_1573b4;
    }
    ctx->pc = 0x1573ACu;
    {
        const bool branch_taken_0x1573ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573ACu;
        // 0x1573b0: 0xae740000  sw          $s4, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573ac) {
            ctx->pc = 0x1573C8u;
            goto label_1573c8;
        }
    }
    ctx->pc = 0x1573B4u;
label_1573b4:
    // 0x1573b4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1573b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1573b8:
    // 0x1573b8: 0xc0b2e68  jal         func_2CB9A0
label_1573bc:
    if (ctx->pc == 0x1573BCu) {
        ctx->pc = 0x1573BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573B8u;
        // 0x1573bc: 0x32a500ff  andi        $a1, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573C0u;
        goto label_1573c0;
    }
    ctx->pc = 0x1573B8u;
    SET_GPR_U32(ctx, 31, 0x1573C0u);
    ctx->pc = 0x1573BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1573B8u;
    // 0x1573bc: 0x32a500ff  andi        $a1, $s5, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB9A0u, 0x1573B8u, 0x1573C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1573C0u;
label_1573c0:
    // 0x1573c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1573c4:
    if (ctx->pc == 0x1573C4u) {
        ctx->pc = 0x1573C8u;
        goto label_1573c8;
    }
    ctx->pc = 0x1573C0u;
    {
        const bool branch_taken_0x1573c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1573c0) {
            ctx->pc = 0x1573E0u;
            goto label_1573e0;
        }
    }
    ctx->pc = 0x1573C8u;
label_1573c8:
    // 0x1573c8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1573c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1573cc:
    // 0x1573cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1573ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1573d0:
    // 0x1573d0: 0xc0b2ebc  jal         func_2CBAF0
label_1573d4:
    if (ctx->pc == 0x1573D4u) {
        ctx->pc = 0x1573D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573D0u;
        // 0x1573d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573D8u;
        goto label_1573d8;
    }
    ctx->pc = 0x1573D0u;
    SET_GPR_U32(ctx, 31, 0x1573D8u);
    ctx->pc = 0x1573D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1573D0u;
    // 0x1573d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x1573D0u, 0x1573D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1573D8u;
label_1573d8:
    // 0x1573d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1573d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1573dc:
    // 0x1573dc: 0x0  nop
    ctx->pc = 0x1573dcu;
    // NOP
label_1573e0:
    // 0x1573e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1573e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1573e4:
    // 0x1573e4: 0x8c22ceec  lw          $v0, -0x3114($at)
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
label_1573e8:
    // 0x1573e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1573e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1573ec:
    // 0x1573ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1573f0:
    if (ctx->pc == 0x1573F0u) {
        ctx->pc = 0x1573F4u;
        goto label_1573f4;
    }
    ctx->pc = 0x1573ECu;
    {
        const bool branch_taken_0x1573ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1573ec) {
            ctx->pc = 0x157400u;
            goto label_157400;
        }
    }
    ctx->pc = 0x1573F4u;
label_1573f4:
    // 0x1573f4: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1573f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1573f8:
    // 0x1573f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1573fc:
    // 0x1573fc: 0xac43085c  sw          $v1, 0x85C($v0)
    ctx->pc = 0x1573fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2140), GPR_U32(ctx, 3));
label_157400:
    // 0x157400: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x157400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_157404:
    // 0x157404: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x157404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157408:
    // 0x157408: 0xac430860  sw          $v1, 0x860($v0)
    ctx->pc = 0x157408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2144), GPR_U32(ctx, 3));
label_15740c:
    // 0x15740c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_157410:
    // 0x157410: 0xac430864  sw          $v1, 0x864($v0)
    ctx->pc = 0x157410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2148), GPR_U32(ctx, 3));
label_157414:
    // 0x157414: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x157414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_157418:
    // 0x157418: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x157418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_15741c:
    // 0x15741c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_157420:
    // 0x157420: 0x320f809  jalr        $t9
label_157424:
    if (ctx->pc == 0x157424u) {
        ctx->pc = 0x157428u;
        goto label_157428;
    }
    ctx->pc = 0x157420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x157428u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157420u, 0x157428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157428u;
label_157428:
    // 0x157428: 0x10000003  b           . + 4 + (0x3 << 2)
label_15742c:
    if (ctx->pc == 0x15742Cu) {
        ctx->pc = 0x157430u;
        goto label_157430;
    }
    ctx->pc = 0x157428u;
    {
        const bool branch_taken_0x157428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157428) {
            ctx->pc = 0x157438u;
            goto label_157438;
        }
    }
    ctx->pc = 0x157430u;
label_157430:
    // 0x157430: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x157430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_157434:
    // 0x157434: 0x0  nop
    ctx->pc = 0x157434u;
    // NOP
label_157438:
    // 0x157438: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15743c:
    // 0x15743c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x15743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_157440:
    // 0x157440: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x157440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_157444:
    // 0x157444: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_157448:
    if (ctx->pc == 0x157448u) {
        ctx->pc = 0x157448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157444u;
        // 0x157448: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15744Cu;
        goto label_15744c;
    }
    ctx->pc = 0x157444u;
    {
        const bool branch_taken_0x157444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157444u;
        // 0x157448: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157444) {
            ctx->pc = 0x157488u;
            goto label_157488;
        }
    }
    ctx->pc = 0x15744Cu;
label_15744c:
    // 0x15744c: 0x12a3000a  beq         $s5, $v1, . + 4 + (0xA << 2)
label_157450:
    if (ctx->pc == 0x157450u) {
        ctx->pc = 0x157454u;
        goto label_157454;
    }
    ctx->pc = 0x15744Cu;
    {
        const bool branch_taken_0x15744c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x15744c) {
            ctx->pc = 0x157478u;
            goto label_157478;
        }
    }
    ctx->pc = 0x157454u;
label_157454:
    // 0x157454: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_157458:
    if (ctx->pc == 0x157458u) {
        ctx->pc = 0x15745Cu;
        goto label_15745c;
    }
    ctx->pc = 0x157454u;
    {
        const bool branch_taken_0x157454 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x157454) {
            ctx->pc = 0x157468u;
            goto label_157468;
        }
    }
    ctx->pc = 0x15745Cu;
label_15745c:
    // 0x15745c: 0x1000000a  b           . + 4 + (0xA << 2)
label_157460:
    if (ctx->pc == 0x157460u) {
        ctx->pc = 0x157464u;
        goto label_157464;
    }
    ctx->pc = 0x15745Cu;
    {
        const bool branch_taken_0x15745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15745c) {
            ctx->pc = 0x157488u;
            goto label_157488;
        }
    }
    ctx->pc = 0x157464u;
label_157464:
    // 0x157464: 0x0  nop
    ctx->pc = 0x157464u;
    // NOP
label_157468:
    // 0x157468: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x157468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15746c:
    // 0x15746c: 0x10000006  b           . + 4 + (0x6 << 2)
label_157470:
    if (ctx->pc == 0x157470u) {
        ctx->pc = 0x157470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15746Cu;
        // 0x157470: 0xa043000a  sb          $v1, 0xA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157474u;
        goto label_157474;
    }
    ctx->pc = 0x15746Cu;
    {
        const bool branch_taken_0x15746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15746Cu;
        // 0x157470: 0xa043000a  sb          $v1, 0xA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15746c) {
            ctx->pc = 0x157488u;
            goto label_157488;
        }
    }
    ctx->pc = 0x157474u;
label_157474:
    // 0x157474: 0x0  nop
    ctx->pc = 0x157474u;
    // NOP
label_157478:
    // 0x157478: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x157478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15747c:
    // 0x15747c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_157480:
    // 0x157480: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x157480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
label_157484:
    // 0x157484: 0x0  nop
    ctx->pc = 0x157484u;
    // NOP
label_157488:
    // 0x157488: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15748c:
    // 0x15748c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x15748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_157490:
    // 0x157490: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x157490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_157494:
    // 0x157494: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_157498:
    if (ctx->pc == 0x157498u) {
        ctx->pc = 0x15749Cu;
        goto label_15749c;
    }
    ctx->pc = 0x157494u;
    {
        const bool branch_taken_0x157494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157494) {
            ctx->pc = 0x157510u;
            goto label_157510;
        }
    }
    ctx->pc = 0x15749Cu;
label_15749c:
    // 0x15749c: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x15749cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1574a0:
    // 0x1574a0: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_1574a4:
    if (ctx->pc == 0x1574A4u) {
        ctx->pc = 0x1574A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574A0u;
        // 0x1574a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574A8u;
        goto label_1574a8;
    }
    ctx->pc = 0x1574A0u;
    {
        const bool branch_taken_0x1574a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574A0u;
        // 0x1574a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574a0) {
            ctx->pc = 0x157508u;
            goto label_157508;
        }
    }
    ctx->pc = 0x1574A8u;
label_1574a8:
    // 0x1574a8: 0xc0b2ebc  jal         func_2CBAF0
label_1574ac:
    if (ctx->pc == 0x1574ACu) {
        ctx->pc = 0x1574ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574A8u;
        // 0x1574ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574B0u;
        goto label_1574b0;
    }
    ctx->pc = 0x1574A8u;
    SET_GPR_U32(ctx, 31, 0x1574B0u);
    ctx->pc = 0x1574ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574A8u;
    // 0x1574ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x1574A8u, 0x1574B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574B0u;
label_1574b0:
    // 0x1574b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1574b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1574b4:
    // 0x1574b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1574b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1574b8:
    // 0x1574b8: 0x8c22ceec  lw          $v0, -0x3114($at)
    ctx->pc = 0x1574b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
label_1574bc:
    // 0x1574bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1574bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1574c0:
    // 0x1574c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1574c4:
    if (ctx->pc == 0x1574C4u) {
        ctx->pc = 0x1574C8u;
        goto label_1574c8;
    }
    ctx->pc = 0x1574C0u;
    {
        const bool branch_taken_0x1574c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1574c0) {
            ctx->pc = 0x1574D8u;
            goto label_1574d8;
        }
    }
    ctx->pc = 0x1574C8u;
label_1574c8:
    // 0x1574c8: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x1574c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_1574cc:
    // 0x1574cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1574ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1574d0:
    // 0x1574d0: 0xac43085c  sw          $v1, 0x85C($v0)
    ctx->pc = 0x1574d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2140), GPR_U32(ctx, 3));
label_1574d4:
    // 0x1574d4: 0x0  nop
    ctx->pc = 0x1574d4u;
    // NOP
label_1574d8:
    // 0x1574d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1574d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1574dc:
    // 0x1574dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1574dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1574e0:
    // 0x1574e0: 0xac430860  sw          $v1, 0x860($v0)
    ctx->pc = 0x1574e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2144), GPR_U32(ctx, 3));
label_1574e4:
    // 0x1574e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1574e8:
    // 0x1574e8: 0xac430864  sw          $v1, 0x864($v0)
    ctx->pc = 0x1574e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2148), GPR_U32(ctx, 3));
label_1574ec:
    // 0x1574ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1574ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1574f0:
    // 0x1574f0: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x1574f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_1574f4:
    // 0x1574f4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1574f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1574f8:
    // 0x1574f8: 0x320f809  jalr        $t9
label_1574fc:
    if (ctx->pc == 0x1574FCu) {
        ctx->pc = 0x157500u;
        goto label_157500;
    }
    ctx->pc = 0x1574F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x157500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574F8u, 0x157500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157500u;
label_157500:
    // 0x157500: 0x10000003  b           . + 4 + (0x3 << 2)
label_157504:
    if (ctx->pc == 0x157504u) {
        ctx->pc = 0x157508u;
        goto label_157508;
    }
    ctx->pc = 0x157500u;
    {
        const bool branch_taken_0x157500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157500) {
            ctx->pc = 0x157510u;
            goto label_157510;
        }
    }
    ctx->pc = 0x157508u;
label_157508:
    // 0x157508: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x157508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_15750c:
    // 0x15750c: 0x0  nop
    ctx->pc = 0x15750cu;
    // NOP
label_157510:
    // 0x157510: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x157510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_157514:
    // 0x157514: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x157514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_157518:
    // 0x157518: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x157518u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_15751c:
    // 0x15751c: 0x26943ca0  addiu       $s4, $s4, 0x3CA0
    ctx->pc = 0x15751cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15520));
label_157520:
    // 0x157520: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x157520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_157524:
    // 0x157524: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x157524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157528:
    // 0x157528: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x157528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_15752c:
    // 0x15752c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15752cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_157530:
    // 0x157530: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
label_157534:
    if (ctx->pc == 0x157534u) {
        ctx->pc = 0x157534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157530u;
        // 0x157534: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157538u;
        goto label_157538;
    }
    ctx->pc = 0x157530u;
    {
        const bool branch_taken_0x157530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157530u;
        // 0x157534: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157530) {
            ctx->pc = 0x1573A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1573a0;
        }
    }
    ctx->pc = 0x157538u;
label_157538:
    // 0x157538: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15753c:
    // 0x15753c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x15753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_157540:
    // 0x157540: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x157540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_157544:
    // 0x157544: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_157548:
    if (ctx->pc == 0x157548u) {
        ctx->pc = 0x15754Cu;
        goto label_15754c;
    }
    ctx->pc = 0x157544u;
    {
        const bool branch_taken_0x157544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157544) {
            ctx->pc = 0x157648u;
            goto label_157648;
        }
    }
    ctx->pc = 0x15754Cu;
label_15754c:
    // 0x15754c: 0x8f888ba8  lw          $t0, -0x7458($gp)
    ctx->pc = 0x15754cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157550:
    // 0x157550: 0x240905dc  addiu       $t1, $zero, 0x5DC
    ctx->pc = 0x157550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_157554:
    // 0x157554: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x157554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_157558:
    // 0x157558: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x157558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
label_15755c:
    // 0x15755c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x15755cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_157560:
    // 0x157560: 0x24070500  addiu       $a3, $zero, 0x500
    ctx->pc = 0x157560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_157564:
    // 0x157564: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x157564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157568:
    // 0x157568: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x157568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_15756c:
    // 0x15756c: 0xa5090002  sh          $t1, 0x2($t0)
    ctx->pc = 0x15756cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 9));
label_157570:
    // 0x157570: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157574:
    // 0x157574: 0xa4490066  sh          $t1, 0x66($v0)
    ctx->pc = 0x157574u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 102), (uint16_t)GPR_U32(ctx, 9));
label_157578:
    // 0x157578: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x157578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_15757c:
    // 0x15757c: 0xa4490000  sh          $t1, 0x0($v0)
    ctx->pc = 0x15757cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
label_157580:
    // 0x157580: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x157580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157584:
    // 0x157584: 0xa4490064  sh          $t1, 0x64($v0)
    ctx->pc = 0x157584u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 9));
label_157588:
    // 0x157588: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x157588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_15758c:
    // 0x15758c: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x15758cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
label_157590:
    // 0x157590: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x157590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157594:
    // 0x157594: 0xa440006a  sh          $zero, 0x6A($v0)
    ctx->pc = 0x157594u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 106), (uint16_t)GPR_U32(ctx, 0));
label_157598:
    // 0x157598: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x157598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_15759c:
    // 0x15759c: 0xa447000a  sh          $a3, 0xA($v0)
    ctx->pc = 0x15759cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 7));
label_1575a0:
    // 0x1575a0: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x1575a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1575a4:
    // 0x1575a4: 0xa447006e  sh          $a3, 0x6E($v0)
    ctx->pc = 0x1575a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 110), (uint16_t)GPR_U32(ctx, 7));
label_1575a8:
    // 0x1575a8: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1575ac:
    // 0x1575ac: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x1575acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_1575b0:
    // 0x1575b0: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x1575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1575b4:
    // 0x1575b4: 0xac460088  sw          $a2, 0x88($v0)
    ctx->pc = 0x1575b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 6));
label_1575b8:
    // 0x1575b8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1575bc:
    // 0x1575bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1575bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1575c0:
    // 0x1575c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1575c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1575c4:
    // 0x1575c4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1575c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_1575c8:
    // 0x1575c8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x1575c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1575cc:
    // 0x1575cc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1575ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1575d0:
    // 0x1575d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1575d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1575d4:
    // 0x1575d4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x1575d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_1575d8:
    // 0x1575d8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x1575d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1575dc:
    // 0x1575dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1575dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1575e0:
    // 0x1575e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1575e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1575e4:
    // 0x1575e4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1575e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_1575e8:
    // 0x1575e8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x1575e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1575ec:
    // 0x1575ec: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1575ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1575f0:
    // 0x1575f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1575f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1575f4:
    // 0x1575f4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x1575f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_1575f8:
    // 0x1575f8: 0x93828a54  lbu         $v0, -0x75AC($gp)
    ctx->pc = 0x1575f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
label_1575fc:
    // 0x1575fc: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x1575fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
label_157600:
    // 0x157600: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_157604:
    if (ctx->pc == 0x157604u) {
        ctx->pc = 0x157608u;
        goto label_157608;
    }
    ctx->pc = 0x157600u;
    {
        const bool branch_taken_0x157600 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x157600) {
            ctx->pc = 0x157618u;
            goto label_157618;
        }
    }
    ctx->pc = 0x157608u;
label_157608:
    // 0x157608: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x157608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
label_15760c:
    // 0x15760c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_157610:
    if (ctx->pc == 0x157610u) {
        ctx->pc = 0x157614u;
        goto label_157614;
    }
    ctx->pc = 0x15760Cu;
    {
        const bool branch_taken_0x15760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15760c) {
            ctx->pc = 0x157618u;
            goto label_157618;
        }
    }
    ctx->pc = 0x157614u;
label_157614:
    // 0x157614: 0xac4029cc  sw          $zero, 0x29CC($v0)
    ctx->pc = 0x157614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10700), GPR_U32(ctx, 0));
label_157618:
    // 0x157618: 0x93828a55  lbu         $v0, -0x75AB($gp)
    ctx->pc = 0x157618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
label_15761c:
    // 0x15761c: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x15761cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
label_157620:
    // 0x157620: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_157624:
    if (ctx->pc == 0x157624u) {
        ctx->pc = 0x157628u;
        goto label_157628;
    }
    ctx->pc = 0x157620u;
    {
        const bool branch_taken_0x157620 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x157620) {
            ctx->pc = 0x157648u;
            goto label_157648;
        }
    }
    ctx->pc = 0x157628u;
label_157628:
    // 0x157628: 0x8f828064  lw          $v0, -0x7F9C($gp)
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
label_15762c:
    // 0x15762c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_157630:
    if (ctx->pc == 0x157630u) {
        ctx->pc = 0x157634u;
        goto label_157634;
    }
    ctx->pc = 0x15762Cu;
    {
        const bool branch_taken_0x15762c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15762c) {
            ctx->pc = 0x157648u;
            goto label_157648;
        }
    }
    ctx->pc = 0x157634u;
label_157634:
    // 0x157634: 0x10000004  b           . + 4 + (0x4 << 2)
label_157638:
    if (ctx->pc == 0x157638u) {
        ctx->pc = 0x157638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157634u;
        // 0x157638: 0xac4029cc  sw          $zero, 0x29CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15763Cu;
        goto label_15763c;
    }
    ctx->pc = 0x157634u;
    {
        const bool branch_taken_0x157634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157634u;
        // 0x157638: 0xac4029cc  sw          $zero, 0x29CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157634) {
            ctx->pc = 0x157648u;
            goto label_157648;
        }
    }
    ctx->pc = 0x15763Cu;
label_15763c:
    // 0x15763c: 0x0  nop
    ctx->pc = 0x15763cu;
    // NOP
label_157640:
    // 0x157640: 0xaf808060  sw          $zero, -0x7FA0($gp)
    ctx->pc = 0x157640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934624), GPR_U32(ctx, 0));
label_157644:
    // 0x157644: 0xaf808064  sw          $zero, -0x7F9C($gp)
    ctx->pc = 0x157644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934628), GPR_U32(ctx, 0));
label_157648:
    // 0x157648: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15764c:
    // 0x15764c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x15764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_157650:
    // 0x157650: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x157650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_157654:
    // 0x157654: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_157658:
    if (ctx->pc == 0x157658u) {
        ctx->pc = 0x15765Cu;
        goto label_15765c;
    }
    ctx->pc = 0x157654u;
    {
        const bool branch_taken_0x157654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157654) {
            ctx->pc = 0x1576D0u;
            goto label_1576d0;
        }
    }
    ctx->pc = 0x15765Cu;
label_15765c:
    // 0x15765c: 0xc0a72d8  jal         func_29CB60
label_157660:
    if (ctx->pc == 0x157660u) {
        ctx->pc = 0x157660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15765Cu;
        // 0x157660: 0x8f848060  lw          $a0, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157664u;
        goto label_157664;
    }
    ctx->pc = 0x15765Cu;
    SET_GPR_U32(ctx, 31, 0x157664u);
    ctx->pc = 0x157660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15765Cu;
    // 0x157660: 0x8f848060  lw          $a0, -0x7FA0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x15765Cu, 0x157664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157664u;
label_157664:
    // 0x157664: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x157664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
label_157668:
    // 0x157668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15766c:
    // 0x15766c: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x15766cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
label_157670:
    // 0x157670: 0xc0a72c4  jal         func_29CB10
label_157674:
    if (ctx->pc == 0x157674u) {
        ctx->pc = 0x157674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157670u;
        // 0x157674: 0x8f848060  lw          $a0, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157678u;
        goto label_157678;
    }
    ctx->pc = 0x157670u;
    SET_GPR_U32(ctx, 31, 0x157678u);
    ctx->pc = 0x157674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157670u;
    // 0x157674: 0x8f848060  lw          $a0, -0x7FA0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB10u, 0x157670u, 0x157678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157678u;
label_157678:
    // 0x157678: 0xc0a72d8  jal         func_29CB60
label_15767c:
    if (ctx->pc == 0x15767Cu) {
        ctx->pc = 0x15767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157678u;
        // 0x15767c: 0x8f8485f8  lw          $a0, -0x7A08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157680u;
        goto label_157680;
    }
    ctx->pc = 0x157678u;
    SET_GPR_U32(ctx, 31, 0x157680u);
    ctx->pc = 0x15767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157678u;
    // 0x15767c: 0x8f8485f8  lw          $a0, -0x7A08($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x157678u, 0x157680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157680u;
label_157680:
    // 0x157680: 0x8f8285f8  lw          $v0, -0x7A08($gp)
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_157684:
    // 0x157684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157688:
    // 0x157688: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x157688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
label_15768c:
    // 0x15768c: 0xc0a72c4  jal         func_29CB10
label_157690:
    if (ctx->pc == 0x157690u) {
        ctx->pc = 0x157690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15768Cu;
        // 0x157690: 0x8f8485f8  lw          $a0, -0x7A08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157694u;
        goto label_157694;
    }
    ctx->pc = 0x15768Cu;
    SET_GPR_U32(ctx, 31, 0x157694u);
    ctx->pc = 0x157690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15768Cu;
    // 0x157690: 0x8f8485f8  lw          $a0, -0x7A08($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB10u, 0x15768Cu, 0x157694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157694u;
label_157694:
    // 0x157694: 0xc0a72d8  jal         func_29CB60
label_157698:
    if (ctx->pc == 0x157698u) {
        ctx->pc = 0x157698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157694u;
        // 0x157698: 0x8f848064  lw          $a0, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15769Cu;
        goto label_15769c;
    }
    ctx->pc = 0x157694u;
    SET_GPR_U32(ctx, 31, 0x15769Cu);
    ctx->pc = 0x157698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157694u;
    // 0x157698: 0x8f848064  lw          $a0, -0x7F9C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x157694u, 0x15769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15769Cu;
label_15769c:
    // 0x15769c: 0x8f828064  lw          $v0, -0x7F9C($gp)
    ctx->pc = 0x15769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
label_1576a0:
    // 0x1576a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1576a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1576a4:
    // 0x1576a4: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x1576a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
label_1576a8:
    // 0x1576a8: 0xc0a72c4  jal         func_29CB10
label_1576ac:
    if (ctx->pc == 0x1576ACu) {
        ctx->pc = 0x1576ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576A8u;
        // 0x1576ac: 0x8f848064  lw          $a0, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576B0u;
        goto label_1576b0;
    }
    ctx->pc = 0x1576A8u;
    SET_GPR_U32(ctx, 31, 0x1576B0u);
    ctx->pc = 0x1576ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576A8u;
    // 0x1576ac: 0x8f848064  lw          $a0, -0x7F9C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB10u, 0x1576A8u, 0x1576B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576B0u;
label_1576b0:
    // 0x1576b0: 0xc0a72d8  jal         func_29CB60
label_1576b4:
    if (ctx->pc == 0x1576B4u) {
        ctx->pc = 0x1576B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B0u;
        // 0x1576b4: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576B8u;
        goto label_1576b8;
    }
    ctx->pc = 0x1576B0u;
    SET_GPR_U32(ctx, 31, 0x1576B8u);
    ctx->pc = 0x1576B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576B0u;
    // 0x1576b4: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x1576B0u, 0x1576B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576B8u;
label_1576b8:
    // 0x1576b8: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x1576b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_1576bc:
    // 0x1576bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1576bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1576c0:
    // 0x1576c0: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x1576c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
label_1576c4:
    // 0x1576c4: 0xc0a72c4  jal         func_29CB10
label_1576c8:
    if (ctx->pc == 0x1576C8u) {
        ctx->pc = 0x1576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576C4u;
        // 0x1576c8: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576CCu;
        goto label_1576cc;
    }
    ctx->pc = 0x1576C4u;
    SET_GPR_U32(ctx, 31, 0x1576CCu);
    ctx->pc = 0x1576C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576C4u;
    // 0x1576c8: 0x8f8485fc  lw          $a0, -0x7A04($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB10u, 0x1576C4u, 0x1576CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576CCu;
label_1576cc:
    // 0x1576cc: 0x0  nop
    ctx->pc = 0x1576ccu;
    // NOP
label_1576d0:
    // 0x1576d0: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x1576d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
label_1576d4:
    // 0x1576d4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1576d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_1576d8:
    // 0x1576d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1576d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1576dc:
    // 0x1576dc: 0xc0b324c  jal         func_2CC930
label_1576e0:
    if (ctx->pc == 0x1576E0u) {
        ctx->pc = 0x1576E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576DCu;
        // 0x1576e0: 0xac2295b4  sw          $v0, -0x6A4C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576E4u;
        goto label_1576e4;
    }
    ctx->pc = 0x1576DCu;
    SET_GPR_U32(ctx, 31, 0x1576E4u);
    ctx->pc = 0x1576E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576DCu;
    // 0x1576e0: 0xac2295b4  sw          $v0, -0x6A4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC930u, 0x1576DCu, 0x1576E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576E4u;
label_1576e4:
    // 0x1576e4: 0xc0d9044  jal         func_364110
label_1576e8:
    if (ctx->pc == 0x1576E8u) {
        ctx->pc = 0x1576ECu;
        goto label_1576ec;
    }
    ctx->pc = 0x1576E4u;
    SET_GPR_U32(ctx, 31, 0x1576ECu);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x1576E4u, 0x1576ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576ECu;
label_1576ec:
    // 0x1576ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1576ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1576f0:
    // 0x1576f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1576f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1576f4:
    // 0x1576f4: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1576f8:
    if (ctx->pc == 0x1576F8u) {
        ctx->pc = 0x1576FCu;
        goto label_1576fc;
    }
    ctx->pc = 0x1576F4u;
    {
        const bool branch_taken_0x1576f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1576f4) {
            ctx->pc = 0x157758u;
            goto label_157758;
        }
    }
    ctx->pc = 0x1576FCu;
label_1576fc:
    // 0x1576fc: 0x8f868ba8  lw          $a2, -0x7458($gp)
    ctx->pc = 0x1576fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157700:
    // 0x157700: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x157700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_157704:
    // 0x157704: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x157704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157708:
    // 0x157708: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_15770c:
    // 0x15770c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x15770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_157710:
    // 0x157710: 0x8cc50088  lw          $a1, 0x88($a2)
    ctx->pc = 0x157710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
label_157714:
    // 0x157714: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x157714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_157718:
    // 0x157718: 0xacc30088  sw          $v1, 0x88($a2)
    ctx->pc = 0x157718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 3));
label_15771c:
    // 0x15771c: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x15771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157720:
    // 0x157720: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x157720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_157724:
    // 0x157724: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x157724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157728:
    // 0x157728: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x157728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
label_15772c:
    // 0x15772c: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157730:
    // 0x157730: 0xac6400ec  sw          $a0, 0xEC($v1)
    ctx->pc = 0x157730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 4));
label_157734:
    // 0x157734: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x157734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157738:
    // 0x157738: 0xac640150  sw          $a0, 0x150($v1)
    ctx->pc = 0x157738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 4));
label_15773c:
    // 0x15773c: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x15773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_157740:
    // 0x157740: 0xac6401b4  sw          $a0, 0x1B4($v1)
    ctx->pc = 0x157740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 436), GPR_U32(ctx, 4));
label_157744:
    // 0x157744: 0x8c23cee8  lw          $v1, -0x3118($at)
    ctx->pc = 0x157744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954728)));
label_157748:
    // 0x157748: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x157748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_15774c:
    // 0x15774c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15774cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157750:
    // 0x157750: 0xac22cee8  sw          $v0, -0x3118($at)
    ctx->pc = 0x157750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954728), GPR_U32(ctx, 2));
label_157754:
    // 0x157754: 0x0  nop
    ctx->pc = 0x157754u;
    // NOP
label_157758:
    // 0x157758: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_15775c:
    // 0x15775c: 0xc054244  jal         func_150910
label_157760:
    if (ctx->pc == 0x157760u) {
        ctx->pc = 0x157760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15775Cu;
        // 0x157760: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157764u;
        goto label_157764;
    }
    ctx->pc = 0x15775Cu;
    SET_GPR_U32(ctx, 31, 0x157764u);
    ctx->pc = 0x157760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15775Cu;
    // 0x157760: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150910u, 0x15775Cu, 0x157764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157764u;
label_157764:
    // 0x157764: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x157764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_157768:
    // 0x157768: 0xc051544  jal         func_145510
label_15776c:
    if (ctx->pc == 0x15776Cu) {
        ctx->pc = 0x15776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157768u;
        // 0x15776c: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157770u;
        goto label_157770;
    }
    ctx->pc = 0x157768u;
    SET_GPR_U32(ctx, 31, 0x157770u);
    ctx->pc = 0x15776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157768u;
    // 0x15776c: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145510u, 0x157768u, 0x157770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157770u;
label_157770:
    // 0x157770: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x157770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_157774:
    // 0x157774: 0xc0d01b0  jal         func_3406C0
label_157778:
    if (ctx->pc == 0x157778u) {
        ctx->pc = 0x157778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157774u;
        // 0x157778: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15777Cu;
        goto label_15777c;
    }
    ctx->pc = 0x157774u;
    SET_GPR_U32(ctx, 31, 0x15777Cu);
    ctx->pc = 0x157778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157774u;
    // 0x157778: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3406C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3406C0u, 0x157774u, 0x15777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15777Cu;
label_15777c:
    // 0x15777c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15777cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_157780:
    // 0x157780: 0xc0564d0  jal         func_159340
label_157784:
    if (ctx->pc == 0x157784u) {
        ctx->pc = 0x157784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157780u;
        // 0x157784: 0x94246ac4  lhu         $a0, 0x6AC4($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157788u;
        goto label_157788;
    }
    ctx->pc = 0x157780u;
    SET_GPR_U32(ctx, 31, 0x157788u);
    ctx->pc = 0x157784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157780u;
    // 0x157784: 0x94246ac4  lhu         $a0, 0x6AC4($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159340u, 0x157780u, 0x157788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157788u;
label_157788:
    // 0x157788: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x157788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_15778c:
    // 0x15778c: 0x24020ff7  addiu       $v0, $zero, 0xFF7
    ctx->pc = 0x15778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
label_157790:
    // 0x157790: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x157790u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_157794:
    // 0x157794: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_157798:
    if (ctx->pc == 0x157798u) {
        ctx->pc = 0x157798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157794u;
        // 0x157798: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15779Cu;
        goto label_15779c;
    }
    ctx->pc = 0x157794u;
    {
        const bool branch_taken_0x157794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x157798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157794u;
        // 0x157798: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157794) {
            ctx->pc = 0x1577B0u;
            goto label_1577b0;
        }
    }
    ctx->pc = 0x15779Cu;
label_15779c:
    // 0x15779c: 0xc064324  jal         func_190C90
label_1577a0:
    if (ctx->pc == 0x1577A0u) {
        ctx->pc = 0x1577A4u;
        goto label_1577a4;
    }
    ctx->pc = 0x15779Cu;
    SET_GPR_U32(ctx, 31, 0x1577A4u);
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x15779Cu, 0x1577A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577A4u;
label_1577a4:
    // 0x1577a4: 0xc06462c  jal         func_1918B0
label_1577a8:
    if (ctx->pc == 0x1577A8u) {
        ctx->pc = 0x1577A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577A4u;
        // 0x1577a8: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577ACu;
        goto label_1577ac;
    }
    ctx->pc = 0x1577A4u;
    SET_GPR_U32(ctx, 31, 0x1577ACu);
    ctx->pc = 0x1577A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577A4u;
    // 0x1577a8: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1577A4u, 0x1577ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577ACu;
label_1577ac:
    // 0x1577ac: 0x0  nop
    ctx->pc = 0x1577acu;
    // NOP
label_1577b0:
    // 0x1577b0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x1577b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_1577b4:
    // 0x1577b4: 0xc0e361c  jal         func_38D870
label_1577b8:
    if (ctx->pc == 0x1577B8u) {
        ctx->pc = 0x1577B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577B4u;
        // 0x1577b8: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577BCu;
        goto label_1577bc;
    }
    ctx->pc = 0x1577B4u;
    SET_GPR_U32(ctx, 31, 0x1577BCu);
    ctx->pc = 0x1577B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577B4u;
    // 0x1577b8: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D870u, 0x1577B4u, 0x1577BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577BCu;
label_1577bc:
    // 0x1577bc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1577bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1577c0:
    // 0x1577c0: 0x24020ff7  addiu       $v0, $zero, 0xFF7
    ctx->pc = 0x1577c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
label_1577c4:
    // 0x1577c4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1577c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1577c8:
    // 0x1577c8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1577cc:
    if (ctx->pc == 0x1577CCu) {
        ctx->pc = 0x1577CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577C8u;
        // 0x1577cc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577D0u;
        goto label_1577d0;
    }
    ctx->pc = 0x1577C8u;
    {
        const bool branch_taken_0x1577c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1577CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577C8u;
        // 0x1577cc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577c8) {
            ctx->pc = 0x1577F8u;
            goto label_1577f8;
        }
    }
    ctx->pc = 0x1577D0u;
label_1577d0:
    // 0x1577d0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_1577d4:
    // 0x1577d4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x1577d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_1577d8:
    // 0x1577d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1577dc:
    // 0x1577dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1577dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1577e0:
    // 0x1577e0: 0xc064158  jal         func_190560
label_1577e4:
    if (ctx->pc == 0x1577E4u) {
        ctx->pc = 0x1577E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577E0u;
        // 0x1577e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577E8u;
        goto label_1577e8;
    }
    ctx->pc = 0x1577E0u;
    SET_GPR_U32(ctx, 31, 0x1577E8u);
    ctx->pc = 0x1577E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577E0u;
    // 0x1577e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190560u, 0x1577E0u, 0x1577E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577E8u;
label_1577e8:
    // 0x1577e8: 0xc064324  jal         func_190C90
label_1577ec:
    if (ctx->pc == 0x1577ECu) {
        ctx->pc = 0x1577ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577E8u;
        // 0x1577ec: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577F0u;
        goto label_1577f0;
    }
    ctx->pc = 0x1577E8u;
    SET_GPR_U32(ctx, 31, 0x1577F0u);
    ctx->pc = 0x1577ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577E8u;
    // 0x1577ec: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1577E8u, 0x1577F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577F0u;
label_1577f0:
    // 0x1577f0: 0xc06462c  jal         func_1918B0
label_1577f4:
    if (ctx->pc == 0x1577F4u) {
        ctx->pc = 0x1577F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577F0u;
        // 0x1577f4: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577F8u;
        goto label_1577f8;
    }
    ctx->pc = 0x1577F0u;
    SET_GPR_U32(ctx, 31, 0x1577F8u);
    ctx->pc = 0x1577F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577F0u;
    // 0x1577f4: 0x26046840  addiu       $a0, $s0, 0x6840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1577F0u, 0x1577F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577F8u;
label_1577f8:
    // 0x1577f8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
label_1577fc:
    // 0x1577fc: 0xc061cf0  jal         func_1873C0
label_157800:
    if (ctx->pc == 0x157800u) {
        ctx->pc = 0x157800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577FCu;
        // 0x157800: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157804u;
        goto label_157804;
    }
    ctx->pc = 0x1577FCu;
    SET_GPR_U32(ctx, 31, 0x157804u);
    ctx->pc = 0x157800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577FCu;
    // 0x157800: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873C0u, 0x1577FCu, 0x157804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157804u;
label_157804:
    // 0x157804: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x157804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_157808:
    // 0x157808: 0xc05d640  jal         func_175900
label_15780c:
    if (ctx->pc == 0x15780Cu) {
        ctx->pc = 0x15780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157808u;
        // 0x15780c: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157810u;
        goto label_157810;
    }
    ctx->pc = 0x157808u;
    SET_GPR_U32(ctx, 31, 0x157810u);
    ctx->pc = 0x15780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157808u;
    // 0x15780c: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175900u, 0x157808u, 0x157810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157810u;
label_157810:
    // 0x157810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157814:
    // 0x157814: 0x3c026fff  lui         $v0, 0x6FFF
    ctx->pc = 0x157814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28671 << 16));
label_157818:
    // 0x157818: 0xac20f248  sw          $zero, -0xDB8($at)
    ctx->pc = 0x157818u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963784), GPR_U32(ctx, 0));
label_15781c:
    // 0x15781c: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x15781cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_157820:
    // 0x157820: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157824:
    // 0x157824: 0x3c02100f  lui         $v0, 0x100F
    ctx->pc = 0x157824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4111 << 16));
label_157828:
    // 0x157828: 0xa020cea9  sb          $zero, -0x3157($at)
    ctx->pc = 0x157828u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954665), (uint8_t)GPR_U32(ctx, 0));
label_15782c:
    // 0x15782c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x15782cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_157830:
    // 0x157830: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157834:
    // 0x157834: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x157834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_157838:
    // 0x157838: 0x8c2bcebc  lw          $t3, -0x3144($at)
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_15783c:
    // 0x15783c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x15783cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_157840:
    // 0x157840: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x157840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_157844:
    // 0x157844: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157848:
    // 0x157848: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x157848u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
label_15784c:
    // 0x15784c: 0x8c25cec4  lw          $a1, -0x313C($at)
    ctx->pc = 0x15784cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
label_157850:
    // 0x157850: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157854:
    // 0x157854: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x157854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_157858:
    // 0x157858: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x157858u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_15785c:
    // 0x15785c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157860:
    // 0x157860: 0x8c29cecc  lw          $t1, -0x3134($at)
    ctx->pc = 0x157860u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954700)));
label_157864:
    // 0x157864: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157868:
    // 0x157868: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x157868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954704)));
label_15786c:
    // 0x15786c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157870:
    // 0x157870: 0x8c27ced8  lw          $a3, -0x3128($at)
    ctx->pc = 0x157870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
label_157874:
    // 0x157874: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157878:
    // 0x157878: 0x8c26cedc  lw          $a2, -0x3124($at)
    ctx->pc = 0x157878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
label_15787c:
    // 0x15787c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15787cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157880:
    // 0x157880: 0xac2bcebc  sw          $t3, -0x3144($at)
    ctx->pc = 0x157880u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 11));
label_157884:
    // 0x157884: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157888:
    // 0x157888: 0xac23cec4  sw          $v1, -0x313C($at)
    ctx->pc = 0x157888u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 3));
label_15788c:
    // 0x15788c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15788cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157890:
    // 0x157890: 0x8c2bcec4  lw          $t3, -0x313C($at)
    ctx->pc = 0x157890u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
label_157894:
    // 0x157894: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157898:
    // 0x157898: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x157898u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_15789c:
    // 0x15789c: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x15789cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_1578a0:
    // 0x1578a0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1578a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_1578a4:
    // 0x1578a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1578a8:
    // 0x1578a8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1578a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1578ac:
    // 0x1578ac: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1578acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_1578b0:
    // 0x1578b0: 0x1092825  or          $a1, $t0, $t1
    ctx->pc = 0x1578b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1578b4:
    // 0x1578b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1578b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1578b8:
    // 0x1578b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1578b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1578bc:
    // 0x1578bc: 0xe51825  or          $v1, $a3, $a1
    ctx->pc = 0x1578bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1578c0:
    // 0x1578c0: 0xac24ceb8  sw          $a0, -0x3148($at)
    ctx->pc = 0x1578c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 4));
label_1578c4:
    // 0x1578c4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1578c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1578c8:
    // 0x1578c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1578c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1578cc:
    // 0x1578cc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_1578d0:
    if (ctx->pc == 0x1578D0u) {
        ctx->pc = 0x1578D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578CCu;
        // 0x1578d0: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578D4u;
        goto label_1578d4;
    }
    ctx->pc = 0x1578CCu;
    {
        const bool branch_taken_0x1578cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578CCu;
        // 0x1578d0: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578cc) {
            ctx->pc = 0x1579A8u;
            goto label_1579a8;
        }
    }
    ctx->pc = 0x1578D4u;
label_1578d4:
    // 0x1578d4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1578d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_1578d8:
    // 0x1578d8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1578d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
label_1578dc:
    // 0x1578dc: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x1578dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1578e0:
    // 0x1578e0: 0xc05457c  jal         func_1515F0
label_1578e4:
    if (ctx->pc == 0x1578E4u) {
        ctx->pc = 0x1578E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E0u;
        // 0x1578e4: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1578E8u;
        goto label_1578e8;
    }
    ctx->pc = 0x1578E0u;
    SET_GPR_U32(ctx, 31, 0x1578E8u);
    ctx->pc = 0x1578E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578E0u;
    // 0x1578e4: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515F0u, 0x1578E0u, 0x1578E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578E8u;
label_1578e8:
    // 0x1578e8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1578ec:
    if (ctx->pc == 0x1578ECu) {
        ctx->pc = 0x1578F0u;
        goto label_1578f0;
    }
    ctx->pc = 0x1578E8u;
    {
        const bool branch_taken_0x1578e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1578e8) {
            ctx->pc = 0x157968u;
            goto label_157968;
        }
    }
    ctx->pc = 0x1578F0u;
label_1578f0:
    // 0x1578f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1578f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1578f4:
    // 0x1578f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1578f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1578f8:
    // 0x1578f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1578fc:
    if (ctx->pc == 0x1578FCu) {
        ctx->pc = 0x1578FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F8u;
        // 0x1578fc: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157900u;
        goto label_157900;
    }
    ctx->pc = 0x1578F8u;
    {
        const bool branch_taken_0x1578f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F8u;
        // 0x1578fc: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578f8) {
            ctx->pc = 0x157940u;
            goto label_157940;
        }
    }
    ctx->pc = 0x157900u;
label_157900:
    // 0x157900: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_157904:
    // 0x157904: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x157904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_157908:
    // 0x157908: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x157908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15790c:
    // 0x15790c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x15790cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_157910:
    // 0x157910: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x157910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_157914:
    // 0x157914: 0xc063c70  jal         func_18F1C0
label_157918:
    if (ctx->pc == 0x157918u) {
        ctx->pc = 0x157918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157914u;
        // 0x157918: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15791Cu;
        goto label_15791c;
    }
    ctx->pc = 0x157914u;
    SET_GPR_U32(ctx, 31, 0x15791Cu);
    ctx->pc = 0x157918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157914u;
    // 0x157918: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x157914u, 0x15791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15791Cu;
label_15791c:
    // 0x15791c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x15791cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_157920:
    // 0x157920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157924:
    // 0x157924: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x157924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_157928:
    // 0x157928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15792c:
    // 0x15792c: 0xc05e544  jal         func_179510
label_157930:
    if (ctx->pc == 0x157930u) {
        ctx->pc = 0x157930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15792Cu;
        // 0x157930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157934u;
        goto label_157934;
    }
    ctx->pc = 0x15792Cu;
    SET_GPR_U32(ctx, 31, 0x157934u);
    ctx->pc = 0x157930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15792Cu;
    // 0x157930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179510u, 0x15792Cu, 0x157934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157934u;
label_157934:
    // 0x157934: 0x10000014  b           . + 4 + (0x14 << 2)
label_157938:
    if (ctx->pc == 0x157938u) {
        ctx->pc = 0x15793Cu;
        goto label_15793c;
    }
    ctx->pc = 0x157934u;
    {
        const bool branch_taken_0x157934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157934) {
            ctx->pc = 0x157988u;
            goto label_157988;
        }
    }
    ctx->pc = 0x15793Cu;
label_15793c:
    // 0x15793c: 0x0  nop
    ctx->pc = 0x15793cu;
    // NOP
label_157940:
    // 0x157940: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x157940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_157944:
    // 0x157944: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x157944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_157948:
    // 0x157948: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x157948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15794c:
    // 0x15794c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15794cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157950:
    // 0x157950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x157950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157954:
    // 0x157954: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157958:
    // 0x157958: 0xc063c70  jal         func_18F1C0
label_15795c:
    if (ctx->pc == 0x15795Cu) {
        ctx->pc = 0x15795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157958u;
        // 0x15795c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157960u;
        goto label_157960;
    }
    ctx->pc = 0x157958u;
    SET_GPR_U32(ctx, 31, 0x157960u);
    ctx->pc = 0x15795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157958u;
    // 0x15795c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x157958u, 0x157960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157960u;
label_157960:
    // 0x157960: 0x10000009  b           . + 4 + (0x9 << 2)
label_157964:
    if (ctx->pc == 0x157964u) {
        ctx->pc = 0x157968u;
        goto label_157968;
    }
    ctx->pc = 0x157960u;
    {
        const bool branch_taken_0x157960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157960) {
            ctx->pc = 0x157988u;
            goto label_157988;
        }
    }
    ctx->pc = 0x157968u;
label_157968:
    // 0x157968: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x157968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_15796c:
    // 0x15796c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x15796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_157970:
    // 0x157970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157974:
    // 0x157974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157978:
    // 0x157978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x157978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15797c:
    // 0x15797c: 0xc063d30  jal         func_18F4C0
label_157980:
    if (ctx->pc == 0x157980u) {
        ctx->pc = 0x157980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15797Cu;
        // 0x157980: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157984u;
        goto label_157984;
    }
    ctx->pc = 0x15797Cu;
    SET_GPR_U32(ctx, 31, 0x157984u);
    ctx->pc = 0x157980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15797Cu;
    // 0x157980: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x15797Cu, 0x157984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157984u;
label_157984:
    // 0x157984: 0x0  nop
    ctx->pc = 0x157984u;
    // NOP
label_157988:
    // 0x157988: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x157988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_15798c:
    // 0x15798c: 0x8c230ff0  lw          $v1, 0xFF0($at)
    ctx->pc = 0x15798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4080)));
label_157990:
    // 0x157990: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x157990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_157994:
    // 0x157994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x157994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_157998:
    // 0x157998: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15799c:
    // 0x15799c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x15799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_1579a0:
    // 0x1579a0: 0xac220ff0  sw          $v0, 0xFF0($at)
    ctx->pc = 0x1579a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4080), GPR_U32(ctx, 2));
label_1579a4:
    // 0x1579a4: 0x0  nop
    ctx->pc = 0x1579a4u;
    // NOP
label_1579a8:
    // 0x1579a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1579a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1579ac:
    // 0x1579ac: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1579acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1579b0:
    // 0x1579b0: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
label_1579b4:
    // 0x1579b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1579b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1579b8:
    // 0x1579b8: 0xc054c88  jal         func_153220
label_1579bc:
    if (ctx->pc == 0x1579BCu) {
        ctx->pc = 0x1579BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579B8u;
        // 0x1579bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579C0u;
        goto label_1579c0;
    }
    ctx->pc = 0x1579B8u;
    SET_GPR_U32(ctx, 31, 0x1579C0u);
    ctx->pc = 0x1579BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1579B8u;
    // 0x1579bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153220u, 0x1579B8u, 0x1579C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1579C0u;
label_1579c0:
    // 0x1579c0: 0xc0550b4  jal         func_1542D0
label_1579c4:
    if (ctx->pc == 0x1579C4u) {
        ctx->pc = 0x1579C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579C0u;
        // 0x1579c4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579C8u;
        goto label_1579c8;
    }
    ctx->pc = 0x1579C0u;
    SET_GPR_U32(ctx, 31, 0x1579C8u);
    ctx->pc = 0x1579C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1579C0u;
    // 0x1579c4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x1579C0u, 0x1579C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1579C8u;
label_1579c8:
    // 0x1579c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1579c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1579cc:
    // 0x1579cc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1579ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1579d0:
    // 0x1579d0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x1579d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
label_1579d4:
    // 0x1579d4: 0x2604796c  addiu       $a0, $s0, 0x796C
    ctx->pc = 0x1579d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31084));
label_1579d8:
    // 0x1579d8: 0x26057974  addiu       $a1, $s0, 0x7974
    ctx->pc = 0x1579d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 31092));
label_1579dc:
    // 0x1579dc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1579dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1579e0:
    // 0x1579e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1579e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1579e4:
    // 0x1579e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1579e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_1579e8:
    // 0x1579e8: 0xc056548  jal         func_159520
label_1579ec:
    if (ctx->pc == 0x1579ECu) {
        ctx->pc = 0x1579ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579E8u;
        // 0x1579ec: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1579F0u;
        goto label_1579f0;
    }
    ctx->pc = 0x1579E8u;
    SET_GPR_U32(ctx, 31, 0x1579F0u);
    ctx->pc = 0x1579ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1579E8u;
    // 0x1579ec: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159520u, 0x1579E8u, 0x1579F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1579F0u;
label_1579f0:
    // 0x1579f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1579f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_1579f4:
    // 0x1579f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1579f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1579f8:
    // 0x1579f8: 0xc05ee50  jal         func_17B940
label_1579fc:
    if (ctx->pc == 0x1579FCu) {
        ctx->pc = 0x1579FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579F8u;
        // 0x1579fc: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A00u;
        goto label_157a00;
    }
    ctx->pc = 0x1579F8u;
    SET_GPR_U32(ctx, 31, 0x157A00u);
    ctx->pc = 0x1579FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1579F8u;
    // 0x1579fc: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x1579F8u, 0x157A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A00u;
label_157a00:
    // 0x157a00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157a04:
    // 0x157a04: 0x8c23ceec  lw          $v1, -0x3114($at)
    ctx->pc = 0x157a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
label_157a08:
    // 0x157a08: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x157a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_157a0c:
    // 0x157a0c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_157a10:
    if (ctx->pc == 0x157A10u) {
        ctx->pc = 0x157A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A0Cu;
        // 0x157a10: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A14u;
        goto label_157a14;
    }
    ctx->pc = 0x157A0Cu;
    {
        const bool branch_taken_0x157a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A0Cu;
        // 0x157a10: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a0c) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157A14u;
label_157a14:
    // 0x157a14: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x157a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_157a18:
    // 0x157a18: 0x8c24cee4  lw          $a0, -0x311C($at)
    ctx->pc = 0x157a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_157a1c:
    // 0x157a1c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x157a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_157a20:
    // 0x157a20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157a24:
    // 0x157a24: 0x10000012  b           . + 4 + (0x12 << 2)
label_157a28:
    if (ctx->pc == 0x157A28u) {
        ctx->pc = 0x157A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A24u;
        // 0x157a28: 0xac23cee4  sw          $v1, -0x311C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A2Cu;
        goto label_157a2c;
    }
    ctx->pc = 0x157A24u;
    {
        const bool branch_taken_0x157a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A24u;
        // 0x157a28: 0xac23cee4  sw          $v1, -0x311C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a24) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x157A2Cu;
label_157a2c:
    // 0x157a2c: 0x0  nop
    ctx->pc = 0x157a2cu;
    // NOP
label_157a30:
    // 0x157a30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x157a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_157a34:
    // 0x157a34: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x157a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
label_157a38:
    // 0x157a38: 0xc094fac  jal         func_253EB0
label_157a3c:
    if (ctx->pc == 0x157A3Cu) {
        ctx->pc = 0x157A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A38u;
        // 0x157a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A40u;
        goto label_157a40;
    }
    ctx->pc = 0x157A38u;
    SET_GPR_U32(ctx, 31, 0x157A40u);
    ctx->pc = 0x157A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A38u;
    // 0x157a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253EB0u, 0x157A38u, 0x157A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A40u;
label_157a40:
    // 0x157a40: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x157a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_157a44:
    // 0x157a44: 0xc0bcd38  jal         func_2F34E0
label_157a48:
    if (ctx->pc == 0x157A48u) {
        ctx->pc = 0x157A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A44u;
        // 0x157a48: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A4Cu;
        goto label_157a4c;
    }
    ctx->pc = 0x157A44u;
    SET_GPR_U32(ctx, 31, 0x157A4Cu);
    ctx->pc = 0x157A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A44u;
    // 0x157a48: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F34E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F34E0u, 0x157A44u, 0x157A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A4Cu;
label_157a4c:
    // 0x157a4c: 0xc09bee4  jal         func_26FB90
label_157a50:
    if (ctx->pc == 0x157A50u) {
        ctx->pc = 0x157A54u;
        goto label_157a54;
    }
    ctx->pc = 0x157A4Cu;
    SET_GPR_U32(ctx, 31, 0x157A54u);
    ctx->pc = 0x26FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB90u, 0x157A4Cu, 0x157A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A54u;
label_157a54:
    // 0x157a54: 0x0  nop
    ctx->pc = 0x157a54u;
    // NOP
label_157a58:
    // 0x157a58: 0xc05636c  jal         func_158DB0
label_157a5c:
    if (ctx->pc == 0x157A5Cu) {
        ctx->pc = 0x157A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A58u;
        // 0x157a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A60u;
        goto label_157a60;
    }
    ctx->pc = 0x157A58u;
    SET_GPR_U32(ctx, 31, 0x157A60u);
    ctx->pc = 0x157A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A58u;
    // 0x157a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158DB0u, 0x157A58u, 0x157A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A60u;
label_157a60:
    // 0x157a60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x157a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_157a64:
    // 0x157a64: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x157a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_157a68:
    // 0x157a68: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x157a68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_157a6c:
    // 0x157a6c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x157a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_157a70:
    // 0x157a70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x157a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_157a74:
    // 0x157a74: 0x8c23f248  lw          $v1, -0xDB8($at)
    ctx->pc = 0x157a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963784)));
label_157a78:
    // 0x157a78: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_157a7c:
    if (ctx->pc == 0x157A7Cu) {
        ctx->pc = 0x157A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A78u;
        // 0x157a7c: 0x3c010087  lui         $at, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A80u;
        goto label_157a80;
    }
    ctx->pc = 0x157A78u;
    {
        const bool branch_taken_0x157a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A78u;
        // 0x157a7c: 0x3c010087  lui         $at, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a78) {
            ctx->pc = 0x157AD0u;
            goto label_157ad0;
        }
    }
    ctx->pc = 0x157A80u;
label_157a80:
    // 0x157a80: 0x9024c638  lbu         $a0, -0x39C8($at)
    ctx->pc = 0x157a80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952504)));
label_157a84:
    // 0x157a84: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x157a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_157a88:
    // 0x157a88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x157a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_157a8c:
    // 0x157a8c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_157a90:
    if (ctx->pc == 0x157A90u) {
        ctx->pc = 0x157A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A8Cu;
        // 0x157a90: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A94u;
        goto label_157a94;
    }
    ctx->pc = 0x157A8Cu;
    {
        const bool branch_taken_0x157a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A8Cu;
        // 0x157a90: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a8c) {
            ctx->pc = 0x157AB0u;
            goto label_157ab0;
        }
    }
    ctx->pc = 0x157A94u;
label_157a94:
    // 0x157a94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_157a98:
    if (ctx->pc == 0x157A98u) {
        ctx->pc = 0x157A9Cu;
        goto label_157a9c;
    }
    ctx->pc = 0x157A94u;
    {
        const bool branch_taken_0x157a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157a94) {
            ctx->pc = 0x157AB0u;
            goto label_157ab0;
        }
    }
    ctx->pc = 0x157A9Cu;
label_157a9c:
    // 0x157a9c: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x157a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_157aa0:
    // 0x157aa0: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x157aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
label_157aa4:
    // 0x157aa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157aa8:
    // 0x157aa8: 0x10000003  b           . + 4 + (0x3 << 2)
label_157aac:
    if (ctx->pc == 0x157AACu) {
        ctx->pc = 0x157AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AA8u;
        // 0x157aac: 0xa023c638  sb          $v1, -0x39C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294952504), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AB0u;
        goto label_157ab0;
    }
    ctx->pc = 0x157AA8u;
    {
        const bool branch_taken_0x157aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AA8u;
        // 0x157aac: 0xa023c638  sb          $v1, -0x39C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294952504), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157aa8) {
            ctx->pc = 0x157AB8u;
            goto label_157ab8;
        }
    }
    ctx->pc = 0x157AB0u;
label_157ab0:
    // 0x157ab0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157ab4:
    // 0x157ab4: 0x0  nop
    ctx->pc = 0x157ab4u;
    // NOP
label_157ab8:
    // 0x157ab8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_157abc:
    if (ctx->pc == 0x157ABCu) {
        ctx->pc = 0x157AC0u;
        goto label_157ac0;
    }
    ctx->pc = 0x157AB8u;
    {
        const bool branch_taken_0x157ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ab8) {
            ctx->pc = 0x157AD0u;
            goto label_157ad0;
        }
    }
    ctx->pc = 0x157AC0u;
label_157ac0:
    // 0x157ac0: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x157ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
label_157ac4:
    // 0x157ac4: 0xc0740bc  jal         func_1D02F0
label_157ac8:
    if (ctx->pc == 0x157AC8u) {
        ctx->pc = 0x157AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AC4u;
        // 0x157ac8: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157ACCu;
        goto label_157acc;
    }
    ctx->pc = 0x157AC4u;
    SET_GPR_U32(ctx, 31, 0x157ACCu);
    ctx->pc = 0x157AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157AC4u;
    // 0x157ac8: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02F0u, 0x157AC4u, 0x157ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157ACCu;
label_157acc:
    // 0x157acc: 0x0  nop
    ctx->pc = 0x157accu;
    // NOP
label_157ad0:
    // 0x157ad0: 0x10000005  b           . + 4 + (0x5 << 2)
label_157ad4:
    if (ctx->pc == 0x157AD4u) {
        ctx->pc = 0x157AD8u;
        goto label_157ad8;
    }
    ctx->pc = 0x157AD0u;
    {
        const bool branch_taken_0x157ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ad0) {
            ctx->pc = 0x157AE8u;
            goto label_157ae8;
        }
    }
    ctx->pc = 0x157AD8u;
label_157ad8:
    // 0x157ad8: 0xaf808060  sw          $zero, -0x7FA0($gp)
    ctx->pc = 0x157ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934624), GPR_U32(ctx, 0));
label_157adc:
    // 0x157adc: 0x1000fcd6  b           . + 4 + (-0x32A << 2)
label_157ae0:
    if (ctx->pc == 0x157AE0u) {
        ctx->pc = 0x157AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ADCu;
        // 0x157ae0: 0xaf808064  sw          $zero, -0x7F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AE4u;
        goto label_157ae4;
    }
    ctx->pc = 0x157ADCu;
    {
        const bool branch_taken_0x157adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ADCu;
        // 0x157ae0: 0xaf808064  sw          $zero, -0x7F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157adc) {
            ctx->pc = 0x156E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156e38;
        }
    }
    ctx->pc = 0x157AE4u;
label_157ae4:
    // 0x157ae4: 0x0  nop
    ctx->pc = 0x157ae4u;
    // NOP
label_157ae8:
    // 0x157ae8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x157ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_157aec:
    // 0x157aec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x157aecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_157af0:
    // 0x157af0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x157af0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_157af4:
    // 0x157af4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x157af4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_157af8:
    // 0x157af8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157af8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_157afc:
    // 0x157afc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157b00:
    // 0x157b00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_157b04:
    // 0x157b04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_157b08:
    // 0x157b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157b0c:
    // 0x157b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_157b10:
    // 0x157b10: 0x3e00008  jr          $ra
label_157b14:
    if (ctx->pc == 0x157B14u) {
        ctx->pc = 0x157B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B10u;
        // 0x157b14: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B18u;
        goto label_fallthrough_0x157b10;
    }
    ctx->pc = 0x157B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B10u;
        // 0x157b14: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157b10:
    ctx->pc = 0x157B18u;
}
