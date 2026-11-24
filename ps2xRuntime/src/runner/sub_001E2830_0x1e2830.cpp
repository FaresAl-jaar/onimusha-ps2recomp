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

// Function: sub_001E2830
// Address: 0x1e2830 - 0x1e2e1c
void sub_001E2830_0x1e2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2830_0x1e2830");
#endif

    switch (ctx->pc) {
        case 0x1e2830u: goto label_1e2830;
        case 0x1e2834u: goto label_1e2834;
        case 0x1e2838u: goto label_1e2838;
        case 0x1e283cu: goto label_1e283c;
        case 0x1e2840u: goto label_1e2840;
        case 0x1e2844u: goto label_1e2844;
        case 0x1e2848u: goto label_1e2848;
        case 0x1e284cu: goto label_1e284c;
        case 0x1e2850u: goto label_1e2850;
        case 0x1e2854u: goto label_1e2854;
        case 0x1e2858u: goto label_1e2858;
        case 0x1e285cu: goto label_1e285c;
        case 0x1e2860u: goto label_1e2860;
        case 0x1e2864u: goto label_1e2864;
        case 0x1e2868u: goto label_1e2868;
        case 0x1e286cu: goto label_1e286c;
        case 0x1e2870u: goto label_1e2870;
        case 0x1e2874u: goto label_1e2874;
        case 0x1e2878u: goto label_1e2878;
        case 0x1e287cu: goto label_1e287c;
        case 0x1e2880u: goto label_1e2880;
        case 0x1e2884u: goto label_1e2884;
        case 0x1e2888u: goto label_1e2888;
        case 0x1e288cu: goto label_1e288c;
        case 0x1e2890u: goto label_1e2890;
        case 0x1e2894u: goto label_1e2894;
        case 0x1e2898u: goto label_1e2898;
        case 0x1e289cu: goto label_1e289c;
        case 0x1e28a0u: goto label_1e28a0;
        case 0x1e28a4u: goto label_1e28a4;
        case 0x1e28a8u: goto label_1e28a8;
        case 0x1e28acu: goto label_1e28ac;
        case 0x1e28b0u: goto label_1e28b0;
        case 0x1e28b4u: goto label_1e28b4;
        case 0x1e28b8u: goto label_1e28b8;
        case 0x1e28bcu: goto label_1e28bc;
        case 0x1e28c0u: goto label_1e28c0;
        case 0x1e28c4u: goto label_1e28c4;
        case 0x1e28c8u: goto label_1e28c8;
        case 0x1e28ccu: goto label_1e28cc;
        case 0x1e28d0u: goto label_1e28d0;
        case 0x1e28d4u: goto label_1e28d4;
        case 0x1e28d8u: goto label_1e28d8;
        case 0x1e28dcu: goto label_1e28dc;
        case 0x1e28e0u: goto label_1e28e0;
        case 0x1e28e4u: goto label_1e28e4;
        case 0x1e28e8u: goto label_1e28e8;
        case 0x1e28ecu: goto label_1e28ec;
        case 0x1e28f0u: goto label_1e28f0;
        case 0x1e28f4u: goto label_1e28f4;
        case 0x1e28f8u: goto label_1e28f8;
        case 0x1e28fcu: goto label_1e28fc;
        case 0x1e2900u: goto label_1e2900;
        case 0x1e2904u: goto label_1e2904;
        case 0x1e2908u: goto label_1e2908;
        case 0x1e290cu: goto label_1e290c;
        case 0x1e2910u: goto label_1e2910;
        case 0x1e2914u: goto label_1e2914;
        case 0x1e2918u: goto label_1e2918;
        case 0x1e291cu: goto label_1e291c;
        case 0x1e2920u: goto label_1e2920;
        case 0x1e2924u: goto label_1e2924;
        case 0x1e2928u: goto label_1e2928;
        case 0x1e292cu: goto label_1e292c;
        case 0x1e2930u: goto label_1e2930;
        case 0x1e2934u: goto label_1e2934;
        case 0x1e2938u: goto label_1e2938;
        case 0x1e293cu: goto label_1e293c;
        case 0x1e2940u: goto label_1e2940;
        case 0x1e2944u: goto label_1e2944;
        case 0x1e2948u: goto label_1e2948;
        case 0x1e294cu: goto label_1e294c;
        case 0x1e2950u: goto label_1e2950;
        case 0x1e2954u: goto label_1e2954;
        case 0x1e2958u: goto label_1e2958;
        case 0x1e295cu: goto label_1e295c;
        case 0x1e2960u: goto label_1e2960;
        case 0x1e2964u: goto label_1e2964;
        case 0x1e2968u: goto label_1e2968;
        case 0x1e296cu: goto label_1e296c;
        case 0x1e2970u: goto label_1e2970;
        case 0x1e2974u: goto label_1e2974;
        case 0x1e2978u: goto label_1e2978;
        case 0x1e297cu: goto label_1e297c;
        case 0x1e2980u: goto label_1e2980;
        case 0x1e2984u: goto label_1e2984;
        case 0x1e2988u: goto label_1e2988;
        case 0x1e298cu: goto label_1e298c;
        case 0x1e2990u: goto label_1e2990;
        case 0x1e2994u: goto label_1e2994;
        case 0x1e2998u: goto label_1e2998;
        case 0x1e299cu: goto label_1e299c;
        case 0x1e29a0u: goto label_1e29a0;
        case 0x1e29a4u: goto label_1e29a4;
        case 0x1e29a8u: goto label_1e29a8;
        case 0x1e29acu: goto label_1e29ac;
        case 0x1e29b0u: goto label_1e29b0;
        case 0x1e29b4u: goto label_1e29b4;
        case 0x1e29b8u: goto label_1e29b8;
        case 0x1e29bcu: goto label_1e29bc;
        case 0x1e29c0u: goto label_1e29c0;
        case 0x1e29c4u: goto label_1e29c4;
        case 0x1e29c8u: goto label_1e29c8;
        case 0x1e29ccu: goto label_1e29cc;
        case 0x1e29d0u: goto label_1e29d0;
        case 0x1e29d4u: goto label_1e29d4;
        case 0x1e29d8u: goto label_1e29d8;
        case 0x1e29dcu: goto label_1e29dc;
        case 0x1e29e0u: goto label_1e29e0;
        case 0x1e29e4u: goto label_1e29e4;
        case 0x1e29e8u: goto label_1e29e8;
        case 0x1e29ecu: goto label_1e29ec;
        case 0x1e29f0u: goto label_1e29f0;
        case 0x1e29f4u: goto label_1e29f4;
        case 0x1e29f8u: goto label_1e29f8;
        case 0x1e29fcu: goto label_1e29fc;
        case 0x1e2a00u: goto label_1e2a00;
        case 0x1e2a04u: goto label_1e2a04;
        case 0x1e2a08u: goto label_1e2a08;
        case 0x1e2a0cu: goto label_1e2a0c;
        case 0x1e2a10u: goto label_1e2a10;
        case 0x1e2a14u: goto label_1e2a14;
        case 0x1e2a18u: goto label_1e2a18;
        case 0x1e2a1cu: goto label_1e2a1c;
        case 0x1e2a20u: goto label_1e2a20;
        case 0x1e2a24u: goto label_1e2a24;
        case 0x1e2a28u: goto label_1e2a28;
        case 0x1e2a2cu: goto label_1e2a2c;
        case 0x1e2a30u: goto label_1e2a30;
        case 0x1e2a34u: goto label_1e2a34;
        case 0x1e2a38u: goto label_1e2a38;
        case 0x1e2a3cu: goto label_1e2a3c;
        case 0x1e2a40u: goto label_1e2a40;
        case 0x1e2a44u: goto label_1e2a44;
        case 0x1e2a48u: goto label_1e2a48;
        case 0x1e2a4cu: goto label_1e2a4c;
        case 0x1e2a50u: goto label_1e2a50;
        case 0x1e2a54u: goto label_1e2a54;
        case 0x1e2a58u: goto label_1e2a58;
        case 0x1e2a5cu: goto label_1e2a5c;
        case 0x1e2a60u: goto label_1e2a60;
        case 0x1e2a64u: goto label_1e2a64;
        case 0x1e2a68u: goto label_1e2a68;
        case 0x1e2a6cu: goto label_1e2a6c;
        case 0x1e2a70u: goto label_1e2a70;
        case 0x1e2a74u: goto label_1e2a74;
        case 0x1e2a78u: goto label_1e2a78;
        case 0x1e2a7cu: goto label_1e2a7c;
        case 0x1e2a80u: goto label_1e2a80;
        case 0x1e2a84u: goto label_1e2a84;
        case 0x1e2a88u: goto label_1e2a88;
        case 0x1e2a8cu: goto label_1e2a8c;
        case 0x1e2a90u: goto label_1e2a90;
        case 0x1e2a94u: goto label_1e2a94;
        case 0x1e2a98u: goto label_1e2a98;
        case 0x1e2a9cu: goto label_1e2a9c;
        case 0x1e2aa0u: goto label_1e2aa0;
        case 0x1e2aa4u: goto label_1e2aa4;
        case 0x1e2aa8u: goto label_1e2aa8;
        case 0x1e2aacu: goto label_1e2aac;
        case 0x1e2ab0u: goto label_1e2ab0;
        case 0x1e2ab4u: goto label_1e2ab4;
        case 0x1e2ab8u: goto label_1e2ab8;
        case 0x1e2abcu: goto label_1e2abc;
        case 0x1e2ac0u: goto label_1e2ac0;
        case 0x1e2ac4u: goto label_1e2ac4;
        case 0x1e2ac8u: goto label_1e2ac8;
        case 0x1e2accu: goto label_1e2acc;
        case 0x1e2ad0u: goto label_1e2ad0;
        case 0x1e2ad4u: goto label_1e2ad4;
        case 0x1e2ad8u: goto label_1e2ad8;
        case 0x1e2adcu: goto label_1e2adc;
        case 0x1e2ae0u: goto label_1e2ae0;
        case 0x1e2ae4u: goto label_1e2ae4;
        case 0x1e2ae8u: goto label_1e2ae8;
        case 0x1e2aecu: goto label_1e2aec;
        case 0x1e2af0u: goto label_1e2af0;
        case 0x1e2af4u: goto label_1e2af4;
        case 0x1e2af8u: goto label_1e2af8;
        case 0x1e2afcu: goto label_1e2afc;
        case 0x1e2b00u: goto label_1e2b00;
        case 0x1e2b04u: goto label_1e2b04;
        case 0x1e2b08u: goto label_1e2b08;
        case 0x1e2b0cu: goto label_1e2b0c;
        case 0x1e2b10u: goto label_1e2b10;
        case 0x1e2b14u: goto label_1e2b14;
        case 0x1e2b18u: goto label_1e2b18;
        case 0x1e2b1cu: goto label_1e2b1c;
        case 0x1e2b20u: goto label_1e2b20;
        case 0x1e2b24u: goto label_1e2b24;
        case 0x1e2b28u: goto label_1e2b28;
        case 0x1e2b2cu: goto label_1e2b2c;
        case 0x1e2b30u: goto label_1e2b30;
        case 0x1e2b34u: goto label_1e2b34;
        case 0x1e2b38u: goto label_1e2b38;
        case 0x1e2b3cu: goto label_1e2b3c;
        case 0x1e2b40u: goto label_1e2b40;
        case 0x1e2b44u: goto label_1e2b44;
        case 0x1e2b48u: goto label_1e2b48;
        case 0x1e2b4cu: goto label_1e2b4c;
        case 0x1e2b50u: goto label_1e2b50;
        case 0x1e2b54u: goto label_1e2b54;
        case 0x1e2b58u: goto label_1e2b58;
        case 0x1e2b5cu: goto label_1e2b5c;
        case 0x1e2b60u: goto label_1e2b60;
        case 0x1e2b64u: goto label_1e2b64;
        case 0x1e2b68u: goto label_1e2b68;
        case 0x1e2b6cu: goto label_1e2b6c;
        case 0x1e2b70u: goto label_1e2b70;
        case 0x1e2b74u: goto label_1e2b74;
        case 0x1e2b78u: goto label_1e2b78;
        case 0x1e2b7cu: goto label_1e2b7c;
        case 0x1e2b80u: goto label_1e2b80;
        case 0x1e2b84u: goto label_1e2b84;
        case 0x1e2b88u: goto label_1e2b88;
        case 0x1e2b8cu: goto label_1e2b8c;
        case 0x1e2b90u: goto label_1e2b90;
        case 0x1e2b94u: goto label_1e2b94;
        case 0x1e2b98u: goto label_1e2b98;
        case 0x1e2b9cu: goto label_1e2b9c;
        case 0x1e2ba0u: goto label_1e2ba0;
        case 0x1e2ba4u: goto label_1e2ba4;
        case 0x1e2ba8u: goto label_1e2ba8;
        case 0x1e2bacu: goto label_1e2bac;
        case 0x1e2bb0u: goto label_1e2bb0;
        case 0x1e2bb4u: goto label_1e2bb4;
        case 0x1e2bb8u: goto label_1e2bb8;
        case 0x1e2bbcu: goto label_1e2bbc;
        case 0x1e2bc0u: goto label_1e2bc0;
        case 0x1e2bc4u: goto label_1e2bc4;
        case 0x1e2bc8u: goto label_1e2bc8;
        case 0x1e2bccu: goto label_1e2bcc;
        case 0x1e2bd0u: goto label_1e2bd0;
        case 0x1e2bd4u: goto label_1e2bd4;
        case 0x1e2bd8u: goto label_1e2bd8;
        case 0x1e2bdcu: goto label_1e2bdc;
        case 0x1e2be0u: goto label_1e2be0;
        case 0x1e2be4u: goto label_1e2be4;
        case 0x1e2be8u: goto label_1e2be8;
        case 0x1e2becu: goto label_1e2bec;
        case 0x1e2bf0u: goto label_1e2bf0;
        case 0x1e2bf4u: goto label_1e2bf4;
        case 0x1e2bf8u: goto label_1e2bf8;
        case 0x1e2bfcu: goto label_1e2bfc;
        case 0x1e2c00u: goto label_1e2c00;
        case 0x1e2c04u: goto label_1e2c04;
        case 0x1e2c08u: goto label_1e2c08;
        case 0x1e2c0cu: goto label_1e2c0c;
        case 0x1e2c10u: goto label_1e2c10;
        case 0x1e2c14u: goto label_1e2c14;
        case 0x1e2c18u: goto label_1e2c18;
        case 0x1e2c1cu: goto label_1e2c1c;
        case 0x1e2c20u: goto label_1e2c20;
        case 0x1e2c24u: goto label_1e2c24;
        case 0x1e2c28u: goto label_1e2c28;
        case 0x1e2c2cu: goto label_1e2c2c;
        case 0x1e2c30u: goto label_1e2c30;
        case 0x1e2c34u: goto label_1e2c34;
        case 0x1e2c38u: goto label_1e2c38;
        case 0x1e2c3cu: goto label_1e2c3c;
        case 0x1e2c40u: goto label_1e2c40;
        case 0x1e2c44u: goto label_1e2c44;
        case 0x1e2c48u: goto label_1e2c48;
        case 0x1e2c4cu: goto label_1e2c4c;
        case 0x1e2c50u: goto label_1e2c50;
        case 0x1e2c54u: goto label_1e2c54;
        case 0x1e2c58u: goto label_1e2c58;
        case 0x1e2c5cu: goto label_1e2c5c;
        case 0x1e2c60u: goto label_1e2c60;
        case 0x1e2c64u: goto label_1e2c64;
        case 0x1e2c68u: goto label_1e2c68;
        case 0x1e2c6cu: goto label_1e2c6c;
        case 0x1e2c70u: goto label_1e2c70;
        case 0x1e2c74u: goto label_1e2c74;
        case 0x1e2c78u: goto label_1e2c78;
        case 0x1e2c7cu: goto label_1e2c7c;
        case 0x1e2c80u: goto label_1e2c80;
        case 0x1e2c84u: goto label_1e2c84;
        case 0x1e2c88u: goto label_1e2c88;
        case 0x1e2c8cu: goto label_1e2c8c;
        case 0x1e2c90u: goto label_1e2c90;
        case 0x1e2c94u: goto label_1e2c94;
        case 0x1e2c98u: goto label_1e2c98;
        case 0x1e2c9cu: goto label_1e2c9c;
        case 0x1e2ca0u: goto label_1e2ca0;
        case 0x1e2ca4u: goto label_1e2ca4;
        case 0x1e2ca8u: goto label_1e2ca8;
        case 0x1e2cacu: goto label_1e2cac;
        case 0x1e2cb0u: goto label_1e2cb0;
        case 0x1e2cb4u: goto label_1e2cb4;
        case 0x1e2cb8u: goto label_1e2cb8;
        case 0x1e2cbcu: goto label_1e2cbc;
        case 0x1e2cc0u: goto label_1e2cc0;
        case 0x1e2cc4u: goto label_1e2cc4;
        case 0x1e2cc8u: goto label_1e2cc8;
        case 0x1e2cccu: goto label_1e2ccc;
        case 0x1e2cd0u: goto label_1e2cd0;
        case 0x1e2cd4u: goto label_1e2cd4;
        case 0x1e2cd8u: goto label_1e2cd8;
        case 0x1e2cdcu: goto label_1e2cdc;
        case 0x1e2ce0u: goto label_1e2ce0;
        case 0x1e2ce4u: goto label_1e2ce4;
        case 0x1e2ce8u: goto label_1e2ce8;
        case 0x1e2cecu: goto label_1e2cec;
        case 0x1e2cf0u: goto label_1e2cf0;
        case 0x1e2cf4u: goto label_1e2cf4;
        case 0x1e2cf8u: goto label_1e2cf8;
        case 0x1e2cfcu: goto label_1e2cfc;
        case 0x1e2d00u: goto label_1e2d00;
        case 0x1e2d04u: goto label_1e2d04;
        case 0x1e2d08u: goto label_1e2d08;
        case 0x1e2d0cu: goto label_1e2d0c;
        case 0x1e2d10u: goto label_1e2d10;
        case 0x1e2d14u: goto label_1e2d14;
        case 0x1e2d18u: goto label_1e2d18;
        case 0x1e2d1cu: goto label_1e2d1c;
        case 0x1e2d20u: goto label_1e2d20;
        case 0x1e2d24u: goto label_1e2d24;
        case 0x1e2d28u: goto label_1e2d28;
        case 0x1e2d2cu: goto label_1e2d2c;
        case 0x1e2d30u: goto label_1e2d30;
        case 0x1e2d34u: goto label_1e2d34;
        case 0x1e2d38u: goto label_1e2d38;
        case 0x1e2d3cu: goto label_1e2d3c;
        case 0x1e2d40u: goto label_1e2d40;
        case 0x1e2d44u: goto label_1e2d44;
        case 0x1e2d48u: goto label_1e2d48;
        case 0x1e2d4cu: goto label_1e2d4c;
        case 0x1e2d50u: goto label_1e2d50;
        case 0x1e2d54u: goto label_1e2d54;
        case 0x1e2d58u: goto label_1e2d58;
        case 0x1e2d5cu: goto label_1e2d5c;
        case 0x1e2d60u: goto label_1e2d60;
        case 0x1e2d64u: goto label_1e2d64;
        case 0x1e2d68u: goto label_1e2d68;
        case 0x1e2d6cu: goto label_1e2d6c;
        case 0x1e2d70u: goto label_1e2d70;
        case 0x1e2d74u: goto label_1e2d74;
        case 0x1e2d78u: goto label_1e2d78;
        case 0x1e2d7cu: goto label_1e2d7c;
        case 0x1e2d80u: goto label_1e2d80;
        case 0x1e2d84u: goto label_1e2d84;
        case 0x1e2d88u: goto label_1e2d88;
        case 0x1e2d8cu: goto label_1e2d8c;
        case 0x1e2d90u: goto label_1e2d90;
        case 0x1e2d94u: goto label_1e2d94;
        case 0x1e2d98u: goto label_1e2d98;
        case 0x1e2d9cu: goto label_1e2d9c;
        case 0x1e2da0u: goto label_1e2da0;
        case 0x1e2da4u: goto label_1e2da4;
        case 0x1e2da8u: goto label_1e2da8;
        case 0x1e2dacu: goto label_1e2dac;
        case 0x1e2db0u: goto label_1e2db0;
        case 0x1e2db4u: goto label_1e2db4;
        case 0x1e2db8u: goto label_1e2db8;
        case 0x1e2dbcu: goto label_1e2dbc;
        case 0x1e2dc0u: goto label_1e2dc0;
        case 0x1e2dc4u: goto label_1e2dc4;
        case 0x1e2dc8u: goto label_1e2dc8;
        case 0x1e2dccu: goto label_1e2dcc;
        case 0x1e2dd0u: goto label_1e2dd0;
        case 0x1e2dd4u: goto label_1e2dd4;
        case 0x1e2dd8u: goto label_1e2dd8;
        case 0x1e2ddcu: goto label_1e2ddc;
        case 0x1e2de0u: goto label_1e2de0;
        case 0x1e2de4u: goto label_1e2de4;
        case 0x1e2de8u: goto label_1e2de8;
        case 0x1e2decu: goto label_1e2dec;
        case 0x1e2df0u: goto label_1e2df0;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2df8u: goto label_1e2df8;
        case 0x1e2dfcu: goto label_1e2dfc;
        case 0x1e2e00u: goto label_1e2e00;
        case 0x1e2e04u: goto label_1e2e04;
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e0cu: goto label_1e2e0c;
        case 0x1e2e10u: goto label_1e2e10;
        case 0x1e2e14u: goto label_1e2e14;
        case 0x1e2e18u: goto label_1e2e18;
        default: break;
    }

    ctx->pc = 0x1e2830u;

