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

// Function: sub_00333690
// Address: 0x333690 - 0x333eb4
void sub_00333690_0x333690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333690_0x333690");
#endif

    switch (ctx->pc) {
        case 0x333690u: goto label_333690;
        case 0x333694u: goto label_333694;
        case 0x333698u: goto label_333698;
        case 0x33369cu: goto label_33369c;
        case 0x3336a0u: goto label_3336a0;
        case 0x3336a4u: goto label_3336a4;
        case 0x3336a8u: goto label_3336a8;
        case 0x3336acu: goto label_3336ac;
        case 0x3336b0u: goto label_3336b0;
        case 0x3336b4u: goto label_3336b4;
        case 0x3336b8u: goto label_3336b8;
        case 0x3336bcu: goto label_3336bc;
        case 0x3336c0u: goto label_3336c0;
        case 0x3336c4u: goto label_3336c4;
        case 0x3336c8u: goto label_3336c8;
        case 0x3336ccu: goto label_3336cc;
        case 0x3336d0u: goto label_3336d0;
        case 0x3336d4u: goto label_3336d4;
        case 0x3336d8u: goto label_3336d8;
        case 0x3336dcu: goto label_3336dc;
        case 0x3336e0u: goto label_3336e0;
        case 0x3336e4u: goto label_3336e4;
        case 0x3336e8u: goto label_3336e8;
        case 0x3336ecu: goto label_3336ec;
        case 0x3336f0u: goto label_3336f0;
        case 0x3336f4u: goto label_3336f4;
        case 0x3336f8u: goto label_3336f8;
        case 0x3336fcu: goto label_3336fc;
        case 0x333700u: goto label_333700;
        case 0x333704u: goto label_333704;
        case 0x333708u: goto label_333708;
        case 0x33370cu: goto label_33370c;
        case 0x333710u: goto label_333710;
        case 0x333714u: goto label_333714;
        case 0x333718u: goto label_333718;
        case 0x33371cu: goto label_33371c;
        case 0x333720u: goto label_333720;
        case 0x333724u: goto label_333724;
        case 0x333728u: goto label_333728;
        case 0x33372cu: goto label_33372c;
        case 0x333730u: goto label_333730;
        case 0x333734u: goto label_333734;
        case 0x333738u: goto label_333738;
        case 0x33373cu: goto label_33373c;
        case 0x333740u: goto label_333740;
        case 0x333744u: goto label_333744;
        case 0x333748u: goto label_333748;
        case 0x33374cu: goto label_33374c;
        case 0x333750u: goto label_333750;
        case 0x333754u: goto label_333754;
        case 0x333758u: goto label_333758;
        case 0x33375cu: goto label_33375c;
        case 0x333760u: goto label_333760;
        case 0x333764u: goto label_333764;
        case 0x333768u: goto label_333768;
        case 0x33376cu: goto label_33376c;
        case 0x333770u: goto label_333770;
        case 0x333774u: goto label_333774;
        case 0x333778u: goto label_333778;
        case 0x33377cu: goto label_33377c;
        case 0x333780u: goto label_333780;
        case 0x333784u: goto label_333784;
        case 0x333788u: goto label_333788;
        case 0x33378cu: goto label_33378c;
        case 0x333790u: goto label_333790;
        case 0x333794u: goto label_333794;
        case 0x333798u: goto label_333798;
        case 0x33379cu: goto label_33379c;
        case 0x3337a0u: goto label_3337a0;
        case 0x3337a4u: goto label_3337a4;
        case 0x3337a8u: goto label_3337a8;
        case 0x3337acu: goto label_3337ac;
        case 0x3337b0u: goto label_3337b0;
        case 0x3337b4u: goto label_3337b4;
        case 0x3337b8u: goto label_3337b8;
        case 0x3337bcu: goto label_3337bc;
        case 0x3337c0u: goto label_3337c0;
        case 0x3337c4u: goto label_3337c4;
        case 0x3337c8u: goto label_3337c8;
        case 0x3337ccu: goto label_3337cc;
        case 0x3337d0u: goto label_3337d0;
        case 0x3337d4u: goto label_3337d4;
        case 0x3337d8u: goto label_3337d8;
        case 0x3337dcu: goto label_3337dc;
        case 0x3337e0u: goto label_3337e0;
        case 0x3337e4u: goto label_3337e4;
        case 0x3337e8u: goto label_3337e8;
        case 0x3337ecu: goto label_3337ec;
        case 0x3337f0u: goto label_3337f0;
        case 0x3337f4u: goto label_3337f4;
        case 0x3337f8u: goto label_3337f8;
        case 0x3337fcu: goto label_3337fc;
        case 0x333800u: goto label_333800;
        case 0x333804u: goto label_333804;
        case 0x333808u: goto label_333808;
        case 0x33380cu: goto label_33380c;
        case 0x333810u: goto label_333810;
        case 0x333814u: goto label_333814;
        case 0x333818u: goto label_333818;
        case 0x33381cu: goto label_33381c;
        case 0x333820u: goto label_333820;
        case 0x333824u: goto label_333824;
        case 0x333828u: goto label_333828;
        case 0x33382cu: goto label_33382c;
        case 0x333830u: goto label_333830;
        case 0x333834u: goto label_333834;
        case 0x333838u: goto label_333838;
        case 0x33383cu: goto label_33383c;
        case 0x333840u: goto label_333840;
        case 0x333844u: goto label_333844;
        case 0x333848u: goto label_333848;
        case 0x33384cu: goto label_33384c;
        case 0x333850u: goto label_333850;
        case 0x333854u: goto label_333854;
        case 0x333858u: goto label_333858;
        case 0x33385cu: goto label_33385c;
        case 0x333860u: goto label_333860;
        case 0x333864u: goto label_333864;
        case 0x333868u: goto label_333868;
        case 0x33386cu: goto label_33386c;
        case 0x333870u: goto label_333870;
        case 0x333874u: goto label_333874;
        case 0x333878u: goto label_333878;
        case 0x33387cu: goto label_33387c;
        case 0x333880u: goto label_333880;
        case 0x333884u: goto label_333884;
        case 0x333888u: goto label_333888;
        case 0x33388cu: goto label_33388c;
        case 0x333890u: goto label_333890;
        case 0x333894u: goto label_333894;
        case 0x333898u: goto label_333898;
        case 0x33389cu: goto label_33389c;
        case 0x3338a0u: goto label_3338a0;
        case 0x3338a4u: goto label_3338a4;
        case 0x3338a8u: goto label_3338a8;
        case 0x3338acu: goto label_3338ac;
        case 0x3338b0u: goto label_3338b0;
        case 0x3338b4u: goto label_3338b4;
        case 0x3338b8u: goto label_3338b8;
        case 0x3338bcu: goto label_3338bc;
        case 0x3338c0u: goto label_3338c0;
        case 0x3338c4u: goto label_3338c4;
        case 0x3338c8u: goto label_3338c8;
        case 0x3338ccu: goto label_3338cc;
        case 0x3338d0u: goto label_3338d0;
        case 0x3338d4u: goto label_3338d4;
        case 0x3338d8u: goto label_3338d8;
        case 0x3338dcu: goto label_3338dc;
        case 0x3338e0u: goto label_3338e0;
        case 0x3338e4u: goto label_3338e4;
        case 0x3338e8u: goto label_3338e8;
        case 0x3338ecu: goto label_3338ec;
        case 0x3338f0u: goto label_3338f0;
        case 0x3338f4u: goto label_3338f4;
        case 0x3338f8u: goto label_3338f8;
        case 0x3338fcu: goto label_3338fc;
        case 0x333900u: goto label_333900;
        case 0x333904u: goto label_333904;
        case 0x333908u: goto label_333908;
        case 0x33390cu: goto label_33390c;
        case 0x333910u: goto label_333910;
        case 0x333914u: goto label_333914;
        case 0x333918u: goto label_333918;
        case 0x33391cu: goto label_33391c;
        case 0x333920u: goto label_333920;
        case 0x333924u: goto label_333924;
        case 0x333928u: goto label_333928;
        case 0x33392cu: goto label_33392c;
        case 0x333930u: goto label_333930;
        case 0x333934u: goto label_333934;
        case 0x333938u: goto label_333938;
        case 0x33393cu: goto label_33393c;
        case 0x333940u: goto label_333940;
        case 0x333944u: goto label_333944;
        case 0x333948u: goto label_333948;
        case 0x33394cu: goto label_33394c;
        case 0x333950u: goto label_333950;
        case 0x333954u: goto label_333954;
        case 0x333958u: goto label_333958;
        case 0x33395cu: goto label_33395c;
        case 0x333960u: goto label_333960;
        case 0x333964u: goto label_333964;
        case 0x333968u: goto label_333968;
        case 0x33396cu: goto label_33396c;
        case 0x333970u: goto label_333970;
        case 0x333974u: goto label_333974;
        case 0x333978u: goto label_333978;
        case 0x33397cu: goto label_33397c;
        case 0x333980u: goto label_333980;
        case 0x333984u: goto label_333984;
        case 0x333988u: goto label_333988;
        case 0x33398cu: goto label_33398c;
        case 0x333990u: goto label_333990;
        case 0x333994u: goto label_333994;
        case 0x333998u: goto label_333998;
        case 0x33399cu: goto label_33399c;
        case 0x3339a0u: goto label_3339a0;
        case 0x3339a4u: goto label_3339a4;
        case 0x3339a8u: goto label_3339a8;
        case 0x3339acu: goto label_3339ac;
        case 0x3339b0u: goto label_3339b0;
        case 0x3339b4u: goto label_3339b4;
        case 0x3339b8u: goto label_3339b8;
        case 0x3339bcu: goto label_3339bc;
        case 0x3339c0u: goto label_3339c0;
        case 0x3339c4u: goto label_3339c4;
        case 0x3339c8u: goto label_3339c8;
        case 0x3339ccu: goto label_3339cc;
        case 0x3339d0u: goto label_3339d0;
        case 0x3339d4u: goto label_3339d4;
        case 0x3339d8u: goto label_3339d8;
        case 0x3339dcu: goto label_3339dc;
        case 0x3339e0u: goto label_3339e0;
        case 0x3339e4u: goto label_3339e4;
        case 0x3339e8u: goto label_3339e8;
        case 0x3339ecu: goto label_3339ec;
        case 0x3339f0u: goto label_3339f0;
        case 0x3339f4u: goto label_3339f4;
        case 0x3339f8u: goto label_3339f8;
        case 0x3339fcu: goto label_3339fc;
        case 0x333a00u: goto label_333a00;
        case 0x333a04u: goto label_333a04;
        case 0x333a08u: goto label_333a08;
        case 0x333a0cu: goto label_333a0c;
        case 0x333a10u: goto label_333a10;
        case 0x333a14u: goto label_333a14;
        case 0x333a18u: goto label_333a18;
        case 0x333a1cu: goto label_333a1c;
        case 0x333a20u: goto label_333a20;
        case 0x333a24u: goto label_333a24;
        case 0x333a28u: goto label_333a28;
        case 0x333a2cu: goto label_333a2c;
        case 0x333a30u: goto label_333a30;
        case 0x333a34u: goto label_333a34;
        case 0x333a38u: goto label_333a38;
        case 0x333a3cu: goto label_333a3c;
        case 0x333a40u: goto label_333a40;
        case 0x333a44u: goto label_333a44;
        case 0x333a48u: goto label_333a48;
        case 0x333a4cu: goto label_333a4c;
        case 0x333a50u: goto label_333a50;
        case 0x333a54u: goto label_333a54;
        case 0x333a58u: goto label_333a58;
        case 0x333a5cu: goto label_333a5c;
        case 0x333a60u: goto label_333a60;
        case 0x333a64u: goto label_333a64;
        case 0x333a68u: goto label_333a68;
        case 0x333a6cu: goto label_333a6c;
        case 0x333a70u: goto label_333a70;
        case 0x333a74u: goto label_333a74;
        case 0x333a78u: goto label_333a78;
        case 0x333a7cu: goto label_333a7c;
        case 0x333a80u: goto label_333a80;
        case 0x333a84u: goto label_333a84;
        case 0x333a88u: goto label_333a88;
        case 0x333a8cu: goto label_333a8c;
        case 0x333a90u: goto label_333a90;
        case 0x333a94u: goto label_333a94;
        case 0x333a98u: goto label_333a98;
        case 0x333a9cu: goto label_333a9c;
        case 0x333aa0u: goto label_333aa0;
        case 0x333aa4u: goto label_333aa4;
        case 0x333aa8u: goto label_333aa8;
        case 0x333aacu: goto label_333aac;
        case 0x333ab0u: goto label_333ab0;
        case 0x333ab4u: goto label_333ab4;
        case 0x333ab8u: goto label_333ab8;
        case 0x333abcu: goto label_333abc;
        case 0x333ac0u: goto label_333ac0;
        case 0x333ac4u: goto label_333ac4;
        case 0x333ac8u: goto label_333ac8;
        case 0x333accu: goto label_333acc;
        case 0x333ad0u: goto label_333ad0;
        case 0x333ad4u: goto label_333ad4;
        case 0x333ad8u: goto label_333ad8;
        case 0x333adcu: goto label_333adc;
        case 0x333ae0u: goto label_333ae0;
        case 0x333ae4u: goto label_333ae4;
        case 0x333ae8u: goto label_333ae8;
        case 0x333aecu: goto label_333aec;
        case 0x333af0u: goto label_333af0;
        case 0x333af4u: goto label_333af4;
        case 0x333af8u: goto label_333af8;
        case 0x333afcu: goto label_333afc;
        case 0x333b00u: goto label_333b00;
        case 0x333b04u: goto label_333b04;
        case 0x333b08u: goto label_333b08;
        case 0x333b0cu: goto label_333b0c;
        case 0x333b10u: goto label_333b10;
        case 0x333b14u: goto label_333b14;
        case 0x333b18u: goto label_333b18;
        case 0x333b1cu: goto label_333b1c;
        case 0x333b20u: goto label_333b20;
        case 0x333b24u: goto label_333b24;
        case 0x333b28u: goto label_333b28;
        case 0x333b2cu: goto label_333b2c;
        case 0x333b30u: goto label_333b30;
        case 0x333b34u: goto label_333b34;
        case 0x333b38u: goto label_333b38;
        case 0x333b3cu: goto label_333b3c;
        case 0x333b40u: goto label_333b40;
        case 0x333b44u: goto label_333b44;
        case 0x333b48u: goto label_333b48;
        case 0x333b4cu: goto label_333b4c;
        case 0x333b50u: goto label_333b50;
        case 0x333b54u: goto label_333b54;
        case 0x333b58u: goto label_333b58;
        case 0x333b5cu: goto label_333b5c;
        case 0x333b60u: goto label_333b60;
        case 0x333b64u: goto label_333b64;
        case 0x333b68u: goto label_333b68;
        case 0x333b6cu: goto label_333b6c;
        case 0x333b70u: goto label_333b70;
        case 0x333b74u: goto label_333b74;
        case 0x333b78u: goto label_333b78;
        case 0x333b7cu: goto label_333b7c;
        case 0x333b80u: goto label_333b80;
        case 0x333b84u: goto label_333b84;
        case 0x333b88u: goto label_333b88;
        case 0x333b8cu: goto label_333b8c;
        case 0x333b90u: goto label_333b90;
        case 0x333b94u: goto label_333b94;
        case 0x333b98u: goto label_333b98;
        case 0x333b9cu: goto label_333b9c;
        case 0x333ba0u: goto label_333ba0;
        case 0x333ba4u: goto label_333ba4;
        case 0x333ba8u: goto label_333ba8;
        case 0x333bacu: goto label_333bac;
        case 0x333bb0u: goto label_333bb0;
        case 0x333bb4u: goto label_333bb4;
        case 0x333bb8u: goto label_333bb8;
        case 0x333bbcu: goto label_333bbc;
        case 0x333bc0u: goto label_333bc0;
        case 0x333bc4u: goto label_333bc4;
        case 0x333bc8u: goto label_333bc8;
        case 0x333bccu: goto label_333bcc;
        case 0x333bd0u: goto label_333bd0;
        case 0x333bd4u: goto label_333bd4;
        case 0x333bd8u: goto label_333bd8;
        case 0x333bdcu: goto label_333bdc;
        case 0x333be0u: goto label_333be0;
        case 0x333be4u: goto label_333be4;
        case 0x333be8u: goto label_333be8;
        case 0x333becu: goto label_333bec;
        case 0x333bf0u: goto label_333bf0;
        case 0x333bf4u: goto label_333bf4;
        case 0x333bf8u: goto label_333bf8;
        case 0x333bfcu: goto label_333bfc;
        case 0x333c00u: goto label_333c00;
        case 0x333c04u: goto label_333c04;
        case 0x333c08u: goto label_333c08;
        case 0x333c0cu: goto label_333c0c;
        case 0x333c10u: goto label_333c10;
        case 0x333c14u: goto label_333c14;
        case 0x333c18u: goto label_333c18;
        case 0x333c1cu: goto label_333c1c;
        case 0x333c20u: goto label_333c20;
        case 0x333c24u: goto label_333c24;
        case 0x333c28u: goto label_333c28;
        case 0x333c2cu: goto label_333c2c;
        case 0x333c30u: goto label_333c30;
        case 0x333c34u: goto label_333c34;
        case 0x333c38u: goto label_333c38;
        case 0x333c3cu: goto label_333c3c;
        case 0x333c40u: goto label_333c40;
        case 0x333c44u: goto label_333c44;
        case 0x333c48u: goto label_333c48;
        case 0x333c4cu: goto label_333c4c;
        case 0x333c50u: goto label_333c50;
        case 0x333c54u: goto label_333c54;
        case 0x333c58u: goto label_333c58;
        case 0x333c5cu: goto label_333c5c;
        case 0x333c60u: goto label_333c60;
        case 0x333c64u: goto label_333c64;
        case 0x333c68u: goto label_333c68;
        case 0x333c6cu: goto label_333c6c;
        case 0x333c70u: goto label_333c70;
        case 0x333c74u: goto label_333c74;
        case 0x333c78u: goto label_333c78;
        case 0x333c7cu: goto label_333c7c;
        case 0x333c80u: goto label_333c80;
        case 0x333c84u: goto label_333c84;
        case 0x333c88u: goto label_333c88;
        case 0x333c8cu: goto label_333c8c;
        case 0x333c90u: goto label_333c90;
        case 0x333c94u: goto label_333c94;
        case 0x333c98u: goto label_333c98;
        case 0x333c9cu: goto label_333c9c;
        case 0x333ca0u: goto label_333ca0;
        case 0x333ca4u: goto label_333ca4;
        case 0x333ca8u: goto label_333ca8;
        case 0x333cacu: goto label_333cac;
        case 0x333cb0u: goto label_333cb0;
        case 0x333cb4u: goto label_333cb4;
        case 0x333cb8u: goto label_333cb8;
        case 0x333cbcu: goto label_333cbc;
        case 0x333cc0u: goto label_333cc0;
        case 0x333cc4u: goto label_333cc4;
        case 0x333cc8u: goto label_333cc8;
        case 0x333cccu: goto label_333ccc;
        case 0x333cd0u: goto label_333cd0;
        case 0x333cd4u: goto label_333cd4;
        case 0x333cd8u: goto label_333cd8;
        case 0x333cdcu: goto label_333cdc;
        case 0x333ce0u: goto label_333ce0;
        case 0x333ce4u: goto label_333ce4;
        case 0x333ce8u: goto label_333ce8;
        case 0x333cecu: goto label_333cec;
        case 0x333cf0u: goto label_333cf0;
        case 0x333cf4u: goto label_333cf4;
        case 0x333cf8u: goto label_333cf8;
        case 0x333cfcu: goto label_333cfc;
        case 0x333d00u: goto label_333d00;
        case 0x333d04u: goto label_333d04;
        case 0x333d08u: goto label_333d08;
        case 0x333d0cu: goto label_333d0c;
        case 0x333d10u: goto label_333d10;
        case 0x333d14u: goto label_333d14;
        case 0x333d18u: goto label_333d18;
        case 0x333d1cu: goto label_333d1c;
        case 0x333d20u: goto label_333d20;
        case 0x333d24u: goto label_333d24;
        case 0x333d28u: goto label_333d28;
        case 0x333d2cu: goto label_333d2c;
        case 0x333d30u: goto label_333d30;
        case 0x333d34u: goto label_333d34;
        case 0x333d38u: goto label_333d38;
        case 0x333d3cu: goto label_333d3c;
        case 0x333d40u: goto label_333d40;
        case 0x333d44u: goto label_333d44;
        case 0x333d48u: goto label_333d48;
        case 0x333d4cu: goto label_333d4c;
        case 0x333d50u: goto label_333d50;
        case 0x333d54u: goto label_333d54;
        case 0x333d58u: goto label_333d58;
        case 0x333d5cu: goto label_333d5c;
        case 0x333d60u: goto label_333d60;
        case 0x333d64u: goto label_333d64;
        case 0x333d68u: goto label_333d68;
        case 0x333d6cu: goto label_333d6c;
        case 0x333d70u: goto label_333d70;
        case 0x333d74u: goto label_333d74;
        case 0x333d78u: goto label_333d78;
        case 0x333d7cu: goto label_333d7c;
        case 0x333d80u: goto label_333d80;
        case 0x333d84u: goto label_333d84;
        case 0x333d88u: goto label_333d88;
        case 0x333d8cu: goto label_333d8c;
        case 0x333d90u: goto label_333d90;
        case 0x333d94u: goto label_333d94;
        case 0x333d98u: goto label_333d98;
        case 0x333d9cu: goto label_333d9c;
        case 0x333da0u: goto label_333da0;
        case 0x333da4u: goto label_333da4;
        case 0x333da8u: goto label_333da8;
        case 0x333dacu: goto label_333dac;
        case 0x333db0u: goto label_333db0;
        case 0x333db4u: goto label_333db4;
        case 0x333db8u: goto label_333db8;
        case 0x333dbcu: goto label_333dbc;
        case 0x333dc0u: goto label_333dc0;
        case 0x333dc4u: goto label_333dc4;
        case 0x333dc8u: goto label_333dc8;
        case 0x333dccu: goto label_333dcc;
        case 0x333dd0u: goto label_333dd0;
        case 0x333dd4u: goto label_333dd4;
        case 0x333dd8u: goto label_333dd8;
        case 0x333ddcu: goto label_333ddc;
        case 0x333de0u: goto label_333de0;
        case 0x333de4u: goto label_333de4;
        case 0x333de8u: goto label_333de8;
        case 0x333decu: goto label_333dec;
        case 0x333df0u: goto label_333df0;
        case 0x333df4u: goto label_333df4;
        case 0x333df8u: goto label_333df8;
        case 0x333dfcu: goto label_333dfc;
        case 0x333e00u: goto label_333e00;
        case 0x333e04u: goto label_333e04;
        case 0x333e08u: goto label_333e08;
        case 0x333e0cu: goto label_333e0c;
        case 0x333e10u: goto label_333e10;
        case 0x333e14u: goto label_333e14;
        case 0x333e18u: goto label_333e18;
        case 0x333e1cu: goto label_333e1c;
        case 0x333e20u: goto label_333e20;
        case 0x333e24u: goto label_333e24;
        case 0x333e28u: goto label_333e28;
        case 0x333e2cu: goto label_333e2c;
        case 0x333e30u: goto label_333e30;
        case 0x333e34u: goto label_333e34;
        case 0x333e38u: goto label_333e38;
        case 0x333e3cu: goto label_333e3c;
        case 0x333e40u: goto label_333e40;
        case 0x333e44u: goto label_333e44;
        case 0x333e48u: goto label_333e48;
        case 0x333e4cu: goto label_333e4c;
        case 0x333e50u: goto label_333e50;
        case 0x333e54u: goto label_333e54;
        case 0x333e58u: goto label_333e58;
        case 0x333e5cu: goto label_333e5c;
        case 0x333e60u: goto label_333e60;
        case 0x333e64u: goto label_333e64;
        case 0x333e68u: goto label_333e68;
        case 0x333e6cu: goto label_333e6c;
        case 0x333e70u: goto label_333e70;
        case 0x333e74u: goto label_333e74;
        case 0x333e78u: goto label_333e78;
        case 0x333e7cu: goto label_333e7c;
        case 0x333e80u: goto label_333e80;
        case 0x333e84u: goto label_333e84;
        case 0x333e88u: goto label_333e88;
        case 0x333e8cu: goto label_333e8c;
        case 0x333e90u: goto label_333e90;
        case 0x333e94u: goto label_333e94;
        case 0x333e98u: goto label_333e98;
        case 0x333e9cu: goto label_333e9c;
        case 0x333ea0u: goto label_333ea0;
        case 0x333ea4u: goto label_333ea4;
        case 0x333ea8u: goto label_333ea8;
        case 0x333eacu: goto label_333eac;
        case 0x333eb0u: goto label_333eb0;
        default: break;
    }

    ctx->pc = 0x333690u;

