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

// Function: sub_001E1A30
// Address: 0x1e1a30 - 0x1e2088
void sub_001E1A30_0x1e1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A30_0x1e1a30");
#endif

    switch (ctx->pc) {
        case 0x1e1a30u: goto label_1e1a30;
        case 0x1e1a34u: goto label_1e1a34;
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a3cu: goto label_1e1a3c;
        case 0x1e1a40u: goto label_1e1a40;
        case 0x1e1a44u: goto label_1e1a44;
        case 0x1e1a48u: goto label_1e1a48;
        case 0x1e1a4cu: goto label_1e1a4c;
        case 0x1e1a50u: goto label_1e1a50;
        case 0x1e1a54u: goto label_1e1a54;
        case 0x1e1a58u: goto label_1e1a58;
        case 0x1e1a5cu: goto label_1e1a5c;
        case 0x1e1a60u: goto label_1e1a60;
        case 0x1e1a64u: goto label_1e1a64;
        case 0x1e1a68u: goto label_1e1a68;
        case 0x1e1a6cu: goto label_1e1a6c;
        case 0x1e1a70u: goto label_1e1a70;
        case 0x1e1a74u: goto label_1e1a74;
        case 0x1e1a78u: goto label_1e1a78;
        case 0x1e1a7cu: goto label_1e1a7c;
        case 0x1e1a80u: goto label_1e1a80;
        case 0x1e1a84u: goto label_1e1a84;
        case 0x1e1a88u: goto label_1e1a88;
        case 0x1e1a8cu: goto label_1e1a8c;
        case 0x1e1a90u: goto label_1e1a90;
        case 0x1e1a94u: goto label_1e1a94;
        case 0x1e1a98u: goto label_1e1a98;
        case 0x1e1a9cu: goto label_1e1a9c;
        case 0x1e1aa0u: goto label_1e1aa0;
        case 0x1e1aa4u: goto label_1e1aa4;
        case 0x1e1aa8u: goto label_1e1aa8;
        case 0x1e1aacu: goto label_1e1aac;
        case 0x1e1ab0u: goto label_1e1ab0;
        case 0x1e1ab4u: goto label_1e1ab4;
        case 0x1e1ab8u: goto label_1e1ab8;
        case 0x1e1abcu: goto label_1e1abc;
        case 0x1e1ac0u: goto label_1e1ac0;
        case 0x1e1ac4u: goto label_1e1ac4;
        case 0x1e1ac8u: goto label_1e1ac8;
        case 0x1e1accu: goto label_1e1acc;
        case 0x1e1ad0u: goto label_1e1ad0;
        case 0x1e1ad4u: goto label_1e1ad4;
        case 0x1e1ad8u: goto label_1e1ad8;
        case 0x1e1adcu: goto label_1e1adc;
        case 0x1e1ae0u: goto label_1e1ae0;
        case 0x1e1ae4u: goto label_1e1ae4;
        case 0x1e1ae8u: goto label_1e1ae8;
        case 0x1e1aecu: goto label_1e1aec;
        case 0x1e1af0u: goto label_1e1af0;
        case 0x1e1af4u: goto label_1e1af4;
        case 0x1e1af8u: goto label_1e1af8;
        case 0x1e1afcu: goto label_1e1afc;
        case 0x1e1b00u: goto label_1e1b00;
        case 0x1e1b04u: goto label_1e1b04;
        case 0x1e1b08u: goto label_1e1b08;
        case 0x1e1b0cu: goto label_1e1b0c;
        case 0x1e1b10u: goto label_1e1b10;
        case 0x1e1b14u: goto label_1e1b14;
        case 0x1e1b18u: goto label_1e1b18;
        case 0x1e1b1cu: goto label_1e1b1c;
        case 0x1e1b20u: goto label_1e1b20;
        case 0x1e1b24u: goto label_1e1b24;
        case 0x1e1b28u: goto label_1e1b28;
        case 0x1e1b2cu: goto label_1e1b2c;
        case 0x1e1b30u: goto label_1e1b30;
        case 0x1e1b34u: goto label_1e1b34;
        case 0x1e1b38u: goto label_1e1b38;
        case 0x1e1b3cu: goto label_1e1b3c;
        case 0x1e1b40u: goto label_1e1b40;
        case 0x1e1b44u: goto label_1e1b44;
        case 0x1e1b48u: goto label_1e1b48;
        case 0x1e1b4cu: goto label_1e1b4c;
        case 0x1e1b50u: goto label_1e1b50;
        case 0x1e1b54u: goto label_1e1b54;
        case 0x1e1b58u: goto label_1e1b58;
        case 0x1e1b5cu: goto label_1e1b5c;
        case 0x1e1b60u: goto label_1e1b60;
        case 0x1e1b64u: goto label_1e1b64;
        case 0x1e1b68u: goto label_1e1b68;
        case 0x1e1b6cu: goto label_1e1b6c;
        case 0x1e1b70u: goto label_1e1b70;
        case 0x1e1b74u: goto label_1e1b74;
        case 0x1e1b78u: goto label_1e1b78;
        case 0x1e1b7cu: goto label_1e1b7c;
        case 0x1e1b80u: goto label_1e1b80;
        case 0x1e1b84u: goto label_1e1b84;
        case 0x1e1b88u: goto label_1e1b88;
        case 0x1e1b8cu: goto label_1e1b8c;
        case 0x1e1b90u: goto label_1e1b90;
        case 0x1e1b94u: goto label_1e1b94;
        case 0x1e1b98u: goto label_1e1b98;
        case 0x1e1b9cu: goto label_1e1b9c;
        case 0x1e1ba0u: goto label_1e1ba0;
        case 0x1e1ba4u: goto label_1e1ba4;
        case 0x1e1ba8u: goto label_1e1ba8;
        case 0x1e1bacu: goto label_1e1bac;
        case 0x1e1bb0u: goto label_1e1bb0;
        case 0x1e1bb4u: goto label_1e1bb4;
        case 0x1e1bb8u: goto label_1e1bb8;
        case 0x1e1bbcu: goto label_1e1bbc;
        case 0x1e1bc0u: goto label_1e1bc0;
        case 0x1e1bc4u: goto label_1e1bc4;
        case 0x1e1bc8u: goto label_1e1bc8;
        case 0x1e1bccu: goto label_1e1bcc;
        case 0x1e1bd0u: goto label_1e1bd0;
        case 0x1e1bd4u: goto label_1e1bd4;
        case 0x1e1bd8u: goto label_1e1bd8;
        case 0x1e1bdcu: goto label_1e1bdc;
        case 0x1e1be0u: goto label_1e1be0;
        case 0x1e1be4u: goto label_1e1be4;
        case 0x1e1be8u: goto label_1e1be8;
        case 0x1e1becu: goto label_1e1bec;
        case 0x1e1bf0u: goto label_1e1bf0;
        case 0x1e1bf4u: goto label_1e1bf4;
        case 0x1e1bf8u: goto label_1e1bf8;
        case 0x1e1bfcu: goto label_1e1bfc;
        case 0x1e1c00u: goto label_1e1c00;
        case 0x1e1c04u: goto label_1e1c04;
        case 0x1e1c08u: goto label_1e1c08;
        case 0x1e1c0cu: goto label_1e1c0c;
        case 0x1e1c10u: goto label_1e1c10;
        case 0x1e1c14u: goto label_1e1c14;
        case 0x1e1c18u: goto label_1e1c18;
        case 0x1e1c1cu: goto label_1e1c1c;
        case 0x1e1c20u: goto label_1e1c20;
        case 0x1e1c24u: goto label_1e1c24;
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c2cu: goto label_1e1c2c;
        case 0x1e1c30u: goto label_1e1c30;
        case 0x1e1c34u: goto label_1e1c34;
        case 0x1e1c38u: goto label_1e1c38;
        case 0x1e1c3cu: goto label_1e1c3c;
        case 0x1e1c40u: goto label_1e1c40;
        case 0x1e1c44u: goto label_1e1c44;
        case 0x1e1c48u: goto label_1e1c48;
        case 0x1e1c4cu: goto label_1e1c4c;
        case 0x1e1c50u: goto label_1e1c50;
        case 0x1e1c54u: goto label_1e1c54;
        case 0x1e1c58u: goto label_1e1c58;
        case 0x1e1c5cu: goto label_1e1c5c;
        case 0x1e1c60u: goto label_1e1c60;
        case 0x1e1c64u: goto label_1e1c64;
        case 0x1e1c68u: goto label_1e1c68;
        case 0x1e1c6cu: goto label_1e1c6c;
        case 0x1e1c70u: goto label_1e1c70;
        case 0x1e1c74u: goto label_1e1c74;
        case 0x1e1c78u: goto label_1e1c78;
        case 0x1e1c7cu: goto label_1e1c7c;
        case 0x1e1c80u: goto label_1e1c80;
        case 0x1e1c84u: goto label_1e1c84;
        case 0x1e1c88u: goto label_1e1c88;
        case 0x1e1c8cu: goto label_1e1c8c;
        case 0x1e1c90u: goto label_1e1c90;
        case 0x1e1c94u: goto label_1e1c94;
        case 0x1e1c98u: goto label_1e1c98;
        case 0x1e1c9cu: goto label_1e1c9c;
        case 0x1e1ca0u: goto label_1e1ca0;
        case 0x1e1ca4u: goto label_1e1ca4;
        case 0x1e1ca8u: goto label_1e1ca8;
        case 0x1e1cacu: goto label_1e1cac;
        case 0x1e1cb0u: goto label_1e1cb0;
        case 0x1e1cb4u: goto label_1e1cb4;
        case 0x1e1cb8u: goto label_1e1cb8;
        case 0x1e1cbcu: goto label_1e1cbc;
        case 0x1e1cc0u: goto label_1e1cc0;
        case 0x1e1cc4u: goto label_1e1cc4;
        case 0x1e1cc8u: goto label_1e1cc8;
        case 0x1e1cccu: goto label_1e1ccc;
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1cd4u: goto label_1e1cd4;
        case 0x1e1cd8u: goto label_1e1cd8;
        case 0x1e1cdcu: goto label_1e1cdc;
        case 0x1e1ce0u: goto label_1e1ce0;
        case 0x1e1ce4u: goto label_1e1ce4;
        case 0x1e1ce8u: goto label_1e1ce8;
        case 0x1e1cecu: goto label_1e1cec;
        case 0x1e1cf0u: goto label_1e1cf0;
        case 0x1e1cf4u: goto label_1e1cf4;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1cfcu: goto label_1e1cfc;
        case 0x1e1d00u: goto label_1e1d00;
        case 0x1e1d04u: goto label_1e1d04;
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d0cu: goto label_1e1d0c;
        case 0x1e1d10u: goto label_1e1d10;
        case 0x1e1d14u: goto label_1e1d14;
        case 0x1e1d18u: goto label_1e1d18;
        case 0x1e1d1cu: goto label_1e1d1c;
        case 0x1e1d20u: goto label_1e1d20;
        case 0x1e1d24u: goto label_1e1d24;
        case 0x1e1d28u: goto label_1e1d28;
        case 0x1e1d2cu: goto label_1e1d2c;
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d34u: goto label_1e1d34;
        case 0x1e1d38u: goto label_1e1d38;
        case 0x1e1d3cu: goto label_1e1d3c;
        case 0x1e1d40u: goto label_1e1d40;
        case 0x1e1d44u: goto label_1e1d44;
        case 0x1e1d48u: goto label_1e1d48;
        case 0x1e1d4cu: goto label_1e1d4c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        case 0x1e1d68u: goto label_1e1d68;
        case 0x1e1d6cu: goto label_1e1d6c;
        case 0x1e1d70u: goto label_1e1d70;
        case 0x1e1d74u: goto label_1e1d74;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d7cu: goto label_1e1d7c;
        case 0x1e1d80u: goto label_1e1d80;
        case 0x1e1d84u: goto label_1e1d84;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1d8cu: goto label_1e1d8c;
        case 0x1e1d90u: goto label_1e1d90;
        case 0x1e1d94u: goto label_1e1d94;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1d9cu: goto label_1e1d9c;
        case 0x1e1da0u: goto label_1e1da0;
        case 0x1e1da4u: goto label_1e1da4;
        case 0x1e1da8u: goto label_1e1da8;
        case 0x1e1dacu: goto label_1e1dac;
        case 0x1e1db0u: goto label_1e1db0;
        case 0x1e1db4u: goto label_1e1db4;
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dbcu: goto label_1e1dbc;
        case 0x1e1dc0u: goto label_1e1dc0;
        case 0x1e1dc4u: goto label_1e1dc4;
        case 0x1e1dc8u: goto label_1e1dc8;
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1dd4u: goto label_1e1dd4;
        case 0x1e1dd8u: goto label_1e1dd8;
        case 0x1e1ddcu: goto label_1e1ddc;
        case 0x1e1de0u: goto label_1e1de0;
        case 0x1e1de4u: goto label_1e1de4;
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1decu: goto label_1e1dec;
        case 0x1e1df0u: goto label_1e1df0;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1df8u: goto label_1e1df8;
        case 0x1e1dfcu: goto label_1e1dfc;
        case 0x1e1e00u: goto label_1e1e00;
        case 0x1e1e04u: goto label_1e1e04;
        case 0x1e1e08u: goto label_1e1e08;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e10u: goto label_1e1e10;
        case 0x1e1e14u: goto label_1e1e14;
        case 0x1e1e18u: goto label_1e1e18;
        case 0x1e1e1cu: goto label_1e1e1c;
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e28u: goto label_1e1e28;
        case 0x1e1e2cu: goto label_1e1e2c;
        case 0x1e1e30u: goto label_1e1e30;
        case 0x1e1e34u: goto label_1e1e34;
        case 0x1e1e38u: goto label_1e1e38;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e40u: goto label_1e1e40;
        case 0x1e1e44u: goto label_1e1e44;
        case 0x1e1e48u: goto label_1e1e48;
        case 0x1e1e4cu: goto label_1e1e4c;
        case 0x1e1e50u: goto label_1e1e50;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e58u: goto label_1e1e58;
        case 0x1e1e5cu: goto label_1e1e5c;
        case 0x1e1e60u: goto label_1e1e60;
        case 0x1e1e64u: goto label_1e1e64;
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1e70u: goto label_1e1e70;
        case 0x1e1e74u: goto label_1e1e74;
        case 0x1e1e78u: goto label_1e1e78;
        case 0x1e1e7cu: goto label_1e1e7c;
        case 0x1e1e80u: goto label_1e1e80;
        case 0x1e1e84u: goto label_1e1e84;
        case 0x1e1e88u: goto label_1e1e88;
        case 0x1e1e8cu: goto label_1e1e8c;
        case 0x1e1e90u: goto label_1e1e90;
        case 0x1e1e94u: goto label_1e1e94;
        case 0x1e1e98u: goto label_1e1e98;
        case 0x1e1e9cu: goto label_1e1e9c;
        case 0x1e1ea0u: goto label_1e1ea0;
        case 0x1e1ea4u: goto label_1e1ea4;
        case 0x1e1ea8u: goto label_1e1ea8;
        case 0x1e1eacu: goto label_1e1eac;
        case 0x1e1eb0u: goto label_1e1eb0;
        case 0x1e1eb4u: goto label_1e1eb4;
        case 0x1e1eb8u: goto label_1e1eb8;
        case 0x1e1ebcu: goto label_1e1ebc;
        case 0x1e1ec0u: goto label_1e1ec0;
        case 0x1e1ec4u: goto label_1e1ec4;
        case 0x1e1ec8u: goto label_1e1ec8;
        case 0x1e1eccu: goto label_1e1ecc;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1ed4u: goto label_1e1ed4;
        case 0x1e1ed8u: goto label_1e1ed8;
        case 0x1e1edcu: goto label_1e1edc;
        case 0x1e1ee0u: goto label_1e1ee0;
        case 0x1e1ee4u: goto label_1e1ee4;
        case 0x1e1ee8u: goto label_1e1ee8;
        case 0x1e1eecu: goto label_1e1eec;
        case 0x1e1ef0u: goto label_1e1ef0;
        case 0x1e1ef4u: goto label_1e1ef4;
        case 0x1e1ef8u: goto label_1e1ef8;
        case 0x1e1efcu: goto label_1e1efc;
        case 0x1e1f00u: goto label_1e1f00;
        case 0x1e1f04u: goto label_1e1f04;
        case 0x1e1f08u: goto label_1e1f08;
        case 0x1e1f0cu: goto label_1e1f0c;
        case 0x1e1f10u: goto label_1e1f10;
        case 0x1e1f14u: goto label_1e1f14;
        case 0x1e1f18u: goto label_1e1f18;
        case 0x1e1f1cu: goto label_1e1f1c;
        case 0x1e1f20u: goto label_1e1f20;
        case 0x1e1f24u: goto label_1e1f24;
        case 0x1e1f28u: goto label_1e1f28;
        case 0x1e1f2cu: goto label_1e1f2c;
        case 0x1e1f30u: goto label_1e1f30;
        case 0x1e1f34u: goto label_1e1f34;
        case 0x1e1f38u: goto label_1e1f38;
        case 0x1e1f3cu: goto label_1e1f3c;
        case 0x1e1f40u: goto label_1e1f40;
        case 0x1e1f44u: goto label_1e1f44;
        case 0x1e1f48u: goto label_1e1f48;
        case 0x1e1f4cu: goto label_1e1f4c;
        case 0x1e1f50u: goto label_1e1f50;
        case 0x1e1f54u: goto label_1e1f54;
        case 0x1e1f58u: goto label_1e1f58;
        case 0x1e1f5cu: goto label_1e1f5c;
        case 0x1e1f60u: goto label_1e1f60;
        case 0x1e1f64u: goto label_1e1f64;
        case 0x1e1f68u: goto label_1e1f68;
        case 0x1e1f6cu: goto label_1e1f6c;
        case 0x1e1f70u: goto label_1e1f70;
        case 0x1e1f74u: goto label_1e1f74;
        case 0x1e1f78u: goto label_1e1f78;
        case 0x1e1f7cu: goto label_1e1f7c;
        case 0x1e1f80u: goto label_1e1f80;
        case 0x1e1f84u: goto label_1e1f84;
        case 0x1e1f88u: goto label_1e1f88;
        case 0x1e1f8cu: goto label_1e1f8c;
        case 0x1e1f90u: goto label_1e1f90;
        case 0x1e1f94u: goto label_1e1f94;
        case 0x1e1f98u: goto label_1e1f98;
        case 0x1e1f9cu: goto label_1e1f9c;
        case 0x1e1fa0u: goto label_1e1fa0;
        case 0x1e1fa4u: goto label_1e1fa4;
        case 0x1e1fa8u: goto label_1e1fa8;
        case 0x1e1facu: goto label_1e1fac;
        case 0x1e1fb0u: goto label_1e1fb0;
        case 0x1e1fb4u: goto label_1e1fb4;
        case 0x1e1fb8u: goto label_1e1fb8;
        case 0x1e1fbcu: goto label_1e1fbc;
        case 0x1e1fc0u: goto label_1e1fc0;
        case 0x1e1fc4u: goto label_1e1fc4;
        case 0x1e1fc8u: goto label_1e1fc8;
        case 0x1e1fccu: goto label_1e1fcc;
        case 0x1e1fd0u: goto label_1e1fd0;
        case 0x1e1fd4u: goto label_1e1fd4;
        case 0x1e1fd8u: goto label_1e1fd8;
        case 0x1e1fdcu: goto label_1e1fdc;
        case 0x1e1fe0u: goto label_1e1fe0;
        case 0x1e1fe4u: goto label_1e1fe4;
        case 0x1e1fe8u: goto label_1e1fe8;
        case 0x1e1fecu: goto label_1e1fec;
        case 0x1e1ff0u: goto label_1e1ff0;
        case 0x1e1ff4u: goto label_1e1ff4;
        case 0x1e1ff8u: goto label_1e1ff8;
        case 0x1e1ffcu: goto label_1e1ffc;
        case 0x1e2000u: goto label_1e2000;
        case 0x1e2004u: goto label_1e2004;
        case 0x1e2008u: goto label_1e2008;
        case 0x1e200cu: goto label_1e200c;
        case 0x1e2010u: goto label_1e2010;
        case 0x1e2014u: goto label_1e2014;
        case 0x1e2018u: goto label_1e2018;
        case 0x1e201cu: goto label_1e201c;
        case 0x1e2020u: goto label_1e2020;
        case 0x1e2024u: goto label_1e2024;
        case 0x1e2028u: goto label_1e2028;
        case 0x1e202cu: goto label_1e202c;
        case 0x1e2030u: goto label_1e2030;
        case 0x1e2034u: goto label_1e2034;
        case 0x1e2038u: goto label_1e2038;
        case 0x1e203cu: goto label_1e203c;
        case 0x1e2040u: goto label_1e2040;
        case 0x1e2044u: goto label_1e2044;
        case 0x1e2048u: goto label_1e2048;
        case 0x1e204cu: goto label_1e204c;
        case 0x1e2050u: goto label_1e2050;
        case 0x1e2054u: goto label_1e2054;
        case 0x1e2058u: goto label_1e2058;
        case 0x1e205cu: goto label_1e205c;
        case 0x1e2060u: goto label_1e2060;
        case 0x1e2064u: goto label_1e2064;
        case 0x1e2068u: goto label_1e2068;
        case 0x1e206cu: goto label_1e206c;
        case 0x1e2070u: goto label_1e2070;
        case 0x1e2074u: goto label_1e2074;
        case 0x1e2078u: goto label_1e2078;
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2080u: goto label_1e2080;
        case 0x1e2084u: goto label_1e2084;
        default: break;
    }

    ctx->pc = 0x1e1a30u;

