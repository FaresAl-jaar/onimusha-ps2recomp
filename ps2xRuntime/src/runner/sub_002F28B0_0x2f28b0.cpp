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

// Function: sub_002F28B0
// Address: 0x2f28b0 - 0x2f2e60
void sub_002F28B0_0x2f28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F28B0_0x2f28b0");
#endif

    switch (ctx->pc) {
        case 0x2f28b0u: goto label_2f28b0;
        case 0x2f28b4u: goto label_2f28b4;
        case 0x2f28b8u: goto label_2f28b8;
        case 0x2f28bcu: goto label_2f28bc;
        case 0x2f28c0u: goto label_2f28c0;
        case 0x2f28c4u: goto label_2f28c4;
        case 0x2f28c8u: goto label_2f28c8;
        case 0x2f28ccu: goto label_2f28cc;
        case 0x2f28d0u: goto label_2f28d0;
        case 0x2f28d4u: goto label_2f28d4;
        case 0x2f28d8u: goto label_2f28d8;
        case 0x2f28dcu: goto label_2f28dc;
        case 0x2f28e0u: goto label_2f28e0;
        case 0x2f28e4u: goto label_2f28e4;
        case 0x2f28e8u: goto label_2f28e8;
        case 0x2f28ecu: goto label_2f28ec;
        case 0x2f28f0u: goto label_2f28f0;
        case 0x2f28f4u: goto label_2f28f4;
        case 0x2f28f8u: goto label_2f28f8;
        case 0x2f28fcu: goto label_2f28fc;
        case 0x2f2900u: goto label_2f2900;
        case 0x2f2904u: goto label_2f2904;
        case 0x2f2908u: goto label_2f2908;
        case 0x2f290cu: goto label_2f290c;
        case 0x2f2910u: goto label_2f2910;
        case 0x2f2914u: goto label_2f2914;
        case 0x2f2918u: goto label_2f2918;
        case 0x2f291cu: goto label_2f291c;
        case 0x2f2920u: goto label_2f2920;
        case 0x2f2924u: goto label_2f2924;
        case 0x2f2928u: goto label_2f2928;
        case 0x2f292cu: goto label_2f292c;
        case 0x2f2930u: goto label_2f2930;
        case 0x2f2934u: goto label_2f2934;
        case 0x2f2938u: goto label_2f2938;
        case 0x2f293cu: goto label_2f293c;
        case 0x2f2940u: goto label_2f2940;
        case 0x2f2944u: goto label_2f2944;
        case 0x2f2948u: goto label_2f2948;
        case 0x2f294cu: goto label_2f294c;
        case 0x2f2950u: goto label_2f2950;
        case 0x2f2954u: goto label_2f2954;
        case 0x2f2958u: goto label_2f2958;
        case 0x2f295cu: goto label_2f295c;
        case 0x2f2960u: goto label_2f2960;
        case 0x2f2964u: goto label_2f2964;
        case 0x2f2968u: goto label_2f2968;
        case 0x2f296cu: goto label_2f296c;
        case 0x2f2970u: goto label_2f2970;
        case 0x2f2974u: goto label_2f2974;
        case 0x2f2978u: goto label_2f2978;
        case 0x2f297cu: goto label_2f297c;
        case 0x2f2980u: goto label_2f2980;
        case 0x2f2984u: goto label_2f2984;
        case 0x2f2988u: goto label_2f2988;
        case 0x2f298cu: goto label_2f298c;
        case 0x2f2990u: goto label_2f2990;
        case 0x2f2994u: goto label_2f2994;
        case 0x2f2998u: goto label_2f2998;
        case 0x2f299cu: goto label_2f299c;
        case 0x2f29a0u: goto label_2f29a0;
        case 0x2f29a4u: goto label_2f29a4;
        case 0x2f29a8u: goto label_2f29a8;
        case 0x2f29acu: goto label_2f29ac;
        case 0x2f29b0u: goto label_2f29b0;
        case 0x2f29b4u: goto label_2f29b4;
        case 0x2f29b8u: goto label_2f29b8;
        case 0x2f29bcu: goto label_2f29bc;
        case 0x2f29c0u: goto label_2f29c0;
        case 0x2f29c4u: goto label_2f29c4;
        case 0x2f29c8u: goto label_2f29c8;
        case 0x2f29ccu: goto label_2f29cc;
        case 0x2f29d0u: goto label_2f29d0;
        case 0x2f29d4u: goto label_2f29d4;
        case 0x2f29d8u: goto label_2f29d8;
        case 0x2f29dcu: goto label_2f29dc;
        case 0x2f29e0u: goto label_2f29e0;
        case 0x2f29e4u: goto label_2f29e4;
        case 0x2f29e8u: goto label_2f29e8;
        case 0x2f29ecu: goto label_2f29ec;
        case 0x2f29f0u: goto label_2f29f0;
        case 0x2f29f4u: goto label_2f29f4;
        case 0x2f29f8u: goto label_2f29f8;
        case 0x2f29fcu: goto label_2f29fc;
        case 0x2f2a00u: goto label_2f2a00;
        case 0x2f2a04u: goto label_2f2a04;
        case 0x2f2a08u: goto label_2f2a08;
        case 0x2f2a0cu: goto label_2f2a0c;
        case 0x2f2a10u: goto label_2f2a10;
        case 0x2f2a14u: goto label_2f2a14;
        case 0x2f2a18u: goto label_2f2a18;
        case 0x2f2a1cu: goto label_2f2a1c;
        case 0x2f2a20u: goto label_2f2a20;
        case 0x2f2a24u: goto label_2f2a24;
        case 0x2f2a28u: goto label_2f2a28;
        case 0x2f2a2cu: goto label_2f2a2c;
        case 0x2f2a30u: goto label_2f2a30;
        case 0x2f2a34u: goto label_2f2a34;
        case 0x2f2a38u: goto label_2f2a38;
        case 0x2f2a3cu: goto label_2f2a3c;
        case 0x2f2a40u: goto label_2f2a40;
        case 0x2f2a44u: goto label_2f2a44;
        case 0x2f2a48u: goto label_2f2a48;
        case 0x2f2a4cu: goto label_2f2a4c;
        case 0x2f2a50u: goto label_2f2a50;
        case 0x2f2a54u: goto label_2f2a54;
        case 0x2f2a58u: goto label_2f2a58;
        case 0x2f2a5cu: goto label_2f2a5c;
        case 0x2f2a60u: goto label_2f2a60;
        case 0x2f2a64u: goto label_2f2a64;
        case 0x2f2a68u: goto label_2f2a68;
        case 0x2f2a6cu: goto label_2f2a6c;
        case 0x2f2a70u: goto label_2f2a70;
        case 0x2f2a74u: goto label_2f2a74;
        case 0x2f2a78u: goto label_2f2a78;
        case 0x2f2a7cu: goto label_2f2a7c;
        case 0x2f2a80u: goto label_2f2a80;
        case 0x2f2a84u: goto label_2f2a84;
        case 0x2f2a88u: goto label_2f2a88;
        case 0x2f2a8cu: goto label_2f2a8c;
        case 0x2f2a90u: goto label_2f2a90;
        case 0x2f2a94u: goto label_2f2a94;
        case 0x2f2a98u: goto label_2f2a98;
        case 0x2f2a9cu: goto label_2f2a9c;
        case 0x2f2aa0u: goto label_2f2aa0;
        case 0x2f2aa4u: goto label_2f2aa4;
        case 0x2f2aa8u: goto label_2f2aa8;
        case 0x2f2aacu: goto label_2f2aac;
        case 0x2f2ab0u: goto label_2f2ab0;
        case 0x2f2ab4u: goto label_2f2ab4;
        case 0x2f2ab8u: goto label_2f2ab8;
        case 0x2f2abcu: goto label_2f2abc;
        case 0x2f2ac0u: goto label_2f2ac0;
        case 0x2f2ac4u: goto label_2f2ac4;
        case 0x2f2ac8u: goto label_2f2ac8;
        case 0x2f2accu: goto label_2f2acc;
        case 0x2f2ad0u: goto label_2f2ad0;
        case 0x2f2ad4u: goto label_2f2ad4;
        case 0x2f2ad8u: goto label_2f2ad8;
        case 0x2f2adcu: goto label_2f2adc;
        case 0x2f2ae0u: goto label_2f2ae0;
        case 0x2f2ae4u: goto label_2f2ae4;
        case 0x2f2ae8u: goto label_2f2ae8;
        case 0x2f2aecu: goto label_2f2aec;
        case 0x2f2af0u: goto label_2f2af0;
        case 0x2f2af4u: goto label_2f2af4;
        case 0x2f2af8u: goto label_2f2af8;
        case 0x2f2afcu: goto label_2f2afc;
        case 0x2f2b00u: goto label_2f2b00;
        case 0x2f2b04u: goto label_2f2b04;
        case 0x2f2b08u: goto label_2f2b08;
        case 0x2f2b0cu: goto label_2f2b0c;
        case 0x2f2b10u: goto label_2f2b10;
        case 0x2f2b14u: goto label_2f2b14;
        case 0x2f2b18u: goto label_2f2b18;
        case 0x2f2b1cu: goto label_2f2b1c;
        case 0x2f2b20u: goto label_2f2b20;
        case 0x2f2b24u: goto label_2f2b24;
        case 0x2f2b28u: goto label_2f2b28;
        case 0x2f2b2cu: goto label_2f2b2c;
        case 0x2f2b30u: goto label_2f2b30;
        case 0x2f2b34u: goto label_2f2b34;
        case 0x2f2b38u: goto label_2f2b38;
        case 0x2f2b3cu: goto label_2f2b3c;
        case 0x2f2b40u: goto label_2f2b40;
        case 0x2f2b44u: goto label_2f2b44;
        case 0x2f2b48u: goto label_2f2b48;
        case 0x2f2b4cu: goto label_2f2b4c;
        case 0x2f2b50u: goto label_2f2b50;
        case 0x2f2b54u: goto label_2f2b54;
        case 0x2f2b58u: goto label_2f2b58;
        case 0x2f2b5cu: goto label_2f2b5c;
        case 0x2f2b60u: goto label_2f2b60;
        case 0x2f2b64u: goto label_2f2b64;
        case 0x2f2b68u: goto label_2f2b68;
        case 0x2f2b6cu: goto label_2f2b6c;
        case 0x2f2b70u: goto label_2f2b70;
        case 0x2f2b74u: goto label_2f2b74;
        case 0x2f2b78u: goto label_2f2b78;
        case 0x2f2b7cu: goto label_2f2b7c;
        case 0x2f2b80u: goto label_2f2b80;
        case 0x2f2b84u: goto label_2f2b84;
        case 0x2f2b88u: goto label_2f2b88;
        case 0x2f2b8cu: goto label_2f2b8c;
        case 0x2f2b90u: goto label_2f2b90;
        case 0x2f2b94u: goto label_2f2b94;
        case 0x2f2b98u: goto label_2f2b98;
        case 0x2f2b9cu: goto label_2f2b9c;
        case 0x2f2ba0u: goto label_2f2ba0;
        case 0x2f2ba4u: goto label_2f2ba4;
        case 0x2f2ba8u: goto label_2f2ba8;
        case 0x2f2bacu: goto label_2f2bac;
        case 0x2f2bb0u: goto label_2f2bb0;
        case 0x2f2bb4u: goto label_2f2bb4;
        case 0x2f2bb8u: goto label_2f2bb8;
        case 0x2f2bbcu: goto label_2f2bbc;
        case 0x2f2bc0u: goto label_2f2bc0;
        case 0x2f2bc4u: goto label_2f2bc4;
        case 0x2f2bc8u: goto label_2f2bc8;
        case 0x2f2bccu: goto label_2f2bcc;
        case 0x2f2bd0u: goto label_2f2bd0;
        case 0x2f2bd4u: goto label_2f2bd4;
        case 0x2f2bd8u: goto label_2f2bd8;
        case 0x2f2bdcu: goto label_2f2bdc;
        case 0x2f2be0u: goto label_2f2be0;
        case 0x2f2be4u: goto label_2f2be4;
        case 0x2f2be8u: goto label_2f2be8;
        case 0x2f2becu: goto label_2f2bec;
        case 0x2f2bf0u: goto label_2f2bf0;
        case 0x2f2bf4u: goto label_2f2bf4;
        case 0x2f2bf8u: goto label_2f2bf8;
        case 0x2f2bfcu: goto label_2f2bfc;
        case 0x2f2c00u: goto label_2f2c00;
        case 0x2f2c04u: goto label_2f2c04;
        case 0x2f2c08u: goto label_2f2c08;
        case 0x2f2c0cu: goto label_2f2c0c;
        case 0x2f2c10u: goto label_2f2c10;
        case 0x2f2c14u: goto label_2f2c14;
        case 0x2f2c18u: goto label_2f2c18;
        case 0x2f2c1cu: goto label_2f2c1c;
        case 0x2f2c20u: goto label_2f2c20;
        case 0x2f2c24u: goto label_2f2c24;
        case 0x2f2c28u: goto label_2f2c28;
        case 0x2f2c2cu: goto label_2f2c2c;
        case 0x2f2c30u: goto label_2f2c30;
        case 0x2f2c34u: goto label_2f2c34;
        case 0x2f2c38u: goto label_2f2c38;
        case 0x2f2c3cu: goto label_2f2c3c;
        case 0x2f2c40u: goto label_2f2c40;
        case 0x2f2c44u: goto label_2f2c44;
        case 0x2f2c48u: goto label_2f2c48;
        case 0x2f2c4cu: goto label_2f2c4c;
        case 0x2f2c50u: goto label_2f2c50;
        case 0x2f2c54u: goto label_2f2c54;
        case 0x2f2c58u: goto label_2f2c58;
        case 0x2f2c5cu: goto label_2f2c5c;
        case 0x2f2c60u: goto label_2f2c60;
        case 0x2f2c64u: goto label_2f2c64;
        case 0x2f2c68u: goto label_2f2c68;
        case 0x2f2c6cu: goto label_2f2c6c;
        case 0x2f2c70u: goto label_2f2c70;
        case 0x2f2c74u: goto label_2f2c74;
        case 0x2f2c78u: goto label_2f2c78;
        case 0x2f2c7cu: goto label_2f2c7c;
        case 0x2f2c80u: goto label_2f2c80;
        case 0x2f2c84u: goto label_2f2c84;
        case 0x2f2c88u: goto label_2f2c88;
        case 0x2f2c8cu: goto label_2f2c8c;
        case 0x2f2c90u: goto label_2f2c90;
        case 0x2f2c94u: goto label_2f2c94;
        case 0x2f2c98u: goto label_2f2c98;
        case 0x2f2c9cu: goto label_2f2c9c;
        case 0x2f2ca0u: goto label_2f2ca0;
        case 0x2f2ca4u: goto label_2f2ca4;
        case 0x2f2ca8u: goto label_2f2ca8;
        case 0x2f2cacu: goto label_2f2cac;
        case 0x2f2cb0u: goto label_2f2cb0;
        case 0x2f2cb4u: goto label_2f2cb4;
        case 0x2f2cb8u: goto label_2f2cb8;
        case 0x2f2cbcu: goto label_2f2cbc;
        case 0x2f2cc0u: goto label_2f2cc0;
        case 0x2f2cc4u: goto label_2f2cc4;
        case 0x2f2cc8u: goto label_2f2cc8;
        case 0x2f2cccu: goto label_2f2ccc;
        case 0x2f2cd0u: goto label_2f2cd0;
        case 0x2f2cd4u: goto label_2f2cd4;
        case 0x2f2cd8u: goto label_2f2cd8;
        case 0x2f2cdcu: goto label_2f2cdc;
        case 0x2f2ce0u: goto label_2f2ce0;
        case 0x2f2ce4u: goto label_2f2ce4;
        case 0x2f2ce8u: goto label_2f2ce8;
        case 0x2f2cecu: goto label_2f2cec;
        case 0x2f2cf0u: goto label_2f2cf0;
        case 0x2f2cf4u: goto label_2f2cf4;
        case 0x2f2cf8u: goto label_2f2cf8;
        case 0x2f2cfcu: goto label_2f2cfc;
        case 0x2f2d00u: goto label_2f2d00;
        case 0x2f2d04u: goto label_2f2d04;
        case 0x2f2d08u: goto label_2f2d08;
        case 0x2f2d0cu: goto label_2f2d0c;
        case 0x2f2d10u: goto label_2f2d10;
        case 0x2f2d14u: goto label_2f2d14;
        case 0x2f2d18u: goto label_2f2d18;
        case 0x2f2d1cu: goto label_2f2d1c;
        case 0x2f2d20u: goto label_2f2d20;
        case 0x2f2d24u: goto label_2f2d24;
        case 0x2f2d28u: goto label_2f2d28;
        case 0x2f2d2cu: goto label_2f2d2c;
        case 0x2f2d30u: goto label_2f2d30;
        case 0x2f2d34u: goto label_2f2d34;
        case 0x2f2d38u: goto label_2f2d38;
        case 0x2f2d3cu: goto label_2f2d3c;
        case 0x2f2d40u: goto label_2f2d40;
        case 0x2f2d44u: goto label_2f2d44;
        case 0x2f2d48u: goto label_2f2d48;
        case 0x2f2d4cu: goto label_2f2d4c;
        case 0x2f2d50u: goto label_2f2d50;
        case 0x2f2d54u: goto label_2f2d54;
        case 0x2f2d58u: goto label_2f2d58;
        case 0x2f2d5cu: goto label_2f2d5c;
        case 0x2f2d60u: goto label_2f2d60;
        case 0x2f2d64u: goto label_2f2d64;
        case 0x2f2d68u: goto label_2f2d68;
        case 0x2f2d6cu: goto label_2f2d6c;
        case 0x2f2d70u: goto label_2f2d70;
        case 0x2f2d74u: goto label_2f2d74;
        case 0x2f2d78u: goto label_2f2d78;
        case 0x2f2d7cu: goto label_2f2d7c;
        case 0x2f2d80u: goto label_2f2d80;
        case 0x2f2d84u: goto label_2f2d84;
        case 0x2f2d88u: goto label_2f2d88;
        case 0x2f2d8cu: goto label_2f2d8c;
        case 0x2f2d90u: goto label_2f2d90;
        case 0x2f2d94u: goto label_2f2d94;
        case 0x2f2d98u: goto label_2f2d98;
        case 0x2f2d9cu: goto label_2f2d9c;
        case 0x2f2da0u: goto label_2f2da0;
        case 0x2f2da4u: goto label_2f2da4;
        case 0x2f2da8u: goto label_2f2da8;
        case 0x2f2dacu: goto label_2f2dac;
        case 0x2f2db0u: goto label_2f2db0;
        case 0x2f2db4u: goto label_2f2db4;
        case 0x2f2db8u: goto label_2f2db8;
        case 0x2f2dbcu: goto label_2f2dbc;
        case 0x2f2dc0u: goto label_2f2dc0;
        case 0x2f2dc4u: goto label_2f2dc4;
        case 0x2f2dc8u: goto label_2f2dc8;
        case 0x2f2dccu: goto label_2f2dcc;
        case 0x2f2dd0u: goto label_2f2dd0;
        case 0x2f2dd4u: goto label_2f2dd4;
        case 0x2f2dd8u: goto label_2f2dd8;
        case 0x2f2ddcu: goto label_2f2ddc;
        case 0x2f2de0u: goto label_2f2de0;
        case 0x2f2de4u: goto label_2f2de4;
        case 0x2f2de8u: goto label_2f2de8;
        case 0x2f2decu: goto label_2f2dec;
        case 0x2f2df0u: goto label_2f2df0;
        case 0x2f2df4u: goto label_2f2df4;
        case 0x2f2df8u: goto label_2f2df8;
        case 0x2f2dfcu: goto label_2f2dfc;
        case 0x2f2e00u: goto label_2f2e00;
        case 0x2f2e04u: goto label_2f2e04;
        case 0x2f2e08u: goto label_2f2e08;
        case 0x2f2e0cu: goto label_2f2e0c;
        case 0x2f2e10u: goto label_2f2e10;
        case 0x2f2e14u: goto label_2f2e14;
        case 0x2f2e18u: goto label_2f2e18;
        case 0x2f2e1cu: goto label_2f2e1c;
        case 0x2f2e20u: goto label_2f2e20;
        case 0x2f2e24u: goto label_2f2e24;
        case 0x2f2e28u: goto label_2f2e28;
        case 0x2f2e2cu: goto label_2f2e2c;
        case 0x2f2e30u: goto label_2f2e30;
        case 0x2f2e34u: goto label_2f2e34;
        case 0x2f2e38u: goto label_2f2e38;
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e40u: goto label_2f2e40;
        case 0x2f2e44u: goto label_2f2e44;
        case 0x2f2e48u: goto label_2f2e48;
        case 0x2f2e4cu: goto label_2f2e4c;
        case 0x2f2e50u: goto label_2f2e50;
        case 0x2f2e54u: goto label_2f2e54;
        case 0x2f2e58u: goto label_2f2e58;
        case 0x2f2e5cu: goto label_2f2e5c;
        default: break;
    }

    ctx->pc = 0x2f28b0u;