label_333690:
    // 0x333690: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x333690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_333694:
    // 0x333694: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x333694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_333698:
    // 0x333698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x333698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33369c:
    // 0x33369c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3336a0:
    // 0x3336a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3336a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3336a4:
    // 0x3336a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3336a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3336a8:
    // 0x3336a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3336a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3336ac:
    // 0x3336ac: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3336acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_3336b0:
    // 0x3336b0: 0x34c60800  ori         $a2, $a2, 0x800
    ctx->pc = 0x3336b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
label_3336b4:
    // 0x3336b4: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x3336b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_3336b8:
    // 0x3336b8: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3336b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_3336bc:
    // 0x3336bc: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x3336bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
label_3336c0:
    // 0x3336c0: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x3336c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_3336c4:
    // 0x3336c4: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3336c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_3336c8:
    // 0x3336c8: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x3336c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
label_3336cc:
    // 0x3336cc: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x3336ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_3336d0:
    // 0x3336d0: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3336d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_3336d4:
    // 0x3336d4: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x3336d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
label_3336d8:
    // 0x3336d8: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x3336d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_3336dc:
    // 0x3336dc: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3336dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_3336e0:
    // 0x3336e0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x3336e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_3336e4:
    // 0x3336e4: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x3336e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_3336e8:
    // 0x3336e8: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3336e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_3336ec:
    // 0x3336ec: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3336ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3336f0:
    // 0x3336f0: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x3336f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_3336f4:
    // 0x3336f4: 0x9485078c  lhu         $a1, 0x78C($a0)
    ctx->pc = 0x3336f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1932)));
