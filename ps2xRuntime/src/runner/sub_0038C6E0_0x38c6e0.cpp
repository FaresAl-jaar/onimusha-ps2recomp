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

// Function: sub_0038C6E0
// Address: 0x38c6e0 - 0x38cd34
void sub_0038C6E0_0x38c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C6E0_0x38c6e0");
#endif

    switch (ctx->pc) {
        case 0x38c6e0u: goto label_38c6e0;
        case 0x38c6e4u: goto label_38c6e4;
        case 0x38c6e8u: goto label_38c6e8;
        case 0x38c6ecu: goto label_38c6ec;
        case 0x38c6f0u: goto label_38c6f0;
        case 0x38c6f4u: goto label_38c6f4;
        case 0x38c6f8u: goto label_38c6f8;
        case 0x38c6fcu: goto label_38c6fc;
        case 0x38c700u: goto label_38c700;
        case 0x38c704u: goto label_38c704;
        case 0x38c708u: goto label_38c708;
        case 0x38c70cu: goto label_38c70c;
        case 0x38c710u: goto label_38c710;
        case 0x38c714u: goto label_38c714;
        case 0x38c718u: goto label_38c718;
        case 0x38c71cu: goto label_38c71c;
        case 0x38c720u: goto label_38c720;
        case 0x38c724u: goto label_38c724;
        case 0x38c728u: goto label_38c728;
        case 0x38c72cu: goto label_38c72c;
        case 0x38c730u: goto label_38c730;
        case 0x38c734u: goto label_38c734;
        case 0x38c738u: goto label_38c738;
        case 0x38c73cu: goto label_38c73c;
        case 0x38c740u: goto label_38c740;
        case 0x38c744u: goto label_38c744;
        case 0x38c748u: goto label_38c748;
        case 0x38c74cu: goto label_38c74c;
        case 0x38c750u: goto label_38c750;
        case 0x38c754u: goto label_38c754;
        case 0x38c758u: goto label_38c758;
        case 0x38c75cu: goto label_38c75c;
        case 0x38c760u: goto label_38c760;
        case 0x38c764u: goto label_38c764;
        case 0x38c768u: goto label_38c768;
        case 0x38c76cu: goto label_38c76c;
        case 0x38c770u: goto label_38c770;
        case 0x38c774u: goto label_38c774;
        case 0x38c778u: goto label_38c778;
        case 0x38c77cu: goto label_38c77c;
        case 0x38c780u: goto label_38c780;
        case 0x38c784u: goto label_38c784;
        case 0x38c788u: goto label_38c788;
        case 0x38c78cu: goto label_38c78c;
        case 0x38c790u: goto label_38c790;
        case 0x38c794u: goto label_38c794;
        case 0x38c798u: goto label_38c798;
        case 0x38c79cu: goto label_38c79c;
        case 0x38c7a0u: goto label_38c7a0;
        case 0x38c7a4u: goto label_38c7a4;
        case 0x38c7a8u: goto label_38c7a8;
        case 0x38c7acu: goto label_38c7ac;
        case 0x38c7b0u: goto label_38c7b0;
        case 0x38c7b4u: goto label_38c7b4;
        case 0x38c7b8u: goto label_38c7b8;
        case 0x38c7bcu: goto label_38c7bc;
        case 0x38c7c0u: goto label_38c7c0;
        case 0x38c7c4u: goto label_38c7c4;
        case 0x38c7c8u: goto label_38c7c8;
        case 0x38c7ccu: goto label_38c7cc;
        case 0x38c7d0u: goto label_38c7d0;
        case 0x38c7d4u: goto label_38c7d4;
        case 0x38c7d8u: goto label_38c7d8;
        case 0x38c7dcu: goto label_38c7dc;
        case 0x38c7e0u: goto label_38c7e0;
        case 0x38c7e4u: goto label_38c7e4;
        case 0x38c7e8u: goto label_38c7e8;
        case 0x38c7ecu: goto label_38c7ec;
        case 0x38c7f0u: goto label_38c7f0;
        case 0x38c7f4u: goto label_38c7f4;
        case 0x38c7f8u: goto label_38c7f8;
        case 0x38c7fcu: goto label_38c7fc;
        case 0x38c800u: goto label_38c800;
        case 0x38c804u: goto label_38c804;
        case 0x38c808u: goto label_38c808;
        case 0x38c80cu: goto label_38c80c;
        case 0x38c810u: goto label_38c810;
        case 0x38c814u: goto label_38c814;
        case 0x38c818u: goto label_38c818;
        case 0x38c81cu: goto label_38c81c;
        case 0x38c820u: goto label_38c820;
        case 0x38c824u: goto label_38c824;
        case 0x38c828u: goto label_38c828;
        case 0x38c82cu: goto label_38c82c;
        case 0x38c830u: goto label_38c830;
        case 0x38c834u: goto label_38c834;
        case 0x38c838u: goto label_38c838;
        case 0x38c83cu: goto label_38c83c;
        case 0x38c840u: goto label_38c840;
        case 0x38c844u: goto label_38c844;
        case 0x38c848u: goto label_38c848;
        case 0x38c84cu: goto label_38c84c;
        case 0x38c850u: goto label_38c850;
        case 0x38c854u: goto label_38c854;
        case 0x38c858u: goto label_38c858;
        case 0x38c85cu: goto label_38c85c;
        case 0x38c860u: goto label_38c860;
        case 0x38c864u: goto label_38c864;
        case 0x38c868u: goto label_38c868;
        case 0x38c86cu: goto label_38c86c;
        case 0x38c870u: goto label_38c870;
        case 0x38c874u: goto label_38c874;
        case 0x38c878u: goto label_38c878;
        case 0x38c87cu: goto label_38c87c;
        case 0x38c880u: goto label_38c880;
        case 0x38c884u: goto label_38c884;
        case 0x38c888u: goto label_38c888;
        case 0x38c88cu: goto label_38c88c;
        case 0x38c890u: goto label_38c890;
        case 0x38c894u: goto label_38c894;
        case 0x38c898u: goto label_38c898;
        case 0x38c89cu: goto label_38c89c;
        case 0x38c8a0u: goto label_38c8a0;
        case 0x38c8a4u: goto label_38c8a4;
        case 0x38c8a8u: goto label_38c8a8;
        case 0x38c8acu: goto label_38c8ac;
        case 0x38c8b0u: goto label_38c8b0;
        case 0x38c8b4u: goto label_38c8b4;
        case 0x38c8b8u: goto label_38c8b8;
        case 0x38c8bcu: goto label_38c8bc;
        case 0x38c8c0u: goto label_38c8c0;
        case 0x38c8c4u: goto label_38c8c4;
        case 0x38c8c8u: goto label_38c8c8;
        case 0x38c8ccu: goto label_38c8cc;
        case 0x38c8d0u: goto label_38c8d0;
        case 0x38c8d4u: goto label_38c8d4;
        case 0x38c8d8u: goto label_38c8d8;
        case 0x38c8dcu: goto label_38c8dc;
        case 0x38c8e0u: goto label_38c8e0;
        case 0x38c8e4u: goto label_38c8e4;
        case 0x38c8e8u: goto label_38c8e8;
        case 0x38c8ecu: goto label_38c8ec;
        case 0x38c8f0u: goto label_38c8f0;
        case 0x38c8f4u: goto label_38c8f4;
        case 0x38c8f8u: goto label_38c8f8;
        case 0x38c8fcu: goto label_38c8fc;
        case 0x38c900u: goto label_38c900;
        case 0x38c904u: goto label_38c904;
        case 0x38c908u: goto label_38c908;
        case 0x38c90cu: goto label_38c90c;
        case 0x38c910u: goto label_38c910;
        case 0x38c914u: goto label_38c914;
        case 0x38c918u: goto label_38c918;
        case 0x38c91cu: goto label_38c91c;
        case 0x38c920u: goto label_38c920;
        case 0x38c924u: goto label_38c924;
        case 0x38c928u: goto label_38c928;
        case 0x38c92cu: goto label_38c92c;
        case 0x38c930u: goto label_38c930;
        case 0x38c934u: goto label_38c934;
        case 0x38c938u: goto label_38c938;
        case 0x38c93cu: goto label_38c93c;
        case 0x38c940u: goto label_38c940;
        case 0x38c944u: goto label_38c944;
        case 0x38c948u: goto label_38c948;
        case 0x38c94cu: goto label_38c94c;
        case 0x38c950u: goto label_38c950;
        case 0x38c954u: goto label_38c954;
        case 0x38c958u: goto label_38c958;
        case 0x38c95cu: goto label_38c95c;
        case 0x38c960u: goto label_38c960;
        case 0x38c964u: goto label_38c964;
        case 0x38c968u: goto label_38c968;
        case 0x38c96cu: goto label_38c96c;
        case 0x38c970u: goto label_38c970;
        case 0x38c974u: goto label_38c974;
        case 0x38c978u: goto label_38c978;
        case 0x38c97cu: goto label_38c97c;
        case 0x38c980u: goto label_38c980;
        case 0x38c984u: goto label_38c984;
        case 0x38c988u: goto label_38c988;
        case 0x38c98cu: goto label_38c98c;
        case 0x38c990u: goto label_38c990;
        case 0x38c994u: goto label_38c994;
        case 0x38c998u: goto label_38c998;
        case 0x38c99cu: goto label_38c99c;
        case 0x38c9a0u: goto label_38c9a0;
        case 0x38c9a4u: goto label_38c9a4;
        case 0x38c9a8u: goto label_38c9a8;
        case 0x38c9acu: goto label_38c9ac;
        case 0x38c9b0u: goto label_38c9b0;
        case 0x38c9b4u: goto label_38c9b4;
        case 0x38c9b8u: goto label_38c9b8;
        case 0x38c9bcu: goto label_38c9bc;
        case 0x38c9c0u: goto label_38c9c0;
        case 0x38c9c4u: goto label_38c9c4;
        case 0x38c9c8u: goto label_38c9c8;
        case 0x38c9ccu: goto label_38c9cc;
        case 0x38c9d0u: goto label_38c9d0;
        case 0x38c9d4u: goto label_38c9d4;
        case 0x38c9d8u: goto label_38c9d8;
        case 0x38c9dcu: goto label_38c9dc;
        case 0x38c9e0u: goto label_38c9e0;
        case 0x38c9e4u: goto label_38c9e4;
        case 0x38c9e8u: goto label_38c9e8;
        case 0x38c9ecu: goto label_38c9ec;
        case 0x38c9f0u: goto label_38c9f0;
        case 0x38c9f4u: goto label_38c9f4;
        case 0x38c9f8u: goto label_38c9f8;
        case 0x38c9fcu: goto label_38c9fc;
        case 0x38ca00u: goto label_38ca00;
        case 0x38ca04u: goto label_38ca04;
        case 0x38ca08u: goto label_38ca08;
        case 0x38ca0cu: goto label_38ca0c;
        case 0x38ca10u: goto label_38ca10;
        case 0x38ca14u: goto label_38ca14;
        case 0x38ca18u: goto label_38ca18;
        case 0x38ca1cu: goto label_38ca1c;
        case 0x38ca20u: goto label_38ca20;
        case 0x38ca24u: goto label_38ca24;
        case 0x38ca28u: goto label_38ca28;
        case 0x38ca2cu: goto label_38ca2c;
        case 0x38ca30u: goto label_38ca30;
        case 0x38ca34u: goto label_38ca34;
        case 0x38ca38u: goto label_38ca38;
        case 0x38ca3cu: goto label_38ca3c;
        case 0x38ca40u: goto label_38ca40;
        case 0x38ca44u: goto label_38ca44;
        case 0x38ca48u: goto label_38ca48;
        case 0x38ca4cu: goto label_38ca4c;
        case 0x38ca50u: goto label_38ca50;
        case 0x38ca54u: goto label_38ca54;
        case 0x38ca58u: goto label_38ca58;
        case 0x38ca5cu: goto label_38ca5c;
        case 0x38ca60u: goto label_38ca60;
        case 0x38ca64u: goto label_38ca64;
        case 0x38ca68u: goto label_38ca68;
        case 0x38ca6cu: goto label_38ca6c;
        case 0x38ca70u: goto label_38ca70;
        case 0x38ca74u: goto label_38ca74;
        case 0x38ca78u: goto label_38ca78;
        case 0x38ca7cu: goto label_38ca7c;
        case 0x38ca80u: goto label_38ca80;
        case 0x38ca84u: goto label_38ca84;
        case 0x38ca88u: goto label_38ca88;
        case 0x38ca8cu: goto label_38ca8c;
        case 0x38ca90u: goto label_38ca90;
        case 0x38ca94u: goto label_38ca94;
        case 0x38ca98u: goto label_38ca98;
        case 0x38ca9cu: goto label_38ca9c;
        case 0x38caa0u: goto label_38caa0;
        case 0x38caa4u: goto label_38caa4;
        case 0x38caa8u: goto label_38caa8;
        case 0x38caacu: goto label_38caac;
        case 0x38cab0u: goto label_38cab0;
        case 0x38cab4u: goto label_38cab4;
        case 0x38cab8u: goto label_38cab8;
        case 0x38cabcu: goto label_38cabc;
        case 0x38cac0u: goto label_38cac0;
        case 0x38cac4u: goto label_38cac4;
        case 0x38cac8u: goto label_38cac8;
        case 0x38caccu: goto label_38cacc;
        case 0x38cad0u: goto label_38cad0;
        case 0x38cad4u: goto label_38cad4;
        case 0x38cad8u: goto label_38cad8;
        case 0x38cadcu: goto label_38cadc;
        case 0x38cae0u: goto label_38cae0;
        case 0x38cae4u: goto label_38cae4;
        case 0x38cae8u: goto label_38cae8;
        case 0x38caecu: goto label_38caec;
        case 0x38caf0u: goto label_38caf0;
        case 0x38caf4u: goto label_38caf4;
        case 0x38caf8u: goto label_38caf8;
        case 0x38cafcu: goto label_38cafc;
        case 0x38cb00u: goto label_38cb00;
        case 0x38cb04u: goto label_38cb04;
        case 0x38cb08u: goto label_38cb08;
        case 0x38cb0cu: goto label_38cb0c;
        case 0x38cb10u: goto label_38cb10;
        case 0x38cb14u: goto label_38cb14;
        case 0x38cb18u: goto label_38cb18;
        case 0x38cb1cu: goto label_38cb1c;
        case 0x38cb20u: goto label_38cb20;
        case 0x38cb24u: goto label_38cb24;
        case 0x38cb28u: goto label_38cb28;
        case 0x38cb2cu: goto label_38cb2c;
        case 0x38cb30u: goto label_38cb30;
        case 0x38cb34u: goto label_38cb34;
        case 0x38cb38u: goto label_38cb38;
        case 0x38cb3cu: goto label_38cb3c;
        case 0x38cb40u: goto label_38cb40;
        case 0x38cb44u: goto label_38cb44;
        case 0x38cb48u: goto label_38cb48;
        case 0x38cb4cu: goto label_38cb4c;
        case 0x38cb50u: goto label_38cb50;
        case 0x38cb54u: goto label_38cb54;
        case 0x38cb58u: goto label_38cb58;
        case 0x38cb5cu: goto label_38cb5c;
        case 0x38cb60u: goto label_38cb60;
        case 0x38cb64u: goto label_38cb64;
        case 0x38cb68u: goto label_38cb68;
        case 0x38cb6cu: goto label_38cb6c;
        case 0x38cb70u: goto label_38cb70;
        case 0x38cb74u: goto label_38cb74;
        case 0x38cb78u: goto label_38cb78;
        case 0x38cb7cu: goto label_38cb7c;
        case 0x38cb80u: goto label_38cb80;
        case 0x38cb84u: goto label_38cb84;
        case 0x38cb88u: goto label_38cb88;
        case 0x38cb8cu: goto label_38cb8c;
        case 0x38cb90u: goto label_38cb90;
        case 0x38cb94u: goto label_38cb94;
        case 0x38cb98u: goto label_38cb98;
        case 0x38cb9cu: goto label_38cb9c;
        case 0x38cba0u: goto label_38cba0;
        case 0x38cba4u: goto label_38cba4;
        case 0x38cba8u: goto label_38cba8;
        case 0x38cbacu: goto label_38cbac;
        case 0x38cbb0u: goto label_38cbb0;
        case 0x38cbb4u: goto label_38cbb4;
        case 0x38cbb8u: goto label_38cbb8;
        case 0x38cbbcu: goto label_38cbbc;
        case 0x38cbc0u: goto label_38cbc0;
        case 0x38cbc4u: goto label_38cbc4;
        case 0x38cbc8u: goto label_38cbc8;
        case 0x38cbccu: goto label_38cbcc;
        case 0x38cbd0u: goto label_38cbd0;
        case 0x38cbd4u: goto label_38cbd4;
        case 0x38cbd8u: goto label_38cbd8;
        case 0x38cbdcu: goto label_38cbdc;
        case 0x38cbe0u: goto label_38cbe0;
        case 0x38cbe4u: goto label_38cbe4;
        case 0x38cbe8u: goto label_38cbe8;
        case 0x38cbecu: goto label_38cbec;
        case 0x38cbf0u: goto label_38cbf0;
        case 0x38cbf4u: goto label_38cbf4;
        case 0x38cbf8u: goto label_38cbf8;
        case 0x38cbfcu: goto label_38cbfc;
        case 0x38cc00u: goto label_38cc00;
        case 0x38cc04u: goto label_38cc04;
        case 0x38cc08u: goto label_38cc08;
        case 0x38cc0cu: goto label_38cc0c;
        case 0x38cc10u: goto label_38cc10;
        case 0x38cc14u: goto label_38cc14;
        case 0x38cc18u: goto label_38cc18;
        case 0x38cc1cu: goto label_38cc1c;
        case 0x38cc20u: goto label_38cc20;
        case 0x38cc24u: goto label_38cc24;
        case 0x38cc28u: goto label_38cc28;
        case 0x38cc2cu: goto label_38cc2c;
        case 0x38cc30u: goto label_38cc30;
        case 0x38cc34u: goto label_38cc34;
        case 0x38cc38u: goto label_38cc38;
        case 0x38cc3cu: goto label_38cc3c;
        case 0x38cc40u: goto label_38cc40;
        case 0x38cc44u: goto label_38cc44;
        case 0x38cc48u: goto label_38cc48;
        case 0x38cc4cu: goto label_38cc4c;
        case 0x38cc50u: goto label_38cc50;
        case 0x38cc54u: goto label_38cc54;
        case 0x38cc58u: goto label_38cc58;
        case 0x38cc5cu: goto label_38cc5c;
        case 0x38cc60u: goto label_38cc60;
        case 0x38cc64u: goto label_38cc64;
        case 0x38cc68u: goto label_38cc68;
        case 0x38cc6cu: goto label_38cc6c;
        case 0x38cc70u: goto label_38cc70;
        case 0x38cc74u: goto label_38cc74;
        case 0x38cc78u: goto label_38cc78;
        case 0x38cc7cu: goto label_38cc7c;
        case 0x38cc80u: goto label_38cc80;
        case 0x38cc84u: goto label_38cc84;
        case 0x38cc88u: goto label_38cc88;
        case 0x38cc8cu: goto label_38cc8c;
        case 0x38cc90u: goto label_38cc90;
        case 0x38cc94u: goto label_38cc94;
        case 0x38cc98u: goto label_38cc98;
        case 0x38cc9cu: goto label_38cc9c;
        case 0x38cca0u: goto label_38cca0;
        case 0x38cca4u: goto label_38cca4;
        case 0x38cca8u: goto label_38cca8;
        case 0x38ccacu: goto label_38ccac;
        case 0x38ccb0u: goto label_38ccb0;
        case 0x38ccb4u: goto label_38ccb4;
        case 0x38ccb8u: goto label_38ccb8;
        case 0x38ccbcu: goto label_38ccbc;
        case 0x38ccc0u: goto label_38ccc0;
        case 0x38ccc4u: goto label_38ccc4;
        case 0x38ccc8u: goto label_38ccc8;
        case 0x38ccccu: goto label_38cccc;
        case 0x38ccd0u: goto label_38ccd0;
        case 0x38ccd4u: goto label_38ccd4;
        case 0x38ccd8u: goto label_38ccd8;
        case 0x38ccdcu: goto label_38ccdc;
        case 0x38cce0u: goto label_38cce0;
        case 0x38cce4u: goto label_38cce4;
        case 0x38cce8u: goto label_38cce8;
        case 0x38ccecu: goto label_38ccec;
        case 0x38ccf0u: goto label_38ccf0;
        case 0x38ccf4u: goto label_38ccf4;
        case 0x38ccf8u: goto label_38ccf8;
        case 0x38ccfcu: goto label_38ccfc;
        case 0x38cd00u: goto label_38cd00;
        case 0x38cd04u: goto label_38cd04;
        case 0x38cd08u: goto label_38cd08;
        case 0x38cd0cu: goto label_38cd0c;
        case 0x38cd10u: goto label_38cd10;
        case 0x38cd14u: goto label_38cd14;
        case 0x38cd18u: goto label_38cd18;
        case 0x38cd1cu: goto label_38cd1c;
        case 0x38cd20u: goto label_38cd20;
        case 0x38cd24u: goto label_38cd24;
        case 0x38cd28u: goto label_38cd28;
        case 0x38cd2cu: goto label_38cd2c;
        case 0x38cd30u: goto label_38cd30;
        default: break;
    }

    ctx->pc = 0x38c6e0u;