label_1e1a30:
    // 0x1e1a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e1a34:
    // 0x1e1a34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e1a38:
    // 0x1e1a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e1a3c:
    // 0x1e1a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1a40:
    // 0x1e1a40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e1a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a44:
    // 0x1e1a44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1a48:
    // 0x1e1a48: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1e1a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a4c:
    // 0x1e1a4c: 0x2c41002a  sltiu       $at, $v0, 0x2A
    ctx->pc = 0x1e1a4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
label_1e1a50:
    // 0x1e1a50: 0x1020016f  beqz        $at, . + 4 + (0x16F << 2)
label_1e1a54:
    if (ctx->pc == 0x1E1A54u) {
        ctx->pc = 0x1E1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A50u;
        // 0x1e1a54: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A58u;
        goto label_1e1a58;
    }
    ctx->pc = 0x1E1A50u;
    {
        const bool branch_taken_0x1e1a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A50u;
        // 0x1e1a54: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a50) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1A58u;
label_1e1a58:
    // 0x1e1a58: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1e1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_1e1a5c:
    // 0x1e1a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e1a60:
    // 0x1e1a60: 0x24635e10  addiu       $v1, $v1, 0x5E10
    ctx->pc = 0x1e1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24080));
label_1e1a64:
    // 0x1e1a64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1a68:
    // 0x1e1a68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1a6c:
    // 0x1e1a6c: 0x400008  jr          $v0
