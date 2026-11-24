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

// Function: sub_001E4B40
// Address: 0x1e4b40 - 0x1e53ac
void sub_001E4B40_0x1e4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4B40_0x1e4b40");
#endif

    switch (ctx->pc) {
        case 0x1e4b40u: goto label_1e4b40;
        case 0x1e4b44u: goto label_1e4b44;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b4cu: goto label_1e4b4c;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b58u: goto label_1e4b58;
        case 0x1e4b5cu: goto label_1e4b5c;
        case 0x1e4b60u: goto label_1e4b60;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b68u: goto label_1e4b68;
        case 0x1e4b6cu: goto label_1e4b6c;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b74u: goto label_1e4b74;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b8cu: goto label_1e4b8c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4b9cu: goto label_1e4b9c;
        case 0x1e4ba0u: goto label_1e4ba0;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bb0u: goto label_1e4bb0;
        case 0x1e4bb4u: goto label_1e4bb4;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc4u: goto label_1e4bc4;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bccu: goto label_1e4bcc;
        case 0x1e4bd0u: goto label_1e4bd0;
        case 0x1e4bd4u: goto label_1e4bd4;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4be0u: goto label_1e4be0;
        case 0x1e4be4u: goto label_1e4be4;
        case 0x1e4be8u: goto label_1e4be8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4bf0u: goto label_1e4bf0;
        case 0x1e4bf4u: goto label_1e4bf4;
        case 0x1e4bf8u: goto label_1e4bf8;
        case 0x1e4bfcu: goto label_1e4bfc;
        case 0x1e4c00u: goto label_1e4c00;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c0cu: goto label_1e4c0c;
        case 0x1e4c10u: goto label_1e4c10;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c1cu: goto label_1e4c1c;
        case 0x1e4c20u: goto label_1e4c20;
        case 0x1e4c24u: goto label_1e4c24;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c30u: goto label_1e4c30;
        case 0x1e4c34u: goto label_1e4c34;
        case 0x1e4c38u: goto label_1e4c38;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c40u: goto label_1e4c40;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c4cu: goto label_1e4c4c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        case 0x1e4ce4u: goto label_1e4ce4;
        case 0x1e4ce8u: goto label_1e4ce8;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4cf0u: goto label_1e4cf0;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4cf8u: goto label_1e4cf8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d00u: goto label_1e4d00;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d08u: goto label_1e4d08;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d10u: goto label_1e4d10;
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d18u: goto label_1e4d18;
        case 0x1e4d1cu: goto label_1e4d1c;
        case 0x1e4d20u: goto label_1e4d20;
        case 0x1e4d24u: goto label_1e4d24;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d2cu: goto label_1e4d2c;
        case 0x1e4d30u: goto label_1e4d30;
        case 0x1e4d34u: goto label_1e4d34;
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d3cu: goto label_1e4d3c;
        case 0x1e4d40u: goto label_1e4d40;
        case 0x1e4d44u: goto label_1e4d44;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4d68u: goto label_1e4d68;
        case 0x1e4d6cu: goto label_1e4d6c;
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        case 0x1e4e28u: goto label_1e4e28;
        case 0x1e4e2cu: goto label_1e4e2c;
        case 0x1e4e30u: goto label_1e4e30;
        case 0x1e4e34u: goto label_1e4e34;
        case 0x1e4e38u: goto label_1e4e38;
        case 0x1e4e3cu: goto label_1e4e3c;
        case 0x1e4e40u: goto label_1e4e40;
        case 0x1e4e44u: goto label_1e4e44;
        case 0x1e4e48u: goto label_1e4e48;
        case 0x1e4e4cu: goto label_1e4e4c;
        case 0x1e4e50u: goto label_1e4e50;
        case 0x1e4e54u: goto label_1e4e54;
        case 0x1e4e58u: goto label_1e4e58;
        case 0x1e4e5cu: goto label_1e4e5c;
        case 0x1e4e60u: goto label_1e4e60;
        case 0x1e4e64u: goto label_1e4e64;
        case 0x1e4e68u: goto label_1e4e68;
        case 0x1e4e6cu: goto label_1e4e6c;
        case 0x1e4e70u: goto label_1e4e70;
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e78u: goto label_1e4e78;
        case 0x1e4e7cu: goto label_1e4e7c;
        case 0x1e4e80u: goto label_1e4e80;
        case 0x1e4e84u: goto label_1e4e84;
        case 0x1e4e88u: goto label_1e4e88;
        case 0x1e4e8cu: goto label_1e4e8c;
        case 0x1e4e90u: goto label_1e4e90;
        case 0x1e4e94u: goto label_1e4e94;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4e9cu: goto label_1e4e9c;
        case 0x1e4ea0u: goto label_1e4ea0;
        case 0x1e4ea4u: goto label_1e4ea4;
        case 0x1e4ea8u: goto label_1e4ea8;
        case 0x1e4eacu: goto label_1e4eac;
        case 0x1e4eb0u: goto label_1e4eb0;
        case 0x1e4eb4u: goto label_1e4eb4;
        case 0x1e4eb8u: goto label_1e4eb8;
        case 0x1e4ebcu: goto label_1e4ebc;
        case 0x1e4ec0u: goto label_1e4ec0;
        case 0x1e4ec4u: goto label_1e4ec4;
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4eccu: goto label_1e4ecc;
        case 0x1e4ed0u: goto label_1e4ed0;
        case 0x1e4ed4u: goto label_1e4ed4;
        case 0x1e4ed8u: goto label_1e4ed8;
        case 0x1e4edcu: goto label_1e4edc;
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ee4u: goto label_1e4ee4;
        case 0x1e4ee8u: goto label_1e4ee8;
        case 0x1e4eecu: goto label_1e4eec;
        case 0x1e4ef0u: goto label_1e4ef0;
        case 0x1e4ef4u: goto label_1e4ef4;
        case 0x1e4ef8u: goto label_1e4ef8;
        case 0x1e4efcu: goto label_1e4efc;
        case 0x1e4f00u: goto label_1e4f00;
        case 0x1e4f04u: goto label_1e4f04;
        case 0x1e4f08u: goto label_1e4f08;
        case 0x1e4f0cu: goto label_1e4f0c;
        case 0x1e4f10u: goto label_1e4f10;
        case 0x1e4f14u: goto label_1e4f14;
        case 0x1e4f18u: goto label_1e4f18;
        case 0x1e4f1cu: goto label_1e4f1c;
        case 0x1e4f20u: goto label_1e4f20;
        case 0x1e4f24u: goto label_1e4f24;
        case 0x1e4f28u: goto label_1e4f28;
        case 0x1e4f2cu: goto label_1e4f2c;
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f34u: goto label_1e4f34;
        case 0x1e4f38u: goto label_1e4f38;
        case 0x1e4f3cu: goto label_1e4f3c;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f44u: goto label_1e4f44;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f4cu: goto label_1e4f4c;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f54u: goto label_1e4f54;
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f60u: goto label_1e4f60;
        case 0x1e4f64u: goto label_1e4f64;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f6cu: goto label_1e4f6c;
        case 0x1e4f70u: goto label_1e4f70;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f80u: goto label_1e4f80;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4f88u: goto label_1e4f88;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f90u: goto label_1e4f90;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4f98u: goto label_1e4f98;
        case 0x1e4f9cu: goto label_1e4f9c;
        case 0x1e4fa0u: goto label_1e4fa0;
        case 0x1e4fa4u: goto label_1e4fa4;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4facu: goto label_1e4fac;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fb4u: goto label_1e4fb4;
        case 0x1e4fb8u: goto label_1e4fb8;
        case 0x1e4fbcu: goto label_1e4fbc;
        case 0x1e4fc0u: goto label_1e4fc0;
        case 0x1e4fc4u: goto label_1e4fc4;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fccu: goto label_1e4fcc;
        case 0x1e4fd0u: goto label_1e4fd0;
        case 0x1e4fd4u: goto label_1e4fd4;
        case 0x1e4fd8u: goto label_1e4fd8;
        case 0x1e4fdcu: goto label_1e4fdc;
        case 0x1e4fe0u: goto label_1e4fe0;
        case 0x1e4fe4u: goto label_1e4fe4;
        case 0x1e4fe8u: goto label_1e4fe8;
        case 0x1e4fecu: goto label_1e4fec;
        case 0x1e4ff0u: goto label_1e4ff0;
        case 0x1e4ff4u: goto label_1e4ff4;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e4ffcu: goto label_1e4ffc;
        case 0x1e5000u: goto label_1e5000;
        case 0x1e5004u: goto label_1e5004;
        case 0x1e5008u: goto label_1e5008;
        case 0x1e500cu: goto label_1e500c;
        case 0x1e5010u: goto label_1e5010;
        case 0x1e5014u: goto label_1e5014;
        case 0x1e5018u: goto label_1e5018;
        case 0x1e501cu: goto label_1e501c;
        case 0x1e5020u: goto label_1e5020;
        case 0x1e5024u: goto label_1e5024;
        case 0x1e5028u: goto label_1e5028;
        case 0x1e502cu: goto label_1e502c;
        case 0x1e5030u: goto label_1e5030;
        case 0x1e5034u: goto label_1e5034;
        case 0x1e5038u: goto label_1e5038;
        case 0x1e503cu: goto label_1e503c;
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5044u: goto label_1e5044;
        case 0x1e5048u: goto label_1e5048;
        case 0x1e504cu: goto label_1e504c;
        case 0x1e5050u: goto label_1e5050;
        case 0x1e5054u: goto label_1e5054;
        case 0x1e5058u: goto label_1e5058;
        case 0x1e505cu: goto label_1e505c;
        case 0x1e5060u: goto label_1e5060;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e5070u: goto label_1e5070;
        case 0x1e5074u: goto label_1e5074;
        case 0x1e5078u: goto label_1e5078;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5080u: goto label_1e5080;
        case 0x1e5084u: goto label_1e5084;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e508cu: goto label_1e508c;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e5098u: goto label_1e5098;
        case 0x1e509cu: goto label_1e509c;
        case 0x1e50a0u: goto label_1e50a0;
        case 0x1e50a4u: goto label_1e50a4;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b4u: goto label_1e50b4;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50bcu: goto label_1e50bc;
        case 0x1e50c0u: goto label_1e50c0;
        case 0x1e50c4u: goto label_1e50c4;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50ccu: goto label_1e50cc;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50d4u: goto label_1e50d4;
        case 0x1e50d8u: goto label_1e50d8;
        case 0x1e50dcu: goto label_1e50dc;
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e50e4u: goto label_1e50e4;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e50ecu: goto label_1e50ec;
        case 0x1e50f0u: goto label_1e50f0;
        case 0x1e50f4u: goto label_1e50f4;
        case 0x1e50f8u: goto label_1e50f8;
        case 0x1e50fcu: goto label_1e50fc;
        case 0x1e5100u: goto label_1e5100;
        case 0x1e5104u: goto label_1e5104;
        case 0x1e5108u: goto label_1e5108;
        case 0x1e510cu: goto label_1e510c;
        case 0x1e5110u: goto label_1e5110;
        case 0x1e5114u: goto label_1e5114;
        case 0x1e5118u: goto label_1e5118;
        case 0x1e511cu: goto label_1e511c;
        case 0x1e5120u: goto label_1e5120;
        case 0x1e5124u: goto label_1e5124;
        case 0x1e5128u: goto label_1e5128;
        case 0x1e512cu: goto label_1e512c;
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5134u: goto label_1e5134;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5148u: goto label_1e5148;
        case 0x1e514cu: goto label_1e514c;
        case 0x1e5150u: goto label_1e5150;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e5158u: goto label_1e5158;
        case 0x1e515cu: goto label_1e515c;
        case 0x1e5160u: goto label_1e5160;
        case 0x1e5164u: goto label_1e5164;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e516cu: goto label_1e516c;
        case 0x1e5170u: goto label_1e5170;
        case 0x1e5174u: goto label_1e5174;
        case 0x1e5178u: goto label_1e5178;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5180u: goto label_1e5180;
        case 0x1e5184u: goto label_1e5184;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e518cu: goto label_1e518c;
        case 0x1e5190u: goto label_1e5190;
        case 0x1e5194u: goto label_1e5194;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e519cu: goto label_1e519c;
        case 0x1e51a0u: goto label_1e51a0;
        case 0x1e51a4u: goto label_1e51a4;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51acu: goto label_1e51ac;
        case 0x1e51b0u: goto label_1e51b0;
        case 0x1e51b4u: goto label_1e51b4;
        case 0x1e51b8u: goto label_1e51b8;
        case 0x1e51bcu: goto label_1e51bc;
        case 0x1e51c0u: goto label_1e51c0;
        case 0x1e51c4u: goto label_1e51c4;
        case 0x1e51c8u: goto label_1e51c8;
        case 0x1e51ccu: goto label_1e51cc;
        case 0x1e51d0u: goto label_1e51d0;
        case 0x1e51d4u: goto label_1e51d4;
        case 0x1e51d8u: goto label_1e51d8;
        case 0x1e51dcu: goto label_1e51dc;
        case 0x1e51e0u: goto label_1e51e0;
        case 0x1e51e4u: goto label_1e51e4;
        case 0x1e51e8u: goto label_1e51e8;
        case 0x1e51ecu: goto label_1e51ec;
        case 0x1e51f0u: goto label_1e51f0;
        case 0x1e51f4u: goto label_1e51f4;
        case 0x1e51f8u: goto label_1e51f8;
        case 0x1e51fcu: goto label_1e51fc;
        case 0x1e5200u: goto label_1e5200;
        case 0x1e5204u: goto label_1e5204;
        case 0x1e5208u: goto label_1e5208;
        case 0x1e520cu: goto label_1e520c;
        case 0x1e5210u: goto label_1e5210;
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5218u: goto label_1e5218;
        case 0x1e521cu: goto label_1e521c;
        case 0x1e5220u: goto label_1e5220;
        case 0x1e5224u: goto label_1e5224;
        case 0x1e5228u: goto label_1e5228;
        case 0x1e522cu: goto label_1e522c;
        case 0x1e5230u: goto label_1e5230;
        case 0x1e5234u: goto label_1e5234;
        case 0x1e5238u: goto label_1e5238;
        case 0x1e523cu: goto label_1e523c;
        case 0x1e5240u: goto label_1e5240;
        case 0x1e5244u: goto label_1e5244;
        case 0x1e5248u: goto label_1e5248;
        case 0x1e524cu: goto label_1e524c;
        case 0x1e5250u: goto label_1e5250;
        case 0x1e5254u: goto label_1e5254;
        case 0x1e5258u: goto label_1e5258;
        case 0x1e525cu: goto label_1e525c;
        case 0x1e5260u: goto label_1e5260;
        case 0x1e5264u: goto label_1e5264;
        case 0x1e5268u: goto label_1e5268;
        case 0x1e526cu: goto label_1e526c;
        case 0x1e5270u: goto label_1e5270;
        case 0x1e5274u: goto label_1e5274;
        case 0x1e5278u: goto label_1e5278;
        case 0x1e527cu: goto label_1e527c;
        case 0x1e5280u: goto label_1e5280;
        case 0x1e5284u: goto label_1e5284;
        case 0x1e5288u: goto label_1e5288;
        case 0x1e528cu: goto label_1e528c;
        case 0x1e5290u: goto label_1e5290;
        case 0x1e5294u: goto label_1e5294;
        case 0x1e5298u: goto label_1e5298;
        case 0x1e529cu: goto label_1e529c;
        case 0x1e52a0u: goto label_1e52a0;
        case 0x1e52a4u: goto label_1e52a4;
        case 0x1e52a8u: goto label_1e52a8;
        case 0x1e52acu: goto label_1e52ac;
        case 0x1e52b0u: goto label_1e52b0;
        case 0x1e52b4u: goto label_1e52b4;
        case 0x1e52b8u: goto label_1e52b8;
        case 0x1e52bcu: goto label_1e52bc;
        case 0x1e52c0u: goto label_1e52c0;
        case 0x1e52c4u: goto label_1e52c4;
        case 0x1e52c8u: goto label_1e52c8;
        case 0x1e52ccu: goto label_1e52cc;
        case 0x1e52d0u: goto label_1e52d0;
        case 0x1e52d4u: goto label_1e52d4;
        case 0x1e52d8u: goto label_1e52d8;
        case 0x1e52dcu: goto label_1e52dc;
        case 0x1e52e0u: goto label_1e52e0;
        case 0x1e52e4u: goto label_1e52e4;
        case 0x1e52e8u: goto label_1e52e8;
        case 0x1e52ecu: goto label_1e52ec;
        case 0x1e52f0u: goto label_1e52f0;
        case 0x1e52f4u: goto label_1e52f4;
        case 0x1e52f8u: goto label_1e52f8;
        case 0x1e52fcu: goto label_1e52fc;
        case 0x1e5300u: goto label_1e5300;
        case 0x1e5304u: goto label_1e5304;
        case 0x1e5308u: goto label_1e5308;
        case 0x1e530cu: goto label_1e530c;
        case 0x1e5310u: goto label_1e5310;
        case 0x1e5314u: goto label_1e5314;
        case 0x1e5318u: goto label_1e5318;
        case 0x1e531cu: goto label_1e531c;
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5324u: goto label_1e5324;
        case 0x1e5328u: goto label_1e5328;
        case 0x1e532cu: goto label_1e532c;
        case 0x1e5330u: goto label_1e5330;
        case 0x1e5334u: goto label_1e5334;
        case 0x1e5338u: goto label_1e5338;
        case 0x1e533cu: goto label_1e533c;
        case 0x1e5340u: goto label_1e5340;
        case 0x1e5344u: goto label_1e5344;
        case 0x1e5348u: goto label_1e5348;
        case 0x1e534cu: goto label_1e534c;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        case 0x1e5370u: goto label_1e5370;
        case 0x1e5374u: goto label_1e5374;
        case 0x1e5378u: goto label_1e5378;
        case 0x1e537cu: goto label_1e537c;
        case 0x1e5380u: goto label_1e5380;
        case 0x1e5384u: goto label_1e5384;
        case 0x1e5388u: goto label_1e5388;
        case 0x1e538cu: goto label_1e538c;
        case 0x1e5390u: goto label_1e5390;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5398u: goto label_1e5398;
        case 0x1e539cu: goto label_1e539c;
        case 0x1e53a0u: goto label_1e53a0;
        case 0x1e53a4u: goto label_1e53a4;
        case 0x1e53a8u: goto label_1e53a8;
        default: break;
    }

    ctx->pc = 0x1e4b40u;