label_1e2830:
    // 0x1e2830: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e2830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e2834:
    // 0x1e2834: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e2838:
    // 0x1e2838: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e2838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e283c:
    // 0x1e283c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e2840:
    // 0x1e2840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e2844:
    // 0x1e2844: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e2844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e2848:
    // 0x1e2848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e284c:
    // 0x1e284c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2850:
    // 0x1e2850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2854:
    // 0x1e2854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2858:
    // 0x1e2858: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e2858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e285c:
    // 0x1e285c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1e2860:
    if (ctx->pc == 0x1E2860u) {
        ctx->pc = 0x1E2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E285Cu;
        // 0x1e2860: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2864u;
        goto label_1e2864;
    }
    ctx->pc = 0x1E285Cu;
    {
        const bool branch_taken_0x1e285c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E285Cu;
        // 0x1e2860: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e285c) {
            ctx->pc = 0x1E2870u;
            goto label_1e2870;
        }
    }
    ctx->pc = 0x1E2864u;
label_1e2864:
    // 0x1e2864: 0x10000164  b           . + 4 + (0x164 << 2)
label_1e2868:
    if (ctx->pc == 0x1E2868u) {
        ctx->pc = 0x1E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2864u;
        // 0x1e2868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E286Cu;
        goto label_1e286c;
    }
    ctx->pc = 0x1E2864u;
    {
        const bool branch_taken_0x1e2864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2864u;
        // 0x1e2868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2864) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E286Cu;
label_1e286c:
    // 0x1e286c: 0x0  nop
    ctx->pc = 0x1e286cu;
    // NOP
label_1e2870:
    // 0x1e2870: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x1e2870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_1e2874:
    // 0x1e2874: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_1e2878:
    if (ctx->pc == 0x1E2878u) {
        ctx->pc = 0x1E287Cu;
        goto label_1e287c;
    }
    ctx->pc = 0x1E2874u;
    {
        const bool branch_taken_0x1e2874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2874) {
            ctx->pc = 0x1E2B50u;
            goto label_1e2b50;
        }
    }
    ctx->pc = 0x1E287Cu;