label_1e1a70:
    if (ctx->pc == 0x1E1A70u) {
        ctx->pc = 0x1E1A74u;
        goto label_1e1a74;
    }
    ctx->pc = 0x1E1A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1A78u: goto label_1e1a78;
            case 0x1E1AA8u: goto label_1e1aa8;
            case 0x1E1AD8u: goto label_1e1ad8;
            case 0x1E1B08u: goto label_1e1b08;
            case 0x1E1B38u: goto label_1e1b38;
            case 0x1E1B68u: goto label_1e1b68;
            case 0x1E1B98u: goto label_1e1b98;
            case 0x1E1BC8u: goto label_1e1bc8;
            case 0x1E1BF8u: goto label_1e1bf8;
            case 0x1E1C28u: goto label_1e1c28;
            case 0x1E1C58u: goto label_1e1c58;
            case 0x1E1C88u: goto label_1e1c88;
            case 0x1E1CB8u: goto label_1e1cb8;
            case 0x1E1CE8u: goto label_1e1ce8;
            case 0x1E1D18u: goto label_1e1d18;
            case 0x1E1D48u: goto label_1e1d48;
            case 0x1E1D78u: goto label_1e1d78;
            case 0x1E1DA8u: goto label_1e1da8;
            case 0x1E1DD8u: goto label_1e1dd8;
            case 0x1E1E08u: goto label_1e1e08;
            case 0x1E1E38u: goto label_1e1e38;
            case 0x1E1E68u: goto label_1e1e68;
            case 0x1E1E98u: goto label_1e1e98;
            case 0x1E1EC8u: goto label_1e1ec8;
            case 0x1E1EF8u: goto label_1e1ef8;
            case 0x1E1F28u: goto label_1e1f28;
            case 0x1E1F58u: goto label_1e1f58;
            case 0x1E1F88u: goto label_1e1f88;
            case 0x1E1FB8u: goto label_1e1fb8;
            case 0x1E1FE8u: goto label_1e1fe8;
            case 0x1E2010u: goto label_1e2010;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E1A74u;
label_1e1a74:
    // 0x1e1a74: 0x0  nop
    ctx->pc = 0x1e1a74u;
    // NOP
label_1e1a78:
    // 0x1e1a78: 0xc096c88  jal         func_25B220
label_1e1a7c:
    if (ctx->pc == 0x1E1A7Cu) {
        ctx->pc = 0x1E1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A78u;
        // 0x1e1a7c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A80u;
        goto label_1e1a80;
    }
    ctx->pc = 0x1E1A78u;
    SET_GPR_U32(ctx, 31, 0x1E1A80u);
    ctx->pc = 0x1E1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A78u;
    // 0x1e1a7c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1A78u, 0x1E1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A80u;
label_1e1a80:
    // 0x1e1a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a84:
    // 0x1e1a84: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1a88:
    if (ctx->pc == 0x1E1A88u) {
        ctx->pc = 0x1E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A84u;
        // 0x1e1a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A8Cu;
        goto label_1e1a8c;
    }
    ctx->pc = 0x1E1A84u;
    {
        const bool branch_taken_0x1e1a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A84u;
        // 0x1e1a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a84) {
            ctx->pc = 0x1E1AA0u;
            goto label_1e1aa0;
        }
    }
    ctx->pc = 0x1E1A8Cu;
label_1e1a8c:
    // 0x1e1a8c: 0xc07867c  jal         func_1E19F0
label_1e1a90:
    if (ctx->pc == 0x1E1A90u) {
        ctx->pc = 0x1E1A94u;
        goto label_1e1a94;
    }
    ctx->pc = 0x1E1A8Cu;
    SET_GPR_U32(ctx, 31, 0x1E1A94u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1A8Cu, 0x1E1A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A94u;
label_1e1a94:
    // 0x1e1a94: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1a98:
    // 0x1e1a98: 0x24427290  addiu       $v0, $v0, 0x7290
    ctx->pc = 0x1e1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
label_1e1a9c:
    // 0x1e1a9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1aa0:
    // 0x1e1aa0: 0x1000015b  b           . + 4 + (0x15B << 2)
label_1e1aa4:
    if (ctx->pc == 0x1E1AA4u) {
        ctx->pc = 0x1E1AA8u;
        goto label_1e1aa8;
    }
    ctx->pc = 0x1E1AA0u;
    {
        const bool branch_taken_0x1e1aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1aa0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1AA8u;
label_1e1aa8:
    // 0x1e1aa8: 0xc096c88  jal         func_25B220
label_1e1aac:
    if (ctx->pc == 0x1E1AACu) {
        ctx->pc = 0x1E1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AA8u;
        // 0x1e1aac: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AB0u;
        goto label_1e1ab0;
    }
    ctx->pc = 0x1E1AA8u;
    SET_GPR_U32(ctx, 31, 0x1E1AB0u);
    ctx->pc = 0x1E1AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AA8u;
    // 0x1e1aac: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1AA8u, 0x1E1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AB0u;
label_1e1ab0:
    // 0x1e1ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ab4:
    // 0x1e1ab4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1ab8:
    if (ctx->pc == 0x1E1AB8u) {
        ctx->pc = 0x1E1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB4u;
        // 0x1e1ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1ABCu;
        goto label_1e1abc;
    }
    ctx->pc = 0x1E1AB4u;
    {
        const bool branch_taken_0x1e1ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB4u;
        // 0x1e1ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ab4) {
            ctx->pc = 0x1E1AD0u;
            goto label_1e1ad0;
        }
    }
    ctx->pc = 0x1E1ABCu;
label_1e1abc:
    // 0x1e1abc: 0xc07867c  jal         func_1E19F0
label_1e1ac0:
    if (ctx->pc == 0x1E1AC0u) {
        ctx->pc = 0x1E1AC4u;
        goto label_1e1ac4;
    }
    ctx->pc = 0x1E1ABCu;
    SET_GPR_U32(ctx, 31, 0x1E1AC4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1ABCu, 0x1E1AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AC4u;
label_1e1ac4:
    // 0x1e1ac4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1ac8:
    // 0x1e1ac8: 0x24427230  addiu       $v0, $v0, 0x7230
    ctx->pc = 0x1e1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29232));
label_1e1acc:
    // 0x1e1acc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1ad0:
    // 0x1e1ad0: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1e1ad4:
    if (ctx->pc == 0x1E1AD4u) {
        ctx->pc = 0x1E1AD8u;
        goto label_1e1ad8;
    }
    ctx->pc = 0x1E1AD0u;
    {
        const bool branch_taken_0x1e1ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ad0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1AD8u;
label_1e1ad8:
    // 0x1e1ad8: 0xc096c88  jal         func_25B220
label_1e1adc:
    if (ctx->pc == 0x1E1ADCu) {
        ctx->pc = 0x1E1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AD8u;
        // 0x1e1adc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AE0u;
        goto label_1e1ae0;
    }
    ctx->pc = 0x1E1AD8u;
    SET_GPR_U32(ctx, 31, 0x1E1AE0u);
    ctx->pc = 0x1E1ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AD8u;
    // 0x1e1adc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1AD8u, 0x1E1AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AE0u;
label_1e1ae0:
    // 0x1e1ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ae4:
    // 0x1e1ae4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1ae8:
    if (ctx->pc == 0x1E1AE8u) {
        ctx->pc = 0x1E1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE4u;
        // 0x1e1ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AECu;
        goto label_1e1aec;
    }
    ctx->pc = 0x1E1AE4u;
    {
        const bool branch_taken_0x1e1ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE4u;
        // 0x1e1ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ae4) {
            ctx->pc = 0x1E1B00u;
            goto label_1e1b00;
        }
    }
    ctx->pc = 0x1E1AECu;
label_1e1aec:
    // 0x1e1aec: 0xc07867c  jal         func_1E19F0
label_1e1af0:
    if (ctx->pc == 0x1E1AF0u) {
        ctx->pc = 0x1E1AF4u;
        goto label_1e1af4;
    }
    ctx->pc = 0x1E1AECu;
    SET_GPR_U32(ctx, 31, 0x1E1AF4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1AECu, 0x1E1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AF4u;
label_1e1af4:
    // 0x1e1af4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1af8:
    // 0x1e1af8: 0x244271d0  addiu       $v0, $v0, 0x71D0
    ctx->pc = 0x1e1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29136));
label_1e1afc:
    // 0x1e1afc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1b00:
    // 0x1e1b00: 0x10000143  b           . + 4 + (0x143 << 2)
label_1e1b04:
    if (ctx->pc == 0x1E1B04u) {
        ctx->pc = 0x1E1B08u;
        goto label_1e1b08;
    }
    ctx->pc = 0x1E1B00u;
    {
        const bool branch_taken_0x1e1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b00) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1B08u;
label_1e1b08:
    // 0x1e1b08: 0xc096c88  jal         func_25B220
label_1e1b0c:
    if (ctx->pc == 0x1E1B0Cu) {
        ctx->pc = 0x1E1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B08u;
        // 0x1e1b0c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B10u;
        goto label_1e1b10;
    }
    ctx->pc = 0x1E1B08u;
    SET_GPR_U32(ctx, 31, 0x1E1B10u);
    ctx->pc = 0x1E1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B08u;
    // 0x1e1b0c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1B08u, 0x1E1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B10u;
label_1e1b10:
    // 0x1e1b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b14:
    // 0x1e1b14: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1b18:
    if (ctx->pc == 0x1E1B18u) {
        ctx->pc = 0x1E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B14u;
        // 0x1e1b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B1Cu;
        goto label_1e1b1c;
    }
    ctx->pc = 0x1E1B14u;
    {
        const bool branch_taken_0x1e1b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B14u;
        // 0x1e1b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b14) {
            ctx->pc = 0x1E1B30u;
            goto label_1e1b30;
        }
    }
    ctx->pc = 0x1E1B1Cu;
label_1e1b1c:
    // 0x1e1b1c: 0xc07867c  jal         func_1E19F0
label_1e1b20:
    if (ctx->pc == 0x1E1B20u) {
        ctx->pc = 0x1E1B24u;
        goto label_1e1b24;
    }
    ctx->pc = 0x1E1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B24u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1B1Cu, 0x1E1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B24u;
label_1e1b24:
    // 0x1e1b24: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1b28:
    // 0x1e1b28: 0x24427170  addiu       $v0, $v0, 0x7170
    ctx->pc = 0x1e1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29040));
label_1e1b2c:
    // 0x1e1b2c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1b30:
    // 0x1e1b30: 0x10000137  b           . + 4 + (0x137 << 2)
label_1e1b34:
    if (ctx->pc == 0x1E1B34u) {
        ctx->pc = 0x1E1B38u;
        goto label_1e1b38;
    }
    ctx->pc = 0x1E1B30u;
    {
        const bool branch_taken_0x1e1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b30) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1B38u;
label_1e1b38:
    // 0x1e1b38: 0xc096c88  jal         func_25B220
label_1e1b3c:
    if (ctx->pc == 0x1E1B3Cu) {
        ctx->pc = 0x1E1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B38u;
        // 0x1e1b3c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B40u;
        goto label_1e1b40;
    }
    ctx->pc = 0x1E1B38u;
    SET_GPR_U32(ctx, 31, 0x1E1B40u);
    ctx->pc = 0x1E1B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B38u;
    // 0x1e1b3c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1B38u, 0x1E1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B40u;
label_1e1b40:
    // 0x1e1b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b44:
    // 0x1e1b44: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1b48:
    if (ctx->pc == 0x1E1B48u) {
        ctx->pc = 0x1E1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B44u;
        // 0x1e1b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B4Cu;
        goto label_1e1b4c;
    }
    ctx->pc = 0x1E1B44u;
    {
        const bool branch_taken_0x1e1b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B44u;
        // 0x1e1b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b44) {
            ctx->pc = 0x1E1B60u;
            goto label_1e1b60;
        }
    }
    ctx->pc = 0x1E1B4Cu;