label_3336f8:
    // 0x3336f8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x3336f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_3336fc:
    // 0x3336fc: 0xa485078c  sh          $a1, 0x78C($a0)
    ctx->pc = 0x3336fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1932), (uint16_t)GPR_U32(ctx, 5));
label_333700:
    // 0x333700: 0x90842b1c  lbu         $a0, 0x2B1C($a0)
    ctx->pc = 0x333700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11036)));
label_333704:
    // 0x333704: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_333708:
    if (ctx->pc == 0x333708u) {
        ctx->pc = 0x333708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333704u;
        // 0x333708: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33370Cu;
        goto label_33370c;
    }
    ctx->pc = 0x333704u;
    {
        const bool branch_taken_0x333704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x333708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333704u;
        // 0x333708: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333704) {
            ctx->pc = 0x333768u;
            goto label_333768;
        }
    }
    ctx->pc = 0x33370Cu;
label_33370c:
    // 0x33370c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33370cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_333710:
    // 0x333710: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x333710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_333714:
    // 0x333714: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x333714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_333718:
    // 0x333718: 0x146001e1  bnez        $v1, . + 4 + (0x1E1 << 2)
label_33371c:
    if (ctx->pc == 0x33371Cu) {
        ctx->pc = 0x333720u;
        goto label_333720;
    }
    ctx->pc = 0x333718u;
    {
        const bool branch_taken_0x333718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333718) {
            ctx->pc = 0x333EA0u;
            goto label_333ea0;
        }
    }
    ctx->pc = 0x333720u;
label_333720:
    // 0x333720: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x333720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_333724:
    // 0x333724: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x333724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_333728:
    // 0x333728: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x333728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_33372c:
    // 0x33372c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x33372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_333730:
    // 0x333730: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_333734:
    if (ctx->pc == 0x333734u) {
        ctx->pc = 0x333738u;
        goto label_333738;
    }
    ctx->pc = 0x333730u;
    {
        const bool branch_taken_0x333730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x333730) {
            ctx->pc = 0x333758u;
            goto label_333758;
        }
    }
    ctx->pc = 0x333738u;
label_333738:
    // 0x333738: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x333738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33373c:
    // 0x33373c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33373cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_333740:
    // 0x333740: 0x320f809  jalr        $t9
label_333744:
    if (ctx->pc == 0x333744u) {
        ctx->pc = 0x333744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333740u;
        // 0x333744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333748u;
        goto label_333748;
    }
    ctx->pc = 0x333740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333748u);
        ctx->pc = 0x333744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333740u;
        // 0x333744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333740u, 0x333748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x333748u;
label_333748:
    // 0x333748: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x333748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_33374c:
    // 0x33374c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33374cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_333750:
    // 0x333750: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x333750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_333754:
    // 0x333754: 0xa22307f6  sb          $v1, 0x7F6($s1)
    ctx->pc = 0x333754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 3));
label_333758:
    // 0x333758: 0xae2007ec  sw          $zero, 0x7EC($s1)
    ctx->pc = 0x333758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 0));
label_33375c:
    // 0x33375c: 0x100001d0  b           . + 4 + (0x1D0 << 2)
label_333760:
    if (ctx->pc == 0x333760u) {
        ctx->pc = 0x333760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33375Cu;
        // 0x333760: 0xa62007f0  sh          $zero, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333764u;
        goto label_333764;
    }
    ctx->pc = 0x33375Cu;
    {
        const bool branch_taken_0x33375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33375Cu;
        // 0x333760: 0xa62007f0  sh          $zero, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33375c) {
            ctx->pc = 0x333EA0u;
            goto label_333ea0;
        }
    }
    ctx->pc = 0x333764u;
label_333764:
    // 0x333764: 0x0  nop
    ctx->pc = 0x333764u;
    // NOP
label_333768:
    // 0x333768: 0x96230824  lhu         $v1, 0x824($s1)
    ctx->pc = 0x333768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
label_33376c:
    // 0x33376c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333770:
    // 0x333770: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
label_333774:
    if (ctx->pc == 0x333774u) {
        ctx->pc = 0x333778u;
        goto label_333778;
    }
    ctx->pc = 0x333770u;
    {
        const bool branch_taken_0x333770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333770) {
            ctx->pc = 0x333820u;
            goto label_333820;
        }
    }
    ctx->pc = 0x333778u;
label_333778:
    // 0x333778: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x333778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_33377c:
    // 0x33377c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x33377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_333780:
    // 0x333780: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_333784:
    if (ctx->pc == 0x333784u) {
        ctx->pc = 0x333788u;
        goto label_333788;
    }
    ctx->pc = 0x333780u;
    {
        const bool branch_taken_0x333780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333780) {
            ctx->pc = 0x3337C0u;
            goto label_3337c0;
        }
    }
    ctx->pc = 0x333788u;
label_333788:
    // 0x333788: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x333788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33378c:
    // 0x33378c: 0x3c02412f  lui         $v0, 0x412F
    ctx->pc = 0x33378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16687 << 16));
label_333790:
    // 0x333790: 0x34433611  ori         $v1, $v0, 0x3611
    ctx->pc = 0x333790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13841);
label_333794:
    // 0x333794: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x333794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_333798:
    // 0x333798: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x333798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_33379c:
    // 0x33379c: 0x3442793e  ori         $v0, $v0, 0x793E
    ctx->pc = 0x33379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31038);
label_3337a0:
    // 0x3337a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3337a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3337a4:
    // 0x3337a4: 0x0  nop
    ctx->pc = 0x3337a4u;
    // NOP
