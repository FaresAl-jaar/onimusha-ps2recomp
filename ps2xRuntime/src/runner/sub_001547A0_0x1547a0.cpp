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

// Function: sub_001547A0
// Address: 0x1547a0 - 0x1552f8
void sub_001547A0_0x1547a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001547A0_0x1547a0");
#endif

    switch (ctx->pc) {
        case 0x1547a0u: goto label_1547a0;
        case 0x1547a4u: goto label_1547a4;
        case 0x1547a8u: goto label_1547a8;
        case 0x1547acu: goto label_1547ac;
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        case 0x1548d0u: goto label_1548d0;
        case 0x1548d4u: goto label_1548d4;
        case 0x1548d8u: goto label_1548d8;
        case 0x1548dcu: goto label_1548dc;
        case 0x1548e0u: goto label_1548e0;
        case 0x1548e4u: goto label_1548e4;
        case 0x1548e8u: goto label_1548e8;
        case 0x1548ecu: goto label_1548ec;
        case 0x1548f0u: goto label_1548f0;
        case 0x1548f4u: goto label_1548f4;
        case 0x1548f8u: goto label_1548f8;
        case 0x1548fcu: goto label_1548fc;
        case 0x154900u: goto label_154900;
        case 0x154904u: goto label_154904;
        case 0x154908u: goto label_154908;
        case 0x15490cu: goto label_15490c;
        case 0x154910u: goto label_154910;
        case 0x154914u: goto label_154914;
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        case 0x154938u: goto label_154938;
        case 0x15493cu: goto label_15493c;
        case 0x154940u: goto label_154940;
        case 0x154944u: goto label_154944;
        case 0x154948u: goto label_154948;
        case 0x15494cu: goto label_15494c;
        case 0x154950u: goto label_154950;
        case 0x154954u: goto label_154954;
        case 0x154958u: goto label_154958;
        case 0x15495cu: goto label_15495c;
        case 0x154960u: goto label_154960;
        case 0x154964u: goto label_154964;
        case 0x154968u: goto label_154968;
        case 0x15496cu: goto label_15496c;
        case 0x154970u: goto label_154970;
        case 0x154974u: goto label_154974;
        case 0x154978u: goto label_154978;
        case 0x15497cu: goto label_15497c;
        case 0x154980u: goto label_154980;
        case 0x154984u: goto label_154984;
        case 0x154988u: goto label_154988;
        case 0x15498cu: goto label_15498c;
        case 0x154990u: goto label_154990;
        case 0x154994u: goto label_154994;
        case 0x154998u: goto label_154998;
        case 0x15499cu: goto label_15499c;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549a4u: goto label_1549a4;
        case 0x1549a8u: goto label_1549a8;
        case 0x1549acu: goto label_1549ac;
        case 0x1549b0u: goto label_1549b0;
        case 0x1549b4u: goto label_1549b4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549bcu: goto label_1549bc;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549c4u: goto label_1549c4;
        case 0x1549c8u: goto label_1549c8;
        case 0x1549ccu: goto label_1549cc;
        case 0x1549d0u: goto label_1549d0;
        case 0x1549d4u: goto label_1549d4;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549dcu: goto label_1549dc;
        case 0x1549e0u: goto label_1549e0;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549e8u: goto label_1549e8;
        case 0x1549ecu: goto label_1549ec;
        case 0x1549f0u: goto label_1549f0;
        case 0x1549f4u: goto label_1549f4;
        case 0x1549f8u: goto label_1549f8;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a00u: goto label_154a00;
        case 0x154a04u: goto label_154a04;
        case 0x154a08u: goto label_154a08;
        case 0x154a0cu: goto label_154a0c;
        case 0x154a10u: goto label_154a10;
        case 0x154a14u: goto label_154a14;
        case 0x154a18u: goto label_154a18;
        case 0x154a1cu: goto label_154a1c;
        case 0x154a20u: goto label_154a20;
        case 0x154a24u: goto label_154a24;
        case 0x154a28u: goto label_154a28;
        case 0x154a2cu: goto label_154a2c;
        case 0x154a30u: goto label_154a30;
        case 0x154a34u: goto label_154a34;
        case 0x154a38u: goto label_154a38;
        case 0x154a3cu: goto label_154a3c;
        case 0x154a40u: goto label_154a40;
        case 0x154a44u: goto label_154a44;
        case 0x154a48u: goto label_154a48;
        case 0x154a4cu: goto label_154a4c;
        case 0x154a50u: goto label_154a50;
        case 0x154a54u: goto label_154a54;
        case 0x154a58u: goto label_154a58;
        case 0x154a5cu: goto label_154a5c;
        case 0x154a60u: goto label_154a60;
        case 0x154a64u: goto label_154a64;
        case 0x154a68u: goto label_154a68;
        case 0x154a6cu: goto label_154a6c;
        case 0x154a70u: goto label_154a70;
        case 0x154a74u: goto label_154a74;
        case 0x154a78u: goto label_154a78;
        case 0x154a7cu: goto label_154a7c;
        case 0x154a80u: goto label_154a80;
        case 0x154a84u: goto label_154a84;
        case 0x154a88u: goto label_154a88;
        case 0x154a8cu: goto label_154a8c;
        case 0x154a90u: goto label_154a90;
        case 0x154a94u: goto label_154a94;
        case 0x154a98u: goto label_154a98;
        case 0x154a9cu: goto label_154a9c;
        case 0x154aa0u: goto label_154aa0;
        case 0x154aa4u: goto label_154aa4;
        case 0x154aa8u: goto label_154aa8;
        case 0x154aacu: goto label_154aac;
        case 0x154ab0u: goto label_154ab0;
        case 0x154ab4u: goto label_154ab4;
        case 0x154ab8u: goto label_154ab8;
        case 0x154abcu: goto label_154abc;
        case 0x154ac0u: goto label_154ac0;
        case 0x154ac4u: goto label_154ac4;
        case 0x154ac8u: goto label_154ac8;
        case 0x154accu: goto label_154acc;
        case 0x154ad0u: goto label_154ad0;
        case 0x154ad4u: goto label_154ad4;
        case 0x154ad8u: goto label_154ad8;
        case 0x154adcu: goto label_154adc;
        case 0x154ae0u: goto label_154ae0;
        case 0x154ae4u: goto label_154ae4;
        case 0x154ae8u: goto label_154ae8;
        case 0x154aecu: goto label_154aec;
        case 0x154af0u: goto label_154af0;
        case 0x154af4u: goto label_154af4;
        case 0x154af8u: goto label_154af8;
        case 0x154afcu: goto label_154afc;
        case 0x154b00u: goto label_154b00;
        case 0x154b04u: goto label_154b04;
        case 0x154b08u: goto label_154b08;
        case 0x154b0cu: goto label_154b0c;
        case 0x154b10u: goto label_154b10;
        case 0x154b14u: goto label_154b14;
        case 0x154b18u: goto label_154b18;
        case 0x154b1cu: goto label_154b1c;
        case 0x154b20u: goto label_154b20;
        case 0x154b24u: goto label_154b24;
        case 0x154b28u: goto label_154b28;
        case 0x154b2cu: goto label_154b2c;
        case 0x154b30u: goto label_154b30;
        case 0x154b34u: goto label_154b34;
        case 0x154b38u: goto label_154b38;
        case 0x154b3cu: goto label_154b3c;
        case 0x154b40u: goto label_154b40;
        case 0x154b44u: goto label_154b44;
        case 0x154b48u: goto label_154b48;
        case 0x154b4cu: goto label_154b4c;
        case 0x154b50u: goto label_154b50;
        case 0x154b54u: goto label_154b54;
        case 0x154b58u: goto label_154b58;
        case 0x154b5cu: goto label_154b5c;
        case 0x154b60u: goto label_154b60;
        case 0x154b64u: goto label_154b64;
        case 0x154b68u: goto label_154b68;
        case 0x154b6cu: goto label_154b6c;
        case 0x154b70u: goto label_154b70;
        case 0x154b74u: goto label_154b74;
        case 0x154b78u: goto label_154b78;
        case 0x154b7cu: goto label_154b7c;
        case 0x154b80u: goto label_154b80;
        case 0x154b84u: goto label_154b84;
        case 0x154b88u: goto label_154b88;
        case 0x154b8cu: goto label_154b8c;
        case 0x154b90u: goto label_154b90;
        case 0x154b94u: goto label_154b94;
        case 0x154b98u: goto label_154b98;
        case 0x154b9cu: goto label_154b9c;
        case 0x154ba0u: goto label_154ba0;
        case 0x154ba4u: goto label_154ba4;
        case 0x154ba8u: goto label_154ba8;
        case 0x154bacu: goto label_154bac;
        case 0x154bb0u: goto label_154bb0;
        case 0x154bb4u: goto label_154bb4;
        case 0x154bb8u: goto label_154bb8;
        case 0x154bbcu: goto label_154bbc;
        case 0x154bc0u: goto label_154bc0;
        case 0x154bc4u: goto label_154bc4;
        case 0x154bc8u: goto label_154bc8;
        case 0x154bccu: goto label_154bcc;
        case 0x154bd0u: goto label_154bd0;
        case 0x154bd4u: goto label_154bd4;
        case 0x154bd8u: goto label_154bd8;
        case 0x154bdcu: goto label_154bdc;
        case 0x154be0u: goto label_154be0;
        case 0x154be4u: goto label_154be4;
        case 0x154be8u: goto label_154be8;
        case 0x154becu: goto label_154bec;
        case 0x154bf0u: goto label_154bf0;
        case 0x154bf4u: goto label_154bf4;
        case 0x154bf8u: goto label_154bf8;
        case 0x154bfcu: goto label_154bfc;
        case 0x154c00u: goto label_154c00;
        case 0x154c04u: goto label_154c04;
        case 0x154c08u: goto label_154c08;
        case 0x154c0cu: goto label_154c0c;
        case 0x154c10u: goto label_154c10;
        case 0x154c14u: goto label_154c14;
        case 0x154c18u: goto label_154c18;
        case 0x154c1cu: goto label_154c1c;
        case 0x154c20u: goto label_154c20;
        case 0x154c24u: goto label_154c24;
        case 0x154c28u: goto label_154c28;
        case 0x154c2cu: goto label_154c2c;
        case 0x154c30u: goto label_154c30;
        case 0x154c34u: goto label_154c34;
        case 0x154c38u: goto label_154c38;
        case 0x154c3cu: goto label_154c3c;
        case 0x154c40u: goto label_154c40;
        case 0x154c44u: goto label_154c44;
        case 0x154c48u: goto label_154c48;
        case 0x154c4cu: goto label_154c4c;
        case 0x154c50u: goto label_154c50;
        case 0x154c54u: goto label_154c54;
        case 0x154c58u: goto label_154c58;
        case 0x154c5cu: goto label_154c5c;
        case 0x154c60u: goto label_154c60;
        case 0x154c64u: goto label_154c64;
        case 0x154c68u: goto label_154c68;
        case 0x154c6cu: goto label_154c6c;
        case 0x154c70u: goto label_154c70;
        case 0x154c74u: goto label_154c74;
        case 0x154c78u: goto label_154c78;
        case 0x154c7cu: goto label_154c7c;
        case 0x154c80u: goto label_154c80;
        case 0x154c84u: goto label_154c84;
        case 0x154c88u: goto label_154c88;
        case 0x154c8cu: goto label_154c8c;
        case 0x154c90u: goto label_154c90;
        case 0x154c94u: goto label_154c94;
        case 0x154c98u: goto label_154c98;
        case 0x154c9cu: goto label_154c9c;
        case 0x154ca0u: goto label_154ca0;
        case 0x154ca4u: goto label_154ca4;
        case 0x154ca8u: goto label_154ca8;
        case 0x154cacu: goto label_154cac;
        case 0x154cb0u: goto label_154cb0;
        case 0x154cb4u: goto label_154cb4;
        case 0x154cb8u: goto label_154cb8;
        case 0x154cbcu: goto label_154cbc;
        case 0x154cc0u: goto label_154cc0;
        case 0x154cc4u: goto label_154cc4;
        case 0x154cc8u: goto label_154cc8;
        case 0x154cccu: goto label_154ccc;
        case 0x154cd0u: goto label_154cd0;
        case 0x154cd4u: goto label_154cd4;
        case 0x154cd8u: goto label_154cd8;
        case 0x154cdcu: goto label_154cdc;
        case 0x154ce0u: goto label_154ce0;
        case 0x154ce4u: goto label_154ce4;
        case 0x154ce8u: goto label_154ce8;
        case 0x154cecu: goto label_154cec;
        case 0x154cf0u: goto label_154cf0;
        case 0x154cf4u: goto label_154cf4;
        case 0x154cf8u: goto label_154cf8;
        case 0x154cfcu: goto label_154cfc;
        case 0x154d00u: goto label_154d00;
        case 0x154d04u: goto label_154d04;
        case 0x154d08u: goto label_154d08;
        case 0x154d0cu: goto label_154d0c;
        case 0x154d10u: goto label_154d10;
        case 0x154d14u: goto label_154d14;
        case 0x154d18u: goto label_154d18;
        case 0x154d1cu: goto label_154d1c;
        case 0x154d20u: goto label_154d20;
        case 0x154d24u: goto label_154d24;
        case 0x154d28u: goto label_154d28;
        case 0x154d2cu: goto label_154d2c;
        case 0x154d30u: goto label_154d30;
        case 0x154d34u: goto label_154d34;
        case 0x154d38u: goto label_154d38;
        case 0x154d3cu: goto label_154d3c;
        case 0x154d40u: goto label_154d40;
        case 0x154d44u: goto label_154d44;
        case 0x154d48u: goto label_154d48;
        case 0x154d4cu: goto label_154d4c;
        case 0x154d50u: goto label_154d50;
        case 0x154d54u: goto label_154d54;
        case 0x154d58u: goto label_154d58;
        case 0x154d5cu: goto label_154d5c;
        case 0x154d60u: goto label_154d60;
        case 0x154d64u: goto label_154d64;
        case 0x154d68u: goto label_154d68;
        case 0x154d6cu: goto label_154d6c;
        case 0x154d70u: goto label_154d70;
        case 0x154d74u: goto label_154d74;
        case 0x154d78u: goto label_154d78;
        case 0x154d7cu: goto label_154d7c;
        case 0x154d80u: goto label_154d80;
        case 0x154d84u: goto label_154d84;
        case 0x154d88u: goto label_154d88;
        case 0x154d8cu: goto label_154d8c;
        case 0x154d90u: goto label_154d90;
        case 0x154d94u: goto label_154d94;
        case 0x154d98u: goto label_154d98;
        case 0x154d9cu: goto label_154d9c;
        case 0x154da0u: goto label_154da0;
        case 0x154da4u: goto label_154da4;
        case 0x154da8u: goto label_154da8;
        case 0x154dacu: goto label_154dac;
        case 0x154db0u: goto label_154db0;
        case 0x154db4u: goto label_154db4;
        case 0x154db8u: goto label_154db8;
        case 0x154dbcu: goto label_154dbc;
        case 0x154dc0u: goto label_154dc0;
        case 0x154dc4u: goto label_154dc4;
        case 0x154dc8u: goto label_154dc8;
        case 0x154dccu: goto label_154dcc;
        case 0x154dd0u: goto label_154dd0;
        case 0x154dd4u: goto label_154dd4;
        case 0x154dd8u: goto label_154dd8;
        case 0x154ddcu: goto label_154ddc;
        case 0x154de0u: goto label_154de0;
        case 0x154de4u: goto label_154de4;
        case 0x154de8u: goto label_154de8;
        case 0x154decu: goto label_154dec;
        case 0x154df0u: goto label_154df0;
        case 0x154df4u: goto label_154df4;
        case 0x154df8u: goto label_154df8;
        case 0x154dfcu: goto label_154dfc;
        case 0x154e00u: goto label_154e00;
        case 0x154e04u: goto label_154e04;
        case 0x154e08u: goto label_154e08;
        case 0x154e0cu: goto label_154e0c;
        case 0x154e10u: goto label_154e10;
        case 0x154e14u: goto label_154e14;
        case 0x154e18u: goto label_154e18;
        case 0x154e1cu: goto label_154e1c;
        case 0x154e20u: goto label_154e20;
        case 0x154e24u: goto label_154e24;
        case 0x154e28u: goto label_154e28;
        case 0x154e2cu: goto label_154e2c;
        case 0x154e30u: goto label_154e30;
        case 0x154e34u: goto label_154e34;
        case 0x154e38u: goto label_154e38;
        case 0x154e3cu: goto label_154e3c;
        case 0x154e40u: goto label_154e40;
        case 0x154e44u: goto label_154e44;
        case 0x154e48u: goto label_154e48;
        case 0x154e4cu: goto label_154e4c;
        case 0x154e50u: goto label_154e50;
        case 0x154e54u: goto label_154e54;
        case 0x154e58u: goto label_154e58;
        case 0x154e5cu: goto label_154e5c;
        case 0x154e60u: goto label_154e60;
        case 0x154e64u: goto label_154e64;
        case 0x154e68u: goto label_154e68;
        case 0x154e6cu: goto label_154e6c;
        case 0x154e70u: goto label_154e70;
        case 0x154e74u: goto label_154e74;
        case 0x154e78u: goto label_154e78;
        case 0x154e7cu: goto label_154e7c;
        case 0x154e80u: goto label_154e80;
        case 0x154e84u: goto label_154e84;
        case 0x154e88u: goto label_154e88;
        case 0x154e8cu: goto label_154e8c;
        case 0x154e90u: goto label_154e90;
        case 0x154e94u: goto label_154e94;
        case 0x154e98u: goto label_154e98;
        case 0x154e9cu: goto label_154e9c;
        case 0x154ea0u: goto label_154ea0;
        case 0x154ea4u: goto label_154ea4;
        case 0x154ea8u: goto label_154ea8;
        case 0x154eacu: goto label_154eac;
        case 0x154eb0u: goto label_154eb0;
        case 0x154eb4u: goto label_154eb4;
        case 0x154eb8u: goto label_154eb8;
        case 0x154ebcu: goto label_154ebc;
        case 0x154ec0u: goto label_154ec0;
        case 0x154ec4u: goto label_154ec4;
        case 0x154ec8u: goto label_154ec8;
        case 0x154eccu: goto label_154ecc;
        case 0x154ed0u: goto label_154ed0;
        case 0x154ed4u: goto label_154ed4;
        case 0x154ed8u: goto label_154ed8;
        case 0x154edcu: goto label_154edc;
        case 0x154ee0u: goto label_154ee0;
        case 0x154ee4u: goto label_154ee4;
        case 0x154ee8u: goto label_154ee8;
        case 0x154eecu: goto label_154eec;
        case 0x154ef0u: goto label_154ef0;
        case 0x154ef4u: goto label_154ef4;
        case 0x154ef8u: goto label_154ef8;
        case 0x154efcu: goto label_154efc;
        case 0x154f00u: goto label_154f00;
        case 0x154f04u: goto label_154f04;
        case 0x154f08u: goto label_154f08;
        case 0x154f0cu: goto label_154f0c;
        case 0x154f10u: goto label_154f10;
        case 0x154f14u: goto label_154f14;
        case 0x154f18u: goto label_154f18;
        case 0x154f1cu: goto label_154f1c;
        case 0x154f20u: goto label_154f20;
        case 0x154f24u: goto label_154f24;
        case 0x154f28u: goto label_154f28;
        case 0x154f2cu: goto label_154f2c;
        case 0x154f30u: goto label_154f30;
        case 0x154f34u: goto label_154f34;
        case 0x154f38u: goto label_154f38;
        case 0x154f3cu: goto label_154f3c;
        case 0x154f40u: goto label_154f40;
        case 0x154f44u: goto label_154f44;
        case 0x154f48u: goto label_154f48;
        case 0x154f4cu: goto label_154f4c;
        case 0x154f50u: goto label_154f50;
        case 0x154f54u: goto label_154f54;
        case 0x154f58u: goto label_154f58;
        case 0x154f5cu: goto label_154f5c;
        case 0x154f60u: goto label_154f60;
        case 0x154f64u: goto label_154f64;
        case 0x154f68u: goto label_154f68;
        case 0x154f6cu: goto label_154f6c;
        case 0x154f70u: goto label_154f70;
        case 0x154f74u: goto label_154f74;
        case 0x154f78u: goto label_154f78;
        case 0x154f7cu: goto label_154f7c;
        case 0x154f80u: goto label_154f80;
        case 0x154f84u: goto label_154f84;
        case 0x154f88u: goto label_154f88;
        case 0x154f8cu: goto label_154f8c;
        case 0x154f90u: goto label_154f90;
        case 0x154f94u: goto label_154f94;
        case 0x154f98u: goto label_154f98;
        case 0x154f9cu: goto label_154f9c;
        case 0x154fa0u: goto label_154fa0;
        case 0x154fa4u: goto label_154fa4;
        case 0x154fa8u: goto label_154fa8;
        case 0x154facu: goto label_154fac;
        case 0x154fb0u: goto label_154fb0;
        case 0x154fb4u: goto label_154fb4;
        case 0x154fb8u: goto label_154fb8;
        case 0x154fbcu: goto label_154fbc;
        case 0x154fc0u: goto label_154fc0;
        case 0x154fc4u: goto label_154fc4;
        case 0x154fc8u: goto label_154fc8;
        case 0x154fccu: goto label_154fcc;
        case 0x154fd0u: goto label_154fd0;
        case 0x154fd4u: goto label_154fd4;
        case 0x154fd8u: goto label_154fd8;
        case 0x154fdcu: goto label_154fdc;
        case 0x154fe0u: goto label_154fe0;
        case 0x154fe4u: goto label_154fe4;
        case 0x154fe8u: goto label_154fe8;
        case 0x154fecu: goto label_154fec;
        case 0x154ff0u: goto label_154ff0;
        case 0x154ff4u: goto label_154ff4;
        case 0x154ff8u: goto label_154ff8;
        case 0x154ffcu: goto label_154ffc;
        case 0x155000u: goto label_155000;
        case 0x155004u: goto label_155004;
        case 0x155008u: goto label_155008;
        case 0x15500cu: goto label_15500c;
        case 0x155010u: goto label_155010;
        case 0x155014u: goto label_155014;
        case 0x155018u: goto label_155018;
        case 0x15501cu: goto label_15501c;
        case 0x155020u: goto label_155020;
        case 0x155024u: goto label_155024;
        case 0x155028u: goto label_155028;
        case 0x15502cu: goto label_15502c;
        case 0x155030u: goto label_155030;
        case 0x155034u: goto label_155034;
        case 0x155038u: goto label_155038;
        case 0x15503cu: goto label_15503c;
        case 0x155040u: goto label_155040;
        case 0x155044u: goto label_155044;
        case 0x155048u: goto label_155048;
        case 0x15504cu: goto label_15504c;
        case 0x155050u: goto label_155050;
        case 0x155054u: goto label_155054;
        case 0x155058u: goto label_155058;
        case 0x15505cu: goto label_15505c;
        case 0x155060u: goto label_155060;
        case 0x155064u: goto label_155064;
        case 0x155068u: goto label_155068;
        case 0x15506cu: goto label_15506c;
        case 0x155070u: goto label_155070;
        case 0x155074u: goto label_155074;
        case 0x155078u: goto label_155078;
        case 0x15507cu: goto label_15507c;
        case 0x155080u: goto label_155080;
        case 0x155084u: goto label_155084;
        case 0x155088u: goto label_155088;
        case 0x15508cu: goto label_15508c;
        case 0x155090u: goto label_155090;
        case 0x155094u: goto label_155094;
        case 0x155098u: goto label_155098;
        case 0x15509cu: goto label_15509c;
        case 0x1550a0u: goto label_1550a0;
        case 0x1550a4u: goto label_1550a4;
        case 0x1550a8u: goto label_1550a8;
        case 0x1550acu: goto label_1550ac;
        case 0x1550b0u: goto label_1550b0;
        case 0x1550b4u: goto label_1550b4;
        case 0x1550b8u: goto label_1550b8;
        case 0x1550bcu: goto label_1550bc;
        case 0x1550c0u: goto label_1550c0;
        case 0x1550c4u: goto label_1550c4;
        case 0x1550c8u: goto label_1550c8;
        case 0x1550ccu: goto label_1550cc;
        case 0x1550d0u: goto label_1550d0;
        case 0x1550d4u: goto label_1550d4;
        case 0x1550d8u: goto label_1550d8;
        case 0x1550dcu: goto label_1550dc;
        case 0x1550e0u: goto label_1550e0;
        case 0x1550e4u: goto label_1550e4;
        case 0x1550e8u: goto label_1550e8;
        case 0x1550ecu: goto label_1550ec;
        case 0x1550f0u: goto label_1550f0;
        case 0x1550f4u: goto label_1550f4;
        case 0x1550f8u: goto label_1550f8;
        case 0x1550fcu: goto label_1550fc;
        case 0x155100u: goto label_155100;
        case 0x155104u: goto label_155104;
        case 0x155108u: goto label_155108;
        case 0x15510cu: goto label_15510c;
        case 0x155110u: goto label_155110;
        case 0x155114u: goto label_155114;
        case 0x155118u: goto label_155118;
        case 0x15511cu: goto label_15511c;
        case 0x155120u: goto label_155120;
        case 0x155124u: goto label_155124;
        case 0x155128u: goto label_155128;
        case 0x15512cu: goto label_15512c;
        case 0x155130u: goto label_155130;
        case 0x155134u: goto label_155134;
        case 0x155138u: goto label_155138;
        case 0x15513cu: goto label_15513c;
        case 0x155140u: goto label_155140;
        case 0x155144u: goto label_155144;
        case 0x155148u: goto label_155148;
        case 0x15514cu: goto label_15514c;
        case 0x155150u: goto label_155150;
        case 0x155154u: goto label_155154;
        case 0x155158u: goto label_155158;
        case 0x15515cu: goto label_15515c;
        case 0x155160u: goto label_155160;
        case 0x155164u: goto label_155164;
        case 0x155168u: goto label_155168;
        case 0x15516cu: goto label_15516c;
        case 0x155170u: goto label_155170;
        case 0x155174u: goto label_155174;
        case 0x155178u: goto label_155178;
        case 0x15517cu: goto label_15517c;
        case 0x155180u: goto label_155180;
        case 0x155184u: goto label_155184;
        case 0x155188u: goto label_155188;
        case 0x15518cu: goto label_15518c;
        case 0x155190u: goto label_155190;
        case 0x155194u: goto label_155194;
        case 0x155198u: goto label_155198;
        case 0x15519cu: goto label_15519c;
        case 0x1551a0u: goto label_1551a0;
        case 0x1551a4u: goto label_1551a4;
        case 0x1551a8u: goto label_1551a8;
        case 0x1551acu: goto label_1551ac;
        case 0x1551b0u: goto label_1551b0;
        case 0x1551b4u: goto label_1551b4;
        case 0x1551b8u: goto label_1551b8;
        case 0x1551bcu: goto label_1551bc;
        case 0x1551c0u: goto label_1551c0;
        case 0x1551c4u: goto label_1551c4;
        case 0x1551c8u: goto label_1551c8;
        case 0x1551ccu: goto label_1551cc;
        case 0x1551d0u: goto label_1551d0;
        case 0x1551d4u: goto label_1551d4;
        case 0x1551d8u: goto label_1551d8;
        case 0x1551dcu: goto label_1551dc;
        case 0x1551e0u: goto label_1551e0;
        case 0x1551e4u: goto label_1551e4;
        case 0x1551e8u: goto label_1551e8;
        case 0x1551ecu: goto label_1551ec;
        case 0x1551f0u: goto label_1551f0;
        case 0x1551f4u: goto label_1551f4;
        case 0x1551f8u: goto label_1551f8;
        case 0x1551fcu: goto label_1551fc;
        case 0x155200u: goto label_155200;
        case 0x155204u: goto label_155204;
        case 0x155208u: goto label_155208;
        case 0x15520cu: goto label_15520c;
        case 0x155210u: goto label_155210;
        case 0x155214u: goto label_155214;
        case 0x155218u: goto label_155218;
        case 0x15521cu: goto label_15521c;
        case 0x155220u: goto label_155220;
        case 0x155224u: goto label_155224;
        case 0x155228u: goto label_155228;
        case 0x15522cu: goto label_15522c;
        case 0x155230u: goto label_155230;
        case 0x155234u: goto label_155234;
        case 0x155238u: goto label_155238;
        case 0x15523cu: goto label_15523c;
        case 0x155240u: goto label_155240;
        case 0x155244u: goto label_155244;
        case 0x155248u: goto label_155248;
        case 0x15524cu: goto label_15524c;
        case 0x155250u: goto label_155250;
        case 0x155254u: goto label_155254;
        case 0x155258u: goto label_155258;
        case 0x15525cu: goto label_15525c;
        case 0x155260u: goto label_155260;
        case 0x155264u: goto label_155264;
        case 0x155268u: goto label_155268;
        case 0x15526cu: goto label_15526c;
        case 0x155270u: goto label_155270;
        case 0x155274u: goto label_155274;
        case 0x155278u: goto label_155278;
        case 0x15527cu: goto label_15527c;
        case 0x155280u: goto label_155280;
        case 0x155284u: goto label_155284;
        case 0x155288u: goto label_155288;
        case 0x15528cu: goto label_15528c;
        case 0x155290u: goto label_155290;
        case 0x155294u: goto label_155294;
        case 0x155298u: goto label_155298;
        case 0x15529cu: goto label_15529c;
        case 0x1552a0u: goto label_1552a0;
        case 0x1552a4u: goto label_1552a4;
        case 0x1552a8u: goto label_1552a8;
        case 0x1552acu: goto label_1552ac;
        case 0x1552b0u: goto label_1552b0;
        case 0x1552b4u: goto label_1552b4;
        case 0x1552b8u: goto label_1552b8;
        case 0x1552bcu: goto label_1552bc;
        case 0x1552c0u: goto label_1552c0;
        case 0x1552c4u: goto label_1552c4;
        case 0x1552c8u: goto label_1552c8;
        case 0x1552ccu: goto label_1552cc;
        case 0x1552d0u: goto label_1552d0;
        case 0x1552d4u: goto label_1552d4;
        case 0x1552d8u: goto label_1552d8;
        case 0x1552dcu: goto label_1552dc;
        case 0x1552e0u: goto label_1552e0;
        case 0x1552e4u: goto label_1552e4;
        case 0x1552e8u: goto label_1552e8;
        case 0x1552ecu: goto label_1552ec;
        case 0x1552f0u: goto label_1552f0;
        case 0x1552f4u: goto label_1552f4;
        default: break;
    }

    ctx->pc = 0x1547a0u;