label_38c6e0:
    // 0x38c6e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x38c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_38c6e4:
    // 0x38c6e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38c6e8:
    // 0x38c6e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38c6ec:
    // 0x38c6ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38c6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38c6f0:
    // 0x38c6f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38c6f4:
    // 0x38c6f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38c6f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38c6f8:
    // 0x38c6f8: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x38c6f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
label_38c6fc:
    // 0x38c6fc: 0x10a300e6  beq         $a1, $v1, . + 4 + (0xE6 << 2)
label_38c700:
    if (ctx->pc == 0x38C700u) {
        ctx->pc = 0x38C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6FCu;
        // 0x38c700: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C704u;
        goto label_38c704;
    }
    ctx->pc = 0x38C6FCu;
    {
        const bool branch_taken_0x38c6fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6FCu;
        // 0x38c700: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6fc) {
            ctx->pc = 0x38CA98u;
            goto label_38ca98;
        }
    }
    ctx->pc = 0x38C704u;
label_38c704:
    // 0x38c704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38c704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38c708:
    // 0x38c708: 0x10a300db  beq         $a1, $v1, . + 4 + (0xDB << 2)
label_38c70c:
    if (ctx->pc == 0x38C70Cu) {
        ctx->pc = 0x38C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C708u;
        // 0x38c70c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C710u;
        goto label_38c710;
    }
    ctx->pc = 0x38C708u;
    {
        const bool branch_taken_0x38c708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C708u;
        // 0x38c70c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c708) {
            ctx->pc = 0x38CA78u;
            goto label_38ca78;
        }
    }
    ctx->pc = 0x38C710u;
