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

// Function: sub_002999D0
// Address: 0x2999d0 - 0x29a0cc
void sub_002999D0_0x2999d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002999D0_0x2999d0");
#endif

    switch (ctx->pc) {
        case 0x2999d0u: goto label_2999d0;
        case 0x2999d4u: goto label_2999d4;
        case 0x2999d8u: goto label_2999d8;
        case 0x2999dcu: goto label_2999dc;
        case 0x2999e0u: goto label_2999e0;
        case 0x2999e4u: goto label_2999e4;
        case 0x2999e8u: goto label_2999e8;
        case 0x2999ecu: goto label_2999ec;
        case 0x2999f0u: goto label_2999f0;
        case 0x2999f4u: goto label_2999f4;
        case 0x2999f8u: goto label_2999f8;
        case 0x2999fcu: goto label_2999fc;
        case 0x299a00u: goto label_299a00;
        case 0x299a04u: goto label_299a04;
        case 0x299a08u: goto label_299a08;
        case 0x299a0cu: goto label_299a0c;
        case 0x299a10u: goto label_299a10;
        case 0x299a14u: goto label_299a14;
        case 0x299a18u: goto label_299a18;
        case 0x299a1cu: goto label_299a1c;
        case 0x299a20u: goto label_299a20;
        case 0x299a24u: goto label_299a24;
        case 0x299a28u: goto label_299a28;
        case 0x299a2cu: goto label_299a2c;
        case 0x299a30u: goto label_299a30;
        case 0x299a34u: goto label_299a34;
        case 0x299a38u: goto label_299a38;
        case 0x299a3cu: goto label_299a3c;
        case 0x299a40u: goto label_299a40;
        case 0x299a44u: goto label_299a44;
        case 0x299a48u: goto label_299a48;
        case 0x299a4cu: goto label_299a4c;
        case 0x299a50u: goto label_299a50;
        case 0x299a54u: goto label_299a54;
        case 0x299a58u: goto label_299a58;
        case 0x299a5cu: goto label_299a5c;
        case 0x299a60u: goto label_299a60;
        case 0x299a64u: goto label_299a64;
        case 0x299a68u: goto label_299a68;
        case 0x299a6cu: goto label_299a6c;
        case 0x299a70u: goto label_299a70;
        case 0x299a74u: goto label_299a74;
        case 0x299a78u: goto label_299a78;
        case 0x299a7cu: goto label_299a7c;
        case 0x299a80u: goto label_299a80;
        case 0x299a84u: goto label_299a84;
        case 0x299a88u: goto label_299a88;
        case 0x299a8cu: goto label_299a8c;
        case 0x299a90u: goto label_299a90;
        case 0x299a94u: goto label_299a94;
        case 0x299a98u: goto label_299a98;
        case 0x299a9cu: goto label_299a9c;
        case 0x299aa0u: goto label_299aa0;
        case 0x299aa4u: goto label_299aa4;
        case 0x299aa8u: goto label_299aa8;
        case 0x299aacu: goto label_299aac;
        case 0x299ab0u: goto label_299ab0;
        case 0x299ab4u: goto label_299ab4;
        case 0x299ab8u: goto label_299ab8;
        case 0x299abcu: goto label_299abc;
        case 0x299ac0u: goto label_299ac0;
        case 0x299ac4u: goto label_299ac4;
        case 0x299ac8u: goto label_299ac8;
        case 0x299accu: goto label_299acc;
        case 0x299ad0u: goto label_299ad0;
        case 0x299ad4u: goto label_299ad4;
        case 0x299ad8u: goto label_299ad8;
        case 0x299adcu: goto label_299adc;
        case 0x299ae0u: goto label_299ae0;
        case 0x299ae4u: goto label_299ae4;
        case 0x299ae8u: goto label_299ae8;
        case 0x299aecu: goto label_299aec;
        case 0x299af0u: goto label_299af0;
        case 0x299af4u: goto label_299af4;
        case 0x299af8u: goto label_299af8;
        case 0x299afcu: goto label_299afc;
        case 0x299b00u: goto label_299b00;
        case 0x299b04u: goto label_299b04;
        case 0x299b08u: goto label_299b08;
        case 0x299b0cu: goto label_299b0c;
        case 0x299b10u: goto label_299b10;
        case 0x299b14u: goto label_299b14;
        case 0x299b18u: goto label_299b18;
        case 0x299b1cu: goto label_299b1c;
        case 0x299b20u: goto label_299b20;
        case 0x299b24u: goto label_299b24;
        case 0x299b28u: goto label_299b28;
        case 0x299b2cu: goto label_299b2c;
        case 0x299b30u: goto label_299b30;
        case 0x299b34u: goto label_299b34;
        case 0x299b38u: goto label_299b38;
        case 0x299b3cu: goto label_299b3c;
        case 0x299b40u: goto label_299b40;
        case 0x299b44u: goto label_299b44;
        case 0x299b48u: goto label_299b48;
        case 0x299b4cu: goto label_299b4c;
        case 0x299b50u: goto label_299b50;
        case 0x299b54u: goto label_299b54;
        case 0x299b58u: goto label_299b58;
        case 0x299b5cu: goto label_299b5c;
        case 0x299b60u: goto label_299b60;
        case 0x299b64u: goto label_299b64;
        case 0x299b68u: goto label_299b68;
        case 0x299b6cu: goto label_299b6c;
        case 0x299b70u: goto label_299b70;
        case 0x299b74u: goto label_299b74;
        case 0x299b78u: goto label_299b78;
        case 0x299b7cu: goto label_299b7c;
        case 0x299b80u: goto label_299b80;
        case 0x299b84u: goto label_299b84;
        case 0x299b88u: goto label_299b88;
        case 0x299b8cu: goto label_299b8c;
        case 0x299b90u: goto label_299b90;
        case 0x299b94u: goto label_299b94;
        case 0x299b98u: goto label_299b98;
        case 0x299b9cu: goto label_299b9c;
        case 0x299ba0u: goto label_299ba0;
        case 0x299ba4u: goto label_299ba4;
        case 0x299ba8u: goto label_299ba8;
        case 0x299bacu: goto label_299bac;
        case 0x299bb0u: goto label_299bb0;
        case 0x299bb4u: goto label_299bb4;
        case 0x299bb8u: goto label_299bb8;
        case 0x299bbcu: goto label_299bbc;
        case 0x299bc0u: goto label_299bc0;
        case 0x299bc4u: goto label_299bc4;
        case 0x299bc8u: goto label_299bc8;
        case 0x299bccu: goto label_299bcc;
        case 0x299bd0u: goto label_299bd0;
        case 0x299bd4u: goto label_299bd4;
        case 0x299bd8u: goto label_299bd8;
        case 0x299bdcu: goto label_299bdc;
        case 0x299be0u: goto label_299be0;
        case 0x299be4u: goto label_299be4;
        case 0x299be8u: goto label_299be8;
        case 0x299becu: goto label_299bec;
        case 0x299bf0u: goto label_299bf0;
        case 0x299bf4u: goto label_299bf4;
        case 0x299bf8u: goto label_299bf8;
        case 0x299bfcu: goto label_299bfc;
        case 0x299c00u: goto label_299c00;
        case 0x299c04u: goto label_299c04;
        case 0x299c08u: goto label_299c08;
        case 0x299c0cu: goto label_299c0c;
        case 0x299c10u: goto label_299c10;
        case 0x299c14u: goto label_299c14;
        case 0x299c18u: goto label_299c18;
        case 0x299c1cu: goto label_299c1c;
        case 0x299c20u: goto label_299c20;
        case 0x299c24u: goto label_299c24;
        case 0x299c28u: goto label_299c28;
        case 0x299c2cu: goto label_299c2c;
        case 0x299c30u: goto label_299c30;
        case 0x299c34u: goto label_299c34;
        case 0x299c38u: goto label_299c38;
        case 0x299c3cu: goto label_299c3c;
        case 0x299c40u: goto label_299c40;
        case 0x299c44u: goto label_299c44;
        case 0x299c48u: goto label_299c48;
        case 0x299c4cu: goto label_299c4c;
        case 0x299c50u: goto label_299c50;
        case 0x299c54u: goto label_299c54;
        case 0x299c58u: goto label_299c58;
        case 0x299c5cu: goto label_299c5c;
        case 0x299c60u: goto label_299c60;
        case 0x299c64u: goto label_299c64;
        case 0x299c68u: goto label_299c68;
        case 0x299c6cu: goto label_299c6c;
        case 0x299c70u: goto label_299c70;
        case 0x299c74u: goto label_299c74;
        case 0x299c78u: goto label_299c78;
        case 0x299c7cu: goto label_299c7c;
        case 0x299c80u: goto label_299c80;
        case 0x299c84u: goto label_299c84;
        case 0x299c88u: goto label_299c88;
        case 0x299c8cu: goto label_299c8c;
        case 0x299c90u: goto label_299c90;
        case 0x299c94u: goto label_299c94;
        case 0x299c98u: goto label_299c98;
        case 0x299c9cu: goto label_299c9c;
        case 0x299ca0u: goto label_299ca0;
        case 0x299ca4u: goto label_299ca4;
        case 0x299ca8u: goto label_299ca8;
        case 0x299cacu: goto label_299cac;
        case 0x299cb0u: goto label_299cb0;
        case 0x299cb4u: goto label_299cb4;
        case 0x299cb8u: goto label_299cb8;
        case 0x299cbcu: goto label_299cbc;
        case 0x299cc0u: goto label_299cc0;
        case 0x299cc4u: goto label_299cc4;
        case 0x299cc8u: goto label_299cc8;
        case 0x299cccu: goto label_299ccc;
        case 0x299cd0u: goto label_299cd0;
        case 0x299cd4u: goto label_299cd4;
        case 0x299cd8u: goto label_299cd8;
        case 0x299cdcu: goto label_299cdc;
        case 0x299ce0u: goto label_299ce0;
        case 0x299ce4u: goto label_299ce4;
        case 0x299ce8u: goto label_299ce8;
        case 0x299cecu: goto label_299cec;
        case 0x299cf0u: goto label_299cf0;
        case 0x299cf4u: goto label_299cf4;
        case 0x299cf8u: goto label_299cf8;
        case 0x299cfcu: goto label_299cfc;
        case 0x299d00u: goto label_299d00;
        case 0x299d04u: goto label_299d04;
        case 0x299d08u: goto label_299d08;
        case 0x299d0cu: goto label_299d0c;
        case 0x299d10u: goto label_299d10;
        case 0x299d14u: goto label_299d14;
        case 0x299d18u: goto label_299d18;
        case 0x299d1cu: goto label_299d1c;
        case 0x299d20u: goto label_299d20;
        case 0x299d24u: goto label_299d24;
        case 0x299d28u: goto label_299d28;
        case 0x299d2cu: goto label_299d2c;
        case 0x299d30u: goto label_299d30;
        case 0x299d34u: goto label_299d34;
        case 0x299d38u: goto label_299d38;
        case 0x299d3cu: goto label_299d3c;
        case 0x299d40u: goto label_299d40;
        case 0x299d44u: goto label_299d44;
        case 0x299d48u: goto label_299d48;
        case 0x299d4cu: goto label_299d4c;
        case 0x299d50u: goto label_299d50;
        case 0x299d54u: goto label_299d54;
        case 0x299d58u: goto label_299d58;
        case 0x299d5cu: goto label_299d5c;
        case 0x299d60u: goto label_299d60;
        case 0x299d64u: goto label_299d64;
        case 0x299d68u: goto label_299d68;
        case 0x299d6cu: goto label_299d6c;
        case 0x299d70u: goto label_299d70;
        case 0x299d74u: goto label_299d74;
        case 0x299d78u: goto label_299d78;
        case 0x299d7cu: goto label_299d7c;
        case 0x299d80u: goto label_299d80;
        case 0x299d84u: goto label_299d84;
        case 0x299d88u: goto label_299d88;
        case 0x299d8cu: goto label_299d8c;
        case 0x299d90u: goto label_299d90;
        case 0x299d94u: goto label_299d94;
        case 0x299d98u: goto label_299d98;
        case 0x299d9cu: goto label_299d9c;
        case 0x299da0u: goto label_299da0;
        case 0x299da4u: goto label_299da4;
        case 0x299da8u: goto label_299da8;
        case 0x299dacu: goto label_299dac;
        case 0x299db0u: goto label_299db0;
        case 0x299db4u: goto label_299db4;
        case 0x299db8u: goto label_299db8;
        case 0x299dbcu: goto label_299dbc;
        case 0x299dc0u: goto label_299dc0;
        case 0x299dc4u: goto label_299dc4;
        case 0x299dc8u: goto label_299dc8;
        case 0x299dccu: goto label_299dcc;
        case 0x299dd0u: goto label_299dd0;
        case 0x299dd4u: goto label_299dd4;
        case 0x299dd8u: goto label_299dd8;
        case 0x299ddcu: goto label_299ddc;
        case 0x299de0u: goto label_299de0;
        case 0x299de4u: goto label_299de4;
        case 0x299de8u: goto label_299de8;
        case 0x299decu: goto label_299dec;
        case 0x299df0u: goto label_299df0;
        case 0x299df4u: goto label_299df4;
        case 0x299df8u: goto label_299df8;
        case 0x299dfcu: goto label_299dfc;
        case 0x299e00u: goto label_299e00;
        case 0x299e04u: goto label_299e04;
        case 0x299e08u: goto label_299e08;
        case 0x299e0cu: goto label_299e0c;
        case 0x299e10u: goto label_299e10;
        case 0x299e14u: goto label_299e14;
        case 0x299e18u: goto label_299e18;
        case 0x299e1cu: goto label_299e1c;
        case 0x299e20u: goto label_299e20;
        case 0x299e24u: goto label_299e24;
        case 0x299e28u: goto label_299e28;
        case 0x299e2cu: goto label_299e2c;
        case 0x299e30u: goto label_299e30;
        case 0x299e34u: goto label_299e34;
        case 0x299e38u: goto label_299e38;
        case 0x299e3cu: goto label_299e3c;
        case 0x299e40u: goto label_299e40;
        case 0x299e44u: goto label_299e44;
        case 0x299e48u: goto label_299e48;
        case 0x299e4cu: goto label_299e4c;
        case 0x299e50u: goto label_299e50;
        case 0x299e54u: goto label_299e54;
        case 0x299e58u: goto label_299e58;
        case 0x299e5cu: goto label_299e5c;
        case 0x299e60u: goto label_299e60;
        case 0x299e64u: goto label_299e64;
        case 0x299e68u: goto label_299e68;
        case 0x299e6cu: goto label_299e6c;
        case 0x299e70u: goto label_299e70;
        case 0x299e74u: goto label_299e74;
        case 0x299e78u: goto label_299e78;
        case 0x299e7cu: goto label_299e7c;
        case 0x299e80u: goto label_299e80;
        case 0x299e84u: goto label_299e84;
        case 0x299e88u: goto label_299e88;
        case 0x299e8cu: goto label_299e8c;
        case 0x299e90u: goto label_299e90;
        case 0x299e94u: goto label_299e94;
        case 0x299e98u: goto label_299e98;
        case 0x299e9cu: goto label_299e9c;
        case 0x299ea0u: goto label_299ea0;
        case 0x299ea4u: goto label_299ea4;
        case 0x299ea8u: goto label_299ea8;
        case 0x299eacu: goto label_299eac;
        case 0x299eb0u: goto label_299eb0;
        case 0x299eb4u: goto label_299eb4;
        case 0x299eb8u: goto label_299eb8;
        case 0x299ebcu: goto label_299ebc;
        case 0x299ec0u: goto label_299ec0;
        case 0x299ec4u: goto label_299ec4;
        case 0x299ec8u: goto label_299ec8;
        case 0x299eccu: goto label_299ecc;
        case 0x299ed0u: goto label_299ed0;
        case 0x299ed4u: goto label_299ed4;
        case 0x299ed8u: goto label_299ed8;
        case 0x299edcu: goto label_299edc;
        case 0x299ee0u: goto label_299ee0;
        case 0x299ee4u: goto label_299ee4;
        case 0x299ee8u: goto label_299ee8;
        case 0x299eecu: goto label_299eec;
        case 0x299ef0u: goto label_299ef0;
        case 0x299ef4u: goto label_299ef4;
        case 0x299ef8u: goto label_299ef8;
        case 0x299efcu: goto label_299efc;
        case 0x299f00u: goto label_299f00;
        case 0x299f04u: goto label_299f04;
        case 0x299f08u: goto label_299f08;
        case 0x299f0cu: goto label_299f0c;
        case 0x299f10u: goto label_299f10;
        case 0x299f14u: goto label_299f14;
        case 0x299f18u: goto label_299f18;
        case 0x299f1cu: goto label_299f1c;
        case 0x299f20u: goto label_299f20;
        case 0x299f24u: goto label_299f24;
        case 0x299f28u: goto label_299f28;
        case 0x299f2cu: goto label_299f2c;
        case 0x299f30u: goto label_299f30;
        case 0x299f34u: goto label_299f34;
        case 0x299f38u: goto label_299f38;
        case 0x299f3cu: goto label_299f3c;
        case 0x299f40u: goto label_299f40;
        case 0x299f44u: goto label_299f44;
        case 0x299f48u: goto label_299f48;
        case 0x299f4cu: goto label_299f4c;
        case 0x299f50u: goto label_299f50;
        case 0x299f54u: goto label_299f54;
        case 0x299f58u: goto label_299f58;
        case 0x299f5cu: goto label_299f5c;
        case 0x299f60u: goto label_299f60;
        case 0x299f64u: goto label_299f64;
        case 0x299f68u: goto label_299f68;
        case 0x299f6cu: goto label_299f6c;
        case 0x299f70u: goto label_299f70;
        case 0x299f74u: goto label_299f74;
        case 0x299f78u: goto label_299f78;
        case 0x299f7cu: goto label_299f7c;
        case 0x299f80u: goto label_299f80;
        case 0x299f84u: goto label_299f84;
        case 0x299f88u: goto label_299f88;
        case 0x299f8cu: goto label_299f8c;
        case 0x299f90u: goto label_299f90;
        case 0x299f94u: goto label_299f94;
        case 0x299f98u: goto label_299f98;
        case 0x299f9cu: goto label_299f9c;
        case 0x299fa0u: goto label_299fa0;
        case 0x299fa4u: goto label_299fa4;
        case 0x299fa8u: goto label_299fa8;
        case 0x299facu: goto label_299fac;
        case 0x299fb0u: goto label_299fb0;
        case 0x299fb4u: goto label_299fb4;
        case 0x299fb8u: goto label_299fb8;
        case 0x299fbcu: goto label_299fbc;
        case 0x299fc0u: goto label_299fc0;
        case 0x299fc4u: goto label_299fc4;
        case 0x299fc8u: goto label_299fc8;
        case 0x299fccu: goto label_299fcc;
        case 0x299fd0u: goto label_299fd0;
        case 0x299fd4u: goto label_299fd4;
        case 0x299fd8u: goto label_299fd8;
        case 0x299fdcu: goto label_299fdc;
        case 0x299fe0u: goto label_299fe0;
        case 0x299fe4u: goto label_299fe4;
        case 0x299fe8u: goto label_299fe8;
        case 0x299fecu: goto label_299fec;
        case 0x299ff0u: goto label_299ff0;
        case 0x299ff4u: goto label_299ff4;
        case 0x299ff8u: goto label_299ff8;
        case 0x299ffcu: goto label_299ffc;
        case 0x29a000u: goto label_29a000;
        case 0x29a004u: goto label_29a004;
        case 0x29a008u: goto label_29a008;
        case 0x29a00cu: goto label_29a00c;
        case 0x29a010u: goto label_29a010;
        case 0x29a014u: goto label_29a014;
        case 0x29a018u: goto label_29a018;
        case 0x29a01cu: goto label_29a01c;
        case 0x29a020u: goto label_29a020;
        case 0x29a024u: goto label_29a024;
        case 0x29a028u: goto label_29a028;
        case 0x29a02cu: goto label_29a02c;
        case 0x29a030u: goto label_29a030;
        case 0x29a034u: goto label_29a034;
        case 0x29a038u: goto label_29a038;
        case 0x29a03cu: goto label_29a03c;
        case 0x29a040u: goto label_29a040;
        case 0x29a044u: goto label_29a044;
        case 0x29a048u: goto label_29a048;
        case 0x29a04cu: goto label_29a04c;
        case 0x29a050u: goto label_29a050;
        case 0x29a054u: goto label_29a054;
        case 0x29a058u: goto label_29a058;
        case 0x29a05cu: goto label_29a05c;
        case 0x29a060u: goto label_29a060;
        case 0x29a064u: goto label_29a064;
        case 0x29a068u: goto label_29a068;
        case 0x29a06cu: goto label_29a06c;
        case 0x29a070u: goto label_29a070;
        case 0x29a074u: goto label_29a074;
        case 0x29a078u: goto label_29a078;
        case 0x29a07cu: goto label_29a07c;
        case 0x29a080u: goto label_29a080;
        case 0x29a084u: goto label_29a084;
        case 0x29a088u: goto label_29a088;
        case 0x29a08cu: goto label_29a08c;
        case 0x29a090u: goto label_29a090;
        case 0x29a094u: goto label_29a094;
        case 0x29a098u: goto label_29a098;
        case 0x29a09cu: goto label_29a09c;
        case 0x29a0a0u: goto label_29a0a0;
        case 0x29a0a4u: goto label_29a0a4;
        case 0x29a0a8u: goto label_29a0a8;
        case 0x29a0acu: goto label_29a0ac;
        case 0x29a0b0u: goto label_29a0b0;
        case 0x29a0b4u: goto label_29a0b4;
        case 0x29a0b8u: goto label_29a0b8;
        case 0x29a0bcu: goto label_29a0bc;
        case 0x29a0c0u: goto label_29a0c0;
        case 0x29a0c4u: goto label_29a0c4;
        case 0x29a0c8u: goto label_29a0c8;
        default: break;
    }

    ctx->pc = 0x2999d0u;