label_1547a0:
    // 0x1547a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1547a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1547a4:
    // 0x1547a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1547a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1547a8:
    // 0x1547a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1547a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1547ac:
    // 0x1547ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1547acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1547b0:
    // 0x1547b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1547b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1547b4:
    // 0x1547b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1547b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1547b8:
    // 0x1547b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1547b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1547bc:
    // 0x1547bc: 0x8f8385cc  lw          $v1, -0x7A34($gp)
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936012)));
label_1547c0:
    // 0x1547c0: 0x146002c5  bnez        $v1, . + 4 + (0x2C5 << 2)
label_1547c4:
    if (ctx->pc == 0x1547C4u) {
        ctx->pc = 0x1547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547C0u;
        // 0x1547c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547C8u;
        goto label_1547c8;
    }
    ctx->pc = 0x1547C0u;
    {
        const bool branch_taken_0x1547c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547C0u;
        // 0x1547c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547c0) {
            ctx->pc = 0x1552D8u;
            goto label_1552d8;
        }
    }
    ctx->pc = 0x1547C8u;
label_1547c8:
    // 0x1547c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1547c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1547cc:
    // 0x1547cc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1547ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_1547d0:
    // 0x1547d0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x1547d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
label_1547d4:
    // 0x1547d4: 0xc0ce444  jal         func_339110
label_1547d8:
    if (ctx->pc == 0x1547D8u) {
        ctx->pc = 0x1547D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547D4u;
        // 0x1547d8: 0xaf8285cc  sw          $v0, -0x7A34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547DCu;
        goto label_1547dc;
    }
    ctx->pc = 0x1547D4u;
    SET_GPR_U32(ctx, 31, 0x1547DCu);
    ctx->pc = 0x1547D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547D4u;
    // 0x1547d8: 0xaf8285cc  sw          $v0, -0x7A34($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936012), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339110u, 0x1547D4u, 0x1547DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547DCu;
label_1547dc:
    // 0x1547dc: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1547dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_1547e0:
    // 0x1547e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1547e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1547e4:
    // 0x1547e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1547e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1547e8:
    // 0x1547e8: 0x2484f090  addiu       $a0, $a0, -0xF70
    ctx->pc = 0x1547e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963344));
label_1547ec:
    // 0x1547ec: 0x0  nop
    ctx->pc = 0x1547ecu;
    // NOP
label_1547f0:
    // 0x1547f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1547f4:
    // 0x1547f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1547f8:
    if (ctx->pc == 0x1547F8u) {
        ctx->pc = 0x1547FCu;
        goto label_1547fc;
    }
    ctx->pc = 0x1547F4u;
    {
        const bool branch_taken_0x1547f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547f4) {
            ctx->pc = 0x154800u;
            goto label_154800;
        }
    }
    ctx->pc = 0x1547FCu;
label_1547fc:
    // 0x1547fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1547fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_154800:
    // 0x154800: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_154804:
    // 0x154804: 0x28a30024  slti        $v1, $a1, 0x24
    ctx->pc = 0x154804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)36) ? 1 : 0);
label_154808:
    // 0x154808: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_15480c:
    if (ctx->pc == 0x15480Cu) {
        ctx->pc = 0x15480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154808u;
        // 0x15480c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154810u;
        goto label_154810;
    }
    ctx->pc = 0x154808u;
    {
        const bool branch_taken_0x154808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154808u;
        // 0x15480c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154808) {
            ctx->pc = 0x1547F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1547f0;
        }
    }
    ctx->pc = 0x154810u;
label_154810:
    // 0x154810: 0x8f8485c0  lw          $a0, -0x7A40($gp)
    ctx->pc = 0x154810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
label_154814:
    // 0x154814: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x154814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154818:
    // 0x154818: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x154818u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_15481c:
    // 0x15481c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_154820:
    if (ctx->pc == 0x154820u) {
        ctx->pc = 0x154820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15481Cu;
        // 0x154820: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154824u;
        goto label_154824;
    }
    ctx->pc = 0x15481Cu;
    {
        const bool branch_taken_0x15481c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15481Cu;
        // 0x154820: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15481c) {
            ctx->pc = 0x154880u;
            goto label_154880;
        }
    }
    ctx->pc = 0x154824u;
label_154824:
    // 0x154824: 0x3c120080  lui         $s2, 0x80
    ctx->pc = 0x154824u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
label_154828:
    // 0x154828: 0x2652eeb0  addiu       $s2, $s2, -0x1150
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962864));
label_15482c:
    // 0x15482c: 0x0  nop
    ctx->pc = 0x15482cu;
    // NOP
