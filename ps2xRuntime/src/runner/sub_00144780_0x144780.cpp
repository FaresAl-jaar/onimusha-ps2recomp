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

// Function: sub_00144780
// Address: 0x144780 - 0x144ec8
void sub_00144780_0x144780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144780_0x144780");
#endif

    switch (ctx->pc) {
        case 0x144780u: goto label_144780;
        case 0x144784u: goto label_144784;
        case 0x144788u: goto label_144788;
        case 0x14478cu: goto label_14478c;
        case 0x144790u: goto label_144790;
        case 0x144794u: goto label_144794;
        case 0x144798u: goto label_144798;
        case 0x14479cu: goto label_14479c;
        case 0x1447a0u: goto label_1447a0;
        case 0x1447a4u: goto label_1447a4;
        case 0x1447a8u: goto label_1447a8;
        case 0x1447acu: goto label_1447ac;
        case 0x1447b0u: goto label_1447b0;
        case 0x1447b4u: goto label_1447b4;
        case 0x1447b8u: goto label_1447b8;
        case 0x1447bcu: goto label_1447bc;
        case 0x1447c0u: goto label_1447c0;
        case 0x1447c4u: goto label_1447c4;
        case 0x1447c8u: goto label_1447c8;
        case 0x1447ccu: goto label_1447cc;
        case 0x1447d0u: goto label_1447d0;
        case 0x1447d4u: goto label_1447d4;
        case 0x1447d8u: goto label_1447d8;
        case 0x1447dcu: goto label_1447dc;
        case 0x1447e0u: goto label_1447e0;
        case 0x1447e4u: goto label_1447e4;
        case 0x1447e8u: goto label_1447e8;
        case 0x1447ecu: goto label_1447ec;
        case 0x1447f0u: goto label_1447f0;
        case 0x1447f4u: goto label_1447f4;
        case 0x1447f8u: goto label_1447f8;
        case 0x1447fcu: goto label_1447fc;
        case 0x144800u: goto label_144800;
        case 0x144804u: goto label_144804;
        case 0x144808u: goto label_144808;
        case 0x14480cu: goto label_14480c;
        case 0x144810u: goto label_144810;
        case 0x144814u: goto label_144814;
        case 0x144818u: goto label_144818;
        case 0x14481cu: goto label_14481c;
        case 0x144820u: goto label_144820;
        case 0x144824u: goto label_144824;
        case 0x144828u: goto label_144828;
        case 0x14482cu: goto label_14482c;
        case 0x144830u: goto label_144830;
        case 0x144834u: goto label_144834;
        case 0x144838u: goto label_144838;
        case 0x14483cu: goto label_14483c;
        case 0x144840u: goto label_144840;
        case 0x144844u: goto label_144844;
        case 0x144848u: goto label_144848;
        case 0x14484cu: goto label_14484c;
        case 0x144850u: goto label_144850;
        case 0x144854u: goto label_144854;
        case 0x144858u: goto label_144858;
        case 0x14485cu: goto label_14485c;
        case 0x144860u: goto label_144860;
        case 0x144864u: goto label_144864;
        case 0x144868u: goto label_144868;
        case 0x14486cu: goto label_14486c;
        case 0x144870u: goto label_144870;
        case 0x144874u: goto label_144874;
        case 0x144878u: goto label_144878;
        case 0x14487cu: goto label_14487c;
        case 0x144880u: goto label_144880;
        case 0x144884u: goto label_144884;
        case 0x144888u: goto label_144888;
        case 0x14488cu: goto label_14488c;
        case 0x144890u: goto label_144890;
        case 0x144894u: goto label_144894;
        case 0x144898u: goto label_144898;
        case 0x14489cu: goto label_14489c;
        case 0x1448a0u: goto label_1448a0;
        case 0x1448a4u: goto label_1448a4;
        case 0x1448a8u: goto label_1448a8;
        case 0x1448acu: goto label_1448ac;
        case 0x1448b0u: goto label_1448b0;
        case 0x1448b4u: goto label_1448b4;
        case 0x1448b8u: goto label_1448b8;
        case 0x1448bcu: goto label_1448bc;
        case 0x1448c0u: goto label_1448c0;
        case 0x1448c4u: goto label_1448c4;
        case 0x1448c8u: goto label_1448c8;
        case 0x1448ccu: goto label_1448cc;
        case 0x1448d0u: goto label_1448d0;
        case 0x1448d4u: goto label_1448d4;
        case 0x1448d8u: goto label_1448d8;
        case 0x1448dcu: goto label_1448dc;
        case 0x1448e0u: goto label_1448e0;
        case 0x1448e4u: goto label_1448e4;
        case 0x1448e8u: goto label_1448e8;
        case 0x1448ecu: goto label_1448ec;
        case 0x1448f0u: goto label_1448f0;
        case 0x1448f4u: goto label_1448f4;
        case 0x1448f8u: goto label_1448f8;
        case 0x1448fcu: goto label_1448fc;
        case 0x144900u: goto label_144900;
        case 0x144904u: goto label_144904;
        case 0x144908u: goto label_144908;
        case 0x14490cu: goto label_14490c;
        case 0x144910u: goto label_144910;
        case 0x144914u: goto label_144914;
        case 0x144918u: goto label_144918;
        case 0x14491cu: goto label_14491c;
        case 0x144920u: goto label_144920;
        case 0x144924u: goto label_144924;
        case 0x144928u: goto label_144928;
        case 0x14492cu: goto label_14492c;
        case 0x144930u: goto label_144930;
        case 0x144934u: goto label_144934;
        case 0x144938u: goto label_144938;
        case 0x14493cu: goto label_14493c;
        case 0x144940u: goto label_144940;
        case 0x144944u: goto label_144944;
        case 0x144948u: goto label_144948;
        case 0x14494cu: goto label_14494c;
        case 0x144950u: goto label_144950;
        case 0x144954u: goto label_144954;
        case 0x144958u: goto label_144958;
        case 0x14495cu: goto label_14495c;
        case 0x144960u: goto label_144960;
        case 0x144964u: goto label_144964;
        case 0x144968u: goto label_144968;
        case 0x14496cu: goto label_14496c;
        case 0x144970u: goto label_144970;
        case 0x144974u: goto label_144974;
        case 0x144978u: goto label_144978;
        case 0x14497cu: goto label_14497c;
        case 0x144980u: goto label_144980;
        case 0x144984u: goto label_144984;
        case 0x144988u: goto label_144988;
        case 0x14498cu: goto label_14498c;
        case 0x144990u: goto label_144990;
        case 0x144994u: goto label_144994;
        case 0x144998u: goto label_144998;
        case 0x14499cu: goto label_14499c;
        case 0x1449a0u: goto label_1449a0;
        case 0x1449a4u: goto label_1449a4;
        case 0x1449a8u: goto label_1449a8;
        case 0x1449acu: goto label_1449ac;
        case 0x1449b0u: goto label_1449b0;
        case 0x1449b4u: goto label_1449b4;
        case 0x1449b8u: goto label_1449b8;
        case 0x1449bcu: goto label_1449bc;
        case 0x1449c0u: goto label_1449c0;
        case 0x1449c4u: goto label_1449c4;
        case 0x1449c8u: goto label_1449c8;
        case 0x1449ccu: goto label_1449cc;
        case 0x1449d0u: goto label_1449d0;
        case 0x1449d4u: goto label_1449d4;
        case 0x1449d8u: goto label_1449d8;
        case 0x1449dcu: goto label_1449dc;
        case 0x1449e0u: goto label_1449e0;
        case 0x1449e4u: goto label_1449e4;
        case 0x1449e8u: goto label_1449e8;
        case 0x1449ecu: goto label_1449ec;
        case 0x1449f0u: goto label_1449f0;
        case 0x1449f4u: goto label_1449f4;
        case 0x1449f8u: goto label_1449f8;
        case 0x1449fcu: goto label_1449fc;
        case 0x144a00u: goto label_144a00;
        case 0x144a04u: goto label_144a04;
        case 0x144a08u: goto label_144a08;
        case 0x144a0cu: goto label_144a0c;
        case 0x144a10u: goto label_144a10;
        case 0x144a14u: goto label_144a14;
        case 0x144a18u: goto label_144a18;
        case 0x144a1cu: goto label_144a1c;
        case 0x144a20u: goto label_144a20;
        case 0x144a24u: goto label_144a24;
        case 0x144a28u: goto label_144a28;
        case 0x144a2cu: goto label_144a2c;
        case 0x144a30u: goto label_144a30;
        case 0x144a34u: goto label_144a34;
        case 0x144a38u: goto label_144a38;
        case 0x144a3cu: goto label_144a3c;
        case 0x144a40u: goto label_144a40;
        case 0x144a44u: goto label_144a44;
        case 0x144a48u: goto label_144a48;
        case 0x144a4cu: goto label_144a4c;
        case 0x144a50u: goto label_144a50;
        case 0x144a54u: goto label_144a54;
        case 0x144a58u: goto label_144a58;
        case 0x144a5cu: goto label_144a5c;
        case 0x144a60u: goto label_144a60;
        case 0x144a64u: goto label_144a64;
        case 0x144a68u: goto label_144a68;
        case 0x144a6cu: goto label_144a6c;
        case 0x144a70u: goto label_144a70;
        case 0x144a74u: goto label_144a74;
        case 0x144a78u: goto label_144a78;
        case 0x144a7cu: goto label_144a7c;
        case 0x144a80u: goto label_144a80;
        case 0x144a84u: goto label_144a84;
        case 0x144a88u: goto label_144a88;
        case 0x144a8cu: goto label_144a8c;
        case 0x144a90u: goto label_144a90;
        case 0x144a94u: goto label_144a94;
        case 0x144a98u: goto label_144a98;
        case 0x144a9cu: goto label_144a9c;
        case 0x144aa0u: goto label_144aa0;
        case 0x144aa4u: goto label_144aa4;
        case 0x144aa8u: goto label_144aa8;
        case 0x144aacu: goto label_144aac;
        case 0x144ab0u: goto label_144ab0;
        case 0x144ab4u: goto label_144ab4;
        case 0x144ab8u: goto label_144ab8;
        case 0x144abcu: goto label_144abc;
        case 0x144ac0u: goto label_144ac0;
        case 0x144ac4u: goto label_144ac4;
        case 0x144ac8u: goto label_144ac8;
        case 0x144accu: goto label_144acc;
        case 0x144ad0u: goto label_144ad0;
        case 0x144ad4u: goto label_144ad4;
        case 0x144ad8u: goto label_144ad8;
        case 0x144adcu: goto label_144adc;
        case 0x144ae0u: goto label_144ae0;
        case 0x144ae4u: goto label_144ae4;
        case 0x144ae8u: goto label_144ae8;
        case 0x144aecu: goto label_144aec;
        case 0x144af0u: goto label_144af0;
        case 0x144af4u: goto label_144af4;
        case 0x144af8u: goto label_144af8;
        case 0x144afcu: goto label_144afc;
        case 0x144b00u: goto label_144b00;
        case 0x144b04u: goto label_144b04;
        case 0x144b08u: goto label_144b08;
        case 0x144b0cu: goto label_144b0c;
        case 0x144b10u: goto label_144b10;
        case 0x144b14u: goto label_144b14;
        case 0x144b18u: goto label_144b18;
        case 0x144b1cu: goto label_144b1c;
        case 0x144b20u: goto label_144b20;
        case 0x144b24u: goto label_144b24;
        case 0x144b28u: goto label_144b28;
        case 0x144b2cu: goto label_144b2c;
        case 0x144b30u: goto label_144b30;
        case 0x144b34u: goto label_144b34;
        case 0x144b38u: goto label_144b38;
        case 0x144b3cu: goto label_144b3c;
        case 0x144b40u: goto label_144b40;
        case 0x144b44u: goto label_144b44;
        case 0x144b48u: goto label_144b48;
        case 0x144b4cu: goto label_144b4c;
        case 0x144b50u: goto label_144b50;
        case 0x144b54u: goto label_144b54;
        case 0x144b58u: goto label_144b58;
        case 0x144b5cu: goto label_144b5c;
        case 0x144b60u: goto label_144b60;
        case 0x144b64u: goto label_144b64;
        case 0x144b68u: goto label_144b68;
        case 0x144b6cu: goto label_144b6c;
        case 0x144b70u: goto label_144b70;
        case 0x144b74u: goto label_144b74;
        case 0x144b78u: goto label_144b78;
        case 0x144b7cu: goto label_144b7c;
        case 0x144b80u: goto label_144b80;
        case 0x144b84u: goto label_144b84;
        case 0x144b88u: goto label_144b88;
        case 0x144b8cu: goto label_144b8c;
        case 0x144b90u: goto label_144b90;
        case 0x144b94u: goto label_144b94;
        case 0x144b98u: goto label_144b98;
        case 0x144b9cu: goto label_144b9c;
        case 0x144ba0u: goto label_144ba0;
        case 0x144ba4u: goto label_144ba4;
        case 0x144ba8u: goto label_144ba8;
        case 0x144bacu: goto label_144bac;
        case 0x144bb0u: goto label_144bb0;
        case 0x144bb4u: goto label_144bb4;
        case 0x144bb8u: goto label_144bb8;
        case 0x144bbcu: goto label_144bbc;
        case 0x144bc0u: goto label_144bc0;
        case 0x144bc4u: goto label_144bc4;
        case 0x144bc8u: goto label_144bc8;
        case 0x144bccu: goto label_144bcc;
        case 0x144bd0u: goto label_144bd0;
        case 0x144bd4u: goto label_144bd4;
        case 0x144bd8u: goto label_144bd8;
        case 0x144bdcu: goto label_144bdc;
        case 0x144be0u: goto label_144be0;
        case 0x144be4u: goto label_144be4;
        case 0x144be8u: goto label_144be8;
        case 0x144becu: goto label_144bec;
        case 0x144bf0u: goto label_144bf0;
        case 0x144bf4u: goto label_144bf4;
        case 0x144bf8u: goto label_144bf8;
        case 0x144bfcu: goto label_144bfc;
        case 0x144c00u: goto label_144c00;
        case 0x144c04u: goto label_144c04;
        case 0x144c08u: goto label_144c08;
        case 0x144c0cu: goto label_144c0c;
        case 0x144c10u: goto label_144c10;
        case 0x144c14u: goto label_144c14;
        case 0x144c18u: goto label_144c18;
        case 0x144c1cu: goto label_144c1c;
        case 0x144c20u: goto label_144c20;
        case 0x144c24u: goto label_144c24;
        case 0x144c28u: goto label_144c28;
        case 0x144c2cu: goto label_144c2c;
        case 0x144c30u: goto label_144c30;
        case 0x144c34u: goto label_144c34;
        case 0x144c38u: goto label_144c38;
        case 0x144c3cu: goto label_144c3c;
        case 0x144c40u: goto label_144c40;
        case 0x144c44u: goto label_144c44;
        case 0x144c48u: goto label_144c48;
        case 0x144c4cu: goto label_144c4c;
        case 0x144c50u: goto label_144c50;
        case 0x144c54u: goto label_144c54;
        case 0x144c58u: goto label_144c58;
        case 0x144c5cu: goto label_144c5c;
        case 0x144c60u: goto label_144c60;
        case 0x144c64u: goto label_144c64;
        case 0x144c68u: goto label_144c68;
        case 0x144c6cu: goto label_144c6c;
        case 0x144c70u: goto label_144c70;
        case 0x144c74u: goto label_144c74;
        case 0x144c78u: goto label_144c78;
        case 0x144c7cu: goto label_144c7c;
        case 0x144c80u: goto label_144c80;
        case 0x144c84u: goto label_144c84;
        case 0x144c88u: goto label_144c88;
        case 0x144c8cu: goto label_144c8c;
        case 0x144c90u: goto label_144c90;
        case 0x144c94u: goto label_144c94;
        case 0x144c98u: goto label_144c98;
        case 0x144c9cu: goto label_144c9c;
        case 0x144ca0u: goto label_144ca0;
        case 0x144ca4u: goto label_144ca4;
        case 0x144ca8u: goto label_144ca8;
        case 0x144cacu: goto label_144cac;
        case 0x144cb0u: goto label_144cb0;
        case 0x144cb4u: goto label_144cb4;
        case 0x144cb8u: goto label_144cb8;
        case 0x144cbcu: goto label_144cbc;
        case 0x144cc0u: goto label_144cc0;
        case 0x144cc4u: goto label_144cc4;
        case 0x144cc8u: goto label_144cc8;
        case 0x144cccu: goto label_144ccc;
        case 0x144cd0u: goto label_144cd0;
        case 0x144cd4u: goto label_144cd4;
        case 0x144cd8u: goto label_144cd8;
        case 0x144cdcu: goto label_144cdc;
        case 0x144ce0u: goto label_144ce0;
        case 0x144ce4u: goto label_144ce4;
        case 0x144ce8u: goto label_144ce8;
        case 0x144cecu: goto label_144cec;
        case 0x144cf0u: goto label_144cf0;
        case 0x144cf4u: goto label_144cf4;
        case 0x144cf8u: goto label_144cf8;
        case 0x144cfcu: goto label_144cfc;
        case 0x144d00u: goto label_144d00;
        case 0x144d04u: goto label_144d04;
        case 0x144d08u: goto label_144d08;
        case 0x144d0cu: goto label_144d0c;
        case 0x144d10u: goto label_144d10;
        case 0x144d14u: goto label_144d14;
        case 0x144d18u: goto label_144d18;
        case 0x144d1cu: goto label_144d1c;
        case 0x144d20u: goto label_144d20;
        case 0x144d24u: goto label_144d24;
        case 0x144d28u: goto label_144d28;
        case 0x144d2cu: goto label_144d2c;
        case 0x144d30u: goto label_144d30;
        case 0x144d34u: goto label_144d34;
        case 0x144d38u: goto label_144d38;
        case 0x144d3cu: goto label_144d3c;
        case 0x144d40u: goto label_144d40;
        case 0x144d44u: goto label_144d44;
        case 0x144d48u: goto label_144d48;
        case 0x144d4cu: goto label_144d4c;
        case 0x144d50u: goto label_144d50;
        case 0x144d54u: goto label_144d54;
        case 0x144d58u: goto label_144d58;
        case 0x144d5cu: goto label_144d5c;
        case 0x144d60u: goto label_144d60;
        case 0x144d64u: goto label_144d64;
        case 0x144d68u: goto label_144d68;
        case 0x144d6cu: goto label_144d6c;
        case 0x144d70u: goto label_144d70;
        case 0x144d74u: goto label_144d74;
        case 0x144d78u: goto label_144d78;
        case 0x144d7cu: goto label_144d7c;
        case 0x144d80u: goto label_144d80;
        case 0x144d84u: goto label_144d84;
        case 0x144d88u: goto label_144d88;
        case 0x144d8cu: goto label_144d8c;
        case 0x144d90u: goto label_144d90;
        case 0x144d94u: goto label_144d94;
        case 0x144d98u: goto label_144d98;
        case 0x144d9cu: goto label_144d9c;
        case 0x144da0u: goto label_144da0;
        case 0x144da4u: goto label_144da4;
        case 0x144da8u: goto label_144da8;
        case 0x144dacu: goto label_144dac;
        case 0x144db0u: goto label_144db0;
        case 0x144db4u: goto label_144db4;
        case 0x144db8u: goto label_144db8;
        case 0x144dbcu: goto label_144dbc;
        case 0x144dc0u: goto label_144dc0;
        case 0x144dc4u: goto label_144dc4;
        case 0x144dc8u: goto label_144dc8;
        case 0x144dccu: goto label_144dcc;
        case 0x144dd0u: goto label_144dd0;
        case 0x144dd4u: goto label_144dd4;
        case 0x144dd8u: goto label_144dd8;
        case 0x144ddcu: goto label_144ddc;
        case 0x144de0u: goto label_144de0;
        case 0x144de4u: goto label_144de4;
        case 0x144de8u: goto label_144de8;
        case 0x144decu: goto label_144dec;
        case 0x144df0u: goto label_144df0;
        case 0x144df4u: goto label_144df4;
        case 0x144df8u: goto label_144df8;
        case 0x144dfcu: goto label_144dfc;
        case 0x144e00u: goto label_144e00;
        case 0x144e04u: goto label_144e04;
        case 0x144e08u: goto label_144e08;
        case 0x144e0cu: goto label_144e0c;
        case 0x144e10u: goto label_144e10;
        case 0x144e14u: goto label_144e14;
        case 0x144e18u: goto label_144e18;
        case 0x144e1cu: goto label_144e1c;
        case 0x144e20u: goto label_144e20;
        case 0x144e24u: goto label_144e24;
        case 0x144e28u: goto label_144e28;
        case 0x144e2cu: goto label_144e2c;
        case 0x144e30u: goto label_144e30;
        case 0x144e34u: goto label_144e34;
        case 0x144e38u: goto label_144e38;
        case 0x144e3cu: goto label_144e3c;
        case 0x144e40u: goto label_144e40;
        case 0x144e44u: goto label_144e44;
        case 0x144e48u: goto label_144e48;
        case 0x144e4cu: goto label_144e4c;
        case 0x144e50u: goto label_144e50;
        case 0x144e54u: goto label_144e54;
        case 0x144e58u: goto label_144e58;
        case 0x144e5cu: goto label_144e5c;
        case 0x144e60u: goto label_144e60;
        case 0x144e64u: goto label_144e64;
        case 0x144e68u: goto label_144e68;
        case 0x144e6cu: goto label_144e6c;
        case 0x144e70u: goto label_144e70;
        case 0x144e74u: goto label_144e74;
        case 0x144e78u: goto label_144e78;
        case 0x144e7cu: goto label_144e7c;
        case 0x144e80u: goto label_144e80;
        case 0x144e84u: goto label_144e84;
        case 0x144e88u: goto label_144e88;
        case 0x144e8cu: goto label_144e8c;
        case 0x144e90u: goto label_144e90;
        case 0x144e94u: goto label_144e94;
        case 0x144e98u: goto label_144e98;
        case 0x144e9cu: goto label_144e9c;
        case 0x144ea0u: goto label_144ea0;
        case 0x144ea4u: goto label_144ea4;
        case 0x144ea8u: goto label_144ea8;
        case 0x144eacu: goto label_144eac;
        case 0x144eb0u: goto label_144eb0;
        case 0x144eb4u: goto label_144eb4;
        case 0x144eb8u: goto label_144eb8;
        case 0x144ebcu: goto label_144ebc;
        case 0x144ec0u: goto label_144ec0;
        case 0x144ec4u: goto label_144ec4;
        default: break;
    }

    ctx->pc = 0x144780u;