label_2999d0:
    // 0x2999d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2999d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2999d4:
    // 0x2999d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2999d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2999d8:
    // 0x2999d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2999d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2999dc:
    // 0x2999dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2999dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2999e0:
    // 0x2999e0: 0xc0a6d4c  jal         func_29B530
label_2999e4:
    if (ctx->pc == 0x2999E4u) {
        ctx->pc = 0x2999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999E0u;
        // 0x2999e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2999E8u;
        goto label_2999e8;
    }
    ctx->pc = 0x2999E0u;
    SET_GPR_U32(ctx, 31, 0x2999E8u);
    ctx->pc = 0x2999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999E0u;
    // 0x2999e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B530u, 0x2999E0u, 0x2999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999E8u;
label_2999e8:
    // 0x2999e8: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2999e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2999ec:
    // 0x2999ec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2999f0:
    // 0x2999f0: 0x24630b9b  addiu       $v1, $v1, 0xB9B
    ctx->pc = 0x2999f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2971));
label_2999f4:
    // 0x2999f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2999f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2999f8:
    // 0x2999f8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2999f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2999fc:
    // 0x2999fc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2999fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_299a00:
    // 0x299a00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x299a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_299a04:
    // 0x299a04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_299a08:
    // 0x299a08: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x299a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_299a0c:
    // 0x299a0c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_299a10:
    if (ctx->pc == 0x299A10u) {
        ctx->pc = 0x299A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A0Cu;
        // 0x299a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299A14u;
        goto label_299a14;
    }
    ctx->pc = 0x299A0Cu;
    {
        const bool branch_taken_0x299a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A0Cu;
        // 0x299a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299a0c) {
            ctx->pc = 0x299A48u;
            goto label_299a48;
        }
    }
    ctx->pc = 0x299A14u;