label_1e4b40:
    // 0x1e4b40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e4b44:
    // 0x1e4b44: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e4b48:
    // 0x1e4b48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e4b4c:
    // 0x1e4b4c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1e4b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1e4b50:
    // 0x1e4b50: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e4b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1e4b54:
    // 0x1e4b54: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e4b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1e4b58:
    // 0x1e4b58: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e4b58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b5c:
    // 0x1e4b5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e4b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e4b60:
    // 0x1e4b60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e4b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e4b64:
    // 0x1e4b64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e4b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e4b68:
    // 0x1e4b68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e4b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e4b6c:
    // 0x1e4b6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e4b70:
    // 0x1e4b70: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e4b70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e4b74:
    // 0x1e4b74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4b74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e4b78:
    // 0x1e4b78: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e4b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4b7c:
    // 0x1e4b7c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e4b80:
    if (ctx->pc == 0x1E4B80u) {
        ctx->pc = 0x1E4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B7Cu;
        // 0x1e4b80: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B84u;
        goto label_1e4b84;
    }
    ctx->pc = 0x1E4B7Cu;
    {
        const bool branch_taken_0x1e4b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B7Cu;
        // 0x1e4b80: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b7c) {
            ctx->pc = 0x1E4B90u;
            goto label_1e4b90;
        }
    }
    ctx->pc = 0x1E4B84u;
label_1e4b84:
    // 0x1e4b84: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_1e4b88:
    if (ctx->pc == 0x1E4B88u) {
        ctx->pc = 0x1E4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B84u;
        // 0x1e4b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B8Cu;
        goto label_1e4b8c;
    }
    ctx->pc = 0x1E4B84u;
    {
        const bool branch_taken_0x1e4b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B84u;
        // 0x1e4b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b84) {
            ctx->pc = 0x1E5378u;
            goto label_1e5378;
        }
    }
    ctx->pc = 0x1E4B8Cu;
label_1e4b8c:
    // 0x1e4b8c: 0x0  nop
    ctx->pc = 0x1e4b8cu;
    // NOP
label_1e4b90:
    // 0x1e4b90: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1e4b94:
    if (ctx->pc == 0x1E4B94u) {
        ctx->pc = 0x1E4B98u;
        goto label_1e4b98;
    }
    ctx->pc = 0x1E4B90u;
    {
        const bool branch_taken_0x1e4b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b90) {
            ctx->pc = 0x1E4BD8u;
            goto label_1e4bd8;
        }
    }
    ctx->pc = 0x1E4B98u;
label_1e4b98:
    // 0x1e4b98: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1e4b9c:
    // 0x1e4b9c: 0x9042001a  lbu         $v0, 0x1A($v0)
    ctx->pc = 0x1e4b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
label_1e4ba0:
    // 0x1e4ba0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e4ba4:
    if (ctx->pc == 0x1E4BA4u) {
        ctx->pc = 0x1E4BA8u;
        goto label_1e4ba8;
    }
    ctx->pc = 0x1E4BA0u;
    {
        const bool branch_taken_0x1e4ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ba0) {
            ctx->pc = 0x1E4BD8u;
            goto label_1e4bd8;
        }
    }
    ctx->pc = 0x1E4BA8u;
label_1e4ba8:
    // 0x1e4ba8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1e4bac:
    // 0x1e4bac: 0xc07679c  jal         func_1D9E70
label_1e4bb0:
    if (ctx->pc == 0x1E4BB0u) {
        ctx->pc = 0x1E4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BACu;
        // 0x1e4bb0: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BB4u;
        goto label_1e4bb4;
    }
    ctx->pc = 0x1E4BACu;
    SET_GPR_U32(ctx, 31, 0x1E4BB4u);
    ctx->pc = 0x1E4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4BACu;
    // 0x1e4bb0: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E4BACu, 0x1E4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BB4u;
label_1e4bb4:
    // 0x1e4bb4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1e4bb8:
    // 0x1e4bb8: 0x26a5003c  addiu       $a1, $s5, 0x3C
    ctx->pc = 0x1e4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_1e4bbc:
    // 0x1e4bbc: 0xc096cb8  jal         func_25B2E0
label_1e4bc0:
    if (ctx->pc == 0x1E4BC0u) {
        ctx->pc = 0x1E4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BBCu;
        // 0x1e4bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BC4u;
        goto label_1e4bc4;
    }
    ctx->pc = 0x1E4BBCu;
    SET_GPR_U32(ctx, 31, 0x1E4BC4u);
    ctx->pc = 0x1E4BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4BBCu;
    // 0x1e4bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x1E4BBCu, 0x1E4BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BC4u;
label_1e4bc4:
    // 0x1e4bc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e4bc8:
    if (ctx->pc == 0x1E4BC8u) {
        ctx->pc = 0x1E4BCCu;
        goto label_1e4bcc;
    }
    ctx->pc = 0x1E4BC4u;
    {
        const bool branch_taken_0x1e4bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bc4) {
            ctx->pc = 0x1E4BD8u;
            goto label_1e4bd8;
        }
    }
    ctx->pc = 0x1E4BCCu;
label_1e4bcc:
    // 0x1e4bcc: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x1e4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4bd0:
    // 0x1e4bd0: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x1e4bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
label_1e4bd4:
    // 0x1e4bd4: 0x0  nop
    ctx->pc = 0x1e4bd4u;
    // NOP