label_144780:
    // 0x144780: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x144780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_144784:
    // 0x144784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x144784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_144788:
    // 0x144788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x144788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_14478c:
    // 0x14478c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_144790:
    // 0x144790: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x144790u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_144794:
    // 0x144794: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x144794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_144798:
    // 0x144798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x144798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_14479c:
    // 0x14479c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x14479cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1447a0:
    // 0x1447a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1447a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1447a4:
    // 0x1447a4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1447a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1447a8:
    // 0x1447a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1447a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1447ac:
    // 0x1447ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1447acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1447b0:
    // 0x1447b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1447b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1447b4:
    // 0x1447b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1447b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1447b8:
    // 0x1447b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1447b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1447bc:
    // 0x1447bc: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x1447bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_1447c0:
    // 0x1447c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1447c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1447c4:
    // 0x1447c4: 0x8fb200bc  lw          $s2, 0xBC($sp)
    ctx->pc = 0x1447c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1447c8:
    // 0x1447c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1447c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1447cc:
    // 0x1447cc: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x1447ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
label_1447d0:
    // 0x1447d0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1447d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1447d4:
    // 0x1447d4: 0x93b700c0  lbu         $s7, 0xC0($sp)
    ctx->pc = 0x1447d4u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_1447d8:
    // 0x1447d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1447d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1447dc:
    // 0x1447dc: 0xa3aa00b7  sb          $t2, 0xB7($sp)
    ctx->pc = 0x1447dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 10));