label_38c710:
    // 0x38c710: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_38c714:
    if (ctx->pc == 0x38C714u) {
        ctx->pc = 0x38C718u;
        goto label_38c718;
    }
    ctx->pc = 0x38C710u;
    {
        const bool branch_taken_0x38c710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38c710) {
            ctx->pc = 0x38C798u;
            goto label_38c798;
        }
    }
    ctx->pc = 0x38C718u;
label_38c718:
    // 0x38c718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38c718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c71c:
    // 0x38c71c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_38c720:
    if (ctx->pc == 0x38C720u) {
        ctx->pc = 0x38C724u;
        goto label_38c724;
    }
    ctx->pc = 0x38C71Cu;
    {
        const bool branch_taken_0x38c71c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38c71c) {
            ctx->pc = 0x38C758u;
            goto label_38c758;
        }
    }
    ctx->pc = 0x38C724u;
label_38c724:
    // 0x38c724: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_38c728:
    if (ctx->pc == 0x38C728u) {
        ctx->pc = 0x38C72Cu;
        goto label_38c72c;
    }
    ctx->pc = 0x38C724u;
    {
        const bool branch_taken_0x38c724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c724) {
            ctx->pc = 0x38C738u;
            goto label_38c738;
        }
    }
    ctx->pc = 0x38C72Cu;
label_38c72c:
    // 0x38c72c: 0x1000017c  b           . + 4 + (0x17C << 2)
label_38c730:
    if (ctx->pc == 0x38C730u) {
        ctx->pc = 0x38C734u;
        goto label_38c734;
    }
    ctx->pc = 0x38C72Cu;
    {
        const bool branch_taken_0x38c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c72c) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38C734u;
label_38c734:
    // 0x38c734: 0x0  nop
    ctx->pc = 0x38c734u;
    // NOP
label_38c738:
    // 0x38c738: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_38c73c:
    if (ctx->pc == 0x38C73Cu) {
        ctx->pc = 0x38C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C738u;
        // 0x38c73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C740u;
        goto label_38c740;
    }
    ctx->pc = 0x38C738u;
    {
        const bool branch_taken_0x38c738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C738u;
        // 0x38c73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c738) {
            ctx->pc = 0x38C748u;
            goto label_38c748;
        }
    }
    ctx->pc = 0x38C740u;
label_38c740:
    // 0x38c740: 0xc0c0830  jal         func_3020C0
label_38c744:
    if (ctx->pc == 0x38C744u) {
        ctx->pc = 0x38C748u;
        goto label_38c748;
    }
    ctx->pc = 0x38C740u;
    SET_GPR_U32(ctx, 31, 0x38C748u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38C740u, 0x38C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C748u;
label_38c748:
    // 0x38c748: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x38c748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_38c74c:
    // 0x38c74c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38c750:
    // 0x38c750: 0x10000173  b           . + 4 + (0x173 << 2)
label_38c754:
    if (ctx->pc == 0x38C754u) {
        ctx->pc = 0x38C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C750u;
        // 0x38c754: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C758u;
        goto label_38c758;
    }
    ctx->pc = 0x38C750u;
    {
        const bool branch_taken_0x38c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C750u;
        // 0x38c754: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c750) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38C758u;
label_38c758:
    // 0x38c758: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x38c758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_38c75c:
    // 0x38c75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c760:
    // 0x38c760: 0x24060812  addiu       $a2, $zero, 0x812
    ctx->pc = 0x38c760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2066));
label_38c764:
    // 0x38c764: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x38c764u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_38c768:
    // 0x38c768: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x38c768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_38c76c:
    // 0x38c76c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x38c76cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_38c770:
    // 0x38c770: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x38c770u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_38c774:
    // 0x38c774: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x38c774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_38c778:
    // 0x38c778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38c778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38c77c:
    // 0x38c77c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x38c77cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_38c780:
    // 0x38c780: 0xa2200508  sb          $zero, 0x508($s1)
    ctx->pc = 0x38c780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1288), (uint8_t)GPR_U32(ctx, 0));
label_38c784:
    // 0x38c784: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x38c784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_38c788:
    // 0x38c788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38c788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38c78c:
    // 0x38c78c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38c78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38c790:
    // 0x38c790: 0x320f809  jalr        $t9