label_1e4bd8:
    // 0x1e4bd8: 0x92a20050  lbu         $v0, 0x50($s5)
    ctx->pc = 0x1e4bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
label_1e4bdc:
    // 0x1e4bdc: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
label_1e4be0:
    if (ctx->pc == 0x1E4BE0u) {
        ctx->pc = 0x1E4BE4u;
        goto label_1e4be4;
    }
    ctx->pc = 0x1E4BDCu;
    {
        const bool branch_taken_0x1e4bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bdc) {
            ctx->pc = 0x1E4FD0u;
            goto label_1e4fd0;
        }
    }
    ctx->pc = 0x1E4BE4u;
label_1e4be4:
    // 0x1e4be4: 0x86a3003a  lh          $v1, 0x3A($s5)
    ctx->pc = 0x1e4be4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 58)));
label_1e4be8:
    // 0x1e4be8: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e4bec:
    // 0x1e4bec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e4bf0:
    if (ctx->pc == 0x1E4BF0u) {
        ctx->pc = 0x1E4BF4u;
        goto label_1e4bf4;
    }
    ctx->pc = 0x1E4BECu;
    {
        const bool branch_taken_0x1e4bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4bec) {
            ctx->pc = 0x1E4C08u;
            goto label_1e4c08;
        }
    }
    ctx->pc = 0x1E4BF4u;
label_1e4bf4:
    // 0x1e4bf4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1e4bf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1e4bf8:
    // 0x1e4bf8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e4bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4bfc:
    // 0x1e4bfc: 0x142000f4  bnez        $at, . + 4 + (0xF4 << 2)
label_1e4c00:
    if (ctx->pc == 0x1E4C00u) {
        ctx->pc = 0x1E4C04u;
        goto label_1e4c04;
    }
    ctx->pc = 0x1E4BFCu;
    {
        const bool branch_taken_0x1e4bfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bfc) {
            ctx->pc = 0x1E4FD0u;
            goto label_1e4fd0;
        }
    }
    ctx->pc = 0x1E4C04u;
label_1e4c04:
    // 0x1e4c04: 0x0  nop
    ctx->pc = 0x1e4c04u;
    // NOP
label_1e4c08:
    // 0x1e4c08: 0x8eb20030  lw          $s2, 0x30($s5)
    ctx->pc = 0x1e4c08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1e4c0c:
    // 0x1e4c0c: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x1e4c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_1e4c10:
    // 0x1e4c10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e4c14:
    if (ctx->pc == 0x1E4C14u) {
        ctx->pc = 0x1E4C18u;
        goto label_1e4c18;
    }
    ctx->pc = 0x1E4C10u;
    {
        const bool branch_taken_0x1e4c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c10) {
            ctx->pc = 0x1E4C38u;
            goto label_1e4c38;
        }
    }
    ctx->pc = 0x1E4C18u;
label_1e4c18:
    // 0x1e4c18: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x1e4c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1e4c1c:
    // 0x1e4c1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e4c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4c20:
    // 0x1e4c20: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e4c20u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4c24:
    // 0x1e4c24: 0x0  nop
    ctx->pc = 0x1e4c24u;
    // NOP
label_1e4c28:
    // 0x1e4c28: 0x0  nop
    ctx->pc = 0x1e4c28u;
    // NOP
label_1e4c2c:
    // 0x1e4c2c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4c2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4c30:
    // 0x1e4c30: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
label_1e4c34:
    if (ctx->pc == 0x1E4C34u) {
        ctx->pc = 0x1E4C38u;
        goto label_1e4c38;
    }
    ctx->pc = 0x1E4C30u;
    {
        const bool branch_taken_0x1e4c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c30) {
            ctx->pc = 0x1E4FD0u;
            goto label_1e4fd0;
        }
    }
    ctx->pc = 0x1E4C38u;
label_1e4c38:
    // 0x1e4c38: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x1e4c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1e4c3c:
    // 0x1e4c3c: 0x8eb70034  lw          $s7, 0x34($s5)
    ctx->pc = 0x1e4c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_1e4c40:
    // 0x1e4c40: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e4c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4c44:
    // 0x1e4c44: 0x102000e2  beqz        $at, . + 4 + (0xE2 << 2)
label_1e4c48:
    if (ctx->pc == 0x1E4C48u) {
        ctx->pc = 0x1E4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C44u;
        // 0x1e4c48: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C4Cu;
        goto label_1e4c4c;
    }
    ctx->pc = 0x1E4C44u;
    {
        const bool branch_taken_0x1e4c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C44u;
        // 0x1e4c48: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c44) {
            ctx->pc = 0x1E4FD0u;
            goto label_1e4fd0;
        }
    }
    ctx->pc = 0x1E4C4Cu;
label_1e4c4c:
    // 0x1e4c4c: 0x0  nop
    ctx->pc = 0x1e4c4cu;
    // NOP
label_1e4c50:
    // 0x1e4c50: 0x92a30038  lbu         $v1, 0x38($s5)
    ctx->pc = 0x1e4c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 56)));
label_1e4c54:
    // 0x1e4c54: 0x92450006  lbu         $a1, 0x6($s2)
    ctx->pc = 0x1e4c54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_1e4c58:
    // 0x1e4c58: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x1e4c58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_1e4c5c:
    // 0x1e4c5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e4c60:
    // 0x1e4c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4c64:
    // 0x1e4c64: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e4c68:
    // 0x1e4c68: 0x2e29821  addu        $s3, $s7, $v0
    ctx->pc = 0x1e4c68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1e4c6c:
    // 0x1e4c6c: 0xc074350  jal         func_1D0D40
label_1e4c70:
    if (ctx->pc == 0x1E4C70u) {
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C74u;
        goto label_1e4c74;
    }
    ctx->pc = 0x1E4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C74u);
    ctx->pc = 0x1E4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C6Cu;
    // 0x1e4c70: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1E4C6Cu, 0x1E4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x86450012  lh          $a1, 0x12($s2)
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_1e4c78:
    // 0x1e4c78: 0x86440010  lh          $a0, 0x10($s2)
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_1e4c7c:
    // 0x1e4c7c: 0x92500009  lbu         $s0, 0x9($s2)
    ctx->pc = 0x1e4c7cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_1e4c80:
    // 0x1e4c80: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1e4c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1e4c84:
    // 0x1e4c84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e4c88:
    if (ctx->pc == 0x1E4C88u) {
        ctx->pc = 0x1E4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C84u;
        // 0x1e4c88: 0x92510008  lbu         $s1, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C8Cu;
        goto label_1e4c8c;
    }
    ctx->pc = 0x1E4C84u;
    {
        const bool branch_taken_0x1e4c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C84u;
        // 0x1e4c88: 0x92510008  lbu         $s1, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c84) {
            ctx->pc = 0x1E4CC0u;
            goto label_1e4cc0;
        }
    }
    ctx->pc = 0x1E4C8Cu;
label_1e4c8c:
    // 0x1e4c8c: 0xc078eac  jal         func_1E3AB0
label_1e4c90:
    if (ctx->pc == 0x1E4C90u) {
        ctx->pc = 0x1E4C94u;
        goto label_1e4c94;
    }
    ctx->pc = 0x1E4C8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C94u);
    ctx->pc = 0x1E3AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3AB0u, 0x1E4C8Cu, 0x1E4C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C94u;
label_1e4c94:
    // 0x1e4c94: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e4c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4c98:
    // 0x1e4c98: 0xc074360  jal         func_1D0D80
label_1e4c9c:
    if (ctx->pc == 0x1E4C9Cu) {
        ctx->pc = 0x1E4C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C98u;
        // 0x1e4c9c: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CA0u;
        goto label_1e4ca0;
    }
    ctx->pc = 0x1E4C98u;
    SET_GPR_U32(ctx, 31, 0x1E4CA0u);
    ctx->pc = 0x1E4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C98u;
    // 0x1e4c9c: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D80u, 0x1E4C98u, 0x1E4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CA0u;
label_1e4ca0:
    // 0x1e4ca0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_1e4ca4:
    if (ctx->pc == 0x1E4CA4u) {
        ctx->pc = 0x1E4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA0u;
        // 0x1e4ca4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CA8u;
        goto label_1e4ca8;
    }
    ctx->pc = 0x1E4CA0u;
    {
        const bool branch_taken_0x1e4ca0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA0u;
        // 0x1e4ca4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ca0) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4CA8u;
label_1e4ca8:
    // 0x1e4ca8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4cac:
    if (ctx->pc == 0x1E4CACu) {
        ctx->pc = 0x1E4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA8u;
        // 0x1e4cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CB0u;
        goto label_1e4cb0;
    }
    ctx->pc = 0x1E4CA8u;
    {
        const bool branch_taken_0x1e4ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA8u;
        // 0x1e4cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ca8) {
            ctx->pc = 0x1E4CB8u;
            goto label_1e4cb8;
        }
    }
    ctx->pc = 0x1E4CB0u;
label_1e4cb0:
    // 0x1e4cb0: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1e4cb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e4cb4:
    // 0x1e4cb4: 0x221100a  movz        $v0, $s1, $at
    ctx->pc = 0x1e4cb4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_1e4cb8:
    // 0x1e4cb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e4cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cbc:
    // 0x1e4cbc: 0x0  nop
    ctx->pc = 0x1e4cbcu;
    // NOP
label_1e4cc0:
    // 0x1e4cc0: 0x86450016  lh          $a1, 0x16($s2)
    ctx->pc = 0x1e4cc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_1e4cc4:
    // 0x1e4cc4: 0x86440014  lh          $a0, 0x14($s2)
    ctx->pc = 0x1e4cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_1e4cc8:
    // 0x1e4cc8: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1e4cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1e4ccc:
    // 0x1e4ccc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e4cd0:
    if (ctx->pc == 0x1E4CD0u) {
        ctx->pc = 0x1E4CD4u;
        goto label_1e4cd4;
    }
    ctx->pc = 0x1E4CCCu;
    {
        const bool branch_taken_0x1e4ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ccc) {
            ctx->pc = 0x1E4D08u;
            goto label_1e4d08;
        }
    }
    ctx->pc = 0x1E4CD4u;
label_1e4cd4:
    // 0x1e4cd4: 0xc078eac  jal         func_1E3AB0
label_1e4cd8:
    if (ctx->pc == 0x1E4CD8u) {
        ctx->pc = 0x1E4CDCu;
        goto label_1e4cdc;
    }
    ctx->pc = 0x1E4CD4u;
    SET_GPR_U32(ctx, 31, 0x1E4CDCu);
    ctx->pc = 0x1E3AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3AB0u, 0x1E4CD4u, 0x1E4CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CDCu;
label_1e4cdc:
    // 0x1e4cdc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e4cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e4ce0:
    // 0x1e4ce0: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1e4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1e4ce4:
    // 0x1e4ce4: 0xc0743b0  jal         func_1D0EC0
label_1e4ce8:
    if (ctx->pc == 0x1E4CE8u) {
        ctx->pc = 0x1E4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CE4u;
        // 0x1e4ce8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CECu;
        goto label_1e4cec;
    }
    ctx->pc = 0x1E4CE4u;
    SET_GPR_U32(ctx, 31, 0x1E4CECu);
    ctx->pc = 0x1E4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CE4u;
    // 0x1e4ce8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0EC0u, 0x1E4CE4u, 0x1E4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4CECu;
label_1e4cec:
    // 0x1e4cec: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_1e4cf0:
    if (ctx->pc == 0x1E4CF0u) {
        ctx->pc = 0x1E4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CECu;
        // 0x1e4cf0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CF4u;
        goto label_1e4cf4;
    }
    ctx->pc = 0x1E4CECu;
    {
        const bool branch_taken_0x1e4cec = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x1E4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CECu;
        // 0x1e4cf0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cec) {
            ctx->pc = 0x1E4CFCu;
            goto label_1e4cfc;
        }
    }
    ctx->pc = 0x1E4CF4u;