label_1447e0:
    // 0x1447e0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1447e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1447e4:
    // 0x1447e4: 0xc0513b4  jal         func_144ED0
label_1447e8:
    if (ctx->pc == 0x1447E8u) {
        ctx->pc = 0x1447E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447E4u;
        // 0x1447e8: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447ECu;
        goto label_1447ec;
    }
    ctx->pc = 0x1447E4u;
    SET_GPR_U32(ctx, 31, 0x1447ECu);
    ctx->pc = 0x1447E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447E4u;
    // 0x1447e8: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144ED0u, 0x1447E4u, 0x1447ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447ECu;
label_1447ec:
    // 0x1447ec: 0x8f938a30  lw          $s3, -0x75D0($gp)
    ctx->pc = 0x1447ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_1447f0:
    // 0x1447f0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1447f4:
    if (ctx->pc == 0x1447F4u) {
        ctx->pc = 0x1447F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447F0u;
        // 0x1447f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447F8u;
        goto label_1447f8;
    }
    ctx->pc = 0x1447F0u;
    {
        const bool branch_taken_0x1447f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447F0u;
        // 0x1447f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447f0) {
            ctx->pc = 0x144800u;
            goto label_144800;
        }
    }
    ctx->pc = 0x1447F8u;
label_1447f8:
    // 0x1447f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1447fc:
    if (ctx->pc == 0x1447FCu) {
        ctx->pc = 0x144800u;
        goto label_144800;
    }
    ctx->pc = 0x1447F8u;
    {
        const bool branch_taken_0x1447f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1447f8) {
            ctx->pc = 0x144810u;
            goto label_144810;
        }
    }
    ctx->pc = 0x144800u;
label_144800:
    // 0x144800: 0x8fb300bc  lw          $s3, 0xBC($sp)
    ctx->pc = 0x144800u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144804:
    // 0x144804: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_144808:
    // 0x144808: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x144808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_14480c:
    // 0x14480c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x14480cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144810:
    // 0x144810: 0x8f828a34  lw          $v0, -0x75CC($gp)
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937140)));
label_144814:
    // 0x144814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_144818:
    if (ctx->pc == 0x144818u) {
        ctx->pc = 0x144818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144814u;
        // 0x144818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14481Cu;
        goto label_14481c;
    }
    ctx->pc = 0x144814u;
    {
        const bool branch_taken_0x144814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144814u;
        // 0x144818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144814) {
            ctx->pc = 0x144828u;
            goto label_144828;
        }
    }
    ctx->pc = 0x14481Cu;
label_14481c:
    // 0x14481c: 0x40f809  jalr        $v0
label_144820:
    if (ctx->pc == 0x144820u) {
        ctx->pc = 0x144824u;
        goto label_144824;
    }
    ctx->pc = 0x14481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144824u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14481Cu, 0x144824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144824u;
label_144824:
    // 0x144824: 0x0  nop
    ctx->pc = 0x144824u;
    // NOP
label_144828:
    // 0x144828: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x144828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_14482c:
    // 0x14482c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_144830:
    // 0x144830: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_144834:
    if (ctx->pc == 0x144834u) {
        ctx->pc = 0x144834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144830u;
        // 0x144834: 0x2462ffdc  addiu       $v0, $v1, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144838u;
        goto label_144838;
    }
    ctx->pc = 0x144830u;
    {
        const bool branch_taken_0x144830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x144834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144830u;
        // 0x144834: 0x2462ffdc  addiu       $v0, $v1, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144830) {
            ctx->pc = 0x144850u;
            goto label_144850;
        }
    }
    ctx->pc = 0x144838u;
label_144838:
    // 0x144838: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x144838u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_14483c:
    // 0x14483c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_144840:
    if (ctx->pc == 0x144840u) {
        ctx->pc = 0x144844u;
        goto label_144844;
    }
    ctx->pc = 0x14483Cu;
    {
        const bool branch_taken_0x14483c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14483c) {
            ctx->pc = 0x144850u;
            goto label_144850;
        }
    }
    ctx->pc = 0x144844u;
label_144844:
    // 0x144844: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x144844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_144848:
    // 0x144848: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_14484c:
    if (ctx->pc == 0x14484Cu) {
        ctx->pc = 0x144850u;
        goto label_144850;
    }
    ctx->pc = 0x144848u;
    {
        const bool branch_taken_0x144848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x144848) {
            ctx->pc = 0x144858u;
            goto label_144858;
        }
    }
    ctx->pc = 0x144850u;
label_144850:
    // 0x144850: 0xc0cd914  jal         func_336450
label_144854:
    if (ctx->pc == 0x144854u) {
        ctx->pc = 0x144854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144850u;
        // 0x144854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144858u;
        goto label_144858;
    }
    ctx->pc = 0x144850u;
    SET_GPR_U32(ctx, 31, 0x144858u);
    ctx->pc = 0x144854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144850u;
    // 0x144854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336450u, 0x144850u, 0x144858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144858u;
label_144858:
    // 0x144858: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_14485c:
    // 0x14485c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x14485cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_144860:
    // 0x144860: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_144864:
    if (ctx->pc == 0x144864u) {
        ctx->pc = 0x144864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144860u;
        // 0x144864: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144868u;
        goto label_144868;
    }
    ctx->pc = 0x144860u;
    {
        const bool branch_taken_0x144860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144860u;
        // 0x144864: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144860) {
            ctx->pc = 0x144878u;
            goto label_144878;
        }
    }
    ctx->pc = 0x144868u;
label_144868:
    // 0x144868: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x144868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14486c:
    // 0x14486c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144870:
    // 0x144870: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144874:
    // 0x144874: 0x0  nop
    ctx->pc = 0x144874u;
    // NOP
label_144878:
    // 0x144878: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x144878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_14487c:
    // 0x14487c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_144880:
    // 0x144880: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x144880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_144884:
    // 0x144884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_144888:
    // 0x144888: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x144888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_14488c:
    // 0x14488c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x14488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_144890:
    // 0x144890: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_144894:
    if (ctx->pc == 0x144894u) {
        ctx->pc = 0x144898u;
        goto label_144898;
    }
    ctx->pc = 0x144890u;
    {
        const bool branch_taken_0x144890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144890) {
            ctx->pc = 0x1448B8u;
            goto label_1448b8;
        }
    }
    ctx->pc = 0x144898u;
label_144898:
    // 0x144898: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x144898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_14489c:
    // 0x14489c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x14489cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1448a0:
    // 0x1448a0: 0xae620144  sw          $v0, 0x144($s3)
    ctx->pc = 0x1448a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 2));