label_1e1b4c:
    // 0x1e1b4c: 0xc07867c  jal         func_1E19F0
label_1e1b50:
    if (ctx->pc == 0x1E1B50u) {
        ctx->pc = 0x1E1B54u;
        goto label_1e1b54;
    }
    ctx->pc = 0x1E1B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B54u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1B4Cu, 0x1E1B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B54u;
label_1e1b54:
    // 0x1e1b54: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1b58:
    // 0x1e1b58: 0x24427110  addiu       $v0, $v0, 0x7110
    ctx->pc = 0x1e1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28944));
label_1e1b5c:
    // 0x1e1b5c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1b60:
    // 0x1e1b60: 0x1000012b  b           . + 4 + (0x12B << 2)
label_1e1b64:
    if (ctx->pc == 0x1E1B64u) {
        ctx->pc = 0x1E1B68u;
        goto label_1e1b68;
    }
    ctx->pc = 0x1E1B60u;
    {
        const bool branch_taken_0x1e1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b60) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1B68u;
label_1e1b68:
    // 0x1e1b68: 0xc096c88  jal         func_25B220
label_1e1b6c:
    if (ctx->pc == 0x1E1B6Cu) {
        ctx->pc = 0x1E1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B68u;
        // 0x1e1b6c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B70u;
        goto label_1e1b70;
    }
    ctx->pc = 0x1E1B68u;
    SET_GPR_U32(ctx, 31, 0x1E1B70u);
    ctx->pc = 0x1E1B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B68u;
    // 0x1e1b6c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1B68u, 0x1E1B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B70u;
label_1e1b70:
    // 0x1e1b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b74:
    // 0x1e1b74: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1b78:
    if (ctx->pc == 0x1E1B78u) {
        ctx->pc = 0x1E1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B74u;
        // 0x1e1b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B7Cu;
        goto label_1e1b7c;
    }
    ctx->pc = 0x1E1B74u;
    {
        const bool branch_taken_0x1e1b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B74u;
        // 0x1e1b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b74) {
            ctx->pc = 0x1E1B90u;
            goto label_1e1b90;
        }
    }
    ctx->pc = 0x1E1B7Cu;
label_1e1b7c:
    // 0x1e1b7c: 0xc07867c  jal         func_1E19F0
label_1e1b80:
    if (ctx->pc == 0x1E1B80u) {
        ctx->pc = 0x1E1B84u;
        goto label_1e1b84;
    }
    ctx->pc = 0x1E1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B84u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1B7Cu, 0x1E1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B84u;
label_1e1b84:
    // 0x1e1b84: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1b88:
    // 0x1e1b88: 0x244270b0  addiu       $v0, $v0, 0x70B0
    ctx->pc = 0x1e1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28848));
label_1e1b8c:
    // 0x1e1b8c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1b90:
    // 0x1e1b90: 0x1000011f  b           . + 4 + (0x11F << 2)
label_1e1b94:
    if (ctx->pc == 0x1E1B94u) {
        ctx->pc = 0x1E1B98u;
        goto label_1e1b98;
    }
    ctx->pc = 0x1E1B90u;
    {
        const bool branch_taken_0x1e1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b90) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1B98u;
label_1e1b98:
    // 0x1e1b98: 0xc096c88  jal         func_25B220
label_1e1b9c:
    if (ctx->pc == 0x1E1B9Cu) {
        ctx->pc = 0x1E1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B98u;
        // 0x1e1b9c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BA0u;
        goto label_1e1ba0;
    }
    ctx->pc = 0x1E1B98u;
    SET_GPR_U32(ctx, 31, 0x1E1BA0u);
    ctx->pc = 0x1E1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B98u;
    // 0x1e1b9c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1B98u, 0x1E1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BA0u;
label_1e1ba0:
    // 0x1e1ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ba4:
    // 0x1e1ba4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1ba8:
    if (ctx->pc == 0x1E1BA8u) {
        ctx->pc = 0x1E1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BA4u;
        // 0x1e1ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BACu;
        goto label_1e1bac;
    }
    ctx->pc = 0x1E1BA4u;
    {
        const bool branch_taken_0x1e1ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BA4u;
        // 0x1e1ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ba4) {
            ctx->pc = 0x1E1BC0u;
            goto label_1e1bc0;
        }
    }
    ctx->pc = 0x1E1BACu;
label_1e1bac:
    // 0x1e1bac: 0xc07867c  jal         func_1E19F0
label_1e1bb0:
    if (ctx->pc == 0x1E1BB0u) {
        ctx->pc = 0x1E1BB4u;
        goto label_1e1bb4;
    }
    ctx->pc = 0x1E1BACu;
    SET_GPR_U32(ctx, 31, 0x1E1BB4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1BACu, 0x1E1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BB4u;
label_1e1bb4:
    // 0x1e1bb4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1bb8:
    // 0x1e1bb8: 0x24427050  addiu       $v0, $v0, 0x7050
    ctx->pc = 0x1e1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28752));
label_1e1bbc:
    // 0x1e1bbc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1bc0:
    // 0x1e1bc0: 0x10000113  b           . + 4 + (0x113 << 2)
label_1e1bc4:
    if (ctx->pc == 0x1E1BC4u) {
        ctx->pc = 0x1E1BC8u;
        goto label_1e1bc8;
    }
    ctx->pc = 0x1E1BC0u;
    {
        const bool branch_taken_0x1e1bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1bc0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1BC8u;
label_1e1bc8:
    // 0x1e1bc8: 0xc096c88  jal         func_25B220
label_1e1bcc:
    if (ctx->pc == 0x1E1BCCu) {
        ctx->pc = 0x1E1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BC8u;
        // 0x1e1bcc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BD0u;
        goto label_1e1bd0;
    }
    ctx->pc = 0x1E1BC8u;
    SET_GPR_U32(ctx, 31, 0x1E1BD0u);
    ctx->pc = 0x1E1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1BC8u;
    // 0x1e1bcc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1BC8u, 0x1E1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BD0u;
label_1e1bd0:
    // 0x1e1bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bd4:
    // 0x1e1bd4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1bd8:
    if (ctx->pc == 0x1E1BD8u) {
        ctx->pc = 0x1E1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BD4u;
        // 0x1e1bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BDCu;
        goto label_1e1bdc;
    }
    ctx->pc = 0x1E1BD4u;
    {
        const bool branch_taken_0x1e1bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BD4u;
        // 0x1e1bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bd4) {
            ctx->pc = 0x1E1BF0u;
            goto label_1e1bf0;
        }
    }
    ctx->pc = 0x1E1BDCu;
label_1e1bdc:
    // 0x1e1bdc: 0xc07867c  jal         func_1E19F0
label_1e1be0:
    if (ctx->pc == 0x1E1BE0u) {
        ctx->pc = 0x1E1BE4u;
        goto label_1e1be4;
    }
    ctx->pc = 0x1E1BDCu;
    SET_GPR_U32(ctx, 31, 0x1E1BE4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1BDCu, 0x1E1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BE4u;
label_1e1be4:
    // 0x1e1be4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1be8:
    // 0x1e1be8: 0x24426ff0  addiu       $v0, $v0, 0x6FF0
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28656));
label_1e1bec:
    // 0x1e1bec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1bf0:
    // 0x1e1bf0: 0x10000107  b           . + 4 + (0x107 << 2)
label_1e1bf4:
    if (ctx->pc == 0x1E1BF4u) {
        ctx->pc = 0x1E1BF8u;
        goto label_1e1bf8;
    }
    ctx->pc = 0x1E1BF0u;
    {
        const bool branch_taken_0x1e1bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1bf0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1BF8u;
label_1e1bf8:
    // 0x1e1bf8: 0xc096c88  jal         func_25B220
label_1e1bfc:
    if (ctx->pc == 0x1E1BFCu) {
        ctx->pc = 0x1E1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BF8u;
        // 0x1e1bfc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C00u;
        goto label_1e1c00;
    }
    ctx->pc = 0x1E1BF8u;
    SET_GPR_U32(ctx, 31, 0x1E1C00u);
    ctx->pc = 0x1E1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1BF8u;
    // 0x1e1bfc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1BF8u, 0x1E1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C00u;
label_1e1c00:
    // 0x1e1c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c04:
    // 0x1e1c04: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1c08:
    if (ctx->pc == 0x1E1C08u) {
        ctx->pc = 0x1E1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C04u;
        // 0x1e1c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C0Cu;
        goto label_1e1c0c;
    }
    ctx->pc = 0x1E1C04u;
    {
        const bool branch_taken_0x1e1c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C04u;
        // 0x1e1c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c04) {
            ctx->pc = 0x1E1C20u;
            goto label_1e1c20;
        }
    }
    ctx->pc = 0x1E1C0Cu;
label_1e1c0c:
    // 0x1e1c0c: 0xc07867c  jal         func_1E19F0
label_1e1c10:
    if (ctx->pc == 0x1E1C10u) {
        ctx->pc = 0x1E1C14u;
        goto label_1e1c14;
    }
    ctx->pc = 0x1E1C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C14u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1C0Cu, 0x1E1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C14u;
label_1e1c14:
    // 0x1e1c14: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1c18:
    // 0x1e1c18: 0x24426f90  addiu       $v0, $v0, 0x6F90
    ctx->pc = 0x1e1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28560));
label_1e1c1c:
    // 0x1e1c1c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1c20:
    // 0x1e1c20: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1e1c24:
    if (ctx->pc == 0x1E1C24u) {
        ctx->pc = 0x1E1C28u;
        goto label_1e1c28;
    }
    ctx->pc = 0x1E1C20u;
    {
        const bool branch_taken_0x1e1c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c20) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1C28u;
label_1e1c28:
    // 0x1e1c28: 0xc096c88  jal         func_25B220
label_1e1c2c:
    if (ctx->pc == 0x1E1C2Cu) {
        ctx->pc = 0x1E1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C28u;
        // 0x1e1c2c: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C30u;
        goto label_1e1c30;
    }
    ctx->pc = 0x1E1C28u;
    SET_GPR_U32(ctx, 31, 0x1E1C30u);
    ctx->pc = 0x1E1C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C28u;
    // 0x1e1c2c: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1C28u, 0x1E1C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C30u;
label_1e1c30:
    // 0x1e1c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c34:
    // 0x1e1c34: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1c38:
    if (ctx->pc == 0x1E1C38u) {
        ctx->pc = 0x1E1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C34u;
        // 0x1e1c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C3Cu;
        goto label_1e1c3c;
    }
    ctx->pc = 0x1E1C34u;
    {
        const bool branch_taken_0x1e1c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C34u;
        // 0x1e1c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c34) {
            ctx->pc = 0x1E1C50u;
            goto label_1e1c50;
        }
    }
    ctx->pc = 0x1E1C3Cu;
label_1e1c3c:
    // 0x1e1c3c: 0xc07867c  jal         func_1E19F0
label_1e1c40:
    if (ctx->pc == 0x1E1C40u) {
        ctx->pc = 0x1E1C44u;
        goto label_1e1c44;
    }
    ctx->pc = 0x1E1C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C44u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1C3Cu, 0x1E1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C44u;
label_1e1c44:
    // 0x1e1c44: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1c48:
    // 0x1e1c48: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x1e1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
label_1e1c4c:
    // 0x1e1c4c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1c50:
    // 0x1e1c50: 0x100000ef  b           . + 4 + (0xEF << 2)
label_1e1c54:
    if (ctx->pc == 0x1E1C54u) {
        ctx->pc = 0x1E1C58u;
        goto label_1e1c58;
    }
    ctx->pc = 0x1E1C50u;
    {
        const bool branch_taken_0x1e1c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c50) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1C58u;