label_1e287c:
    // 0x1e287c: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x1e287cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_1e2880:
    // 0x1e2880: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e2880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e2884:
    // 0x1e2884: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e2888:
    if (ctx->pc == 0x1E2888u) {
        ctx->pc = 0x1E2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2884u;
        // 0x1e2888: 0x64082a  slt         $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E288Cu;
        goto label_1e288c;
    }
    ctx->pc = 0x1E2884u;
    {
        const bool branch_taken_0x1e2884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2884u;
        // 0x1e2888: 0x64082a  slt         $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2884) {
            ctx->pc = 0x1E2898u;
            goto label_1e2898;
        }
    }
    ctx->pc = 0x1E288Cu;
label_1e288c:
    // 0x1e288c: 0x142000b0  bnez        $at, . + 4 + (0xB0 << 2)
label_1e2890:
    if (ctx->pc == 0x1E2890u) {
        ctx->pc = 0x1E2894u;
        goto label_1e2894;
    }
    ctx->pc = 0x1E288Cu;
    {
        const bool branch_taken_0x1e288c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e288c) {
            ctx->pc = 0x1E2B50u;
            goto label_1e2b50;
        }
    }
    ctx->pc = 0x1E2894u;
label_1e2894:
    // 0x1e2894: 0x0  nop
    ctx->pc = 0x1e2894u;
    // NOP
label_1e2898:
    // 0x1e2898: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e289c:
    // 0x1e289c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e289cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e28a0:
    // 0x1e28a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e28a4:
    if (ctx->pc == 0x1E28A4u) {
        ctx->pc = 0x1E28A8u;
        goto label_1e28a8;
    }
    ctx->pc = 0x1E28A0u;
    {
        const bool branch_taken_0x1e28a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e28a0) {
            ctx->pc = 0x1E28C8u;
            goto label_1e28c8;
        }
    }
    ctx->pc = 0x1E28A8u;
label_1e28a8:
    // 0x1e28a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e28a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e28ac:
    // 0x1e28ac: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1e28acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e28b0:
    // 0x1e28b0: 0x0  nop
    ctx->pc = 0x1e28b0u;
    // NOP
label_1e28b4:
    // 0x1e28b4: 0x0  nop
    ctx->pc = 0x1e28b4u;
    // NOP
label_1e28b8:
    // 0x1e28b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e28b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e28bc:
    // 0x1e28bc: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
label_1e28c0:
    if (ctx->pc == 0x1E28C0u) {
        ctx->pc = 0x1E28C4u;
        goto label_1e28c4;
    }
    ctx->pc = 0x1E28BCu;
    {
        const bool branch_taken_0x1e28bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e28bc) {
            ctx->pc = 0x1E2B50u;
            goto label_1e2b50;
        }
    }
    ctx->pc = 0x1E28C4u;
label_1e28c4:
    // 0x1e28c4: 0x0  nop
    ctx->pc = 0x1e28c4u;
    // NOP
label_1e28c8:
    // 0x1e28c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1e28c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1e28cc:
    // 0x1e28cc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e28ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e28d0:
    // 0x1e28d0: 0x1020009f  beqz        $at, . + 4 + (0x9F << 2)