label_1448a4:
    // 0x1448a4: 0x8e640144  lw          $a0, 0x144($s3)
    ctx->pc = 0x1448a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
label_1448a8:
    // 0x1448a8: 0xc049590  jal         func_125640
label_1448ac:
    if (ctx->pc == 0x1448ACu) {
        ctx->pc = 0x1448ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448A8u;
        // 0x1448ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1448B0u;
        goto label_1448b0;
    }
    ctx->pc = 0x1448A8u;
    SET_GPR_U32(ctx, 31, 0x1448B0u);
    ctx->pc = 0x1448ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448A8u;
    // 0x1448ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1448A8u, 0x1448B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448B0u;
label_1448b0:
    // 0x1448b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1448b4:
    if (ctx->pc == 0x1448B4u) {
        ctx->pc = 0x1448B8u;
        goto label_1448b8;
    }
    ctx->pc = 0x1448B0u;
    {
        const bool branch_taken_0x1448b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1448b0) {
            ctx->pc = 0x1448C0u;
            goto label_1448c0;
        }
    }
    ctx->pc = 0x1448B8u;
label_1448b8:
    // 0x1448b8: 0xae600144  sw          $zero, 0x144($s3)
    ctx->pc = 0x1448b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 0));
label_1448bc:
    // 0x1448bc: 0x0  nop
    ctx->pc = 0x1448bcu;
    // NOP
label_1448c0:
    // 0x1448c0: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x1448c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1448c4:
    // 0x1448c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1448c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1448c8:
    // 0x1448c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1448cc:
    // 0x1448cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1448ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1448d0:
    // 0x1448d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1448d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1448d4:
    // 0x1448d4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1448d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_1448d8:
    // 0x1448d8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1448d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1448dc:
    // 0x1448dc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1448dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1448e0:
    // 0x1448e0: 0xa2570008  sb          $s7, 0x8($s2)
    ctx->pc = 0x1448e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 23));
label_1448e4:
    // 0x1448e4: 0xa2400009  sb          $zero, 0x9($s2)
    ctx->pc = 0x1448e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
label_1448e8:
    // 0x1448e8: 0xa6630030  sh          $v1, 0x30($s3)
    ctx->pc = 0x1448e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 3));
label_1448ec:
    // 0x1448ec: 0xa2700001  sb          $s0, 0x1($s3)
    ctx->pc = 0x1448ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 16));
label_1448f0:
    // 0x1448f0: 0xa2750002  sb          $s5, 0x2($s3)
    ctx->pc = 0x1448f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 21));
label_1448f4:
    // 0x1448f4: 0xa2760003  sb          $s6, 0x3($s3)
    ctx->pc = 0x1448f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 22));
label_1448f8:
    // 0x1448f8: 0xae600130  sw          $zero, 0x130($s3)
    ctx->pc = 0x1448f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 0));
label_1448fc:
    // 0x1448fc: 0xae600134  sw          $zero, 0x134($s3)
    ctx->pc = 0x1448fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
label_144900:
    // 0x144900: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x144900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_144904:
    // 0x144904: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x144904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
label_144908:
    // 0x144908: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x144908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_14490c:
    // 0x14490c: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x14490cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_144910:
    // 0x144910: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x144910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
label_144914:
    // 0x144914: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x144914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_144918:
    // 0x144918: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x144918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_14491c:
    // 0x14491c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x14491cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_144920:
    // 0x144920: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x144920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_144924:
    // 0x144924: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x144924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_144928:
    // 0x144928: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x144928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_14492c:
    // 0x14492c: 0xc0cbb08  jal         func_32EC20
label_144930:
    if (ctx->pc == 0x144930u) {
        ctx->pc = 0x144930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14492Cu;
        // 0x144930: 0xa2600170  sb          $zero, 0x170($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 368), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144934u;
        goto label_144934;
    }
    ctx->pc = 0x14492Cu;
    SET_GPR_U32(ctx, 31, 0x144934u);
    ctx->pc = 0x144930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14492Cu;
    // 0x144930: 0xa2600170  sb          $zero, 0x170($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 368), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC20u, 0x14492Cu, 0x144934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144934u;
label_144934:
    // 0x144934: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x144934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_144938:
    // 0x144938: 0x24020a02  addiu       $v0, $zero, 0xA02
    ctx->pc = 0x144938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
label_14493c:
    // 0x14493c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x14493cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_144940:
    // 0x144940: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_144944:
    if (ctx->pc == 0x144944u) {
        ctx->pc = 0x144948u;
        goto label_144948;
    }
    ctx->pc = 0x144940u;
    {
        const bool branch_taken_0x144940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x144940) {
            ctx->pc = 0x144958u;
            goto label_144958;
        }
    }
    ctx->pc = 0x144948u;
label_144948:
    // 0x144948: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x144948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_14494c:
    // 0x14494c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_144950:
    // 0x144950: 0xa6620030  sh          $v0, 0x30($s3)
    ctx->pc = 0x144950u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
label_144954:
    // 0x144954: 0x0  nop
    ctx->pc = 0x144954u;
    // NOP
label_144958:
    // 0x144958: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x144958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_14495c:
    // 0x14495c: 0xc053b28  jal         func_14ECA0
label_144960:
    if (ctx->pc == 0x144960u) {
        ctx->pc = 0x144960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14495Cu;
        // 0x144960: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144964u;
        goto label_144964;
    }
    ctx->pc = 0x14495Cu;
    SET_GPR_U32(ctx, 31, 0x144964u);
    ctx->pc = 0x144960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14495Cu;
    // 0x144960: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x14495Cu, 0x144964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144964u;
label_144964:
    // 0x144964: 0x92820003  lbu         $v0, 0x3($s4)
    ctx->pc = 0x144964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_144968:
    // 0x144968: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_14496c:
    if (ctx->pc == 0x14496Cu) {
        ctx->pc = 0x144970u;
        goto label_144970;
    }
    ctx->pc = 0x144968u;
    {
        const bool branch_taken_0x144968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144968) {
            ctx->pc = 0x1449B8u;
            goto label_1449b8;
        }
    }
    ctx->pc = 0x144970u;
label_144970:
    // 0x144970: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144974:
    // 0x144974: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x144974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_144978:
    // 0x144978: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_14497c:
    if (ctx->pc == 0x14497Cu) {
        ctx->pc = 0x14497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144978u;
        // 0x14497c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144980u;
        goto label_144980;
    }
    ctx->pc = 0x144978u;
    {
        const bool branch_taken_0x144978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144978u;
        // 0x14497c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144978) {
            ctx->pc = 0x144990u;
            goto label_144990;
        }
    }
    ctx->pc = 0x144980u;
label_144980:
    // 0x144980: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x144980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_144984:
    // 0x144984: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144988:
    // 0x144988: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_14498c:
    // 0x14498c: 0x0  nop
    ctx->pc = 0x14498cu;
    // NOP
label_144990:
    // 0x144990: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144994:
    // 0x144994: 0xae6200ec  sw          $v0, 0xEC($s3)
    ctx->pc = 0x144994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 2));
label_144998:
    // 0x144998: 0x92840003  lbu         $a0, 0x3($s4)
    ctx->pc = 0x144998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_14499c:
    // 0x14499c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x14499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1449a0:
    // 0x1449a0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1449a4:
    // 0x1449a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1449a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1449a8:
    // 0x1449a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1449a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1449ac:
    // 0x1449ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1449acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1449b0:
    // 0x1449b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1449b4:
    if (ctx->pc == 0x1449B4u) {
        ctx->pc = 0x1449B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449B0u;
        // 0x1449b4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449B8u;
        goto label_1449b8;
    }
    ctx->pc = 0x1449B0u;
    {
        const bool branch_taken_0x1449b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449B0u;
        // 0x1449b4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449b0) {
            ctx->pc = 0x1449C0u;
            goto label_1449c0;
        }
    }
    ctx->pc = 0x1449B8u;
label_1449b8:
    // 0x1449b8: 0xae6000ec  sw          $zero, 0xEC($s3)
    ctx->pc = 0x1449b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 0));
label_1449bc:
    // 0x1449bc: 0x0  nop
    ctx->pc = 0x1449bcu;
    // NOP
label_1449c0:
    // 0x1449c0: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x1449c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_1449c4:
    // 0x1449c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1449c8:
    if (ctx->pc == 0x1449C8u) {
        ctx->pc = 0x1449CCu;
        goto label_1449cc;
    }
    ctx->pc = 0x1449C4u;
    {
        const bool branch_taken_0x1449c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1449c4) {
            ctx->pc = 0x144A10u;
            goto label_144a10;
        }
    }
    ctx->pc = 0x1449CCu;
label_1449cc:
    // 0x1449cc: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1449ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1449d0:
    // 0x1449d0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1449d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1449d4:
    // 0x1449d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1449d8:
    if (ctx->pc == 0x1449D8u) {
        ctx->pc = 0x1449D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449D4u;
        // 0x1449d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1449DCu;
        goto label_1449dc;
    }
    ctx->pc = 0x1449D4u;
    {
        const bool branch_taken_0x1449d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449D4u;
        // 0x1449d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449d4) {
            ctx->pc = 0x1449E8u;
            goto label_1449e8;
        }
    }
    ctx->pc = 0x1449DCu;
label_1449dc:
    // 0x1449dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1449dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1449e0:
    // 0x1449e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1449e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1449e4:
    // 0x1449e4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1449e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_1449e8:
    // 0x1449e8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1449e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1449ec:
    // 0x1449ec: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x1449ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
label_1449f0:
    // 0x1449f0: 0x92840004  lbu         $a0, 0x4($s4)
    ctx->pc = 0x1449f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_1449f4:
    // 0x1449f4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1449f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1449f8:
    // 0x1449f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1449f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1449fc:
    // 0x1449fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1449fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_144a00:
    // 0x144a00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_144a04:
    // 0x144a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_144a08:
    // 0x144a08: 0x10000003  b           . + 4 + (0x3 << 2)
label_144a0c:
    if (ctx->pc == 0x144A0Cu) {
        ctx->pc = 0x144A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A08u;
        // 0x144a0c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A10u;
        goto label_144a10;
    }
    ctx->pc = 0x144A08u;
    {
        const bool branch_taken_0x144a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A08u;
        // 0x144a0c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a08) {
            ctx->pc = 0x144A18u;
            goto label_144a18;
        }
    }
    ctx->pc = 0x144A10u;