label_299a14:
    // 0x299a14: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_299a18:
    if (ctx->pc == 0x299A18u) {
        ctx->pc = 0x299A1Cu;
        goto label_299a1c;
    }
    ctx->pc = 0x299A14u;
    {
        const bool branch_taken_0x299a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x299a14) {
            ctx->pc = 0x299A28u;
            goto label_299a28;
        }
    }
    ctx->pc = 0x299A1Cu;
label_299a1c:
    // 0x299a1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_299a20:
    if (ctx->pc == 0x299A20u) {
        ctx->pc = 0x299A24u;
        goto label_299a24;
    }
    ctx->pc = 0x299A1Cu;
    {
        const bool branch_taken_0x299a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299a1c) {
            ctx->pc = 0x299A70u;
            goto label_299a70;
        }
    }
    ctx->pc = 0x299A24u;
label_299a24:
    // 0x299a24: 0x0  nop
    ctx->pc = 0x299a24u;
    // NOP
label_299a28:
    // 0x299a28: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x299a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299a2c:
    // 0x299a2c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x299a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_299a30:
    // 0x299a30: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x299a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_299a34:
    // 0x299a34: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x299a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299a38:
    // 0x299a38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x299a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_299a3c:
    // 0x299a3c: 0x1000000c  b           . + 4 + (0xC << 2)
label_299a40:
    if (ctx->pc == 0x299A40u) {
        ctx->pc = 0x299A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A3Cu;
        // 0x299a40: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299A44u;
        goto label_299a44;
    }
    ctx->pc = 0x299A3Cu;
    {
        const bool branch_taken_0x299a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A3Cu;
        // 0x299a40: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299a3c) {
            ctx->pc = 0x299A70u;
            goto label_299a70;
        }
    }
    ctx->pc = 0x299A44u;
label_299a44:
    // 0x299a44: 0x0  nop
    ctx->pc = 0x299a44u;
    // NOP
label_299a48:
    // 0x299a48: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299a4c:
    // 0x299a4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_299a50:
    // 0x299a50: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x299a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_299a54:
    // 0x299a54: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x299a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_299a58:
    // 0x299a58: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299a5c:
    // 0x299a5c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x299a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_299a60:
    // 0x299a60: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x299a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_299a64:
    // 0x299a64: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299a68:
    // 0x299a68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_299a6c:
    // 0x299a6c: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x299a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_299a70:
    // 0x299a70: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x299a70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_299a74:
    // 0x299a74: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x299a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_299a78:
    // 0x299a78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x299a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_299a7c:
    // 0x299a7c: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x299a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
label_299a80:
    // 0x299a80: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x299a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_299a84:
    // 0x299a84: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x299a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_299a88:
    // 0x299a88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x299a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_299a8c:
    // 0x299a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_299a90:
    // 0x299a90: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x299a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_299a94:
    // 0x299a94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_299a98:
    if (ctx->pc == 0x299A98u) {
        ctx->pc = 0x299A9Cu;
        goto label_299a9c;
    }
    ctx->pc = 0x299A94u;
    {
        const bool branch_taken_0x299a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x299a94) {
            ctx->pc = 0x299AA8u;
            goto label_299aa8;
        }
    }
    ctx->pc = 0x299A9Cu;
label_299a9c:
    // 0x299a9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_299aa0:
    if (ctx->pc == 0x299AA0u) {
        ctx->pc = 0x299AA4u;
        goto label_299aa4;
    }
    ctx->pc = 0x299A9Cu;
    {
        const bool branch_taken_0x299a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299a9c) {
            ctx->pc = 0x299AB8u;
            goto label_299ab8;
        }
    }
    ctx->pc = 0x299AA4u;
label_299aa4:
    // 0x299aa4: 0x0  nop
    ctx->pc = 0x299aa4u;
    // NOP
label_299aa8:
    // 0x299aa8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299aac:
    // 0x299aac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_299ab0:
    // 0x299ab0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_299ab4:
    // 0x299ab4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x299ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_299ab8:
    // 0x299ab8: 0x92230781  lbu         $v1, 0x781($s1)
    ctx->pc = 0x299ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1921)));
label_299abc:
    // 0x299abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299ac0:
    // 0x299ac0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_299ac4:
    if (ctx->pc == 0x299AC4u) {
        ctx->pc = 0x299AC8u;
        goto label_299ac8;
    }
    ctx->pc = 0x299AC0u;
    {
        const bool branch_taken_0x299ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x299ac0) {
            ctx->pc = 0x299AE0u;
            goto label_299ae0;
        }
    }
    ctx->pc = 0x299AC8u;
label_299ac8:
    // 0x299ac8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299acc:
    // 0x299acc: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x299accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
label_299ad0:
    // 0x299ad0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x299ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_299ad4:
    // 0x299ad4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299ad8:
    // 0x299ad8: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x299ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_299adc:
    // 0x299adc: 0x0  nop
    ctx->pc = 0x299adcu;
    // NOP
label_299ae0:
    // 0x299ae0: 0x92220781  lbu         $v0, 0x781($s1)
    ctx->pc = 0x299ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1921)));
label_299ae4:
    // 0x299ae4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299ae8:
    if (ctx->pc == 0x299AE8u) {
        ctx->pc = 0x299AECu;
        goto label_299aec;
    }
    ctx->pc = 0x299AE4u;
    {
        const bool branch_taken_0x299ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ae4) {
            ctx->pc = 0x299AF8u;
            goto label_299af8;
        }
    }
    ctx->pc = 0x299AECu;
label_299aec:
    // 0x299aec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x299aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_299af0:
    // 0x299af0: 0xa2220781  sb          $v0, 0x781($s1)
    ctx->pc = 0x299af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1921), (uint8_t)GPR_U32(ctx, 2));
label_299af4:
    // 0x299af4: 0x0  nop
    ctx->pc = 0x299af4u;
    // NOP
label_299af8:
    // 0x299af8: 0xc0a55b4  jal         func_2956D0
label_299afc:
    if (ctx->pc == 0x299AFCu) {
        ctx->pc = 0x299AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299AF8u;
        // 0x299afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B00u;
        goto label_299b00;
    }
    ctx->pc = 0x299AF8u;
    SET_GPR_U32(ctx, 31, 0x299B00u);
    ctx->pc = 0x299AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299AF8u;
    // 0x299afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x299AF8u, 0x299B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B00u;
label_299b00:
    // 0x299b00: 0xc09f920  jal         func_27E480
label_299b04:
    if (ctx->pc == 0x299B04u) {
        ctx->pc = 0x299B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B00u;
        // 0x299b04: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B08u;
        goto label_299b08;
    }
    ctx->pc = 0x299B00u;
    SET_GPR_U32(ctx, 31, 0x299B08u);
    ctx->pc = 0x299B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B00u;
    // 0x299b04: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E480u, 0x299B00u, 0x299B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B08u;
label_299b08:
    // 0x299b08: 0x92220781  lbu         $v0, 0x781($s1)
    ctx->pc = 0x299b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1921)));
label_299b0c:
    // 0x299b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299b10:
    if (ctx->pc == 0x299B10u) {
        ctx->pc = 0x299B14u;
        goto label_299b14;
    }
    ctx->pc = 0x299B0Cu;
    {
        const bool branch_taken_0x299b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b0c) {
            ctx->pc = 0x299B20u;
            goto label_299b20;
        }
    }
    ctx->pc = 0x299B14u;
label_299b14:
    // 0x299b14: 0x92220782  lbu         $v0, 0x782($s1)
    ctx->pc = 0x299b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1922)));
label_299b18:
    // 0x299b18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_299b1c:
    if (ctx->pc == 0x299B1Cu) {
        ctx->pc = 0x299B20u;
        goto label_299b20;
    }
    ctx->pc = 0x299B18u;
    {
        const bool branch_taken_0x299b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b18) {
            ctx->pc = 0x299B30u;
            goto label_299b30;
        }
    }
    ctx->pc = 0x299B20u;