label_1e28d4:
    if (ctx->pc == 0x1E28D4u) {
        ctx->pc = 0x1E28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28D0u;
        // 0x1e28d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28D8u;
        goto label_1e28d8;
    }
    ctx->pc = 0x1E28D0u;
    {
        const bool branch_taken_0x1e28d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28D0u;
        // 0x1e28d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28d0) {
            ctx->pc = 0x1E2B50u;
            goto label_1e2b50;
        }
    }
    ctx->pc = 0x1E28D8u;
label_1e28d8:
    // 0x1e28d8: 0x90620017  lbu         $v0, 0x17($v1)
    ctx->pc = 0x1e28d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23)));
label_1e28dc:
    // 0x1e28dc: 0x9205003c  lbu         $a1, 0x3C($s0)
    ctx->pc = 0x1e28dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e28e0:
    // 0x1e28e0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e28e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e28e4:
    // 0x1e28e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e28e8:
    // 0x1e28e8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1e28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e28ec:
    // 0x1e28ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e28ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e28f0:
    // 0x1e28f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e28f4:
    // 0x1e28f4: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1e28f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e28f8:
    // 0x1e28f8: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x1e28f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e28fc:
    // 0x1e28fc: 0xa660003a  sh          $zero, 0x3A($s3)
    ctx->pc = 0x1e28fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 58), (uint16_t)GPR_U32(ctx, 0));
label_1e2900:
    // 0x1e2900: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2904:
    // 0x1e2904: 0x90420017  lbu         $v0, 0x17($v0)
    ctx->pc = 0x1e2904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_1e2908:
    // 0x1e2908: 0xa662003c  sh          $v0, 0x3C($s3)
    ctx->pc = 0x1e2908u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 2));
label_1e290c:
    // 0x1e290c: 0x86620038  lh          $v0, 0x38($s3)
    ctx->pc = 0x1e290cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e2910:
    // 0x1e2910: 0xa662003e  sh          $v0, 0x3E($s3)
    ctx->pc = 0x1e2910u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 62), (uint16_t)GPR_U32(ctx, 2));
label_1e2914:
    // 0x1e2914: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x1e2914u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2918:
    // 0x1e2918: 0xc078bac  jal         func_1E2EB0
label_1e291c:
    if (ctx->pc == 0x1E291Cu) {
        ctx->pc = 0x1E291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2918u;
        // 0x1e291c: 0x86510008  lh          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2920u;
        goto label_1e2920;
    }
    ctx->pc = 0x1E2918u;
    SET_GPR_U32(ctx, 31, 0x1E2920u);
    ctx->pc = 0x1E291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2918u;
    // 0x1e291c: 0x86510008  lh          $s1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x1E2918u, 0x1E2920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2920u;
label_1e2920:
    // 0x1e2920: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e2920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1e2924:
    // 0x1e2924: 0x86440006  lh          $a0, 0x6($s2)
    ctx->pc = 0x1e2924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1e2928:
    // 0x1e2928: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1e2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e292c:
    // 0x1e292c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1e292cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e2930:
    // 0x1e2930: 0x92430017  lbu         $v1, 0x17($s2)
    ctx->pc = 0x1e2930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 23)));
label_1e2934:
    // 0x1e2934: 0x0  nop
    ctx->pc = 0x1e2934u;
    // NOP
label_1e2938:
    // 0x1e2938: 0x1010  mfhi        $v0
    ctx->pc = 0x1e2938u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e293c:
    // 0x1e293c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1e293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e2940:
    // 0x1e2940: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e2940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e2944:
    // 0x1e2944: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e2944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2948:
    // 0x1e2948: 0xa6620032  sh          $v0, 0x32($s3)
    ctx->pc = 0x1e2948u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 50), (uint16_t)GPR_U32(ctx, 2));
label_1e294c:
    // 0x1e294c: 0x86620032  lh          $v0, 0x32($s3)
    ctx->pc = 0x1e294cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e2950:
    // 0x1e2950: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_1e2954:
    if (ctx->pc == 0x1E2954u) {
        ctx->pc = 0x1E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2950u;
        // 0x1e2954: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2958u;
        goto label_1e2958;
    }
    ctx->pc = 0x1E2950u;
    {
        const bool branch_taken_0x1e2950 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2950u;
        // 0x1e2954: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2950) {
            ctx->pc = 0x1E2960u;
            goto label_1e2960;
        }
    }
    ctx->pc = 0x1E2958u;
label_1e2958:
    // 0x1e2958: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e295c:
    if (ctx->pc == 0x1E295Cu) {
        ctx->pc = 0x1E295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2958u;
        // 0x1e295c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2960u;
        goto label_1e2960;
    }
    ctx->pc = 0x1E2958u;
    {
        const bool branch_taken_0x1e2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2958u;
        // 0x1e295c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2958) {
            ctx->pc = 0x1E2970u;
            goto label_1e2970;
        }
    }
    ctx->pc = 0x1E2960u;
label_1e2960:
    // 0x1e2960: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e2964:
    if (ctx->pc == 0x1E2964u) {
        ctx->pc = 0x1E2968u;
        goto label_1e2968;
    }
    ctx->pc = 0x1E2960u;
    {
        const bool branch_taken_0x1e2960 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2960) {
            ctx->pc = 0x1E2970u;
            goto label_1e2970;
        }
    }
    ctx->pc = 0x1E2968u;
label_1e2968:
    // 0x1e2968: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e296c:
    if (ctx->pc == 0x1E296Cu) {
        ctx->pc = 0x1E296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2968u;
        // 0x1e296c: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2970u;
        goto label_1e2970;
    }
    ctx->pc = 0x1E2968u;
    {
        const bool branch_taken_0x1e2968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2968u;
        // 0x1e296c: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2968) {
            ctx->pc = 0x1E2970u;
            goto label_1e2970;
        }
    }
    ctx->pc = 0x1E2970u;
label_1e2970:
    // 0x1e2970: 0xa6620032  sh          $v0, 0x32($s3)
    ctx->pc = 0x1e2970u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 50), (uint16_t)GPR_U32(ctx, 2));
label_1e2974:
    // 0x1e2974: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e2974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e2978:
    // 0x1e2978: 0xa6600030  sh          $zero, 0x30($s3)
    ctx->pc = 0x1e2978u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 0));
label_1e297c:
    // 0x1e297c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1e2980:
    // 0x1e2980: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e2980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2984:
    // 0x1e2984: 0x34476667  ori         $a3, $v0, 0x6667
    ctx->pc = 0x1e2984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1e2988:
    // 0x1e2988: 0x86620032  lh          $v0, 0x32($s3)
    ctx->pc = 0x1e2988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e298c:
    // 0x1e298c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1e298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1e2990:
    // 0x1e2990: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x1e2990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
label_1e2994:
    // 0x1e2994: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1e2994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1e2998:
    // 0x1e2998: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e2998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e299c:
    // 0x1e299c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e299cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e29a0:
    // 0x1e29a0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e29a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e29a4:
    // 0x1e29a4: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x1e29a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e29a8:
    // 0x1e29a8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e29ac:
    // 0x1e29ac: 0x0  nop
    ctx->pc = 0x1e29acu;
    // NOP
label_1e29b0:
    // 0x1e29b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e29b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e29b4:
    // 0x1e29b4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e29b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e29b8:
    // 0x1e29b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e29bc:
    // 0x1e29bc: 0xa6620048  sh          $v0, 0x48($s3)
    ctx->pc = 0x1e29bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 72), (uint16_t)GPR_U32(ctx, 2));
label_1e29c0:
    // 0x1e29c0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e29c4:
    // 0x1e29c4: 0x86660032  lh          $a2, 0x32($s3)
    ctx->pc = 0x1e29c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e29c8:
    // 0x1e29c8: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1e29c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_1e29cc:
    // 0x1e29cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e29ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1e29d0:
    // 0x1e29d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1e29d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1e29d4:
    // 0x1e29d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e29d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1e29d8:
    // 0x1e29d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e29d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e29dc:
    // 0x1e29dc: 0x70c21018  mult1       $v0, $a2, $v0
    ctx->pc = 0x1e29dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e29e0:
    // 0x1e29e0: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x1e29e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e29e4:
    // 0x1e29e4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e29e8:
    // 0x1e29e8: 0x0  nop
    ctx->pc = 0x1e29e8u;
    // NOP
label_1e29ec:
    // 0x1e29ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1e29ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e29f0:
    // 0x1e29f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e29f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e29f4:
    // 0x1e29f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e29f8:
    // 0x1e29f8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1e29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1e29fc:
    // 0x1e29fc: 0xc078ba8  jal         func_1E2EA0
label_1e2a00:
    if (ctx->pc == 0x1E2A00u) {
        ctx->pc = 0x1E2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29FCu;
        // 0x1e2a00: 0xa662004a  sh          $v0, 0x4A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 74), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A04u;
        goto label_1e2a04;
    }
    ctx->pc = 0x1E29FCu;
    SET_GPR_U32(ctx, 31, 0x1E2A04u);
    ctx->pc = 0x1E2A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29FCu;
    // 0x1e2a00: 0xa662004a  sh          $v0, 0x4A($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 74), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x1E29FCu, 0x1E2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A04u;