label_144a10:
    // 0x144a10: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x144a10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_144a14:
    // 0x144a14: 0x0  nop
    ctx->pc = 0x144a14u;
    // NOP
label_144a18:
    // 0x144a18: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x144a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_144a1c:
    // 0x144a1c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_144a20:
    if (ctx->pc == 0x144A20u) {
        ctx->pc = 0x144A24u;
        goto label_144a24;
    }
    ctx->pc = 0x144A1Cu;
    {
        const bool branch_taken_0x144a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a1c) {
            ctx->pc = 0x144AA0u;
            goto label_144aa0;
        }
    }
    ctx->pc = 0x144A24u;
label_144a24:
    // 0x144a24: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144a28:
    // 0x144a28: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x144a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_144a2c:
    // 0x144a2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_144a30:
    if (ctx->pc == 0x144A30u) {
        ctx->pc = 0x144A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A2Cu;
        // 0x144a30: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A34u;
        goto label_144a34;
    }
    ctx->pc = 0x144A2Cu;
    {
        const bool branch_taken_0x144a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A2Cu;
        // 0x144a30: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a2c) {
            ctx->pc = 0x144A40u;
            goto label_144a40;
        }
    }
    ctx->pc = 0x144A34u;
label_144a34:
    // 0x144a34: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x144a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_144a38:
    // 0x144a38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144a3c:
    // 0x144a3c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144a40:
    // 0x144a40: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x144a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144a44:
    // 0x144a44: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x144a44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_144a48:
    // 0x144a48: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x144a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_144a4c:
    // 0x144a4c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x144a4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_144a50:
    // 0x144a50: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_144a54:
    if (ctx->pc == 0x144A54u) {
        ctx->pc = 0x144A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A50u;
        // 0x144a54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A58u;
        goto label_144a58;
    }
    ctx->pc = 0x144A50u;
    {
        const bool branch_taken_0x144a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A50u;
        // 0x144a54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a50) {
            ctx->pc = 0x144AA8u;
            goto label_144aa8;
        }
    }
    ctx->pc = 0x144A58u;
label_144a58:
    // 0x144a58: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x144a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144a5c:
    // 0x144a5c: 0xc05e664  jal         func_179990
label_144a60:
    if (ctx->pc == 0x144A60u) {
        ctx->pc = 0x144A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A5Cu;
        // 0x144a60: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A64u;
        goto label_144a64;
    }
    ctx->pc = 0x144A5Cu;
    SET_GPR_U32(ctx, 31, 0x144A64u);
    ctx->pc = 0x144A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A5Cu;
    // 0x144a60: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x144A5Cu, 0x144A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A64u;
label_144a64:
    // 0x144a64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_144a68:
    if (ctx->pc == 0x144A68u) {
        ctx->pc = 0x144A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A64u;
        // 0x144a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144A6Cu;
        goto label_144a6c;
    }
    ctx->pc = 0x144A64u;
    {
        const bool branch_taken_0x144a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A64u;
        // 0x144a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a64) {
            ctx->pc = 0x144A78u;
            goto label_144a78;
        }
    }
    ctx->pc = 0x144A6Cu;
label_144a6c:
    // 0x144a6c: 0xc05ef98  jal         func_17BE60
label_144a70:
    if (ctx->pc == 0x144A70u) {
        ctx->pc = 0x144A74u;
        goto label_144a74;
    }
    ctx->pc = 0x144A6Cu;
    SET_GPR_U32(ctx, 31, 0x144A74u);
    ctx->pc = 0x17BE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BE60u, 0x144A6Cu, 0x144A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A74u;
label_144a74:
    // 0x144a74: 0x0  nop
    ctx->pc = 0x144a74u;
    // NOP
label_144a78:
    // 0x144a78: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x144a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144a7c:
    // 0x144a7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x144a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_144a80:
    // 0x144a80: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x144a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_144a84:
    // 0x144a84: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144a88:
    // 0x144a88: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x144a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_144a8c:
    // 0x144a8c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x144a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_144a90:
    // 0x144a90: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_144a94:
    if (ctx->pc == 0x144A94u) {
        ctx->pc = 0x144A98u;
        goto label_144a98;
    }
    ctx->pc = 0x144A90u;
    {
        const bool branch_taken_0x144a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144a90) {
            ctx->pc = 0x144A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144a58;
        }
    }
    ctx->pc = 0x144A98u;
label_144a98:
    // 0x144a98: 0x10000003  b           . + 4 + (0x3 << 2)
label_144a9c:
    if (ctx->pc == 0x144A9Cu) {
        ctx->pc = 0x144AA0u;
        goto label_144aa0;
    }
    ctx->pc = 0x144A98u;
    {
        const bool branch_taken_0x144a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a98) {
            ctx->pc = 0x144AA8u;
            goto label_144aa8;
        }
    }
    ctx->pc = 0x144AA0u;
label_144aa0:
    // 0x144aa0: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x144aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_144aa4:
    // 0x144aa4: 0x0  nop
    ctx->pc = 0x144aa4u;
    // NOP
label_144aa8:
    // 0x144aa8: 0x92820006  lbu         $v0, 0x6($s4)
    ctx->pc = 0x144aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
label_144aac:
    // 0x144aac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_144ab0:
    if (ctx->pc == 0x144AB0u) {
        ctx->pc = 0x144AB4u;
        goto label_144ab4;
    }
    ctx->pc = 0x144AACu;
    {
        const bool branch_taken_0x144aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144aac) {
            ctx->pc = 0x144AF8u;
            goto label_144af8;
        }
    }
    ctx->pc = 0x144AB4u;
label_144ab4:
    // 0x144ab4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144ab8:
    // 0x144ab8: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x144ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_144abc:
    // 0x144abc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_144ac0:
    if (ctx->pc == 0x144AC0u) {
        ctx->pc = 0x144AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144ABCu;
        // 0x144ac0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AC4u;
        goto label_144ac4;
    }
    ctx->pc = 0x144ABCu;
    {
        const bool branch_taken_0x144abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144ABCu;
        // 0x144ac0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144abc) {
            ctx->pc = 0x144AD0u;
            goto label_144ad0;
        }
    }
    ctx->pc = 0x144AC4u;
label_144ac4:
    // 0x144ac4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x144ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_144ac8:
    // 0x144ac8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144acc:
    // 0x144acc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144ad0:
    // 0x144ad0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x144ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144ad4:
    // 0x144ad4: 0x92860006  lbu         $a2, 0x6($s4)
    ctx->pc = 0x144ad4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
label_144ad8:
    // 0x144ad8: 0x92870007  lbu         $a3, 0x7($s4)
    ctx->pc = 0x144ad8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
label_144adc:
    // 0x144adc: 0x92880008  lbu         $t0, 0x8($s4)
    ctx->pc = 0x144adcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_144ae0:
    // 0x144ae0: 0x92890009  lbu         $t1, 0x9($s4)
    ctx->pc = 0x144ae0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
label_144ae4:
    // 0x144ae4: 0xc05ff8c  jal         func_17FE30
label_144ae8:
    if (ctx->pc == 0x144AE8u) {
        ctx->pc = 0x144AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AE4u;
        // 0x144ae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144AECu;
        goto label_144aec;
    }
    ctx->pc = 0x144AE4u;
    SET_GPR_U32(ctx, 31, 0x144AECu);
    ctx->pc = 0x144AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AE4u;
    // 0x144ae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FE30u, 0x144AE4u, 0x144AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AECu;
label_144aec:
    // 0x144aec: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144af0:
    // 0x144af0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144af4:
    // 0x144af4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144af8:
    // 0x144af8: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x144af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
label_144afc:
    // 0x144afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x144afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_144b00:
    // 0x144b00: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
label_144b04:
    if (ctx->pc == 0x144B04u) {
        ctx->pc = 0x144B08u;
        goto label_144b08;
    }
    ctx->pc = 0x144B00u;
    {
        const bool branch_taken_0x144b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144b00) {
            ctx->pc = 0x144E68u;
            goto label_144e68;
        }
    }
    ctx->pc = 0x144B08u;
label_144b08:
    // 0x144b08: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144b0c:
    // 0x144b0c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x144b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_144b10:
    // 0x144b10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_144b14:
    if (ctx->pc == 0x144B14u) {
        ctx->pc = 0x144B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B10u;
        // 0x144b14: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B18u;
        goto label_144b18;
    }
    ctx->pc = 0x144B10u;
    {
        const bool branch_taken_0x144b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B10u;
        // 0x144b14: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b10) {
            ctx->pc = 0x144B28u;
            goto label_144b28;
        }
    }
    ctx->pc = 0x144B18u;
label_144b18:
    // 0x144b18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x144b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_144b1c:
    // 0x144b1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144b20:
    // 0x144b20: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144b24:
    // 0x144b24: 0x0  nop
    ctx->pc = 0x144b24u;
    // NOP
label_144b28:
    // 0x144b28: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x144b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144b2c:
    // 0x144b2c: 0xc05e664  jal         func_179990
label_144b30:
    if (ctx->pc == 0x144B30u) {
        ctx->pc = 0x144B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B2Cu;
        // 0x144b30: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B34u;
        goto label_144b34;
    }
    ctx->pc = 0x144B2Cu;
    SET_GPR_U32(ctx, 31, 0x144B34u);
    ctx->pc = 0x144B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B2Cu;
    // 0x144b30: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x144B2Cu, 0x144B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B34u;
label_144b34:
    // 0x144b34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_144b38:
    if (ctx->pc == 0x144B38u) {
        ctx->pc = 0x144B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B34u;
        // 0x144b38: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B3Cu;
        goto label_144b3c;
    }
    ctx->pc = 0x144B34u;
    {
        const bool branch_taken_0x144b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B34u;
        // 0x144b38: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b34) {
            ctx->pc = 0x144B50u;
            goto label_144b50;
        }
    }
    ctx->pc = 0x144B3Cu;
label_144b3c:
    // 0x144b3c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x144b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_144b40:
    // 0x144b40: 0x24845fd0  addiu       $a0, $a0, 0x5FD0
    ctx->pc = 0x144b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24528));