label_2f28b0:
    // 0x2f28b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f28b4:
    // 0x2f28b4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2f28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_2f28b8:
    // 0x2f28b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f28bc:
    // 0x2f28bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2f28bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2f28c0:
    // 0x2f28c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f28c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2f28c4:
    // 0x2f28c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f28c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f28c8:
    // 0x2f28c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f28c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2f28cc:
    // 0x2f28cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2f28d0:
    // 0x2f28d0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f28d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f28d4:
    // 0x2f28d4: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x2f28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_2f28d8:
    // 0x2f28d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f28d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f28dc:
    // 0x2f28dc: 0xc0a4d3c  jal         func_2934F0
label_2f28e0:
    if (ctx->pc == 0x2F28E0u) {
        ctx->pc = 0x2F28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28DCu;
        // 0x2f28e0: 0xac8206cc  sw          $v0, 0x6CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F28E4u;
        goto label_2f28e4;
    }
    ctx->pc = 0x2F28DCu;
    SET_GPR_U32(ctx, 31, 0x2F28E4u);
    ctx->pc = 0x2F28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28DCu;
    // 0x2f28e0: 0xac8206cc  sw          $v0, 0x6CC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x2F28DCu, 0x2F28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28E4u;
label_2f28e4:
    // 0x2f28e4: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2f28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_2f28e8:
    // 0x2f28e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2f28e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2f28ec:
    // 0x2f28ec: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x2f28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