label_38c794:
    if (ctx->pc == 0x38C794u) {
        ctx->pc = 0x38C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C790u;
        // 0x38c794: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C798u;
        goto label_38c798;
    }
    ctx->pc = 0x38C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C798u);
        ctx->pc = 0x38C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C790u;
        // 0x38c794: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C790u, 0x38C798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C798u;
label_38c798:
    // 0x38c798: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_38c79c:
    if (ctx->pc == 0x38C79Cu) {
        ctx->pc = 0x38C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C798u;
        // 0x38c79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7A0u;
        goto label_38c7a0;
    }
    ctx->pc = 0x38C798u;
    {
        const bool branch_taken_0x38c798 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C798u;
        // 0x38c79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c798) {
            ctx->pc = 0x38C7B0u;
            goto label_38c7b0;
        }
    }
    ctx->pc = 0x38C7A0u;
label_38c7a0:
    // 0x38c7a0: 0xc0c0830  jal         func_3020C0
label_38c7a4:
    if (ctx->pc == 0x38C7A4u) {
        ctx->pc = 0x38C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7A0u;
        // 0x38c7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7A8u;
        goto label_38c7a8;
    }
    ctx->pc = 0x38C7A0u;
    SET_GPR_U32(ctx, 31, 0x38C7A8u);
    ctx->pc = 0x38C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7A0u;
    // 0x38c7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38C7A0u, 0x38C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7A8u;
label_38c7a8:
    // 0x38c7a8: 0x1000015d  b           . + 4 + (0x15D << 2)
label_38c7ac:
    if (ctx->pc == 0x38C7ACu) {
        ctx->pc = 0x38C7B0u;
        goto label_38c7b0;
    }
    ctx->pc = 0x38C7A8u;
    {
        const bool branch_taken_0x38c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c7a8) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38C7B0u;
label_38c7b0:
    // 0x38c7b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_38c7b4:
    if (ctx->pc == 0x38C7B4u) {
        ctx->pc = 0x38C7B8u;
        goto label_38c7b8;
    }
    ctx->pc = 0x38C7B0u;
    {
        const bool branch_taken_0x38c7b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c7b0) {
            ctx->pc = 0x38C7D8u;
            goto label_38c7d8;
        }
    }
    ctx->pc = 0x38C7B8u;
label_38c7b8:
    // 0x38c7b8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x38c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_38c7bc:
    // 0x38c7bc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x38c7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_38c7c0:
    // 0x38c7c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_38c7c4:
    if (ctx->pc == 0x38C7C4u) {
        ctx->pc = 0x38C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7C0u;
        // 0x38c7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7C8u;
        goto label_38c7c8;
    }
    ctx->pc = 0x38C7C0u;
    {
        const bool branch_taken_0x38c7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7C0u;
        // 0x38c7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7c0) {
            ctx->pc = 0x38C7D8u;
            goto label_38c7d8;
        }
    }
    ctx->pc = 0x38C7C8u;
label_38c7c8:
    // 0x38c7c8: 0xc0c0830  jal         func_3020C0
label_38c7cc:
    if (ctx->pc == 0x38C7CCu) {
        ctx->pc = 0x38C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7C8u;
        // 0x38c7cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C7D0u;
        goto label_38c7d0;
    }
    ctx->pc = 0x38C7C8u;
    SET_GPR_U32(ctx, 31, 0x38C7D0u);
    ctx->pc = 0x38C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7C8u;
    // 0x38c7cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38C7C8u, 0x38C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7D0u;
label_38c7d0:
    // 0x38c7d0: 0x10000153  b           . + 4 + (0x153 << 2)
label_38c7d4:
    if (ctx->pc == 0x38C7D4u) {
        ctx->pc = 0x38C7D8u;
        goto label_38c7d8;
    }
    ctx->pc = 0x38C7D0u;
    {
        const bool branch_taken_0x38c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c7d0) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38C7D8u;
label_38c7d8:
    // 0x38c7d8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x38c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_38c7dc:
    // 0x38c7dc: 0x92230562  lbu         $v1, 0x562($s1)
    ctx->pc = 0x38c7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1378)));
label_38c7e0:
    // 0x38c7e0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_38c7e4:
    // 0x38c7e4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x38c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_38c7e8:
    // 0x38c7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38c7ec:
    // 0x38c7ec: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x38c7ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_38c7f0:
    // 0x38c7f0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x38c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_38c7f4:
    // 0x38c7f4: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x38c7f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
label_38c7f8:
    // 0x38c7f8: 0xc096e34  jal         func_25B8D0
label_38c7fc:
    if (ctx->pc == 0x38C7FCu) {
        ctx->pc = 0x38C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7F8u;
        // 0x38c7fc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C800u;
        goto label_38c800;
    }
    ctx->pc = 0x38C7F8u;
    SET_GPR_U32(ctx, 31, 0x38C800u);
    ctx->pc = 0x38C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7F8u;
    // 0x38c7fc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x38C7F8u, 0x38C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C800u;
label_38c800:
    // 0x38c800: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x38c800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_38c804:
    // 0x38c804: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38c808:
    // 0x38c808: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x38c808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
label_38c80c:
    // 0x38c80c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x38c80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38c810:
    // 0x38c810: 0xc097384  jal         func_25CE10
label_38c814:
    if (ctx->pc == 0x38C814u) {
        ctx->pc = 0x38C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C810u;
        // 0x38c814: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C818u;
        goto label_38c818;
    }
    ctx->pc = 0x38C810u;
    SET_GPR_U32(ctx, 31, 0x38C818u);
    ctx->pc = 0x38C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C810u;
    // 0x38c814: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x38C810u, 0x38C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C818u;
label_38c818:
    // 0x38c818: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x38c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_38c81c:
    // 0x38c81c: 0xc0763bc  jal         func_1D8EF0
label_38c820:
    if (ctx->pc == 0x38C820u) {
        ctx->pc = 0x38C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C81Cu;
        // 0x38c820: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C824u;
        goto label_38c824;
    }
    ctx->pc = 0x38C81Cu;
    SET_GPR_U32(ctx, 31, 0x38C824u);
    ctx->pc = 0x38C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C81Cu;
    // 0x38c820: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x38C81Cu, 0x38C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C824u;
label_38c824:
    // 0x38c824: 0x9223053a  lbu         $v1, 0x53A($s1)
    ctx->pc = 0x38c824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
label_38c828:
    // 0x38c828: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_38c82c:
    if (ctx->pc == 0x38C82Cu) {
        ctx->pc = 0x38C830u;
        goto label_38c830;
    }
    ctx->pc = 0x38C828u;
    {
        const bool branch_taken_0x38c828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c828) {
            ctx->pc = 0x38C9B8u;
            goto label_38c9b8;
        }
    }
    ctx->pc = 0x38C830u;
label_38c830:
    // 0x38c830: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x38c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38c834:
    // 0x38c834: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38c834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38c838:
    // 0x38c838: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x38c838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_38c83c:
    // 0x38c83c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x38c83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38c840:
    // 0x38c840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38c844:
    // 0x38c844: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x38c844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_38c848:
    // 0x38c848: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x38c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38c84c:
    // 0x38c84c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x38c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_38c850:
    // 0x38c850: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_38c854:
    if (ctx->pc == 0x38C854u) {
        ctx->pc = 0x38C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C850u;
        // 0x38c854: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C858u;
        goto label_38c858;
    }
    ctx->pc = 0x38C850u;
    {
        const bool branch_taken_0x38c850 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C850u;
        // 0x38c854: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c850) {
            ctx->pc = 0x38C864u;
            goto label_38c864;
        }
    }
    ctx->pc = 0x38C858u;
label_38c858:
    // 0x38c858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c85c:
    // 0x38c85c: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c860:
    if (ctx->pc == 0x38C860u) {
        ctx->pc = 0x38C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C85Cu;
        // 0x38c860: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C864u;
        goto label_38c864;
    }
    ctx->pc = 0x38C85Cu;
    {
        const bool branch_taken_0x38c85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C85Cu;
        // 0x38c860: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c85c) {
            ctx->pc = 0x38C87Cu;
            goto label_38c87c;
        }
    }
    ctx->pc = 0x38C864u;
label_38c864:
    // 0x38c864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38c864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38c868:
    // 0x38c868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c86c:
    // 0x38c86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c870:
    // 0x38c870: 0x0  nop
    ctx->pc = 0x38c870u;
    // NOP
label_38c874:
    // 0x38c874: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x38c874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_38c878:
    // 0x38c878: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x38c878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_38c87c:
    // 0x38c87c: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x38c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
label_38c880:
    // 0x38c880: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x38c880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_38c884:
    // 0x38c884: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x38c884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_38c888:
    // 0x38c888: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38c888u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c88c:
    // 0x38c88c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38c890:
    // 0x38c890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c894:
    // 0x38c894: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x38c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_38c898:
    // 0x38c898: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38c898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_38c89c:
    // 0x38c89c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38c89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c8a0:
    // 0x38c8a0: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x38c8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_38c8a4:
    // 0x38c8a4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x38c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38c8a8:
    // 0x38c8a8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x38c8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38c8ac:
    // 0x38c8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38c8b0:
    // 0x38c8b0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x38c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_38c8b4:
    // 0x38c8b4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x38c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38c8b8:
    // 0x38c8b8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x38c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_38c8bc:
    // 0x38c8bc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_38c8c0:
    if (ctx->pc == 0x38C8C0u) {
        ctx->pc = 0x38C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8BCu;
        // 0x38c8c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8C4u;
        goto label_38c8c4;
    }
    ctx->pc = 0x38C8BCu;
    {
        const bool branch_taken_0x38c8bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8BCu;
        // 0x38c8c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8bc) {
            ctx->pc = 0x38C8D0u;
            goto label_38c8d0;
        }
    }
    ctx->pc = 0x38C8C4u;