label_1e1c58:
    // 0x1e1c58: 0xc096c88  jal         func_25B220
label_1e1c5c:
    if (ctx->pc == 0x1E1C5Cu) {
        ctx->pc = 0x1E1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C58u;
        // 0x1e1c5c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C60u;
        goto label_1e1c60;
    }
    ctx->pc = 0x1E1C58u;
    SET_GPR_U32(ctx, 31, 0x1E1C60u);
    ctx->pc = 0x1E1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C58u;
    // 0x1e1c5c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1C58u, 0x1E1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C60u;
label_1e1c60:
    // 0x1e1c60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c64:
    // 0x1e1c64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1c68:
    if (ctx->pc == 0x1E1C68u) {
        ctx->pc = 0x1E1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C64u;
        // 0x1e1c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C6Cu;
        goto label_1e1c6c;
    }
    ctx->pc = 0x1E1C64u;
    {
        const bool branch_taken_0x1e1c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C64u;
        // 0x1e1c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c64) {
            ctx->pc = 0x1E1C80u;
            goto label_1e1c80;
        }
    }
    ctx->pc = 0x1E1C6Cu;
label_1e1c6c:
    // 0x1e1c6c: 0xc07867c  jal         func_1E19F0
label_1e1c70:
    if (ctx->pc == 0x1E1C70u) {
        ctx->pc = 0x1E1C74u;
        goto label_1e1c74;
    }
    ctx->pc = 0x1E1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C74u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1C6Cu, 0x1E1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C74u;
label_1e1c74:
    // 0x1e1c74: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1c78:
    // 0x1e1c78: 0x24426ed0  addiu       $v0, $v0, 0x6ED0
    ctx->pc = 0x1e1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28368));
label_1e1c7c:
    // 0x1e1c7c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1c80:
    // 0x1e1c80: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_1e1c84:
    if (ctx->pc == 0x1E1C84u) {
        ctx->pc = 0x1E1C88u;
        goto label_1e1c88;
    }
    ctx->pc = 0x1E1C80u;
    {
        const bool branch_taken_0x1e1c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c80) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1C88u;
label_1e1c88:
    // 0x1e1c88: 0xc096c88  jal         func_25B220
label_1e1c8c:
    if (ctx->pc == 0x1E1C8Cu) {
        ctx->pc = 0x1E1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C88u;
        // 0x1e1c8c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C90u;
        goto label_1e1c90;
    }
    ctx->pc = 0x1E1C88u;
    SET_GPR_U32(ctx, 31, 0x1E1C90u);
    ctx->pc = 0x1E1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C88u;
    // 0x1e1c8c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1C88u, 0x1E1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C90u;
label_1e1c90:
    // 0x1e1c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c94:
    // 0x1e1c94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1c98:
    if (ctx->pc == 0x1E1C98u) {
        ctx->pc = 0x1E1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C94u;
        // 0x1e1c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C9Cu;
        goto label_1e1c9c;
    }
    ctx->pc = 0x1E1C94u;
    {
        const bool branch_taken_0x1e1c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C94u;
        // 0x1e1c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c94) {
            ctx->pc = 0x1E1CB0u;
            goto label_1e1cb0;
        }
    }
    ctx->pc = 0x1E1C9Cu;
label_1e1c9c:
    // 0x1e1c9c: 0xc07867c  jal         func_1E19F0
label_1e1ca0:
    if (ctx->pc == 0x1E1CA0u) {
        ctx->pc = 0x1E1CA4u;
        goto label_1e1ca4;
    }
    ctx->pc = 0x1E1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E1CA4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1C9Cu, 0x1E1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CA4u;
label_1e1ca4:
    // 0x1e1ca4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1ca8:
    // 0x1e1ca8: 0x24426e70  addiu       $v0, $v0, 0x6E70
    ctx->pc = 0x1e1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
label_1e1cac:
    // 0x1e1cac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1cb0:
    // 0x1e1cb0: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_1e1cb4:
    if (ctx->pc == 0x1E1CB4u) {
        ctx->pc = 0x1E1CB8u;
        goto label_1e1cb8;
    }
    ctx->pc = 0x1E1CB0u;
    {
        const bool branch_taken_0x1e1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1cb0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1CB8u;
label_1e1cb8:
    // 0x1e1cb8: 0xc096c88  jal         func_25B220
label_1e1cbc:
    if (ctx->pc == 0x1E1CBCu) {
        ctx->pc = 0x1E1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CB8u;
        // 0x1e1cbc: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CC0u;
        goto label_1e1cc0;
    }
    ctx->pc = 0x1E1CB8u;
    SET_GPR_U32(ctx, 31, 0x1E1CC0u);
    ctx->pc = 0x1E1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1CB8u;
    // 0x1e1cbc: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1CB8u, 0x1E1CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CC0u;
label_1e1cc0:
    // 0x1e1cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1cc4:
    // 0x1e1cc4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1cc8:
    if (ctx->pc == 0x1E1CC8u) {
        ctx->pc = 0x1E1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CC4u;
        // 0x1e1cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CCCu;
        goto label_1e1ccc;
    }
    ctx->pc = 0x1E1CC4u;
    {
        const bool branch_taken_0x1e1cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CC4u;
        // 0x1e1cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cc4) {
            ctx->pc = 0x1E1CE0u;
            goto label_1e1ce0;
        }
    }
    ctx->pc = 0x1E1CCCu;
label_1e1ccc:
    // 0x1e1ccc: 0xc07867c  jal         func_1E19F0
label_1e1cd0:
    if (ctx->pc == 0x1E1CD0u) {
        ctx->pc = 0x1E1CD4u;
        goto label_1e1cd4;
    }
    ctx->pc = 0x1E1CCCu;
    SET_GPR_U32(ctx, 31, 0x1E1CD4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1CCCu, 0x1E1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CD4u;
label_1e1cd4:
    // 0x1e1cd4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1cd8:
    // 0x1e1cd8: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x1e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_1e1cdc:
    // 0x1e1cdc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1ce0:
    // 0x1e1ce0: 0x100000cb  b           . + 4 + (0xCB << 2)
label_1e1ce4:
    if (ctx->pc == 0x1E1CE4u) {
        ctx->pc = 0x1E1CE8u;
        goto label_1e1ce8;
    }
    ctx->pc = 0x1E1CE0u;
    {
        const bool branch_taken_0x1e1ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ce0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1CE8u;
label_1e1ce8:
    // 0x1e1ce8: 0xc096c88  jal         func_25B220
label_1e1cec:
    if (ctx->pc == 0x1E1CECu) {
        ctx->pc = 0x1E1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CE8u;
        // 0x1e1cec: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CF0u;
        goto label_1e1cf0;
    }
    ctx->pc = 0x1E1CE8u;
    SET_GPR_U32(ctx, 31, 0x1E1CF0u);
    ctx->pc = 0x1E1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1CE8u;
    // 0x1e1cec: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1CE8u, 0x1E1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CF0u;
label_1e1cf0:
    // 0x1e1cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1cf4:
    // 0x1e1cf4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1cf8:
    if (ctx->pc == 0x1E1CF8u) {
        ctx->pc = 0x1E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CF4u;
        // 0x1e1cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CFCu;
        goto label_1e1cfc;
    }
    ctx->pc = 0x1E1CF4u;
    {
        const bool branch_taken_0x1e1cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CF4u;
        // 0x1e1cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cf4) {
            ctx->pc = 0x1E1D10u;
            goto label_1e1d10;
        }
    }
    ctx->pc = 0x1E1CFCu;
label_1e1cfc:
    // 0x1e1cfc: 0xc07867c  jal         func_1E19F0
label_1e1d00:
    if (ctx->pc == 0x1E1D00u) {
        ctx->pc = 0x1E1D04u;
        goto label_1e1d04;
    }
    ctx->pc = 0x1E1CFCu;
    SET_GPR_U32(ctx, 31, 0x1E1D04u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1CFCu, 0x1E1D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D04u;
label_1e1d04:
    // 0x1e1d04: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1d08:
    // 0x1e1d08: 0x24426db0  addiu       $v0, $v0, 0x6DB0
    ctx->pc = 0x1e1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28080));
label_1e1d0c:
    // 0x1e1d0c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1d10:
    // 0x1e1d10: 0x100000bf  b           . + 4 + (0xBF << 2)
label_1e1d14:
    if (ctx->pc == 0x1E1D14u) {
        ctx->pc = 0x1E1D18u;
        goto label_1e1d18;
    }
    ctx->pc = 0x1E1D10u;
    {
        const bool branch_taken_0x1e1d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d10) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1D18u;
label_1e1d18:
    // 0x1e1d18: 0xc096c88  jal         func_25B220
label_1e1d1c:
    if (ctx->pc == 0x1E1D1Cu) {
        ctx->pc = 0x1E1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D18u;
        // 0x1e1d1c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D20u;
        goto label_1e1d20;
    }
    ctx->pc = 0x1E1D18u;
    SET_GPR_U32(ctx, 31, 0x1E1D20u);
    ctx->pc = 0x1E1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D18u;
    // 0x1e1d1c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1D18u, 0x1E1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D20u;
label_1e1d20:
    // 0x1e1d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d24:
    // 0x1e1d24: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1d28:
    if (ctx->pc == 0x1E1D28u) {
        ctx->pc = 0x1E1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D24u;
        // 0x1e1d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D2Cu;
        goto label_1e1d2c;
    }
    ctx->pc = 0x1E1D24u;
    {
        const bool branch_taken_0x1e1d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D24u;
        // 0x1e1d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d24) {
            ctx->pc = 0x1E1D40u;
            goto label_1e1d40;
        }
    }
    ctx->pc = 0x1E1D2Cu;
label_1e1d2c:
    // 0x1e1d2c: 0xc07867c  jal         func_1E19F0
label_1e1d30:
    if (ctx->pc == 0x1E1D30u) {
        ctx->pc = 0x1E1D34u;
        goto label_1e1d34;
    }
    ctx->pc = 0x1E1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E1D34u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1D2Cu, 0x1E1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D34u;
label_1e1d34:
    // 0x1e1d34: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1d38:
    // 0x1e1d38: 0x24426d50  addiu       $v0, $v0, 0x6D50
    ctx->pc = 0x1e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27984));
label_1e1d3c:
    // 0x1e1d3c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1d40:
    // 0x1e1d40: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1e1d44:
    if (ctx->pc == 0x1E1D44u) {
        ctx->pc = 0x1E1D48u;
        goto label_1e1d48;
    }
    ctx->pc = 0x1E1D40u;
    {
        const bool branch_taken_0x1e1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d40) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1D48u;
label_1e1d48:
    // 0x1e1d48: 0xc096c88  jal         func_25B220
label_1e1d4c:
    if (ctx->pc == 0x1E1D4Cu) {
        ctx->pc = 0x1E1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D48u;
        // 0x1e1d4c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D50u;
        goto label_1e1d50;
    }
    ctx->pc = 0x1E1D48u;
    SET_GPR_U32(ctx, 31, 0x1E1D50u);
    ctx->pc = 0x1E1D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D48u;
    // 0x1e1d4c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1D48u, 0x1E1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D50u;
label_1e1d50:
    // 0x1e1d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d54:
    // 0x1e1d54: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1d58:
    if (ctx->pc == 0x1E1D58u) {
        ctx->pc = 0x1E1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D54u;
        // 0x1e1d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D5Cu;
        goto label_1e1d5c;
    }
    ctx->pc = 0x1E1D54u;
    {
        const bool branch_taken_0x1e1d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D54u;
        // 0x1e1d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d54) {
            ctx->pc = 0x1E1D70u;
            goto label_1e1d70;
        }
    }
    ctx->pc = 0x1E1D5Cu;