label_154830:
    // 0x154830: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_154834:
    // 0x154834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154838:
    // 0x154838: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_15483c:
    if (ctx->pc == 0x15483Cu) {
        ctx->pc = 0x154840u;
        goto label_154840;
    }
    ctx->pc = 0x154838u;
    {
        const bool branch_taken_0x154838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154838) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x154840u;
label_154840:
    // 0x154840: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x154840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_154844:
    // 0x154844: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_154848:
    if (ctx->pc == 0x154848u) {
        ctx->pc = 0x15484Cu;
        goto label_15484c;
    }
    ctx->pc = 0x154844u;
    {
        const bool branch_taken_0x154844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154844) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x15484Cu;
label_15484c:
    // 0x15484c: 0xc08c550  jal         func_231540
label_154850:
    if (ctx->pc == 0x154850u) {
        ctx->pc = 0x154854u;
        goto label_154854;
    }
    ctx->pc = 0x15484Cu;
    SET_GPR_U32(ctx, 31, 0x154854u);
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x15484Cu, 0x154854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154854u;
label_154854:
    // 0x154854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154858:
    // 0x154858: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_15485c:
    if (ctx->pc == 0x15485Cu) {
        ctx->pc = 0x154860u;
        goto label_154860;
    }
    ctx->pc = 0x154858u;
    {
        const bool branch_taken_0x154858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x154858) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x154860u;
label_154860:
    // 0x154860: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x154860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_154864:
    // 0x154864: 0x0  nop
    ctx->pc = 0x154864u;
    // NOP
label_154868:
    // 0x154868: 0x8f8485c0  lw          $a0, -0x7A40($gp)
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
label_15486c:
    // 0x15486c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15486cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_154870:
    // 0x154870: 0x284182b  sltu        $v1, $s4, $a0
    ctx->pc = 0x154870u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_154874:
    // 0x154874: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_154878:
    if (ctx->pc == 0x154878u) {
        ctx->pc = 0x154878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154874u;
        // 0x154878: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15487Cu;
        goto label_15487c;
    }
    ctx->pc = 0x154874u;
    {
        const bool branch_taken_0x154874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154874u;
        // 0x154878: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154874) {
            ctx->pc = 0x154830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154830;
        }
    }
    ctx->pc = 0x15487Cu;
label_15487c:
    // 0x15487c: 0x0  nop
    ctx->pc = 0x15487cu;
    // NOP
label_154880:
    // 0x154880: 0x1660028b  bnez        $s3, . + 4 + (0x28B << 2)
label_154884:
    if (ctx->pc == 0x154884u) {
        ctx->pc = 0x154884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154880u;
        // 0x154884: 0x4082b  sltu        $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154888u;
        goto label_154888;
    }
    ctx->pc = 0x154880u;
    {
        const bool branch_taken_0x154880 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x154884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154880u;
        // 0x154884: 0x4082b  sltu        $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154880) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x154888u;
label_154888:
    // 0x154888: 0x102000d3  beqz        $at, . + 4 + (0xD3 << 2)
label_15488c:
    if (ctx->pc == 0x15488Cu) {
        ctx->pc = 0x15488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154888u;
        // 0x15488c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154890u;
        goto label_154890;
    }
    ctx->pc = 0x154888u;
    {
        const bool branch_taken_0x154888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154888u;
        // 0x15488c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154888) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154890u;
label_154890:
    // 0x154890: 0x3c130080  lui         $s3, 0x80
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)128 << 16));
label_154894:
    // 0x154894: 0x2673eeb0  addiu       $s3, $s3, -0x1150
    ctx->pc = 0x154894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962864));
label_154898:
    // 0x154898: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_15489c:
    // 0x15489c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_1548a0:
    if (ctx->pc == 0x1548A0u) {
        ctx->pc = 0x1548A4u;
        goto label_1548a4;
    }
    ctx->pc = 0x15489Cu;
    {
        const bool branch_taken_0x15489c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15489c) {
            ctx->pc = 0x154910u;
            goto label_154910;
        }
    }
    ctx->pc = 0x1548A4u;
label_1548a4:
    // 0x1548a4: 0x160000cc  bnez        $s0, . + 4 + (0xCC << 2)
label_1548a8:
    if (ctx->pc == 0x1548A8u) {
        ctx->pc = 0x1548ACu;
        goto label_1548ac;
    }
    ctx->pc = 0x1548A4u;
    {
        const bool branch_taken_0x1548a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1548a4) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x1548ACu;
label_1548ac:
    // 0x1548ac: 0x8f828040  lw          $v0, -0x7FC0($gp)
    ctx->pc = 0x1548acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934592)));
label_1548b0:
    // 0x1548b0: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_1548b4:
    if (ctx->pc == 0x1548B4u) {
        ctx->pc = 0x1548B8u;
        goto label_1548b8;
    }
    ctx->pc = 0x1548B0u;
    {
        const bool branch_taken_0x1548b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548b0) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x1548B8u;
label_1548b8:
    // 0x1548b8: 0x8f8285bc  lw          $v0, -0x7A44($gp)
    ctx->pc = 0x1548b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
label_1548bc:
    // 0x1548bc: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
label_1548c0:
    if (ctx->pc == 0x1548C0u) {
        ctx->pc = 0x1548C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548BCu;
        // 0x1548c0: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548C4u;
        goto label_1548c4;
    }
    ctx->pc = 0x1548BCu;
    {
        const bool branch_taken_0x1548bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1548C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548BCu;
        // 0x1548c0: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548bc) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x1548C4u;
label_1548c4:
    // 0x1548c4: 0xc0ce2dc  jal         func_338B70
label_1548c8:
    if (ctx->pc == 0x1548C8u) {
        ctx->pc = 0x1548C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548C4u;
        // 0x1548c8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548CCu;
        goto label_1548cc;
    }
    ctx->pc = 0x1548C4u;
    SET_GPR_U32(ctx, 31, 0x1548CCu);
    ctx->pc = 0x1548C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548C4u;
    // 0x1548c8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B70u, 0x1548C4u, 0x1548CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548CCu;
label_1548cc:
    // 0x1548cc: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_1548d0:
    if (ctx->pc == 0x1548D0u) {
        ctx->pc = 0x1548D4u;
        goto label_1548d4;
    }
    ctx->pc = 0x1548CCu;
    {
        const bool branch_taken_0x1548cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548cc) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x1548D4u;
label_1548d4:
    // 0x1548d4: 0x0  nop
    ctx->pc = 0x1548d4u;
    // NOP
label_1548d8:
    // 0x1548d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1548dc:
    // 0x1548dc: 0xc08c16c  jal         func_2305B0
label_1548e0:
    if (ctx->pc == 0x1548E0u) {
        ctx->pc = 0x1548E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548DCu;
        // 0x1548e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548E4u;
        goto label_1548e4;
    }
    ctx->pc = 0x1548DCu;
    SET_GPR_U32(ctx, 31, 0x1548E4u);
    ctx->pc = 0x1548E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548DCu;
    // 0x1548e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2305B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2305B0u, 0x1548DCu, 0x1548E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548E4u;
label_1548e4:
    // 0x1548e4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1548e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1548e8:
    // 0x1548e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1548e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1548ec:
    // 0x1548ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1548ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1548f0:
    // 0x1548f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1548f4:
    if (ctx->pc == 0x1548F4u) {
        ctx->pc = 0x1548F8u;
        goto label_1548f8;
    }
    ctx->pc = 0x1548F0u;
    {
        const bool branch_taken_0x1548f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1548f0) {
            ctx->pc = 0x1548D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1548d8;
        }
    }
    ctx->pc = 0x1548F8u;
label_1548f8:
    // 0x1548f8: 0xc08c4a8  jal         func_2312A0
label_1548fc:
    if (ctx->pc == 0x1548FCu) {
        ctx->pc = 0x1548FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548F8u;
        // 0x1548fc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154900u;
        goto label_154900;
    }
    ctx->pc = 0x1548F8u;
    SET_GPR_U32(ctx, 31, 0x154900u);
    ctx->pc = 0x1548FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548F8u;
    // 0x1548fc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2312A0u, 0x1548F8u, 0x154900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154900u;
label_154900:
    // 0x154900: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x154900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_154904:
    // 0x154904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154908:
    // 0x154908: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_15490c:
    if (ctx->pc == 0x15490Cu) {
        ctx->pc = 0x15490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154908u;
        // 0x15490c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154910u;
        goto label_154910;
    }
    ctx->pc = 0x154908u;
    {
        const bool branch_taken_0x154908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154908u;
        // 0x15490c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154908) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154910u;
label_154910:
    // 0x154910: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x154910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_154914:
    // 0x154914: 0x106200aa  beq         $v1, $v0, . + 4 + (0xAA << 2)
label_154918:
    if (ctx->pc == 0x154918u) {
        ctx->pc = 0x154918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154914u;
        // 0x154918: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15491Cu;
        goto label_15491c;
    }
    ctx->pc = 0x154914u;
    {
        const bool branch_taken_0x154914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154914u;
        // 0x154918: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154914) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x15491Cu;
label_15491c:
    // 0x15491c: 0x106200a8  beq         $v1, $v0, . + 4 + (0xA8 << 2)
label_154920:
    if (ctx->pc == 0x154920u) {
        ctx->pc = 0x154924u;
        goto label_154924;
    }
    ctx->pc = 0x15491Cu;
    {
        const bool branch_taken_0x15491c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15491c) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154924u;
label_154924:
    // 0x154924: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154928:
    // 0x154928: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
label_15492c:
    if (ctx->pc == 0x15492Cu) {
        ctx->pc = 0x154930u;
        goto label_154930;
    }
    ctx->pc = 0x154928u;
    {
        const bool branch_taken_0x154928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154928) {
            ctx->pc = 0x154A50u;
            goto label_154a50;
        }
    }
    ctx->pc = 0x154930u;
label_154930:
    // 0x154930: 0x8f8385bc  lw          $v1, -0x7A44($gp)
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
label_154934:
    // 0x154934: 0x146000a2  bnez        $v1, . + 4 + (0xA2 << 2)
label_154938:
    if (ctx->pc == 0x154938u) {
        ctx->pc = 0x15493Cu;
        goto label_15493c;
    }
    ctx->pc = 0x154934u;
    {
        const bool branch_taken_0x154934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154934) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x15493Cu;
label_15493c:
    // 0x15493c: 0x160000a0  bnez        $s0, . + 4 + (0xA0 << 2)
label_154940:
    if (ctx->pc == 0x154940u) {
        ctx->pc = 0x154944u;
        goto label_154944;
    }
    ctx->pc = 0x15493Cu;
    {
        const bool branch_taken_0x15493c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15493c) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154944u;
label_154944:
    // 0x154944: 0x8f828040  lw          $v0, -0x7FC0($gp)
    ctx->pc = 0x154944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934592)));
label_154948:
    // 0x154948: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_15494c:
    if (ctx->pc == 0x15494Cu) {
        ctx->pc = 0x154950u;
        goto label_154950;
    }
    ctx->pc = 0x154948u;
    {
        const bool branch_taken_0x154948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154948) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154950u;
label_154950:
    // 0x154950: 0x1460009b  bnez        $v1, . + 4 + (0x9B << 2)
label_154954:
    if (ctx->pc == 0x154954u) {
        ctx->pc = 0x154954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154950u;
        // 0x154954: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154958u;
        goto label_154958;
    }
    ctx->pc = 0x154950u;
    {
        const bool branch_taken_0x154950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154950u;
        // 0x154954: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154950) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154958u;
label_154958:
    // 0x154958: 0xc0ce2dc  jal         func_338B70
label_15495c:
    if (ctx->pc == 0x15495Cu) {
        ctx->pc = 0x15495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154958u;
        // 0x15495c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154960u;
        goto label_154960;
    }
    ctx->pc = 0x154958u;
    SET_GPR_U32(ctx, 31, 0x154960u);
    ctx->pc = 0x15495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154958u;
    // 0x15495c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B70u, 0x154958u, 0x154960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154960u;
label_154960:
    // 0x154960: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_154964:
    if (ctx->pc == 0x154964u) {
        ctx->pc = 0x154968u;
        goto label_154968;
    }
    ctx->pc = 0x154960u;
    {
        const bool branch_taken_0x154960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154960) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154968u;
label_154968:
    // 0x154968: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15496c:
    // 0x15496c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_154970:
    // 0x154970: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
label_154974:
    if (ctx->pc == 0x154974u) {
        ctx->pc = 0x154978u;
        goto label_154978;
    }
    ctx->pc = 0x154970u;
    {
        const bool branch_taken_0x154970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x154970) {
            ctx->pc = 0x154A40u;
            goto label_154a40;
        }
    }
    ctx->pc = 0x154978u;
label_154978:
    // 0x154978: 0x8f828040  lw          $v0, -0x7FC0($gp)
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934592)));
label_15497c:
    // 0x15497c: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_154980:
    if (ctx->pc == 0x154980u) {
        ctx->pc = 0x154984u;
        goto label_154984;
    }
    ctx->pc = 0x15497Cu;
    {
        const bool branch_taken_0x15497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15497c) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154984u;
label_154984:
    // 0x154984: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_154988:
    // 0x154988: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_15498c:
    if (ctx->pc == 0x15498Cu) {
        ctx->pc = 0x154990u;
        goto label_154990;
    }
    ctx->pc = 0x154988u;
    {
        const bool branch_taken_0x154988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154988) {
            ctx->pc = 0x1549A8u;
            goto label_1549a8;
        }
    }
    ctx->pc = 0x154990u;
label_154990:
    // 0x154990: 0xc08c550  jal         func_231540
label_154994:
    if (ctx->pc == 0x154994u) {
        ctx->pc = 0x154998u;
        goto label_154998;
    }
    ctx->pc = 0x154990u;
    SET_GPR_U32(ctx, 31, 0x154998u);
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x154990u, 0x154998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154998u;
label_154998:
    // 0x154998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15499c:
    // 0x15499c: 0x1443008e  bne         $v0, $v1, . + 4 + (0x8E << 2)
label_1549a0:
    if (ctx->pc == 0x1549A0u) {
        ctx->pc = 0x1549A4u;
        goto label_1549a4;
    }
    ctx->pc = 0x15499Cu;
    {
        const bool branch_taken_0x15499c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15499c) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x1549A4u;
label_1549a4:
    // 0x1549a4: 0x0  nop
    ctx->pc = 0x1549a4u;
    // NOP
label_1549a8:
    // 0x1549a8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1549a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1549ac:
    // 0x1549ac: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1549b0:
    // 0x1549b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1549b4:
    // 0x1549b4: 0xc054cd4  jal         func_153350
label_1549b8:
    if (ctx->pc == 0x1549B8u) {
        ctx->pc = 0x1549B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549B4u;
        // 0x1549b8: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549BCu;
        goto label_1549bc;
    }
    ctx->pc = 0x1549B4u;
    SET_GPR_U32(ctx, 31, 0x1549BCu);
    ctx->pc = 0x1549B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549B4u;
    // 0x1549b8: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x1549B4u, 0x1549BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549BCu;
label_1549bc:
    // 0x1549bc: 0xaf8285d0  sw          $v0, -0x7A30($gp)
    ctx->pc = 0x1549bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 2));
label_1549c0:
    // 0x1549c0: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_1549c4:
    // 0x1549c4: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_1549c8:
    if (ctx->pc == 0x1549C8u) {
        ctx->pc = 0x1549C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549C4u;
        // 0x1549c8: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549CCu;
        goto label_1549cc;
    }
    ctx->pc = 0x1549C4u;
    {
        const bool branch_taken_0x1549c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549C4u;
        // 0x1549c8: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549c4) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x1549CCu;
label_1549cc:
    // 0x1549cc: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1549d0:
    // 0x1549d0: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1549d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_1549d4:
    // 0x1549d4: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x1549d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_1549d8:
    // 0x1549d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1549dc:
    if (ctx->pc == 0x1549DCu) {
        ctx->pc = 0x1549E0u;
        goto label_1549e0;
    }
    ctx->pc = 0x1549D8u;
    {
        const bool branch_taken_0x1549d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1549d8) {
            ctx->pc = 0x1549F8u;
            goto label_1549f8;
        }
    }
    ctx->pc = 0x1549E0u;
label_1549e0:
    // 0x1549e0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1549e4:
    // 0x1549e4: 0xc08c6aa  jal         func_231AA8
label_1549e8:
    if (ctx->pc == 0x1549E8u) {
        ctx->pc = 0x1549E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549E4u;
        // 0x1549e8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549ECu;
        goto label_1549ec;
    }
    ctx->pc = 0x1549E4u;
    SET_GPR_U32(ctx, 31, 0x1549ECu);
    ctx->pc = 0x1549E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549E4u;
    // 0x1549e8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AA8u, 0x1549E4u, 0x1549ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549ECu;
label_1549ec:
    // 0x1549ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_1549f0:
    if (ctx->pc == 0x1549F0u) {
        ctx->pc = 0x1549F4u;
        goto label_1549f4;
    }
    ctx->pc = 0x1549ECu;
    {
        const bool branch_taken_0x1549ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1549ec) {
            ctx->pc = 0x154A08u;
            goto label_154a08;
        }
    }
    ctx->pc = 0x1549F4u;
label_1549f4:
    // 0x1549f4: 0x0  nop
    ctx->pc = 0x1549f4u;
    // NOP
label_1549f8:
    // 0x1549f8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1549fc:
    // 0x1549fc: 0xc08c6aa  jal         func_231AA8
label_154a00:
    if (ctx->pc == 0x154A00u) {
        ctx->pc = 0x154A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549FCu;
        // 0x154a00: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A04u;
        goto label_154a04;
    }
    ctx->pc = 0x1549FCu;
    SET_GPR_U32(ctx, 31, 0x154A04u);
    ctx->pc = 0x154A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549FCu;
    // 0x154a00: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AA8u, 0x1549FCu, 0x154A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A04u;