label_1e4cf4:
    // 0x1e4cf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4cf8:
    if (ctx->pc == 0x1E4CF8u) {
        ctx->pc = 0x1E4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CF4u;
        // 0x1e4cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CFCu;
        goto label_1e4cfc;
    }
    ctx->pc = 0x1E4CF4u;
    {
        const bool branch_taken_0x1e4cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CF4u;
        // 0x1e4cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cf4) {
            ctx->pc = 0x1E4D04u;
            goto label_1e4d04;
        }
    }
    ctx->pc = 0x1E4CFCu;
label_1e4cfc:
    // 0x1e4cfc: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1e4cfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e4d00:
    // 0x1e4d00: 0x201100a  movz        $v0, $s0, $at
    ctx->pc = 0x1e4d00u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_1e4d04:
    // 0x1e4d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e4d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d08:
    // 0x1e4d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d0c:
    // 0x1e4d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e4d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d10:
    // 0x1e4d10: 0xc074378  jal         func_1D0DE0
label_1e4d14:
    if (ctx->pc == 0x1E4D14u) {
        ctx->pc = 0x1E4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D10u;
        // 0x1e4d14: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D18u;
        goto label_1e4d18;
    }
    ctx->pc = 0x1E4D10u;
    SET_GPR_U32(ctx, 31, 0x1E4D18u);
    ctx->pc = 0x1E4D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D10u;
    // 0x1e4d14: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1E4D10u, 0x1E4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D18u;
label_1e4d18:
    // 0x1e4d18: 0xc078e9c  jal         func_1E3A70
label_1e4d1c:
    if (ctx->pc == 0x1E4D1Cu) {
        ctx->pc = 0x1E4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D18u;
        // 0x1e4d1c: 0x8644000e  lh          $a0, 0xE($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D20u;
        goto label_1e4d20;
    }
    ctx->pc = 0x1E4D18u;
    SET_GPR_U32(ctx, 31, 0x1E4D20u);
    ctx->pc = 0x1E4D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D18u;
    // 0x1e4d1c: 0x8644000e  lh          $a0, 0xE($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A70u, 0x1E4D18u, 0x1E4D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D20u;
label_1e4d20:
    // 0x1e4d20: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x1e4d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_1e4d24:
    // 0x1e4d24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e4d28:
    // 0x1e4d28: 0xa6620046  sh          $v0, 0x46($s3)
    ctx->pc = 0x1e4d28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
label_1e4d2c:
    // 0x1e4d2c: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x1e4d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e4d30:
    // 0x1e4d30: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_1e4d34:
    if (ctx->pc == 0x1E4D34u) {
        ctx->pc = 0x1E4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D30u;
        // 0x1e4d34: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D38u;
        goto label_1e4d38;
    }
    ctx->pc = 0x1E4D30u;
    {
        const bool branch_taken_0x1e4d30 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1E4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D30u;
        // 0x1e4d34: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d30) {
            ctx->pc = 0x1E4D44u;
            goto label_1e4d44;
        }
    }
    ctx->pc = 0x1E4D38u;
label_1e4d38:
    // 0x1e4d38: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e4d3c:
    if (ctx->pc == 0x1E4D3Cu) {
        ctx->pc = 0x1E4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D38u;
        // 0x1e4d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D40u;
        goto label_1e4d40;
    }
    ctx->pc = 0x1E4D38u;
    {
        const bool branch_taken_0x1e4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D38u;
        // 0x1e4d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d38) {
            ctx->pc = 0x1E4D54u;
            goto label_1e4d54;
        }
    }
    ctx->pc = 0x1E4D40u;
label_1e4d40:
    // 0x1e4d40: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e4d40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e4d44:
    // 0x1e4d44: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e4d48:
    if (ctx->pc == 0x1E4D48u) {
        ctx->pc = 0x1E4D4Cu;
        goto label_1e4d4c;
    }
    ctx->pc = 0x1E4D44u;
    {
        const bool branch_taken_0x1e4d44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d44) {
            ctx->pc = 0x1E4D54u;
            goto label_1e4d54;
        }
    }
    ctx->pc = 0x1E4D4Cu;
label_1e4d4c:
    // 0x1e4d4c: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e4d50:
    if (ctx->pc == 0x1E4D50u) {
        ctx->pc = 0x1E4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D4Cu;
        // 0x1e4d50: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D54u;
        goto label_1e4d54;
    }
    ctx->pc = 0x1E4D4Cu;
    {
        const bool branch_taken_0x1e4d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D4Cu;
        // 0x1e4d50: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d4c) {
            ctx->pc = 0x1E4D54u;
            goto label_1e4d54;
        }
    }
    ctx->pc = 0x1E4D54u;
label_1e4d54:
    // 0x1e4d54: 0xa6620046  sh          $v0, 0x46($s3)
    ctx->pc = 0x1e4d54u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
label_1e4d58:
    // 0x1e4d58: 0xa6600044  sh          $zero, 0x44($s3)
    ctx->pc = 0x1e4d58u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 0));
label_1e4d5c:
    // 0x1e4d5c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1e4d60:
    // 0x1e4d60: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x1e4d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_1e4d64:
    // 0x1e4d64: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x1e4d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1e4d68:
    // 0x1e4d68: 0x86620046  lh          $v0, 0x46($s3)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e4d6c:
    // 0x1e4d6c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1e4d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1e4d70:
    // 0x1e4d70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e4d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e4d74:
    // 0x1e4d74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e4d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e4d78:
    // 0x1e4d78: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e4d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e4d7c:
    // 0x1e4d7c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1e4d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e4d80:
    // 0x1e4d80: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e4d84:
    // 0x1e4d84: 0x0  nop
    ctx->pc = 0x1e4d84u;
    // NOP
label_1e4d88:
    // 0x1e4d88: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4d88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4d8c:
    // 0x1e4d8c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e4d8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e4d90:
    // 0x1e4d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4d94:
    // 0x1e4d94: 0xa662004a  sh          $v0, 0x4A($s3)
    ctx->pc = 0x1e4d94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 74), (uint16_t)GPR_U32(ctx, 2));
label_1e4d98:
    // 0x1e4d98: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x1e4d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_1e4d9c:
    // 0x1e4d9c: 0x86640046  lh          $a0, 0x46($s3)
    ctx->pc = 0x1e4d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_1e4da0:
    // 0x1e4da0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1e4da4:
    // 0x1e4da4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1e4da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1e4da8:
    // 0x1e4da8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e4da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1e4dac:
    // 0x1e4dac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e4dacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e4db0:
    // 0x1e4db0: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x1e4db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e4db4:
    // 0x1e4db4: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1e4db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e4db8:
    // 0x1e4db8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1e4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e4dbc:
    // 0x1e4dbc: 0x0  nop
    ctx->pc = 0x1e4dbcu;
    // NOP
label_1e4dc0:
    // 0x1e4dc0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4dc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4dc4:
    // 0x1e4dc4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e4dc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e4dc8:
    // 0x1e4dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4dcc:
    // 0x1e4dcc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e4dd0:
    // 0x1e4dd0: 0xa662004c  sh          $v0, 0x4C($s3)
    ctx->pc = 0x1e4dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 76), (uint16_t)GPR_U32(ctx, 2));
label_1e4dd4:
    // 0x1e4dd4: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x1e4dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1e4dd8:
    // 0x1e4dd8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e4dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1e4ddc:
    // 0x1e4ddc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e4de0:
    if (ctx->pc == 0x1E4DE0u) {
        ctx->pc = 0x1E4DE4u;
        goto label_1e4de4;
    }
    ctx->pc = 0x1E4DDCu;
    {
        const bool branch_taken_0x1e4ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ddc) {
            ctx->pc = 0x1E4DF8u;
            goto label_1e4df8;
        }
    }
    ctx->pc = 0x1E4DE4u;
label_1e4de4:
    // 0x1e4de4: 0xc096d80  jal         func_25B600
label_1e4de8:
    if (ctx->pc == 0x1E4DE8u) {
        ctx->pc = 0x1E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DE4u;
        // 0x1e4de8: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DECu;
        goto label_1e4dec;
    }
    ctx->pc = 0x1E4DE4u;
    SET_GPR_U32(ctx, 31, 0x1E4DECu);
    ctx->pc = 0x1E4DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DE4u;
    // 0x1e4de8: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x1E4DE4u, 0x1E4DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DECu;
label_1e4dec:
    // 0x1e4dec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e4df0:
    if (ctx->pc == 0x1E4DF0u) {
        ctx->pc = 0x1E4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DECu;
        // 0x1e4df0: 0xa2620048  sb          $v0, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DF4u;
        goto label_1e4df4;
    }
    ctx->pc = 0x1E4DECu;
    {
        const bool branch_taken_0x1e4dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DECu;
        // 0x1e4df0: 0xa2620048  sb          $v0, 0x48($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4dec) {
            ctx->pc = 0x1E4E00u;
            goto label_1e4e00;
        }
    }
    ctx->pc = 0x1E4DF4u;
label_1e4df4:
    // 0x1e4df4: 0x0  nop
    ctx->pc = 0x1e4df4u;
    // NOP
label_1e4df8:
    // 0x1e4df8: 0xa2600048  sb          $zero, 0x48($s3)
    ctx->pc = 0x1e4df8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
label_1e4dfc:
    // 0x1e4dfc: 0x0  nop
    ctx->pc = 0x1e4dfcu;
    // NOP
label_1e4e00:
    // 0x1e4e00: 0xc078b88  jal         func_1E2E20
label_1e4e04:
    if (ctx->pc == 0x1E4E04u) {
        ctx->pc = 0x1E4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E00u;
        // 0x1e4e04: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E08u;
        goto label_1e4e08;
    }
    ctx->pc = 0x1E4E00u;
    SET_GPR_U32(ctx, 31, 0x1E4E08u);
    ctx->pc = 0x1E4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E00u;
    // 0x1e4e04: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4E00u, 0x1E4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E08u;
label_1e4e08:
    // 0x1e4e08: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x1e4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4e0c:
    // 0x1e4e0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e4e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4e10:
    // 0x1e4e10: 0x0  nop
    ctx->pc = 0x1e4e10u;
    // NOP
label_1e4e14:
    // 0x1e4e14: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1e4e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e4e18:
    // 0x1e4e18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4e1c:
    // 0x1e4e1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e4e20:
    if (ctx->pc == 0x1E4E20u) {
        ctx->pc = 0x1E4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E1Cu;
        // 0x1e4e20: 0xe6600040  swc1        $f0, 0x40($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E24u;
        goto label_1e4e24;
    }
    ctx->pc = 0x1E4E1Cu;
    {
        const bool branch_taken_0x1e4e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E1Cu;
        // 0x1e4e20: 0xe6600040  swc1        $f0, 0x40($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e1c) {
            ctx->pc = 0x1E4E28u;
            goto label_1e4e28;
        }
    }
    ctx->pc = 0x1E4E24u;
label_1e4e24:
    // 0x1e4e24: 0xe6610040  swc1        $f1, 0x40($s3)
    ctx->pc = 0x1e4e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_1e4e28:
    // 0x1e4e28: 0xc078b88  jal         func_1E2E20
label_1e4e2c:
    if (ctx->pc == 0x1E4E2Cu) {
        ctx->pc = 0x1E4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E28u;
        // 0x1e4e2c: 0xc64c0034  lwc1        $f12, 0x34($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E30u;
        goto label_1e4e30;
    }
    ctx->pc = 0x1E4E28u;
    SET_GPR_U32(ctx, 31, 0x1E4E30u);
    ctx->pc = 0x1E4E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E28u;
    // 0x1e4e2c: 0xc64c0034  lwc1        $f12, 0x34($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4E28u, 0x1E4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E30u;
label_1e4e30:
    // 0x1e4e30: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x1e4e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4e34:
    // 0x1e4e34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e4e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4e38:
    // 0x1e4e38: 0x0  nop
    ctx->pc = 0x1e4e38u;
    // NOP