label_1e2a04:
    // 0x1e2a04: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e2a08:
    // 0x1e2a08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e2a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a0c:
    // 0x1e2a0c: 0xc07679c  jal         func_1D9E70
label_1e2a10:
    if (ctx->pc == 0x1E2A10u) {
        ctx->pc = 0x1E2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A0Cu;
        // 0x1e2a10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A14u;
        goto label_1e2a14;
    }
    ctx->pc = 0x1E2A0Cu;
    SET_GPR_U32(ctx, 31, 0x1E2A14u);
    ctx->pc = 0x1E2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A0Cu;
    // 0x1e2a10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E2A0Cu, 0x1E2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A14u;
label_1e2a14:
    // 0x1e2a14: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a18:
    // 0x1e2a18: 0xc078b88  jal         func_1E2E20
label_1e2a1c:
    if (ctx->pc == 0x1E2A1Cu) {
        ctx->pc = 0x1E2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A18u;
        // 0x1e2a1c: 0xc44c0030  lwc1        $f12, 0x30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A20u;
        goto label_1e2a20;
    }
    ctx->pc = 0x1E2A18u;
    SET_GPR_U32(ctx, 31, 0x1E2A20u);
    ctx->pc = 0x1E2A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A18u;
    // 0x1e2a1c: 0xc44c0030  lwc1        $f12, 0x30($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E2A18u, 0x1E2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A20u;
label_1e2a20:
    // 0x1e2a20: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a24:
    // 0x1e2a24: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1e2a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2a28:
    // 0x1e2a28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e2a2c:
    // 0x1e2a2c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1e2a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1e2a30:
    // 0x1e2a30: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a34:
    // 0x1e2a34: 0xc078b88  jal         func_1E2E20
label_1e2a38:
    if (ctx->pc == 0x1E2A38u) {
        ctx->pc = 0x1E2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A34u;
        // 0x1e2a38: 0xc44c0034  lwc1        $f12, 0x34($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A3Cu;
        goto label_1e2a3c;
    }
    ctx->pc = 0x1E2A34u;
    SET_GPR_U32(ctx, 31, 0x1E2A3Cu);
    ctx->pc = 0x1E2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A34u;
    // 0x1e2a38: 0xc44c0034  lwc1        $f12, 0x34($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E2A34u, 0x1E2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A3Cu;
label_1e2a3c:
    // 0x1e2a3c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a40:
    // 0x1e2a40: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1e2a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2a44:
    // 0x1e2a44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e2a48:
    // 0x1e2a48: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1e2a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_1e2a4c:
    // 0x1e2a4c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a50:
    // 0x1e2a50: 0xc078b88  jal         func_1E2E20
label_1e2a54:
    if (ctx->pc == 0x1E2A54u) {
        ctx->pc = 0x1E2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A50u;
        // 0x1e2a54: 0xc44c0038  lwc1        $f12, 0x38($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A58u;
        goto label_1e2a58;
    }
    ctx->pc = 0x1E2A50u;
    SET_GPR_U32(ctx, 31, 0x1E2A58u);
    ctx->pc = 0x1E2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A50u;
    // 0x1e2a54: 0xc44c0038  lwc1        $f12, 0x38($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E2A50u, 0x1E2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A58u;
label_1e2a58:
    // 0x1e2a58: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a5c:
    // 0x1e2a5c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x1e2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e2a60:
    // 0x1e2a60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2a64:
    // 0x1e2a64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e2a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a68:
    // 0x1e2a68: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e2a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a6c:
    // 0x1e2a6c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1e2a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2a70:
    // 0x1e2a70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e2a74:
    // 0x1e2a74: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x1e2a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_1e2a78:
    // 0x1e2a78: 0xc0767a8  jal         func_1D9EA0
label_1e2a7c:
    if (ctx->pc == 0x1E2A7Cu) {
        ctx->pc = 0x1E2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A78u;
        // 0x1e2a7c: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A80u;
        goto label_1e2a80;
    }
    ctx->pc = 0x1E2A78u;
    SET_GPR_U32(ctx, 31, 0x1E2A80u);
    ctx->pc = 0x1E2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A78u;
    // 0x1e2a7c: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x1E2A78u, 0x1E2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A80u;
label_1e2a80:
    // 0x1e2a80: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a84:
    // 0x1e2a84: 0xc078b88  jal         func_1E2E20
label_1e2a88:
    if (ctx->pc == 0x1E2A88u) {
        ctx->pc = 0x1E2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A84u;
        // 0x1e2a88: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A8Cu;
        goto label_1e2a8c;
    }
    ctx->pc = 0x1E2A84u;
    SET_GPR_U32(ctx, 31, 0x1E2A8Cu);
    ctx->pc = 0x1E2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A84u;
    // 0x1e2a88: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E2A84u, 0x1E2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A8Cu;
label_1e2a8c:
    // 0x1e2a8c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2a90:
    // 0x1e2a90: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e2a94:
    // 0x1e2a94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e2a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a98:
    // 0x1e2a98: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1e2a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2a9c:
    // 0x1e2a9c: 0xc076690  jal         func_1D9A40
label_1e2aa0:
    if (ctx->pc == 0x1E2AA0u) {
        ctx->pc = 0x1E2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A9Cu;
        // 0x1e2aa0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AA4u;
        goto label_1e2aa4;
    }
    ctx->pc = 0x1E2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E2AA4u);
    ctx->pc = 0x1E2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A9Cu;
    // 0x1e2aa0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E2A9Cu, 0x1E2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2AA4u;
label_1e2aa4:
    // 0x1e2aa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e2aa8:
    // 0x1e2aa8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1e2aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e2aac:
    // 0x1e2aac: 0xc0766a8  jal         func_1D9AA0
label_1e2ab0:
    if (ctx->pc == 0x1E2AB0u) {
        ctx->pc = 0x1E2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AACu;
        // 0x1e2ab0: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AB4u;
        goto label_1e2ab4;
    }
    ctx->pc = 0x1E2AACu;
    SET_GPR_U32(ctx, 31, 0x1E2AB4u);
    ctx->pc = 0x1E2AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2AACu;
    // 0x1e2ab0: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E2AACu, 0x1E2AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2AB4u;
label_1e2ab4:
    // 0x1e2ab4: 0x86630038  lh          $v1, 0x38($s3)
    ctx->pc = 0x1e2ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e2ab8:
    // 0x1e2ab8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e2ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e2abc:
    // 0x1e2abc: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1e2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1e2ac0:
    // 0x1e2ac0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e2ac4:
    // 0x1e2ac4: 0xc078ba8  jal         func_1E2EA0
label_1e2ac8:
    if (ctx->pc == 0x1E2AC8u) {
        ctx->pc = 0x1E2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC4u;
        // 0x1e2ac8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2ACCu;
        goto label_1e2acc;
    }
    ctx->pc = 0x1E2AC4u;
    SET_GPR_U32(ctx, 31, 0x1E2ACCu);
    ctx->pc = 0x1E2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2AC4u;
    // 0x1e2ac8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x1E2AC4u, 0x1E2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2ACCu;
label_1e2acc:
    // 0x1e2acc: 0x86620038  lh          $v0, 0x38($s3)
    ctx->pc = 0x1e2accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e2ad0:
    // 0x1e2ad0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2ad4:
    // 0x1e2ad4: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x1e2ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e2ad8:
    // 0x1e2ad8: 0x86630038  lh          $v1, 0x38($s3)
    ctx->pc = 0x1e2ad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e2adc:
    // 0x1e2adc: 0x8662003e  lh          $v0, 0x3E($s3)
    ctx->pc = 0x1e2adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
label_1e2ae0:
    // 0x1e2ae0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e2ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e2ae4:
    // 0x1e2ae4: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x1e2ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e2ae8:
    // 0x1e2ae8: 0x8663003a  lh          $v1, 0x3A($s3)
    ctx->pc = 0x1e2ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_1e2aec:
    // 0x1e2aec: 0x8662003c  lh          $v0, 0x3C($s3)
    ctx->pc = 0x1e2aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_1e2af0:
    // 0x1e2af0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e2af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2af4:
    // 0x1e2af4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1e2af8:
    if (ctx->pc == 0x1E2AF8u) {
        ctx->pc = 0x1E2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AF4u;
        // 0x1e2af8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AFCu;
        goto label_1e2afc;
    }
    ctx->pc = 0x1E2AF4u;
    {
        const bool branch_taken_0x1e2af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AF4u;
        // 0x1e2af8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2af4) {
            ctx->pc = 0x1E2B00u;
            goto label_1e2b00;
        }
    }
    ctx->pc = 0x1E2AFCu;
label_1e2afc:
    // 0x1e2afc: 0xa662003a  sh          $v0, 0x3A($s3)
    ctx->pc = 0x1e2afcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 58), (uint16_t)GPR_U32(ctx, 2));
label_1e2b00:
    // 0x1e2b00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2b04:
    // 0x1e2b04: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1e2b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
label_1e2b08:
    // 0x1e2b08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e2b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e2b0c:
    // 0x1e2b0c: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1e2b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e2b10:
    // 0x1e2b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2b14:
    // 0x1e2b14: 0xa202003c  sb          $v0, 0x3C($s0)
    ctx->pc = 0x1e2b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