label_154a04:
    // 0x154a04: 0x0  nop
    ctx->pc = 0x154a04u;
    // NOP
label_154a08:
    // 0x154a08: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_154a0c:
    // 0x154a0c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x154a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_154a10:
    // 0x154a10: 0x94450012  lhu         $a1, 0x12($v0)
    ctx->pc = 0x154a10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_154a14:
    // 0x154a14: 0xc08c32e  jal         func_230CB8
label_154a18:
    if (ctx->pc == 0x154A18u) {
        ctx->pc = 0x154A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A14u;
        // 0x154a18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A1Cu;
        goto label_154a1c;
    }
    ctx->pc = 0x154A14u;
    SET_GPR_U32(ctx, 31, 0x154A1Cu);
    ctx->pc = 0x154A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A14u;
    // 0x154a18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB8u, 0x154A14u, 0x154A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A1Cu;
label_154a1c:
    // 0x154a1c: 0x8f8485d0  lw          $a0, -0x7A30($gp)
    ctx->pc = 0x154a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_154a20:
    // 0x154a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154a24:
    // 0x154a24: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_154a28:
    // 0x154a28: 0x94840012  lhu         $a0, 0x12($a0)
    ctx->pc = 0x154a28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_154a2c:
    // 0x154a2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154a30:
    // 0x154a30: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x154a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_154a34:
    // 0x154a34: 0x10000068  b           . + 4 + (0x68 << 2)
label_154a38:
    if (ctx->pc == 0x154A38u) {
        ctx->pc = 0x154A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A34u;
        // 0x154a38: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A3Cu;
        goto label_154a3c;
    }
    ctx->pc = 0x154A34u;
    {
        const bool branch_taken_0x154a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A34u;
        // 0x154a38: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a34) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154A3Cu;
label_154a3c:
    // 0x154a3c: 0x0  nop
    ctx->pc = 0x154a3cu;
    // NOP
label_154a40:
    // 0x154a40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x154a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_154a44:
    // 0x154a44: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x154a44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_154a48:
    // 0x154a48: 0x10000063  b           . + 4 + (0x63 << 2)
label_154a4c:
    if (ctx->pc == 0x154A4Cu) {
        ctx->pc = 0x154A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A48u;
        // 0x154a4c: 0xaf8085d0  sw          $zero, -0x7A30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A50u;
        goto label_154a50;
    }
    ctx->pc = 0x154A48u;
    {
        const bool branch_taken_0x154a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A48u;
        // 0x154a4c: 0xaf8085d0  sw          $zero, -0x7A30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a48) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154A50u;
label_154a50:
    // 0x154a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154a54:
    // 0x154a54: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
label_154a58:
    if (ctx->pc == 0x154A58u) {
        ctx->pc = 0x154A5Cu;
        goto label_154a5c;
    }
    ctx->pc = 0x154A54u;
    {
        const bool branch_taken_0x154a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154a54) {
            ctx->pc = 0x154B78u;
            goto label_154b78;
        }
    }
    ctx->pc = 0x154A5Cu;
label_154a5c:
    // 0x154a5c: 0x8f8285bc  lw          $v0, -0x7A44($gp)
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
label_154a60:
    // 0x154a60: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_154a64:
    if (ctx->pc == 0x154A64u) {
        ctx->pc = 0x154A68u;
        goto label_154a68;
    }
    ctx->pc = 0x154A60u;
    {
        const bool branch_taken_0x154a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154a60) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154A68u;
label_154a68:
    // 0x154a68: 0x16000055  bnez        $s0, . + 4 + (0x55 << 2)
label_154a6c:
    if (ctx->pc == 0x154A6Cu) {
        ctx->pc = 0x154A70u;
        goto label_154a70;
    }
    ctx->pc = 0x154A68u;
    {
        const bool branch_taken_0x154a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x154a68) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154A70u;
label_154a70:
    // 0x154a70: 0x8f828040  lw          $v0, -0x7FC0($gp)
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934592)));
label_154a74:
    // 0x154a74: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_154a78:
    if (ctx->pc == 0x154A78u) {
        ctx->pc = 0x154A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A74u;
        // 0x154a78: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A7Cu;
        goto label_154a7c;
    }
    ctx->pc = 0x154A74u;
    {
        const bool branch_taken_0x154a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A74u;
        // 0x154a78: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a74) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154A7Cu;
label_154a7c:
    // 0x154a7c: 0xc0ce2dc  jal         func_338B70
label_154a80:
    if (ctx->pc == 0x154A80u) {
        ctx->pc = 0x154A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A7Cu;
        // 0x154a80: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A84u;
        goto label_154a84;
    }
    ctx->pc = 0x154A7Cu;
    SET_GPR_U32(ctx, 31, 0x154A84u);
    ctx->pc = 0x154A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A7Cu;
    // 0x154a80: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B70u, 0x154A7Cu, 0x154A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A84u;
label_154a84:
    // 0x154a84: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_154a88:
    if (ctx->pc == 0x154A88u) {
        ctx->pc = 0x154A8Cu;
        goto label_154a8c;
    }
    ctx->pc = 0x154A84u;
    {
        const bool branch_taken_0x154a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a84) {
            ctx->pc = 0x154BC0u;
            goto label_154bc0;
        }
    }
    ctx->pc = 0x154A8Cu;
label_154a8c:
    // 0x154a8c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_154a90:
    // 0x154a90: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_154a94:
    if (ctx->pc == 0x154A94u) {
        ctx->pc = 0x154A98u;
        goto label_154a98;
    }
    ctx->pc = 0x154A90u;
    {
        const bool branch_taken_0x154a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a90) {
            ctx->pc = 0x154AB0u;
            goto label_154ab0;
        }
    }
    ctx->pc = 0x154A98u;
label_154a98:
    // 0x154a98: 0xc08c550  jal         func_231540
label_154a9c:
    if (ctx->pc == 0x154A9Cu) {
        ctx->pc = 0x154AA0u;
        goto label_154aa0;
    }
    ctx->pc = 0x154A98u;
    SET_GPR_U32(ctx, 31, 0x154AA0u);
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x154A98u, 0x154AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AA0u;
label_154aa0:
    // 0x154aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154aa4:
    // 0x154aa4: 0x1443004c  bne         $v0, $v1, . + 4 + (0x4C << 2)
label_154aa8:
    if (ctx->pc == 0x154AA8u) {
        ctx->pc = 0x154AACu;
        goto label_154aac;
    }
    ctx->pc = 0x154AA4u;
    {
        const bool branch_taken_0x154aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x154aa4) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154AACu;
label_154aac:
    // 0x154aac: 0x0  nop
    ctx->pc = 0x154aacu;
    // NOP
label_154ab0:
    // 0x154ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154ab4:
    // 0x154ab4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x154ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_154ab8:
    // 0x154ab8: 0xc08c4a8  jal         func_2312A0
label_154abc:
    if (ctx->pc == 0x154ABCu) {
        ctx->pc = 0x154ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AB8u;
        // 0x154abc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AC0u;
        goto label_154ac0;
    }
    ctx->pc = 0x154AB8u;
    SET_GPR_U32(ctx, 31, 0x154AC0u);
    ctx->pc = 0x154ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AB8u;
    // 0x154abc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2312A0u, 0x154AB8u, 0x154AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AC0u;
label_154ac0:
    // 0x154ac0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x154ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_154ac4:
    // 0x154ac4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x154ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_154ac8:
    // 0x154ac8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x154ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_154acc:
    // 0x154acc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_154ad0:
    // 0x154ad0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_154ad4:
    // 0x154ad4: 0xc054cd4  jal         func_153350
label_154ad8:
    if (ctx->pc == 0x154AD8u) {
        ctx->pc = 0x154AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AD4u;
        // 0x154ad8: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154ADCu;
        goto label_154adc;
    }
    ctx->pc = 0x154AD4u;
    SET_GPR_U32(ctx, 31, 0x154ADCu);
    ctx->pc = 0x154AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AD4u;
    // 0x154ad8: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153350u, 0x154AD4u, 0x154ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154ADCu;
label_154adc:
    // 0x154adc: 0xaf8285d0  sw          $v0, -0x7A30($gp)
    ctx->pc = 0x154adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 2));
label_154ae0:
    // 0x154ae0: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x154ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_154ae4:
    // 0x154ae4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_154ae8:
    if (ctx->pc == 0x154AE8u) {
        ctx->pc = 0x154AECu;
        goto label_154aec;
    }
    ctx->pc = 0x154AE4u;
    {
        const bool branch_taken_0x154ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154ae4) {
            ctx->pc = 0x154AF8u;
            goto label_154af8;
        }
    }
    ctx->pc = 0x154AECu;
label_154aec:
    // 0x154aec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x154aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154af0:
    // 0x154af0: 0x10000039  b           . + 4 + (0x39 << 2)
label_154af4:
    if (ctx->pc == 0x154AF4u) {
        ctx->pc = 0x154AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AF0u;
        // 0x154af4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AF8u;
        goto label_154af8;
    }
    ctx->pc = 0x154AF0u;
    {
        const bool branch_taken_0x154af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AF0u;
        // 0x154af4: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154af0) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154AF8u;
label_154af8:
    // 0x154af8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_154afc:
    // 0x154afc: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x154afcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_154b00:
    // 0x154b00: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_154b04:
    // 0x154b04: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_154b08:
    // 0x154b08: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_154b0c:
    if (ctx->pc == 0x154B0Cu) {
        ctx->pc = 0x154B10u;
        goto label_154b10;
    }
    ctx->pc = 0x154B08u;
    {
        const bool branch_taken_0x154b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154b08) {
            ctx->pc = 0x154B28u;
            goto label_154b28;
        }
    }
    ctx->pc = 0x154B10u;
label_154b10:
    // 0x154b10: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_154b14:
    // 0x154b14: 0xc08c6aa  jal         func_231AA8
label_154b18:
    if (ctx->pc == 0x154B18u) {
        ctx->pc = 0x154B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B14u;
        // 0x154b18: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B1Cu;
        goto label_154b1c;
    }
    ctx->pc = 0x154B14u;
    SET_GPR_U32(ctx, 31, 0x154B1Cu);
    ctx->pc = 0x154B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B14u;
    // 0x154b18: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AA8u, 0x154B14u, 0x154B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B1Cu;
label_154b1c:
    // 0x154b1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_154b20:
    if (ctx->pc == 0x154B20u) {
        ctx->pc = 0x154B24u;
        goto label_154b24;
    }
    ctx->pc = 0x154B1Cu;
    {
        const bool branch_taken_0x154b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b1c) {
            ctx->pc = 0x154B38u;
            goto label_154b38;
        }
    }
    ctx->pc = 0x154B24u;
label_154b24:
    // 0x154b24: 0x0  nop
    ctx->pc = 0x154b24u;
    // NOP
label_154b28:
    // 0x154b28: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_154b2c:
    // 0x154b2c: 0xc08c6aa  jal         func_231AA8
label_154b30:
    if (ctx->pc == 0x154B30u) {
        ctx->pc = 0x154B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B2Cu;
        // 0x154b30: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B34u;
        goto label_154b34;
    }
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x154B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B2Cu;
    // 0x154b30: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AA8u, 0x154B2Cu, 0x154B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0x0  nop
    ctx->pc = 0x154b34u;
    // NOP
label_154b38:
    // 0x154b38: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x154b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_154b3c:
    // 0x154b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154b40:
    // 0x154b40: 0xc08c432  jal         func_2310C8
label_154b44:
    if (ctx->pc == 0x154B44u) {
        ctx->pc = 0x154B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B40u;
        // 0x154b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B48u;
        goto label_154b48;
    }
    ctx->pc = 0x154B40u;
    SET_GPR_U32(ctx, 31, 0x154B48u);
    ctx->pc = 0x154B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B40u;
    // 0x154b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310C8u, 0x154B40u, 0x154B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B48u;
label_154b48:
    // 0x154b48: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_154b4c:
    // 0x154b4c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x154b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_154b50:
    // 0x154b50: 0x94450012  lhu         $a1, 0x12($v0)
    ctx->pc = 0x154b50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_154b54:
    // 0x154b54: 0xc08c32e  jal         func_230CB8
label_154b58:
    if (ctx->pc == 0x154B58u) {
        ctx->pc = 0x154B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B54u;
        // 0x154b58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B5Cu;
        goto label_154b5c;
    }
    ctx->pc = 0x154B54u;
    SET_GPR_U32(ctx, 31, 0x154B5Cu);
    ctx->pc = 0x154B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B54u;
    // 0x154b58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB8u, 0x154B54u, 0x154B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B5Cu;
label_154b5c:
    // 0x154b5c: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x154b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_154b60:
    // 0x154b60: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_154b64:
    // 0x154b64: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x154b64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_154b68:
    // 0x154b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154b6c:
    // 0x154b6c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_154b70:
    if (ctx->pc == 0x154B70u) {
        ctx->pc = 0x154B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B6Cu;
        // 0x154b70: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B74u;
        goto label_154b74;
    }
    ctx->pc = 0x154B6Cu;
    {
        const bool branch_taken_0x154b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B6Cu;
        // 0x154b70: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b6c) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154B74u;
label_154b74:
    // 0x154b74: 0x0  nop
    ctx->pc = 0x154b74u;
    // NOP
label_154b78:
    // 0x154b78: 0xc08c550  jal         func_231540
label_154b7c:
    if (ctx->pc == 0x154B7Cu) {
        ctx->pc = 0x154B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B78u;
        // 0x154b7c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B80u;
        goto label_154b80;
    }
    ctx->pc = 0x154B78u;
    SET_GPR_U32(ctx, 31, 0x154B80u);
    ctx->pc = 0x154B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B78u;
    // 0x154b7c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x154B78u, 0x154B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B80u;
label_154b80:
    // 0x154b80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154b84:
    // 0x154b84: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_154b88:
    if (ctx->pc == 0x154B88u) {
        ctx->pc = 0x154B8Cu;
        goto label_154b8c;
    }
    ctx->pc = 0x154B84u;
    {
        const bool branch_taken_0x154b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x154b84) {
            ctx->pc = 0x154BA8u;
            goto label_154ba8;
        }
    }
    ctx->pc = 0x154B8Cu;
label_154b8c:
    // 0x154b8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154b90:
    // 0x154b90: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_154b94:
    if (ctx->pc == 0x154B94u) {
        ctx->pc = 0x154B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B90u;
        // 0x154b94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B98u;
        goto label_154b98;
    }
    ctx->pc = 0x154B90u;
    {
        const bool branch_taken_0x154b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x154B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B90u;
        // 0x154b94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b90) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154B98u;
label_154b98:
    // 0x154b98: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_154b9c:
    if (ctx->pc == 0x154B9Cu) {
        ctx->pc = 0x154BA0u;
        goto label_154ba0;
    }
    ctx->pc = 0x154B98u;
    {
        const bool branch_taken_0x154b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x154b98) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154BA0u;
label_154ba0:
    // 0x154ba0: 0x1000000d  b           . + 4 + (0xD << 2)
label_154ba4:
    if (ctx->pc == 0x154BA4u) {
        ctx->pc = 0x154BA8u;
        goto label_154ba8;
    }
    ctx->pc = 0x154BA0u;
    {
        const bool branch_taken_0x154ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154ba0) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154BA8u;
label_154ba8:
    // 0x154ba8: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x154ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_154bac:
    // 0x154bac: 0xc08c39e  jal         func_230E78
label_154bb0:
    if (ctx->pc == 0x154BB0u) {
        ctx->pc = 0x154BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BACu;
        // 0x154bb0: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BB4u;
        goto label_154bb4;
    }
    ctx->pc = 0x154BACu;
    SET_GPR_U32(ctx, 31, 0x154BB4u);
    ctx->pc = 0x154BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BACu;
    // 0x154bb0: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230E78u, 0x154BACu, 0x154BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BB4u;
label_154bb4:
    // 0x154bb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_154bb8:
    if (ctx->pc == 0x154BB8u) {
        ctx->pc = 0x154BBCu;
        goto label_154bbc;
    }
    ctx->pc = 0x154BB4u;
    {
        const bool branch_taken_0x154bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bb4) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154BBCu;
label_154bbc:
    // 0x154bbc: 0x0  nop
    ctx->pc = 0x154bbcu;
    // NOP
label_154bc0:
    // 0x154bc0: 0x8f8285c0  lw          $v0, -0x7A40($gp)
    ctx->pc = 0x154bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
label_154bc4:
    // 0x154bc4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x154bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_154bc8:
    // 0x154bc8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x154bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_154bcc:
    // 0x154bcc: 0x1440ff32  bnez        $v0, . + 4 + (-0xCE << 2)
label_154bd0:
    if (ctx->pc == 0x154BD0u) {
        ctx->pc = 0x154BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BCCu;
        // 0x154bd0: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BD4u;
        goto label_154bd4;
    }
    ctx->pc = 0x154BCCu;
    {
        const bool branch_taken_0x154bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BCCu;
        // 0x154bd0: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bcc) {
            ctx->pc = 0x154898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154898;
        }
    }
    ctx->pc = 0x154BD4u;
label_154bd4:
    // 0x154bd4: 0x0  nop
    ctx->pc = 0x154bd4u;
    // NOP
label_154bd8:
    // 0x154bd8: 0x8f828040  lw          $v0, -0x7FC0($gp)
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934592)));
label_154bdc:
    // 0x154bdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_154be0:
    if (ctx->pc == 0x154BE0u) {
        ctx->pc = 0x154BE4u;
        goto label_154be4;
    }
    ctx->pc = 0x154BDCu;
    {
        const bool branch_taken_0x154bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bdc) {
            ctx->pc = 0x154C00u;
            goto label_154c00;
        }
    }
    ctx->pc = 0x154BE4u;