label_1e1d5c:
    // 0x1e1d5c: 0xc07867c  jal         func_1E19F0
label_1e1d60:
    if (ctx->pc == 0x1E1D60u) {
        ctx->pc = 0x1E1D64u;
        goto label_1e1d64;
    }
    ctx->pc = 0x1E1D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E1D64u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1D5Cu, 0x1E1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D64u;
label_1e1d64:
    // 0x1e1d64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1d68:
    // 0x1e1d68: 0x24426cf0  addiu       $v0, $v0, 0x6CF0
    ctx->pc = 0x1e1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27888));
label_1e1d6c:
    // 0x1e1d6c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1d70:
    // 0x1e1d70: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1e1d74:
    if (ctx->pc == 0x1E1D74u) {
        ctx->pc = 0x1E1D78u;
        goto label_1e1d78;
    }
    ctx->pc = 0x1E1D70u;
    {
        const bool branch_taken_0x1e1d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d70) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1D78u;
label_1e1d78:
    // 0x1e1d78: 0xc096c88  jal         func_25B220
label_1e1d7c:
    if (ctx->pc == 0x1E1D7Cu) {
        ctx->pc = 0x1E1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D78u;
        // 0x1e1d7c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D80u;
        goto label_1e1d80;
    }
    ctx->pc = 0x1E1D78u;
    SET_GPR_U32(ctx, 31, 0x1E1D80u);
    ctx->pc = 0x1E1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D78u;
    // 0x1e1d7c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1D78u, 0x1E1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D80u;
label_1e1d80:
    // 0x1e1d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d84:
    // 0x1e1d84: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1d88:
    if (ctx->pc == 0x1E1D88u) {
        ctx->pc = 0x1E1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D84u;
        // 0x1e1d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D8Cu;
        goto label_1e1d8c;
    }
    ctx->pc = 0x1E1D84u;
    {
        const bool branch_taken_0x1e1d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D84u;
        // 0x1e1d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d84) {
            ctx->pc = 0x1E1DA0u;
            goto label_1e1da0;
        }
    }
    ctx->pc = 0x1E1D8Cu;
label_1e1d8c:
    // 0x1e1d8c: 0xc07867c  jal         func_1E19F0
label_1e1d90:
    if (ctx->pc == 0x1E1D90u) {
        ctx->pc = 0x1E1D94u;
        goto label_1e1d94;
    }
    ctx->pc = 0x1E1D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E1D94u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1D8Cu, 0x1E1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D94u;
label_1e1d94:
    // 0x1e1d94: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1d98:
    // 0x1e1d98: 0x24426c90  addiu       $v0, $v0, 0x6C90
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27792));
label_1e1d9c:
    // 0x1e1d9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1da0:
    // 0x1e1da0: 0x1000009b  b           . + 4 + (0x9B << 2)
label_1e1da4:
    if (ctx->pc == 0x1E1DA4u) {
        ctx->pc = 0x1E1DA8u;
        goto label_1e1da8;
    }
    ctx->pc = 0x1E1DA0u;
    {
        const bool branch_taken_0x1e1da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1da0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1DA8u;
label_1e1da8:
    // 0x1e1da8: 0xc096c88  jal         func_25B220
label_1e1dac:
    if (ctx->pc == 0x1E1DACu) {
        ctx->pc = 0x1E1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DA8u;
        // 0x1e1dac: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DB0u;
        goto label_1e1db0;
    }
    ctx->pc = 0x1E1DA8u;
    SET_GPR_U32(ctx, 31, 0x1E1DB0u);
    ctx->pc = 0x1E1DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DA8u;
    // 0x1e1dac: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1DA8u, 0x1E1DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DB0u;
label_1e1db0:
    // 0x1e1db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1db4:
    // 0x1e1db4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1db8:
    if (ctx->pc == 0x1E1DB8u) {
        ctx->pc = 0x1E1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DB4u;
        // 0x1e1db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DBCu;
        goto label_1e1dbc;
    }
    ctx->pc = 0x1E1DB4u;
    {
        const bool branch_taken_0x1e1db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DB4u;
        // 0x1e1db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1db4) {
            ctx->pc = 0x1E1DD0u;
            goto label_1e1dd0;
        }
    }
    ctx->pc = 0x1E1DBCu;
label_1e1dbc:
    // 0x1e1dbc: 0xc07867c  jal         func_1E19F0
label_1e1dc0:
    if (ctx->pc == 0x1E1DC0u) {
        ctx->pc = 0x1E1DC4u;
        goto label_1e1dc4;
    }
    ctx->pc = 0x1E1DBCu;
    SET_GPR_U32(ctx, 31, 0x1E1DC4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1DBCu, 0x1E1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DC4u;
label_1e1dc4:
    // 0x1e1dc4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1dc8:
    // 0x1e1dc8: 0x24426c30  addiu       $v0, $v0, 0x6C30
    ctx->pc = 0x1e1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27696));
label_1e1dcc:
    // 0x1e1dcc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1dd0:
    // 0x1e1dd0: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1e1dd4:
    if (ctx->pc == 0x1E1DD4u) {
        ctx->pc = 0x1E1DD8u;
        goto label_1e1dd8;
    }
    ctx->pc = 0x1E1DD0u;
    {
        const bool branch_taken_0x1e1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1dd0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1DD8u;
label_1e1dd8:
    // 0x1e1dd8: 0xc096c88  jal         func_25B220
label_1e1ddc:
    if (ctx->pc == 0x1E1DDCu) {
        ctx->pc = 0x1E1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DD8u;
        // 0x1e1ddc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DE0u;
        goto label_1e1de0;
    }
    ctx->pc = 0x1E1DD8u;
    SET_GPR_U32(ctx, 31, 0x1E1DE0u);
    ctx->pc = 0x1E1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DD8u;
    // 0x1e1ddc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1DD8u, 0x1E1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DE0u;
label_1e1de0:
    // 0x1e1de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1de4:
    // 0x1e1de4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1de8:
    if (ctx->pc == 0x1E1DE8u) {
        ctx->pc = 0x1E1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DE4u;
        // 0x1e1de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DECu;
        goto label_1e1dec;
    }
    ctx->pc = 0x1E1DE4u;
    {
        const bool branch_taken_0x1e1de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DE4u;
        // 0x1e1de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1de4) {
            ctx->pc = 0x1E1E00u;
            goto label_1e1e00;
        }
    }
    ctx->pc = 0x1E1DECu;
label_1e1dec:
    // 0x1e1dec: 0xc07867c  jal         func_1E19F0
label_1e1df0:
    if (ctx->pc == 0x1E1DF0u) {
        ctx->pc = 0x1E1DF4u;
        goto label_1e1df4;
    }
    ctx->pc = 0x1E1DECu;
    SET_GPR_U32(ctx, 31, 0x1E1DF4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1DECu, 0x1E1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DF4u;
label_1e1df4:
    // 0x1e1df4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1df8:
    // 0x1e1df8: 0x24426bd0  addiu       $v0, $v0, 0x6BD0
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
label_1e1dfc:
    // 0x1e1dfc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1e00:
    // 0x1e1e00: 0x10000083  b           . + 4 + (0x83 << 2)
label_1e1e04:
    if (ctx->pc == 0x1E1E04u) {
        ctx->pc = 0x1E1E08u;
        goto label_1e1e08;
    }
    ctx->pc = 0x1E1E00u;
    {
        const bool branch_taken_0x1e1e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e00) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1E08u;
label_1e1e08:
    // 0x1e1e08: 0xc096c88  jal         func_25B220
label_1e1e0c:
    if (ctx->pc == 0x1E1E0Cu) {
        ctx->pc = 0x1E1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E08u;
        // 0x1e1e0c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E10u;
        goto label_1e1e10;
    }
    ctx->pc = 0x1E1E08u;
    SET_GPR_U32(ctx, 31, 0x1E1E10u);
    ctx->pc = 0x1E1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E08u;
    // 0x1e1e0c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1E08u, 0x1E1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E10u;
label_1e1e10:
    // 0x1e1e10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e14:
    // 0x1e1e14: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1e18:
    if (ctx->pc == 0x1E1E18u) {
        ctx->pc = 0x1E1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E14u;
        // 0x1e1e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E1Cu;
        goto label_1e1e1c;
    }
    ctx->pc = 0x1E1E14u;
    {
        const bool branch_taken_0x1e1e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E14u;
        // 0x1e1e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e14) {
            ctx->pc = 0x1E1E30u;
            goto label_1e1e30;
        }
    }
    ctx->pc = 0x1E1E1Cu;
label_1e1e1c:
    // 0x1e1e1c: 0xc07867c  jal         func_1E19F0
label_1e1e20:
    if (ctx->pc == 0x1E1E20u) {
        ctx->pc = 0x1E1E24u;
        goto label_1e1e24;
    }
    ctx->pc = 0x1E1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E1E24u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1E1Cu, 0x1E1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E24u;
label_1e1e24:
    // 0x1e1e24: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1e28:
    // 0x1e1e28: 0x24426b70  addiu       $v0, $v0, 0x6B70
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27504));
label_1e1e2c:
    // 0x1e1e2c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1e30:
    // 0x1e1e30: 0x10000077  b           . + 4 + (0x77 << 2)
label_1e1e34:
    if (ctx->pc == 0x1E1E34u) {
        ctx->pc = 0x1E1E38u;
        goto label_1e1e38;
    }
    ctx->pc = 0x1E1E30u;
    {
        const bool branch_taken_0x1e1e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e30) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1E38u;
label_1e1e38:
    // 0x1e1e38: 0xc096c88  jal         func_25B220
label_1e1e3c:
    if (ctx->pc == 0x1E1E3Cu) {
        ctx->pc = 0x1E1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E38u;
        // 0x1e1e3c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E40u;
        goto label_1e1e40;
    }
    ctx->pc = 0x1E1E38u;
    SET_GPR_U32(ctx, 31, 0x1E1E40u);
    ctx->pc = 0x1E1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E38u;
    // 0x1e1e3c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1E38u, 0x1E1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E40u;
label_1e1e40:
    // 0x1e1e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e44:
    // 0x1e1e44: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1e48:
    if (ctx->pc == 0x1E1E48u) {
        ctx->pc = 0x1E1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E44u;
        // 0x1e1e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E4Cu;
        goto label_1e1e4c;
    }
    ctx->pc = 0x1E1E44u;
    {
        const bool branch_taken_0x1e1e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E44u;
        // 0x1e1e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e44) {
            ctx->pc = 0x1E1E60u;
            goto label_1e1e60;
        }
    }
    ctx->pc = 0x1E1E4Cu;
label_1e1e4c:
    // 0x1e1e4c: 0xc07867c  jal         func_1E19F0
label_1e1e50:
    if (ctx->pc == 0x1E1E50u) {
        ctx->pc = 0x1E1E54u;
        goto label_1e1e54;
    }
    ctx->pc = 0x1E1E4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1E54u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1E4Cu, 0x1E1E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E54u;
label_1e1e54:
    // 0x1e1e54: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1e58:
    // 0x1e1e58: 0x24426b10  addiu       $v0, $v0, 0x6B10
    ctx->pc = 0x1e1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27408));
label_1e1e5c:
    // 0x1e1e5c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1e60:
    // 0x1e1e60: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1e1e64:
    if (ctx->pc == 0x1E1E64u) {
        ctx->pc = 0x1E1E68u;
        goto label_1e1e68;
    }
    ctx->pc = 0x1E1E60u;
    {
        const bool branch_taken_0x1e1e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e60) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1E68u;
label_1e1e68:
    // 0x1e1e68: 0xc096c88  jal         func_25B220