label_299b20:
    // 0x299b20: 0x962229de  lhu         $v0, 0x29DE($s1)
    ctx->pc = 0x299b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_299b24:
    // 0x299b24: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x299b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_299b28:
    // 0x299b28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_299b2c:
    if (ctx->pc == 0x299B2Cu) {
        ctx->pc = 0x299B30u;
        goto label_299b30;
    }
    ctx->pc = 0x299B28u;
    {
        const bool branch_taken_0x299b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b28) {
            ctx->pc = 0x299B40u;
            goto label_299b40;
        }
    }
    ctx->pc = 0x299B30u;
label_299b30:
    // 0x299b30: 0x8e2306b4  lw          $v1, 0x6B4($s1)
    ctx->pc = 0x299b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_299b34:
    // 0x299b34: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x299b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_299b38:
    // 0x299b38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_299b3c:
    // 0x299b3c: 0xae2206b4  sw          $v0, 0x6B4($s1)
    ctx->pc = 0x299b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 2));
label_299b40:
    // 0x299b40: 0x8e2606b4  lw          $a2, 0x6B4($s1)
    ctx->pc = 0x299b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_299b44:
    // 0x299b44: 0x8e2206b8  lw          $v0, 0x6B8($s1)
    ctx->pc = 0x299b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_299b48:
    // 0x299b48: 0x262404e0  addiu       $a0, $s1, 0x4E0
    ctx->pc = 0x299b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1248));
label_299b4c:
    // 0x299b4c: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x299b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_299b50:
    // 0x299b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x299b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299b54:
    // 0x299b54: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x299b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_299b58:
    // 0x299b58: 0xae2206ac  sw          $v0, 0x6AC($s1)
    ctx->pc = 0x299b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1708), GPR_U32(ctx, 2));
label_299b5c:
    // 0x299b5c: 0x601827  not         $v1, $v1
    ctx->pc = 0x299b5cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_299b60:
    // 0x299b60: 0x8e2206ac  lw          $v0, 0x6AC($s1)
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_299b64:
    // 0x299b64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x299b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_299b68:
    // 0x299b68: 0xc0995a4  jal         func_265690
label_299b6c:
    if (ctx->pc == 0x299B6Cu) {
        ctx->pc = 0x299B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B68u;
        // 0x299b6c: 0xae2206b0  sw          $v0, 0x6B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B70u;
        goto label_299b70;
    }
    ctx->pc = 0x299B68u;
    SET_GPR_U32(ctx, 31, 0x299B70u);
    ctx->pc = 0x299B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B68u;
    // 0x299b6c: 0xae2206b0  sw          $v0, 0x6B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265690u, 0x299B68u, 0x299B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B70u;
label_299b70:
    // 0x299b70: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x299b70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299b74:
    // 0x299b74: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_299b78:
    // 0x299b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x299b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_299b7c:
    // 0x299b7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299b80:
    // 0x299b80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_299b84:
    if (ctx->pc == 0x299B84u) {
        ctx->pc = 0x299B88u;
        goto label_299b88;
    }
    ctx->pc = 0x299B80u;
    {
        const bool branch_taken_0x299b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b80) {
            ctx->pc = 0x299B98u;
            goto label_299b98;
        }
    }
    ctx->pc = 0x299B88u;
label_299b88:
    // 0x299b88: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x299b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299b8c:
    // 0x299b8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x299b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_299b90:
    // 0x299b90: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x299b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_299b94:
    // 0x299b94: 0x0  nop
    ctx->pc = 0x299b94u;
    // NOP
label_299b98:
    // 0x299b98: 0x922306d8  lbu         $v1, 0x6D8($s1)
    ctx->pc = 0x299b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1752)));
label_299b9c:
    // 0x299b9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x299b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_299ba0:
    // 0x299ba0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_299ba4:
    if (ctx->pc == 0x299BA4u) {
        ctx->pc = 0x299BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BA0u;
        // 0x299ba4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299BA8u;
        goto label_299ba8;
    }
    ctx->pc = 0x299BA0u;
    {
        const bool branch_taken_0x299ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BA0u;
        // 0x299ba4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ba0) {
            ctx->pc = 0x299BD0u;
            goto label_299bd0;
        }
    }
    ctx->pc = 0x299BA8u;
label_299ba8:
    // 0x299ba8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_299bac:
    if (ctx->pc == 0x299BACu) {
        ctx->pc = 0x299BB0u;
        goto label_299bb0;
    }
    ctx->pc = 0x299BA8u;
    {
        const bool branch_taken_0x299ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x299ba8) {
            ctx->pc = 0x299BB8u;
            goto label_299bb8;
        }
    }
    ctx->pc = 0x299BB0u;
label_299bb0:
    // 0x299bb0: 0x1000000b  b           . + 4 + (0xB << 2)
label_299bb4:
    if (ctx->pc == 0x299BB4u) {
        ctx->pc = 0x299BB8u;
        goto label_299bb8;
    }
    ctx->pc = 0x299BB0u;
    {
        const bool branch_taken_0x299bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299bb0) {
            ctx->pc = 0x299BE0u;
            goto label_299be0;
        }
    }
    ctx->pc = 0x299BB8u;
label_299bb8:
    // 0x299bb8: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x299bb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299bbc:
    // 0x299bbc: 0xde2206e0  ld          $v0, 0x6E0($s1)
    ctx->pc = 0x299bbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1760)));
label_299bc0:
    // 0x299bc0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_299bc4:
    // 0x299bc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_299bc8:
    if (ctx->pc == 0x299BC8u) {
        ctx->pc = 0x299BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BC4u;
        // 0x299bc8: 0xfe220500  sd          $v0, 0x500($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299BCCu;
        goto label_299bcc;
    }
    ctx->pc = 0x299BC4u;
    {
        const bool branch_taken_0x299bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BC4u;
        // 0x299bc8: 0xfe220500  sd          $v0, 0x500($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bc4) {
            ctx->pc = 0x299BE0u;
            goto label_299be0;
        }
    }
    ctx->pc = 0x299BCCu;
label_299bcc:
    // 0x299bcc: 0x0  nop
    ctx->pc = 0x299bccu;
    // NOP
label_299bd0:
    // 0x299bd0: 0xde230508  ld          $v1, 0x508($s1)
    ctx->pc = 0x299bd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1288)));
label_299bd4:
    // 0x299bd4: 0xde2206e0  ld          $v0, 0x6E0($s1)
    ctx->pc = 0x299bd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1760)));
label_299bd8:
    // 0x299bd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_299bdc:
    // 0x299bdc: 0xfe220508  sd          $v0, 0x508($s1)
    ctx->pc = 0x299bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1288), GPR_U64(ctx, 2));
label_299be0:
    // 0x299be0: 0xae2006b4  sw          $zero, 0x6B4($s1)
    ctx->pc = 0x299be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 0));
label_299be4:
    // 0x299be4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_299be8:
    // 0x299be8: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x299be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_299bec:
    // 0x299bec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x299becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_299bf0:
    // 0x299bf0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_299bf4:
    if (ctx->pc == 0x299BF4u) {
        ctx->pc = 0x299BF8u;
        goto label_299bf8;
    }
    ctx->pc = 0x299BF0u;
    {
        const bool branch_taken_0x299bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299bf0) {
            ctx->pc = 0x299C90u;
            goto label_299c90;
        }
    }
    ctx->pc = 0x299BF8u;
label_299bf8:
    // 0x299bf8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x299bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_299bfc:
    // 0x299bfc: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x299bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_299c00:
    // 0x299c00: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_299c04:
    if (ctx->pc == 0x299C04u) {
        ctx->pc = 0x299C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C00u;
        // 0x299c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C08u;
        goto label_299c08;
    }
    ctx->pc = 0x299C00u;
    {
        const bool branch_taken_0x299c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C00u;
        // 0x299c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c00) {
            ctx->pc = 0x299C58u;
            goto label_299c58;
        }
    }
    ctx->pc = 0x299C08u;
label_299c08:
    // 0x299c08: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x299c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
label_299c0c:
    // 0x299c0c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_299c10:
    if (ctx->pc == 0x299C10u) {
        ctx->pc = 0x299C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C0Cu;
        // 0x299c10: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C14u;
        goto label_299c14;
    }
    ctx->pc = 0x299C0Cu;
    {
        const bool branch_taken_0x299c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C0Cu;
        // 0x299c10: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c0c) {
            ctx->pc = 0x299C50u;
            goto label_299c50;
        }
    }
    ctx->pc = 0x299C14u;
label_299c14:
    // 0x299c14: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_299c18:
    if (ctx->pc == 0x299C18u) {
        ctx->pc = 0x299C1Cu;
        goto label_299c1c;
    }
    ctx->pc = 0x299C14u;
    {
        const bool branch_taken_0x299c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x299c14) {
            ctx->pc = 0x299C48u;
            goto label_299c48;
        }
    }
    ctx->pc = 0x299C1Cu;
label_299c1c:
    // 0x299c1c: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x299c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_299c20:
    // 0x299c20: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_299c24:
    if (ctx->pc == 0x299C24u) {
        ctx->pc = 0x299C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C20u;
        // 0x299c24: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C28u;
        goto label_299c28;
    }
    ctx->pc = 0x299C20u;
    {
        const bool branch_taken_0x299c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C20u;
        // 0x299c24: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c20) {
            ctx->pc = 0x299C40u;
            goto label_299c40;
        }
    }
    ctx->pc = 0x299C28u;
label_299c28:
    // 0x299c28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_299c2c:
    if (ctx->pc == 0x299C2Cu) {
        ctx->pc = 0x299C30u;
        goto label_299c30;
    }
    ctx->pc = 0x299C28u;
    {
        const bool branch_taken_0x299c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x299c28) {
            ctx->pc = 0x299C38u;
            goto label_299c38;
        }
    }
    ctx->pc = 0x299C30u;
label_299c30:
    // 0x299c30: 0x1000000b  b           . + 4 + (0xB << 2)
label_299c34:
    if (ctx->pc == 0x299C34u) {
        ctx->pc = 0x299C38u;
        goto label_299c38;
    }
    ctx->pc = 0x299C30u;
    {
        const bool branch_taken_0x299c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299c30) {
            ctx->pc = 0x299C60u;
            goto label_299c60;
        }
    }
    ctx->pc = 0x299C38u;
label_299c38:
    // 0x299c38: 0x10000009  b           . + 4 + (0x9 << 2)