label_154be4:
    // 0x154be4: 0x8f8285bc  lw          $v0, -0x7A44($gp)
    ctx->pc = 0x154be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
label_154be8:
    // 0x154be8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_154bec:
    if (ctx->pc == 0x154BECu) {
        ctx->pc = 0x154BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BE8u;
        // 0x154bec: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BF0u;
        goto label_154bf0;
    }
    ctx->pc = 0x154BE8u;
    {
        const bool branch_taken_0x154be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BE8u;
        // 0x154bec: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154be8) {
            ctx->pc = 0x154C00u;
            goto label_154c00;
        }
    }
    ctx->pc = 0x154BF0u;
label_154bf0:
    // 0x154bf0: 0xc0ce2dc  jal         func_338B70
label_154bf4:
    if (ctx->pc == 0x154BF4u) {
        ctx->pc = 0x154BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BF0u;
        // 0x154bf4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BF8u;
        goto label_154bf8;
    }
    ctx->pc = 0x154BF0u;
    SET_GPR_U32(ctx, 31, 0x154BF8u);
    ctx->pc = 0x154BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BF0u;
    // 0x154bf4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B70u, 0x154BF0u, 0x154BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BF8u;
label_154bf8:
    // 0x154bf8: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_154bfc:
    if (ctx->pc == 0x154BFCu) {
        ctx->pc = 0x154C00u;
        goto label_154c00;
    }
    ctx->pc = 0x154BF8u;
    {
        const bool branch_taken_0x154bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154bf8) {
            ctx->pc = 0x154DA0u;
            goto label_154da0;
        }
    }
    ctx->pc = 0x154C00u;
label_154c00:
    // 0x154c00: 0x8f8285c0  lw          $v0, -0x7A40($gp)
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
label_154c04:
    // 0x154c04: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x154c04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_154c08:
    // 0x154c08: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
label_154c0c:
    if (ctx->pc == 0x154C0Cu) {
        ctx->pc = 0x154C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C08u;
        // 0x154c0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C10u;
        goto label_154c10;
    }
    ctx->pc = 0x154C08u;
    {
        const bool branch_taken_0x154c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C08u;
        // 0x154c0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c08) {
            ctx->pc = 0x154DA0u;
            goto label_154da0;
        }
    }
    ctx->pc = 0x154C10u;
label_154c10:
    // 0x154c10: 0x3c130080  lui         $s3, 0x80
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)128 << 16));
label_154c14:
    // 0x154c14: 0x2673eeb0  addiu       $s3, $s3, -0x1150
    ctx->pc = 0x154c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962864));
label_154c18:
    // 0x154c18: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x154c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_154c1c:
    // 0x154c1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154c20:
    // 0x154c20: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
label_154c24:
    if (ctx->pc == 0x154C24u) {
        ctx->pc = 0x154C28u;
        goto label_154c28;
    }
    ctx->pc = 0x154C20u;
    {
        const bool branch_taken_0x154c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154c20) {
            ctx->pc = 0x154D88u;
            goto label_154d88;
        }
    }
    ctx->pc = 0x154C28u;
label_154c28:
    // 0x154c28: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_154c2c:
    // 0x154c2c: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_154c30:
    // 0x154c30: 0xc08c39e  jal         func_230E78
label_154c34:
    if (ctx->pc == 0x154C34u) {
        ctx->pc = 0x154C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C30u;
        // 0x154c34: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C38u;
        goto label_154c38;
    }
    ctx->pc = 0x154C30u;
    SET_GPR_U32(ctx, 31, 0x154C38u);
    ctx->pc = 0x154C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C30u;
    // 0x154c34: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230E78u, 0x154C30u, 0x154C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C38u;
label_154c38:
    // 0x154c38: 0x8f8285d0  lw          $v0, -0x7A30($gp)
    ctx->pc = 0x154c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_154c3c:
    // 0x154c3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154c40:
    // 0x154c40: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x154c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_154c44:
    // 0x154c44: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x154c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
label_154c48:
    // 0x154c48: 0x8c22ac74  lw          $v0, -0x538C($at)
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945908)));
label_154c4c:
    // 0x154c4c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_154c50:
    if (ctx->pc == 0x154C50u) {
        ctx->pc = 0x154C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C4Cu;
        // 0x154c50: 0xaf8085d0  sw          $zero, -0x7A30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C54u;
        goto label_154c54;
    }
    ctx->pc = 0x154C4Cu;
    {
        const bool branch_taken_0x154c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C4Cu;
        // 0x154c50: 0xaf8085d0  sw          $zero, -0x7A30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c4c) {
            ctx->pc = 0x154D18u;
            goto label_154d18;
        }
    }
    ctx->pc = 0x154C54u;
label_154c54:
    // 0x154c54: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x154c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_154c58:
    // 0x154c58: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x154c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_154c5c:
    // 0x154c5c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x154c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_154c60:
    // 0x154c60: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x154c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_154c64:
    // 0x154c64: 0x0  nop
    ctx->pc = 0x154c64u;
    // NOP
label_154c68:
    // 0x154c68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x154c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_154c6c:
    // 0x154c6c: 0x14670194  bne         $v1, $a3, . + 4 + (0x194 << 2)
label_154c70:
    if (ctx->pc == 0x154C70u) {
        ctx->pc = 0x154C74u;
        goto label_154c74;
    }
    ctx->pc = 0x154C6Cu;
    {
        const bool branch_taken_0x154c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x154c6c) {
            ctx->pc = 0x1552C0u;
            goto label_1552c0;
        }
    }
    ctx->pc = 0x154C74u;
label_154c74:
    // 0x154c74: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x154c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_154c78:
    // 0x154c78: 0x14660191  bne         $v1, $a2, . + 4 + (0x191 << 2)
label_154c7c:
    if (ctx->pc == 0x154C7Cu) {
        ctx->pc = 0x154C80u;
        goto label_154c80;
    }
    ctx->pc = 0x154C78u;
    {
        const bool branch_taken_0x154c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x154c78) {
            ctx->pc = 0x1552C0u;
            goto label_1552c0;
        }
    }
    ctx->pc = 0x154C80u;
label_154c80:
    // 0x154c80: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x154c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_154c84:
    // 0x154c84: 0x1465018e  bne         $v1, $a1, . + 4 + (0x18E << 2)
label_154c88:
    if (ctx->pc == 0x154C88u) {
        ctx->pc = 0x154C8Cu;
        goto label_154c8c;
    }
    ctx->pc = 0x154C84u;
    {
        const bool branch_taken_0x154c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x154c84) {
            ctx->pc = 0x1552C0u;
            goto label_1552c0;
        }
    }
    ctx->pc = 0x154C8Cu;
label_154c8c:
    // 0x154c8c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x154c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_154c90:
    // 0x154c90: 0x10640019  beq         $v1, $a0, . + 4 + (0x19 << 2)
label_154c94:
    if (ctx->pc == 0x154C94u) {
        ctx->pc = 0x154C98u;
        goto label_154c98;
    }
    ctx->pc = 0x154C90u;
    {
        const bool branch_taken_0x154c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x154c90) {
            ctx->pc = 0x154CF8u;
            goto label_154cf8;
        }
    }
    ctx->pc = 0x154C98u;
label_154c98:
    // 0x154c98: 0x10000189  b           . + 4 + (0x189 << 2)
label_154c9c:
    if (ctx->pc == 0x154C9Cu) {
        ctx->pc = 0x154CA0u;
        goto label_154ca0;
    }
    ctx->pc = 0x154C98u;
    {
        const bool branch_taken_0x154c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154c98) {
            ctx->pc = 0x1552C0u;
            goto label_1552c0;
        }
    }
    ctx->pc = 0x154CA0u;
label_154ca0:
    // 0x154ca0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x154ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_154ca4:
    // 0x154ca4: 0x1467000a  bne         $v1, $a3, . + 4 + (0xA << 2)
label_154ca8:
    if (ctx->pc == 0x154CA8u) {
        ctx->pc = 0x154CACu;
        goto label_154cac;
    }
    ctx->pc = 0x154CA4u;
    {
        const bool branch_taken_0x154ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x154ca4) {
            ctx->pc = 0x154CD0u;
            goto label_154cd0;
        }
    }
    ctx->pc = 0x154CACu;
label_154cac:
    // 0x154cac: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x154cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_154cb0:
    // 0x154cb0: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
label_154cb4:
    if (ctx->pc == 0x154CB4u) {
        ctx->pc = 0x154CB8u;
        goto label_154cb8;
    }
    ctx->pc = 0x154CB0u;
    {
        const bool branch_taken_0x154cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x154cb0) {
            ctx->pc = 0x154CD0u;
            goto label_154cd0;
        }
    }
    ctx->pc = 0x154CB8u;
label_154cb8:
    // 0x154cb8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x154cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_154cbc:
    // 0x154cbc: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_154cc0:
    if (ctx->pc == 0x154CC0u) {
        ctx->pc = 0x154CC4u;
        goto label_154cc4;
    }
    ctx->pc = 0x154CBCu;
    {
        const bool branch_taken_0x154cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x154cbc) {
            ctx->pc = 0x154CD0u;
            goto label_154cd0;
        }
    }
    ctx->pc = 0x154CC4u;
label_154cc4:
    // 0x154cc4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x154cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_154cc8:
    // 0x154cc8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_154ccc:
    if (ctx->pc == 0x154CCCu) {
        ctx->pc = 0x154CD0u;
        goto label_154cd0;
    }
    ctx->pc = 0x154CC8u;
    {
        const bool branch_taken_0x154cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x154cc8) {
            ctx->pc = 0x154CE8u;
            goto label_154ce8;
        }
    }
    ctx->pc = 0x154CD0u;
label_154cd0:
    // 0x154cd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_154cd4:
    // 0x154cd4: 0x0  nop
    ctx->pc = 0x154cd4u;
    // NOP
label_154cd8:
    // 0x154cd8: 0x49182b  sltu        $v1, $v0, $t1
    ctx->pc = 0x154cd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_154cdc:
    // 0x154cdc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_154ce0:
    if (ctx->pc == 0x154CE0u) {
        ctx->pc = 0x154CE4u;
        goto label_154ce4;
    }
    ctx->pc = 0x154CDCu;
    {
        const bool branch_taken_0x154cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154cdc) {
            ctx->pc = 0x154CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154ca0;
        }
    }
    ctx->pc = 0x154CE4u;
label_154ce4:
    // 0x154ce4: 0x0  nop
    ctx->pc = 0x154ce4u;
    // NOP
label_154ce8:
    // 0x154ce8: 0x49082b  sltu        $at, $v0, $t1
    ctx->pc = 0x154ce8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_154cec:
    // 0x154cec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_154cf0:
    if (ctx->pc == 0x154CF0u) {
        ctx->pc = 0x154CF4u;
        goto label_154cf4;
    }
    ctx->pc = 0x154CECu;
    {
        const bool branch_taken_0x154cec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154cec) {
            ctx->pc = 0x154D18u;
            goto label_154d18;
        }
    }
    ctx->pc = 0x154CF4u;
label_154cf4:
    // 0x154cf4: 0x0  nop
    ctx->pc = 0x154cf4u;
    // NOP
label_154cf8:
    // 0x154cf8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x154cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_154cfc:
    // 0x154cfc: 0x14740002  bne         $v1, $s4, . + 4 + (0x2 << 2)
label_154d00:
    if (ctx->pc == 0x154D00u) {
        ctx->pc = 0x154D04u;
        goto label_154d04;
    }
    ctx->pc = 0x154CFCu;
    {
        const bool branch_taken_0x154cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x154cfc) {
            ctx->pc = 0x154D08u;
            goto label_154d08;
        }
    }
    ctx->pc = 0x154D04u;
label_154d04:
    // 0x154d04: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x154d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
label_154d08:
    // 0x154d08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x154d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154d0c:
    // 0x154d0c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_154d10:
    if (ctx->pc == 0x154D10u) {
        ctx->pc = 0x154D14u;
        goto label_154d14;
    }
    ctx->pc = 0x154D0Cu;
    {
        const bool branch_taken_0x154d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d0c) {
            ctx->pc = 0x154C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154c68;
        }
    }
    ctx->pc = 0x154D14u;
label_154d14:
    // 0x154d14: 0x0  nop
    ctx->pc = 0x154d14u;
    // NOP
label_154d18:
    // 0x154d18: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_154d1c:
    // 0x154d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154d20:
    // 0x154d20: 0x24a5e610  addiu       $a1, $a1, -0x19F0
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960656));
label_154d24:
    // 0x154d24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154d28:
    // 0x154d28: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x154d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_154d2c:
    // 0x154d2c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_154d30:
    if (ctx->pc == 0x154D30u) {
        ctx->pc = 0x154D34u;
        goto label_154d34;
    }
    ctx->pc = 0x154D2Cu;
    {
        const bool branch_taken_0x154d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d2c) {
            ctx->pc = 0x154D68u;
            goto label_154d68;
        }
    }
    ctx->pc = 0x154D34u;
label_154d34:
    // 0x154d34: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x154d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_154d38:
    // 0x154d38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_154d3c:
    if (ctx->pc == 0x154D3Cu) {
        ctx->pc = 0x154D40u;
        goto label_154d40;
    }
    ctx->pc = 0x154D38u;
    {
        const bool branch_taken_0x154d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d38) {
            ctx->pc = 0x154D68u;
            goto label_154d68;
        }
    }
    ctx->pc = 0x154D40u;
label_154d40:
    // 0x154d40: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_154d44:
    if (ctx->pc == 0x154D44u) {
        ctx->pc = 0x154D48u;
        goto label_154d48;
    }
    ctx->pc = 0x154D40u;
    {
        const bool branch_taken_0x154d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d40) {
            ctx->pc = 0x154D68u;
            goto label_154d68;
        }
    }
    ctx->pc = 0x154D48u;
label_154d48:
    // 0x154d48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_154d4c:
    // 0x154d4c: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
label_154d50:
    if (ctx->pc == 0x154D50u) {
        ctx->pc = 0x154D54u;
        goto label_154d54;
    }
    ctx->pc = 0x154D4Cu;
    {
        const bool branch_taken_0x154d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x154d4c) {
            ctx->pc = 0x154D58u;
            goto label_154d58;
        }
    }
    ctx->pc = 0x154D54u;
label_154d54:
    // 0x154d54: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x154d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_154d58:
    // 0x154d58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x154d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_154d5c:
    // 0x154d5c: 0x0  nop
    ctx->pc = 0x154d5cu;
    // NOP
label_154d60:
    // 0x154d60: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_154d64:
    if (ctx->pc == 0x154D64u) {
        ctx->pc = 0x154D68u;
        goto label_154d68;
    }
    ctx->pc = 0x154D60u;
    {
        const bool branch_taken_0x154d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d60) {
            ctx->pc = 0x154D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154d48;
        }
    }
    ctx->pc = 0x154D68u;
label_154d68:
    // 0x154d68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x154d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_154d6c:
    // 0x154d6c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x154d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_154d70:
    // 0x154d70: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_154d74:
    if (ctx->pc == 0x154D74u) {
        ctx->pc = 0x154D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D70u;
        // 0x154d74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D78u;
        goto label_154d78;
    }
    ctx->pc = 0x154D70u;
    {
        const bool branch_taken_0x154d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D70u;
        // 0x154d74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d70) {
            ctx->pc = 0x154D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154d28;
        }
    }
    ctx->pc = 0x154D78u;
label_154d78:
    // 0x154d78: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x154d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_154d7c:
    // 0x154d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154d80:
    // 0x154d80: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x154d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_154d84:
    // 0x154d84: 0x0  nop
    ctx->pc = 0x154d84u;
    // NOP
label_154d88:
    // 0x154d88: 0x8f8285c0  lw          $v0, -0x7A40($gp)
    ctx->pc = 0x154d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
label_154d8c:
    // 0x154d8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x154d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_154d90:
    // 0x154d90: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x154d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_154d94:
    // 0x154d94: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_154d98:
    if (ctx->pc == 0x154D98u) {
        ctx->pc = 0x154D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D94u;
        // 0x154d98: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D9Cu;
        goto label_154d9c;
    }
    ctx->pc = 0x154D94u;
    {
        const bool branch_taken_0x154d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D94u;
        // 0x154d98: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d94) {
            ctx->pc = 0x154C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154c18;
        }
    }
    ctx->pc = 0x154D9Cu;
label_154d9c:
    // 0x154d9c: 0x0  nop
    ctx->pc = 0x154d9cu;
    // NOP
label_154da0:
    // 0x154da0: 0xc0554f4  jal         func_1553D0
label_154da4:
    if (ctx->pc == 0x154DA4u) {
        ctx->pc = 0x154DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DA0u;
        // 0x154da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DA8u;
        goto label_154da8;
    }
    ctx->pc = 0x154DA0u;
    SET_GPR_U32(ctx, 31, 0x154DA8u);
    ctx->pc = 0x154DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DA0u;
    // 0x154da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x154DA0u, 0x154DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DA8u;
label_154da8:
    // 0x154da8: 0x8f8385bc  lw          $v1, -0x7A44($gp)
    ctx->pc = 0x154da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
label_154dac:
    // 0x154dac: 0x10600140  beqz        $v1, . + 4 + (0x140 << 2)