label_2f28f0:
    // 0x2f28f0: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2f28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_2f28f4:
    // 0x2f28f4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2f28f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_2f28f8:
    // 0x2f28f8: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x2f28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
label_2f28fc:
    // 0x2f28fc: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2f28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_2f2900:
    // 0x2f2900: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2f2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_2f2904:
    // 0x2f2904: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x2f2904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
label_2f2908:
    // 0x2f2908: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2f2908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_2f290c:
    // 0x2f290c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2f290cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_2f2910:
    // 0x2f2910: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x2f2910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
label_2f2914:
    // 0x2f2914: 0x9662082e  lhu         $v0, 0x82E($s3)
    ctx->pc = 0x2f2914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2094)));
label_2f2918:
    // 0x2f2918: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2f291c:
    if (ctx->pc == 0x2F291Cu) {
        ctx->pc = 0x2F2920u;
        goto label_2f2920;
    }
    ctx->pc = 0x2F2918u;
    {
        const bool branch_taken_0x2f2918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2918) {
            ctx->pc = 0x2F2938u;
            goto label_2f2938;
        }
    }
    ctx->pc = 0x2F2920u;
label_2f2920:
    // 0x2f2920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f2920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f2924:
    // 0x2f2924: 0xa662082e  sh          $v0, 0x82E($s3)
    ctx->pc = 0x2f2924u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2094), (uint16_t)GPR_U32(ctx, 2));
label_2f2928:
    // 0x2f2928: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2f2928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_2f292c:
    // 0x2f292c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2f292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_2f2930:
    // 0x2f2930: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x2f2930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
label_2f2934:
    // 0x2f2934: 0x0  nop
    ctx->pc = 0x2f2934u;
    // NOP
label_2f2938:
    // 0x2f2938: 0x96620828  lhu         $v0, 0x828($s3)
    ctx->pc = 0x2f2938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2088)));
label_2f293c:
    // 0x2f293c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f2940:
    if (ctx->pc == 0x2F2940u) {
        ctx->pc = 0x2F2944u;
        goto label_2f2944;
    }
    ctx->pc = 0x2F293Cu;
    {
        const bool branch_taken_0x2f293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f293c) {
            ctx->pc = 0x2F2958u;
            goto label_2f2958;
        }
    }
    ctx->pc = 0x2F2944u;
label_2f2944:
    // 0x2f2944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f2944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f2948:
    // 0x2f2948: 0xa6620828  sh          $v0, 0x828($s3)
    ctx->pc = 0x2f2948u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2088), (uint16_t)GPR_U32(ctx, 2));
label_2f294c:
    // 0x2f294c: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2f294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_2f2950:
    // 0x2f2950: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2f2950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2f2954:
    // 0x2f2954: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x2f2954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
label_2f2958:
    // 0x2f2958: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2f2958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f295c:
    // 0x2f295c: 0x266600a0  addiu       $a2, $s3, 0xA0
    ctx->pc = 0x2f295cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_2f2960:
    // 0x2f2960: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f2960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f2964:
    // 0x2f2964: 0xc096978  jal         func_25A5E0
label_2f2968:
    if (ctx->pc == 0x2F2968u) {
        ctx->pc = 0x2F2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2964u;
        // 0x2f2968: 0xae6028f4  sw          $zero, 0x28F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 10484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F296Cu;
        goto label_2f296c;
    }
    ctx->pc = 0x2F2964u;
    SET_GPR_U32(ctx, 31, 0x2F296Cu);
    ctx->pc = 0x2F2968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2964u;
    // 0x2f2968: 0xae6028f4  sw          $zero, 0x28F4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 10484), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2F2964u, 0x2F296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F296Cu;
label_2f296c:
    // 0x2f296c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2f296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f2970:
    // 0x2f2970: 0x26660090  addiu       $a2, $s3, 0x90
    ctx->pc = 0x2f2970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f2974:
    // 0x2f2974: 0xc096978  jal         func_25A5E0
label_2f2978:
    if (ctx->pc == 0x2F2978u) {
        ctx->pc = 0x2F2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2974u;
        // 0x2f2978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F297Cu;
        goto label_2f297c;
    }
    ctx->pc = 0x2F2974u;
    SET_GPR_U32(ctx, 31, 0x2F297Cu);
    ctx->pc = 0x2F2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2974u;
    // 0x2f2978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2F2974u, 0x2F297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F297Cu;
label_2f297c:
    // 0x2f297c: 0xc66d0098  lwc1        $f13, 0x98($s3)
    ctx->pc = 0x2f297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f2980:
    // 0x2f2980: 0xc047b88  jal         func_11EE20
label_2f2984:
    if (ctx->pc == 0x2F2984u) {
        ctx->pc = 0x2F2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2980u;
        // 0x2f2984: 0xc66c0090  lwc1        $f12, 0x90($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2988u;
        goto label_2f2988;
    }
    ctx->pc = 0x2F2980u;
    SET_GPR_U32(ctx, 31, 0x2F2988u);
    ctx->pc = 0x2F2984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2980u;
    // 0x2f2984: 0xc66c0090  lwc1        $f12, 0x90($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2F2980u, 0x2F2988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2988u;