label_1e4e3c:
    // 0x1e4e3c: 0x46001540  add.s       $f21, $f2, $f0
    ctx->pc = 0x1e4e3cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e4e40:
    // 0x1e4e40: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1e4e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4e44:
    // 0x1e4e44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e4e48:
    if (ctx->pc == 0x1E4E48u) {
        ctx->pc = 0x1E4E4Cu;
        goto label_1e4e4c;
    }
    ctx->pc = 0x1E4E44u;
    {
        const bool branch_taken_0x1e4e44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4e44) {
            ctx->pc = 0x1E4E50u;
            goto label_1e4e50;
        }
    }
    ctx->pc = 0x1E4E4Cu;
label_1e4e4c:
    // 0x1e4e4c: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x1e4e4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_1e4e50:
    // 0x1e4e50: 0xc078b88  jal         func_1E2E20
label_1e4e54:
    if (ctx->pc == 0x1E4E54u) {
        ctx->pc = 0x1E4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E50u;
        // 0x1e4e54: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E58u;
        goto label_1e4e58;
    }
    ctx->pc = 0x1E4E50u;
    SET_GPR_U32(ctx, 31, 0x1E4E58u);
    ctx->pc = 0x1E4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E50u;
    // 0x1e4e54: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4E50u, 0x1E4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E58u;
label_1e4e58:
    // 0x1e4e58: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1e4e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4e5c:
    // 0x1e4e5c: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x1e4e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4e60:
    // 0x1e4e60: 0xc078b88  jal         func_1E2E20
label_1e4e64:
    if (ctx->pc == 0x1E4E64u) {
        ctx->pc = 0x1E4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E60u;
        // 0x1e4e64: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E68u;
        goto label_1e4e68;
    }
    ctx->pc = 0x1E4E60u;
    SET_GPR_U32(ctx, 31, 0x1E4E68u);
    ctx->pc = 0x1E4E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E60u;
    // 0x1e4e64: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4E60u, 0x1E4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E68u;
label_1e4e68:
    // 0x1e4e68: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x1e4e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4e6c:
    // 0x1e4e6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4e70:
    // 0x1e4e70: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1e4e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1e4e74:
    // 0x1e4e74: 0xc078b88  jal         func_1E2E20
label_1e4e78:
    if (ctx->pc == 0x1E4E78u) {
        ctx->pc = 0x1E4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E74u;
        // 0x1e4e78: 0xc64c0054  lwc1        $f12, 0x54($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E7Cu;
        goto label_1e4e7c;
    }
    ctx->pc = 0x1E4E74u;
    SET_GPR_U32(ctx, 31, 0x1E4E7Cu);
    ctx->pc = 0x1E4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E74u;
    // 0x1e4e78: 0xc64c0054  lwc1        $f12, 0x54($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4E74u, 0x1E4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E7Cu;
label_1e4e7c:
    // 0x1e4e7c: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x1e4e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4e80:
    // 0x1e4e80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4e84:
    // 0x1e4e84: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1e4e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1e4e88:
    // 0x1e4e88: 0xc078b88  jal         func_1E2E20
label_1e4e8c:
    if (ctx->pc == 0x1E4E8Cu) {
        ctx->pc = 0x1E4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E88u;
        // 0x1e4e8c: 0xc64c0058  lwc1        $f12, 0x58($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E90u;
        goto label_1e4e90;
    }
    ctx->pc = 0x1E4E88u;
    SET_GPR_U32(ctx, 31, 0x1E4E90u);
    ctx->pc = 0x1E4E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E88u;
    // 0x1e4e8c: 0xc64c0058  lwc1        $f12, 0x58($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4E88u, 0x1E4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E90u;
label_1e4e90:
    // 0x1e4e90: 0xc6a10048  lwc1        $f1, 0x48($s5)
    ctx->pc = 0x1e4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4e94:
    // 0x1e4e94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e4e98:
    // 0x1e4e98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e4e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e9c:
    // 0x1e4e9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e4e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ea0:
    // 0x1e4ea0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e4ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ea4:
    // 0x1e4ea4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4ea8:
    // 0x1e4ea8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1e4ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1e4eac:
    // 0x1e4eac: 0xc07679c  jal         func_1D9E70
label_1e4eb0:
    if (ctx->pc == 0x1E4EB0u) {
        ctx->pc = 0x1E4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EACu;
        // 0x1e4eb0: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EB4u;
        goto label_1e4eb4;
    }
    ctx->pc = 0x1E4EACu;
    SET_GPR_U32(ctx, 31, 0x1E4EB4u);
    ctx->pc = 0x1E4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EACu;
    // 0x1e4eb0: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E4EACu, 0x1E4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EB4u;
label_1e4eb4:
    // 0x1e4eb4: 0xc078b88  jal         func_1E2E20
label_1e4eb8:
    if (ctx->pc == 0x1E4EB8u) {
        ctx->pc = 0x1E4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EB4u;
        // 0x1e4eb8: 0xc64c0070  lwc1        $f12, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EBCu;
        goto label_1e4ebc;
    }
    ctx->pc = 0x1E4EB4u;
    SET_GPR_U32(ctx, 31, 0x1E4EBCu);
    ctx->pc = 0x1E4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EB4u;
    // 0x1e4eb8: 0xc64c0070  lwc1        $f12, 0x70($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4EB4u, 0x1E4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EBCu;
label_1e4ebc:
    // 0x1e4ebc: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x1e4ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4ec0:
    // 0x1e4ec0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4ec4:
    // 0x1e4ec4: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1e4ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_1e4ec8:
    // 0x1e4ec8: 0xc078b88  jal         func_1E2E20
label_1e4ecc:
    if (ctx->pc == 0x1E4ECCu) {
        ctx->pc = 0x1E4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EC8u;
        // 0x1e4ecc: 0xc64c0074  lwc1        $f12, 0x74($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4ED0u;
        goto label_1e4ed0;
    }
    ctx->pc = 0x1E4EC8u;
    SET_GPR_U32(ctx, 31, 0x1E4ED0u);
    ctx->pc = 0x1E4ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EC8u;
    // 0x1e4ecc: 0xc64c0074  lwc1        $f12, 0x74($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4EC8u, 0x1E4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4ED0u;
label_1e4ed0:
    // 0x1e4ed0: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x1e4ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4ed4:
    // 0x1e4ed4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4ed8:
    // 0x1e4ed8: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1e4ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_1e4edc:
    // 0x1e4edc: 0xc078b88  jal         func_1E2E20
label_1e4ee0:
    if (ctx->pc == 0x1E4EE0u) {
        ctx->pc = 0x1E4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EDCu;
        // 0x1e4ee0: 0xc64c0078  lwc1        $f12, 0x78($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EE4u;
        goto label_1e4ee4;
    }
    ctx->pc = 0x1E4EDCu;
    SET_GPR_U32(ctx, 31, 0x1E4EE4u);
    ctx->pc = 0x1E4EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EDCu;
    // 0x1e4ee0: 0xc64c0078  lwc1        $f12, 0x78($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x1E4EDCu, 0x1E4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EE4u;
label_1e4ee4:
    // 0x1e4ee4: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x1e4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4ee8:
    // 0x1e4ee8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e4eec:
    // 0x1e4eec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e4ef0:
    // 0x1e4ef0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e4ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ef4:
    // 0x1e4ef4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4ef8:
    // 0x1e4ef8: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1e4ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_1e4efc:
    // 0x1e4efc: 0xc0766dc  jal         func_1D9B70
label_1e4f00:
    if (ctx->pc == 0x1E4F00u) {
        ctx->pc = 0x1E4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EFCu;
        // 0x1e4f00: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F04u;
        goto label_1e4f04;
    }
    ctx->pc = 0x1E4EFCu;
    SET_GPR_U32(ctx, 31, 0x1E4F04u);
    ctx->pc = 0x1E4F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EFCu;
    // 0x1e4f00: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x1E4EFCu, 0x1E4F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F04u;
label_1e4f04:
    // 0x1e4f04: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e4f08:
    // 0x1e4f08: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e4f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f0c:
    // 0x1e4f0c: 0xc0767a8  jal         func_1D9EA0
label_1e4f10:
    if (ctx->pc == 0x1E4F10u) {
        ctx->pc = 0x1E4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F0Cu;
        // 0x1e4f10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F14u;
        goto label_1e4f14;
    }
    ctx->pc = 0x1E4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F14u);
    ctx->pc = 0x1E4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F0Cu;
    // 0x1e4f10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x1E4F0Cu, 0x1E4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F14u;
label_1e4f14:
    // 0x1e4f14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e4f14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e4f18:
    // 0x1e4f18: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x1e4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1e4f1c:
    // 0x1e4f1c: 0xc076690  jal         func_1D9A40
label_1e4f20:
    if (ctx->pc == 0x1E4F20u) {
        ctx->pc = 0x1E4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F1Cu;
        // 0x1e4f20: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F24u;
        goto label_1e4f24;
    }
    ctx->pc = 0x1E4F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F24u);
    ctx->pc = 0x1E4F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F1Cu;
    // 0x1e4f20: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E4F1Cu, 0x1E4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F24u;
label_1e4f24:
    // 0x1e4f24: 0x92420021  lbu         $v0, 0x21($s2)
    ctx->pc = 0x1e4f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
label_1e4f28:
    // 0x1e4f28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e4f2c:
    if (ctx->pc == 0x1E4F2Cu) {
        ctx->pc = 0x1E4F30u;
        goto label_1e4f30;
    }
    ctx->pc = 0x1E4F28u;
    {
        const bool branch_taken_0x1e4f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f28) {
            ctx->pc = 0x1E4F60u;
            goto label_1e4f60;
        }
    }
    ctx->pc = 0x1E4F30u;
label_1e4f30:
    // 0x1e4f30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4f34:
    // 0x1e4f34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e4f38:
    // 0x1e4f38: 0x24425dd0  addiu       $v0, $v0, 0x5DD0
    ctx->pc = 0x1e4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24016));
label_1e4f3c:
    // 0x1e4f3c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4f40:
    // 0x1e4f40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e4f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4f44:
    // 0x1e4f44: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x1e4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
label_1e4f48:
    // 0x1e4f48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e4f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e4f4c:
    // 0x1e4f4c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x1e4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4f50:
    // 0x1e4f50: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1e4f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e4f54:
    // 0x1e4f54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e4f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e4f58:
    // 0x1e4f58: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1e4f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_1e4f5c:
    // 0x1e4f5c: 0x0  nop
    ctx->pc = 0x1e4f5cu;
    // NOP
label_1e4f60:
    // 0x1e4f60: 0x9242001a  lbu         $v0, 0x1A($s2)
    ctx->pc = 0x1e4f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
label_1e4f64:
    // 0x1e4f64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e4f68:
    if (ctx->pc == 0x1E4F68u) {
        ctx->pc = 0x1E4F6Cu;
        goto label_1e4f6c;
    }
    ctx->pc = 0x1E4F64u;
    {
        const bool branch_taken_0x1e4f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f64) {
            ctx->pc = 0x1E4F78u;
            goto label_1e4f78;
        }
    }
    ctx->pc = 0x1E4F6Cu;
label_1e4f6c:
    // 0x1e4f6c: 0x92420019  lbu         $v0, 0x19($s2)
    ctx->pc = 0x1e4f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25)));
label_1e4f70:
    // 0x1e4f70: 0xa2620049  sb          $v0, 0x49($s3)
    ctx->pc = 0x1e4f70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 73), (uint8_t)GPR_U32(ctx, 2));
label_1e4f74:
    // 0x1e4f74: 0x0  nop
    ctx->pc = 0x1e4f74u;
    // NOP
label_1e4f78:
    // 0x1e4f78: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e4f7c:
    // 0x1e4f7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e4f7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e4f80:
    // 0x1e4f80: 0xc076690  jal         func_1D9A40
label_1e4f84:
    if (ctx->pc == 0x1E4F84u) {
        ctx->pc = 0x1E4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F80u;
        // 0x1e4f84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F88u;
        goto label_1e4f88;
    }
    ctx->pc = 0x1E4F80u;
    SET_GPR_U32(ctx, 31, 0x1E4F88u);
    ctx->pc = 0x1E4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F80u;
    // 0x1e4f84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E4F80u, 0x1E4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F88u;