label_154db0:
    if (ctx->pc == 0x154DB0u) {
        ctx->pc = 0x154DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DACu;
        // 0x154db0: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DB4u;
        goto label_154db4;
    }
    ctx->pc = 0x154DACu;
    {
        const bool branch_taken_0x154dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DACu;
        // 0x154db0: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dac) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x154DB4u;
label_154db4:
    // 0x154db4: 0xc0ce2dc  jal         func_338B70
label_154db8:
    if (ctx->pc == 0x154DB8u) {
        ctx->pc = 0x154DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DB4u;
        // 0x154db8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DBCu;
        goto label_154dbc;
    }
    ctx->pc = 0x154DB4u;
    SET_GPR_U32(ctx, 31, 0x154DBCu);
    ctx->pc = 0x154DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DB4u;
    // 0x154db8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338B70u, 0x154DB4u, 0x154DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DBCu;
label_154dbc:
    // 0x154dbc: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
label_154dc0:
    if (ctx->pc == 0x154DC0u) {
        ctx->pc = 0x154DC4u;
        goto label_154dc4;
    }
    ctx->pc = 0x154DBCu;
    {
        const bool branch_taken_0x154dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154dbc) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x154DC4u;
label_154dc4:
    { static uint64_t last[4]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[4]={(uint64_t)(GPR_U32(ctx,16)),(uint64_t)(GPR_U32(ctx,2)),(uint64_t)(READ32(0x7fee90u)),(uint64_t)(READ32(GPR_U32(ctx,28)-0x7a44u)),}; bool chg=first; for(int i=0;i<4;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<30) { ++lines; first=false; for(int i=0;i<4;++i) last[i]=cur[i]; fprintf(stderr,"[px ldr_a] hit=%u " "s0=%llu v0=%llu cur=0x%llx cnt=%llu" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3]); } }
    // 0x154dc4: 0x1600013a  bnez        $s0, . + 4 + (0x13A << 2)
label_154dc8:
    if (ctx->pc == 0x154DC8u) {
        ctx->pc = 0x154DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DC4u;
        // 0x154dc8: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DCCu;
        goto label_154dcc;
    }
    ctx->pc = 0x154DC4u;
    {
        const bool branch_taken_0x154dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x154DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DC4u;
        // 0x154dc8: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dc4) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x154DCCu;
label_154dcc:
    // 0x154dcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154dd0:
    // 0x154dd0: 0x8c23ee90  lw          $v1, -0x1170($at)
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962832)));
label_154dd4:
    // 0x154dd4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_154dd8:
    if (ctx->pc == 0x154DD8u) {
        ctx->pc = 0x154DDCu;
        goto label_154ddc;
    }
    ctx->pc = 0x154DD4u;
    {
        const bool branch_taken_0x154dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154dd4) {
            ctx->pc = 0x154E08u;
            goto label_154e08;
        }
    }
    ctx->pc = 0x154DDCu;
label_154ddc:
    // 0x154ddc: 0xc054f0c  jal         func_153C30
label_154de0:
    if (ctx->pc == 0x154DE0u) {
        ctx->pc = 0x154DE4u;
        goto label_154de4;
    }
    ctx->pc = 0x154DDCu;
    SET_GPR_U32(ctx, 31, 0x154DE4u);
    ctx->pc = 0x153C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153C30u, 0x154DDCu, 0x154DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DE4u;
label_154de4:
    // 0x154de4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154de8:
    // 0x154de8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_154dec:
    if (ctx->pc == 0x154DECu) {
        ctx->pc = 0x154DF0u;
        goto label_154df0;
    }
    ctx->pc = 0x154DE8u;
    {
        const bool branch_taken_0x154de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x154de8) {
            ctx->pc = 0x154E00u;
            goto label_154e00;
        }
    }
    ctx->pc = 0x154DF0u;
label_154df0:
    // 0x154df0: 0xc055014  jal         func_154050
label_154df4:
    if (ctx->pc == 0x154DF4u) {
        ctx->pc = 0x154DF8u;
        goto label_154df8;
    }
    ctx->pc = 0x154DF0u;
    SET_GPR_U32(ctx, 31, 0x154DF8u);
    ctx->pc = 0x154050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154050u, 0x154DF0u, 0x154DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DF8u;
label_154df8:
    // 0x154df8: 0x1000012d  b           . + 4 + (0x12D << 2)
label_154dfc:
    if (ctx->pc == 0x154DFCu) {
        ctx->pc = 0x154E00u;
        goto label_154e00;
    }
    ctx->pc = 0x154DF8u;
    {
        const bool branch_taken_0x154df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154df8) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x154E00u;
label_154e00:
    // 0x154e00: 0xc054f84  jal         func_153E10
label_154e04:
    if (ctx->pc == 0x154E04u) {
        ctx->pc = 0x154E08u;
        goto label_154e08;
    }
    ctx->pc = 0x154E00u;
    SET_GPR_U32(ctx, 31, 0x154E08u);
    ctx->pc = 0x153E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E10u, 0x154E00u, 0x154E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E08u;
label_154e08:
    // 0x154e08: 0xc055000  jal         func_154000
label_154e0c:
    if (ctx->pc == 0x154E0Cu) {
        ctx->pc = 0x154E10u;
        goto label_154e10;
    }
    ctx->pc = 0x154E08u;
    SET_GPR_U32(ctx, 31, 0x154E10u);
    ctx->pc = 0x154000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154000u, 0x154E08u, 0x154E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E10u;
label_154e10:
    { static uint64_t last[3]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[3]={(uint64_t)(GPR_U32(ctx,2)),(uint64_t)(READ32(0x81f248u)),(uint64_t)(READ32(0x7fee98u)),}; bool chg=first; for(int i=0;i<3;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<30) { ++lines; first=false; for(int i=0;i<3;++i) last[i]=cur[i]; fprintf(stderr,"[px ldr_b] hit=%u " "reading=%llu f81f248=0x%llx h=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2]); } }
    // 0x154e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154e14:
    // 0x154e14: 0x10430126  beq         $v0, $v1, . + 4 + (0x126 << 2)
label_154e18:
    if (ctx->pc == 0x154E18u) {
        ctx->pc = 0x154E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E14u;
        // 0x154e18: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E1Cu;
        goto label_154e1c;
    }
    ctx->pc = 0x154E14u;
    {
        const bool branch_taken_0x154e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x154E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E14u;
        // 0x154e18: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e14) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x154E1Cu;
label_154e1c:
    // 0x154e1c: 0x8c23f248  lw          $v1, -0xDB8($at)
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963784)));
label_154e20:
    // 0x154e20: 0x14600123  bnez        $v1, . + 4 + (0x123 << 2)
label_154e24:
    if (ctx->pc == 0x154E24u) {
        ctx->pc = 0x154E28u;
        goto label_154e28;
    }
    ctx->pc = 0x154E20u;
    {
        const bool branch_taken_0x154e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154e20) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x154E28u;
label_154e28:
    // 0x154e28: 0xc05500c  jal         func_154030
label_154e2c:
    if (ctx->pc == 0x154E2Cu) {
        ctx->pc = 0x154E30u;
        goto label_154e30;
    }
    ctx->pc = 0x154E28u;
    SET_GPR_U32(ctx, 31, 0x154E30u);
    ctx->pc = 0x154030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154030u, 0x154E28u, 0x154E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E30u;
label_154e30:
    // 0x154e30: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_154e34:
    // 0x154e34: 0x8c23eea4  lw          $v1, -0x115C($at)
    ctx->pc = 0x154e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962852)));
label_154e38:
    // 0x154e38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_154e3c:
    // 0x154e3c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_154e40:
    // 0x154e40: 0xc055010  jal         func_154040
label_154e44:
    if (ctx->pc == 0x154E44u) {
        ctx->pc = 0x154E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E40u;
        // 0x154e44: 0xac22eea4  sw          $v0, -0x115C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E48u;
        goto label_154e48;
    }
    ctx->pc = 0x154E40u;
    SET_GPR_U32(ctx, 31, 0x154E48u);
    ctx->pc = 0x154E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E40u;
    // 0x154e44: 0xac22eea4  sw          $v0, -0x115C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154040u, 0x154E40u, 0x154E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E48u;
label_154e48:
    // 0x154e48: 0xc05500c  jal         func_154030
label_154e4c:
    if (ctx->pc == 0x154E4Cu) {
        ctx->pc = 0x154E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E48u;
        // 0x154e4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E50u;
        goto label_154e50;
    }
    ctx->pc = 0x154E48u;
    SET_GPR_U32(ctx, 31, 0x154E50u);
    ctx->pc = 0x154E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E48u;
    // 0x154e4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154030u, 0x154E48u, 0x154E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E50u;
label_154e50:
    // 0x154e50: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_154e54:
    // 0x154e54: 0x8c24eea4  lw          $a0, -0x115C($at)
    ctx->pc = 0x154e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962852)));
label_154e58:
    // 0x154e58: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_154e5c:
    // 0x154e5c: 0x8c23eea0  lw          $v1, -0x1160($at)
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962848)));
label_154e60:
    // 0x154e60: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x154e60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_154e64:
    // 0x154e64: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_154e68:
    if (ctx->pc == 0x154E68u) {
        ctx->pc = 0x154E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E64u;
        // 0x154e68: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E6Cu;
        goto label_154e6c;
    }
    ctx->pc = 0x154E64u;
    {
        const bool branch_taken_0x154e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E64u;
        // 0x154e68: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e64) {
            ctx->pc = 0x154E80u;
            goto label_154e80;
        }
    }
    ctx->pc = 0x154E6Cu;
label_154e6c:
    // 0x154e6c: 0xc054f84  jal         func_153E10
label_154e70:
    if (ctx->pc == 0x154E70u) {
        ctx->pc = 0x154E74u;
        goto label_154e74;
    }
    ctx->pc = 0x154E6Cu;
    SET_GPR_U32(ctx, 31, 0x154E74u);
    ctx->pc = 0x153E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E10u, 0x154E6Cu, 0x154E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E74u;
label_154e74:
    // 0x154e74: 0xc08d256  jal         func_234958
label_154e78:
    if (ctx->pc == 0x154E78u) {
        ctx->pc = 0x154E7Cu;
        goto label_154e7c;
    }
    ctx->pc = 0x154E74u;
    SET_GPR_U32(ctx, 31, 0x154E7Cu);
    ctx->pc = 0x234958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234958u, 0x154E74u, 0x154E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E7Cu;
label_154e7c:
    // 0x154e7c: 0x0  nop
    ctx->pc = 0x154e7cu;
    // NOP
label_154e80:
    // 0x154e80: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_154e84:
    // 0x154e84: 0x8c23e870  lw          $v1, -0x1790($at)
    ctx->pc = 0x154e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961264)));
label_154e88:
    // 0x154e88: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_154e8c:
    if (ctx->pc == 0x154E8Cu) {
        ctx->pc = 0x154E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E88u;
        // 0x154e8c: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E90u;
        goto label_154e90;
    }
    ctx->pc = 0x154E88u;
    {
        const bool branch_taken_0x154e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E88u;
        // 0x154e8c: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e88) {
            ctx->pc = 0x154ED8u;
            goto label_154ed8;
        }
    }
    ctx->pc = 0x154E90u;
label_154e90:
    // 0x154e90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154e94:
    // 0x154e94: 0x8c24e864  lw          $a0, -0x179C($at)
    ctx->pc = 0x154e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961252)));
label_154e98:
    // 0x154e98: 0xc049522  jal         func_125488
label_154e9c:
    if (ctx->pc == 0x154E9Cu) {
        ctx->pc = 0x154E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E98u;
        // 0x154e9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EA0u;
        goto label_154ea0;
    }
    ctx->pc = 0x154E98u;
    SET_GPR_U32(ctx, 31, 0x154EA0u);
    ctx->pc = 0x154E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E98u;
    // 0x154e9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x154E98u, 0x154EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EA0u;
label_154ea0:
    // 0x154ea0: 0xc043898  jal         func_10E260
label_154ea4:
    if (ctx->pc == 0x154EA4u) {
        ctx->pc = 0x154EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EA0u;
        // 0x154ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EA8u;
        goto label_154ea8;
    }
    ctx->pc = 0x154EA0u;
    SET_GPR_U32(ctx, 31, 0x154EA8u);
    ctx->pc = 0x154EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EA0u;
    // 0x154ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x154EA0u, 0x154EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EA8u;
label_154ea8:
    // 0x154ea8: 0xc043898  jal         func_10E260
label_154eac:
    if (ctx->pc == 0x154EACu) {
        ctx->pc = 0x154EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EA8u;
        // 0x154eac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EB0u;
        goto label_154eb0;
    }
    ctx->pc = 0x154EA8u;
    SET_GPR_U32(ctx, 31, 0x154EB0u);
    ctx->pc = 0x154EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EA8u;
    // 0x154eac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x154EA8u, 0x154EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EB0u;
label_154eb0:
    // 0x154eb0: 0xc05500c  jal         func_154030
label_154eb4:
    if (ctx->pc == 0x154EB4u) {
        ctx->pc = 0x154EB8u;
        goto label_154eb8;
    }
    ctx->pc = 0x154EB0u;
    SET_GPR_U32(ctx, 31, 0x154EB8u);
    ctx->pc = 0x154030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154030u, 0x154EB0u, 0x154EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EB8u;
label_154eb8:
    // 0x154eb8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_154ebc:
    // 0x154ebc: 0x222c0  sll         $a0, $v0, 11
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_154ec0:
    // 0x154ec0: 0x8c23e864  lw          $v1, -0x179C($at)
    ctx->pc = 0x154ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961252)));
label_154ec4:
    // 0x154ec4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154ec8:
    // 0x154ec8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_154ecc:
    // 0x154ecc: 0x100000ec  b           . + 4 + (0xEC << 2)
label_154ed0:
    if (ctx->pc == 0x154ED0u) {
        ctx->pc = 0x154ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ECCu;
        // 0x154ed0: 0xac23e864  sw          $v1, -0x179C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154ED4u;
        goto label_154ed4;
    }
    ctx->pc = 0x154ECCu;
    {
        const bool branch_taken_0x154ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ECCu;
        // 0x154ed0: 0xac23e864  sw          $v1, -0x179C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ecc) {
            ctx->pc = 0x155280u;
            goto label_155280;
        }
    }
    ctx->pc = 0x154ED4u;
label_154ed4:
    // 0x154ed4: 0x0  nop
    ctx->pc = 0x154ed4u;
    // NOP
label_154ed8:
    // 0x154ed8: 0x938385d4  lbu         $v1, -0x7A2C($gp)
    ctx->pc = 0x154ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_154edc:
    // 0x154edc: 0x146000f6  bnez        $v1, . + 4 + (0xF6 << 2)
label_154ee0:
    if (ctx->pc == 0x154EE0u) {
        ctx->pc = 0x154EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EDCu;
        // 0x154ee0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EE4u;
        goto label_154ee4;
    }
    ctx->pc = 0x154EDCu;
    {
        const bool branch_taken_0x154edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EDCu;
        // 0x154ee0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154edc) {
            ctx->pc = 0x1552B8u;
            goto label_1552b8;
        }
    }
    ctx->pc = 0x154EE4u;
label_154ee4:
    // 0x154ee4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x154ee4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_154ee8:
    // 0x154ee8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x154ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_154eec:
    // 0x154eec: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_154ef0:
    if (ctx->pc == 0x154EF0u) {
        ctx->pc = 0x154EF4u;
        goto label_154ef4;
    }
    ctx->pc = 0x154EECu;
    {
        const bool branch_taken_0x154eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154eec) {
            ctx->pc = 0x154F28u;
            goto label_154f28;
        }
    }
    ctx->pc = 0x154EF4u;
label_154ef4:
    // 0x154ef4: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x154ef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_154ef8:
    // 0x154ef8: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_154efc:
    // 0x154efc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_154f00:
    if (ctx->pc == 0x154F00u) {
        ctx->pc = 0x154F04u;
        goto label_154f04;
    }
    ctx->pc = 0x154EFCu;
    {
        const bool branch_taken_0x154efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154efc) {
            ctx->pc = 0x154F28u;
            goto label_154f28;
        }
    }
    ctx->pc = 0x154F04u;
label_154f04:
    // 0x154f04: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x154f04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_154f08:
    // 0x154f08: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x154f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_154f0c:
    // 0x154f0c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_154f10:
    if (ctx->pc == 0x154F10u) {
        ctx->pc = 0x154F14u;
        goto label_154f14;
    }
    ctx->pc = 0x154F0Cu;
    {
        const bool branch_taken_0x154f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154f0c) {
            ctx->pc = 0x154F28u;
            goto label_154f28;
        }
    }
    ctx->pc = 0x154F14u;
label_154f14:
    // 0x154f14: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x154f14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_154f18:
    // 0x154f18: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x154f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_154f1c:
    // 0x154f1c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_154f20:
    if (ctx->pc == 0x154F20u) {
        ctx->pc = 0x154F24u;
        goto label_154f24;
    }
    ctx->pc = 0x154F1Cu;
    {
        const bool branch_taken_0x154f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x154f1c) {
            ctx->pc = 0x154F48u;
            goto label_154f48;
        }
    }
    ctx->pc = 0x154F24u;
label_154f24:
    // 0x154f24: 0x0  nop
    ctx->pc = 0x154f24u;
    // NOP
label_154f28:
    // 0x154f28: 0x0  nop
    ctx->pc = 0x154f28u;
    // NOP
label_154f2c:
    // 0x154f2c: 0x0  nop
    ctx->pc = 0x154f2cu;
    // NOP
label_154f30:
    // 0x154f30: 0x0  nop
    ctx->pc = 0x154f30u;
    // NOP
label_154f34:
    // 0x154f34: 0x0  nop
    ctx->pc = 0x154f34u;
    // NOP
label_154f38:
    // 0x154f38: 0x0  nop
    ctx->pc = 0x154f38u;
    // NOP