label_299c3c:
    if (ctx->pc == 0x299C3Cu) {
        ctx->pc = 0x299C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C38u;
        // 0x299c3c: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C40u;
        goto label_299c40;
    }
    ctx->pc = 0x299C38u;
    {
        const bool branch_taken_0x299c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C38u;
        // 0x299c3c: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c38) {
            ctx->pc = 0x299C60u;
            goto label_299c60;
        }
    }
    ctx->pc = 0x299C40u;
label_299c40:
    // 0x299c40: 0x10000007  b           . + 4 + (0x7 << 2)
label_299c44:
    if (ctx->pc == 0x299C44u) {
        ctx->pc = 0x299C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C40u;
        // 0x299c44: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C48u;
        goto label_299c48;
    }
    ctx->pc = 0x299C40u;
    {
        const bool branch_taken_0x299c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C40u;
        // 0x299c44: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c40) {
            ctx->pc = 0x299C60u;
            goto label_299c60;
        }
    }
    ctx->pc = 0x299C48u;
label_299c48:
    // 0x299c48: 0x10000005  b           . + 4 + (0x5 << 2)
label_299c4c:
    if (ctx->pc == 0x299C4Cu) {
        ctx->pc = 0x299C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C48u;
        // 0x299c4c: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C50u;
        goto label_299c50;
    }
    ctx->pc = 0x299C48u;
    {
        const bool branch_taken_0x299c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C48u;
        // 0x299c4c: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c48) {
            ctx->pc = 0x299C60u;
            goto label_299c60;
        }
    }
    ctx->pc = 0x299C50u;
label_299c50:
    // 0x299c50: 0x10000003  b           . + 4 + (0x3 << 2)
label_299c54:
    if (ctx->pc == 0x299C54u) {
        ctx->pc = 0x299C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C50u;
        // 0x299c54: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C58u;
        goto label_299c58;
    }
    ctx->pc = 0x299C50u;
    {
        const bool branch_taken_0x299c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C50u;
        // 0x299c54: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c50) {
            ctx->pc = 0x299C60u;
            goto label_299c60;
        }
    }
    ctx->pc = 0x299C58u;
label_299c58:
    // 0x299c58: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x299c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_299c5c:
    // 0x299c5c: 0x0  nop
    ctx->pc = 0x299c5cu;
    // NOP
label_299c60:
    // 0x299c60: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_299c64:
    if (ctx->pc == 0x299C64u) {
        ctx->pc = 0x299C68u;
        goto label_299c68;
    }
    ctx->pc = 0x299C60u;
    {
        const bool branch_taken_0x299c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x299c60) {
            ctx->pc = 0x299C90u;
            goto label_299c90;
        }
    }
    ctx->pc = 0x299C68u;
label_299c68:
    // 0x299c68: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_299c6c:
    // 0x299c6c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x299c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_299c70:
    // 0x299c70: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x299c70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_299c74:
    // 0x299c74: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_299c78:
    if (ctx->pc == 0x299C78u) {
        ctx->pc = 0x299C7Cu;
        goto label_299c7c;
    }
    ctx->pc = 0x299C74u;
    {
        const bool branch_taken_0x299c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x299c74) {
            ctx->pc = 0x299C90u;
            goto label_299c90;
        }
    }
    ctx->pc = 0x299C7Cu;
label_299c7c:
    // 0x299c7c: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x299c7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299c80:
    // 0x299c80: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x299c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_299c84:
    // 0x299c84: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x299c84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_299c88:
    // 0x299c88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299c8c:
    // 0x299c8c: 0xfe220500  sd          $v0, 0x500($s1)
    ctx->pc = 0x299c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 2));
label_299c90:
    // 0x299c90: 0x962229de  lhu         $v0, 0x29DE($s1)
    ctx->pc = 0x299c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
label_299c94:
    // 0x299c94: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x299c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_299c98:
    // 0x299c98: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_299c9c:
    if (ctx->pc == 0x299C9Cu) {
        ctx->pc = 0x299CA0u;
        goto label_299ca0;
    }
    ctx->pc = 0x299C98u;
    {
        const bool branch_taken_0x299c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299c98) {
            ctx->pc = 0x299D20u;
            goto label_299d20;
        }
    }
    ctx->pc = 0x299CA0u;
label_299ca0:
    // 0x299ca0: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x299ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_299ca4:
    // 0x299ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299ca8:
    // 0x299ca8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_299cac:
    if (ctx->pc == 0x299CACu) {
        ctx->pc = 0x299CB0u;
        goto label_299cb0;
    }
    ctx->pc = 0x299CA8u;
    {
        const bool branch_taken_0x299ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x299ca8) {
            ctx->pc = 0x299D20u;
            goto label_299d20;
        }
    }
    ctx->pc = 0x299CB0u;
label_299cb0:
    // 0x299cb0: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x299cb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299cb4:
    // 0x299cb4: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x299cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_299cb8:
    // 0x299cb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_299cbc:
    if (ctx->pc == 0x299CBCu) {
        ctx->pc = 0x299CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CB8u;
        // 0x299cbc: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CC0u;
        goto label_299cc0;
    }
    ctx->pc = 0x299CB8u;
    {
        const bool branch_taken_0x299cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CB8u;
        // 0x299cbc: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cb8) {
            ctx->pc = 0x299CE8u;
            goto label_299ce8;
        }
    }
    ctx->pc = 0x299CC0u;
label_299cc0:
    // 0x299cc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_299cc4:
    if (ctx->pc == 0x299CC4u) {
        ctx->pc = 0x299CC8u;
        goto label_299cc8;
    }
    ctx->pc = 0x299CC0u;
    {
        const bool branch_taken_0x299cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299cc0) {
            ctx->pc = 0x299CD0u;
            goto label_299cd0;
        }
    }
    ctx->pc = 0x299CC8u;
label_299cc8:
    // 0x299cc8: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x299cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_299ccc:
    // 0x299ccc: 0xfe220500  sd          $v0, 0x500($s1)
    ctx->pc = 0x299cccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 2));
label_299cd0:
    // 0x299cd0: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x299cd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299cd4:
    // 0x299cd4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x299cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_299cd8:
    // 0x299cd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_299cdc:
    if (ctx->pc == 0x299CDCu) {
        ctx->pc = 0x299CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CD8u;
        // 0x299cdc: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CE0u;
        goto label_299ce0;
    }
    ctx->pc = 0x299CD8u;
    {
        const bool branch_taken_0x299cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CD8u;
        // 0x299cdc: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cd8) {
            ctx->pc = 0x299CE8u;
            goto label_299ce8;
        }
    }
    ctx->pc = 0x299CE0u;
label_299ce0:
    // 0x299ce0: 0xfe220500  sd          $v0, 0x500($s1)
    ctx->pc = 0x299ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 2));
label_299ce4:
    // 0x299ce4: 0x0  nop
    ctx->pc = 0x299ce4u;
    // NOP
label_299ce8:
    // 0x299ce8: 0xde250500  ld          $a1, 0x500($s1)
    ctx->pc = 0x299ce8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299cec:
    // 0x299cec: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x299cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_299cf0:
    // 0x299cf0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x299cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_299cf4:
    // 0x299cf4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x299cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_299cf8:
    // 0x299cf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x299cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_299cfc:
    // 0x299cfc: 0x34840c11  ori         $a0, $a0, 0xC11
    ctx->pc = 0x299cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3089);
label_299d00:
    // 0x299d00: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x299d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_299d04:
    // 0x299d04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_299d08:
    // 0x299d08: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x299d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_299d0c:
    // 0x299d0c: 0xfe230500  sd          $v1, 0x500($s1)
    ctx->pc = 0x299d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 3));
label_299d10:
    // 0x299d10: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x299d10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299d14:
    // 0x299d14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_299d18:
    // 0x299d18: 0xfe220500  sd          $v0, 0x500($s1)
    ctx->pc = 0x299d18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1280), GPR_U64(ctx, 2));
label_299d1c:
    // 0x299d1c: 0x0  nop
    ctx->pc = 0x299d1cu;
    // NOP
label_299d20:
    // 0x299d20: 0x922708e8  lbu         $a3, 0x8E8($s1)
    ctx->pc = 0x299d20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_299d24:
    // 0x299d24: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x299d24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_299d28:
    // 0x299d28: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_299d2c:
    if (ctx->pc == 0x299D2Cu) {
        ctx->pc = 0x299D30u;
        goto label_299d30;
    }
    ctx->pc = 0x299D28u;
    {
        const bool branch_taken_0x299d28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d28) {
            ctx->pc = 0x299D78u;
            goto label_299d78;
        }
    }
    ctx->pc = 0x299D30u;
label_299d30:
    // 0x299d30: 0x92220640  lbu         $v0, 0x640($s1)
    ctx->pc = 0x299d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_299d34:
    // 0x299d34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x299d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299d38:
    // 0x299d38: 0x1446000f  bne         $v0, $a2, . + 4 + (0xF << 2)
label_299d3c:
    if (ctx->pc == 0x299D3Cu) {
        ctx->pc = 0x299D40u;
        goto label_299d40;
    }
    ctx->pc = 0x299D38u;
    {
        const bool branch_taken_0x299d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x299d38) {
            ctx->pc = 0x299D78u;
            goto label_299d78;
        }
    }
    ctx->pc = 0x299D40u;
label_299d40:
    // 0x299d40: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299d44:
    // 0x299d44: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x299d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_299d48:
    // 0x299d48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299d4c:
    // 0x299d4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x299d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_299d50:
    // 0x299d50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x299d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_299d54:
    // 0x299d54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x299d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_299d58:
    // 0x299d58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_299d5c:
    if (ctx->pc == 0x299D5Cu) {
        ctx->pc = 0x299D60u;
        goto label_299d60;
    }
    ctx->pc = 0x299D58u;
    {
        const bool branch_taken_0x299d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d58) {
            ctx->pc = 0x299D78u;
            goto label_299d78;
        }
    }
    ctx->pc = 0x299D60u;
label_299d60:
    // 0x299d60: 0x97828858  lhu         $v0, -0x77A8($gp)
    ctx->pc = 0x299d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
label_299d64:
    // 0x299d64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_299d68:
    if (ctx->pc == 0x299D68u) {
        ctx->pc = 0x299D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D64u;
        // 0x299d68: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D6Cu;
        goto label_299d6c;
    }
    ctx->pc = 0x299D64u;
    {
        const bool branch_taken_0x299d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D64u;
        // 0x299d68: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d64) {
            ctx->pc = 0x299D78u;
            goto label_299d78;
        }
    }
    ctx->pc = 0x299D6Cu;
label_299d6c:
    // 0x299d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299d70:
    // 0x299d70: 0xc0ce188  jal         func_338620