label_3337a8:
    // 0x3337a8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3337a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3337ac:
    // 0x3337ac: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x3337acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_3337b0:
    // 0x3337b0: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x3337b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3337b4:
    // 0x3337b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3337b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3337b8:
    // 0x3337b8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x3337b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_3337bc:
    // 0x3337bc: 0x0  nop
    ctx->pc = 0x3337bcu;
    // NOP
label_3337c0:
    // 0x3337c0: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x3337c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_3337c4:
    // 0x3337c4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3337c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3337c8:
    // 0x3337c8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_3337cc:
    if (ctx->pc == 0x3337CCu) {
        ctx->pc = 0x3337D0u;
        goto label_3337d0;
    }
    ctx->pc = 0x3337C8u;
    {
        const bool branch_taken_0x3337c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3337c8) {
            ctx->pc = 0x333808u;
            goto label_333808;
        }
    }
    ctx->pc = 0x3337D0u;
label_3337d0:
    // 0x3337d0: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x3337d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3337d4:
    // 0x3337d4: 0x3c024285  lui         $v0, 0x4285
    ctx->pc = 0x3337d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17029 << 16));
label_3337d8:
    // 0x3337d8: 0x344329fc  ori         $v1, $v0, 0x29FC
    ctx->pc = 0x3337d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10748);
label_3337dc:
    // 0x3337dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3337dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3337e0:
    // 0x3337e0: 0x3c02429f  lui         $v0, 0x429F
    ctx->pc = 0x3337e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17055 << 16));
label_3337e4:
    // 0x3337e4: 0x34420bc7  ori         $v0, $v0, 0xBC7
    ctx->pc = 0x3337e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3015);
label_3337e8:
    // 0x3337e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3337e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3337ec:
    // 0x3337ec: 0x0  nop
    ctx->pc = 0x3337ecu;
    // NOP
label_3337f0:
    // 0x3337f0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3337f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3337f4:
    // 0x3337f4: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x3337f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_3337f8:
    // 0x3337f8: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x3337f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3337fc:
    // 0x3337fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3337fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333800:
    // 0x333800: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x333800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_333804:
    // 0x333804: 0x0  nop
    ctx->pc = 0x333804u;
    // NOP
label_333808:
    // 0x333808: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x333808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_33380c:
    // 0x33380c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x33380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_333810:
    // 0x333810: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_333814:
    if (ctx->pc == 0x333814u) {
        ctx->pc = 0x333818u;
        goto label_333818;
    }
    ctx->pc = 0x333810u;
    {
        const bool branch_taken_0x333810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333810) {
            ctx->pc = 0x333820u;
            goto label_333820;
        }
    }
    ctx->pc = 0x333818u;
label_333818:
    // 0x333818: 0x7a222b30  lq          $v0, 0x2B30($s1)
    ctx->pc = 0x333818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 11056)));
label_33381c:
    // 0x33381c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x33381cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_333820:
    // 0x333820: 0xc0a5c00  jal         func_297000
label_333824:
    if (ctx->pc == 0x333824u) {
        ctx->pc = 0x333824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333820u;
        // 0x333824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333828u;
        goto label_333828;
    }
    ctx->pc = 0x333820u;
    SET_GPR_U32(ctx, 31, 0x333828u);
    ctx->pc = 0x333824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333820u;
    // 0x333824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297000u, 0x333820u, 0x333828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333828u;
label_333828:
    // 0x333828: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x333828u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_33382c:
    // 0x33382c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x33382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_333830:
    // 0x333830: 0x10830151  beq         $a0, $v1, . + 4 + (0x151 << 2)
label_333834:
    if (ctx->pc == 0x333834u) {
        ctx->pc = 0x333834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333830u;
        // 0x333834: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333838u;
        goto label_333838;
    }
    ctx->pc = 0x333830u;
    {
        const bool branch_taken_0x333830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x333834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333830u;
        // 0x333834: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333830) {
            ctx->pc = 0x333D78u;
            goto label_333d78;
        }
    }
    ctx->pc = 0x333838u;
label_333838:
    // 0x333838: 0x1083014f  beq         $a0, $v1, . + 4 + (0x14F << 2)
label_33383c:
    if (ctx->pc == 0x33383Cu) {
        ctx->pc = 0x333840u;
        goto label_333840;
    }
    ctx->pc = 0x333838u;
    {
        const bool branch_taken_0x333838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333838) {
            ctx->pc = 0x333D78u;
            goto label_333d78;
        }
    }
    ctx->pc = 0x333840u;
label_333840:
    // 0x333840: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x333840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_333844:
    // 0x333844: 0x1083014c  beq         $a0, $v1, . + 4 + (0x14C << 2)
label_333848:
    if (ctx->pc == 0x333848u) {
        ctx->pc = 0x333848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333844u;
        // 0x333848: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33384Cu;
        goto label_33384c;
    }
    ctx->pc = 0x333844u;
    {
        const bool branch_taken_0x333844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x333848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333844u;
        // 0x333848: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333844) {
            ctx->pc = 0x333D78u;
            goto label_333d78;
        }
    }
    ctx->pc = 0x33384Cu;
label_33384c:
    // 0x33384c: 0x10830146  beq         $a0, $v1, . + 4 + (0x146 << 2)
label_333850:
    if (ctx->pc == 0x333850u) {
        ctx->pc = 0x333854u;
        goto label_333854;
    }
    ctx->pc = 0x33384Cu;
    {
        const bool branch_taken_0x33384c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33384c) {
            ctx->pc = 0x333D68u;
            goto label_333d68;
        }
    }
    ctx->pc = 0x333854u;
label_333854:
    // 0x333854: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x333854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_333858:
    // 0x333858: 0x10830097  beq         $a0, $v1, . + 4 + (0x97 << 2)
label_33385c:
    if (ctx->pc == 0x33385Cu) {
        ctx->pc = 0x33385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333858u;
        // 0x33385c: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333860u;
        goto label_333860;
    }
    ctx->pc = 0x333858u;
    {
        const bool branch_taken_0x333858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333858u;
        // 0x33385c: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333858) {
            ctx->pc = 0x333AB8u;
            goto label_333ab8;
        }
    }
    ctx->pc = 0x333860u;
label_333860:
    // 0x333860: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
label_333864:
    if (ctx->pc == 0x333864u) {
        ctx->pc = 0x333868u;
        goto label_333868;
    }
    ctx->pc = 0x333860u;
    {
        const bool branch_taken_0x333860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333860) {
            ctx->pc = 0x3339C8u;
            goto label_3339c8;
        }
    }
    ctx->pc = 0x333868u;
label_333868:
    // 0x333868: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x333868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_33386c:
    // 0x33386c: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
label_333870:
    if (ctx->pc == 0x333870u) {
        ctx->pc = 0x333870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33386Cu;
        // 0x333870: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333874u;
        goto label_333874;
    }
    ctx->pc = 0x33386Cu;
    {
        const bool branch_taken_0x33386c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x333870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33386Cu;
        // 0x333870: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33386c) {
            ctx->pc = 0x3339C8u;
            goto label_3339c8;
        }
    }
    ctx->pc = 0x333874u;
label_333874:
    // 0x333874: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_333878:
    if (ctx->pc == 0x333878u) {
        ctx->pc = 0x33387Cu;
        goto label_33387c;
    }
    ctx->pc = 0x333874u;
    {
        const bool branch_taken_0x333874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333874) {
            ctx->pc = 0x3338C8u;
            goto label_3338c8;
        }
    }
    ctx->pc = 0x33387Cu;
label_33387c:
    // 0x33387c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x33387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_333880:
    // 0x333880: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_333884:
    if (ctx->pc == 0x333884u) {
        ctx->pc = 0x333884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333880u;
        // 0x333884: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333888u;
        goto label_333888;
    }
    ctx->pc = 0x333880u;
    {
        const bool branch_taken_0x333880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x333884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333880u;
        // 0x333884: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333880) {
            ctx->pc = 0x3338C8u;
            goto label_3338c8;
        }
    }
    ctx->pc = 0x333888u;
label_333888:
    // 0x333888: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_33388c:
    if (ctx->pc == 0x33388Cu) {
        ctx->pc = 0x333890u;
        goto label_333890;
    }
    ctx->pc = 0x333888u;
    {
        const bool branch_taken_0x333888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333888) {
            ctx->pc = 0x3338A8u;
            goto label_3338a8;
        }
    }
    ctx->pc = 0x333890u;
label_333890:
    // 0x333890: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x333890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_333894:
    // 0x333894: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_333898:
    if (ctx->pc == 0x333898u) {
        ctx->pc = 0x33389Cu;
        goto label_33389c;
    }
    ctx->pc = 0x333894u;
    {
        const bool branch_taken_0x333894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333894) {
            ctx->pc = 0x3338A8u;
            goto label_3338a8;
        }
    }
    ctx->pc = 0x33389Cu;
label_33389c:
    // 0x33389c: 0x10000138  b           . + 4 + (0x138 << 2)
label_3338a0:
    if (ctx->pc == 0x3338A0u) {
        ctx->pc = 0x3338A4u;
        goto label_3338a4;
    }
    ctx->pc = 0x33389Cu;
    {
        const bool branch_taken_0x33389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33389c) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x3338A4u;
label_3338a4:
    // 0x3338a4: 0x0  nop
    ctx->pc = 0x3338a4u;
    // NOP
label_3338a8:
    // 0x3338a8: 0x96240824  lhu         $a0, 0x824($s1)
    ctx->pc = 0x3338a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
label_3338ac:
    // 0x3338ac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3338acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3338b0:
    // 0x3338b0: 0x14830133  bne         $a0, $v1, . + 4 + (0x133 << 2)
label_3338b4:
    if (ctx->pc == 0x3338B4u) {
        ctx->pc = 0x3338B8u;
        goto label_3338b8;
    }
    ctx->pc = 0x3338B0u;
    {
        const bool branch_taken_0x3338b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3338b0) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x3338B8u;
label_3338b8:
    // 0x3338b8: 0x8623056e  lh          $v1, 0x56E($s1)
    ctx->pc = 0x3338b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_3338bc:
    // 0x3338bc: 0x10000130  b           . + 4 + (0x130 << 2)