label_144b44:
    // 0x144b44: 0x24637850  addiu       $v1, $v1, 0x7850
    ctx->pc = 0x144b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30800));
label_144b48:
    // 0x144b48: 0xac440144  sw          $a0, 0x144($v0)
    ctx->pc = 0x144b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 4));
label_144b4c:
    // 0x144b4c: 0xac430144  sw          $v1, 0x144($v0)
    ctx->pc = 0x144b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 3));
label_144b50:
    // 0x144b50: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x144b50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
label_144b54:
    // 0x144b54: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x144b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144b58:
    // 0x144b58: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x144b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_144b5c:
    // 0x144b5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x144b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_144b60:
    // 0x144b60: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x144b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_144b64:
    // 0x144b64: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x144b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_144b68:
    // 0x144b68: 0xc050ea8  jal         func_143AA0
label_144b6c:
    if (ctx->pc == 0x144B6Cu) {
        ctx->pc = 0x144B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B68u;
        // 0x144b6c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B70u;
        goto label_144b70;
    }
    ctx->pc = 0x144B68u;
    SET_GPR_U32(ctx, 31, 0x144B70u);
    ctx->pc = 0x144B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B68u;
    // 0x144b6c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143AA0u, 0x144B68u, 0x144B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B70u;
label_144b70:
    // 0x144b70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_144b74:
    if (ctx->pc == 0x144B74u) {
        ctx->pc = 0x144B78u;
        goto label_144b78;
    }
    ctx->pc = 0x144B70u;
    {
        const bool branch_taken_0x144b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144b70) {
            ctx->pc = 0x144B80u;
            goto label_144b80;
        }
    }
    ctx->pc = 0x144B78u;
label_144b78:
    // 0x144b78: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_144b7c:
    if (ctx->pc == 0x144B7Cu) {
        ctx->pc = 0x144B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B78u;
        // 0x144b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B80u;
        goto label_144b80;
    }
    ctx->pc = 0x144B78u;
    {
        const bool branch_taken_0x144b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B78u;
        // 0x144b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b78) {
            ctx->pc = 0x144E98u;
            goto label_144e98;
        }
    }
    ctx->pc = 0x144B80u;
label_144b80:
    // 0x144b80: 0x93a600b7  lbu         $a2, 0xB7($sp)
    ctx->pc = 0x144b80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 183)));
label_144b84:
    // 0x144b84: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x144b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_144b88:
    // 0x144b88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x144b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_144b8c:
    // 0x144b8c: 0xc050fb0  jal         func_143EC0
label_144b90:
    if (ctx->pc == 0x144B90u) {
        ctx->pc = 0x144B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B8Cu;
        // 0x144b90: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B94u;
        goto label_144b94;
    }
    ctx->pc = 0x144B8Cu;
    SET_GPR_U32(ctx, 31, 0x144B94u);
    ctx->pc = 0x144B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B8Cu;
    // 0x144b90: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143EC0u, 0x144B8Cu, 0x144B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B94u;
label_144b94:
    // 0x144b94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_144b98:
    if (ctx->pc == 0x144B98u) {
        ctx->pc = 0x144B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B94u;
        // 0x144b98: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144B9Cu;
        goto label_144b9c;
    }
    ctx->pc = 0x144B94u;
    {
        const bool branch_taken_0x144b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B94u;
        // 0x144b98: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b94) {
            ctx->pc = 0x144BB0u;
            goto label_144bb0;
        }
    }
    ctx->pc = 0x144B9Cu;
label_144b9c:
    // 0x144b9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144ba0:
    // 0x144ba0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x144ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
label_144ba4:
    // 0x144ba4: 0xc04cd28  jal         func_1334A0
label_144ba8:
    if (ctx->pc == 0x144BA8u) {
        ctx->pc = 0x144BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BA4u;
        // 0x144ba8: 0x2406200a  addiu       $a2, $zero, 0x200A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8202));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BACu;
        goto label_144bac;
    }
    ctx->pc = 0x144BA4u;
    SET_GPR_U32(ctx, 31, 0x144BACu);
    ctx->pc = 0x144BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BA4u;
    // 0x144ba8: 0x2406200a  addiu       $a2, $zero, 0x200A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8202));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x144BA4u, 0x144BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BACu;
label_144bac:
    // 0x144bac: 0x0  nop
    ctx->pc = 0x144bacu;
    // NOP
label_144bb0:
    // 0x144bb0: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x144bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144bb4:
    // 0x144bb4: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x144bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_144bb8:
    // 0x144bb8: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x144bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144bbc:
    // 0x144bbc: 0xc0a763c  jal         func_29D8F0
label_144bc0:
    if (ctx->pc == 0x144BC0u) {
        ctx->pc = 0x144BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BBCu;
        // 0x144bc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BC4u;
        goto label_144bc4;
    }
    ctx->pc = 0x144BBCu;
    SET_GPR_U32(ctx, 31, 0x144BC4u);
    ctx->pc = 0x144BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BBCu;
    // 0x144bc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D8F0u, 0x144BBCu, 0x144BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BC4u;
label_144bc4:
    // 0x144bc4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144bc8:
    // 0x144bc8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x144bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
label_144bcc:
    // 0x144bcc: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x144bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_144bd0:
    // 0x144bd0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x144bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
label_144bd4:
    // 0x144bd4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x144bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_144bd8:
    // 0x144bd8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x144bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_144bdc:
    // 0x144bdc: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x144bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_144be0:
    // 0x144be0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x144be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_144be4:
    // 0x144be4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144be8:
    // 0x144be8: 0xc04cd28  jal         func_1334A0
label_144bec:
    if (ctx->pc == 0x144BECu) {
        ctx->pc = 0x144BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BE8u;
        // 0x144bec: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BF0u;
        goto label_144bf0;
    }
    ctx->pc = 0x144BE8u;
    SET_GPR_U32(ctx, 31, 0x144BF0u);
    ctx->pc = 0x144BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BE8u;
    // 0x144bec: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x144BE8u, 0x144BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BF0u;
label_144bf0:
    // 0x144bf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_144bf4:
    if (ctx->pc == 0x144BF4u) {
        ctx->pc = 0x144BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BF0u;
        // 0x144bf4: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144BF8u;
        goto label_144bf8;
    }
    ctx->pc = 0x144BF0u;
    {
        const bool branch_taken_0x144bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BF0u;
        // 0x144bf4: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bf0) {
            ctx->pc = 0x144C10u;
            goto label_144c10;
        }
    }
    ctx->pc = 0x144BF8u;
label_144bf8:
    // 0x144bf8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x144bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_144bfc:
    // 0x144bfc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x144bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
label_144c00:
    // 0x144c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144c04:
    // 0x144c04: 0xc04cd28  jal         func_1334A0
label_144c08:
    if (ctx->pc == 0x144C08u) {
        ctx->pc = 0x144C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C04u;
        // 0x144c08: 0x3446ff0b  ori         $a2, $v0, 0xFF0B (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65291);
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C0Cu;
        goto label_144c0c;
    }
    ctx->pc = 0x144C04u;
    SET_GPR_U32(ctx, 31, 0x144C0Cu);
    ctx->pc = 0x144C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C04u;
    // 0x144c08: 0x3446ff0b  ori         $a2, $v0, 0xFF0B (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65291);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x144C04u, 0x144C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C0Cu;
label_144c0c:
    // 0x144c0c: 0x0  nop
    ctx->pc = 0x144c0cu;
    // NOP
label_144c10:
    // 0x144c10: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x144c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144c14:
    // 0x144c14: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x144c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_144c18:
    // 0x144c18: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x144c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144c1c:
    // 0x144c1c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_144c20:
    if (ctx->pc == 0x144C20u) {
        ctx->pc = 0x144C24u;
        goto label_144c24;
    }
    ctx->pc = 0x144C1Cu;
    {
        const bool branch_taken_0x144c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144c1c) {
            ctx->pc = 0x144C98u;
            goto label_144c98;
        }
    }
    ctx->pc = 0x144C24u;
label_144c24:
    // 0x144c24: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144c28:
    // 0x144c28: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x144c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_144c2c:
    // 0x144c2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_144c30:
    if (ctx->pc == 0x144C30u) {
        ctx->pc = 0x144C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C2Cu;
        // 0x144c30: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C34u;
        goto label_144c34;
    }
    ctx->pc = 0x144C2Cu;
    {
        const bool branch_taken_0x144c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C2Cu;
        // 0x144c30: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c2c) {
            ctx->pc = 0x144C40u;
            goto label_144c40;
        }
    }
    ctx->pc = 0x144C34u;
label_144c34:
    // 0x144c34: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x144c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_144c38:
    // 0x144c38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144c3c:
    // 0x144c3c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x144c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_144c40:
    // 0x144c40: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x144c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144c44:
    // 0x144c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144c48:
    // 0x144c48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x144c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_144c4c:
    // 0x144c4c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x144c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_144c50:
    // 0x144c50: 0xc0515c4  jal         func_145710
label_144c54:
    if (ctx->pc == 0x144C54u) {
        ctx->pc = 0x144C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C50u;
        // 0x144c54: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C58u;
        goto label_144c58;
    }
    ctx->pc = 0x144C50u;
    SET_GPR_U32(ctx, 31, 0x144C58u);
    ctx->pc = 0x144C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C50u;
    // 0x144c54: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145710u, 0x144C50u, 0x144C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C58u;
label_144c58:
    // 0x144c58: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_144c5c:
    if (ctx->pc == 0x144C5Cu) {
        ctx->pc = 0x144C60u;
        goto label_144c60;
    }
    ctx->pc = 0x144C58u;
    {
        const bool branch_taken_0x144c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144c58) {
            ctx->pc = 0x144C98u;
            goto label_144c98;
        }
    }
    ctx->pc = 0x144C60u;
label_144c60:
    // 0x144c60: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x144c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_144c64:
    // 0x144c64: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144c68:
    // 0x144c68: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x144c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_144c6c:
    // 0x144c6c: 0x8ca6008c  lw          $a2, 0x8C($a1)
    ctx->pc = 0x144c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_144c70:
    // 0x144c70: 0xc05f74c  jal         func_17DD30