label_2f2988:
    // 0x2f2988: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2f2988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_2f298c:
    // 0x2f298c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2f298cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2f2990:
    // 0x2f2990: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f2990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f2994:
    // 0x2f2994: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2f2994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2f2998:
    // 0x2f2998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f299c:
    // 0x2f299c: 0x0  nop
    ctx->pc = 0x2f299cu;
    // NOP
label_2f29a0:
    // 0x2f29a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f29a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2f29a4:
    // 0x2f29a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f29a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2f29a8:
    // 0x2f29a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f29a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f29ac:
    // 0x2f29ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f29acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f29b0:
    // 0x2f29b0: 0x0  nop
    ctx->pc = 0x2f29b0u;
    // NOP
label_2f29b4:
    // 0x2f29b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2f29b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2f29b8:
    // 0x2f29b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2f29b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2f29bc:
    // 0x2f29bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2f29bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_2f29c0:
    // 0x2f29c0: 0xa66200c2  sh          $v0, 0xC2($s3)
    ctx->pc = 0x2f29c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 2));
label_2f29c4:
    // 0x2f29c4: 0x8e6206ac  lw          $v0, 0x6AC($s3)
    ctx->pc = 0x2f29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
label_2f29c8:
    // 0x2f29c8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2f29c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2f29cc:
    // 0x2f29cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2f29d0:
    if (ctx->pc == 0x2F29D0u) {
        ctx->pc = 0x2F29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29CCu;
        // 0x2f29d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29D4u;
        goto label_2f29d4;
    }
    ctx->pc = 0x2F29CCu;
    {
        const bool branch_taken_0x2f29cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29CCu;
        // 0x2f29d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29cc) {
            ctx->pc = 0x2F2A18u;
            goto label_2f2a18;
        }
    }
    ctx->pc = 0x2F29D4u;
label_2f29d4:
    // 0x2f29d4: 0x96620826  lhu         $v0, 0x826($s3)
    ctx->pc = 0x2f29d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2086)));
label_2f29d8:
    // 0x2f29d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2f29dc:
    if (ctx->pc == 0x2F29DCu) {
        ctx->pc = 0x2F29E0u;
        goto label_2f29e0;
    }
    ctx->pc = 0x2F29D8u;
    {
        const bool branch_taken_0x2f29d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f29d8) {
            ctx->pc = 0x2F2A18u;
            goto label_2f2a18;
        }
    }
    ctx->pc = 0x2F29E0u;
label_2f29e0:
    // 0x2f29e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f29e4:
    // 0x2f29e4: 0xa6620826  sh          $v0, 0x826($s3)
    ctx->pc = 0x2f29e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2086), (uint16_t)GPR_U32(ctx, 2));
label_2f29e8:
    // 0x2f29e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f29e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f29ec:
    // 0x2f29ec: 0xc6610094  lwc1        $f1, 0x94($s3)
    ctx->pc = 0x2f29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f29f0:
    // 0x2f29f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f29f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f29f4:
    // 0x2f29f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2f29f8:
    if (ctx->pc == 0x2F29F8u) {
        ctx->pc = 0x2F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29F4u;
        // 0x2f29f8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F29FCu;
        goto label_2f29fc;
    }
    ctx->pc = 0x2F29F4u;
    {
        const bool branch_taken_0x2f29f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F29F4u;
        // 0x2f29f8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29f4) {
            ctx->pc = 0x2F2A18u;
            goto label_2f2a18;
        }
    }
    ctx->pc = 0x2F29FCu;
label_2f29fc:
    // 0x2f29fc: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x2f29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
label_2f2a00:
    // 0x2f2a00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f2a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2f2a04:
    // 0x2f2a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2a08:
    // 0x2f2a08: 0x0  nop
    ctx->pc = 0x2f2a08u;
    // NOP
label_2f2a0c:
    // 0x2f2a0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f2a10:
    // 0x2f2a10: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x2f2a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
label_2f2a14:
    // 0x2f2a14: 0x0  nop
    ctx->pc = 0x2f2a14u;
    // NOP
label_2f2a18:
    // 0x2f2a18: 0x146000bb  bnez        $v1, . + 4 + (0xBB << 2)
label_2f2a1c:
    if (ctx->pc == 0x2F2A1Cu) {
        ctx->pc = 0x2F2A20u;
        goto label_2f2a20;
    }
    ctx->pc = 0x2F2A18u;
    {
        const bool branch_taken_0x2f2a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a18) {
            ctx->pc = 0x2F2D08u;
            goto label_2f2d08;
        }
    }
    ctx->pc = 0x2F2A20u;
label_2f2a20:
    // 0x2f2a20: 0x8e6406ac  lw          $a0, 0x6AC($s3)
    ctx->pc = 0x2f2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
label_2f2a24:
    // 0x2f2a24: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x2f2a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_2f2a28:
    // 0x2f2a28: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2f2a2c:
    if (ctx->pc == 0x2F2A2Cu) {
        ctx->pc = 0x2F2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A28u;
        // 0x2f2a2c: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A30u;
        goto label_2f2a30;
    }
    ctx->pc = 0x2F2A28u;
    {
        const bool branch_taken_0x2f2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A28u;
        // 0x2f2a2c: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a28) {
            ctx->pc = 0x2F2A70u;
            goto label_2f2a70;
        }
    }
    ctx->pc = 0x2F2A30u;
label_2f2a30:
    // 0x2f2a30: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2f2a34:
    if (ctx->pc == 0x2F2A34u) {
        ctx->pc = 0x2F2A38u;
        goto label_2f2a38;
    }
    ctx->pc = 0x2F2A30u;
    {
        const bool branch_taken_0x2f2a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a30) {
            ctx->pc = 0x2F2A70u;
            goto label_2f2a70;
        }
    }
    ctx->pc = 0x2F2A38u;
label_2f2a38:
    // 0x2f2a38: 0xc66128f0  lwc1        $f1, 0x28F0($s3)
    ctx->pc = 0x2f2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2a3c:
    // 0x2f2a3c: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x2f2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_2f2a40:
    // 0x2f2a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2a44:
    // 0x2f2a44: 0x0  nop
    ctx->pc = 0x2f2a44u;
    // NOP
label_2f2a48:
    // 0x2f2a48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f2a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f2a4c:
    // 0x2f2a4c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2f2a50:
    if (ctx->pc == 0x2F2A50u) {
        ctx->pc = 0x2F2A54u;
        goto label_2f2a54;
    }
    ctx->pc = 0x2F2A4Cu;
    {
        const bool branch_taken_0x2f2a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2a4c) {
            ctx->pc = 0x2F2A70u;
            goto label_2f2a70;
        }
    }
    ctx->pc = 0x2F2A54u;
label_2f2a54:
    // 0x2f2a54: 0x96630828  lhu         $v1, 0x828($s3)
    ctx->pc = 0x2f2a54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2088)));
label_2f2a58:
    // 0x2f2a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2a5c:
    // 0x2f2a5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f2a60:
    if (ctx->pc == 0x2F2A60u) {
        ctx->pc = 0x2F2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A5Cu;
        // 0x2f2a60: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2A64u;
        goto label_2f2a64;
    }
    ctx->pc = 0x2F2A5Cu;
    {
        const bool branch_taken_0x2f2a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A5Cu;
        // 0x2f2a60: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a5c) {
            ctx->pc = 0x2F2A70u;
            goto label_2f2a70;
        }
    }
    ctx->pc = 0x2F2A64u;
label_2f2a64:
    // 0x2f2a64: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_2f2a68:
    if (ctx->pc == 0x2F2A68u) {
        ctx->pc = 0x2F2A6Cu;
        goto label_2f2a6c;
    }
    ctx->pc = 0x2F2A64u;
    {
        const bool branch_taken_0x2f2a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a64) {
            ctx->pc = 0x2F2D08u;
            goto label_2f2d08;
        }
    }
    ctx->pc = 0x2F2A6Cu;
label_2f2a6c:
    // 0x2f2a6c: 0x0  nop
    ctx->pc = 0x2f2a6cu;
    // NOP
label_2f2a70:
    // 0x2f2a70: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2f2a74:
    // 0x2f2a74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2a78:
    // 0x2f2a78: 0xc0969ac  jal         func_25A6B0
label_2f2a7c:
    if (ctx->pc == 0x2F2A7Cu) {
        ctx->pc = 0x2F2A80u;
        goto label_2f2a80;
    }
    ctx->pc = 0x2F2A78u;
    SET_GPR_U32(ctx, 31, 0x2F2A80u);
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x2F2A78u, 0x2F2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A80u;
label_2f2a80:
    // 0x2f2a80: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2f2a84:
    // 0x2f2a84: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2f2a88:
    // 0x2f2a88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2a8c:
    // 0x2f2a8c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x2f2a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_2f2a90:
    // 0x2f2a90: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x2f2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_2f2a94:
    // 0x2f2a94: 0x27a4008f  addiu       $a0, $sp, 0x8F
    ctx->pc = 0x2f2a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 143));