label_1e4f88:
    // 0x1e4f88: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1e4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1e4f8c:
    // 0x1e4f8c: 0xc078e98  jal         func_1E3A60
label_1e4f90:
    if (ctx->pc == 0x1E4F90u) {
        ctx->pc = 0x1E4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F8Cu;
        // 0x1e4f90: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F94u;
        goto label_1e4f94;
    }
    ctx->pc = 0x1E4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F94u);
    ctx->pc = 0x1E4F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F8Cu;
    // 0x1e4f90: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x1E4F8Cu, 0x1E4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F94u;
label_1e4f94:
    // 0x1e4f94: 0x92a20038  lbu         $v0, 0x38($s5)
    ctx->pc = 0x1e4f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 56)));
label_1e4f98:
    // 0x1e4f98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e4f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e4f9c:
    // 0x1e4f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e4fa0:
    // 0x1e4fa0: 0xa2a20038  sb          $v0, 0x38($s5)
    ctx->pc = 0x1e4fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 56), (uint8_t)GPR_U32(ctx, 2));
label_1e4fa4:
    // 0x1e4fa4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1e4fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1e4fa8:
    // 0x1e4fa8: 0x92a20038  lbu         $v0, 0x38($s5)
    ctx->pc = 0x1e4fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 56)));
label_1e4fac:
    // 0x1e4fac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e4facu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e4fb0:
    // 0x1e4fb0: 0x0  nop
    ctx->pc = 0x1e4fb0u;
    // NOP
label_1e4fb4:
    // 0x1e4fb4: 0x0  nop
    ctx->pc = 0x1e4fb4u;
    // NOP
label_1e4fb8:
    // 0x1e4fb8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4fb8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4fbc:
    // 0x1e4fbc: 0xa2a20038  sb          $v0, 0x38($s5)
    ctx->pc = 0x1e4fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 56), (uint8_t)GPR_U32(ctx, 2));
label_1e4fc0:
    // 0x1e4fc0: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x1e4fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1e4fc4:
    // 0x1e4fc4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e4fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4fc8:
    // 0x1e4fc8: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
label_1e4fcc:
    if (ctx->pc == 0x1E4FCCu) {
        ctx->pc = 0x1E4FD0u;
        goto label_1e4fd0;
    }
    ctx->pc = 0x1E4FC8u;
    {
        const bool branch_taken_0x1e4fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4fc8) {
            ctx->pc = 0x1E4C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4c50;
        }
    }
    ctx->pc = 0x1E4FD0u;
label_1e4fd0:
    // 0x1e4fd0: 0x8eb10030  lw          $s1, 0x30($s5)
    ctx->pc = 0x1e4fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1e4fd4:
    // 0x1e4fd4: 0x8eb00034  lw          $s0, 0x34($s5)
    ctx->pc = 0x1e4fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_1e4fd8:
    // 0x1e4fd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fdc:
    // 0x1e4fdc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1e4fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1e4fe0:
    // 0x1e4fe0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e4fe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4fe4:
    // 0x1e4fe4: 0x102000ae  beqz        $at, . + 4 + (0xAE << 2)
label_1e4fe8:
    if (ctx->pc == 0x1E4FE8u) {
        ctx->pc = 0x1E4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE4u;
        // 0x1e4fe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FECu;
        goto label_1e4fec;
    }
    ctx->pc = 0x1E4FE4u;
    {
        const bool branch_taken_0x1e4fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE4u;
        // 0x1e4fe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fe4) {
            ctx->pc = 0x1E52A0u;
            goto label_1e52a0;
        }
    }
    ctx->pc = 0x1E4FECu;
label_1e4fec:
    // 0x1e4fec: 0x0  nop
    ctx->pc = 0x1e4fecu;
    // NOP
label_1e4ff0:
    // 0x1e4ff0: 0x86030044  lh          $v1, 0x44($s0)
    ctx->pc = 0x1e4ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1e4ff4:
    // 0x1e4ff4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e4ff8:
    // 0x1e4ff8: 0x106200a3  beq         $v1, $v0, . + 4 + (0xA3 << 2)
label_1e4ffc:
    if (ctx->pc == 0x1E4FFCu) {
        ctx->pc = 0x1E5000u;
        goto label_1e5000;
    }
    ctx->pc = 0x1E4FF8u;
    {
        const bool branch_taken_0x1e4ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4ff8) {
            ctx->pc = 0x1E5288u;
            goto label_1e5288;
        }
    }
    ctx->pc = 0x1E5000u;
label_1e5000:
    // 0x1e5000: 0xc62d006c  lwc1        $f13, 0x6C($s1)
    ctx->pc = 0x1e5000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e5004:
    // 0x1e5004: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x1e5004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_1e5008:
    // 0x1e5008: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x1e5008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_1e500c:
    // 0x1e500c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5010:
    // 0x1e5010: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e5014:
    // 0x1e5014: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e5014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e5018:
    // 0x1e5018: 0xc07681c  jal         func_1DA070
label_1e501c:
    if (ctx->pc == 0x1E501Cu) {
        ctx->pc = 0x1E501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5018u;
        // 0x1e501c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5020u;
        goto label_1e5020;
    }
    ctx->pc = 0x1E5018u;
    SET_GPR_U32(ctx, 31, 0x1E5020u);
    ctx->pc = 0x1E501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5018u;
    // 0x1e501c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x1E5018u, 0x1E5020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5020u;
label_1e5020:
    // 0x1e5020: 0x9222001a  lbu         $v0, 0x1A($s1)
    ctx->pc = 0x1e5020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
label_1e5024:
    // 0x1e5024: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1e5028:
    if (ctx->pc == 0x1E5028u) {
        ctx->pc = 0x1E502Cu;
        goto label_1e502c;
    }
    ctx->pc = 0x1E5024u;
    {
        const bool branch_taken_0x1e5024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5024) {
            ctx->pc = 0x1E5088u;
            goto label_1e5088;
        }
    }
    ctx->pc = 0x1E502Cu;
label_1e502c:
    // 0x1e502c: 0x92020049  lbu         $v0, 0x49($s0)
    ctx->pc = 0x1e502cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_1e5030:
    // 0x1e5030: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1e5034:
    if (ctx->pc == 0x1E5034u) {
        ctx->pc = 0x1E5038u;
        goto label_1e5038;
    }
    ctx->pc = 0x1E5030u;
    {
        const bool branch_taken_0x1e5030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5030) {
            ctx->pc = 0x1E5088u;
            goto label_1e5088;
        }
    }
    ctx->pc = 0x1E5038u;
label_1e5038:
    // 0x1e5038: 0xc6a1003c  lwc1        $f1, 0x3C($s5)
    ctx->pc = 0x1e5038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e503c:
    // 0x1e503c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1e503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5040:
    // 0x1e5040: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e5040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5044:
    // 0x1e5044: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1e5048:
    if (ctx->pc == 0x1E5048u) {
        ctx->pc = 0x1E504Cu;
        goto label_1e504c;
    }
    ctx->pc = 0x1E5044u;
    {
        const bool branch_taken_0x1e5044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5044) {
            ctx->pc = 0x1E5088u;
            goto label_1e5088;
        }
    }
    ctx->pc = 0x1E504Cu;
label_1e504c:
    // 0x1e504c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1e504cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1e5050:
    // 0x1e5050: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e5050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e5054:
    // 0x1e5054: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x1e5054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
label_1e5058:
    // 0x1e5058: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1e5058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e505c:
    // 0x1e505c: 0x24425df0  addiu       $v0, $v0, 0x5DF0
    ctx->pc = 0x1e505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24048));
label_1e5060:
    // 0x1e5060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e5064:
    // 0x1e5064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5068:
    // 0x1e5068: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1e5068u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1e506c:
    // 0x1e506c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5070:
    // 0x1e5070: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e5070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e5074:
    // 0x1e5074: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1e5074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1e5078:
    // 0x1e5078: 0x92020049  lbu         $v0, 0x49($s0)
    ctx->pc = 0x1e5078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_1e507c:
    // 0x1e507c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e5080:
    // 0x1e5080: 0xa2020049  sb          $v0, 0x49($s0)
    ctx->pc = 0x1e5080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
label_1e5084:
    // 0x1e5084: 0x0  nop
    ctx->pc = 0x1e5084u;
    // NOP
label_1e5088:
    // 0x1e5088: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x1e5088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_1e508c:
    // 0x1e508c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e5090:
    if (ctx->pc == 0x1E5090u) {
        ctx->pc = 0x1E5094u;
        goto label_1e5094;
    }
    ctx->pc = 0x1E508Cu;
    {
        const bool branch_taken_0x1e508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e508c) {
            ctx->pc = 0x1E50C8u;
            goto label_1e50c8;
        }
    }
    ctx->pc = 0x1E5094u;
label_1e5094:
    // 0x1e5094: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e5094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e5098:
    // 0x1e5098: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
label_1e509c:
    // 0x1e509c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1e50a0:
    // 0x1e50a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e50a4:
    // 0x1e50a4: 0x24425dd0  addiu       $v0, $v0, 0x5DD0
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24016));
label_1e50a8:
    // 0x1e50a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e50ac:
    // 0x1e50ac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1e50acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e50b0:
    // 0x1e50b0: 0xc076690  jal         func_1D9A40
label_1e50b4:
    if (ctx->pc == 0x1E50B4u) {
        ctx->pc = 0x1E50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50B0u;
        // 0x1e50b4: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50B8u;
        goto label_1e50b8;
    }
    ctx->pc = 0x1E50B0u;
    SET_GPR_U32(ctx, 31, 0x1E50B8u);
    ctx->pc = 0x1E50B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50B0u;
    // 0x1e50b4: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1E50B0u, 0x1E50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50B8u;
label_1e50b8:
    // 0x1e50b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e50b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e50bc:
    // 0x1e50bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e50bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e50c0:
    // 0x1e50c0: 0xc0766a8  jal         func_1D9AA0
label_1e50c4:
    if (ctx->pc == 0x1E50C4u) {
        ctx->pc = 0x1E50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50C0u;
        // 0x1e50c4: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50C8u;
        goto label_1e50c8;
    }
    ctx->pc = 0x1E50C0u;
    SET_GPR_U32(ctx, 31, 0x1E50C8u);
    ctx->pc = 0x1E50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50C0u;
    // 0x1e50c4: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E50C0u, 0x1E50C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50C8u;
label_1e50c8:
    // 0x1e50c8: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x1e50c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e50cc:
    // 0x1e50cc: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1e50ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e50d0:
    // 0x1e50d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e50d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e50d4:
    // 0x1e50d4: 0x0  nop
    ctx->pc = 0x1e50d4u;
    // NOP
label_1e50d8:
    // 0x1e50d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e50d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e50dc:
    // 0x1e50dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e50dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e50e0:
    // 0x1e50e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e50e4:
    if (ctx->pc == 0x1E50E4u) {
        ctx->pc = 0x1E50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50E0u;
        // 0x1e50e4: 0xe6010040  swc1        $f1, 0x40($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50E8u;
        goto label_1e50e8;
    }
    ctx->pc = 0x1E50E0u;
    {
        const bool branch_taken_0x1e50e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50E0u;
        // 0x1e50e4: 0xe6010040  swc1        $f1, 0x40($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50e0) {
            ctx->pc = 0x1E50F0u;
            goto label_1e50f0;
        }
    }
    ctx->pc = 0x1E50E8u;
label_1e50e8:
    // 0x1e50e8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1e50e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1e50ec:
    // 0x1e50ec: 0x0  nop
    ctx->pc = 0x1e50ecu;
    // NOP
label_1e50f0:
    // 0x1e50f0: 0x8605004a  lh          $a1, 0x4A($s0)
    ctx->pc = 0x1e50f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