label_144c74:
    if (ctx->pc == 0x144C74u) {
        ctx->pc = 0x144C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C70u;
        // 0x144c74: 0x24470014  addiu       $a3, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144C78u;
        goto label_144c78;
    }
    ctx->pc = 0x144C70u;
    SET_GPR_U32(ctx, 31, 0x144C78u);
    ctx->pc = 0x144C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144C70u;
    // 0x144c74: 0x24470014  addiu       $a3, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DD30u, 0x144C70u, 0x144C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C78u;
label_144c78:
    // 0x144c78: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x144c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_144c7c:
    // 0x144c7c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x144c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_144c80:
    // 0x144c80: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x144c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_144c84:
    // 0x144c84: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_144c88:
    if (ctx->pc == 0x144C88u) {
        ctx->pc = 0x144C8Cu;
        goto label_144c8c;
    }
    ctx->pc = 0x144C84u;
    {
        const bool branch_taken_0x144c84 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x144c84) {
            ctx->pc = 0x144C98u;
            goto label_144c98;
        }
    }
    ctx->pc = 0x144C8Cu;
label_144c8c:
    // 0x144c8c: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x144c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_144c90:
    // 0x144c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x144c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144c94:
    // 0x144c94: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x144c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_144c98:
    // 0x144c98: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x144c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_144c9c:
    // 0x144c9c: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x144c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_144ca0:
    // 0x144ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144ca4:
    // 0x144ca4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x144ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_144ca8:
    // 0x144ca8: 0xc050ed4  jal         func_143B50
label_144cac:
    if (ctx->pc == 0x144CACu) {
        ctx->pc = 0x144CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CA8u;
        // 0x144cac: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144CB0u;
        goto label_144cb0;
    }
    ctx->pc = 0x144CA8u;
    SET_GPR_U32(ctx, 31, 0x144CB0u);
    ctx->pc = 0x144CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CA8u;
    // 0x144cac: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x144CA8u, 0x144CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CB0u;
label_144cb0:
    // 0x144cb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144cb4:
    // 0x144cb4: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_144cb8:
    if (ctx->pc == 0x144CB8u) {
        ctx->pc = 0x144CBCu;
        goto label_144cbc;
    }
    ctx->pc = 0x144CB4u;
    {
        const bool branch_taken_0x144cb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x144cb4) {
            ctx->pc = 0x144D00u;
            goto label_144d00;
        }
    }
    ctx->pc = 0x144CBCu;
label_144cbc:
    // 0x144cbc: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x144cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_144cc0:
    // 0x144cc0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_144cc4:
    if (ctx->pc == 0x144CC4u) {
        ctx->pc = 0x144CC8u;
        goto label_144cc8;
    }
    ctx->pc = 0x144CC0u;
    {
        const bool branch_taken_0x144cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144cc0) {
            ctx->pc = 0x144D00u;
            goto label_144d00;
        }
    }
    ctx->pc = 0x144CC8u;
label_144cc8:
    // 0x144cc8: 0xc0b8b18  jal         func_2E2C60
label_144ccc:
    if (ctx->pc == 0x144CCCu) {
        ctx->pc = 0x144CD0u;
        goto label_144cd0;
    }
    ctx->pc = 0x144CC8u;
    SET_GPR_U32(ctx, 31, 0x144CD0u);
    ctx->pc = 0x2E2C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2C60u, 0x144CC8u, 0x144CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CD0u;
label_144cd0:
    // 0x144cd0: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x144cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144cd4:
    // 0x144cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144cd8:
    // 0x144cd8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x144cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_144cdc:
    // 0x144cdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x144cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144ce0:
    // 0x144ce0: 0xc0515c4  jal         func_145710
label_144ce4:
    if (ctx->pc == 0x144CE4u) {
        ctx->pc = 0x144CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CE0u;
        // 0x144ce4: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144CE8u;
        goto label_144ce8;
    }
    ctx->pc = 0x144CE0u;
    SET_GPR_U32(ctx, 31, 0x144CE8u);
    ctx->pc = 0x144CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CE0u;
    // 0x144ce4: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145710u, 0x144CE0u, 0x144CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CE8u;
label_144ce8:
    // 0x144ce8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x144ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_144cec:
    // 0x144cec: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x144cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_144cf0:
    // 0x144cf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_144cf4:
    if (ctx->pc == 0x144CF4u) {
        ctx->pc = 0x144CF8u;
        goto label_144cf8;
    }
    ctx->pc = 0x144CF0u;
    {
        const bool branch_taken_0x144cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144cf0) {
            ctx->pc = 0x144D00u;
            goto label_144d00;
        }
    }
    ctx->pc = 0x144CF8u;
label_144cf8:
    // 0x144cf8: 0xc0b8a90  jal         func_2E2A40
label_144cfc:
    if (ctx->pc == 0x144CFCu) {
        ctx->pc = 0x144CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CF8u;
        // 0x144cfc: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144D00u;
        goto label_144d00;
    }
    ctx->pc = 0x144CF8u;
    SET_GPR_U32(ctx, 31, 0x144D00u);
    ctx->pc = 0x144CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CF8u;
    // 0x144cfc: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2A40u, 0x144CF8u, 0x144D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D00u;
label_144d00:
    // 0x144d00: 0xc067c84  jal         func_19F210
label_144d04:
    if (ctx->pc == 0x144D04u) {
        ctx->pc = 0x144D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D00u;
        // 0x144d04: 0x8e64004c  lw          $a0, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144D08u;
        goto label_144d08;
    }
    ctx->pc = 0x144D00u;
    SET_GPR_U32(ctx, 31, 0x144D08u);
    ctx->pc = 0x144D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D00u;
    // 0x144d04: 0x8e64004c  lw          $a0, 0x4C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F210u, 0x144D00u, 0x144D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D08u;
label_144d08:
    // 0x144d08: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_144d0c:
    if (ctx->pc == 0x144D0Cu) {
        ctx->pc = 0x144D10u;
        goto label_144d10;
    }
    ctx->pc = 0x144D08u;
    {
        const bool branch_taken_0x144d08 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x144d08) {
            ctx->pc = 0x144D80u;
            goto label_144d80;
        }
    }
    ctx->pc = 0x144D10u;
label_144d10:
    // 0x144d10: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x144d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144d14:
    // 0x144d14: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x144d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_144d18:
    // 0x144d18: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_144d1c:
    if (ctx->pc == 0x144D1Cu) {
        ctx->pc = 0x144D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D18u;
        // 0x144d1c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144D20u;
        goto label_144d20;
    }
    ctx->pc = 0x144D18u;
    {
        const bool branch_taken_0x144d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D18u;
        // 0x144d1c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d18) {
            ctx->pc = 0x144D30u;
            goto label_144d30;
        }
    }
    ctx->pc = 0x144D20u;
label_144d20:
    // 0x144d20: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x144d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_144d24:
    // 0x144d24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x144d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_144d28:
    // 0x144d28: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x144d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_144d2c:
    // 0x144d2c: 0x0  nop
    ctx->pc = 0x144d2cu;
    // NOP
label_144d30:
    // 0x144d30: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x144d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144d34:
    // 0x144d34: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x144d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_144d38:
    // 0x144d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144d3c:
    // 0x144d3c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x144d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_144d40:
    // 0x144d40: 0xc0515c4  jal         func_145710
label_144d44:
    if (ctx->pc == 0x144D44u) {
        ctx->pc = 0x144D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D40u;
        // 0x144d44: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144D48u;
        goto label_144d48;
    }
    ctx->pc = 0x144D40u;
    SET_GPR_U32(ctx, 31, 0x144D48u);
    ctx->pc = 0x144D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D40u;
    // 0x144d44: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145710u, 0x144D40u, 0x144D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D48u;
label_144d48:
    // 0x144d48: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x144d48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_144d4c:
    // 0x144d4c: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x144d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_144d50:
    // 0x144d50: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_144d54:
    if (ctx->pc == 0x144D54u) {
        ctx->pc = 0x144D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D50u;
        // 0x144d54: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144D58u;
        goto label_144d58;
    }
    ctx->pc = 0x144D50u;
    {
        const bool branch_taken_0x144d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D50u;
        // 0x144d54: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d50) {
            ctx->pc = 0x144D80u;
            goto label_144d80;
        }
    }
    ctx->pc = 0x144D58u;
label_144d58:
    // 0x144d58: 0xc05e664  jal         func_179990
label_144d5c:
    if (ctx->pc == 0x144D5Cu) {
        ctx->pc = 0x144D60u;
        goto label_144d60;
    }
    ctx->pc = 0x144D58u;
    SET_GPR_U32(ctx, 31, 0x144D60u);
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x144D58u, 0x144D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D60u;
label_144d60:
    // 0x144d60: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x144d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_144d64:
    // 0x144d64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x144d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144d68:
    // 0x144d68: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x144d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144d6c:
    // 0x144d6c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x144d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_144d70:
    // 0x144d70: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x144d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_144d74:
    // 0x144d74: 0xc067d48  jal         func_19F520
label_144d78:
    if (ctx->pc == 0x144D78u) {
        ctx->pc = 0x144D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D74u;
        // 0x144d78: 0x24850018  addiu       $a1, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144D7Cu;
        goto label_144d7c;
    }
    ctx->pc = 0x144D74u;
    SET_GPR_U32(ctx, 31, 0x144D7Cu);
    ctx->pc = 0x144D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D74u;
    // 0x144d78: 0x24850018  addiu       $a1, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F520u, 0x144D74u, 0x144D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D7Cu;
label_144d7c:
    // 0x144d7c: 0x0  nop
    ctx->pc = 0x144d7cu;
    // NOP
label_144d80:
    // 0x144d80: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x144d80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_144d84:
    // 0x144d84: 0xc06737c  jal         func_19CDF0
label_144d88:
    if (ctx->pc == 0x144D88u) {
        ctx->pc = 0x144D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D84u;
        // 0x144d88: 0x92640001  lbu         $a0, 0x1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144D8Cu;
        goto label_144d8c;
    }
    ctx->pc = 0x144D84u;
    SET_GPR_U32(ctx, 31, 0x144D8Cu);
    ctx->pc = 0x144D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D84u;
    // 0x144d88: 0x92640001  lbu         $a0, 0x1($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDF0u, 0x144D84u, 0x144D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D8Cu;