label_2f2a98:
    // 0x2f2a98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f2a98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f2a9c:
    // 0x2f2a9c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f2aa0:
    // 0x2f2aa0: 0xa3a2008e  sb          $v0, 0x8E($sp)
    ctx->pc = 0x2f2aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 142), (uint8_t)GPR_U32(ctx, 2));
label_2f2aa4:
    // 0x2f2aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2aa8:
    // 0x2f2aa8: 0xa7a0008c  sh          $zero, 0x8C($sp)
    ctx->pc = 0x2f2aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 140), (uint16_t)GPR_U32(ctx, 0));
label_2f2aac:
    // 0x2f2aac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2ab0:
    // 0x2f2ab0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2f2ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2f2ab4:
    // 0x2f2ab4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f2ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f2ab8:
    // 0x2f2ab8: 0x92632b1c  lbu         $v1, 0x2B1C($s3)
    ctx->pc = 0x2f2ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11036)));
label_2f2abc:
    // 0x2f2abc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2f2ac0:
    if (ctx->pc == 0x2F2AC0u) {
        ctx->pc = 0x2F2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ABCu;
        // 0x2f2ac0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AC4u;
        goto label_2f2ac4;
    }
    ctx->pc = 0x2F2ABCu;
    {
        const bool branch_taken_0x2f2abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ABCu;
        // 0x2f2ac0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2abc) {
            ctx->pc = 0x2F2B08u;
            goto label_2f2b08;
        }
    }
    ctx->pc = 0x2F2AC4u;
label_2f2ac4:
    // 0x2f2ac4: 0x24020788  addiu       $v0, $zero, 0x788
    ctx->pc = 0x2f2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1928));
label_2f2ac8:
    // 0x2f2ac8: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x2f2ac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_2f2acc:
    // 0x2f2acc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2f2ad0:
    if (ctx->pc == 0x2F2AD0u) {
        ctx->pc = 0x2F2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ACCu;
        // 0x2f2ad0: 0x240204d0  addiu       $v0, $zero, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AD4u;
        goto label_2f2ad4;
    }
    ctx->pc = 0x2F2ACCu;
    {
        const bool branch_taken_0x2f2acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ACCu;
        // 0x2f2ad0: 0x240204d0  addiu       $v0, $zero, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2acc) {
            ctx->pc = 0x2F2AF8u;
            goto label_2f2af8;
        }
    }
    ctx->pc = 0x2F2AD4u;
label_2f2ad4:
    // 0x2f2ad4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f2ad8:
    if (ctx->pc == 0x2F2AD8u) {
        ctx->pc = 0x2F2ADCu;
        goto label_2f2adc;
    }
    ctx->pc = 0x2F2AD4u;
    {
        const bool branch_taken_0x2f2ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2ad4) {
            ctx->pc = 0x2F2AE8u;
            goto label_2f2ae8;
        }
    }
    ctx->pc = 0x2F2ADCu;
label_2f2adc:
    // 0x2f2adc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f2ae0:
    if (ctx->pc == 0x2F2AE0u) {
        ctx->pc = 0x2F2AE4u;
        goto label_2f2ae4;
    }
    ctx->pc = 0x2F2ADCu;
    {
        const bool branch_taken_0x2f2adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2adc) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2AE4u;
label_2f2ae4:
    // 0x2f2ae4: 0x0  nop
    ctx->pc = 0x2f2ae4u;
    // NOP
label_2f2ae8:
    // 0x2f2ae8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2aec:
    // 0x2f2aec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2f2aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f2af0:
    // 0x2f2af0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f2af4:
    if (ctx->pc == 0x2F2AF4u) {
        ctx->pc = 0x2F2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AF0u;
        // 0x2f2af4: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2AF8u;
        goto label_2f2af8;
    }
    ctx->pc = 0x2F2AF0u;
    {
        const bool branch_taken_0x2f2af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AF0u;
        // 0x2f2af4: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2af0) {
            ctx->pc = 0x2F2B10u;
            goto label_2f2b10;
        }
    }
    ctx->pc = 0x2F2AF8u;
label_2f2af8:
    // 0x2f2af8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f2afc:
    if (ctx->pc == 0x2F2AFCu) {
        ctx->pc = 0x2F2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AF8u;
        // 0x2f2afc: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B00u;
        goto label_2f2b00;
    }
    ctx->pc = 0x2F2AF8u;
    {
        const bool branch_taken_0x2f2af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AF8u;
        // 0x2f2afc: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2af8) {
            ctx->pc = 0x2F2B10u;
            goto label_2f2b10;
        }
    }
    ctx->pc = 0x2F2B00u;
label_2f2b00:
    // 0x2f2b00: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f2b04:
    if (ctx->pc == 0x2F2B04u) {
        ctx->pc = 0x2F2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B00u;
        // 0x2f2b04: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B08u;
        goto label_2f2b08;
    }
    ctx->pc = 0x2F2B00u;
    {
        const bool branch_taken_0x2f2b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B00u;
        // 0x2f2b04: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b00) {
            ctx->pc = 0x2F2B10u;
            goto label_2f2b10;
        }
    }
    ctx->pc = 0x2F2B08u;
label_2f2b08:
    // 0x2f2b08: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2f2b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f2b0c:
    // 0x2f2b0c: 0x0  nop
    ctx->pc = 0x2f2b0cu;
    // NOP
label_2f2b10:
    // 0x2f2b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b14:
    // 0x2f2b14: 0xc0a7360  jal         func_29CD80
label_2f2b18:
    if (ctx->pc == 0x2F2B18u) {
        ctx->pc = 0x2F2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B14u;
        // 0x2f2b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B1Cu;
        goto label_2f2b1c;
    }
    ctx->pc = 0x2F2B14u;
    SET_GPR_U32(ctx, 31, 0x2F2B1Cu);
    ctx->pc = 0x2F2B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B14u;
    // 0x2f2b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD80u, 0x2F2B14u, 0x2F2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B1Cu;
label_2f2b1c:
    // 0x2f2b1c: 0xc66128f0  lwc1        $f1, 0x28F0($s3)
    ctx->pc = 0x2f2b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2b20:
    // 0x2f2b20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2f2b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_2f2b24:
    // 0x2f2b24: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2f2b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2b28:
    // 0x2f2b28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f2b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f2b2c:
    // 0x2f2b2c: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x2f2b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_2f2b30:
    // 0x2f2b30: 0x92622b20  lbu         $v0, 0x2B20($s3)
    ctx->pc = 0x2f2b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11040)));
label_2f2b34:
    // 0x2f2b34: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_2f2b38:
    if (ctx->pc == 0x2F2B38u) {
        ctx->pc = 0x2F2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B34u;
        // 0x2f2b38: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B3Cu;
        goto label_2f2b3c;
    }
    ctx->pc = 0x2F2B34u;
    {
        const bool branch_taken_0x2f2b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B34u;
        // 0x2f2b38: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b34) {
            ctx->pc = 0x2F2C70u;
            goto label_2f2c70;
        }
    }
    ctx->pc = 0x2F2B3Cu;
label_2f2b3c:
    // 0x2f2b3c: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x2f2b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f2b40:
    // 0x2f2b40: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_2f2b44:
    if (ctx->pc == 0x2F2B44u) {
        ctx->pc = 0x2F2B48u;
        goto label_2f2b48;
    }
    ctx->pc = 0x2F2B40u;
    {
        const bool branch_taken_0x2f2b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b40) {
            ctx->pc = 0x2F2C70u;
            goto label_2f2c70;
        }
    }
    ctx->pc = 0x2F2B48u;
label_2f2b48:
    // 0x2f2b48: 0x926207d8  lbu         $v0, 0x7D8($s3)
    ctx->pc = 0x2f2b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2008)));
label_2f2b4c:
    // 0x2f2b4c: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
label_2f2b50:
    if (ctx->pc == 0x2F2B50u) {
        ctx->pc = 0x2F2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B4Cu;
        // 0x2f2b50: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B54u;
        goto label_2f2b54;
    }
    ctx->pc = 0x2F2B4Cu;
    {
        const bool branch_taken_0x2f2b4c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B4Cu;
        // 0x2f2b50: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b4c) {
            ctx->pc = 0x2F2C70u;
            goto label_2f2c70;
        }
    }
    ctx->pc = 0x2F2B54u;
label_2f2b54:
    // 0x2f2b54: 0xc0969c8  jal         func_25A720
label_2f2b58:
    if (ctx->pc == 0x2F2B58u) {
        ctx->pc = 0x2F2B5Cu;
        goto label_2f2b5c;
    }
    ctx->pc = 0x2F2B54u;
    SET_GPR_U32(ctx, 31, 0x2F2B5Cu);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2F2B54u, 0x2F2B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B5Cu;
label_2f2b5c:
    // 0x2f2b5c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2f2b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f2b60:
    // 0x2f2b60: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2f2b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f2b64:
    // 0x2f2b64: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_2f2b68:
    if (ctx->pc == 0x2F2B68u) {
        ctx->pc = 0x2F2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B64u;
        // 0x2f2b68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B6Cu;
        goto label_2f2b6c;
    }
    ctx->pc = 0x2F2B64u;
    {
        const bool branch_taken_0x2f2b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B64u;
        // 0x2f2b68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b64) {
            ctx->pc = 0x2F2C70u;
            goto label_2f2c70;
        }
    }
    ctx->pc = 0x2F2B6Cu;