label_1e2b18:
    // 0x1e2b18: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2b1c:
    // 0x1e2b1c: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x1e2b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e2b20:
    // 0x1e2b20: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e2b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_1e2b24:
    // 0x1e2b24: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e2b24u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e2b28:
    // 0x1e2b28: 0x0  nop
    ctx->pc = 0x1e2b28u;
    // NOP
label_1e2b2c:
    // 0x1e2b2c: 0x0  nop
    ctx->pc = 0x1e2b2cu;
    // NOP
label_1e2b30:
    // 0x1e2b30: 0x1010  mfhi        $v0
    ctx->pc = 0x1e2b30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e2b34:
    // 0x1e2b34: 0xa202003c  sb          $v0, 0x3C($s0)
    ctx->pc = 0x1e2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
label_1e2b38:
    // 0x1e2b38: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1e2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2b3c:
    // 0x1e2b3c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1e2b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1e2b40:
    // 0x1e2b40: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e2b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2b44:
    // 0x1e2b44: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
label_1e2b48:
    if (ctx->pc == 0x1E2B48u) {
        ctx->pc = 0x1E2B4Cu;
        goto label_1e2b4c;
    }
    ctx->pc = 0x1E2B44u;
    {
        const bool branch_taken_0x1e2b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b44) {
            ctx->pc = 0x1E28D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e28d8;
        }
    }
    ctx->pc = 0x1E2B4Cu;
label_1e2b4c:
    // 0x1e2b4c: 0x0  nop
    ctx->pc = 0x1e2b4cu;
    // NOP
label_1e2b50:
    // 0x1e2b50: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2b54:
    // 0x1e2b54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e2b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b58:
    // 0x1e2b58: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1e2b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1e2b5c:
    // 0x1e2b5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e2b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2b60:
    // 0x1e2b60: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
label_1e2b64:
    if (ctx->pc == 0x1E2B64u) {
        ctx->pc = 0x1E2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B60u;
        // 0x1e2b64: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B68u;
        goto label_1e2b68;
    }
    ctx->pc = 0x1E2B60u;
    {
        const bool branch_taken_0x1e2b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B60u;
        // 0x1e2b64: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b60) {
            ctx->pc = 0x1E2D20u;
            goto label_1e2d20;
        }
    }
    ctx->pc = 0x1E2B68u;
label_1e2b68:
    // 0x1e2b68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e2b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b6c:
    // 0x1e2b6c: 0x0  nop
    ctx->pc = 0x1e2b6cu;
    // NOP
label_1e2b70:
    // 0x1e2b70: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e2b74:
    // 0x1e2b74: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e2b78:
    // 0x1e2b78: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x1e2b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1e2b7c:
    // 0x1e2b7c: 0x86640030  lh          $a0, 0x30($s3)
    ctx->pc = 0x1e2b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e2b80:
    // 0x1e2b80: 0x10820061  beq         $a0, $v0, . + 4 + (0x61 << 2)
label_1e2b84:
    if (ctx->pc == 0x1E2B84u) {
        ctx->pc = 0x1E2B88u;
        goto label_1e2b88;
    }
    ctx->pc = 0x1E2B80u;
    {
        const bool branch_taken_0x1e2b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2b80) {
            ctx->pc = 0x1E2D08u;
            goto label_1e2d08;
        }
    }
    ctx->pc = 0x1E2B88u;
label_1e2b88:
    // 0x1e2b88: 0x90a20017  lbu         $v0, 0x17($a1)
    ctx->pc = 0x1e2b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 23)));
label_1e2b8c:
    // 0x1e2b8c: 0x86630032  lh          $v1, 0x32($s3)
    ctx->pc = 0x1e2b8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e2b90:
    // 0x1e2b90: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e2b90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2b94:
    // 0x1e2b94: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_1e2b98:
    if (ctx->pc == 0x1E2B98u) {
        ctx->pc = 0x1E2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B94u;
        // 0x1e2b98: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B9Cu;
        goto label_1e2b9c;
    }
    ctx->pc = 0x1E2B94u;
    {
        const bool branch_taken_0x1e2b94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B94u;
        // 0x1e2b98: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b94) {
            ctx->pc = 0x1E2BA8u;
            goto label_1e2ba8;
        }
    }
    ctx->pc = 0x1E2B9Cu;
label_1e2b9c:
    // 0x1e2b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e2ba0:
    // 0x1e2ba0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e2ba4:
    if (ctx->pc == 0x1E2BA4u) {
        ctx->pc = 0x1E2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BA0u;
        // 0x1e2ba4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BA8u;
        goto label_1e2ba8;
    }
    ctx->pc = 0x1E2BA0u;
    {
        const bool branch_taken_0x1e2ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BA0u;
        // 0x1e2ba4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ba0) {
            ctx->pc = 0x1E2BB4u;
            goto label_1e2bb4;
        }
    }
    ctx->pc = 0x1E2BA8u;
label_1e2ba8:
    // 0x1e2ba8: 0xc0767d4  jal         func_1D9F50
label_1e2bac:
    if (ctx->pc == 0x1E2BACu) {
        ctx->pc = 0x1E2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BA8u;
        // 0x1e2bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BB0u;
        goto label_1e2bb0;
    }
    ctx->pc = 0x1E2BA8u;
    SET_GPR_U32(ctx, 31, 0x1E2BB0u);
    ctx->pc = 0x1E2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BA8u;
    // 0x1e2bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E2BA8u, 0x1E2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BB0u;
label_1e2bb0:
    // 0x1e2bb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2bb4:
    // 0x1e2bb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e2bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e2bb8:
    // 0x1e2bb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e2bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e2bbc:
    // 0x1e2bbc: 0x0  nop
    ctx->pc = 0x1e2bbcu;
    // NOP
label_1e2bc0:
    // 0x1e2bc0: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x1e2bc0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1e2bc4:
    // 0x1e2bc4: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1e2bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2bc8:
    // 0x1e2bc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e2bcc:
    if (ctx->pc == 0x1E2BCCu) {
        ctx->pc = 0x1E2BD0u;
        goto label_1e2bd0;
    }
    ctx->pc = 0x1E2BC8u;
    {
        const bool branch_taken_0x1e2bc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2bc8) {
            ctx->pc = 0x1E2BD8u;
            goto label_1e2bd8;
        }
    }
    ctx->pc = 0x1E2BD0u;
label_1e2bd0:
    // 0x1e2bd0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1e2bd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1e2bd4:
    // 0x1e2bd4: 0x0  nop
    ctx->pc = 0x1e2bd4u;
    // NOP
label_1e2bd8:
    // 0x1e2bd8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e2bdc:
    // 0x1e2bdc: 0xc076690  jal         func_1D9A40
label_1e2be0:
    if (ctx->pc == 0x1E2BE0u) {
        ctx->pc = 0x1E2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BDCu;
        // 0x1e2be0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BE4u;
        goto label_1e2be4;
    }
    ctx->pc = 0x1E2BDCu;
    SET_GPR_U32(ctx, 31, 0x1E2BE4u);
    ctx->pc = 0x1E2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BDCu;
    // 0x1e2be0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E2BDCu, 0x1E2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BE4u;
label_1e2be4:
    // 0x1e2be4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e2be8:
    // 0x1e2be8: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1e2be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e2bec:
    // 0x1e2bec: 0xc0766a8  jal         func_1D9AA0
label_1e2bf0:
    if (ctx->pc == 0x1E2BF0u) {
        ctx->pc = 0x1E2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BECu;
        // 0x1e2bf0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BF4u;
        goto label_1e2bf4;
    }
    ctx->pc = 0x1E2BECu;
    SET_GPR_U32(ctx, 31, 0x1E2BF4u);
    ctx->pc = 0x1E2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2BECu;
    // 0x1e2bf0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E2BECu, 0x1E2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2BF4u;
label_1e2bf4:
    // 0x1e2bf4: 0x86630038  lh          $v1, 0x38($s3)
    ctx->pc = 0x1e2bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e2bf8:
    // 0x1e2bf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e2bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bfc:
    // 0x1e2bfc: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1e2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1e2c00:
    // 0x1e2c00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e2c04:
    // 0x1e2c04: 0xc078ba8  jal         func_1E2EA0
label_1e2c08:
    if (ctx->pc == 0x1E2C08u) {
        ctx->pc = 0x1E2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C04u;
        // 0x1e2c08: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C0Cu;
        goto label_1e2c0c;
    }
    ctx->pc = 0x1E2C04u;
    SET_GPR_U32(ctx, 31, 0x1E2C0Cu);
    ctx->pc = 0x1E2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2C04u;
    // 0x1e2c08: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x1E2C04u, 0x1E2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C0Cu;
label_1e2c0c:
    // 0x1e2c0c: 0x86620038  lh          $v0, 0x38($s3)
    ctx->pc = 0x1e2c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e2c10:
    // 0x1e2c10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2c14:
    // 0x1e2c14: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x1e2c14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e2c18:
    // 0x1e2c18: 0x86630038  lh          $v1, 0x38($s3)
    ctx->pc = 0x1e2c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_1e2c1c:
    // 0x1e2c1c: 0x8662003e  lh          $v0, 0x3E($s3)
    ctx->pc = 0x1e2c1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