label_154f3c:
    // 0x154f3c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_154f40:
    if (ctx->pc == 0x154F40u) {
        ctx->pc = 0x154F44u;
        goto label_154f44;
    }
    ctx->pc = 0x154F3Cu;
    {
        const bool branch_taken_0x154f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f3c) {
            ctx->pc = 0x154F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154f28;
        }
    }
    ctx->pc = 0x154F44u;
label_154f44:
    // 0x154f44: 0x0  nop
    ctx->pc = 0x154f44u;
    // NOP
label_154f48:
    // 0x154f48: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x154f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_154f4c:
    // 0x154f4c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x154f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_154f50:
    // 0x154f50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x154f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_154f54:
    // 0x154f54: 0x2484cf04  addiu       $a0, $a0, -0x30FC
    ctx->pc = 0x154f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954756));
label_154f58:
    // 0x154f58: 0xa38285d4  sb          $v0, -0x7A2C($gp)
    ctx->pc = 0x154f58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936020), (uint8_t)GPR_U32(ctx, 2));
label_154f5c:
    // 0x154f5c: 0x938285d4  lbu         $v0, -0x7A2C($gp)
    ctx->pc = 0x154f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_154f60:
    // 0x154f60: 0xaf8085d8  sw          $zero, -0x7A28($gp)
    ctx->pc = 0x154f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
label_154f64:
    // 0x154f64: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154f68:
    // 0x154f68: 0xc04bf78  jal         func_12FDE0
label_154f6c:
    if (ctx->pc == 0x154F6Cu) {
        ctx->pc = 0x154F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F68u;
        // 0x154f6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F70u;
        goto label_154f70;
    }
    ctx->pc = 0x154F68u;
    SET_GPR_U32(ctx, 31, 0x154F70u);
    ctx->pc = 0x154F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F68u;
    // 0x154f6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x154F68u, 0x154F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F70u;
label_154f70:
    // 0x154f70: 0xaf8285dc  sw          $v0, -0x7A24($gp)
    ctx->pc = 0x154f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 2));
label_154f74:
    // 0x154f74: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x154f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_154f78:
    // 0x154f78: 0x8f8285dc  lw          $v0, -0x7A24($gp)
    ctx->pc = 0x154f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_154f7c:
    // 0x154f7c: 0xaf8285e0  sw          $v0, -0x7A20($gp)
    ctx->pc = 0x154f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936032), GPR_U32(ctx, 2));
label_154f80:
    // 0x154f80: 0x8f8485e0  lw          $a0, -0x7A20($gp)
    ctx->pc = 0x154f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_154f84:
    // 0x154f84: 0xc049522  jal         func_125488
label_154f88:
    if (ctx->pc == 0x154F88u) {
        ctx->pc = 0x154F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F84u;
        // 0x154f88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F8Cu;
        goto label_154f8c;
    }
    ctx->pc = 0x154F84u;
    SET_GPR_U32(ctx, 31, 0x154F8Cu);
    ctx->pc = 0x154F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F84u;
    // 0x154f88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x154F84u, 0x154F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F8Cu;
label_154f8c:
    // 0x154f8c: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x154f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_154f90:
    // 0x154f90: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x154f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_154f94:
    // 0x154f94: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x154f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_154f98:
    // 0x154f98: 0x2644000f  addiu       $a0, $s2, 0xF
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
label_154f9c:
    // 0x154f9c: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_154fa0:
    if (ctx->pc == 0x154FA0u) {
        ctx->pc = 0x154FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F9Cu;
        // 0x154fa0: 0x839024  and         $s2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FA4u;
        goto label_154fa4;
    }
    ctx->pc = 0x154F9Cu;
    {
        const bool branch_taken_0x154f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F9Cu;
        // 0x154fa0: 0x839024  and         $s2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f9c) {
            ctx->pc = 0x1552B8u;
            goto label_1552b8;
        }
    }
    ctx->pc = 0x154FA4u;
label_154fa4:
    // 0x154fa4: 0x0  nop
    ctx->pc = 0x154fa4u;
    // NOP
label_154fa8:
    // 0x154fa8: 0x8f8285e4  lw          $v0, -0x7A1C($gp)
    ctx->pc = 0x154fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
label_154fac:
    // 0x154fac: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_154fb0:
    if (ctx->pc == 0x154FB0u) {
        ctx->pc = 0x154FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FACu;
        // 0x154fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FB4u;
        goto label_154fb4;
    }
    ctx->pc = 0x154FACu;
    {
        const bool branch_taken_0x154fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FACu;
        // 0x154fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fac) {
            ctx->pc = 0x155100u;
            goto label_155100;
        }
    }
    ctx->pc = 0x154FB4u;
label_154fb4:
    // 0x154fb4: 0xc0638f4  jal         func_18E3D0
label_154fb8:
    if (ctx->pc == 0x154FB8u) {
        ctx->pc = 0x154FBCu;
        goto label_154fbc;
    }
    ctx->pc = 0x154FB4u;
    SET_GPR_U32(ctx, 31, 0x154FBCu);
    ctx->pc = 0x18E3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E3D0u, 0x154FB4u, 0x154FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FBCu;
label_154fbc:
    // 0x154fbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_154fc0:
    if (ctx->pc == 0x154FC0u) {
        ctx->pc = 0x154FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FBCu;
        // 0x154fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FC4u;
        goto label_154fc4;
    }
    ctx->pc = 0x154FBCu;
    {
        const bool branch_taken_0x154fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FBCu;
        // 0x154fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fbc) {
            ctx->pc = 0x154FD8u;
            goto label_154fd8;
        }
    }
    ctx->pc = 0x154FC4u;
label_154fc4:
    // 0x154fc4: 0xc0638f4  jal         func_18E3D0
label_154fc8:
    if (ctx->pc == 0x154FC8u) {
        ctx->pc = 0x154FCCu;
        goto label_154fcc;
    }
    ctx->pc = 0x154FC4u;
    SET_GPR_U32(ctx, 31, 0x154FCCu);
    ctx->pc = 0x18E3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E3D0u, 0x154FC4u, 0x154FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FCCu;
label_154fcc:
    // 0x154fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154fd0:
    // 0x154fd0: 0x1443002b  bne         $v0, $v1, . + 4 + (0x2B << 2)
label_154fd4:
    if (ctx->pc == 0x154FD4u) {
        ctx->pc = 0x154FD8u;
        goto label_154fd8;
    }
    ctx->pc = 0x154FD0u;
    {
        const bool branch_taken_0x154fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x154fd0) {
            ctx->pc = 0x155080u;
            goto label_155080;
        }
    }
    ctx->pc = 0x154FD8u;
label_154fd8:
    // 0x154fd8: 0xc063830  jal         func_18E0C0
label_154fdc:
    if (ctx->pc == 0x154FDCu) {
        ctx->pc = 0x154FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FD8u;
        // 0x154fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FE0u;
        goto label_154fe0;
    }
    ctx->pc = 0x154FD8u;
    SET_GPR_U32(ctx, 31, 0x154FE0u);
    ctx->pc = 0x154FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FD8u;
    // 0x154fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0C0u, 0x154FD8u, 0x154FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FE0u;
label_154fe0:
    // 0x154fe0: 0xaf8285f0  sw          $v0, -0x7A10($gp)
    ctx->pc = 0x154fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 2));
label_154fe4:
    // 0x154fe4: 0x8f8285e0  lw          $v0, -0x7A20($gp)
    ctx->pc = 0x154fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_154fe8:
    // 0x154fe8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x154fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_154fec:
    // 0x154fec: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x154fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_154ff0:
    // 0x154ff0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_154ff4:
    if (ctx->pc == 0x154FF4u) {
        ctx->pc = 0x154FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FF0u;
        // 0x154ff4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FF8u;
        goto label_154ff8;
    }
    ctx->pc = 0x154FF0u;
    {
        const bool branch_taken_0x154ff0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x154FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FF0u;
        // 0x154ff4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ff0) {
            ctx->pc = 0x155004u;
            goto label_155004;
        }
    }
    ctx->pc = 0x154FF8u;
label_154ff8:
    // 0x154ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154ffc:
    // 0x154ffc: 0x10000007  b           . + 4 + (0x7 << 2)
label_155000:
    if (ctx->pc == 0x155000u) {
        ctx->pc = 0x155000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FFCu;
        // 0x155000: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155004u;
        goto label_155004;
    }
    ctx->pc = 0x154FFCu;
    {
        const bool branch_taken_0x154ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FFCu;
        // 0x155000: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ffc) {
            ctx->pc = 0x15501Cu;
            goto label_15501c;
        }
    }
    ctx->pc = 0x155004u;
label_155004:
    // 0x155004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_155008:
    // 0x155008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x155008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_15500c:
    // 0x15500c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15500cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155010:
    // 0x155010: 0x0  nop
    ctx->pc = 0x155010u;
    // NOP
label_155014:
    // 0x155014: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x155014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_155018:
    // 0x155018: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x155018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_15501c:
    // 0x15501c: 0x8f8285f0  lw          $v0, -0x7A10($gp)
    ctx->pc = 0x15501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
label_155020:
    // 0x155020: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_155024:
    if (ctx->pc == 0x155024u) {
        ctx->pc = 0x155024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155020u;
        // 0x155024: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155028u;
        goto label_155028;
    }
    ctx->pc = 0x155020u;
    {
        const bool branch_taken_0x155020 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x155024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155020u;
        // 0x155024: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155020) {
            ctx->pc = 0x155034u;
            goto label_155034;
        }
    }
    ctx->pc = 0x155028u;
label_155028:
    // 0x155028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15502c:
    // 0x15502c: 0x10000007  b           . + 4 + (0x7 << 2)
label_155030:
    if (ctx->pc == 0x155030u) {
        ctx->pc = 0x155030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15502Cu;
        // 0x155030: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155034u;
        goto label_155034;
    }
    ctx->pc = 0x15502Cu;
    {
        const bool branch_taken_0x15502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15502Cu;
        // 0x155030: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15502c) {
            ctx->pc = 0x15504Cu;
            goto label_15504c;
        }
    }
    ctx->pc = 0x155034u;
label_155034:
    // 0x155034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_155038:
    // 0x155038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x155038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_15503c:
    // 0x15503c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15503cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155040:
    // 0x155040: 0x0  nop
    ctx->pc = 0x155040u;
    // NOP
label_155044:
    // 0x155044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x155044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_155048:
    // 0x155048: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x155048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15504c:
    // 0x15504c: 0x0  nop
    ctx->pc = 0x15504cu;
    // NOP
label_155050:
    // 0x155050: 0x0  nop
    ctx->pc = 0x155050u;
    // NOP
label_155054:
    // 0x155054: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x155054u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_155058:
    // 0x155058: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x155058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_15505c:
    // 0x15505c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155060:
    // 0x155060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155064:
    // 0x155064: 0x0  nop
    ctx->pc = 0x155064u;
    // NOP
label_155068:
    // 0x155068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x155068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15506c:
    // 0x15506c: 0xc063934  jal         func_18E4D0
label_155070:
    if (ctx->pc == 0x155070u) {
        ctx->pc = 0x155070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15506Cu;
        // 0x155070: 0xe7808058  swc1        $f0, -0x7FA8($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934616), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155074u;
        goto label_155074;
    }
    ctx->pc = 0x15506Cu;
    SET_GPR_U32(ctx, 31, 0x155074u);
    ctx->pc = 0x155070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15506Cu;
    // 0x155070: 0xe7808058  swc1        $f0, -0x7FA8($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934616), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E4D0u, 0x15506Cu, 0x155074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155074u;
label_155074:
    // 0x155074: 0x10000004  b           . + 4 + (0x4 << 2)
label_155078:
    if (ctx->pc == 0x155078u) {
        ctx->pc = 0x155078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155074u;
        // 0x155078: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15507Cu;
        goto label_15507c;
    }
    ctx->pc = 0x155074u;
    {
        const bool branch_taken_0x155074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155074u;
        // 0x155078: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155074) {
            ctx->pc = 0x155088u;
            goto label_155088;
        }
    }
    ctx->pc = 0x15507Cu;
label_15507c:
    // 0x15507c: 0x0  nop
    ctx->pc = 0x15507cu;
    // NOP
label_155080:
    // 0x155080: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x155080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_155084:
    // 0x155084: 0xaf828058  sw          $v0, -0x7FA8($gp)
    ctx->pc = 0x155084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934616), GPR_U32(ctx, 2));
label_155088:
    // 0x155088: 0x8f8285e0  lw          $v0, -0x7A20($gp)
    ctx->pc = 0x155088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_15508c:
    // 0x15508c: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x15508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_155090:
    // 0x155090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x155090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155094:
    // 0x155094: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x155094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_155098:
    // 0x155098: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x155098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_15509c:
    // 0x15509c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15509cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1550a0:
    // 0x1550a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1550a4:
    if (ctx->pc == 0x1550A4u) {
        ctx->pc = 0x1550A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A0u;
        // 0x1550a4: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550A8u;
        goto label_1550a8;
    }
    ctx->pc = 0x1550A0u;
    {
        const bool branch_taken_0x1550a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1550A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A0u;
        // 0x1550a4: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550a0) {
            ctx->pc = 0x1550B0u;
            goto label_1550b0;
        }
    }
    ctx->pc = 0x1550A8u;
label_1550a8:
    // 0x1550a8: 0x8f8285f0  lw          $v0, -0x7A10($gp)
    ctx->pc = 0x1550a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
label_1550ac:
    // 0x1550ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1550acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1550b0:
    // 0x1550b0: 0x8f8585e0  lw          $a1, -0x7A20($gp)
    ctx->pc = 0x1550b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_1550b4:
    // 0x1550b4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x1550b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_1550b8:
    // 0x1550b8: 0x8c22e874  lw          $v0, -0x178C($at)
    ctx->pc = 0x1550b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961268)));
label_1550bc:
    // 0x1550bc: 0x40f809  jalr        $v0
label_1550c0:
    if (ctx->pc == 0x1550C0u) {
        ctx->pc = 0x1550C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550BCu;
        // 0x1550c0: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550C4u;
        goto label_1550c4;
    }
    ctx->pc = 0x1550BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1550C4u);
        ctx->pc = 0x1550C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550BCu;
        // 0x1550c0: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1550BCu, 0x1550C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1550C4u;
label_1550c4:
    // 0x1550c4: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x1550c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1550c8:
    // 0x1550c8: 0xaf8285e4  sw          $v0, -0x7A1C($gp)
    ctx->pc = 0x1550c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 2));
label_1550cc:
    // 0x1550cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1550ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1550d0:
    // 0x1550d0: 0x0  nop
    ctx->pc = 0x1550d0u;
    // NOP
label_1550d4:
    // 0x1550d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1550d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1550d8:
    // 0x1550d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1550dc:
    if (ctx->pc == 0x1550DCu) {
        ctx->pc = 0x1550DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550D8u;
        // 0x1550dc: 0xaf8285ec  sw          $v0, -0x7A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550E0u;
        goto label_1550e0;
    }
    ctx->pc = 0x1550D8u;
    {
        const bool branch_taken_0x1550d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1550DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550D8u;
        // 0x1550dc: 0xaf8285ec  sw          $v0, -0x7A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550d8) {
            ctx->pc = 0x1550F0u;
            goto label_1550f0;
        }
    }
    ctx->pc = 0x1550E0u;
label_1550e0:
    // 0x1550e0: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_1550e4:
    // 0x1550e4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1550e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1550e8:
    // 0x1550e8: 0xaf8285e8  sw          $v0, -0x7A18($gp)
    ctx->pc = 0x1550e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
label_1550ec:
    // 0x1550ec: 0x0  nop
    ctx->pc = 0x1550ecu;
    // NOP
label_1550f0:
    // 0x1550f0: 0x8f8285d8  lw          $v0, -0x7A28($gp)
    ctx->pc = 0x1550f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_1550f4:
    // 0x1550f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1550f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1550f8:
    // 0x1550f8: 0xaf8285d8  sw          $v0, -0x7A28($gp)
    ctx->pc = 0x1550f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 2));
label_1550fc:
    // 0x1550fc: 0x0  nop
    ctx->pc = 0x1550fcu;
    // NOP
label_155100:
    // 0x155100: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x155100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_155104:
    // 0x155104: 0x2128823  subu        $s1, $s0, $s2
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_155108:
    // 0x155108: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x155108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15510c:
    // 0x15510c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_155110:
    if (ctx->pc == 0x155110u) {
        ctx->pc = 0x155114u;
        goto label_155114;
    }
    ctx->pc = 0x15510Cu;
    {
        const bool branch_taken_0x15510c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15510c) {
            ctx->pc = 0x155120u;
            goto label_155120;
        }
    }
    ctx->pc = 0x155114u;
label_155114:
    // 0x155114: 0x10000004  b           . + 4 + (0x4 << 2)
label_155118:
    if (ctx->pc == 0x155118u) {
        ctx->pc = 0x15511Cu;
        goto label_15511c;
    }
    ctx->pc = 0x155114u;
    {
        const bool branch_taken_0x155114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155114) {
            ctx->pc = 0x155128u;
            goto label_155128;
        }
    }
    ctx->pc = 0x15511Cu;
label_15511c:
    // 0x15511c: 0x0  nop
    ctx->pc = 0x15511cu;
    // NOP
label_155120:
    // 0x155120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x155120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155124:
    // 0x155124: 0x0  nop
    ctx->pc = 0x155124u;
    // NOP
label_155128:
    // 0x155128: 0x8f8585ec  lw          $a1, -0x7A14($gp)
    ctx->pc = 0x155128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936044)));