label_2f2b6c:
    // 0x2f2b6c: 0x0  nop
    ctx->pc = 0x2f2b6cu;
    // NOP
label_2f2b70:
    // 0x2f2b70: 0x926407d9  lbu         $a0, 0x7D9($s3)
    ctx->pc = 0x2f2b70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2009)));
label_2f2b74:
    // 0x2f2b74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b78:
    // 0x2f2b78: 0xc0b2ebc  jal         func_2CBAF0
label_2f2b7c:
    if (ctx->pc == 0x2F2B7Cu) {
        ctx->pc = 0x2F2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B78u;
        // 0x2f2b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B80u;
        goto label_2f2b80;
    }
    ctx->pc = 0x2F2B78u;
    SET_GPR_U32(ctx, 31, 0x2F2B80u);
    ctx->pc = 0x2F2B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B78u;
    // 0x2f2b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x2F2B78u, 0x2F2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B80u;
label_2f2b80:
    // 0x2f2b80: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2f2b84:
    if (ctx->pc == 0x2F2B84u) {
        ctx->pc = 0x2F2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B80u;
        // 0x2f2b84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B88u;
        goto label_2f2b88;
    }
    ctx->pc = 0x2F2B80u;
    {
        const bool branch_taken_0x2f2b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B80u;
        // 0x2f2b84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b80) {
            ctx->pc = 0x2F2C60u;
            goto label_2f2c60;
        }
    }
    ctx->pc = 0x2F2B88u;
label_2f2b88:
    // 0x2f2b88: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x2f2b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_2f2b8c:
    // 0x2f2b8c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f2b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f2b90:
    // 0x2f2b90: 0x320f809  jalr        $t9
label_2f2b94:
    if (ctx->pc == 0x2F2B94u) {
        ctx->pc = 0x2F2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B90u;
        // 0x2f2b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2B98u;
        goto label_2f2b98;
    }
    ctx->pc = 0x2F2B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2B98u);
        ctx->pc = 0x2F2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B90u;
        // 0x2f2b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2B90u, 0x2F2B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2B98u;
label_2f2b98:
    // 0x2f2b98: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x2f2b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_2f2b9c:
    // 0x2f2b9c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2f2ba0:
    // 0x2f2ba0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2ba4:
    // 0x2f2ba4: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x2f2ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_2f2ba8:
    // 0x2f2ba8: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x2f2ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_2f2bac:
    // 0x2f2bac: 0xc0969ac  jal         func_25A6B0
label_2f2bb0:
    if (ctx->pc == 0x2F2BB0u) {
        ctx->pc = 0x2F2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BACu;
        // 0x2f2bb0: 0x7e420080  sq          $v0, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2BB4u;
        goto label_2f2bb4;
    }
    ctx->pc = 0x2F2BACu;
    SET_GPR_U32(ctx, 31, 0x2F2BB4u);
    ctx->pc = 0x2F2BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BACu;
    // 0x2f2bb0: 0x7e420080  sq          $v0, 0x80($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x2F2BACu, 0x2F2BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BB4u;
label_2f2bb4:
    // 0x2f2bb4: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x2f2bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f2bb8:
    // 0x2f2bb8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2f2bbc:
    // 0x2f2bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2bc0:
    // 0x2f2bc0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2f2bc4:
    // 0x2f2bc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2bc8:
    // 0x2f2bc8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f2bc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2f2bcc:
    // 0x2f2bcc: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2f2bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2f2bd0:
    // 0x2f2bd0: 0xe6420020  swc1        $f2, 0x20($s2)
    ctx->pc = 0x2f2bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_2f2bd4:
    // 0x2f2bd4: 0xc0969ac  jal         func_25A6B0
label_2f2bd8:
    if (ctx->pc == 0x2F2BD8u) {
        ctx->pc = 0x2F2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BD4u;
        // 0x2f2bd8: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2BDCu;
        goto label_2f2bdc;
    }
    ctx->pc = 0x2F2BD4u;
    SET_GPR_U32(ctx, 31, 0x2F2BDCu);
    ctx->pc = 0x2F2BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BD4u;
    // 0x2f2bd8: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x2F2BD4u, 0x2F2BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BDCu;
label_2f2bdc:
    // 0x2f2bdc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2f2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2f2be0:
    // 0x2f2be0: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x2f2be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2f2be4:
    // 0x2f2be4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f2be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f2be8:
    // 0x2f2be8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2f2bec:
    // 0x2f2bec: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x2f2becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2bf0:
    // 0x2f2bf0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f2bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2f2bf4:
    // 0x2f2bf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f2bf8:
    // 0x2f2bf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f2bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f2bfc:
    // 0x2f2bfc: 0xc0969ac  jal         func_25A6B0
label_2f2c00:
    if (ctx->pc == 0x2F2C00u) {
        ctx->pc = 0x2F2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BFCu;
        // 0x2f2c00: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C04u;
        goto label_2f2c04;
    }
    ctx->pc = 0x2F2BFCu;
    SET_GPR_U32(ctx, 31, 0x2F2C04u);
    ctx->pc = 0x2F2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BFCu;
    // 0x2f2c00: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x2F2BFCu, 0x2F2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C04u;
label_2f2c04:
    // 0x2f2c04: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x2f2c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f2c08:
    // 0x2f2c08: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2f2c0c:
    // 0x2f2c0c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f2c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_2f2c10:
    // 0x2f2c10: 0x26441900  addiu       $a0, $s2, 0x1900
    ctx->pc = 0x2f2c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6400));
label_2f2c14:
    // 0x2f2c14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2c18:
    // 0x2f2c18: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x2f2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
label_2f2c1c:
    // 0x2f2c1c: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x2f2c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2f2c20:
    // 0x2f2c20: 0x26470080  addiu       $a3, $s2, 0x80
    ctx->pc = 0x2f2c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_2f2c24:
    // 0x2f2c24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c28:
    // 0x2f2c28: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f2c28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2f2c2c:
    // 0x2f2c2c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2f2c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2f2c30:
    // 0x2f2c30: 0xe6420028  swc1        $f2, 0x28($s2)
    ctx->pc = 0x2f2c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_2f2c34:
    // 0x2f2c34: 0xc04e744  jal         func_139D10
label_2f2c38:
    if (ctx->pc == 0x2F2C38u) {
        ctx->pc = 0x2F2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C34u;
        // 0x2f2c38: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C3Cu;
        goto label_2f2c3c;
    }
    ctx->pc = 0x2F2C34u;
    SET_GPR_U32(ctx, 31, 0x2F2C3Cu);
    ctx->pc = 0x2F2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C34u;
    // 0x2f2c38: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D10u, 0x2F2C34u, 0x2F2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C3Cu;
label_2f2c3c:
    // 0x2f2c3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f2c40:
    // 0x2f2c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c44:
    // 0x2f2c44: 0xa2420640  sb          $v0, 0x640($s2)
    ctx->pc = 0x2f2c44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1600), (uint8_t)GPR_U32(ctx, 2));
label_2f2c48:
    // 0x2f2c48: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f2c4c:
    // 0x2f2c4c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2f2c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f2c50:
    // 0x2f2c50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f2c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c54:
    // 0x2f2c54: 0xc09fcf4  jal         func_27F3D0
label_2f2c58:
    if (ctx->pc == 0x2F2C58u) {
        ctx->pc = 0x2F2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C54u;
        // 0x2f2c58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C5Cu;
        goto label_2f2c5c;
    }
    ctx->pc = 0x2F2C54u;
    SET_GPR_U32(ctx, 31, 0x2F2C5Cu);
    ctx->pc = 0x2F2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C54u;
    // 0x2f2c58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x2F2C54u, 0x2F2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C5Cu;
label_2f2c5c:
    // 0x2f2c5c: 0x0  nop
    ctx->pc = 0x2f2c5cu;
    // NOP
label_2f2c60:
    // 0x2f2c60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f2c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f2c64:
    // 0x2f2c64: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2f2c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f2c68:
    // 0x2f2c68: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_2f2c6c:
    if (ctx->pc == 0x2F2C6Cu) {
        ctx->pc = 0x2F2C70u;
        goto label_2f2c70;
    }
    ctx->pc = 0x2F2C68u;
    {
        const bool branch_taken_0x2f2c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c68) {
            ctx->pc = 0x2F2B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2b70;
        }
    }
    ctx->pc = 0x2F2C70u;
label_2f2c70:
    // 0x2f2c70: 0xc096fb8  jal         func_25BEE0
label_2f2c74:
    if (ctx->pc == 0x2F2C74u) {
        ctx->pc = 0x2F2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C70u;
        // 0x2f2c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C78u;
        goto label_2f2c78;
    }
    ctx->pc = 0x2F2C70u;
    SET_GPR_U32(ctx, 31, 0x2F2C78u);
    ctx->pc = 0x2F2C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C70u;
    // 0x2f2c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2F2C70u, 0x2F2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C78u;
label_2f2c78:
    // 0x2f2c78: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x2f2c78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
label_2f2c7c:
    // 0x2f2c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c80:
    // 0x2f2c80: 0xc0a9a74  jal         func_2A69D0