label_299d74:
    if (ctx->pc == 0x299D74u) {
        ctx->pc = 0x299D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D70u;
        // 0x299d74: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D78u;
        goto label_299d78;
    }
    ctx->pc = 0x299D70u;
    SET_GPR_U32(ctx, 31, 0x299D78u);
    ctx->pc = 0x299D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D70u;
    // 0x299d74: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x299D70u, 0x299D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D78u;
label_299d78:
    // 0x299d78: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x299d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_299d7c:
    // 0x299d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299d80:
    // 0x299d80: 0x14620075  bne         $v1, $v0, . + 4 + (0x75 << 2)
label_299d84:
    if (ctx->pc == 0x299D84u) {
        ctx->pc = 0x299D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D80u;
        // 0x299d84: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D88u;
        goto label_299d88;
    }
    ctx->pc = 0x299D80u;
    {
        const bool branch_taken_0x299d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x299D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D80u;
        // 0x299d84: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d80) {
            ctx->pc = 0x299F58u;
            goto label_299f58;
        }
    }
    ctx->pc = 0x299D88u;
label_299d88:
    // 0x299d88: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x299d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_299d8c:
    // 0x299d8c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x299d8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_299d90:
    // 0x299d90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_299d94:
    if (ctx->pc == 0x299D94u) {
        ctx->pc = 0x299D98u;
        goto label_299d98;
    }
    ctx->pc = 0x299D90u;
    {
        const bool branch_taken_0x299d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299d90) {
            ctx->pc = 0x299DB0u;
            goto label_299db0;
        }
    }
    ctx->pc = 0x299D98u;
label_299d98:
    // 0x299d98: 0x8e2306cc  lw          $v1, 0x6CC($s1)
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_299d9c:
    // 0x299d9c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x299d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_299da0:
    // 0x299da0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299da4:
    // 0x299da4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299da8:
    // 0x299da8: 0x10000063  b           . + 4 + (0x63 << 2)
label_299dac:
    if (ctx->pc == 0x299DACu) {
        ctx->pc = 0x299DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DA8u;
        // 0x299dac: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DB0u;
        goto label_299db0;
    }
    ctx->pc = 0x299DA8u;
    {
        const bool branch_taken_0x299da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DA8u;
        // 0x299dac: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299da8) {
            ctx->pc = 0x299F38u;
            goto label_299f38;
        }
    }
    ctx->pc = 0x299DB0u;
label_299db0:
    // 0x299db0: 0x8e2406c8  lw          $a0, 0x6C8($s1)
    ctx->pc = 0x299db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_299db4:
    // 0x299db4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x299db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_299db8:
    // 0x299db8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_299dbc:
    if (ctx->pc == 0x299DBCu) {
        ctx->pc = 0x299DC0u;
        goto label_299dc0;
    }
    ctx->pc = 0x299DB8u;
    {
        const bool branch_taken_0x299db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299db8) {
            ctx->pc = 0x299EC8u;
            goto label_299ec8;
        }
    }
    ctx->pc = 0x299DC0u;
label_299dc0:
    // 0x299dc0: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x299dc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299dc4:
    // 0x299dc4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x299dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_299dc8:
    // 0x299dc8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_299dcc:
    if (ctx->pc == 0x299DCCu) {
        ctx->pc = 0x299DD0u;
        goto label_299dd0;
    }
    ctx->pc = 0x299DC8u;
    {
        const bool branch_taken_0x299dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299dc8) {
            ctx->pc = 0x299EC0u;
            goto label_299ec0;
        }
    }
    ctx->pc = 0x299DD0u;
label_299dd0:
    // 0x299dd0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_299dd4:
    if (ctx->pc == 0x299DD4u) {
        ctx->pc = 0x299DD8u;
        goto label_299dd8;
    }
    ctx->pc = 0x299DD0u;
    {
        const bool branch_taken_0x299dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299dd0) {
            ctx->pc = 0x299EC0u;
            goto label_299ec0;
        }
    }
    ctx->pc = 0x299DD8u;
label_299dd8:
    // 0x299dd8: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x299dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_299ddc:
    // 0x299ddc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x299ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_299de0:
    // 0x299de0: 0xc07cce0  jal         func_1F3380
label_299de4:
    if (ctx->pc == 0x299DE4u) {
        ctx->pc = 0x299DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DE0u;
        // 0x299de4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DE8u;
        goto label_299de8;
    }
    ctx->pc = 0x299DE0u;
    SET_GPR_U32(ctx, 31, 0x299DE8u);
    ctx->pc = 0x299DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DE0u;
    // 0x299de4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x299DE0u, 0x299DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DE8u;
label_299de8:
    // 0x299de8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_299dec:
    if (ctx->pc == 0x299DECu) {
        ctx->pc = 0x299DF0u;
        goto label_299df0;
    }
    ctx->pc = 0x299DE8u;
    {
        const bool branch_taken_0x299de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299de8) {
            ctx->pc = 0x299E60u;
            goto label_299e60;
        }
    }
    ctx->pc = 0x299DF0u;
label_299df0:
    // 0x299df0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x299df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_299df4:
    // 0x299df4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x299df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_299df8:
    // 0x299df8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x299df8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_299dfc:
    // 0x299dfc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_299e00:
    if (ctx->pc == 0x299E00u) {
        ctx->pc = 0x299E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DFCu;
        // 0x299e00: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E04u;
        goto label_299e04;
    }
    ctx->pc = 0x299DFCu;
    {
        const bool branch_taken_0x299dfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x299E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DFCu;
        // 0x299e00: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299dfc) {
            ctx->pc = 0x299E08u;
            goto label_299e08;
        }
    }
    ctx->pc = 0x299E04u;
label_299e04:
    // 0x299e04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299e08:
    // 0x299e08: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_299e0c:
    if (ctx->pc == 0x299E0Cu) {
        ctx->pc = 0x299E10u;
        goto label_299e10;
    }
    ctx->pc = 0x299E08u;
    {
        const bool branch_taken_0x299e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e08) {
            ctx->pc = 0x299E60u;
            goto label_299e60;
        }
    }
    ctx->pc = 0x299E10u;
label_299e10:
    // 0x299e10: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x299e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
label_299e14:
    // 0x299e14: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x299e14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_299e18:
    // 0x299e18: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_299e1c:
    if (ctx->pc == 0x299E1Cu) {
        ctx->pc = 0x299E20u;
        goto label_299e20;
    }
    ctx->pc = 0x299E18u;
    {
        const bool branch_taken_0x299e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299e18) {
            ctx->pc = 0x299E38u;
            goto label_299e38;
        }
    }
    ctx->pc = 0x299E20u;
label_299e20:
    // 0x299e20: 0x8e2406cc  lw          $a0, 0x6CC($s1)
    ctx->pc = 0x299e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_299e24:
    // 0x299e24: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x299e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_299e28:
    // 0x299e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299e2c:
    // 0x299e2c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x299e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_299e30:
    // 0x299e30: 0xae2306cc  sw          $v1, 0x6CC($s1)
    ctx->pc = 0x299e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 3));
label_299e34:
    // 0x299e34: 0x0  nop
    ctx->pc = 0x299e34u;
    // NOP
label_299e38:
    // 0x299e38: 0x8c4206c8  lw          $v0, 0x6C8($v0)
    ctx->pc = 0x299e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
label_299e3c:
    // 0x299e3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x299e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_299e40:
    // 0x299e40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_299e44:
    if (ctx->pc == 0x299E44u) {
        ctx->pc = 0x299E48u;
        goto label_299e48;
    }
    ctx->pc = 0x299E40u;
    {
        const bool branch_taken_0x299e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e40) {
            ctx->pc = 0x299E60u;
            goto label_299e60;
        }
    }
    ctx->pc = 0x299E48u;
label_299e48:
    // 0x299e48: 0x8e2306cc  lw          $v1, 0x6CC($s1)
    ctx->pc = 0x299e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_299e4c:
    // 0x299e4c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x299e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_299e50:
    // 0x299e50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299e54:
    // 0x299e54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299e58:
    // 0x299e58: 0xae2206cc  sw          $v0, 0x6CC($s1)
    ctx->pc = 0x299e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
label_299e5c:
    // 0x299e5c: 0x0  nop
    ctx->pc = 0x299e5cu;
    // NOP
label_299e60:
    // 0x299e60: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_299e64:
    if (ctx->pc == 0x299E64u) {
        ctx->pc = 0x299E68u;
        goto label_299e68;
    }
    ctx->pc = 0x299E60u;
    {
        const bool branch_taken_0x299e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e60) {
            ctx->pc = 0x299F38u;
            goto label_299f38;
        }
    }
    ctx->pc = 0x299E68u;
label_299e68:
    // 0x299e68: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x299e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_299e6c:
    // 0x299e6c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x299e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_299e70:
    // 0x299e70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_299e74:
    if (ctx->pc == 0x299E74u) {
        ctx->pc = 0x299E78u;
        goto label_299e78;
    }
    ctx->pc = 0x299E70u;
    {
        const bool branch_taken_0x299e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299e70) {
            ctx->pc = 0x299EB0u;
            goto label_299eb0;
        }
    }
    ctx->pc = 0x299E78u;
label_299e78:
    // 0x299e78: 0xde230510  ld          $v1, 0x510($s1)
    ctx->pc = 0x299e78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1296)));
label_299e7c:
    // 0x299e7c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x299e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_299e80:
    // 0x299e80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_299e84:
    if (ctx->pc == 0x299E84u) {
        ctx->pc = 0x299E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E80u;
        // 0x299e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E88u;
        goto label_299e88;
    }
    ctx->pc = 0x299E80u;
    {
        const bool branch_taken_0x299e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E80u;
        // 0x299e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e80) {
            ctx->pc = 0x299E98u;
            goto label_299e98;
        }
    }
    ctx->pc = 0x299E88u;
label_299e88:
    // 0x299e88: 0xc0a2738  jal         func_289CE0
label_299e8c:
    if (ctx->pc == 0x299E8Cu) {
        ctx->pc = 0x299E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E88u;
        // 0x299e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E90u;
        goto label_299e90;
    }
    ctx->pc = 0x299E88u;
    SET_GPR_U32(ctx, 31, 0x299E90u);
    ctx->pc = 0x299E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E88u;
    // 0x299e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289CE0u, 0x299E88u, 0x299E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E90u;
label_299e90:
    // 0x299e90: 0x10000007  b           . + 4 + (0x7 << 2)