label_15512c:
    // 0x15512c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_155130:
    if (ctx->pc == 0x155130u) {
        ctx->pc = 0x155130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15512Cu;
        // 0x155130: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155134u;
        goto label_155134;
    }
    ctx->pc = 0x15512Cu;
    {
        const bool branch_taken_0x15512c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x155130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15512Cu;
        // 0x155130: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15512c) {
            ctx->pc = 0x155198u;
            goto label_155198;
        }
    }
    ctx->pc = 0x155134u;
label_155134:
    // 0x155134: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x155134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_155138:
    // 0x155138: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_15513c:
    if (ctx->pc == 0x15513Cu) {
        ctx->pc = 0x155140u;
        goto label_155140;
    }
    ctx->pc = 0x155138u;
    {
        const bool branch_taken_0x155138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155138) {
            ctx->pc = 0x155190u;
            goto label_155190;
        }
    }
    ctx->pc = 0x155140u;
label_155140:
    // 0x155140: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x155140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_155144:
    // 0x155144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x155144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155148:
    // 0x155148: 0x0  nop
    ctx->pc = 0x155148u;
    // NOP
label_15514c:
    // 0x15514c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15514cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_155150:
    // 0x155150: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_155154:
    if (ctx->pc == 0x155154u) {
        ctx->pc = 0x155154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155150u;
        // 0x155154: 0x5207c  dsll32      $a0, $a1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155158u;
        goto label_155158;
    }
    ctx->pc = 0x155150u;
    {
        const bool branch_taken_0x155150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x155154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155150u;
        // 0x155154: 0x5207c  dsll32      $a0, $a1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155150) {
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x155158u;
label_155158:
    // 0x155158: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x155158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15515c:
    // 0x15515c: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x15515cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
label_155160:
    // 0x155160: 0xc049522  jal         func_125488
label_155164:
    if (ctx->pc == 0x155164u) {
        ctx->pc = 0x155164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155160u;
        // 0x155164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155168u;
        goto label_155168;
    }
    ctx->pc = 0x155160u;
    SET_GPR_U32(ctx, 31, 0x155168u);
    ctx->pc = 0x155164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155160u;
    // 0x155164: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x155160u, 0x155168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155168u;
label_155168:
    // 0x155168: 0x8f8285ec  lw          $v0, -0x7A14($gp)
    ctx->pc = 0x155168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936044)));
label_15516c:
    // 0x15516c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_155170:
    // 0x155170: 0x10000007  b           . + 4 + (0x7 << 2)
label_155174:
    if (ctx->pc == 0x155174u) {
        ctx->pc = 0x155174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155170u;
        // 0x155174: 0xaf8285ec  sw          $v0, -0x7A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155178u;
        goto label_155178;
    }
    ctx->pc = 0x155170u;
    {
        const bool branch_taken_0x155170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155170u;
        // 0x155174: 0xaf8285ec  sw          $v0, -0x7A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155170) {
            ctx->pc = 0x155190u;
            goto label_155190;
        }
    }
    ctx->pc = 0x155178u;
label_155178:
    // 0x155178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15517c:
    // 0x15517c: 0xc063950  jal         func_18E540
label_155180:
    if (ctx->pc == 0x155180u) {
        ctx->pc = 0x155180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15517Cu;
        // 0x155180: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155184u;
        goto label_155184;
    }
    ctx->pc = 0x15517Cu;
    SET_GPR_U32(ctx, 31, 0x155184u);
    ctx->pc = 0x155180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15517Cu;
    // 0x155180: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E540u, 0x15517Cu, 0x155184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155184u;
label_155184:
    // 0x155184: 0x8f8385ec  lw          $v1, -0x7A14($gp)
    ctx->pc = 0x155184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936044)));
label_155188:
    // 0x155188: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x155188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15518c:
    // 0x15518c: 0xaf8285ec  sw          $v0, -0x7A14($gp)
    ctx->pc = 0x15518cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 2));
label_155190:
    // 0x155190: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_155194:
    // 0x155194: 0x0  nop
    ctx->pc = 0x155194u;
    // NOP
label_155198:
    // 0x155198: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x155198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_15519c:
    // 0x15519c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1551a0:
    // 0x1551a0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1551a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1551a4:
    // 0x1551a4: 0xc043898  jal         func_10E260
label_1551a8:
    if (ctx->pc == 0x1551A8u) {
        ctx->pc = 0x1551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551A4u;
        // 0x1551a8: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551ACu;
        goto label_1551ac;
    }
    ctx->pc = 0x1551A4u;
    SET_GPR_U32(ctx, 31, 0x1551ACu);
    ctx->pc = 0x1551A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551A4u;
    // 0x1551a8: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1551A4u, 0x1551ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551ACu;
label_1551ac:
    // 0x1551ac: 0xc043898  jal         func_10E260
label_1551b0:
    if (ctx->pc == 0x1551B0u) {
        ctx->pc = 0x1551B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551ACu;
        // 0x1551b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551B4u;
        goto label_1551b4;
    }
    ctx->pc = 0x1551ACu;
    SET_GPR_U32(ctx, 31, 0x1551B4u);
    ctx->pc = 0x1551B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551ACu;
    // 0x1551b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1551ACu, 0x1551B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551B4u;
label_1551b4:
    // 0x1551b4: 0x8f8385e8  lw          $v1, -0x7A18($gp)
    ctx->pc = 0x1551b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_1551b8:
    // 0x1551b8: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_1551bc:
    if (ctx->pc == 0x1551BCu) {
        ctx->pc = 0x1551C0u;
        goto label_1551c0;
    }
    ctx->pc = 0x1551B8u;
    {
        const bool branch_taken_0x1551b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1551b8) {
            ctx->pc = 0x155238u;
            goto label_155238;
        }
    }
    ctx->pc = 0x1551C0u;
label_1551c0:
    // 0x1551c0: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x1551c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1551c4:
    // 0x1551c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1551c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1551c8:
    // 0x1551c8: 0x0  nop
    ctx->pc = 0x1551c8u;
    // NOP
label_1551cc:
    // 0x1551cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1551ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1551d0:
    // 0x1551d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1551d4:
    if (ctx->pc == 0x1551D4u) {
        ctx->pc = 0x1551D8u;
        goto label_1551d8;
    }
    ctx->pc = 0x1551D0u;
    {
        const bool branch_taken_0x1551d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1551d0) {
            ctx->pc = 0x1551E0u;
            goto label_1551e0;
        }
    }
    ctx->pc = 0x1551D8u;
label_1551d8:
    // 0x1551d8: 0xc063980  jal         func_18E600
label_1551dc:
    if (ctx->pc == 0x1551DCu) {
        ctx->pc = 0x1551E0u;
        goto label_1551e0;
    }
    ctx->pc = 0x1551D8u;
    SET_GPR_U32(ctx, 31, 0x1551E0u);
    ctx->pc = 0x18E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E600u, 0x1551D8u, 0x1551E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551E0u;
label_1551e0:
    // 0x1551e0: 0x8f8485e4  lw          $a0, -0x7A1C($gp)
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
label_1551e4:
    // 0x1551e4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1551e8:
    if (ctx->pc == 0x1551E8u) {
        ctx->pc = 0x1551ECu;
        goto label_1551ec;
    }
    ctx->pc = 0x1551E4u;
    {
        const bool branch_taken_0x1551e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1551e4) {
            ctx->pc = 0x155210u;
            goto label_155210;
        }
    }
    ctx->pc = 0x1551ECu;
label_1551ec:
    // 0x1551ec: 0x8f8385ec  lw          $v1, -0x7A14($gp)
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936044)));
label_1551f0:
    // 0x1551f0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1551f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
label_1551f4:
    // 0x1551f4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1551f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
label_1551f8:
    // 0x1551f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1551fc:
    if (ctx->pc == 0x1551FCu) {
        ctx->pc = 0x1551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F8u;
        // 0x1551fc: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155200u;
        goto label_155200;
    }
    ctx->pc = 0x1551F8u;
    {
        const bool branch_taken_0x1551f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F8u;
        // 0x1551fc: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551f8) {
            ctx->pc = 0x155210u;
            goto label_155210;
        }
    }
    ctx->pc = 0x155200u;
label_155200:
    // 0x155200: 0x8c22e870  lw          $v0, -0x1790($at)
    ctx->pc = 0x155200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961264)));
label_155204:
    // 0x155204: 0x40f809  jalr        $v0
label_155208:
    if (ctx->pc == 0x155208u) {
        ctx->pc = 0x155208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155204u;
        // 0x155208: 0x8f8585e0  lw          $a1, -0x7A20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15520Cu;
        goto label_15520c;
    }
    ctx->pc = 0x155204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15520Cu);
        ctx->pc = 0x155208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155204u;
        // 0x155208: 0x8f8585e0  lw          $a1, -0x7A20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155204u, 0x15520Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15520Cu;
label_15520c:
    // 0x15520c: 0x0  nop
    ctx->pc = 0x15520cu;
    // NOP
label_155210:
    // 0x155210: 0x8f8485e0  lw          $a0, -0x7A20($gp)
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_155214:
    // 0x155214: 0x938385d4  lbu         $v1, -0x7A2C($gp)
    ctx->pc = 0x155214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_155218:
    // 0x155218: 0xaf8085e4  sw          $zero, -0x7A1C($gp)
    ctx->pc = 0x155218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 0));
label_15521c:
    // 0x15521c: 0xaf8085e8  sw          $zero, -0x7A18($gp)
    ctx->pc = 0x15521cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 0));
label_155220:
    // 0x155220: 0xaf8085ec  sw          $zero, -0x7A14($gp)
    ctx->pc = 0x155220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 0));
label_155224:
    // 0x155224: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_155228:
    // 0x155228: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15522c:
    // 0x15522c: 0xaf8485e0  sw          $a0, -0x7A20($gp)
    ctx->pc = 0x15522cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936032), GPR_U32(ctx, 4));
label_155230:
    // 0x155230: 0xa38385d4  sb          $v1, -0x7A2C($gp)
    ctx->pc = 0x155230u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936020), (uint8_t)GPR_U32(ctx, 3));
label_155234:
    // 0x155234: 0x0  nop
    ctx->pc = 0x155234u;
    // NOP
label_155238:
    // 0x155238: 0x938485d4  lbu         $a0, -0x7A2C($gp)
    ctx->pc = 0x155238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_15523c:
    // 0x15523c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
label_155240:
    if (ctx->pc == 0x155240u) {
        ctx->pc = 0x155240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15523Cu;
        // 0x155240: 0x2121823  subu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155244u;
        goto label_155244;
    }
    ctx->pc = 0x15523Cu;
    {
        const bool branch_taken_0x15523c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x155240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15523Cu;
        // 0x155240: 0x2121823  subu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15523c) {
            ctx->pc = 0x155250u;
            goto label_155250;
        }
    }
    ctx->pc = 0x155244u;
label_155244:
    // 0x155244: 0x1c60ff58  bgtz        $v1, . + 4 + (-0xA8 << 2)
label_155248:
    if (ctx->pc == 0x155248u) {
        ctx->pc = 0x15524Cu;
        goto label_15524c;
    }
    ctx->pc = 0x155244u;
    {
        const bool branch_taken_0x155244 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x155244) {
            ctx->pc = 0x154FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154fa8;
        }
    }
    ctx->pc = 0x15524Cu;
label_15524c:
    // 0x15524c: 0x0  nop
    ctx->pc = 0x15524cu;
    // NOP
label_155250:
    // 0x155250: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_155254:
    if (ctx->pc == 0x155254u) {
        ctx->pc = 0x155254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155250u;
        // 0x155254: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155258u;
        goto label_155258;
    }
    ctx->pc = 0x155250u;
    {
        const bool branch_taken_0x155250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x155254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155250u;
        // 0x155254: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155250) {
            ctx->pc = 0x155280u;
            goto label_155280;
        }
    }
    ctx->pc = 0x155258u;
label_155258:
    // 0x155258: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15525c:
    // 0x15525c: 0x8c22e870  lw          $v0, -0x1790($at)
    ctx->pc = 0x15525cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961264)));
label_155260:
    // 0x155260: 0x40f809  jalr        $v0
label_155264:
    if (ctx->pc == 0x155264u) {
        ctx->pc = 0x155264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155260u;
        // 0x155264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155268u;
        goto label_155268;
    }
    ctx->pc = 0x155260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155268u);
        ctx->pc = 0x155264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155260u;
        // 0x155264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155260u, 0x155268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155268u;
label_155268:
    // 0x155268: 0x8f8585dc  lw          $a1, -0x7A24($gp)
    ctx->pc = 0x155268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_15526c:
    // 0x15526c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x15526cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_155270:
    // 0x155270: 0xc04bfbc  jal         func_12FEF0
label_155274:
    if (ctx->pc == 0x155274u) {
        ctx->pc = 0x155274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155270u;
        // 0x155274: 0x2484cf04  addiu       $a0, $a0, -0x30FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155278u;
        goto label_155278;
    }
    ctx->pc = 0x155270u;
    SET_GPR_U32(ctx, 31, 0x155278u);
    ctx->pc = 0x155274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155270u;
    // 0x155274: 0x2484cf04  addiu       $a0, $a0, -0x30FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEF0u, 0x155270u, 0x155278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155278u;
label_155278:
    // 0x155278: 0xaf8085dc  sw          $zero, -0x7A24($gp)
    ctx->pc = 0x155278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 0));
label_15527c:
    // 0x15527c: 0xaf8085e0  sw          $zero, -0x7A20($gp)
    ctx->pc = 0x15527cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936032), GPR_U32(ctx, 0));
label_155280:
    // 0x155280: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x155280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_155284:
    // 0x155284: 0x8c25eea0  lw          $a1, -0x1160($at)
    ctx->pc = 0x155284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962848)));
label_155288:
    // 0x155288: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x155288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_15528c:
    // 0x15528c: 0x8c24eea4  lw          $a0, -0x115C($at)
    ctx->pc = 0x15528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962852)));
label_155290:
    // 0x155290: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x155290u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_155294:
    // 0x155294: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_155298:
    if (ctx->pc == 0x155298u) {
        ctx->pc = 0x15529Cu;
        goto label_15529c;
    }
    ctx->pc = 0x155294u;
    {
        const bool branch_taken_0x155294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155294) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x15529Cu;
label_15529c:
    // 0x15529c: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
label_1552a0:
    if (ctx->pc == 0x1552A0u) {
        ctx->pc = 0x1552A4u;
        goto label_1552a4;
    }
    ctx->pc = 0x15529Cu;
    {
        const bool branch_taken_0x15529c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x15529c) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x1552A4u;
label_1552a4:
    // 0x1552a4: 0xc055014  jal         func_154050
label_1552a8:
    if (ctx->pc == 0x1552A8u) {
        ctx->pc = 0x1552ACu;
        goto label_1552ac;
    }
    ctx->pc = 0x1552A4u;
    SET_GPR_U32(ctx, 31, 0x1552ACu);
    ctx->pc = 0x154050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154050u, 0x1552A4u, 0x1552ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552ACu;
label_1552ac:
    // 0x1552ac: 0x0  nop
    ctx->pc = 0x1552acu;
    // NOP
label_1552b0:
    // 0x1552b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1552b4:
    if (ctx->pc == 0x1552B4u) {
        ctx->pc = 0x1552B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B0u;
        // 0x1552b4: 0xaf8085cc  sw          $zero, -0x7A34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552B8u;
        goto label_1552b8;
    }
    ctx->pc = 0x1552B0u;
    {
        const bool branch_taken_0x1552b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B0u;
        // 0x1552b4: 0xaf8085cc  sw          $zero, -0x7A34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552b0) {
            ctx->pc = 0x1552D8u;
            goto label_1552d8;
        }
    }
    ctx->pc = 0x1552B8u;
label_1552b8:
    // 0x1552b8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_1552bc:
    if (ctx->pc == 0x1552BCu) {
        ctx->pc = 0x1552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B8u;
        // 0x1552bc: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552C0u;
        goto label_1552c0;
    }
    ctx->pc = 0x1552B8u;
    {
        const bool branch_taken_0x1552b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B8u;
        // 0x1552bc: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552b8) {
            ctx->pc = 0x155238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155238;
        }
    }
    ctx->pc = 0x1552C0u;
label_1552c0:
    // 0x1552c0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1552c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1552c4:
    // 0x1552c4: 0x8c29ac78  lw          $t1, -0x5388($at)
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945912)));
label_1552c8:
    // 0x1552c8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1552cc:
    // 0x1552cc: 0x8c23ac74  lw          $v1, -0x538C($at)
    ctx->pc = 0x1552ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945908)));
label_1552d0:
    // 0x1552d0: 0x1000fe81  b           . + 4 + (-0x17F << 2)
label_1552d4:
    if (ctx->pc == 0x1552D4u) {
        ctx->pc = 0x1552D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552D0u;
        // 0x1552d4: 0x694821  addu        $t1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552D8u;
        goto label_1552d8;
    }
    ctx->pc = 0x1552D0u;
    {
        const bool branch_taken_0x1552d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552D0u;
        // 0x1552d4: 0x694821  addu        $t1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552d0) {
            ctx->pc = 0x154CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154cd8;
        }
    }
    ctx->pc = 0x1552D8u;
label_1552d8:
    // 0x1552d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1552d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1552dc:
    // 0x1552dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1552dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1552e0:
    // 0x1552e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1552e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1552e4:
    // 0x1552e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1552e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1552e8:
    // 0x1552e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1552e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1552ec:
    // 0x1552ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1552ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1552f0:
    // 0x1552f0: 0x3e00008  jr          $ra
label_1552f4:
    if (ctx->pc == 0x1552F4u) {
        ctx->pc = 0x1552F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F0u;
        // 0x1552f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552F8u;
        goto label_fallthrough_0x1552f0;
    }
    ctx->pc = 0x1552F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1552F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F0u;
        // 0x1552f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1552F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1552f0:
    ctx->pc = 0x1552F8u;
}