label_2f2c84:
    if (ctx->pc == 0x2F2C84u) {
        ctx->pc = 0x2F2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C80u;
        // 0x2f2c84: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2C88u;
        goto label_2f2c88;
    }
    ctx->pc = 0x2F2C80u;
    SET_GPR_U32(ctx, 31, 0x2F2C88u);
    ctx->pc = 0x2F2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C80u;
    // 0x2f2c84: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A69D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A69D0u, 0x2F2C80u, 0x2F2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C88u;
label_2f2c88:
    // 0x2f2c88: 0x926308e8  lbu         $v1, 0x8E8($s3)
    ctx->pc = 0x2f2c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
label_2f2c8c:
    // 0x2f2c8c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_2f2c90:
    // 0x2f2c90: 0x3c020b00  lui         $v0, 0xB00
    ctx->pc = 0x2f2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2816 << 16));
label_2f2c94:
    // 0x2f2c94: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2f2c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_2f2c98:
    // 0x2f2c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f2c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2c9c:
    // 0x2f2c9c: 0x34454302  ori         $a1, $v0, 0x4302
    ctx->pc = 0x2f2c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17154);
label_2f2ca0:
    // 0x2f2ca0: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x2f2ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f2ca4:
    // 0x2f2ca4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f2ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2ca8:
    // 0x2f2ca8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f2ca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2cac:
    // 0x2f2cac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f2cacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2cb0:
    // 0x2f2cb0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f2cb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2cb4:
    // 0x2f2cb4: 0xc05e9e8  jal         func_17A7A0
label_2f2cb8:
    if (ctx->pc == 0x2F2CB8u) {
        ctx->pc = 0x2F2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CB4u;
        // 0x2f2cb8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CBCu;
        goto label_2f2cbc;
    }
    ctx->pc = 0x2F2CB4u;
    SET_GPR_U32(ctx, 31, 0x2F2CBCu);
    ctx->pc = 0x2F2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CB4u;
    // 0x2f2cb8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2F2CB4u, 0x2F2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CBCu;
label_2f2cbc:
    // 0x2f2cbc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2f2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_2f2cc0:
    // 0x2f2cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2cc4:
    // 0x2f2cc4: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x2f2cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
label_2f2cc8:
    // 0x2f2cc8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2f2cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2f2ccc:
    // 0x2f2ccc: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2f2cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2f2cd0:
    // 0x2f2cd0: 0xc052214  jal         func_148850
label_2f2cd4:
    if (ctx->pc == 0x2F2CD4u) {
        ctx->pc = 0x2F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CD0u;
        // 0x2f2cd4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CD8u;
        goto label_2f2cd8;
    }
    ctx->pc = 0x2F2CD0u;
    SET_GPR_U32(ctx, 31, 0x2F2CD8u);
    ctx->pc = 0x2F2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CD0u;
    // 0x2f2cd4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x2F2CD0u, 0x2F2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CD8u;
label_2f2cd8:
    // 0x2f2cd8: 0xc096c80  jal         func_25B200
label_2f2cdc:
    if (ctx->pc == 0x2F2CDCu) {
        ctx->pc = 0x2F2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CD8u;
        // 0x2f2cdc: 0x8e642b28  lw          $a0, 0x2B28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2CE0u;
        goto label_2f2ce0;
    }
    ctx->pc = 0x2F2CD8u;
    SET_GPR_U32(ctx, 31, 0x2F2CE0u);
    ctx->pc = 0x2F2CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CD8u;
    // 0x2f2cdc: 0x8e642b28  lw          $a0, 0x2B28($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x2F2CD8u, 0x2F2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2CE0u;
label_2f2ce0:
    // 0x2f2ce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f2ce4:
    if (ctx->pc == 0x2F2CE4u) {
        ctx->pc = 0x2F2CE8u;
        goto label_2f2ce8;
    }
    ctx->pc = 0x2F2CE0u;
    {
        const bool branch_taken_0x2f2ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ce0) {
            ctx->pc = 0x2F2CF0u;
            goto label_2f2cf0;
        }
    }
    ctx->pc = 0x2F2CE8u;
label_2f2ce8:
    // 0x2f2ce8: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x2f2ce8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_2f2cec:
    // 0x2f2cec: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x2f2cecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_2f2cf0:
    // 0x2f2cf0: 0x8e7904d4  lw          $t9, 0x4D4($s3)
    ctx->pc = 0x2f2cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
label_2f2cf4:
    // 0x2f2cf4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2f2cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2f2cf8:
    // 0x2f2cf8: 0x320f809  jalr        $t9
label_2f2cfc:
    if (ctx->pc == 0x2F2CFCu) {
        ctx->pc = 0x2F2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CF8u;
        // 0x2f2cfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D00u;
        goto label_2f2d00;
    }
    ctx->pc = 0x2F2CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F2D00u);
        ctx->pc = 0x2F2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CF8u;
        // 0x2f2cfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2CF8u, 0x2F2D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2D00u;
label_2f2d00:
    // 0x2f2d00: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f2d04:
    if (ctx->pc == 0x2F2D04u) {
        ctx->pc = 0x2F2D08u;
        goto label_2f2d08;
    }
    ctx->pc = 0x2F2D00u;
    {
        const bool branch_taken_0x2f2d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d00) {
            ctx->pc = 0x2F2D20u;
            goto label_2f2d20;
        }
    }
    ctx->pc = 0x2F2D08u;
label_2f2d08:
    // 0x2f2d08: 0xc096c80  jal         func_25B200
label_2f2d0c:
    if (ctx->pc == 0x2F2D0Cu) {
        ctx->pc = 0x2F2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D08u;
        // 0x2f2d0c: 0x8e642b28  lw          $a0, 0x2B28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D10u;
        goto label_2f2d10;
    }
    ctx->pc = 0x2F2D08u;
    SET_GPR_U32(ctx, 31, 0x2F2D10u);
    ctx->pc = 0x2F2D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D08u;
    // 0x2f2d0c: 0x8e642b28  lw          $a0, 0x2B28($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x2F2D08u, 0x2F2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D10u;
label_2f2d10:
    // 0x2f2d10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f2d14:
    if (ctx->pc == 0x2F2D14u) {
        ctx->pc = 0x2F2D18u;
        goto label_2f2d18;
    }
    ctx->pc = 0x2F2D10u;
    {
        const bool branch_taken_0x2f2d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d10) {
            ctx->pc = 0x2F2D20u;
            goto label_2f2d20;
        }
    }
    ctx->pc = 0x2F2D18u;
label_2f2d18:
    // 0x2f2d18: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x2f2d18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_2f2d1c:
    // 0x2f2d1c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x2f2d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_2f2d20:
    // 0x2f2d20: 0x92642b1c  lbu         $a0, 0x2B1C($s3)
    ctx->pc = 0x2f2d20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11036)));
label_2f2d24:
    // 0x2f2d24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f2d28:
    // 0x2f2d28: 0x14830045  bne         $a0, $v1, . + 4 + (0x45 << 2)
label_2f2d2c:
    if (ctx->pc == 0x2F2D2Cu) {
        ctx->pc = 0x2F2D30u;
        goto label_2f2d30;
    }
    ctx->pc = 0x2F2D28u;
    {
        const bool branch_taken_0x2f2d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f2d28) {
            ctx->pc = 0x2F2E40u;
            goto label_2f2e40;
        }
    }
    ctx->pc = 0x2F2D30u;
label_2f2d30:
    // 0x2f2d30: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x2f2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
label_2f2d34:
    // 0x2f2d34: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2f2d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2f2d38:
    // 0x2f2d38: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_2f2d3c:
    if (ctx->pc == 0x2F2D3Cu) {
        ctx->pc = 0x2F2D40u;
        goto label_2f2d40;
    }
    ctx->pc = 0x2F2D38u;
    {
        const bool branch_taken_0x2f2d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d38) {
            ctx->pc = 0x2F2E40u;
            goto label_2f2e40;
        }
    }
    ctx->pc = 0x2F2D40u;
label_2f2d40:
    // 0x2f2d40: 0x92632b20  lbu         $v1, 0x2B20($s3)
    ctx->pc = 0x2f2d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11040)));
label_2f2d44:
    // 0x2f2d44: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_2f2d48:
    if (ctx->pc == 0x2F2D48u) {
        ctx->pc = 0x2F2D4Cu;
        goto label_2f2d4c;
    }
    ctx->pc = 0x2F2D44u;
    {
        const bool branch_taken_0x2f2d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d44) {
            ctx->pc = 0x2F2E40u;
            goto label_2f2e40;
        }
    }
    ctx->pc = 0x2F2D4Cu;
label_2f2d4c:
    // 0x2f2d4c: 0x8e6701ec  lw          $a3, 0x1EC($s3)
    ctx->pc = 0x2f2d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 492)));
label_2f2d50:
    // 0x2f2d50: 0x10e0003b  beqz        $a3, . + 4 + (0x3B << 2)
label_2f2d54:
    if (ctx->pc == 0x2F2D54u) {
        ctx->pc = 0x2F2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D50u;
        // 0x2f2d54: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D58u;
        goto label_2f2d58;
    }
    ctx->pc = 0x2F2D50u;
    {
        const bool branch_taken_0x2f2d50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D50u;
        // 0x2f2d54: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d50) {
            ctx->pc = 0x2F2E40u;
            goto label_2f2e40;
        }
    }
    ctx->pc = 0x2F2D58u;