label_38c8c4:
    // 0x38c8c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c8c8:
    // 0x38c8c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c8cc:
    if (ctx->pc == 0x38C8CCu) {
        ctx->pc = 0x38C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8C8u;
        // 0x38c8cc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8D0u;
        goto label_38c8d0;
    }
    ctx->pc = 0x38C8C8u;
    {
        const bool branch_taken_0x38c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8C8u;
        // 0x38c8cc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8c8) {
            ctx->pc = 0x38C8E8u;
            goto label_38c8e8;
        }
    }
    ctx->pc = 0x38C8D0u;
label_38c8d0:
    // 0x38c8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38c8d4:
    // 0x38c8d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c8d8:
    // 0x38c8d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c8d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c8dc:
    // 0x38c8dc: 0x0  nop
    ctx->pc = 0x38c8dcu;
    // NOP
label_38c8e0:
    // 0x38c8e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38c8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38c8e4:
    // 0x38c8e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38c8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38c8e8:
    // 0x38c8e8: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x38c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
label_38c8ec:
    // 0x38c8ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38c8f0:
    // 0x38c8f0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x38c8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_38c8f4:
    // 0x38c8f4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x38c8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_38c8f8:
    // 0x38c8f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c8f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c8fc:
    // 0x38c8fc: 0x0  nop
    ctx->pc = 0x38c8fcu;
    // NOP
label_38c900:
    // 0x38c900: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38c900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38c904:
    // 0x38c904: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x38c904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_38c908:
    // 0x38c908: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x38c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38c90c:
    // 0x38c90c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x38c90cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38c910:
    // 0x38c910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38c914:
    // 0x38c914: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x38c914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_38c918:
    // 0x38c918: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x38c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38c91c:
    // 0x38c91c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x38c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_38c920:
    // 0x38c920: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_38c924:
    if (ctx->pc == 0x38C924u) {
        ctx->pc = 0x38C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C920u;
        // 0x38c924: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C928u;
        goto label_38c928;
    }
    ctx->pc = 0x38C920u;
    {
        const bool branch_taken_0x38c920 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C920u;
        // 0x38c924: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c920) {
            ctx->pc = 0x38C934u;
            goto label_38c934;
        }
    }
    ctx->pc = 0x38C928u;
label_38c928:
    // 0x38c928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c92c:
    // 0x38c92c: 0x10000007  b           . + 4 + (0x7 << 2)
label_38c930:
    if (ctx->pc == 0x38C930u) {
        ctx->pc = 0x38C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C92Cu;
        // 0x38c930: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C934u;
        goto label_38c934;
    }
    ctx->pc = 0x38C92Cu;
    {
        const bool branch_taken_0x38c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C92Cu;
        // 0x38c930: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c92c) {
            ctx->pc = 0x38C94Cu;
            goto label_38c94c;
        }
    }
    ctx->pc = 0x38C934u;
label_38c934:
    // 0x38c934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38c938:
    // 0x38c938: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38c93c:
    // 0x38c93c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38c93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c940:
    // 0x38c940: 0x0  nop
    ctx->pc = 0x38c940u;
    // NOP
label_38c944:
    // 0x38c944: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x38c944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_38c948:
    // 0x38c948: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x38c948u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_38c94c:
    // 0x38c94c: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x38c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
label_38c950:
    // 0x38c950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38c954:
    // 0x38c954: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x38c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_38c958:
    // 0x38c958: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x38c958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_38c95c:
    // 0x38c95c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38c95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38c960:
    // 0x38c960: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38c960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c964:
    // 0x38c964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38c964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38c968:
    // 0x38c968: 0x0  nop
    ctx->pc = 0x38c968u;
    // NOP
label_38c96c:
    // 0x38c96c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38c96cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_38c970:
    // 0x38c970: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x38c970u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38c974:
    // 0x38c974: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x38c974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_38c978:
    // 0x38c978: 0xc0766dc  jal         func_1D9B70
label_38c97c:
    if (ctx->pc == 0x38C97Cu) {
        ctx->pc = 0x38C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C978u;
        // 0x38c97c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C980u;
        goto label_38c980;
    }
    ctx->pc = 0x38C978u;
    SET_GPR_U32(ctx, 31, 0x38C980u);
    ctx->pc = 0x38C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C978u;
    // 0x38c97c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x38C978u, 0x38C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C980u;
label_38c980:
    // 0x38c980: 0x92230561  lbu         $v1, 0x561($s1)
    ctx->pc = 0x38c980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1377)));
label_38c984:
    // 0x38c984: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38c984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_38c988:
    // 0x38c988: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x38c988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_38c98c:
    // 0x38c98c: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x38c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
label_38c990:
    // 0x38c990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38c990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38c994:
    // 0x38c994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38c994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38c998:
    // 0x38c998: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x38c998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38c99c:
    // 0x38c99c: 0xc076690  jal         func_1D9A40
label_38c9a0:
    if (ctx->pc == 0x38C9A0u) {
        ctx->pc = 0x38C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C99Cu;
        // 0x38c9a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9A4u;
        goto label_38c9a4;
    }
    ctx->pc = 0x38C99Cu;
    SET_GPR_U32(ctx, 31, 0x38C9A4u);
    ctx->pc = 0x38C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C99Cu;
    // 0x38c9a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x38C99Cu, 0x38C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C9A4u;
label_38c9a4:
    // 0x38c9a4: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x38c9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_38c9a8:
    // 0x38c9a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38c9ac:
    // 0x38c9ac: 0x100000dc  b           . + 4 + (0xDC << 2)
label_38c9b0:
    if (ctx->pc == 0x38C9B0u) {
        ctx->pc = 0x38C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9ACu;
        // 0x38c9b0: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9B4u;
        goto label_38c9b4;
    }
    ctx->pc = 0x38C9ACu;
    {
        const bool branch_taken_0x38c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9ACu;
        // 0x38c9b0: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9ac) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38C9B4u;
label_38c9b4:
    // 0x38c9b4: 0x0  nop
    ctx->pc = 0x38c9b4u;
    // NOP
label_38c9b8:
    // 0x38c9b8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x38c9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_38c9bc:
    // 0x38c9bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_38c9c0:
    if (ctx->pc == 0x38C9C0u) {
        ctx->pc = 0x38C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9BCu;
        // 0x38c9c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9C4u;
        goto label_38c9c4;
    }
    ctx->pc = 0x38C9BCu;
    {
        const bool branch_taken_0x38c9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9BCu;
        // 0x38c9c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9bc) {
            ctx->pc = 0x38C9D0u;
            goto label_38c9d0;
        }
    }
    ctx->pc = 0x38C9C4u;
label_38c9c4:
    // 0x38c9c4: 0x10000022  b           . + 4 + (0x22 << 2)
label_38c9c8:
    if (ctx->pc == 0x38C9C8u) {
        ctx->pc = 0x38C9CCu;
        goto label_38c9cc;
    }
    ctx->pc = 0x38C9C4u;
    {
        const bool branch_taken_0x38c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c9c4) {
            ctx->pc = 0x38CA50u;
            goto label_38ca50;
        }
    }
    ctx->pc = 0x38C9CCu;
label_38c9cc:
    // 0x38c9cc: 0x0  nop
    ctx->pc = 0x38c9ccu;
    // NOP
label_38c9d0:
    // 0x38c9d0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x38c9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_38c9d4:
    // 0x38c9d4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x38c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_38c9d8:
    // 0x38c9d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38c9dc:
    // 0x38c9dc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38c9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_38c9e0:
    // 0x38c9e0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x38c9e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_38c9e4:
    // 0x38c9e4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_38c9e8:
    if (ctx->pc == 0x38C9E8u) {
        ctx->pc = 0x38C9ECu;
        goto label_38c9ec;
    }
    ctx->pc = 0x38C9E4u;
    {
        const bool branch_taken_0x38c9e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38c9e4) {
            ctx->pc = 0x38CA20u;
            goto label_38ca20;
        }
    }
    ctx->pc = 0x38C9ECu;
label_38c9ec:
    // 0x38c9ec: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x38c9ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_38c9f0:
    // 0x38c9f0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x38c9f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_38c9f4:
    // 0x38c9f4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_38c9f8:
    if (ctx->pc == 0x38C9F8u) {
        ctx->pc = 0x38C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9F4u;
        // 0x38c9f8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C9FCu;
        goto label_38c9fc;
    }
    ctx->pc = 0x38C9F4u;
    {
        const bool branch_taken_0x38c9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9F4u;
        // 0x38c9f8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9f4) {
            ctx->pc = 0x38CA48u;
            goto label_38ca48;
        }
    }
    ctx->pc = 0x38C9FCu;
label_38c9fc:
    // 0x38c9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ca00:
    // 0x38ca00: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x38ca00u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_38ca04:
    // 0x38ca04: 0x0  nop
    ctx->pc = 0x38ca04u;
    // NOP