label_1e50f4:
    // 0x1e50f4: 0x86040044  lh          $a0, 0x44($s0)
    ctx->pc = 0x1e50f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1e50f8:
    // 0x1e50f8: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x1e50f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e50fc:
    // 0x1e50fc: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_1e5100:
    if (ctx->pc == 0x1E5100u) {
        ctx->pc = 0x1E5104u;
        goto label_1e5104;
    }
    ctx->pc = 0x1E50FCu;
    {
        const bool branch_taken_0x1e50fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e50fc) {
            ctx->pc = 0x1E5170u;
            goto label_1e5170;
        }
    }
    ctx->pc = 0x1E5104u;
label_1e5104:
    // 0x1e5104: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x1e5104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_1e5108:
    // 0x1e5108: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e5108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1e510c:
    // 0x1e510c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5110:
    if (ctx->pc == 0x1E5110u) {
        ctx->pc = 0x1E5114u;
        goto label_1e5114;
    }
    ctx->pc = 0x1E510Cu;
    {
        const bool branch_taken_0x1e510c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e510c) {
            ctx->pc = 0x1E5120u;
            goto label_1e5120;
        }
    }
    ctx->pc = 0x1E5114u;
label_1e5114:
    // 0x1e5114: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e5114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1e5118:
    // 0x1e5118: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1e511c:
    if (ctx->pc == 0x1E511Cu) {
        ctx->pc = 0x1E5120u;
        goto label_1e5120;
    }
    ctx->pc = 0x1E5118u;
    {
        const bool branch_taken_0x1e5118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5118) {
            ctx->pc = 0x1E5170u;
            goto label_1e5170;
        }
    }
    ctx->pc = 0x1E5120u;
label_1e5120:
    // 0x1e5120: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_1e5124:
    if (ctx->pc == 0x1E5124u) {
        ctx->pc = 0x1E5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5120u;
        // 0x1e5124: 0x5343c  dsll32      $a2, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5128u;
        goto label_1e5128;
    }
    ctx->pc = 0x1E5120u;
    {
        const bool branch_taken_0x1e5120 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5120u;
        // 0x1e5124: 0x5343c  dsll32      $a2, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5120) {
            ctx->pc = 0x1E513Cu;
            goto label_1e513c;
        }
    }
    ctx->pc = 0x1E5128u;
label_1e5128:
    // 0x1e5128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e512c:
    // 0x1e512c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5130:
    // 0x1e5130: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e5134:
    if (ctx->pc == 0x1E5134u) {
        ctx->pc = 0x1E5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5130u;
        // 0x1e5134: 0xc621008c  lwc1        $f1, 0x8C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5138u;
        goto label_1e5138;
    }
    ctx->pc = 0x1E5130u;
    {
        const bool branch_taken_0x1e5130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5130u;
        // 0x1e5134: 0xc621008c  lwc1        $f1, 0x8C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5130) {
            ctx->pc = 0x1E5154u;
            goto label_1e5154;
        }
    }
    ctx->pc = 0x1E5138u;
label_1e5138:
    // 0x1e5138: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x1e5138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_1e513c:
    // 0x1e513c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1e513cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_1e5140:
    // 0x1e5140: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e5140u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1e5144:
    // 0x1e5144: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1e5144u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1e5148:
    // 0x1e5148: 0xc0767d4  jal         func_1D9F50
label_1e514c:
    if (ctx->pc == 0x1E514Cu) {
        ctx->pc = 0x1E514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5148u;
        // 0x1e514c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5150u;
        goto label_1e5150;
    }
    ctx->pc = 0x1E5148u;
    SET_GPR_U32(ctx, 31, 0x1E5150u);
    ctx->pc = 0x1E514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5148u;
    // 0x1e514c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E5148u, 0x1E5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5150u;
label_1e5150:
    // 0x1e5150: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x1e5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5154:
    // 0x1e5154: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e5158:
    // 0x1e5158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e5158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e515c:
    // 0x1e515c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e515cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e5160:
    // 0x1e5160: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e5160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1e5164:
    // 0x1e5164: 0x0  nop
    ctx->pc = 0x1e5164u;
    // NOP
label_1e5168:
    // 0x1e5168: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e5168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1e516c:
    // 0x1e516c: 0x0  nop
    ctx->pc = 0x1e516cu;
    // NOP
label_1e5170:
    // 0x1e5170: 0x8605004c  lh          $a1, 0x4C($s0)
    ctx->pc = 0x1e5170u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
label_1e5174:
    // 0x1e5174: 0x86040044  lh          $a0, 0x44($s0)
    ctx->pc = 0x1e5174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1e5178:
    // 0x1e5178: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1e5178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e517c:
    // 0x1e517c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_1e5180:
    if (ctx->pc == 0x1E5180u) {
        ctx->pc = 0x1E5184u;
        goto label_1e5184;
    }
    ctx->pc = 0x1E517Cu;
    {
        const bool branch_taken_0x1e517c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e517c) {
            ctx->pc = 0x1E5230u;
            goto label_1e5230;
        }
    }
    ctx->pc = 0x1E5184u;
label_1e5184:
    // 0x1e5184: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x1e5184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_1e5188:
    // 0x1e5188: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e5188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1e518c:
    // 0x1e518c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1e5190:
    if (ctx->pc == 0x1E5190u) {
        ctx->pc = 0x1E5194u;
        goto label_1e5194;
    }
    ctx->pc = 0x1E518Cu;
    {
        const bool branch_taken_0x1e518c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e518c) {
            ctx->pc = 0x1E51D8u;
            goto label_1e51d8;
        }
    }
    ctx->pc = 0x1E5194u;
label_1e5194:
    // 0x1e5194: 0x86060046  lh          $a2, 0x46($s0)
    ctx->pc = 0x1e5194u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
label_1e5198:
    // 0x1e5198: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1e519c:
    if (ctx->pc == 0x1E519Cu) {
        ctx->pc = 0x1E51A0u;
        goto label_1e51a0;
    }
    ctx->pc = 0x1E5198u;
    {
        const bool branch_taken_0x1e5198 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e5198) {
            ctx->pc = 0x1E51B0u;
            goto label_1e51b0;
        }
    }
    ctx->pc = 0x1E51A0u;
label_1e51a0:
    // 0x1e51a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e51a4:
    // 0x1e51a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e51a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e51a8:
    // 0x1e51a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e51ac:
    if (ctx->pc == 0x1E51ACu) {
        ctx->pc = 0x1E51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51A8u;
        // 0x1e51ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51B0u;
        goto label_1e51b0;
    }
    ctx->pc = 0x1E51A8u;
    {
        const bool branch_taken_0x1e51a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51A8u;
        // 0x1e51ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51a8) {
            ctx->pc = 0x1E51BCu;
            goto label_1e51bc;
        }
    }
    ctx->pc = 0x1E51B0u;
label_1e51b0:
    // 0x1e51b0: 0xc0767d4  jal         func_1D9F50
label_1e51b4:
    if (ctx->pc == 0x1E51B4u) {
        ctx->pc = 0x1E51B8u;
        goto label_1e51b8;
    }
    ctx->pc = 0x1E51B0u;
    SET_GPR_U32(ctx, 31, 0x1E51B8u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E51B0u, 0x1E51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51B8u;
label_1e51b8:
    // 0x1e51b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e51b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e51bc:
    // 0x1e51bc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e51c0:
    // 0x1e51c0: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1e51c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1e51c4:
    // 0x1e51c4: 0xc0767f4  jal         func_1D9FD0
label_1e51c8:
    if (ctx->pc == 0x1E51C8u) {
        ctx->pc = 0x1E51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C4u;
        // 0x1e51c8: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51CCu;
        goto label_1e51cc;
    }
    ctx->pc = 0x1E51C4u;
    SET_GPR_U32(ctx, 31, 0x1E51CCu);
    ctx->pc = 0x1E51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51C4u;
    // 0x1e51c8: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x1E51C4u, 0x1E51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51CCu;
label_1e51cc:
    // 0x1e51cc: 0x10000018  b           . + 4 + (0x18 << 2)
label_1e51d0:
    if (ctx->pc == 0x1E51D0u) {
        ctx->pc = 0x1E51D4u;
        goto label_1e51d4;
    }
    ctx->pc = 0x1E51CCu;
    {
        const bool branch_taken_0x1e51cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51cc) {
            ctx->pc = 0x1E5230u;
            goto label_1e5230;
        }
    }
    ctx->pc = 0x1E51D4u;
label_1e51d4:
    // 0x1e51d4: 0x0  nop
    ctx->pc = 0x1e51d4u;
    // NOP
label_1e51d8:
    // 0x1e51d8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e51d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1e51dc:
    // 0x1e51dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1e51e0:
    if (ctx->pc == 0x1E51E0u) {
        ctx->pc = 0x1E51E4u;
        goto label_1e51e4;
    }
    ctx->pc = 0x1E51DCu;
    {
        const bool branch_taken_0x1e51dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51dc) {
            ctx->pc = 0x1E5230u;
            goto label_1e5230;
        }
    }
    ctx->pc = 0x1E51E4u;
label_1e51e4:
    // 0x1e51e4: 0x86060046  lh          $a2, 0x46($s0)
    ctx->pc = 0x1e51e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
label_1e51e8:
    // 0x1e51e8: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1e51ec:
    if (ctx->pc == 0x1E51ECu) {
        ctx->pc = 0x1E51F0u;
        goto label_1e51f0;
    }
    ctx->pc = 0x1E51E8u;
    {
        const bool branch_taken_0x1e51e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e51e8) {
            ctx->pc = 0x1E5200u;
            goto label_1e5200;
        }
    }
    ctx->pc = 0x1E51F0u;
label_1e51f0:
    // 0x1e51f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e51f4:
    // 0x1e51f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e51f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e51f8:
    // 0x1e51f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e51fc:
    if (ctx->pc == 0x1E51FCu) {
        ctx->pc = 0x1E51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51F8u;
        // 0x1e51fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5200u;
        goto label_1e5200;
    }
    ctx->pc = 0x1E51F8u;
    {
        const bool branch_taken_0x1e51f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51F8u;
        // 0x1e51fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51f8) {
            ctx->pc = 0x1E520Cu;
            goto label_1e520c;
        }
    }
    ctx->pc = 0x1E5200u;
label_1e5200:
    // 0x1e5200: 0xc0767d4  jal         func_1D9F50
label_1e5204:
    if (ctx->pc == 0x1E5204u) {
        ctx->pc = 0x1E5208u;
        goto label_1e5208;
    }
    ctx->pc = 0x1E5200u;
    SET_GPR_U32(ctx, 31, 0x1E5208u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E5200u, 0x1E5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5208u;
label_1e5208:
    // 0x1e5208: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e520c:
    // 0x1e520c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e520cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e5210:
    // 0x1e5210: 0xc622008c  lwc1        $f2, 0x8C($s1)
    ctx->pc = 0x1e5210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e5214:
    // 0x1e5214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e5218:
    // 0x1e5218: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x1e5218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e521c:
    // 0x1e521c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e521cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e5220:
    // 0x1e5220: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e5224:
    // 0x1e5224: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e5224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1e5228:
    // 0x1e5228: 0x0  nop
    ctx->pc = 0x1e5228u;
    // NOP
label_1e522c:
    // 0x1e522c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1e522cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1e5230:
    // 0x1e5230: 0xc0743c0  jal         func_1D0F00
label_1e5234:
    if (ctx->pc == 0x1E5234u) {
        ctx->pc = 0x1E5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5230u;
        // 0x1e5234: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5238u;
        goto label_1e5238;
    }
    ctx->pc = 0x1E5230u;
    SET_GPR_U32(ctx, 31, 0x1E5238u);
    ctx->pc = 0x1E5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5230u;
    // 0x1e5234: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1E5230u, 0x1E5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5238u;
label_1e5238:
    // 0x1e5238: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e523c:
    if (ctx->pc == 0x1E523Cu) {
        ctx->pc = 0x1E5240u;
        goto label_1e5240;
    }
    ctx->pc = 0x1E5238u;
    {
        const bool branch_taken_0x1e5238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5238) {
            ctx->pc = 0x1E5250u;
            goto label_1e5250;
        }
    }
    ctx->pc = 0x1E5240u;