label_1e1e6c:
    if (ctx->pc == 0x1E1E6Cu) {
        ctx->pc = 0x1E1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E68u;
        // 0x1e1e6c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E70u;
        goto label_1e1e70;
    }
    ctx->pc = 0x1E1E68u;
    SET_GPR_U32(ctx, 31, 0x1E1E70u);
    ctx->pc = 0x1E1E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E68u;
    // 0x1e1e6c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1E68u, 0x1E1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E70u;
label_1e1e70:
    // 0x1e1e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e74:
    // 0x1e1e74: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1e78:
    if (ctx->pc == 0x1E1E78u) {
        ctx->pc = 0x1E1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E74u;
        // 0x1e1e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E7Cu;
        goto label_1e1e7c;
    }
    ctx->pc = 0x1E1E74u;
    {
        const bool branch_taken_0x1e1e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E74u;
        // 0x1e1e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e74) {
            ctx->pc = 0x1E1E90u;
            goto label_1e1e90;
        }
    }
    ctx->pc = 0x1E1E7Cu;
label_1e1e7c:
    // 0x1e1e7c: 0xc07867c  jal         func_1E19F0
label_1e1e80:
    if (ctx->pc == 0x1E1E80u) {
        ctx->pc = 0x1E1E84u;
        goto label_1e1e84;
    }
    ctx->pc = 0x1E1E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E1E84u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1E7Cu, 0x1E1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1E84u;
label_1e1e84:
    // 0x1e1e84: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1e88:
    // 0x1e1e88: 0x24426ab0  addiu       $v0, $v0, 0x6AB0
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_1e1e8c:
    // 0x1e1e8c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1e90:
    // 0x1e1e90: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1e1e94:
    if (ctx->pc == 0x1E1E94u) {
        ctx->pc = 0x1E1E98u;
        goto label_1e1e98;
    }
    ctx->pc = 0x1E1E90u;
    {
        const bool branch_taken_0x1e1e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e90) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1E98u;
label_1e1e98:
    // 0x1e1e98: 0xc096c88  jal         func_25B220
label_1e1e9c:
    if (ctx->pc == 0x1E1E9Cu) {
        ctx->pc = 0x1E1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E98u;
        // 0x1e1e9c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EA0u;
        goto label_1e1ea0;
    }
    ctx->pc = 0x1E1E98u;
    SET_GPR_U32(ctx, 31, 0x1E1EA0u);
    ctx->pc = 0x1E1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E98u;
    // 0x1e1e9c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1E98u, 0x1E1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EA0u;
label_1e1ea0:
    // 0x1e1ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ea4:
    // 0x1e1ea4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1ea8:
    if (ctx->pc == 0x1E1EA8u) {
        ctx->pc = 0x1E1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EA4u;
        // 0x1e1ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EACu;
        goto label_1e1eac;
    }
    ctx->pc = 0x1E1EA4u;
    {
        const bool branch_taken_0x1e1ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EA4u;
        // 0x1e1ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ea4) {
            ctx->pc = 0x1E1EC0u;
            goto label_1e1ec0;
        }
    }
    ctx->pc = 0x1E1EACu;
label_1e1eac:
    // 0x1e1eac: 0xc07867c  jal         func_1E19F0
label_1e1eb0:
    if (ctx->pc == 0x1E1EB0u) {
        ctx->pc = 0x1E1EB4u;
        goto label_1e1eb4;
    }
    ctx->pc = 0x1E1EACu;
    SET_GPR_U32(ctx, 31, 0x1E1EB4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1EACu, 0x1E1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EB4u;
label_1e1eb4:
    // 0x1e1eb4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1eb8:
    // 0x1e1eb8: 0x24426a50  addiu       $v0, $v0, 0x6A50
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27216));
label_1e1ebc:
    // 0x1e1ebc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1ec0:
    // 0x1e1ec0: 0x10000053  b           . + 4 + (0x53 << 2)
label_1e1ec4:
    if (ctx->pc == 0x1E1EC4u) {
        ctx->pc = 0x1E1EC8u;
        goto label_1e1ec8;
    }
    ctx->pc = 0x1E1EC0u;
    {
        const bool branch_taken_0x1e1ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ec0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1EC8u;
label_1e1ec8:
    // 0x1e1ec8: 0xc096c88  jal         func_25B220
label_1e1ecc:
    if (ctx->pc == 0x1E1ECCu) {
        ctx->pc = 0x1E1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EC8u;
        // 0x1e1ecc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1ED0u;
        goto label_1e1ed0;
    }
    ctx->pc = 0x1E1EC8u;
    SET_GPR_U32(ctx, 31, 0x1E1ED0u);
    ctx->pc = 0x1E1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EC8u;
    // 0x1e1ecc: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1EC8u, 0x1E1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1ED0u;
label_1e1ed0:
    // 0x1e1ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ed4:
    // 0x1e1ed4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1ed8:
    if (ctx->pc == 0x1E1ED8u) {
        ctx->pc = 0x1E1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1ED4u;
        // 0x1e1ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EDCu;
        goto label_1e1edc;
    }
    ctx->pc = 0x1E1ED4u;
    {
        const bool branch_taken_0x1e1ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1ED4u;
        // 0x1e1ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ed4) {
            ctx->pc = 0x1E1EF0u;
            goto label_1e1ef0;
        }
    }
    ctx->pc = 0x1E1EDCu;
label_1e1edc:
    // 0x1e1edc: 0xc07867c  jal         func_1E19F0
label_1e1ee0:
    if (ctx->pc == 0x1E1EE0u) {
        ctx->pc = 0x1E1EE4u;
        goto label_1e1ee4;
    }
    ctx->pc = 0x1E1EDCu;
    SET_GPR_U32(ctx, 31, 0x1E1EE4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1EDCu, 0x1E1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EE4u;
label_1e1ee4:
    // 0x1e1ee4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1ee8:
    // 0x1e1ee8: 0x244269f0  addiu       $v0, $v0, 0x69F0
    ctx->pc = 0x1e1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27120));
label_1e1eec:
    // 0x1e1eec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1ef0:
    // 0x1e1ef0: 0x10000047  b           . + 4 + (0x47 << 2)
label_1e1ef4:
    if (ctx->pc == 0x1E1EF4u) {
        ctx->pc = 0x1E1EF8u;
        goto label_1e1ef8;
    }
    ctx->pc = 0x1E1EF0u;
    {
        const bool branch_taken_0x1e1ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ef0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1EF8u;
label_1e1ef8:
    // 0x1e1ef8: 0xc096c88  jal         func_25B220
label_1e1efc:
    if (ctx->pc == 0x1E1EFCu) {
        ctx->pc = 0x1E1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EF8u;
        // 0x1e1efc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F00u;
        goto label_1e1f00;
    }
    ctx->pc = 0x1E1EF8u;
    SET_GPR_U32(ctx, 31, 0x1E1F00u);
    ctx->pc = 0x1E1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EF8u;
    // 0x1e1efc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1EF8u, 0x1E1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F00u;
label_1e1f00:
    // 0x1e1f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f04:
    // 0x1e1f04: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1f08:
    if (ctx->pc == 0x1E1F08u) {
        ctx->pc = 0x1E1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F04u;
        // 0x1e1f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F0Cu;
        goto label_1e1f0c;
    }
    ctx->pc = 0x1E1F04u;
    {
        const bool branch_taken_0x1e1f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F04u;
        // 0x1e1f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f04) {
            ctx->pc = 0x1E1F20u;
            goto label_1e1f20;
        }
    }
    ctx->pc = 0x1E1F0Cu;
label_1e1f0c:
    // 0x1e1f0c: 0xc07867c  jal         func_1E19F0
label_1e1f10:
    if (ctx->pc == 0x1E1F10u) {
        ctx->pc = 0x1E1F14u;
        goto label_1e1f14;
    }
    ctx->pc = 0x1E1F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E1F14u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1F0Cu, 0x1E1F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F14u;
label_1e1f14:
    // 0x1e1f14: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1f18:
    // 0x1e1f18: 0x24426990  addiu       $v0, $v0, 0x6990
    ctx->pc = 0x1e1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27024));
label_1e1f1c:
    // 0x1e1f1c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1f20:
    // 0x1e1f20: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1e1f24:
    if (ctx->pc == 0x1E1F24u) {
        ctx->pc = 0x1E1F28u;
        goto label_1e1f28;
    }
    ctx->pc = 0x1E1F20u;
    {
        const bool branch_taken_0x1e1f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f20) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1F28u;
label_1e1f28:
    // 0x1e1f28: 0xc096c88  jal         func_25B220
label_1e1f2c:
    if (ctx->pc == 0x1E1F2Cu) {
        ctx->pc = 0x1E1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F28u;
        // 0x1e1f2c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F30u;
        goto label_1e1f30;
    }
    ctx->pc = 0x1E1F28u;
    SET_GPR_U32(ctx, 31, 0x1E1F30u);
    ctx->pc = 0x1E1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1F28u;
    // 0x1e1f2c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1F28u, 0x1E1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F30u;
label_1e1f30:
    // 0x1e1f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f34:
    // 0x1e1f34: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1f38:
    if (ctx->pc == 0x1E1F38u) {
        ctx->pc = 0x1E1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F34u;
        // 0x1e1f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F3Cu;
        goto label_1e1f3c;
    }
    ctx->pc = 0x1E1F34u;
    {
        const bool branch_taken_0x1e1f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F34u;
        // 0x1e1f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f34) {
            ctx->pc = 0x1E1F50u;
            goto label_1e1f50;
        }
    }
    ctx->pc = 0x1E1F3Cu;
label_1e1f3c:
    // 0x1e1f3c: 0xc07867c  jal         func_1E19F0
label_1e1f40:
    if (ctx->pc == 0x1E1F40u) {
        ctx->pc = 0x1E1F44u;
        goto label_1e1f44;
    }
    ctx->pc = 0x1E1F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E1F44u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1F3Cu, 0x1E1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F44u;
label_1e1f44:
    // 0x1e1f44: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1f48:
    // 0x1e1f48: 0x24426930  addiu       $v0, $v0, 0x6930
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26928));
label_1e1f4c:
    // 0x1e1f4c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1f50:
    // 0x1e1f50: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e1f54:
    if (ctx->pc == 0x1E1F54u) {
        ctx->pc = 0x1E1F58u;
        goto label_1e1f58;
    }
    ctx->pc = 0x1E1F50u;
    {
        const bool branch_taken_0x1e1f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f50) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1F58u;
label_1e1f58:
    // 0x1e1f58: 0xc096c88  jal         func_25B220
label_1e1f5c:
    if (ctx->pc == 0x1E1F5Cu) {
        ctx->pc = 0x1E1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F58u;
        // 0x1e1f5c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F60u;
        goto label_1e1f60;
    }
    ctx->pc = 0x1E1F58u;
    SET_GPR_U32(ctx, 31, 0x1E1F60u);
    ctx->pc = 0x1E1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1F58u;
    // 0x1e1f5c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1F58u, 0x1E1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F60u;
label_1e1f60:
    // 0x1e1f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f64:
    // 0x1e1f64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1f68:
    if (ctx->pc == 0x1E1F68u) {
        ctx->pc = 0x1E1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F64u;
        // 0x1e1f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F6Cu;
        goto label_1e1f6c;
    }
    ctx->pc = 0x1E1F64u;
    {
        const bool branch_taken_0x1e1f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F64u;
        // 0x1e1f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f64) {
            ctx->pc = 0x1E1F80u;
            goto label_1e1f80;
        }
    }
    ctx->pc = 0x1E1F6Cu;
label_1e1f6c:
    // 0x1e1f6c: 0xc07867c  jal         func_1E19F0