label_38ca08:
    // 0x38ca08: 0x0  nop
    ctx->pc = 0x38ca08u;
    // NOP
label_38ca0c:
    // 0x38ca0c: 0x2010  mfhi        $a0
    ctx->pc = 0x38ca0cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_38ca10:
    // 0x38ca10: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38ca10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_38ca14:
    // 0x38ca14: 0x1000000c  b           . + 4 + (0xC << 2)
label_38ca18:
    if (ctx->pc == 0x38CA18u) {
        ctx->pc = 0x38CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA14u;
        // 0x38ca18: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA1Cu;
        goto label_38ca1c;
    }
    ctx->pc = 0x38CA14u;
    {
        const bool branch_taken_0x38ca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA14u;
        // 0x38ca18: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca14) {
            ctx->pc = 0x38CA48u;
            goto label_38ca48;
        }
    }
    ctx->pc = 0x38CA1Cu;
label_38ca1c:
    // 0x38ca1c: 0x0  nop
    ctx->pc = 0x38ca1cu;
    // NOP
label_38ca20:
    // 0x38ca20: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x38ca20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_38ca24:
    // 0x38ca24: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x38ca24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_38ca28:
    // 0x38ca28: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_38ca2c:
    if (ctx->pc == 0x38CA2Cu) {
        ctx->pc = 0x38CA30u;
        goto label_38ca30;
    }
    ctx->pc = 0x38CA28u;
    {
        const bool branch_taken_0x38ca28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ca28) {
            ctx->pc = 0x38CA48u;
            goto label_38ca48;
        }
    }
    ctx->pc = 0x38CA30u;
label_38ca30:
    // 0x38ca30: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38ca30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_38ca34:
    // 0x38ca34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ca38:
    // 0x38ca38: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x38ca38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_38ca3c:
    // 0x38ca3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_38ca40:
    if (ctx->pc == 0x38CA40u) {
        ctx->pc = 0x38CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA3Cu;
        // 0x38ca40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA44u;
        goto label_38ca44;
    }
    ctx->pc = 0x38CA3Cu;
    {
        const bool branch_taken_0x38ca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA3Cu;
        // 0x38ca40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca3c) {
            ctx->pc = 0x38CA50u;
            goto label_38ca50;
        }
    }
    ctx->pc = 0x38CA44u;
label_38ca44:
    // 0x38ca44: 0x0  nop
    ctx->pc = 0x38ca44u;
    // NOP
label_38ca48:
    // 0x38ca48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ca4c:
    // 0x38ca4c: 0x0  nop
    ctx->pc = 0x38ca4cu;
    // NOP
label_38ca50:
    // 0x38ca50: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
label_38ca54:
    if (ctx->pc == 0x38CA54u) {
        ctx->pc = 0x38CA58u;
        goto label_38ca58;
    }
    ctx->pc = 0x38CA50u;
    {
        const bool branch_taken_0x38ca50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ca50) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38CA58u;
label_38ca58:
    // 0x38ca58: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x38ca58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_38ca5c:
    // 0x38ca5c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x38ca5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_38ca60:
    // 0x38ca60: 0xc0aa1e8  jal         func_2A87A0
label_38ca64:
    if (ctx->pc == 0x38CA64u) {
        ctx->pc = 0x38CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA60u;
        // 0x38ca64: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA68u;
        goto label_38ca68;
    }
    ctx->pc = 0x38CA60u;
    SET_GPR_U32(ctx, 31, 0x38CA68u);
    ctx->pc = 0x38CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA60u;
    // 0x38ca64: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x38CA60u, 0x38CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA68u;
label_38ca68:
    // 0x38ca68: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x38ca68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_38ca6c:
    // 0x38ca6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38ca70:
    // 0x38ca70: 0x100000ab  b           . + 4 + (0xAB << 2)
label_38ca74:
    if (ctx->pc == 0x38CA74u) {
        ctx->pc = 0x38CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA70u;
        // 0x38ca74: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA78u;
        goto label_38ca78;
    }
    ctx->pc = 0x38CA70u;
    {
        const bool branch_taken_0x38ca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA70u;
        // 0x38ca74: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca70) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38CA78u;
label_38ca78:
    // 0x38ca78: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x38ca78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
label_38ca7c:
    // 0x38ca7c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x38ca7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_38ca80:
    // 0x38ca80: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x38ca80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_38ca84:
    // 0x38ca84: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x38ca84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_38ca88:
    // 0x38ca88: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x38ca88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_38ca8c:
    // 0x38ca8c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x38ca8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_38ca90:
    // 0x38ca90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38ca94:
    // 0x38ca94: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x38ca94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_38ca98:
    // 0x38ca98: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_38ca9c:
    // 0x38ca9c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x38ca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_38caa0:
    // 0x38caa0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x38caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_38caa4:
    // 0x38caa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38caa8:
    // 0x38caa8: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x38caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_38caac:
    // 0x38caac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x38caacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38cab0:
    // 0x38cab0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x38cab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_38cab4:
    // 0x38cab4: 0xc07681c  jal         func_1DA070
label_38cab8:
    if (ctx->pc == 0x38CAB8u) {
        ctx->pc = 0x38CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAB4u;
        // 0x38cab8: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CABCu;
        goto label_38cabc;
    }
    ctx->pc = 0x38CAB4u;
    SET_GPR_U32(ctx, 31, 0x38CABCu);
    ctx->pc = 0x38CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CAB4u;
    // 0x38cab8: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x38CAB4u, 0x38CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CABCu;
label_38cabc:
    // 0x38cabc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x38cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_38cac0:
    // 0x38cac0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38cac4:
    // 0x38cac4: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x38cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
label_38cac8:
    // 0x38cac8: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x38cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_38cacc:
    // 0x38cacc: 0xc097384  jal         func_25CE10
label_38cad0:
    if (ctx->pc == 0x38CAD0u) {
        ctx->pc = 0x38CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CACCu;
        // 0x38cad0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CAD4u;
        goto label_38cad4;
    }
    ctx->pc = 0x38CACCu;
    SET_GPR_U32(ctx, 31, 0x38CAD4u);
    ctx->pc = 0x38CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CACCu;
    // 0x38cad0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x38CACCu, 0x38CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CAD4u;
label_38cad4:
    // 0x38cad4: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x38cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_38cad8:
    // 0x38cad8: 0xc0763bc  jal         func_1D8EF0
label_38cadc:
    if (ctx->pc == 0x38CADCu) {
        ctx->pc = 0x38CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAD8u;
        // 0x38cadc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CAE0u;
        goto label_38cae0;
    }
    ctx->pc = 0x38CAD8u;
    SET_GPR_U32(ctx, 31, 0x38CAE0u);
    ctx->pc = 0x38CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CAD8u;
    // 0x38cadc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x38CAD8u, 0x38CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CAE0u;
label_38cae0:
    // 0x38cae0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x38cae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_38cae4:
    // 0x38cae4: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x38cae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_38cae8:
    // 0x38cae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38caec:
    // 0x38caec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x38caecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38caf0:
    // 0x38caf0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x38caf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_38caf4:
    // 0x38caf4: 0x92260560  lbu         $a2, 0x560($s1)
    ctx->pc = 0x38caf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1376)));
label_38caf8:
    // 0x38caf8: 0xc62c055c  lwc1        $f12, 0x55C($s1)
    ctx->pc = 0x38caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38cafc:
    // 0x38cafc: 0xc0c0960  jal         func_302580
label_38cb00:
    if (ctx->pc == 0x38CB00u) {
        ctx->pc = 0x38CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAFCu;
        // 0x38cb00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB04u;
        goto label_38cb04;
    }
    ctx->pc = 0x38CAFCu;
    SET_GPR_U32(ctx, 31, 0x38CB04u);
    ctx->pc = 0x38CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CAFCu;
    // 0x38cb00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x38CAFCu, 0x38CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB04u;
label_38cb04:
    // 0x38cb04: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_38cb08:
    if (ctx->pc == 0x38CB08u) {
        ctx->pc = 0x38CB0Cu;
        goto label_38cb0c;
    }
    ctx->pc = 0x38CB04u;
    {
        const bool branch_taken_0x38cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cb04) {
            ctx->pc = 0x38CBA8u;
            goto label_38cba8;
        }
    }
    ctx->pc = 0x38CB0Cu;
label_38cb0c:
    // 0x38cb0c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x38cb0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_38cb10:
    // 0x38cb10: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x38cb10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_38cb14:
    // 0x38cb14: 0xc0aa1e8  jal         func_2A87A0
label_38cb18:
    if (ctx->pc == 0x38CB18u) {
        ctx->pc = 0x38CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB14u;
        // 0x38cb18: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB1Cu;
        goto label_38cb1c;
    }
    ctx->pc = 0x38CB14u;
    SET_GPR_U32(ctx, 31, 0x38CB1Cu);
    ctx->pc = 0x38CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CB14u;
    // 0x38cb18: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x38CB14u, 0x38CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB1Cu;
label_38cb1c:
    // 0x38cb1c: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x38cb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_38cb20:
    // 0x38cb20: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x38cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_38cb24:
    // 0x38cb24: 0x3c022c00  lui         $v0, 0x2C00
    ctx->pc = 0x38cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11264 << 16));