label_1e5240:
    // 0x1e5240: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e5240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e5244:
    // 0x1e5244: 0x10000010  b           . + 4 + (0x10 << 2)
label_1e5248:
    if (ctx->pc == 0x1E5248u) {
        ctx->pc = 0x1E5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5244u;
        // 0x1e5248: 0xa6020044  sh          $v0, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E524Cu;
        goto label_1e524c;
    }
    ctx->pc = 0x1E5244u;
    {
        const bool branch_taken_0x1e5244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5244u;
        // 0x1e5248: 0xa6020044  sh          $v0, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5244) {
            ctx->pc = 0x1E5288u;
            goto label_1e5288;
        }
    }
    ctx->pc = 0x1E524Cu;
label_1e524c:
    // 0x1e524c: 0x0  nop
    ctx->pc = 0x1e524cu;
    // NOP
label_1e5250:
    // 0x1e5250: 0x86020044  lh          $v0, 0x44($s0)
    ctx->pc = 0x1e5250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1e5254:
    // 0x1e5254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e5258:
    // 0x1e5258: 0xa6020044  sh          $v0, 0x44($s0)
    ctx->pc = 0x1e5258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
label_1e525c:
    // 0x1e525c: 0x86030044  lh          $v1, 0x44($s0)
    ctx->pc = 0x1e525cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1e5260:
    // 0x1e5260: 0x86020046  lh          $v0, 0x46($s0)
    ctx->pc = 0x1e5260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
label_1e5264:
    // 0x1e5264: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1e5264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e5268:
    // 0x1e5268: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1e526c:
    if (ctx->pc == 0x1E526Cu) {
        ctx->pc = 0x1E5270u;
        goto label_1e5270;
    }
    ctx->pc = 0x1E5268u;
    {
        const bool branch_taken_0x1e5268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5268) {
            ctx->pc = 0x1E5280u;
            goto label_1e5280;
        }
    }
    ctx->pc = 0x1E5270u;
label_1e5270:
    // 0x1e5270: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e5270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e5274:
    // 0x1e5274: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e5278:
    if (ctx->pc == 0x1E5278u) {
        ctx->pc = 0x1E5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5274u;
        // 0x1e5278: 0xa6020044  sh          $v0, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E527Cu;
        goto label_1e527c;
    }
    ctx->pc = 0x1E5274u;
    {
        const bool branch_taken_0x1e5274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5274u;
        // 0x1e5278: 0xa6020044  sh          $v0, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5274) {
            ctx->pc = 0x1E5288u;
            goto label_1e5288;
        }
    }
    ctx->pc = 0x1E527Cu;
label_1e527c:
    // 0x1e527c: 0x0  nop
    ctx->pc = 0x1e527cu;
    // NOP
label_1e5280:
    // 0x1e5280: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e5280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e5284:
    // 0x1e5284: 0x0  nop
    ctx->pc = 0x1e5284u;
    // NOP
label_1e5288:
    // 0x1e5288: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1e5288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1e528c:
    // 0x1e528c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e528cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e5290:
    // 0x1e5290: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1e5290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e5294:
    // 0x1e5294: 0x1440ff56  bnez        $v0, . + 4 + (-0xAA << 2)
label_1e5298:
    if (ctx->pc == 0x1E5298u) {
        ctx->pc = 0x1E5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5294u;
        // 0x1e5298: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E529Cu;
        goto label_1e529c;
    }
    ctx->pc = 0x1E5294u;
    {
        const bool branch_taken_0x1e5294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5294u;
        // 0x1e5298: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5294) {
            ctx->pc = 0x1E4FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4ff0;
        }
    }
    ctx->pc = 0x1E529Cu;
label_1e529c:
    // 0x1e529c: 0x0  nop
    ctx->pc = 0x1e529cu;
    // NOP
label_1e52a0:
    // 0x1e52a0: 0xa2b20039  sb          $s2, 0x39($s5)
    ctx->pc = 0x1e52a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 57), (uint8_t)GPR_U32(ctx, 18));
label_1e52a4:
    // 0x1e52a4: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1e52a8:
    // 0x1e52a8: 0x78420040  lq          $v0, 0x40($v0)
    ctx->pc = 0x1e52a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_1e52ac:
    // 0x1e52ac: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x1e52acu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
label_1e52b0:
    // 0x1e52b0: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1e52b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1e52b4:
    // 0x1e52b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e52b8:
    // 0x1e52b8: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x1e52b8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e52bc:
    // 0x1e52bc: 0x92a30039  lbu         $v1, 0x39($s5)
    ctx->pc = 0x1e52bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 57)));
label_1e52c0:
    // 0x1e52c0: 0x92a20050  lbu         $v0, 0x50($s5)
    ctx->pc = 0x1e52c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
label_1e52c4:
    // 0x1e52c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e52c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e52c8:
    // 0x1e52c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e52c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e52cc:
    // 0x1e52cc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e52ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e52d0:
    // 0x1e52d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e52d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e52d4:
    // 0x1e52d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1e52d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e52d8:
    // 0x1e52d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e52d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e52dc:
    // 0x1e52dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e52dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1e52e0:
    // 0x1e52e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e52e4:
    if (ctx->pc == 0x1E52E4u) {
        ctx->pc = 0x1E52E8u;
        goto label_1e52e8;
    }
    ctx->pc = 0x1E52E0u;
    {
        const bool branch_taken_0x1e52e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e52e0) {
            ctx->pc = 0x1E5300u;
            goto label_1e5300;
        }
    }
    ctx->pc = 0x1E52E8u;
label_1e52e8:
    // 0x1e52e8: 0x8eb90020  lw          $t9, 0x20($s5)
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_1e52ec:
    // 0x1e52ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e52ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e52f0:
    // 0x1e52f0: 0x320f809  jalr        $t9
label_1e52f4:
    if (ctx->pc == 0x1E52F4u) {
        ctx->pc = 0x1E52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52F0u;
        // 0x1e52f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E52F8u;
        goto label_1e52f8;
    }
    ctx->pc = 0x1E52F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E52F8u);
        ctx->pc = 0x1E52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52F0u;
        // 0x1e52f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52F0u, 0x1E52F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E52F8u;
label_1e52f8:
    // 0x1e52f8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e52fc:
    if (ctx->pc == 0x1E52FCu) {
        ctx->pc = 0x1E52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52F8u;
        // 0x1e52fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5300u;
        goto label_1e5300;
    }
    ctx->pc = 0x1E52F8u;
    {
        const bool branch_taken_0x1e52f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52F8u;
        // 0x1e52fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52f8) {
            ctx->pc = 0x1E5378u;
            goto label_1e5378;
        }
    }
    ctx->pc = 0x1E5300u;
label_1e5300:
    // 0x1e5300: 0x86a3003a  lh          $v1, 0x3A($s5)
    ctx->pc = 0x1e5300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 58)));
label_1e5304:
    // 0x1e5304: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e5308:
    // 0x1e5308: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1e530c:
    if (ctx->pc == 0x1E530Cu) {
        ctx->pc = 0x1E5310u;
        goto label_1e5310;
    }
    ctx->pc = 0x1E5308u;
    {
        const bool branch_taken_0x1e5308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5308) {
            ctx->pc = 0x1E5330u;
            goto label_1e5330;
        }
    }
    ctx->pc = 0x1E5310u;
label_1e5310:
    // 0x1e5310: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1e5310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1e5314:
    // 0x1e5314: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e5314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e5318:
    // 0x1e5318: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
label_1e531c:
    if (ctx->pc == 0x1E531Cu) {
        ctx->pc = 0x1E5320u;
        goto label_1e5320;
    }
    ctx->pc = 0x1E5318u;
    {
        const bool branch_taken_0x1e5318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5318) {
            ctx->pc = 0x1E5370u;
            goto label_1e5370;
        }
    }
    ctx->pc = 0x1E5320u;
label_1e5320:
    // 0x1e5320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5324:
    // 0x1e5324: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x1e5324u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e5328:
    // 0x1e5328: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e532c:
    if (ctx->pc == 0x1E532Cu) {
        ctx->pc = 0x1E532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5328u;
        // 0x1e532c: 0xa2a20003  sb          $v0, 0x3($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5330u;
        goto label_1e5330;
    }
    ctx->pc = 0x1E5328u;
    {
        const bool branch_taken_0x1e5328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5328u;
        // 0x1e532c: 0xa2a20003  sb          $v0, 0x3($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5328) {
            ctx->pc = 0x1E5370u;
            goto label_1e5370;
        }
    }
    ctx->pc = 0x1E5330u;
label_1e5330:
    // 0x1e5330: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1e5330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1e5334:
    // 0x1e5334: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e5334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e5338:
    // 0x1e5338: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1e533c:
    if (ctx->pc == 0x1E533Cu) {
        ctx->pc = 0x1E5340u;
        goto label_1e5340;
    }
    ctx->pc = 0x1E5338u;
    {
        const bool branch_taken_0x1e5338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5338) {
            ctx->pc = 0x1E5370u;
            goto label_1e5370;
        }
    }
    ctx->pc = 0x1E5340u;
label_1e5340:
    // 0x1e5340: 0x28427ff1  slti        $v0, $v0, 0x7FF1
    ctx->pc = 0x1e5340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e5344:
    // 0x1e5344: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e5344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e5348:
    // 0x1e5348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e5348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e534c:
    // 0x1e534c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e5350:
    // 0x1e5350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e5354:
    if (ctx->pc == 0x1E5354u) {
        ctx->pc = 0x1E5358u;
        goto label_1e5358;
    }
    ctx->pc = 0x1E5350u;
    {
        const bool branch_taken_0x1e5350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5350) {
            ctx->pc = 0x1E5370u;
            goto label_1e5370;
        }
    }
    ctx->pc = 0x1E5358u;
label_1e5358:
    // 0x1e5358: 0x8eb90020  lw          $t9, 0x20($s5)
    ctx->pc = 0x1e5358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_1e535c:
    // 0x1e535c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e535cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5360:
    // 0x1e5360: 0x320f809  jalr        $t9
label_1e5364:
    if (ctx->pc == 0x1E5364u) {
        ctx->pc = 0x1E5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5360u;
        // 0x1e5364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5368u;
        goto label_1e5368;
    }
    ctx->pc = 0x1E5360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5368u);
        ctx->pc = 0x1E5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5360u;
        // 0x1e5364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5360u, 0x1E5368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5368u;
label_1e5368:
    // 0x1e5368: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e536c:
    if (ctx->pc == 0x1E536Cu) {
        ctx->pc = 0x1E536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5368u;
        // 0x1e536c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5370u;
        goto label_1e5370;
    }
    ctx->pc = 0x1E5368u;
    {
        const bool branch_taken_0x1e5368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5368u;
        // 0x1e536c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5368) {
            ctx->pc = 0x1E5378u;
            goto label_1e5378;
        }
    }
    ctx->pc = 0x1E5370u;
label_1e5370:
    // 0x1e5370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5374:
    // 0x1e5374: 0x0  nop
    ctx->pc = 0x1e5374u;
    // NOP
label_1e5378:
    // 0x1e5378: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e5378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e537c:
    // 0x1e537c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e537cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e5380:
    // 0x1e5380: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e5380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e5384:
    // 0x1e5384: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e5384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e5388:
    // 0x1e5388: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e538c:
    // 0x1e538c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e538cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e5390:
    // 0x1e5390: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e5390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5394:
    // 0x1e5394: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e5394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5398:
    // 0x1e5398: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e5398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e539c:
    // 0x1e539c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e539cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e53a0:
    // 0x1e53a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e53a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e53a4:
    // 0x1e53a4: 0x3e00008  jr          $ra
label_1e53a8:
    if (ctx->pc == 0x1E53A8u) {
        ctx->pc = 0x1E53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53A4u;
        // 0x1e53a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53ACu;
        goto label_fallthrough_0x1e53a4;
    }
    ctx->pc = 0x1E53A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53A4u;
        // 0x1e53a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E53A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e53a4:
    ctx->pc = 0x1E53ACu;
}