label_144d8c:
    // 0x144d8c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_144d90:
    if (ctx->pc == 0x144D90u) {
        ctx->pc = 0x144D94u;
        goto label_144d94;
    }
    ctx->pc = 0x144D8Cu;
    {
        const bool branch_taken_0x144d8c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x144d8c) {
            ctx->pc = 0x144E00u;
            goto label_144e00;
        }
    }
    ctx->pc = 0x144D94u;
label_144d94:
    // 0x144d94: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x144d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144d98:
    // 0x144d98: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x144d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_144d9c:
    // 0x144d9c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_144da0:
    if (ctx->pc == 0x144DA0u) {
        ctx->pc = 0x144DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D9Cu;
        // 0x144da0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144DA4u;
        goto label_144da4;
    }
    ctx->pc = 0x144D9Cu;
    {
        const bool branch_taken_0x144d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D9Cu;
        // 0x144da0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d9c) {
            ctx->pc = 0x144DB0u;
            goto label_144db0;
        }
    }
    ctx->pc = 0x144DA4u;
label_144da4:
    // 0x144da4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x144da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_144da8:
    // 0x144da8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x144da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_144dac:
    // 0x144dac: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x144dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_144db0:
    // 0x144db0: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x144db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144db4:
    // 0x144db4: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x144db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_144db8:
    // 0x144db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144dbc:
    // 0x144dbc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x144dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_144dc0:
    // 0x144dc0: 0xc0515c4  jal         func_145710
label_144dc4:
    if (ctx->pc == 0x144DC4u) {
        ctx->pc = 0x144DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DC0u;
        // 0x144dc4: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144DC8u;
        goto label_144dc8;
    }
    ctx->pc = 0x144DC0u;
    SET_GPR_U32(ctx, 31, 0x144DC8u);
    ctx->pc = 0x144DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DC0u;
    // 0x144dc4: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145710u, 0x144DC0u, 0x144DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DC8u;
label_144dc8:
    // 0x144dc8: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x144dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
label_144dcc:
    // 0x144dcc: 0x8e65006c  lw          $a1, 0x6C($s3)
    ctx->pc = 0x144dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_144dd0:
    // 0x144dd0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_144dd4:
    if (ctx->pc == 0x144DD4u) {
        ctx->pc = 0x144DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DD0u;
        // 0x144dd4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144DD8u;
        goto label_144dd8;
    }
    ctx->pc = 0x144DD0u;
    {
        const bool branch_taken_0x144dd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DD0u;
        // 0x144dd4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dd0) {
            ctx->pc = 0x144E00u;
            goto label_144e00;
        }
    }
    ctx->pc = 0x144DD8u;
label_144dd8:
    // 0x144dd8: 0xc05e664  jal         func_179990
label_144ddc:
    if (ctx->pc == 0x144DDCu) {
        ctx->pc = 0x144DE0u;
        goto label_144de0;
    }
    ctx->pc = 0x144DD8u;
    SET_GPR_U32(ctx, 31, 0x144DE0u);
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x144DD8u, 0x144DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DE0u;
label_144de0:
    // 0x144de0: 0x8e64006c  lw          $a0, 0x6C($s3)
    ctx->pc = 0x144de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_144de4:
    // 0x144de4: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x144de4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_144de8:
    // 0x144de8: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x144de8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_144dec:
    // 0x144dec: 0x92690003  lbu         $t1, 0x3($s3)
    ctx->pc = 0x144decu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_144df0:
    // 0x144df0: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x144df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144df4:
    // 0x144df4: 0xc0673d4  jal         func_19CF50
label_144df8:
    if (ctx->pc == 0x144DF8u) {
        ctx->pc = 0x144DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DF4u;
        // 0x144df8: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144DFCu;
        goto label_144dfc;
    }
    ctx->pc = 0x144DF4u;
    SET_GPR_U32(ctx, 31, 0x144DFCu);
    ctx->pc = 0x144DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DF4u;
    // 0x144df8: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CF50u, 0x144DF4u, 0x144DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DFCu;
label_144dfc:
    // 0x144dfc: 0x0  nop
    ctx->pc = 0x144dfcu;
    // NOP
label_144e00:
    // 0x144e00: 0x92660002  lbu         $a2, 0x2($s3)
    ctx->pc = 0x144e00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_144e04:
    // 0x144e04: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x144e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144e08:
    // 0x144e08: 0xc071238  jal         func_1C48E0
label_144e0c:
    if (ctx->pc == 0x144E0Cu) {
        ctx->pc = 0x144E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E08u;
        // 0x144e0c: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144E10u;
        goto label_144e10;
    }
    ctx->pc = 0x144E08u;
    SET_GPR_U32(ctx, 31, 0x144E10u);
    ctx->pc = 0x144E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E08u;
    // 0x144e0c: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48E0u, 0x144E08u, 0x144E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E10u;
label_144e10:
    // 0x144e10: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_144e14:
    if (ctx->pc == 0x144E14u) {
        ctx->pc = 0x144E18u;
        goto label_144e18;
    }
    ctx->pc = 0x144E10u;
    {
        const bool branch_taken_0x144e10 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x144e10) {
            ctx->pc = 0x144E78u;
            goto label_144e78;
        }
    }
    ctx->pc = 0x144E18u;
label_144e18:
    // 0x144e18: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144e1c:
    // 0x144e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144e20:
    // 0x144e20: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x144e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_144e24:
    // 0x144e24: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x144e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_144e28:
    // 0x144e28: 0xc0515c4  jal         func_145710
label_144e2c:
    if (ctx->pc == 0x144E2Cu) {
        ctx->pc = 0x144E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E28u;
        // 0x144e2c: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144E30u;
        goto label_144e30;
    }
    ctx->pc = 0x144E28u;
    SET_GPR_U32(ctx, 31, 0x144E30u);
    ctx->pc = 0x144E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E28u;
    // 0x144e2c: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145710u, 0x144E28u, 0x144E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E30u;
label_144e30:
    // 0x144e30: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x144e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_144e34:
    // 0x144e34: 0x8e650074  lw          $a1, 0x74($s3)
    ctx->pc = 0x144e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_144e38:
    // 0x144e38: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_144e3c:
    if (ctx->pc == 0x144E3Cu) {
        ctx->pc = 0x144E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E38u;
        // 0x144e3c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144E40u;
        goto label_144e40;
    }
    ctx->pc = 0x144E38u;
    {
        const bool branch_taken_0x144e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E38u;
        // 0x144e3c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e38) {
            ctx->pc = 0x144E78u;
            goto label_144e78;
        }
    }
    ctx->pc = 0x144E40u;
label_144e40:
    // 0x144e40: 0xc05e664  jal         func_179990
label_144e44:
    if (ctx->pc == 0x144E44u) {
        ctx->pc = 0x144E48u;
        goto label_144e48;
    }
    ctx->pc = 0x144E40u;
    SET_GPR_U32(ctx, 31, 0x144E48u);
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x144E40u, 0x144E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E48u;
label_144e48:
    // 0x144e48: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x144e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_144e4c:
    // 0x144e4c: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x144e4cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_144e50:
    // 0x144e50: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x144e50u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_144e54:
    // 0x144e54: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x144e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_144e58:
    // 0x144e58: 0xc070e50  jal         func_1C3940
label_144e5c:
    if (ctx->pc == 0x144E5Cu) {
        ctx->pc = 0x144E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E58u;
        // 0x144e5c: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144E60u;
        goto label_144e60;
    }
    ctx->pc = 0x144E58u;
    SET_GPR_U32(ctx, 31, 0x144E60u);
    ctx->pc = 0x144E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E58u;
    // 0x144e5c: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3940u, 0x144E58u, 0x144E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E60u;
label_144e60:
    // 0x144e60: 0x10000005  b           . + 4 + (0x5 << 2)
label_144e64:
    if (ctx->pc == 0x144E64u) {
        ctx->pc = 0x144E68u;
        goto label_144e68;
    }
    ctx->pc = 0x144E60u;
    {
        const bool branch_taken_0x144e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e60) {
            ctx->pc = 0x144E78u;
            goto label_144e78;
        }
    }
    ctx->pc = 0x144E68u;
label_144e68:
    // 0x144e68: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x144e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_144e6c:
    // 0x144e6c: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x144e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_144e70:
    // 0x144e70: 0xc050ea8  jal         func_143AA0
label_144e74:
    if (ctx->pc == 0x144E74u) {
        ctx->pc = 0x144E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E70u;
        // 0x144e74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144E78u;
        goto label_144e78;
    }
    ctx->pc = 0x144E70u;
    SET_GPR_U32(ctx, 31, 0x144E78u);
    ctx->pc = 0x144E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E70u;
    // 0x144e74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143AA0u, 0x144E70u, 0x144E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E78u;
label_144e78:
    // 0x144e78: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x144e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_144e7c:
    // 0x144e7c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x144e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144e80:
    // 0x144e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_144e84:
    // 0x144e84: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x144e84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_144e88:
    // 0x144e88: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_144e8c:
    if (ctx->pc == 0x144E8Cu) {
        ctx->pc = 0x144E90u;
        goto label_144e90;
    }
    ctx->pc = 0x144E88u;
    {
        const bool branch_taken_0x144e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e88) {
            ctx->pc = 0x144E94u;
            goto label_144e94;
        }
    }
    ctx->pc = 0x144E90u;
label_144e90:
    // 0x144e90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x144e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144e94:
    // 0x144e94: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x144e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_144e98:
    // 0x144e98: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x144e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_144e9c:
    // 0x144e9c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x144e9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_144ea0:
    // 0x144ea0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x144ea0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_144ea4:
    // 0x144ea4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x144ea4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_144ea8:
    // 0x144ea8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_144eac:
    // 0x144eac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144eacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_144eb0:
    // 0x144eb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_144eb4:
    // 0x144eb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_144eb8:
    // 0x144eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_144ebc:
    // 0x144ebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_144ec0:
    // 0x144ec0: 0x3e00008  jr          $ra
label_144ec4:
    if (ctx->pc == 0x144EC4u) {
        ctx->pc = 0x144EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EC0u;
        // 0x144ec4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144EC8u;
        goto label_fallthrough_0x144ec0;
    }
    ctx->pc = 0x144EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EC0u;
        // 0x144ec4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144ec0:
    ctx->pc = 0x144EC8u;
}