label_38cb28:
    // 0x38cb28: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x38cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_38cb2c:
    // 0x38cb2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38cb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb30:
    // 0x38cb30: 0x34454c02  ori         $a1, $v0, 0x4C02
    ctx->pc = 0x38cb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19458);
label_38cb34:
    // 0x38cb34: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x38cb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_38cb38:
    // 0x38cb38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38cb38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb3c:
    // 0x38cb3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38cb3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb40:
    // 0x38cb40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38cb40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb44:
    // 0x38cb44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38cb44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb48:
    // 0x38cb48: 0xc05e9e8  jal         func_17A7A0
label_38cb4c:
    if (ctx->pc == 0x38CB4Cu) {
        ctx->pc = 0x38CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB48u;
        // 0x38cb4c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB50u;
        goto label_38cb50;
    }
    ctx->pc = 0x38CB48u;
    SET_GPR_U32(ctx, 31, 0x38CB50u);
    ctx->pc = 0x38CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CB48u;
    // 0x38cb4c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x38CB48u, 0x38CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB50u;
label_38cb50:
    // 0x38cb50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cb54:
    // 0x38cb54: 0xc0c0830  jal         func_3020C0
label_38cb58:
    if (ctx->pc == 0x38CB58u) {
        ctx->pc = 0x38CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB54u;
        // 0x38cb58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CB5Cu;
        goto label_38cb5c;
    }
    ctx->pc = 0x38CB54u;
    SET_GPR_U32(ctx, 31, 0x38CB5Cu);
    ctx->pc = 0x38CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CB54u;
    // 0x38cb58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38CB54u, 0x38CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB5Cu;
label_38cb5c:
    // 0x38cb5c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x38cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38cb60:
    // 0x38cb60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38cb64:
    // 0x38cb64: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x38cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_38cb68:
    // 0x38cb68: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x38cb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_38cb6c:
    // 0x38cb6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38cb70:
    // 0x38cb70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x38cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38cb74:
    // 0x38cb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38cb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb78:
    // 0x38cb78: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x38cb78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38cb7c:
    // 0x38cb7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38cb80:
    // 0x38cb80: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x38cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_38cb84:
    // 0x38cb84: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x38cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_38cb88:
    // 0x38cb88: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x38cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_38cb8c:
    // 0x38cb8c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x38cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_38cb90:
    // 0x38cb90: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x38cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
label_38cb94:
    // 0x38cb94: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x38cb94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_38cb98:
    // 0x38cb98: 0xc0aa590  jal         func_2A9640
label_38cb9c:
    if (ctx->pc == 0x38CB9Cu) {
        ctx->pc = 0x38CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB98u;
        // 0x38cb9c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBA0u;
        goto label_38cba0;
    }
    ctx->pc = 0x38CB98u;
    SET_GPR_U32(ctx, 31, 0x38CBA0u);
    ctx->pc = 0x38CB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CB98u;
    // 0x38cb9c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x38CB98u, 0x38CBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CBA0u;
label_38cba0:
    // 0x38cba0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_38cba4:
    if (ctx->pc == 0x38CBA4u) {
        ctx->pc = 0x38CBA8u;
        goto label_38cba8;
    }
    ctx->pc = 0x38CBA0u;
    {
        const bool branch_taken_0x38cba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cba0) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38CBA8u;
label_38cba8:
    // 0x38cba8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x38cba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_38cbac:
    // 0x38cbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cbb0:
    // 0x38cbb0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x38cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38cbb4:
    // 0x38cbb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38cbb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cbb8:
    // 0x38cbb8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x38cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_38cbbc:
    // 0x38cbbc: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x38cbbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
label_38cbc0:
    // 0x38cbc0: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x38cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38cbc4:
    // 0x38cbc4: 0xc0c0900  jal         func_302400
label_38cbc8:
    if (ctx->pc == 0x38CBC8u) {
        ctx->pc = 0x38CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBC4u;
        // 0x38cbc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBCCu;
        goto label_38cbcc;
    }
    ctx->pc = 0x38CBC4u;
    SET_GPR_U32(ctx, 31, 0x38CBCCu);
    ctx->pc = 0x38CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CBC4u;
    // 0x38cbc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x38CBC4u, 0x38CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CBCCu;
label_38cbcc:
    // 0x38cbcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_38cbd0:
    if (ctx->pc == 0x38CBD0u) {
        ctx->pc = 0x38CBD4u;
        goto label_38cbd4;
    }
    ctx->pc = 0x38CBCCu;
    {
        const bool branch_taken_0x38cbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cbcc) {
            ctx->pc = 0x38CBF8u;
            goto label_38cbf8;
        }
    }
    ctx->pc = 0x38CBD4u;
label_38cbd4:
    // 0x38cbd4: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x38cbd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_38cbd8:
    // 0x38cbd8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x38cbd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_38cbdc:
    // 0x38cbdc: 0xc0aa1e8  jal         func_2A87A0
label_38cbe0:
    if (ctx->pc == 0x38CBE0u) {
        ctx->pc = 0x38CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBDCu;
        // 0x38cbe0: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBE4u;
        goto label_38cbe4;
    }
    ctx->pc = 0x38CBDCu;
    SET_GPR_U32(ctx, 31, 0x38CBE4u);
    ctx->pc = 0x38CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CBDCu;
    // 0x38cbe0: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x38CBDCu, 0x38CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CBE4u;
label_38cbe4:
    // 0x38cbe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cbe8:
    // 0x38cbe8: 0xc0c0830  jal         func_3020C0
label_38cbec:
    if (ctx->pc == 0x38CBECu) {
        ctx->pc = 0x38CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBE8u;
        // 0x38cbec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CBF0u;
        goto label_38cbf0;
    }
    ctx->pc = 0x38CBE8u;
    SET_GPR_U32(ctx, 31, 0x38CBF0u);
    ctx->pc = 0x38CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CBE8u;
    // 0x38cbec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38CBE8u, 0x38CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CBF0u;
label_38cbf0:
    // 0x38cbf0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_38cbf4:
    if (ctx->pc == 0x38CBF4u) {
        ctx->pc = 0x38CBF8u;
        goto label_38cbf8;
    }
    ctx->pc = 0x38CBF0u;
    {
        const bool branch_taken_0x38cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cbf0) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38CBF8u;
label_38cbf8:
    // 0x38cbf8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38cbfc:
    // 0x38cbfc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x38cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_38cc00:
    // 0x38cc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cc04:
    // 0x38cc04: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x38cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_38cc08:
    // 0x38cc08: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x38cc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_38cc0c:
    // 0x38cc0c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x38cc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38cc10:
    // 0x38cc10: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x38cc10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_38cc14:
    // 0x38cc14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x38cc14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cc18:
    // 0x38cc18: 0xc0c0980  jal         func_302600
label_38cc1c:
    if (ctx->pc == 0x38CC1Cu) {
        ctx->pc = 0x38CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC18u;
        // 0x38cc1c: 0x27aa00bc  addiu       $t2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC20u;
        goto label_38cc20;
    }
    ctx->pc = 0x38CC18u;
    SET_GPR_U32(ctx, 31, 0x38CC20u);
    ctx->pc = 0x38CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC18u;
    // 0x38cc1c: 0x27aa00bc  addiu       $t2, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x38CC18u, 0x38CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC20u;
label_38cc20:
    // 0x38cc20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_38cc24:
    if (ctx->pc == 0x38CC24u) {
        ctx->pc = 0x38CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC20u;
        // 0x38cc24: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC28u;
        goto label_38cc28;
    }
    ctx->pc = 0x38CC20u;
    {
        const bool branch_taken_0x38cc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC20u;
        // 0x38cc24: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc20) {
            ctx->pc = 0x38CC60u;
            goto label_38cc60;
        }
    }
    ctx->pc = 0x38CC28u;
label_38cc28:
    // 0x38cc28: 0xc0766dc  jal         func_1D9B70
label_38cc2c:
    if (ctx->pc == 0x38CC2Cu) {
        ctx->pc = 0x38CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC28u;
        // 0x38cc2c: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC30u;
        goto label_38cc30;
    }
    ctx->pc = 0x38CC28u;
    SET_GPR_U32(ctx, 31, 0x38CC30u);
    ctx->pc = 0x38CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC28u;
    // 0x38cc2c: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x38CC28u, 0x38CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC30u;
label_38cc30:
    // 0x38cc30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38cc34:
    // 0x38cc34: 0xc0766e8  jal         func_1D9BA0
label_38cc38:
    if (ctx->pc == 0x38CC38u) {
        ctx->pc = 0x38CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC34u;
        // 0x38cc38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC3Cu;
        goto label_38cc3c;
    }
    ctx->pc = 0x38CC34u;
    SET_GPR_U32(ctx, 31, 0x38CC3Cu);
    ctx->pc = 0x38CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC34u;
    // 0x38cc38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x38CC34u, 0x38CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC3Cu;
label_38cc3c:
    // 0x38cc3c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x38cc3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_38cc40:
    // 0x38cc40: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x38cc40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_38cc44:
    // 0x38cc44: 0xc0aa1e8  jal         func_2A87A0