label_1e1f70:
    if (ctx->pc == 0x1E1F70u) {
        ctx->pc = 0x1E1F74u;
        goto label_1e1f74;
    }
    ctx->pc = 0x1E1F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E1F74u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1F6Cu, 0x1E1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F74u;
label_1e1f74:
    // 0x1e1f74: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1f78:
    // 0x1e1f78: 0x244268d0  addiu       $v0, $v0, 0x68D0
    ctx->pc = 0x1e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26832));
label_1e1f7c:
    // 0x1e1f7c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1f80:
    // 0x1e1f80: 0x10000023  b           . + 4 + (0x23 << 2)
label_1e1f84:
    if (ctx->pc == 0x1E1F84u) {
        ctx->pc = 0x1E1F88u;
        goto label_1e1f88;
    }
    ctx->pc = 0x1E1F80u;
    {
        const bool branch_taken_0x1e1f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1f80) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1F88u;
label_1e1f88:
    // 0x1e1f88: 0xc096c88  jal         func_25B220
label_1e1f8c:
    if (ctx->pc == 0x1E1F8Cu) {
        ctx->pc = 0x1E1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F88u;
        // 0x1e1f8c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F90u;
        goto label_1e1f90;
    }
    ctx->pc = 0x1E1F88u;
    SET_GPR_U32(ctx, 31, 0x1E1F90u);
    ctx->pc = 0x1E1F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1F88u;
    // 0x1e1f8c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1F88u, 0x1E1F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F90u;
label_1e1f90:
    // 0x1e1f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1f94:
    // 0x1e1f94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1f98:
    if (ctx->pc == 0x1E1F98u) {
        ctx->pc = 0x1E1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F94u;
        // 0x1e1f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F9Cu;
        goto label_1e1f9c;
    }
    ctx->pc = 0x1E1F94u;
    {
        const bool branch_taken_0x1e1f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F94u;
        // 0x1e1f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f94) {
            ctx->pc = 0x1E1FB0u;
            goto label_1e1fb0;
        }
    }
    ctx->pc = 0x1E1F9Cu;
label_1e1f9c:
    // 0x1e1f9c: 0xc07867c  jal         func_1E19F0
label_1e1fa0:
    if (ctx->pc == 0x1E1FA0u) {
        ctx->pc = 0x1E1FA4u;
        goto label_1e1fa4;
    }
    ctx->pc = 0x1E1F9Cu;
    SET_GPR_U32(ctx, 31, 0x1E1FA4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1F9Cu, 0x1E1FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1FA4u;
label_1e1fa4:
    // 0x1e1fa4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1fa8:
    // 0x1e1fa8: 0x24426870  addiu       $v0, $v0, 0x6870
    ctx->pc = 0x1e1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26736));
label_1e1fac:
    // 0x1e1fac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1fb0:
    // 0x1e1fb0: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e1fb4:
    if (ctx->pc == 0x1E1FB4u) {
        ctx->pc = 0x1E1FB8u;
        goto label_1e1fb8;
    }
    ctx->pc = 0x1E1FB0u;
    {
        const bool branch_taken_0x1e1fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1fb0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1FB8u;
label_1e1fb8:
    // 0x1e1fb8: 0xc096c88  jal         func_25B220
label_1e1fbc:
    if (ctx->pc == 0x1E1FBCu) {
        ctx->pc = 0x1E1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FB8u;
        // 0x1e1fbc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FC0u;
        goto label_1e1fc0;
    }
    ctx->pc = 0x1E1FB8u;
    SET_GPR_U32(ctx, 31, 0x1E1FC0u);
    ctx->pc = 0x1E1FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1FB8u;
    // 0x1e1fbc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1FB8u, 0x1E1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1FC0u;
label_1e1fc0:
    // 0x1e1fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1fc4:
    // 0x1e1fc4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1fc8:
    if (ctx->pc == 0x1E1FC8u) {
        ctx->pc = 0x1E1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FC4u;
        // 0x1e1fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FCCu;
        goto label_1e1fcc;
    }
    ctx->pc = 0x1E1FC4u;
    {
        const bool branch_taken_0x1e1fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FC4u;
        // 0x1e1fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fc4) {
            ctx->pc = 0x1E1FE0u;
            goto label_1e1fe0;
        }
    }
    ctx->pc = 0x1E1FCCu;
label_1e1fcc:
    // 0x1e1fcc: 0xc07867c  jal         func_1E19F0
label_1e1fd0:
    if (ctx->pc == 0x1E1FD0u) {
        ctx->pc = 0x1E1FD4u;
        goto label_1e1fd4;
    }
    ctx->pc = 0x1E1FCCu;
    SET_GPR_U32(ctx, 31, 0x1E1FD4u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1FCCu, 0x1E1FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1FD4u;
label_1e1fd4:
    // 0x1e1fd4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e1fd8:
    // 0x1e1fd8: 0x24426810  addiu       $v0, $v0, 0x6810
    ctx->pc = 0x1e1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26640));
label_1e1fdc:
    // 0x1e1fdc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e1fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e1fe0:
    // 0x1e1fe0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e1fe4:
    if (ctx->pc == 0x1E1FE4u) {
        ctx->pc = 0x1E1FE8u;
        goto label_1e1fe8;
    }
    ctx->pc = 0x1E1FE0u;
    {
        const bool branch_taken_0x1e1fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1fe0) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1FE8u;
label_1e1fe8:
    // 0x1e1fe8: 0xc096c88  jal         func_25B220
label_1e1fec:
    if (ctx->pc == 0x1E1FECu) {
        ctx->pc = 0x1E1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FE8u;
        // 0x1e1fec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FF0u;
        goto label_1e1ff0;
    }
    ctx->pc = 0x1E1FE8u;
    SET_GPR_U32(ctx, 31, 0x1E1FF0u);
    ctx->pc = 0x1E1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1FE8u;
    // 0x1e1fec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B220u, 0x1E1FE8u, 0x1E1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1FF0u;
label_1e1ff0:
    // 0x1e1ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ff4:
    // 0x1e1ff4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e1ff8:
    if (ctx->pc == 0x1E1FF8u) {
        ctx->pc = 0x1E1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FF4u;
        // 0x1e1ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FFCu;
        goto label_1e1ffc;
    }
    ctx->pc = 0x1E1FF4u;
    {
        const bool branch_taken_0x1e1ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FF4u;
        // 0x1e1ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ff4) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1FFCu;
label_1e1ffc:
    // 0x1e1ffc: 0xc07867c  jal         func_1E19F0
label_1e2000:
    if (ctx->pc == 0x1E2000u) {
        ctx->pc = 0x1E2004u;
        goto label_1e2004;
    }
    ctx->pc = 0x1E1FFCu;
    SET_GPR_U32(ctx, 31, 0x1E2004u);
    ctx->pc = 0x1E19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19F0u, 0x1E1FFCu, 0x1E2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2004u;
label_1e2004:
    // 0x1e2004: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e2004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1e2008:
    // 0x1e2008: 0x244267b0  addiu       $v0, $v0, 0x67B0
    ctx->pc = 0x1e2008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26544));
label_1e200c:
    // 0x1e200c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e200cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e2010:
    // 0x1e2010: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1e2014:
    if (ctx->pc == 0x1E2014u) {
        ctx->pc = 0x1E2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2010u;
        // 0x1e2014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2018u;
        goto label_1e2018;
    }
    ctx->pc = 0x1E2010u;
    {
        const bool branch_taken_0x1e2010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2010u;
        // 0x1e2014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2010) {
            ctx->pc = 0x1E2020u;
            goto label_1e2020;
        }
    }
    ctx->pc = 0x1E2018u;
label_1e2018:
    // 0x1e2018: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e201c:
    if (ctx->pc == 0x1E201Cu) {
        ctx->pc = 0x1E2020u;
        goto label_1e2020;
    }
    ctx->pc = 0x1E2018u;
    {
        const bool branch_taken_0x1e2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2018) {
            ctx->pc = 0x1E2070u;
            goto label_1e2070;
        }
    }
    ctx->pc = 0x1E2020u;
label_1e2020:
    // 0x1e2020: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e2020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e2024:
    // 0x1e2024: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e2024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e2028:
    // 0x1e2028: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1e2028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1e202c:
    // 0x1e202c: 0x320f809  jalr        $t9
label_1e2030:
    if (ctx->pc == 0x1E2030u) {
        ctx->pc = 0x1E2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E202Cu;
        // 0x1e2030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2034u;
        goto label_1e2034;
    }
    ctx->pc = 0x1E202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2034u);
        ctx->pc = 0x1E2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E202Cu;
        // 0x1e2030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E202Cu, 0x1E2034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2034u;
label_1e2034:
    // 0x1e2034: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e2038:
    if (ctx->pc == 0x1E2038u) {
        ctx->pc = 0x1E203Cu;
        goto label_1e203c;
    }
    ctx->pc = 0x1E2034u;
    {
        const bool branch_taken_0x1e2034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2034) {
            ctx->pc = 0x1E2068u;
            goto label_1e2068;
        }
    }
    ctx->pc = 0x1E203Cu;
label_1e203c:
    // 0x1e203c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e2040:
    if (ctx->pc == 0x1E2040u) {
        ctx->pc = 0x1E2044u;
        goto label_1e2044;
    }
    ctx->pc = 0x1E203Cu;
    {
        const bool branch_taken_0x1e203c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e203c) {
            ctx->pc = 0x1E2060u;
            goto label_1e2060;
        }
    }
    ctx->pc = 0x1E2044u;
label_1e2044:
    // 0x1e2044: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e2048:
    if (ctx->pc == 0x1E2048u) {
        ctx->pc = 0x1E204Cu;
        goto label_1e204c;
    }
    ctx->pc = 0x1E2044u;
    {
        const bool branch_taken_0x1e2044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2044) {
            ctx->pc = 0x1E2060u;
            goto label_1e2060;
        }
    }
    ctx->pc = 0x1E204Cu;
label_1e204c:
    // 0x1e204c: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e204cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e2050:
    // 0x1e2050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2054:
    // 0x1e2054: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e2054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e2058:
    // 0x1e2058: 0x320f809  jalr        $t9
label_1e205c:
    if (ctx->pc == 0x1E205Cu) {
        ctx->pc = 0x1E205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2058u;
        // 0x1e205c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2060u;
        goto label_1e2060;
    }
    ctx->pc = 0x1E2058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2060u);
        ctx->pc = 0x1E205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2058u;
        // 0x1e205c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2058u, 0x1E2060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2060u;
label_1e2060:
    // 0x1e2060: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e2064:
    if (ctx->pc == 0x1E2064u) {
        ctx->pc = 0x1E2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2060u;
        // 0x1e2064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2068u;
        goto label_1e2068;
    }
    ctx->pc = 0x1E2060u;
    {
        const bool branch_taken_0x1e2060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2060u;
        // 0x1e2064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2060) {
            ctx->pc = 0x1E2070u;
            goto label_1e2070;
        }
    }
    ctx->pc = 0x1E2068u;
label_1e2068:
    // 0x1e2068: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x1e2068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
label_1e206c:
    // 0x1e206c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e206cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2070:
    // 0x1e2070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e2070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2074:
    // 0x1e2074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2078:
    // 0x1e2078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e207c:
    // 0x1e207c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e207cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2080:
    // 0x1e2080: 0x3e00008  jr          $ra
label_1e2084:
    if (ctx->pc == 0x1E2084u) {
        ctx->pc = 0x1E2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2080u;
        // 0x1e2084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2088u;
        goto label_fallthrough_0x1e2080;
    }
    ctx->pc = 0x1E2080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2080u;
        // 0x1e2084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2080:
    ctx->pc = 0x1E2088u;
}