label_1e2c20:
    // 0x1e2c20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e2c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e2c24:
    // 0x1e2c24: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x1e2c24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e2c28:
    // 0x1e2c28: 0x8663003a  lh          $v1, 0x3A($s3)
    ctx->pc = 0x1e2c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_1e2c2c:
    // 0x1e2c2c: 0x8662003c  lh          $v0, 0x3C($s3)
    ctx->pc = 0x1e2c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_1e2c30:
    // 0x1e2c30: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e2c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2c34:
    // 0x1e2c34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1e2c38:
    if (ctx->pc == 0x1E2C38u) {
        ctx->pc = 0x1E2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C34u;
        // 0x1e2c38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C3Cu;
        goto label_1e2c3c;
    }
    ctx->pc = 0x1E2C34u;
    {
        const bool branch_taken_0x1e2c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C34u;
        // 0x1e2c38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c34) {
            ctx->pc = 0x1E2C40u;
            goto label_1e2c40;
        }
    }
    ctx->pc = 0x1E2C3Cu;
label_1e2c3c:
    // 0x1e2c3c: 0xa662003a  sh          $v0, 0x3A($s3)
    ctx->pc = 0x1e2c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 58), (uint16_t)GPR_U32(ctx, 2));
label_1e2c40:
    // 0x1e2c40: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2c44:
    // 0x1e2c44: 0x90420015  lbu         $v0, 0x15($v0)
    ctx->pc = 0x1e2c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_1e2c48:
    // 0x1e2c48: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e2c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e2c4c:
    // 0x1e2c4c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1e2c50:
    if (ctx->pc == 0x1E2C50u) {
        ctx->pc = 0x1E2C54u;
        goto label_1e2c54;
    }
    ctx->pc = 0x1E2C4Cu;
    {
        const bool branch_taken_0x1e2c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c4c) {
            ctx->pc = 0x1E2CD8u;
            goto label_1e2cd8;
        }
    }
    ctx->pc = 0x1E2C54u;
label_1e2c54:
    // 0x1e2c54: 0x86660048  lh          $a2, 0x48($s3)
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
label_1e2c58:
    // 0x1e2c58: 0x86640030  lh          $a0, 0x30($s3)
    ctx->pc = 0x1e2c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e2c5c:
    // 0x1e2c5c: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x1e2c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e2c60:
    // 0x1e2c60: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1e2c64:
    if (ctx->pc == 0x1E2C64u) {
        ctx->pc = 0x1E2C68u;
        goto label_1e2c68;
    }
    ctx->pc = 0x1E2C60u;
    {
        const bool branch_taken_0x1e2c60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c60) {
            ctx->pc = 0x1E2C90u;
            goto label_1e2c90;
        }
    }
    ctx->pc = 0x1E2C68u;
label_1e2c68:
    // 0x1e2c68: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_1e2c6c:
    if (ctx->pc == 0x1E2C6Cu) {
        ctx->pc = 0x1E2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C68u;
        // 0x1e2c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C70u;
        goto label_1e2c70;
    }
    ctx->pc = 0x1E2C68u;
    {
        const bool branch_taken_0x1e2c68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C68u;
        // 0x1e2c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c68) {
            ctx->pc = 0x1E2C80u;
            goto label_1e2c80;
        }
    }
    ctx->pc = 0x1E2C70u;
label_1e2c70:
    // 0x1e2c70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2c74:
    // 0x1e2c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e2c78:
    // 0x1e2c78: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e2c7c:
    if (ctx->pc == 0x1E2C7Cu) {
        ctx->pc = 0x1E2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C78u;
        // 0x1e2c7c: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C80u;
        goto label_1e2c80;
    }
    ctx->pc = 0x1E2C78u;
    {
        const bool branch_taken_0x1e2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C78u;
        // 0x1e2c7c: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c78) {
            ctx->pc = 0x1E2C8Cu;
            goto label_1e2c8c;
        }
    }
    ctx->pc = 0x1E2C80u;
label_1e2c80:
    // 0x1e2c80: 0xc0767d4  jal         func_1D9F50
label_1e2c84:
    if (ctx->pc == 0x1E2C84u) {
        ctx->pc = 0x1E2C88u;
        goto label_1e2c88;
    }
    ctx->pc = 0x1E2C80u;
    SET_GPR_U32(ctx, 31, 0x1E2C88u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E2C80u, 0x1E2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2C88u;
label_1e2c88:
    // 0x1e2c88: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1e2c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1e2c8c:
    // 0x1e2c8c: 0x0  nop
    ctx->pc = 0x1e2c8cu;
    // NOP
label_1e2c90:
    // 0x1e2c90: 0x8665004a  lh          $a1, 0x4A($s3)
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 74)));
label_1e2c94:
    // 0x1e2c94: 0x86640030  lh          $a0, 0x30($s3)
    ctx->pc = 0x1e2c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e2c98:
    // 0x1e2c98: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1e2c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e2c9c:
    // 0x1e2c9c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e2ca0:
    if (ctx->pc == 0x1E2CA0u) {
        ctx->pc = 0x1E2CA4u;
        goto label_1e2ca4;
    }
    ctx->pc = 0x1E2C9Cu;
    {
        const bool branch_taken_0x1e2c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c9c) {
            ctx->pc = 0x1E2CD8u;
            goto label_1e2cd8;
        }
    }
    ctx->pc = 0x1E2CA4u;
label_1e2ca4:
    // 0x1e2ca4: 0x86660032  lh          $a2, 0x32($s3)
    ctx->pc = 0x1e2ca4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e2ca8:
    // 0x1e2ca8: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_1e2cac:
    if (ctx->pc == 0x1E2CACu) {
        ctx->pc = 0x1E2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CA8u;
        // 0x1e2cac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CB0u;
        goto label_1e2cb0;
    }
    ctx->pc = 0x1E2CA8u;
    {
        const bool branch_taken_0x1e2ca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CA8u;
        // 0x1e2cac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ca8) {
            ctx->pc = 0x1E2CBCu;
            goto label_1e2cbc;
        }
    }
    ctx->pc = 0x1E2CB0u;
label_1e2cb0:
    // 0x1e2cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e2cb4:
    // 0x1e2cb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e2cb8:
    if (ctx->pc == 0x1E2CB8u) {
        ctx->pc = 0x1E2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CB4u;
        // 0x1e2cb8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CBCu;
        goto label_1e2cbc;
    }
    ctx->pc = 0x1E2CB4u;
    {
        const bool branch_taken_0x1e2cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CB4u;
        // 0x1e2cb8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cb4) {
            ctx->pc = 0x1E2CC8u;
            goto label_1e2cc8;
        }
    }
    ctx->pc = 0x1E2CBCu;
label_1e2cbc:
    // 0x1e2cbc: 0xc0767d4  jal         func_1D9F50
label_1e2cc0:
    if (ctx->pc == 0x1E2CC0u) {
        ctx->pc = 0x1E2CC4u;
        goto label_1e2cc4;
    }
    ctx->pc = 0x1E2CBCu;
    SET_GPR_U32(ctx, 31, 0x1E2CC4u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E2CBCu, 0x1E2CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2CC4u;
label_1e2cc4:
    // 0x1e2cc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2cc8:
    // 0x1e2cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e2cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e2ccc:
    // 0x1e2ccc: 0x0  nop
    ctx->pc = 0x1e2cccu;
    // NOP
label_1e2cd0:
    // 0x1e2cd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e2cd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e2cd4:
    // 0x1e2cd4: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1e2cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1e2cd8:
    // 0x1e2cd8: 0x86620030  lh          $v0, 0x30($s3)
    ctx->pc = 0x1e2cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e2cdc:
    // 0x1e2cdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2ce0:
    // 0x1e2ce0: 0xa6620030  sh          $v0, 0x30($s3)
    ctx->pc = 0x1e2ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
label_1e2ce4:
    // 0x1e2ce4: 0x86630030  lh          $v1, 0x30($s3)
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_1e2ce8:
    // 0x1e2ce8: 0x86620032  lh          $v0, 0x32($s3)
    ctx->pc = 0x1e2ce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
label_1e2cec:
    // 0x1e2cec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1e2cecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e2cf0:
    // 0x1e2cf0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e2cf4:
    if (ctx->pc == 0x1E2CF4u) {
        ctx->pc = 0x1E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF0u;
        // 0x1e2cf4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CF8u;
        goto label_1e2cf8;
    }
    ctx->pc = 0x1E2CF0u;
    {
        const bool branch_taken_0x1e2cf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF0u;
        // 0x1e2cf4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cf0) {
            ctx->pc = 0x1E2D00u;
            goto label_1e2d00;
        }
    }
    ctx->pc = 0x1E2CF8u;