label_38cc48:
    if (ctx->pc == 0x38CC48u) {
        ctx->pc = 0x38CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC44u;
        // 0x38cc48: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC4Cu;
        goto label_38cc4c;
    }
    ctx->pc = 0x38CC44u;
    SET_GPR_U32(ctx, 31, 0x38CC4Cu);
    ctx->pc = 0x38CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC44u;
    // 0x38cc48: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x38CC44u, 0x38CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC4Cu;
label_38cc4c:
    // 0x38cc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cc50:
    // 0x38cc50: 0xc0c0830  jal         func_3020C0
label_38cc54:
    if (ctx->pc == 0x38CC54u) {
        ctx->pc = 0x38CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC50u;
        // 0x38cc54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC58u;
        goto label_38cc58;
    }
    ctx->pc = 0x38CC50u;
    SET_GPR_U32(ctx, 31, 0x38CC58u);
    ctx->pc = 0x38CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC50u;
    // 0x38cc54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38CC50u, 0x38CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC58u;
label_38cc58:
    // 0x38cc58: 0x10000031  b           . + 4 + (0x31 << 2)
label_38cc5c:
    if (ctx->pc == 0x38CC5Cu) {
        ctx->pc = 0x38CC60u;
        goto label_38cc60;
    }
    ctx->pc = 0x38CC58u;
    {
        const bool branch_taken_0x38cc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cc58) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38CC60u;
label_38cc60:
    // 0x38cc60: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x38cc60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_38cc64:
    // 0x38cc64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_38cc68:
    if (ctx->pc == 0x38CC68u) {
        ctx->pc = 0x38CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC64u;
        // 0x38cc68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CC6Cu;
        goto label_38cc6c;
    }
    ctx->pc = 0x38CC64u;
    {
        const bool branch_taken_0x38cc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC64u;
        // 0x38cc68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc64) {
            ctx->pc = 0x38CC78u;
            goto label_38cc78;
        }
    }
    ctx->pc = 0x38CC6Cu;
label_38cc6c:
    // 0x38cc6c: 0x10000022  b           . + 4 + (0x22 << 2)
label_38cc70:
    if (ctx->pc == 0x38CC70u) {
        ctx->pc = 0x38CC74u;
        goto label_38cc74;
    }
    ctx->pc = 0x38CC6Cu;
    {
        const bool branch_taken_0x38cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cc6c) {
            ctx->pc = 0x38CCF8u;
            goto label_38ccf8;
        }
    }
    ctx->pc = 0x38CC74u;
label_38cc74:
    // 0x38cc74: 0x0  nop
    ctx->pc = 0x38cc74u;
    // NOP
label_38cc78:
    // 0x38cc78: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x38cc78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_38cc7c:
    // 0x38cc7c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x38cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_38cc80:
    // 0x38cc80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38cc84:
    // 0x38cc84: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38cc84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_38cc88:
    // 0x38cc88: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x38cc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_38cc8c:
    // 0x38cc8c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_38cc90:
    if (ctx->pc == 0x38CC90u) {
        ctx->pc = 0x38CC94u;
        goto label_38cc94;
    }
    ctx->pc = 0x38CC8Cu;
    {
        const bool branch_taken_0x38cc8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38cc8c) {
            ctx->pc = 0x38CCC8u;
            goto label_38ccc8;
        }
    }
    ctx->pc = 0x38CC94u;
label_38cc94:
    // 0x38cc94: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x38cc94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_38cc98:
    // 0x38cc98: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x38cc98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_38cc9c:
    // 0x38cc9c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_38cca0:
    if (ctx->pc == 0x38CCA0u) {
        ctx->pc = 0x38CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC9Cu;
        // 0x38cca0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CCA4u;
        goto label_38cca4;
    }
    ctx->pc = 0x38CC9Cu;
    {
        const bool branch_taken_0x38cc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC9Cu;
        // 0x38cca0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc9c) {
            ctx->pc = 0x38CCF0u;
            goto label_38ccf0;
        }
    }
    ctx->pc = 0x38CCA4u;
label_38cca4:
    // 0x38cca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cca8:
    // 0x38cca8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x38cca8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_38ccac:
    // 0x38ccac: 0x0  nop
    ctx->pc = 0x38ccacu;
    // NOP
label_38ccb0:
    // 0x38ccb0: 0x0  nop
    ctx->pc = 0x38ccb0u;
    // NOP
label_38ccb4:
    // 0x38ccb4: 0x2010  mfhi        $a0
    ctx->pc = 0x38ccb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_38ccb8:
    // 0x38ccb8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38ccb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_38ccbc:
    // 0x38ccbc: 0x1000000c  b           . + 4 + (0xC << 2)
label_38ccc0:
    if (ctx->pc == 0x38CCC0u) {
        ctx->pc = 0x38CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCBCu;
        // 0x38ccc0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CCC4u;
        goto label_38ccc4;
    }
    ctx->pc = 0x38CCBCu;
    {
        const bool branch_taken_0x38ccbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCBCu;
        // 0x38ccc0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccbc) {
            ctx->pc = 0x38CCF0u;
            goto label_38ccf0;
        }
    }
    ctx->pc = 0x38CCC4u;
label_38ccc4:
    // 0x38ccc4: 0x0  nop
    ctx->pc = 0x38ccc4u;
    // NOP
label_38ccc8:
    // 0x38ccc8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x38ccc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_38cccc:
    // 0x38cccc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x38ccccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_38ccd0:
    // 0x38ccd0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_38ccd4:
    if (ctx->pc == 0x38CCD4u) {
        ctx->pc = 0x38CCD8u;
        goto label_38ccd8;
    }
    ctx->pc = 0x38CCD0u;
    {
        const bool branch_taken_0x38ccd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ccd0) {
            ctx->pc = 0x38CCF0u;
            goto label_38ccf0;
        }
    }
    ctx->pc = 0x38CCD8u;
label_38ccd8:
    // 0x38ccd8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38ccd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_38ccdc:
    // 0x38ccdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cce0:
    // 0x38cce0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x38cce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_38cce4:
    // 0x38cce4: 0x10000004  b           . + 4 + (0x4 << 2)
label_38cce8:
    if (ctx->pc == 0x38CCE8u) {
        ctx->pc = 0x38CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCE4u;
        // 0x38cce8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CCECu;
        goto label_38ccec;
    }
    ctx->pc = 0x38CCE4u;
    {
        const bool branch_taken_0x38cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCE4u;
        // 0x38cce8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cce4) {
            ctx->pc = 0x38CCF8u;
            goto label_38ccf8;
        }
    }
    ctx->pc = 0x38CCECu;
label_38ccec:
    // 0x38ccec: 0x0  nop
    ctx->pc = 0x38ccecu;
    // NOP
label_38ccf0:
    // 0x38ccf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ccf4:
    // 0x38ccf4: 0x0  nop
    ctx->pc = 0x38ccf4u;
    // NOP
label_38ccf8:
    // 0x38ccf8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_38ccfc:
    if (ctx->pc == 0x38CCFCu) {
        ctx->pc = 0x38CD00u;
        goto label_38cd00;
    }
    ctx->pc = 0x38CCF8u;
    {
        const bool branch_taken_0x38ccf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ccf8) {
            ctx->pc = 0x38CD20u;
            goto label_38cd20;
        }
    }
    ctx->pc = 0x38CD00u;
label_38cd00:
    // 0x38cd00: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x38cd00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_38cd04:
    // 0x38cd04: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x38cd04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_38cd08:
    // 0x38cd08: 0xc0aa1e8  jal         func_2A87A0
label_38cd0c:
    if (ctx->pc == 0x38CD0Cu) {
        ctx->pc = 0x38CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD08u;
        // 0x38cd0c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD10u;
        goto label_38cd10;
    }
    ctx->pc = 0x38CD08u;
    SET_GPR_U32(ctx, 31, 0x38CD10u);
    ctx->pc = 0x38CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CD08u;
    // 0x38cd0c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87A0u, 0x38CD08u, 0x38CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CD10u;
label_38cd10:
    // 0x38cd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cd14:
    // 0x38cd14: 0xc0c0830  jal         func_3020C0
label_38cd18:
    if (ctx->pc == 0x38CD18u) {
        ctx->pc = 0x38CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD14u;
        // 0x38cd18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD1Cu;
        goto label_38cd1c;
    }
    ctx->pc = 0x38CD14u;
    SET_GPR_U32(ctx, 31, 0x38CD1Cu);
    ctx->pc = 0x38CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CD14u;
    // 0x38cd18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38CD14u, 0x38CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CD1Cu;
label_38cd1c:
    // 0x38cd1c: 0x0  nop
    ctx->pc = 0x38cd1cu;
    // NOP
label_38cd20:
    // 0x38cd20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38cd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38cd24:
    // 0x38cd24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38cd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38cd28:
    // 0x38cd28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38cd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38cd2c:
    // 0x38cd2c: 0x3e00008  jr          $ra
label_38cd30:
    if (ctx->pc == 0x38CD30u) {
        ctx->pc = 0x38CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD2Cu;
        // 0x38cd30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD34u;
        goto label_fallthrough_0x38cd2c;
    }
    ctx->pc = 0x38CD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD2Cu;
        // 0x38cd30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38cd2c:
    ctx->pc = 0x38CD34u;
}