label_3338c0:
    if (ctx->pc == 0x3338C0u) {
        ctx->pc = 0x3338C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338BCu;
        // 0x3338c0: 0xa2232b20  sb          $v1, 0x2B20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11040), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3338C4u;
        goto label_3338c4;
    }
    ctx->pc = 0x3338BCu;
    {
        const bool branch_taken_0x3338bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3338C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338BCu;
        // 0x3338c0: 0xa2232b20  sb          $v1, 0x2B20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11040), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338bc) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x3338C4u;
label_3338c4:
    // 0x3338c4: 0x0  nop
    ctx->pc = 0x3338c4u;
    // NOP
label_3338c8:
    // 0x3338c8: 0x96230824  lhu         $v1, 0x824($s1)
    ctx->pc = 0x3338c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
label_3338cc:
    // 0x3338cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3338ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3338d0:
    // 0x3338d0: 0x1464012b  bne         $v1, $a0, . + 4 + (0x12B << 2)
label_3338d4:
    if (ctx->pc == 0x3338D4u) {
        ctx->pc = 0x3338D8u;
        goto label_3338d8;
    }
    ctx->pc = 0x3338D0u;
    {
        const bool branch_taken_0x3338d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3338d0) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x3338D8u;
label_3338d8:
    // 0x3338d8: 0x92232b20  lbu         $v1, 0x2B20($s1)
    ctx->pc = 0x3338d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11040)));
label_3338dc:
    // 0x3338dc: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
label_3338e0:
    if (ctx->pc == 0x3338E0u) {
        ctx->pc = 0x3338E4u;
        goto label_3338e4;
    }
    ctx->pc = 0x3338DCu;
    {
        const bool branch_taken_0x3338dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3338dc) {
            ctx->pc = 0x333960u;
            goto label_333960;
        }
    }
    ctx->pc = 0x3338E4u;
label_3338e4:
    // 0x3338e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3338e8:
    if (ctx->pc == 0x3338E8u) {
        ctx->pc = 0x3338ECu;
        goto label_3338ec;
    }
    ctx->pc = 0x3338E4u;
    {
        const bool branch_taken_0x3338e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3338e4) {
            ctx->pc = 0x3338F8u;
            goto label_3338f8;
        }
    }
    ctx->pc = 0x3338ECu;
label_3338ec:
    // 0x3338ec: 0x10000124  b           . + 4 + (0x124 << 2)
label_3338f0:
    if (ctx->pc == 0x3338F0u) {
        ctx->pc = 0x3338F4u;
        goto label_3338f4;
    }
    ctx->pc = 0x3338ECu;
    {
        const bool branch_taken_0x3338ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3338ec) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x3338F4u;
label_3338f4:
    // 0x3338f4: 0x0  nop
    ctx->pc = 0x3338f4u;
    // NOP
label_3338f8:
    // 0x3338f8: 0x3c024627  lui         $v0, 0x4627
    ctx->pc = 0x3338f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17959 << 16));
label_3338fc:
    // 0x3338fc: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x3338fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_333900:
    // 0x333900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_333904:
    // 0x333904: 0x3c02451e  lui         $v0, 0x451E
    ctx->pc = 0x333904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17694 << 16));
label_333908:
    // 0x333908: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x333908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_33390c:
    // 0x33390c: 0x34445000  ori         $a0, $v0, 0x5000
    ctx->pc = 0x33390cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_333910:
    // 0x333910: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x333910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_333914:
    // 0x333914: 0x3c024699  lui         $v0, 0x4699
    ctx->pc = 0x333914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18073 << 16));
label_333918:
    // 0x333918: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x333918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_33391c:
    // 0x33391c: 0x34425e00  ori         $v0, $v0, 0x5E00
    ctx->pc = 0x33391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24064);
label_333920:
    // 0x333920: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x333920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_333924:
    // 0x333924: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x333924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_333928:
    // 0x333928: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x333928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_33392c:
    // 0x33392c: 0x3c0246a5  lui         $v0, 0x46A5
    ctx->pc = 0x33392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18085 << 16));
label_333930:
    // 0x333930: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x333930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_333934:
    // 0x333934: 0x34421600  ori         $v0, $v0, 0x1600
    ctx->pc = 0x333934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5632);
label_333938:
    // 0x333938: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x333938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_33393c:
    // 0x33393c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x33393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_333940:
    // 0x333940: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x333940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_333944:
    // 0x333944: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x333944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_333948:
    // 0x333948: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x333948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_33394c:
    // 0x33394c: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x33394cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_333950:
    // 0x333950: 0xc0bc6cc  jal         func_2F1B30
label_333954:
    if (ctx->pc == 0x333954u) {
        ctx->pc = 0x333954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333950u;
        // 0x333954: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333958u;
        goto label_333958;
    }
    ctx->pc = 0x333950u;
    SET_GPR_U32(ctx, 31, 0x333958u);
    ctx->pc = 0x333954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333950u;
    // 0x333954: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1B30u, 0x333950u, 0x333958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333958u;
label_333958:
    // 0x333958: 0x10000109  b           . + 4 + (0x109 << 2)
label_33395c:
    if (ctx->pc == 0x33395Cu) {
        ctx->pc = 0x333960u;
        goto label_333960;
    }
    ctx->pc = 0x333958u;
    {
        const bool branch_taken_0x333958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333958) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333960u;
label_333960:
    // 0x333960: 0x3c024627  lui         $v0, 0x4627
    ctx->pc = 0x333960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17959 << 16));
label_333964:
    // 0x333964: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x333964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_333968:
    // 0x333968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33396c:
    // 0x33396c: 0x3c02451e  lui         $v0, 0x451E
    ctx->pc = 0x33396cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17694 << 16));
label_333970:
    // 0x333970: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x333970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_333974:
    // 0x333974: 0x34445000  ori         $a0, $v0, 0x5000
    ctx->pc = 0x333974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_333978:
    // 0x333978: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x333978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_33397c:
    // 0x33397c: 0x3c0246a8  lui         $v0, 0x46A8
    ctx->pc = 0x33397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18088 << 16));
label_333980:
    // 0x333980: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x333980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_333984:
    // 0x333984: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x333984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_333988:
    // 0x333988: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x333988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_33398c:
    // 0x33398c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x33398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_333990:
    // 0x333990: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x333990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_333994:
    // 0x333994: 0x3c02469d  lui         $v0, 0x469D
    ctx->pc = 0x333994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18077 << 16));
label_333998:
    // 0x333998: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x333998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_33399c:
    // 0x33399c: 0x34424600  ori         $v0, $v0, 0x4600
    ctx->pc = 0x33399cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17920);
label_3339a0:
    // 0x3339a0: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x3339a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_3339a4:
    // 0x3339a4: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x3339a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_3339a8:
    // 0x3339a8: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3339a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3339ac:
    // 0x3339ac: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x3339acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_3339b0:
    // 0x3339b0: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x3339b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_3339b4:
    // 0x3339b4: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x3339b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_3339b8:
    // 0x3339b8: 0xc0bc6d8  jal         func_2F1B60
label_3339bc:
    if (ctx->pc == 0x3339BCu) {
        ctx->pc = 0x3339BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339B8u;
        // 0x3339bc: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3339C0u;
        goto label_3339c0;
    }
    ctx->pc = 0x3339B8u;
    SET_GPR_U32(ctx, 31, 0x3339C0u);
    ctx->pc = 0x3339BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339B8u;
    // 0x3339bc: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1B60u, 0x3339B8u, 0x3339C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339C0u;
label_3339c0:
    // 0x3339c0: 0x100000ef  b           . + 4 + (0xEF << 2)
label_3339c4:
    if (ctx->pc == 0x3339C4u) {
        ctx->pc = 0x3339C8u;
        goto label_3339c8;
    }
    ctx->pc = 0x3339C0u;
    {
        const bool branch_taken_0x3339c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3339c0) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x3339C8u;
label_3339c8:
    // 0x3339c8: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3339c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
label_3339cc:
    // 0x3339cc: 0x146000ec  bnez        $v1, . + 4 + (0xEC << 2)
label_3339d0:
    if (ctx->pc == 0x3339D0u) {
        ctx->pc = 0x3339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339CCu;
        // 0x3339d0: 0x3c03004f  lui         $v1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3339D4u;
        goto label_3339d4;
    }
    ctx->pc = 0x3339CCu;
    {
        const bool branch_taken_0x3339cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339CCu;
        // 0x3339d0: 0x3c03004f  lui         $v1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339cc) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x3339D4u;
label_3339d4:
    // 0x3339d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3339d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3339d8:
    // 0x3339d8: 0x2463a2b0  addiu       $v1, $v1, -0x5D50
    ctx->pc = 0x3339d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943408));
label_3339dc:
    // 0x3339dc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3339dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_3339e0:
    // 0x3339e0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3339e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3339e4:
    // 0x3339e4: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x3339e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_3339e8:
    // 0x3339e8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3339e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_3339ec:
    // 0x3339ec: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x3339ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_3339f0:
    // 0x3339f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3339f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3339f4:
    // 0x3339f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3339f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3339f8:
    // 0x3339f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3339f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3339fc:
    // 0x3339fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_333a00:
    if (ctx->pc == 0x333A00u) {
        ctx->pc = 0x333A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339FCu;
        // 0x333a00: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333A04u;
        goto label_333a04;
    }
    ctx->pc = 0x3339FCu;
    {
        const bool branch_taken_0x3339fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339FCu;
        // 0x333a00: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339fc) {
            ctx->pc = 0x333A30u;
            goto label_333a30;
        }
    }
    ctx->pc = 0x333A04u;
label_333a04:
    // 0x333a04: 0xc0414ca  jal         func_105328
label_333a08:
    if (ctx->pc == 0x333A08u) {
        ctx->pc = 0x333A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A04u;
        // 0x333a08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333A0Cu;
        goto label_333a0c;
    }
    ctx->pc = 0x333A04u;
    SET_GPR_U32(ctx, 31, 0x333A0Cu);
    ctx->pc = 0x333A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A04u;
    // 0x333a08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x333A04u, 0x333A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A0Cu;
label_333a0c:
    // 0x333a0c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x333a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_333a10:
    // 0x333a10: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x333a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_333a14:
    // 0x333a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333a18:
    // 0x333a18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x333a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_333a1c:
    // 0x333a1c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x333a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_333a20:
    // 0x333a20: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x333a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_333a24:
    // 0x333a24: 0x78420430  lq          $v0, 0x430($v0)
    ctx->pc = 0x333a24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1072)));
label_333a28:
    // 0x333a28: 0xc063efc  jal         func_18FBF0
label_333a2c:
    if (ctx->pc == 0x333A2Cu) {
        ctx->pc = 0x333A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A28u;
        // 0x333a2c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333A30u;
        goto label_333a30;
    }
    ctx->pc = 0x333A28u;
    SET_GPR_U32(ctx, 31, 0x333A30u);
    ctx->pc = 0x333A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A28u;
    // 0x333a2c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FBF0u, 0x333A28u, 0x333A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A30u;
label_333a30:
    // 0x333a30: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x333a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
label_333a34:
    // 0x333a34: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x333a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_333a38:
    // 0x333a38: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x333a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_333a3c:
    // 0x333a3c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x333a3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_333a40:
    // 0x333a40: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x333a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_333a44:
    // 0x333a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x333a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333a48:
    // 0x333a48: 0x0  nop
    ctx->pc = 0x333a48u;
    // NOP