label_2f2d58:
    // 0x2f2d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2d5c:
    // 0x2f2d5c: 0x24a50950  addiu       $a1, $a1, 0x950
    ctx->pc = 0x2f2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
label_2f2d60:
    // 0x2f2d60: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2f2d60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2f2d64:
    // 0x2f2d64: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2f2d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2f2d68:
    // 0x2f2d68: 0x14800031  bnez        $a0, . + 4 + (0x31 << 2)
label_2f2d6c:
    if (ctx->pc == 0x2F2D6Cu) {
        ctx->pc = 0x2F2D70u;
        goto label_2f2d70;
    }
    ctx->pc = 0x2F2D68u;
    {
        const bool branch_taken_0x2f2d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d68) {
            ctx->pc = 0x2F2E30u;
            goto label_2f2e30;
        }
    }
    ctx->pc = 0x2F2D70u;
label_2f2d70:
    // 0x2f2d70: 0x90e60002  lbu         $a2, 0x2($a3)
    ctx->pc = 0x2f2d70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2f2d74:
    // 0x2f2d74: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2f2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2f2d78:
    // 0x2f2d78: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2f2d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2f2d7c:
    // 0x2f2d7c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2f2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2f2d80:
    // 0x2f2d80: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2f2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2f2d84:
    // 0x2f2d84: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2f2d84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2f2d88:
    // 0x2f2d88: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x2f2d88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_2f2d8c:
    // 0x2f2d8c: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
label_2f2d90:
    if (ctx->pc == 0x2F2D90u) {
        ctx->pc = 0x2F2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D8Cu;
        // 0x2f2d90: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2D94u;
        goto label_2f2d94;
    }
    ctx->pc = 0x2F2D8Cu;
    {
        const bool branch_taken_0x2f2d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D8Cu;
        // 0x2f2d90: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d8c) {
            ctx->pc = 0x2F2E30u;
            goto label_2f2e30;
        }
    }
    ctx->pc = 0x2F2D94u;
label_2f2d94:
    // 0x2f2d94: 0xc0968f0  jal         func_25A3C0
label_2f2d98:
    if (ctx->pc == 0x2F2D98u) {
        ctx->pc = 0x2F2D9Cu;
        goto label_2f2d9c;
    }
    ctx->pc = 0x2F2D94u;
    SET_GPR_U32(ctx, 31, 0x2F2D9Cu);
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x2F2D94u, 0x2F2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D9Cu;
label_2f2d9c:
    // 0x2f2d9c: 0x8e652b18  lw          $a1, 0x2B18($s3)
    ctx->pc = 0x2f2d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11032)));
label_2f2da0:
    // 0x2f2da0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2f2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2f2da4:
    // 0x2f2da4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f2da4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2f2da8:
    // 0x2f2da8: 0xc07cce0  jal         func_1F3380
label_2f2dac:
    if (ctx->pc == 0x2F2DACu) {
        ctx->pc = 0x2F2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DA8u;
        // 0x2f2dac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DB0u;
        goto label_2f2db0;
    }
    ctx->pc = 0x2F2DA8u;
    SET_GPR_U32(ctx, 31, 0x2F2DB0u);
    ctx->pc = 0x2F2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DA8u;
    // 0x2f2dac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2F2DA8u, 0x2F2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DB0u;
label_2f2db0:
    // 0x2f2db0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2f2db4:
    if (ctx->pc == 0x2F2DB4u) {
        ctx->pc = 0x2F2DB8u;
        goto label_2f2db8;
    }
    ctx->pc = 0x2F2DB0u;
    {
        const bool branch_taken_0x2f2db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2db0) {
            ctx->pc = 0x2F2E28u;
            goto label_2f2e28;
        }
    }
    ctx->pc = 0x2F2DB8u;
label_2f2db8:
    // 0x2f2db8: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2f2db8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2f2dbc:
    // 0x2f2dbc: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f2dc0:
    // 0x2f2dc0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f2dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f2dc4:
    // 0x2f2dc4: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x2f2dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2f2dc8:
    // 0x2f2dc8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f2dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2f2dcc:
    // 0x2f2dcc: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2f2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_2f2dd0:
    // 0x2f2dd0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2f2dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f2dd4:
    // 0x2f2dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2dd8:
    // 0x2f2dd8: 0x0  nop
    ctx->pc = 0x2f2dd8u;
    // NOP
label_2f2ddc:
    // 0x2f2ddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f2ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f2de0:
    // 0x2f2de0: 0xc0414d0  jal         func_105340
label_2f2de4:
    if (ctx->pc == 0x2F2DE4u) {
        ctx->pc = 0x2F2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DE0u;
        // 0x2f2de4: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DE8u;
        goto label_2f2de8;
    }
    ctx->pc = 0x2F2DE0u;
    SET_GPR_U32(ctx, 31, 0x2F2DE8u);
    ctx->pc = 0x2F2DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DE0u;
    // 0x2f2de4: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2F2DE0u, 0x2F2DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DE8u;
label_2f2de8:
    // 0x2f2de8: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2f2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f2dec:
    // 0x2f2dec: 0xc041472  jal         func_1051C8
label_2f2df0:
    if (ctx->pc == 0x2F2DF0u) {
        ctx->pc = 0x2F2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DECu;
        // 0x2f2df0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2DF4u;
        goto label_2f2df4;
    }
    ctx->pc = 0x2F2DECu;
    SET_GPR_U32(ctx, 31, 0x2F2DF4u);
    ctx->pc = 0x2F2DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DECu;
    // 0x2f2df0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2F2DECu, 0x2F2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DF4u;
label_2f2df4:
    // 0x2f2df4: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2f2df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2f2df8:
    // 0x2f2df8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f2df8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f2dfc:
    // 0x2f2dfc: 0xc0414dc  jal         func_105370
label_2f2e00:
    if (ctx->pc == 0x2F2E00u) {
        ctx->pc = 0x2F2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DFCu;
        // 0x2f2e00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E04u;
        goto label_2f2e04;
    }
    ctx->pc = 0x2F2DFCu;
    SET_GPR_U32(ctx, 31, 0x2F2E04u);
    ctx->pc = 0x2F2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DFCu;
    // 0x2f2e00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2F2DFCu, 0x2F2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E04u;
label_2f2e04:
    // 0x2f2e04: 0xc66000a4  lwc1        $f0, 0xA4($s3)
    ctx->pc = 0x2f2e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2e08:
    // 0x2f2e08: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2f2e0c:
    // 0x2f2e0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f2e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2e10:
    // 0x2f2e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2e14:
    // 0x2f2e14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f2e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f2e18:
    // 0x2f2e18: 0xe66000a4  swc1        $f0, 0xA4($s3)
    ctx->pc = 0x2f2e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 164), bits); }
label_2f2e1c:
    // 0x2f2e1c: 0xa2632b20  sb          $v1, 0x2B20($s3)
    ctx->pc = 0x2f2e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11040), (uint8_t)GPR_U32(ctx, 3));
label_2f2e20:
    // 0x2f2e20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f2e24:
    // 0x2f2e24: 0xae63028c  sw          $v1, 0x28C($s3)
    ctx->pc = 0x2f2e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 652), GPR_U32(ctx, 3));
label_2f2e28:
    // 0x2f2e28: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f2e2c:
    if (ctx->pc == 0x2F2E2Cu) {
        ctx->pc = 0x2F2E30u;
        goto label_2f2e30;
    }
    ctx->pc = 0x2F2E28u;
    {
        const bool branch_taken_0x2f2e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2e28) {
            ctx->pc = 0x2F2E40u;
            goto label_2f2e40;
        }
    }
    ctx->pc = 0x2F2E30u;
label_2f2e30:
    // 0x2f2e30: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2f2e34:
    // 0x2f2e34: 0x14e0ffca  bnez        $a3, . + 4 + (-0x36 << 2)
label_2f2e38:
    if (ctx->pc == 0x2F2E38u) {
        ctx->pc = 0x2F2E3Cu;
        goto label_2f2e3c;
    }
    ctx->pc = 0x2F2E34u;
    {
        const bool branch_taken_0x2f2e34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2e34) {
            ctx->pc = 0x2F2D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2d60;
        }
    }
    ctx->pc = 0x2F2E3Cu;
label_2f2e3c:
    // 0x2f2e3c: 0x0  nop
    ctx->pc = 0x2f2e3cu;
    // NOP
label_2f2e40:
    // 0x2f2e40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f2e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f2e44:
    // 0x2f2e44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2f2e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f2e48:
    // 0x2f2e48: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f2e4c:
    // 0x2f2e4c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f2e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2e50:
    // 0x2f2e50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f2e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2e54:
    // 0x2f2e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f2e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2e58:
    // 0x2f2e58: 0x3e00008  jr          $ra
label_2f2e5c:
    if (ctx->pc == 0x2F2E5Cu) {
        ctx->pc = 0x2F2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E58u;
        // 0x2f2e5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2E60u;
        goto label_fallthrough_0x2f2e58;
    }
    ctx->pc = 0x2F2E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E58u;
        // 0x2f2e5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f2e58:
    ctx->pc = 0x2F2E60u;
}