label_299e94:
    if (ctx->pc == 0x299E94u) {
        ctx->pc = 0x299E98u;
        goto label_299e98;
    }
    ctx->pc = 0x299E90u;
    {
        const bool branch_taken_0x299e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e90) {
            ctx->pc = 0x299EB0u;
            goto label_299eb0;
        }
    }
    ctx->pc = 0x299E98u;
label_299e98:
    // 0x299e98: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x299e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_299e9c:
    // 0x299e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299ea0:
    if (ctx->pc == 0x299EA0u) {
        ctx->pc = 0x299EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E9Cu;
        // 0x299ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EA4u;
        goto label_299ea4;
    }
    ctx->pc = 0x299E9Cu;
    {
        const bool branch_taken_0x299e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E9Cu;
        // 0x299ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e9c) {
            ctx->pc = 0x299EB0u;
            goto label_299eb0;
        }
    }
    ctx->pc = 0x299EA4u;
label_299ea4:
    // 0x299ea4: 0xc0a2738  jal         func_289CE0
label_299ea8:
    if (ctx->pc == 0x299EA8u) {
        ctx->pc = 0x299EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EA4u;
        // 0x299ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EACu;
        goto label_299eac;
    }
    ctx->pc = 0x299EA4u;
    SET_GPR_U32(ctx, 31, 0x299EACu);
    ctx->pc = 0x299EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299EA4u;
    // 0x299ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289CE0u, 0x299EA4u, 0x299EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EACu;
label_299eac:
    // 0x299eac: 0x0  nop
    ctx->pc = 0x299eacu;
    // NOP
label_299eb0:
    // 0x299eb0: 0x8e2206cc  lw          $v0, 0x6CC($s1)
    ctx->pc = 0x299eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_299eb4:
    // 0x299eb4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x299eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_299eb8:
    // 0x299eb8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_299ebc:
    if (ctx->pc == 0x299EBCu) {
        ctx->pc = 0x299EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EB8u;
        // 0x299ebc: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EC0u;
        goto label_299ec0;
    }
    ctx->pc = 0x299EB8u;
    {
        const bool branch_taken_0x299eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EB8u;
        // 0x299ebc: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299eb8) {
            ctx->pc = 0x299F38u;
            goto label_299f38;
        }
    }
    ctx->pc = 0x299EC0u;
label_299ec0:
    // 0x299ec0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_299ec4:
    if (ctx->pc == 0x299EC4u) {
        ctx->pc = 0x299EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EC0u;
        // 0x299ec4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299EC8u;
        goto label_299ec8;
    }
    ctx->pc = 0x299EC0u;
    {
        const bool branch_taken_0x299ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EC0u;
        // 0x299ec4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ec0) {
            ctx->pc = 0x299F38u;
            goto label_299f38;
        }
    }
    ctx->pc = 0x299EC8u;
label_299ec8:
    // 0x299ec8: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x299ec8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_299ecc:
    // 0x299ecc: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x299eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_299ed0:
    // 0x299ed0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_299ed4:
    if (ctx->pc == 0x299ED4u) {
        ctx->pc = 0x299ED8u;
        goto label_299ed8;
    }
    ctx->pc = 0x299ED0u;
    {
        const bool branch_taken_0x299ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ed0) {
            ctx->pc = 0x299EE8u;
            goto label_299ee8;
        }
    }
    ctx->pc = 0x299ED8u;
label_299ed8:
    // 0x299ed8: 0xde2204f8  ld          $v0, 0x4F8($s1)
    ctx->pc = 0x299ed8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1272)));
label_299edc:
    // 0x299edc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x299edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_299ee0:
    // 0x299ee0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_299ee4:
    if (ctx->pc == 0x299EE4u) {
        ctx->pc = 0x299EE8u;
        goto label_299ee8;
    }
    ctx->pc = 0x299EE0u;
    {
        const bool branch_taken_0x299ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ee0) {
            ctx->pc = 0x299F00u;
            goto label_299f00;
        }
    }
    ctx->pc = 0x299EE8u;
label_299ee8:
    // 0x299ee8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_299eec:
    if (ctx->pc == 0x299EECu) {
        ctx->pc = 0x299EF0u;
        goto label_299ef0;
    }
    ctx->pc = 0x299EE8u;
    {
        const bool branch_taken_0x299ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ee8) {
            ctx->pc = 0x299F10u;
            goto label_299f10;
        }
    }
    ctx->pc = 0x299EF0u;
label_299ef0:
    // 0x299ef0: 0xde220510  ld          $v0, 0x510($s1)
    ctx->pc = 0x299ef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1296)));
label_299ef4:
    // 0x299ef4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x299ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_299ef8:
    // 0x299ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_299efc:
    if (ctx->pc == 0x299EFCu) {
        ctx->pc = 0x299F00u;
        goto label_299f00;
    }
    ctx->pc = 0x299EF8u;
    {
        const bool branch_taken_0x299ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ef8) {
            ctx->pc = 0x299F10u;
            goto label_299f10;
        }
    }
    ctx->pc = 0x299F00u;
label_299f00:
    // 0x299f00: 0x8e2206cc  lw          $v0, 0x6CC($s1)
    ctx->pc = 0x299f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_299f04:
    // 0x299f04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x299f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_299f08:
    // 0x299f08: 0x1000000b  b           . + 4 + (0xB << 2)
label_299f0c:
    if (ctx->pc == 0x299F0Cu) {
        ctx->pc = 0x299F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F08u;
        // 0x299f0c: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299F10u;
        goto label_299f10;
    }
    ctx->pc = 0x299F08u;
    {
        const bool branch_taken_0x299f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F08u;
        // 0x299f0c: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f08) {
            ctx->pc = 0x299F38u;
            goto label_299f38;
        }
    }
    ctx->pc = 0x299F10u;
label_299f10:
    // 0x299f10: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x299f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_299f14:
    // 0x299f14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_299f18:
    if (ctx->pc == 0x299F18u) {
        ctx->pc = 0x299F1Cu;
        goto label_299f1c;
    }
    ctx->pc = 0x299F14u;
    {
        const bool branch_taken_0x299f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299f14) {
            ctx->pc = 0x299F30u;
            goto label_299f30;
        }
    }
    ctx->pc = 0x299F1Cu;
label_299f1c:
    // 0x299f1c: 0x862600c2  lh          $a2, 0xC2($s1)
    ctx->pc = 0x299f1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_299f20:
    // 0x299f20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x299f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_299f24:
    // 0x299f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299f28:
    // 0x299f28: 0xc0a2640  jal         func_289900
label_299f2c:
    if (ctx->pc == 0x299F2Cu) {
        ctx->pc = 0x299F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F28u;
        // 0x299f2c: 0x24a50cc0  addiu       $a1, $a1, 0xCC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299F30u;
        goto label_299f30;
    }
    ctx->pc = 0x299F28u;
    SET_GPR_U32(ctx, 31, 0x299F30u);
    ctx->pc = 0x299F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F28u;
    // 0x299f2c: 0x24a50cc0  addiu       $a1, $a1, 0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289900u, 0x299F28u, 0x299F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F30u;
label_299f30:
    // 0x299f30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299f34:
    // 0x299f34: 0x0  nop
    ctx->pc = 0x299f34u;
    // NOP
label_299f38:
    // 0x299f38: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_299f3c:
    if (ctx->pc == 0x299F3Cu) {
        ctx->pc = 0x299F40u;
        goto label_299f40;
    }
    ctx->pc = 0x299F38u;
    {
        const bool branch_taken_0x299f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f38) {
            ctx->pc = 0x299F50u;
            goto label_299f50;
        }
    }
    ctx->pc = 0x299F40u;
label_299f40:
    // 0x299f40: 0x8e2207c0  lw          $v0, 0x7C0($s1)
    ctx->pc = 0x299f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_299f44:
    // 0x299f44: 0x10000006  b           . + 4 + (0x6 << 2)
label_299f48:
    if (ctx->pc == 0x299F48u) {
        ctx->pc = 0x299F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F44u;
        // 0x299f48: 0xae2207c4  sw          $v0, 0x7C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299F4Cu;
        goto label_299f4c;
    }
    ctx->pc = 0x299F44u;
    {
        const bool branch_taken_0x299f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F44u;
        // 0x299f48: 0xae2207c4  sw          $v0, 0x7C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f44) {
            ctx->pc = 0x299F60u;
            goto label_299f60;
        }
    }
    ctx->pc = 0x299F4Cu;
label_299f4c:
    // 0x299f4c: 0x0  nop
    ctx->pc = 0x299f4cu;
    // NOP
label_299f50:
    // 0x299f50: 0x10000003  b           . + 4 + (0x3 << 2)
label_299f54:
    if (ctx->pc == 0x299F54u) {
        ctx->pc = 0x299F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F50u;
        // 0x299f54: 0xae2007c4  sw          $zero, 0x7C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299F58u;
        goto label_299f58;
    }
    ctx->pc = 0x299F50u;
    {
        const bool branch_taken_0x299f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F50u;
        // 0x299f54: 0xae2007c4  sw          $zero, 0x7C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f50) {
            ctx->pc = 0x299F60u;
            goto label_299f60;
        }
    }
    ctx->pc = 0x299F58u;
label_299f58:
    // 0x299f58: 0x8e2207c0  lw          $v0, 0x7C0($s1)
    ctx->pc = 0x299f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_299f5c:
    // 0x299f5c: 0xae2207c4  sw          $v0, 0x7C4($s1)
    ctx->pc = 0x299f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 2));
label_299f60:
    // 0x299f60: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x299f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_299f64:
    // 0x299f64: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x299f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_299f68:
    // 0x299f68: 0x320f809  jalr        $t9
label_299f6c:
    if (ctx->pc == 0x299F6Cu) {
        ctx->pc = 0x299F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F68u;
        // 0x299f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299F70u;
        goto label_299f70;
    }
    ctx->pc = 0x299F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x299F70u);
        ctx->pc = 0x299F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F68u;
        // 0x299f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F68u, 0x299F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299F70u;
label_299f70:
    // 0x299f70: 0x962308ea  lhu         $v1, 0x8EA($s1)
    ctx->pc = 0x299f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2282)));
label_299f74:
    // 0x299f74: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x299f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_299f78:
    // 0x299f78: 0xa62308ec  sh          $v1, 0x8EC($s1)
    ctx->pc = 0x299f78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2284), (uint16_t)GPR_U32(ctx, 3));
label_299f7c:
    // 0x299f7c: 0xa62008ea  sh          $zero, 0x8EA($s1)
    ctx->pc = 0x299f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2282), (uint16_t)GPR_U32(ctx, 0));