label_333a4c:
    // 0x333a4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x333a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_333a50:
    // 0x333a50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333a54:
    // 0x333a54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_333a58:
    if (ctx->pc == 0x333A58u) {
        ctx->pc = 0x333A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A54u;
        // 0x333a58: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333A5Cu;
        goto label_333a5c;
    }
    ctx->pc = 0x333A54u;
    {
        const bool branch_taken_0x333a54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x333A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A54u;
        // 0x333a58: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a54) {
            ctx->pc = 0x333A6Cu;
            goto label_333a6c;
        }
    }
    ctx->pc = 0x333A5Cu;
label_333a5c:
    // 0x333a5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333a60:
    // 0x333a60: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333a64:
    // 0x333a64: 0x10000008  b           . + 4 + (0x8 << 2)
label_333a68:
    if (ctx->pc == 0x333A68u) {
        ctx->pc = 0x333A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A64u;
        // 0x333a68: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x333A6Cu;
        goto label_333a6c;
    }
    ctx->pc = 0x333A64u;
    {
        const bool branch_taken_0x333a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A64u;
        // 0x333a68: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a64) {
            ctx->pc = 0x333A88u;
            goto label_333a88;
        }
    }
    ctx->pc = 0x333A6Cu;
label_333a6c:
    // 0x333a6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333a6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333a70:
    // 0x333a70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x333a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_333a74:
    // 0x333a74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333a78:
    // 0x333a78: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333a7c:
    // 0x333a7c: 0x0  nop
    ctx->pc = 0x333a7cu;
    // NOP
label_333a80:
    // 0x333a80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x333a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_333a84:
    // 0x333a84: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x333a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_333a88:
    // 0x333a88: 0x102000bd  beqz        $at, . + 4 + (0xBD << 2)
label_333a8c:
    if (ctx->pc == 0x333A8Cu) {
        ctx->pc = 0x333A90u;
        goto label_333a90;
    }
    ctx->pc = 0x333A88u;
    {
        const bool branch_taken_0x333a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333a88) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333A90u;
label_333a90:
    // 0x333a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333a94:
    // 0x333a94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x333a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333a98:
    // 0x333a98: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x333a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_333a9c:
    // 0x333a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333aa0:
    // 0x333aa0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x333aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_333aa4:
    // 0x333aa4: 0xc063efc  jal         func_18FBF0
label_333aa8:
    if (ctx->pc == 0x333AA8u) {
        ctx->pc = 0x333AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AA4u;
        // 0x333aa8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333AACu;
        goto label_333aac;
    }
    ctx->pc = 0x333AA4u;
    SET_GPR_U32(ctx, 31, 0x333AACu);
    ctx->pc = 0x333AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333AA4u;
    // 0x333aa8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FBF0u, 0x333AA4u, 0x333AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333AACu;
label_333aac:
    // 0x333aac: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_333ab0:
    if (ctx->pc == 0x333AB0u) {
        ctx->pc = 0x333AB4u;
        goto label_333ab4;
    }
    ctx->pc = 0x333AACu;
    {
        const bool branch_taken_0x333aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333aac) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333AB4u;
label_333ab4:
    // 0x333ab4: 0x0  nop
    ctx->pc = 0x333ab4u;
    // NOP
label_333ab8:
    // 0x333ab8: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x333ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
label_333abc:
    // 0x333abc: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
label_333ac0:
    if (ctx->pc == 0x333AC0u) {
        ctx->pc = 0x333AC4u;
        goto label_333ac4;
    }
    ctx->pc = 0x333ABCu;
    {
        const bool branch_taken_0x333abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333abc) {
            ctx->pc = 0x333BB0u;
            goto label_333bb0;
        }
    }
    ctx->pc = 0x333AC4u;
label_333ac4:
    // 0x333ac4: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x333ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_333ac8:
    // 0x333ac8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x333ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_333acc:
    // 0x333acc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x333accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_333ad0:
    // 0x333ad0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x333ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_333ad4:
    // 0x333ad4: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x333ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_333ad8:
    // 0x333ad8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x333ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_333adc:
    // 0x333adc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x333adcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_333ae0:
    // 0x333ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x333ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333ae4:
    // 0x333ae4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x333ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_333ae8:
    // 0x333ae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x333ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_333aec:
    // 0x333aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333af0:
    // 0x333af0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_333af4:
    if (ctx->pc == 0x333AF4u) {
        ctx->pc = 0x333AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AF0u;
        // 0x333af4: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333AF8u;
        goto label_333af8;
    }
    ctx->pc = 0x333AF0u;
    {
        const bool branch_taken_0x333af0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x333AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AF0u;
        // 0x333af4: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333af0) {
            ctx->pc = 0x333B08u;
            goto label_333b08;
        }
    }
    ctx->pc = 0x333AF8u;
label_333af8:
    // 0x333af8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333afc:
    // 0x333afc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333b00:
    // 0x333b00: 0x10000008  b           . + 4 + (0x8 << 2)
label_333b04:
    if (ctx->pc == 0x333B04u) {
        ctx->pc = 0x333B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B00u;
        // 0x333b04: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x333B08u;
        goto label_333b08;
    }
    ctx->pc = 0x333B00u;
    {
        const bool branch_taken_0x333b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B00u;
        // 0x333b04: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b00) {
            ctx->pc = 0x333B24u;
            goto label_333b24;
        }
    }
    ctx->pc = 0x333B08u;
label_333b08:
    // 0x333b08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333b08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333b0c:
    // 0x333b0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x333b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_333b10:
    // 0x333b10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333b14:
    // 0x333b14: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333b18:
    // 0x333b18: 0x0  nop
    ctx->pc = 0x333b18u;
    // NOP
label_333b1c:
    // 0x333b1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x333b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_333b20:
    // 0x333b20: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x333b20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_333b24:
    // 0x333b24: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
label_333b28:
    if (ctx->pc == 0x333B28u) {
        ctx->pc = 0x333B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B24u;
        // 0x333b28: 0x3c034228  lui         $v1, 0x4228 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16936 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333B2Cu;
        goto label_333b2c;
    }
    ctx->pc = 0x333B24u;
    {
        const bool branch_taken_0x333b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B24u;
        // 0x333b28: 0x3c034228  lui         $v1, 0x4228 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b24) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333B2Cu;
label_333b2c:
    // 0x333b2c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x333b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_333b30:
    // 0x333b30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x333b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_333b34:
    // 0x333b34: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x333b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_333b38:
    // 0x333b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333b3c:
    // 0x333b3c: 0x0  nop
    ctx->pc = 0x333b3cu;
    // NOP
label_333b40:
    // 0x333b40: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x333b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_333b44:
    // 0x333b44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x333b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_333b48:
    // 0x333b48: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x333b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_333b4c:
    // 0x333b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333b50:
    // 0x333b50: 0x0  nop
    ctx->pc = 0x333b50u;
    // NOP
label_333b54:
    // 0x333b54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333b54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333b58:
    // 0x333b58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_333b5c:
    if (ctx->pc == 0x333B5Cu) {
        ctx->pc = 0x333B60u;
        goto label_333b60;
    }
    ctx->pc = 0x333B58u;
    {
        const bool branch_taken_0x333b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x333b58) {
            ctx->pc = 0x333B70u;
            goto label_333b70;
        }
    }
    ctx->pc = 0x333B60u;
label_333b60:
    // 0x333b60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333b64:
    // 0x333b64: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333b68:
    // 0x333b68: 0x10000007  b           . + 4 + (0x7 << 2)
label_333b6c:
    if (ctx->pc == 0x333B6Cu) {
        ctx->pc = 0x333B70u;
        goto label_333b70;
    }
    ctx->pc = 0x333B68u;
    {
        const bool branch_taken_0x333b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333b68) {
            ctx->pc = 0x333B88u;
            goto label_333b88;
        }
    }
    ctx->pc = 0x333B70u;
label_333b70:
    // 0x333b70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333b70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333b74:
    // 0x333b74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_333b78:
    // 0x333b78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333b7c:
    // 0x333b7c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333b80:
    // 0x333b80: 0x0  nop
    ctx->pc = 0x333b80u;
    // NOP
label_333b84:
    // 0x333b84: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x333b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_333b88:
    // 0x333b88: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x333b88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_333b8c:
    // 0x333b8c: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x333b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
label_333b90:
    // 0x333b90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x333b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333b94:
    // 0x333b94: 0x24c6a210  addiu       $a2, $a2, -0x5DF0
    ctx->pc = 0x333b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943248));
label_333b98:
    // 0x333b98: 0xc063efc  jal         func_18FBF0
label_333b9c:
    if (ctx->pc == 0x333B9Cu) {
        ctx->pc = 0x333B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B98u;
        // 0x333b9c: 0x24e7a220  addiu       $a3, $a3, -0x5DE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333BA0u;
        goto label_333ba0;
    }
    ctx->pc = 0x333B98u;
    SET_GPR_U32(ctx, 31, 0x333BA0u);
    ctx->pc = 0x333B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B98u;
    // 0x333b9c: 0x24e7a220  addiu       $a3, $a3, -0x5DE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FBF0u, 0x333B98u, 0x333BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BA0u;
label_333ba0:
    // 0x333ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333ba4:
    // 0x333ba4: 0x10000076  b           . + 4 + (0x76 << 2)
label_333ba8:
    if (ctx->pc == 0x333BA8u) {
        ctx->pc = 0x333BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BA4u;
        // 0x333ba8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333BACu;
        goto label_333bac;
    }
    ctx->pc = 0x333BA4u;
    {
        const bool branch_taken_0x333ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BA4u;
        // 0x333ba8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ba4) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333BACu;
label_333bac:
    // 0x333bac: 0x0  nop
    ctx->pc = 0x333bacu;
    // NOP
label_333bb0:
    // 0x333bb0: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x333bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_333bb4:
    // 0x333bb4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x333bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_333bb8:
    // 0x333bb8: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_333bbc:
    if (ctx->pc == 0x333BBCu) {
        ctx->pc = 0x333BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BB8u;
        // 0x333bbc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333BC0u;
        goto label_333bc0;
    }
    ctx->pc = 0x333BB8u;
    {
        const bool branch_taken_0x333bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BB8u;
        // 0x333bbc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bb8) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333BC0u;
label_333bc0:
    // 0x333bc0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x333bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_333bc4:
    // 0x333bc4: 0x90286c1c  lbu         $t0, 0x6C1C($at)
    ctx->pc = 0x333bc4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_333bc8:
    // 0x333bc8: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x333bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_333bcc:
    // 0x333bcc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x333bccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_333bd0:
    // 0x333bd0: 0x27878060  addiu       $a3, $gp, -0x7FA0
    ctx->pc = 0x333bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_333bd4:
    // 0x333bd4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x333bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_333bd8:
    // 0x333bd8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x333bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_333bdc:
    // 0x333bdc: 0x26240870  addiu       $a0, $s1, 0x870
    ctx->pc = 0x333bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
label_333be0:
    // 0x333be0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x333be0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_333be4:
    // 0x333be4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x333be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_333be8:
    // 0x333be8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x333be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_333bec:
    // 0x333bec: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x333becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_333bf0:
    // 0x333bf0: 0x2442a2d0  addiu       $v0, $v0, -0x5D30
    ctx->pc = 0x333bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943440));