label_1e2cf8:
    // 0x1e2cf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e2cfc:
    if (ctx->pc == 0x1E2CFCu) {
        ctx->pc = 0x1E2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF8u;
        // 0x1e2cfc: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D00u;
        goto label_1e2d00;
    }
    ctx->pc = 0x1E2CF8u;
    {
        const bool branch_taken_0x1e2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF8u;
        // 0x1e2cfc: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cf8) {
            ctx->pc = 0x1E2D08u;
            goto label_1e2d08;
        }
    }
    ctx->pc = 0x1E2D00u;
label_1e2d00:
    // 0x1e2d00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e2d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e2d04:
    // 0x1e2d04: 0x0  nop
    ctx->pc = 0x1e2d04u;
    // NOP
label_1e2d08:
    // 0x1e2d08: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1e2d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2d0c:
    // 0x1e2d0c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e2d0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e2d10:
    // 0x1e2d10: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1e2d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1e2d14:
    // 0x1e2d14: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e2d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2d18:
    // 0x1e2d18: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_1e2d1c:
    if (ctx->pc == 0x1E2D1Cu) {
        ctx->pc = 0x1E2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D18u;
        // 0x1e2d1c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D20u;
        goto label_1e2d20;
    }
    ctx->pc = 0x1E2D18u;
    {
        const bool branch_taken_0x1e2d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D18u;
        // 0x1e2d1c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d18) {
            ctx->pc = 0x1E2B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2b70;
        }
    }
    ctx->pc = 0x1E2D20u;
label_1e2d20:
    // 0x1e2d20: 0xa212003d  sb          $s2, 0x3D($s0)
    ctx->pc = 0x1e2d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 18));
label_1e2d24:
    // 0x1e2d24: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e2d28:
    // 0x1e2d28: 0x78420040  lq          $v0, 0x40($v0)
    ctx->pc = 0x1e2d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_1e2d2c:
    // 0x1e2d2c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e2d30:
    // 0x1e2d30: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2d34:
    // 0x1e2d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2d38:
    // 0x1e2d38: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e2d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e2d3c:
    // 0x1e2d3c: 0x9203003d  lbu         $v1, 0x3D($s0)
    ctx->pc = 0x1e2d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_1e2d40:
    // 0x1e2d40: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x1e2d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_1e2d44:
    // 0x1e2d44: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e2d44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e2d48:
    // 0x1e2d48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e2d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2d4c:
    // 0x1e2d4c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e2d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e2d50:
    // 0x1e2d50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e2d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e2d54:
    // 0x1e2d54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1e2d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e2d58:
    // 0x1e2d58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e2d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e2d5c:
    // 0x1e2d5c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e2d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1e2d60:
    // 0x1e2d60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e2d64:
    if (ctx->pc == 0x1E2D64u) {
        ctx->pc = 0x1E2D68u;
        goto label_1e2d68;
    }
    ctx->pc = 0x1E2D60u;
    {
        const bool branch_taken_0x1e2d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2d60) {
            ctx->pc = 0x1E2D80u;
            goto label_1e2d80;
        }
    }
    ctx->pc = 0x1E2D68u;
label_1e2d68:
    // 0x1e2d68: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e2d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e2d6c:
    // 0x1e2d6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e2d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e2d70:
    // 0x1e2d70: 0x320f809  jalr        $t9
label_1e2d74:
    if (ctx->pc == 0x1E2D74u) {
        ctx->pc = 0x1E2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D70u;
        // 0x1e2d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D78u;
        goto label_1e2d78;
    }
    ctx->pc = 0x1E2D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2D78u);
        ctx->pc = 0x1E2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D70u;
        // 0x1e2d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2D70u, 0x1E2D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2D78u;
label_1e2d78:
    // 0x1e2d78: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e2d7c:
    if (ctx->pc == 0x1E2D7Cu) {
        ctx->pc = 0x1E2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D78u;
        // 0x1e2d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D80u;
        goto label_1e2d80;
    }
    ctx->pc = 0x1E2D78u;
    {
        const bool branch_taken_0x1e2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D78u;
        // 0x1e2d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d78) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E2D80u;
label_1e2d80:
    // 0x1e2d80: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_1e2d84:
    // 0x1e2d84: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e2d88:
    // 0x1e2d88: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1e2d8c:
    if (ctx->pc == 0x1E2D8Cu) {
        ctx->pc = 0x1E2D90u;
        goto label_1e2d90;
    }
    ctx->pc = 0x1E2D88u;
    {
        const bool branch_taken_0x1e2d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2d88) {
            ctx->pc = 0x1E2DB0u;
            goto label_1e2db0;
        }
    }
    ctx->pc = 0x1E2D90u;
label_1e2d90:
    // 0x1e2d90: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2d94:
    // 0x1e2d94: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e2d94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e2d98:
    // 0x1e2d98: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_1e2d9c:
    if (ctx->pc == 0x1E2D9Cu) {
        ctx->pc = 0x1E2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D98u;
        // 0x1e2d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DA0u;
        goto label_1e2da0;
    }
    ctx->pc = 0x1E2D98u;
    {
        const bool branch_taken_0x1e2d98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D98u;
        // 0x1e2d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d98) {
            ctx->pc = 0x1E2DF0u;
            goto label_1e2df0;
        }
    }
    ctx->pc = 0x1E2DA0u;
label_1e2da0:
    // 0x1e2da0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e2da0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e2da4:
    // 0x1e2da4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e2da8:
    if (ctx->pc == 0x1E2DA8u) {
        ctx->pc = 0x1E2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DA4u;
        // 0x1e2da8: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DACu;
        goto label_1e2dac;
    }
    ctx->pc = 0x1E2DA4u;
    {
        const bool branch_taken_0x1e2da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DA4u;
        // 0x1e2da8: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2da4) {
            ctx->pc = 0x1E2DF0u;
            goto label_1e2df0;
        }
    }
    ctx->pc = 0x1E2DACu;
label_1e2dac:
    // 0x1e2dac: 0x0  nop
    ctx->pc = 0x1e2dacu;
    // NOP
label_1e2db0:
    // 0x1e2db0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e2db0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2db4:
    // 0x1e2db4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e2db4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2db8:
    // 0x1e2db8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1e2dbc:
    if (ctx->pc == 0x1E2DBCu) {
        ctx->pc = 0x1E2DC0u;
        goto label_1e2dc0;
    }
    ctx->pc = 0x1E2DB8u;
    {
        const bool branch_taken_0x1e2db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2db8) {
            ctx->pc = 0x1E2DF0u;
            goto label_1e2df0;
        }
    }
    ctx->pc = 0x1E2DC0u;
label_1e2dc0:
    // 0x1e2dc0: 0x28427ff1  slti        $v0, $v0, 0x7FF1
    ctx->pc = 0x1e2dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e2dc4:
    // 0x1e2dc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e2dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e2dc8:
    // 0x1e2dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e2dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e2dcc:
    // 0x1e2dcc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e2dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e2dd0:
    // 0x1e2dd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e2dd4:
    if (ctx->pc == 0x1E2DD4u) {
        ctx->pc = 0x1E2DD8u;
        goto label_1e2dd8;
    }
    ctx->pc = 0x1E2DD0u;
    {
        const bool branch_taken_0x1e2dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2dd0) {
            ctx->pc = 0x1E2DF0u;
            goto label_1e2df0;
        }
    }
    ctx->pc = 0x1E2DD8u;
label_1e2dd8:
    // 0x1e2dd8: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e2dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e2ddc:
    // 0x1e2ddc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e2de0:
    // 0x1e2de0: 0x320f809  jalr        $t9
label_1e2de4:
    if (ctx->pc == 0x1E2DE4u) {
        ctx->pc = 0x1E2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DE0u;
        // 0x1e2de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DE8u;
        goto label_1e2de8;
    }
    ctx->pc = 0x1E2DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2DE8u);
        ctx->pc = 0x1E2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DE0u;
        // 0x1e2de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2DE0u, 0x1E2DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2DE8u;
label_1e2de8:
    // 0x1e2de8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e2dec:
    if (ctx->pc == 0x1E2DECu) {
        ctx->pc = 0x1E2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DE8u;
        // 0x1e2dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DF0u;
        goto label_1e2df0;
    }
    ctx->pc = 0x1E2DE8u;
    {
        const bool branch_taken_0x1e2de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DE8u;
        // 0x1e2dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2de8) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E2DF0u;
label_1e2df0:
    // 0x1e2df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2df4:
    // 0x1e2df4: 0x0  nop
    ctx->pc = 0x1e2df4u;
    // NOP
label_1e2df8:
    // 0x1e2df8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e2df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e2dfc:
    // 0x1e2dfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e2dfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e2e00:
    // 0x1e2e00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e2e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2e04:
    // 0x1e2e04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e2e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2e08:
    // 0x1e2e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2e0c:
    // 0x1e2e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2e10:
    // 0x1e2e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2e14:
    // 0x1e2e14: 0x3e00008  jr          $ra
label_1e2e18:
    if (ctx->pc == 0x1E2E18u) {
        ctx->pc = 0x1E2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E14u;
        // 0x1e2e18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E1Cu;
        goto label_fallthrough_0x1e2e14;
    }
    ctx->pc = 0x1E2E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E14u;
        // 0x1e2e18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2e14:
    ctx->pc = 0x1E2E1Cu;
}