label_299f80:
    // 0x299f80: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x299f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_299f84:
    // 0x299f84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_299f88:
    // 0x299f88: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_299f8c:
    if (ctx->pc == 0x299F8Cu) {
        ctx->pc = 0x299F90u;
        goto label_299f90;
    }
    ctx->pc = 0x299F88u;
    {
        const bool branch_taken_0x299f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299f88) {
            ctx->pc = 0x299FF8u;
            goto label_299ff8;
        }
    }
    ctx->pc = 0x299F90u;
label_299f90:
    // 0x299f90: 0x92220782  lbu         $v0, 0x782($s1)
    ctx->pc = 0x299f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1922)));
label_299f94:
    // 0x299f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_299f98:
    if (ctx->pc == 0x299F98u) {
        ctx->pc = 0x299F9Cu;
        goto label_299f9c;
    }
    ctx->pc = 0x299F94u;
    {
        const bool branch_taken_0x299f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f94) {
            ctx->pc = 0x299FB8u;
            goto label_299fb8;
        }
    }
    ctx->pc = 0x299F9Cu;
label_299f9c:
    // 0x299f9c: 0xa2220781  sb          $v0, 0x781($s1)
    ctx->pc = 0x299f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1921), (uint8_t)GPR_U32(ctx, 2));
label_299fa0:
    // 0x299fa0: 0xa2200782  sb          $zero, 0x782($s1)
    ctx->pc = 0x299fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1922), (uint8_t)GPR_U32(ctx, 0));
label_299fa4:
    // 0x299fa4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x299fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_299fa8:
    // 0x299fa8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x299fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_299fac:
    // 0x299fac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x299facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_299fb0:
    // 0x299fb0: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x299fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_299fb4:
    // 0x299fb4: 0x0  nop
    ctx->pc = 0x299fb4u;
    // NOP
label_299fb8:
    // 0x299fb8: 0x96220824  lhu         $v0, 0x824($s1)
    ctx->pc = 0x299fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2084)));
label_299fbc:
    // 0x299fbc: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x299fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_299fc0:
    // 0x299fc0: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x299fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_299fc4:
    // 0x299fc4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_299fc8:
    if (ctx->pc == 0x299FC8u) {
        ctx->pc = 0x299FCCu;
        goto label_299fcc;
    }
    ctx->pc = 0x299FC4u;
    {
        const bool branch_taken_0x299fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x299fc4) {
            ctx->pc = 0x299FD8u;
            goto label_299fd8;
        }
    }
    ctx->pc = 0x299FCCu;
label_299fcc:
    // 0x299fcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x299fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_299fd0:
    // 0x299fd0: 0xa6220824  sh          $v0, 0x824($s1)
    ctx->pc = 0x299fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2084), (uint16_t)GPR_U32(ctx, 2));
label_299fd4:
    // 0x299fd4: 0x0  nop
    ctx->pc = 0x299fd4u;
    // NOP
label_299fd8:
    // 0x299fd8: 0xae2006b8  sw          $zero, 0x6B8($s1)
    ctx->pc = 0x299fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 0));
label_299fdc:
    // 0x299fdc: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x299fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_299fe0:
    // 0x299fe0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x299fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_299fe4:
    // 0x299fe4: 0x320f809  jalr        $t9
label_299fe8:
    if (ctx->pc == 0x299FE8u) {
        ctx->pc = 0x299FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FE4u;
        // 0x299fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299FECu;
        goto label_299fec;
    }
    ctx->pc = 0x299FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x299FECu);
        ctx->pc = 0x299FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FE4u;
        // 0x299fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FE4u, 0x299FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299FECu;
label_299fec:
    // 0x299fec: 0x1000000a  b           . + 4 + (0xA << 2)
label_299ff0:
    if (ctx->pc == 0x299FF0u) {
        ctx->pc = 0x299FF4u;
        goto label_299ff4;
    }
    ctx->pc = 0x299FECu;
    {
        const bool branch_taken_0x299fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299fec) {
            ctx->pc = 0x29A018u;
            goto label_29a018;
        }
    }
    ctx->pc = 0x299FF4u;
label_299ff4:
    // 0x299ff4: 0x0  nop
    ctx->pc = 0x299ff4u;
    // NOP
label_299ff8:
    // 0x299ff8: 0x8e2306cc  lw          $v1, 0x6CC($s1)
    ctx->pc = 0x299ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_299ffc:
    // 0x299ffc: 0x8e2206d0  lw          $v0, 0x6D0($s1)
    ctx->pc = 0x299ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
label_29a000:
    // 0x29a000: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29a004:
    // 0x29a004: 0xae2206cc  sw          $v0, 0x6CC($s1)
    ctx->pc = 0x29a004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
label_29a008:
    // 0x29a008: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x29a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_29a00c:
    // 0x29a00c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_29a010:
    // 0x29a010: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29a010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29a014:
    // 0x29a014: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x29a014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_29a018:
    // 0x29a018: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x29a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_29a01c:
    // 0x29a01c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29a020:
    if (ctx->pc == 0x29A020u) {
        ctx->pc = 0x29A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A01Cu;
        // 0x29a020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A024u;
        goto label_29a024;
    }
    ctx->pc = 0x29A01Cu;
    {
        const bool branch_taken_0x29a01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A01Cu;
        // 0x29a020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a01c) {
            ctx->pc = 0x29A030u;
            goto label_29a030;
        }
    }
    ctx->pc = 0x29A024u;
label_29a024:
    // 0x29a024: 0xc0a6600  jal         func_299800
label_29a028:
    if (ctx->pc == 0x29A028u) {
        ctx->pc = 0x29A02Cu;
        goto label_29a02c;
    }
    ctx->pc = 0x29A024u;
    SET_GPR_U32(ctx, 31, 0x29A02Cu);
    ctx->pc = 0x299800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299800u, 0x29A024u, 0x29A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A02Cu;
label_29a02c:
    // 0x29a02c: 0x0  nop
    ctx->pc = 0x29a02cu;
    // NOP
label_29a030:
    // 0x29a030: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x29a030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_29a034:
    // 0x29a034: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_29a038:
    // 0x29a038: 0x320f809  jalr        $t9
label_29a03c:
    if (ctx->pc == 0x29A03Cu) {
        ctx->pc = 0x29A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A038u;
        // 0x29a03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A040u;
        goto label_29a040;
    }
    ctx->pc = 0x29A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A040u);
        ctx->pc = 0x29A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A038u;
        // 0x29a03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A038u, 0x29A040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A040u;
label_29a040:
    // 0x29a040: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x29a040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
label_29a044:
    // 0x29a044: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29a044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_29a048:
    // 0x29a048: 0xc07cce0  jal         func_1F3380
label_29a04c:
    if (ctx->pc == 0x29A04Cu) {
        ctx->pc = 0x29A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A048u;
        // 0x29a04c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A050u;
        goto label_29a050;
    }
    ctx->pc = 0x29A048u;
    SET_GPR_U32(ctx, 31, 0x29A050u);
    ctx->pc = 0x29A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A048u;
    // 0x29a04c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x29A048u, 0x29A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A050u;
label_29a050:
    // 0x29a050: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_29a054:
    if (ctx->pc == 0x29A054u) {
        ctx->pc = 0x29A058u;
        goto label_29a058;
    }
    ctx->pc = 0x29A050u;
    {
        const bool branch_taken_0x29a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a050) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A058u;
label_29a058:
    // 0x29a058: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29a058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29a05c:
    // 0x29a05c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x29a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_29a060:
    // 0x29a060: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x29a060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_29a064:
    // 0x29a064: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_29a068:
    if (ctx->pc == 0x29A068u) {
        ctx->pc = 0x29A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A064u;
        // 0x29a068: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A06Cu;
        goto label_29a06c;
    }
    ctx->pc = 0x29A064u;
    {
        const bool branch_taken_0x29a064 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A064u;
        // 0x29a068: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a064) {
            ctx->pc = 0x29A070u;
            goto label_29a070;
        }
    }
    ctx->pc = 0x29A06Cu;
label_29a06c:
    // 0x29a06c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29a06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a070:
    // 0x29a070: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_29a074:
    if (ctx->pc == 0x29A074u) {
        ctx->pc = 0x29A078u;
        goto label_29a078;
    }
    ctx->pc = 0x29A070u;
    {
        const bool branch_taken_0x29a070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a070) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A078u;
label_29a078:
    // 0x29a078: 0x8c4406b4  lw          $a0, 0x6B4($v0)
    ctx->pc = 0x29a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1716)));
label_29a07c:
    // 0x29a07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a080:
    // 0x29a080: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x29a080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_29a084:
    // 0x29a084: 0xac4406b4  sw          $a0, 0x6B4($v0)
    ctx->pc = 0x29a084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1716), GPR_U32(ctx, 4));
label_29a088:
    // 0x29a088: 0x92240640  lbu         $a0, 0x640($s1)
    ctx->pc = 0x29a088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_29a08c:
    // 0x29a08c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_29a090:
    if (ctx->pc == 0x29A090u) {
        ctx->pc = 0x29A094u;
        goto label_29a094;
    }
    ctx->pc = 0x29A08Cu;
    {
        const bool branch_taken_0x29a08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29a08c) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A094u;
label_29a094:
    // 0x29a094: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x29a094u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_29a098:
    // 0x29a098: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x29a098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_29a09c:
    // 0x29a09c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_29a0a0:
    if (ctx->pc == 0x29A0A0u) {
        ctx->pc = 0x29A0A4u;
        goto label_29a0a4;
    }
    ctx->pc = 0x29A09Cu;
    {
        const bool branch_taken_0x29a09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a09c) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A0A4u;
label_29a0a4:
    // 0x29a0a4: 0x8c4406b4  lw          $a0, 0x6B4($v0)
    ctx->pc = 0x29a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1716)));
label_29a0a8:
    // 0x29a0a8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_29a0ac:
    // 0x29a0ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29a0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_29a0b0:
    // 0x29a0b0: 0xac4306b4  sw          $v1, 0x6B4($v0)
    ctx->pc = 0x29a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1716), GPR_U32(ctx, 3));
label_29a0b4:
    // 0x29a0b4: 0x0  nop
    ctx->pc = 0x29a0b4u;
    // NOP
label_29a0b8:
    // 0x29a0b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a0bc:
    // 0x29a0bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a0c0:
    // 0x29a0c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a0c4:
    // 0x29a0c4: 0x3e00008  jr          $ra
label_29a0c8:
    if (ctx->pc == 0x29A0C8u) {
        ctx->pc = 0x29A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0C4u;
        // 0x29a0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A0CCu;
        goto label_fallthrough_0x29a0c4;
    }
    ctx->pc = 0x29A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0C4u;
        // 0x29a0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a0c4:
    ctx->pc = 0x29A0CCu;
}