label_333bf4:
    // 0x333bf4: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x333bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_333bf8:
    // 0x333bf8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x333bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_333bfc:
    // 0x333bfc: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x333bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_333c00:
    // 0x333c00: 0xc0414ca  jal         func_105328
label_333c04:
    if (ctx->pc == 0x333C04u) {
        ctx->pc = 0x333C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C00u;
        // 0x333c04: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333C08u;
        goto label_333c08;
    }
    ctx->pc = 0x333C00u;
    SET_GPR_U32(ctx, 31, 0x333C08u);
    ctx->pc = 0x333C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C00u;
    // 0x333c04: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x333C00u, 0x333C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C08u;
label_333c08:
    // 0x333c08: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x333c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_333c0c:
    // 0x333c0c: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x333c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_333c10:
    // 0x333c10: 0xc0414ca  jal         func_105328
label_333c14:
    if (ctx->pc == 0x333C14u) {
        ctx->pc = 0x333C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C10u;
        // 0x333c14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333C18u;
        goto label_333c18;
    }
    ctx->pc = 0x333C10u;
    SET_GPR_U32(ctx, 31, 0x333C18u);
    ctx->pc = 0x333C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C10u;
    // 0x333c14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x333C10u, 0x333C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C18u;
label_333c18:
    // 0x333c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x333c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_333c1c:
    // 0x333c1c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x333c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
label_333c20:
    // 0x333c20: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x333c20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_333c24:
    // 0x333c24: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x333c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_333c28:
    // 0x333c28: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x333c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_333c2c:
    // 0x333c2c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x333c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_333c30:
    // 0x333c30: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x333c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_333c34:
    // 0x333c34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x333c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_333c38:
    // 0x333c38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x333c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_333c3c:
    // 0x333c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333c40:
    // 0x333c40: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x333c40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_333c44:
    // 0x333c44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x333c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_333c48:
    // 0x333c48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333c48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333c4c:
    // 0x333c4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_333c50:
    if (ctx->pc == 0x333C50u) {
        ctx->pc = 0x333C54u;
        goto label_333c54;
    }
    ctx->pc = 0x333C4Cu;
    {
        const bool branch_taken_0x333c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x333c4c) {
            ctx->pc = 0x333C64u;
            goto label_333c64;
        }
    }
    ctx->pc = 0x333C54u;
label_333c54:
    // 0x333c54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333c58:
    // 0x333c58: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333c5c:
    // 0x333c5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_333c60:
    if (ctx->pc == 0x333C60u) {
        ctx->pc = 0x333C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C5Cu;
        // 0x333c60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333C64u;
        goto label_333c64;
    }
    ctx->pc = 0x333C5Cu;
    {
        const bool branch_taken_0x333c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C5Cu;
        // 0x333c60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c5c) {
            ctx->pc = 0x333C80u;
            goto label_333c80;
        }
    }
    ctx->pc = 0x333C64u;
label_333c64:
    // 0x333c64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333c64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333c68:
    // 0x333c68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_333c6c:
    // 0x333c6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333c6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333c70:
    // 0x333c70: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333c74:
    // 0x333c74: 0x0  nop
    ctx->pc = 0x333c74u;
    // NOP
label_333c78:
    // 0x333c78: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x333c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_333c7c:
    // 0x333c7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x333c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_333c80:
    // 0x333c80: 0x26260870  addiu       $a2, $s1, 0x870
    ctx->pc = 0x333c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
label_333c84:
    // 0x333c84: 0xc063efc  jal         func_18FBF0
label_333c88:
    if (ctx->pc == 0x333C88u) {
        ctx->pc = 0x333C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C84u;
        // 0x333c88: 0x26270890  addiu       $a3, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333C8Cu;
        goto label_333c8c;
    }
    ctx->pc = 0x333C84u;
    SET_GPR_U32(ctx, 31, 0x333C8Cu);
    ctx->pc = 0x333C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C84u;
    // 0x333c88: 0x26270890  addiu       $a3, $s1, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FBF0u, 0x333C84u, 0x333C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C8Cu;
label_333c8c:
    // 0x333c8c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x333c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_333c90:
    // 0x333c90: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x333c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_333c94:
    // 0x333c94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x333c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_333c98:
    // 0x333c98: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x333c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_333c9c:
    // 0x333c9c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x333c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_333ca0:
    // 0x333ca0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x333ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_333ca4:
    // 0x333ca4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x333ca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_333ca8:
    // 0x333ca8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x333ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_333cac:
    // 0x333cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333cb0:
    // 0x333cb0: 0x0  nop
    ctx->pc = 0x333cb0u;
    // NOP
label_333cb4:
    // 0x333cb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x333cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_333cb8:
    // 0x333cb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333cbc:
    // 0x333cbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_333cc0:
    if (ctx->pc == 0x333CC0u) {
        ctx->pc = 0x333CC4u;
        goto label_333cc4;
    }
    ctx->pc = 0x333CBCu;
    {
        const bool branch_taken_0x333cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x333cbc) {
            ctx->pc = 0x333CD4u;
            goto label_333cd4;
        }
    }
    ctx->pc = 0x333CC4u;
label_333cc4:
    // 0x333cc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333cc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333cc8:
    // 0x333cc8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333ccc:
    // 0x333ccc: 0x10000007  b           . + 4 + (0x7 << 2)
label_333cd0:
    if (ctx->pc == 0x333CD0u) {
        ctx->pc = 0x333CD4u;
        goto label_333cd4;
    }
    ctx->pc = 0x333CCCu;
    {
        const bool branch_taken_0x333ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ccc) {
            ctx->pc = 0x333CECu;
            goto label_333cec;
        }
    }
    ctx->pc = 0x333CD4u;
label_333cd4:
    // 0x333cd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333cd8:
    // 0x333cd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_333cdc:
    // 0x333cdc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333ce0:
    // 0x333ce0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333ce4:
    // 0x333ce4: 0x0  nop
    ctx->pc = 0x333ce4u;
    // NOP
label_333ce8:
    // 0x333ce8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x333ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_333cec:
    // 0x333cec: 0xc0b2d88  jal         func_2CB620
label_333cf0:
    if (ctx->pc == 0x333CF0u) {
        ctx->pc = 0x333CF4u;
        goto label_333cf4;
    }
    ctx->pc = 0x333CECu;
    SET_GPR_U32(ctx, 31, 0x333CF4u);
    ctx->pc = 0x2CB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB620u, 0x333CECu, 0x333CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CF4u;
label_333cf4:
    // 0x333cf4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x333cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_333cf8:
    // 0x333cf8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x333cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_333cfc:
    // 0x333cfc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x333cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_333d00:
    // 0x333d00: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x333d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_333d04:
    // 0x333d04: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x333d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_333d08:
    // 0x333d08: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x333d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_333d0c:
    // 0x333d0c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x333d0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_333d10:
    // 0x333d10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x333d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_333d14:
    // 0x333d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333d18:
    // 0x333d18: 0x0  nop
    ctx->pc = 0x333d18u;
    // NOP
label_333d1c:
    // 0x333d1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x333d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_333d20:
    // 0x333d20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333d20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333d24:
    // 0x333d24: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_333d28:
    if (ctx->pc == 0x333D28u) {
        ctx->pc = 0x333D2Cu;
        goto label_333d2c;
    }
    ctx->pc = 0x333D24u;
    {
        const bool branch_taken_0x333d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x333d24) {
            ctx->pc = 0x333D3Cu;
            goto label_333d3c;
        }
    }
    ctx->pc = 0x333D2Cu;
label_333d2c:
    // 0x333d2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333d2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333d30:
    // 0x333d30: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333d30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333d34:
    // 0x333d34: 0x10000008  b           . + 4 + (0x8 << 2)
label_333d38:
    if (ctx->pc == 0x333D38u) {
        ctx->pc = 0x333D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D34u;
        // 0x333d38: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333D3Cu;
        goto label_333d3c;
    }
    ctx->pc = 0x333D34u;
    {
        const bool branch_taken_0x333d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D34u;
        // 0x333d38: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d34) {
            ctx->pc = 0x333D58u;
            goto label_333d58;
        }
    }
    ctx->pc = 0x333D3Cu;
label_333d3c:
    // 0x333d3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333d3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333d40:
    // 0x333d40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x333d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_333d44:
    // 0x333d44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333d44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333d48:
    // 0x333d48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333d4c:
    // 0x333d4c: 0x0  nop
    ctx->pc = 0x333d4cu;
    // NOP
label_333d50:
    // 0x333d50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x333d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_333d54:
    // 0x333d54: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x333d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_333d58:
    // 0x333d58: 0xc0ac8bc  jal         func_2B22F0
label_333d5c:
    if (ctx->pc == 0x333D5Cu) {
        ctx->pc = 0x333D60u;
        goto label_333d60;
    }
    ctx->pc = 0x333D58u;
    SET_GPR_U32(ctx, 31, 0x333D60u);
    ctx->pc = 0x2B22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22F0u, 0x333D58u, 0x333D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D60u;
label_333d60:
    // 0x333d60: 0x10000007  b           . + 4 + (0x7 << 2)
label_333d64:
    if (ctx->pc == 0x333D64u) {
        ctx->pc = 0x333D68u;
        goto label_333d68;
    }
    ctx->pc = 0x333D60u;
    {
        const bool branch_taken_0x333d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d60) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333D68u;
label_333d68:
    // 0x333d68: 0xc0cd014  jal         func_334050
label_333d6c:
    if (ctx->pc == 0x333D6Cu) {
        ctx->pc = 0x333D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D68u;
        // 0x333d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333D70u;
        goto label_333d70;
    }
    ctx->pc = 0x333D68u;
    SET_GPR_U32(ctx, 31, 0x333D70u);
    ctx->pc = 0x333D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D68u;
    // 0x333d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334050u, 0x333D68u, 0x333D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D70u;
label_333d70:
    // 0x333d70: 0x10000003  b           . + 4 + (0x3 << 2)
label_333d74:
    if (ctx->pc == 0x333D74u) {
        ctx->pc = 0x333D78u;
        goto label_333d78;
    }
    ctx->pc = 0x333D70u;
    {
        const bool branch_taken_0x333d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d70) {
            ctx->pc = 0x333D80u;
            goto label_333d80;
        }
    }
    ctx->pc = 0x333D78u;
label_333d78:
    // 0x333d78: 0xc0ccfb0  jal         func_333EC0
label_333d7c:
    if (ctx->pc == 0x333D7Cu) {
        ctx->pc = 0x333D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D78u;
        // 0x333d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333D80u;
        goto label_333d80;
    }
    ctx->pc = 0x333D78u;
    SET_GPR_U32(ctx, 31, 0x333D80u);
    ctx->pc = 0x333D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D78u;
    // 0x333d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333EC0u, 0x333D78u, 0x333D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D80u;
label_333d80:
    // 0x333d80: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x333d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_333d84:
    // 0x333d84: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x333d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_333d88:
    // 0x333d88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_333d8c:
    if (ctx->pc == 0x333D8Cu) {
        ctx->pc = 0x333D90u;
        goto label_333d90;
    }
    ctx->pc = 0x333D88u;
    {
        const bool branch_taken_0x333d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d88) {
            ctx->pc = 0x333DA8u;
            goto label_333da8;
        }
    }
    ctx->pc = 0x333D90u;
label_333d90:
    // 0x333d90: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x333d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_333d94:
    // 0x333d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333d98:
    // 0x333d98: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_333d9c:
    if (ctx->pc == 0x333D9Cu) {
        ctx->pc = 0x333DA0u;
        goto label_333da0;
    }
    ctx->pc = 0x333D98u;
    {
        const bool branch_taken_0x333d98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x333d98) {
            ctx->pc = 0x333DA8u;
            goto label_333da8;
        }
    }
    ctx->pc = 0x333DA0u;
label_333da0:
    // 0x333da0: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x333da0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_333da4:
    // 0x333da4: 0x7e232b40  sq          $v1, 0x2B40($s1)
    ctx->pc = 0x333da4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 11072), GPR_VEC(ctx, 3));
label_333da8:
    // 0x333da8: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x333da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_333dac:
    // 0x333dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333db0:
    // 0x333db0: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_333db4:
    if (ctx->pc == 0x333DB4u) {
        ctx->pc = 0x333DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DB0u;
        // 0x333db4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333DB8u;
        goto label_333db8;
    }
    ctx->pc = 0x333DB0u;
    {
        const bool branch_taken_0x333db0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x333DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DB0u;
        // 0x333db4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333db0) {
            ctx->pc = 0x333E10u;
            goto label_333e10;
        }
    }
    ctx->pc = 0x333DB8u;
label_333db8:
    // 0x333db8: 0x26252b30  addiu       $a1, $s1, 0x2B30
    ctx->pc = 0x333db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11056));
label_333dbc:
    // 0x333dbc: 0xc0414d0  jal         func_105340
label_333dc0:
    if (ctx->pc == 0x333DC0u) {
        ctx->pc = 0x333DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DBCu;
        // 0x333dc0: 0x26262b40  addiu       $a2, $s1, 0x2B40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333DC4u;
        goto label_333dc4;
    }
    ctx->pc = 0x333DBCu;
    SET_GPR_U32(ctx, 31, 0x333DC4u);
    ctx->pc = 0x333DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DBCu;
    // 0x333dc0: 0x26262b40  addiu       $a2, $s1, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x333DBCu, 0x333DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DC4u;
label_333dc4:
    // 0x333dc4: 0xc0968f0  jal         func_25A3C0
label_333dc8:
    if (ctx->pc == 0x333DC8u) {
        ctx->pc = 0x333DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DC4u;
        // 0x333dc8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333DCCu;
        goto label_333dcc;
    }
    ctx->pc = 0x333DC4u;
    SET_GPR_U32(ctx, 31, 0x333DCCu);
    ctx->pc = 0x333DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DC4u;
    // 0x333dc8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x333DC4u, 0x333DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DCCu;
label_333dcc:
    // 0x333dcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x333dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_333dd0:
    // 0x333dd0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x333dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_333dd4:
    // 0x333dd4: 0x0  nop
    ctx->pc = 0x333dd4u;
    // NOP
label_333dd8:
    // 0x333dd8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x333dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333ddc:
    // 0x333ddc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_333de0:
    if (ctx->pc == 0x333DE0u) {
        ctx->pc = 0x333DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DDCu;
        // 0x333de0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333DE4u;
        goto label_333de4;
    }
    ctx->pc = 0x333DDCu;
    {
        const bool branch_taken_0x333ddc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x333DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DDCu;
        // 0x333de0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ddc) {
            ctx->pc = 0x333E10u;
            goto label_333e10;
        }
    }
    ctx->pc = 0x333DE4u;
label_333de4:
    // 0x333de4: 0xc09693c  jal         func_25A4F0
label_333de8:
    if (ctx->pc == 0x333DE8u) {
        ctx->pc = 0x333DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DE4u;
        // 0x333de8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333DECu;
        goto label_333dec;
    }
    ctx->pc = 0x333DE4u;
    SET_GPR_U32(ctx, 31, 0x333DECu);
    ctx->pc = 0x333DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DE4u;
    // 0x333de8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x333DE4u, 0x333DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DECu;
label_333dec:
    // 0x333dec: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x333decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_333df0:
    // 0x333df0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x333df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333df4:
    // 0x333df4: 0xc0414ca  jal         func_105328
label_333df8:
    if (ctx->pc == 0x333DF8u) {
        ctx->pc = 0x333DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DF4u;
        // 0x333df8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333DFCu;
        goto label_333dfc;
    }
    ctx->pc = 0x333DF4u;
    SET_GPR_U32(ctx, 31, 0x333DFCu);
    ctx->pc = 0x333DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DF4u;
    // 0x333df8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x333DF4u, 0x333DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DFCu;
label_333dfc:
    // 0x333dfc: 0x26242b40  addiu       $a0, $s1, 0x2B40
    ctx->pc = 0x333dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11072));
label_333e00:
    // 0x333e00: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x333e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333e04:
    // 0x333e04: 0xc0414ca  jal         func_105328
label_333e08:
    if (ctx->pc == 0x333E08u) {
        ctx->pc = 0x333E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E04u;
        // 0x333e08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333E0Cu;
        goto label_333e0c;
    }
    ctx->pc = 0x333E04u;
    SET_GPR_U32(ctx, 31, 0x333E0Cu);
    ctx->pc = 0x333E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E04u;
    // 0x333e08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x333E04u, 0x333E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E0Cu;
label_333e0c:
    // 0x333e0c: 0x0  nop
    ctx->pc = 0x333e0cu;
    // NOP
label_333e10:
    // 0x333e10: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x333e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_333e14:
    // 0x333e14: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x333e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_333e18:
    // 0x333e18: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x333e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_333e1c:
    // 0x333e1c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x333e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_333e20:
    // 0x333e20: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x333e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_333e24:
    // 0x333e24: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x333e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_333e28:
    // 0x333e28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x333e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_333e2c:
    // 0x333e2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x333e2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_333e30:
    // 0x333e30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x333e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_333e34:
    // 0x333e34: 0x0  nop
    ctx->pc = 0x333e34u;
    // NOP
label_333e38:
    // 0x333e38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x333e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_333e3c:
    // 0x333e3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x333e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_333e40:
    // 0x333e40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_333e44:
    if (ctx->pc == 0x333E44u) {
        ctx->pc = 0x333E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E40u;
        // 0x333e44: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333E48u;
        goto label_333e48;
    }
    ctx->pc = 0x333E40u;
    {
        const bool branch_taken_0x333e40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x333E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E40u;
        // 0x333e44: 0x96250824  lhu         $a1, 0x824($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e40) {
            ctx->pc = 0x333E58u;
            goto label_333e58;
        }
    }
    ctx->pc = 0x333E48u;
label_333e48:
    // 0x333e48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333e4c:
    // 0x333e4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333e50:
    // 0x333e50: 0x10000007  b           . + 4 + (0x7 << 2)
label_333e54:
    if (ctx->pc == 0x333E54u) {
        ctx->pc = 0x333E58u;
        goto label_333e58;
    }
    ctx->pc = 0x333E50u;
    {
        const bool branch_taken_0x333e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e50) {
            ctx->pc = 0x333E70u;
            goto label_333e70;
        }
    }
    ctx->pc = 0x333E58u;
label_333e58:
    // 0x333e58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x333e58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_333e5c:
    // 0x333e5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x333e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_333e60:
    // 0x333e60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333e60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_333e64:
    // 0x333e64: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x333e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_333e68:
    // 0x333e68: 0x0  nop
    ctx->pc = 0x333e68u;
    // NOP
label_333e6c:
    // 0x333e6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x333e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_333e70:
    // 0x333e70: 0x14a4000b  bne         $a1, $a0, . + 4 + (0xB << 2)
label_333e74:
    if (ctx->pc == 0x333E74u) {
        ctx->pc = 0x333E78u;
        goto label_333e78;
    }
    ctx->pc = 0x333E70u;
    {
        const bool branch_taken_0x333e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x333e70) {
            ctx->pc = 0x333EA0u;
            goto label_333ea0;
        }
    }
    ctx->pc = 0x333E78u;
label_333e78:
    // 0x333e78: 0x962407f2  lhu         $a0, 0x7F2($s1)
    ctx->pc = 0x333e78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2034)));
label_333e7c:
    // 0x333e7c: 0x240300d9  addiu       $v1, $zero, 0xD9
    ctx->pc = 0x333e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_333e80:
    // 0x333e80: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_333e84:
    if (ctx->pc == 0x333E84u) {
        ctx->pc = 0x333E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E80u;
        // 0x333e84: 0x3c03004f  lui         $v1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333E88u;
        goto label_333e88;
    }
    ctx->pc = 0x333E80u;
    {
        const bool branch_taken_0x333e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x333E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E80u;
        // 0x333e84: 0x3c03004f  lui         $v1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e80) {
            ctx->pc = 0x333EA0u;
            goto label_333ea0;
        }
    }
    ctx->pc = 0x333E88u;
label_333e88:
    // 0x333e88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x333e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_333e8c:
    // 0x333e8c: 0x2463a2e0  addiu       $v1, $v1, -0x5D20
    ctx->pc = 0x333e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943456));
label_333e90:
    // 0x333e90: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x333e90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_333e94:
    // 0x333e94: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x333e94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_333e98:
    // 0x333e98: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x333e98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_333e9c:
    // 0x333e9c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x333e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_333ea0:
    // 0x333ea0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x333ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_333ea4:
    // 0x333ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_333ea8:
    // 0x333ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_333eac:
    // 0x333eac: 0x3e00008  jr          $ra
label_333eb0:
    if (ctx->pc == 0x333EB0u) {
        ctx->pc = 0x333EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EACu;
        // 0x333eb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x333EB4u;
        goto label_fallthrough_0x333eac;
    }
    ctx->pc = 0x333EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EACu;
        // 0x333eb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x333eac:
    ctx->pc = 0x333EB4u;
}
