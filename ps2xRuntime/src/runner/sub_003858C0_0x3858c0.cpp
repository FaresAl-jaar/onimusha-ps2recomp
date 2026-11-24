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

// Function: sub_003858C0
// Address: 0x3858c0 - 0x3861e4
void sub_003858C0_0x3858c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003858C0_0x3858c0");
#endif

    switch (ctx->pc) {
        case 0x3858c0u: goto label_3858c0;
        case 0x3858c4u: goto label_3858c4;
        case 0x3858c8u: goto label_3858c8;
        case 0x3858ccu: goto label_3858cc;
        case 0x3858d0u: goto label_3858d0;
        case 0x3858d4u: goto label_3858d4;
        case 0x3858d8u: goto label_3858d8;
        case 0x3858dcu: goto label_3858dc;
        case 0x3858e0u: goto label_3858e0;
        case 0x3858e4u: goto label_3858e4;
        case 0x3858e8u: goto label_3858e8;
        case 0x3858ecu: goto label_3858ec;
        case 0x3858f0u: goto label_3858f0;
        case 0x3858f4u: goto label_3858f4;
        case 0x3858f8u: goto label_3858f8;
        case 0x3858fcu: goto label_3858fc;
        case 0x385900u: goto label_385900;
        case 0x385904u: goto label_385904;
        case 0x385908u: goto label_385908;
        case 0x38590cu: goto label_38590c;
        case 0x385910u: goto label_385910;
        case 0x385914u: goto label_385914;
        case 0x385918u: goto label_385918;
        case 0x38591cu: goto label_38591c;
        case 0x385920u: goto label_385920;
        case 0x385924u: goto label_385924;
        case 0x385928u: goto label_385928;
        case 0x38592cu: goto label_38592c;
        case 0x385930u: goto label_385930;
        case 0x385934u: goto label_385934;
        case 0x385938u: goto label_385938;
        case 0x38593cu: goto label_38593c;
        case 0x385940u: goto label_385940;
        case 0x385944u: goto label_385944;
        case 0x385948u: goto label_385948;
        case 0x38594cu: goto label_38594c;
        case 0x385950u: goto label_385950;
        case 0x385954u: goto label_385954;
        case 0x385958u: goto label_385958;
        case 0x38595cu: goto label_38595c;
        case 0x385960u: goto label_385960;
        case 0x385964u: goto label_385964;
        case 0x385968u: goto label_385968;
        case 0x38596cu: goto label_38596c;
        case 0x385970u: goto label_385970;
        case 0x385974u: goto label_385974;
        case 0x385978u: goto label_385978;
        case 0x38597cu: goto label_38597c;
        case 0x385980u: goto label_385980;
        case 0x385984u: goto label_385984;
        case 0x385988u: goto label_385988;
        case 0x38598cu: goto label_38598c;
        case 0x385990u: goto label_385990;
        case 0x385994u: goto label_385994;
        case 0x385998u: goto label_385998;
        case 0x38599cu: goto label_38599c;
        case 0x3859a0u: goto label_3859a0;
        case 0x3859a4u: goto label_3859a4;
        case 0x3859a8u: goto label_3859a8;
        case 0x3859acu: goto label_3859ac;
        case 0x3859b0u: goto label_3859b0;
        case 0x3859b4u: goto label_3859b4;
        case 0x3859b8u: goto label_3859b8;
        case 0x3859bcu: goto label_3859bc;
        case 0x3859c0u: goto label_3859c0;
        case 0x3859c4u: goto label_3859c4;
        case 0x3859c8u: goto label_3859c8;
        case 0x3859ccu: goto label_3859cc;
        case 0x3859d0u: goto label_3859d0;
        case 0x3859d4u: goto label_3859d4;
        case 0x3859d8u: goto label_3859d8;
        case 0x3859dcu: goto label_3859dc;
        case 0x3859e0u: goto label_3859e0;
        case 0x3859e4u: goto label_3859e4;
        case 0x3859e8u: goto label_3859e8;
        case 0x3859ecu: goto label_3859ec;
        case 0x3859f0u: goto label_3859f0;
        case 0x3859f4u: goto label_3859f4;
        case 0x3859f8u: goto label_3859f8;
        case 0x3859fcu: goto label_3859fc;
        case 0x385a00u: goto label_385a00;
        case 0x385a04u: goto label_385a04;
        case 0x385a08u: goto label_385a08;
        case 0x385a0cu: goto label_385a0c;
        case 0x385a10u: goto label_385a10;
        case 0x385a14u: goto label_385a14;
        case 0x385a18u: goto label_385a18;
        case 0x385a1cu: goto label_385a1c;
        case 0x385a20u: goto label_385a20;
        case 0x385a24u: goto label_385a24;
        case 0x385a28u: goto label_385a28;
        case 0x385a2cu: goto label_385a2c;
        case 0x385a30u: goto label_385a30;
        case 0x385a34u: goto label_385a34;
        case 0x385a38u: goto label_385a38;
        case 0x385a3cu: goto label_385a3c;
        case 0x385a40u: goto label_385a40;
        case 0x385a44u: goto label_385a44;
        case 0x385a48u: goto label_385a48;
        case 0x385a4cu: goto label_385a4c;
        case 0x385a50u: goto label_385a50;
        case 0x385a54u: goto label_385a54;
        case 0x385a58u: goto label_385a58;
        case 0x385a5cu: goto label_385a5c;
        case 0x385a60u: goto label_385a60;
        case 0x385a64u: goto label_385a64;
        case 0x385a68u: goto label_385a68;
        case 0x385a6cu: goto label_385a6c;
        case 0x385a70u: goto label_385a70;
        case 0x385a74u: goto label_385a74;
        case 0x385a78u: goto label_385a78;
        case 0x385a7cu: goto label_385a7c;
        case 0x385a80u: goto label_385a80;
        case 0x385a84u: goto label_385a84;
        case 0x385a88u: goto label_385a88;
        case 0x385a8cu: goto label_385a8c;
        case 0x385a90u: goto label_385a90;
        case 0x385a94u: goto label_385a94;
        case 0x385a98u: goto label_385a98;
        case 0x385a9cu: goto label_385a9c;
        case 0x385aa0u: goto label_385aa0;
        case 0x385aa4u: goto label_385aa4;
        case 0x385aa8u: goto label_385aa8;
        case 0x385aacu: goto label_385aac;
        case 0x385ab0u: goto label_385ab0;
        case 0x385ab4u: goto label_385ab4;
        case 0x385ab8u: goto label_385ab8;
        case 0x385abcu: goto label_385abc;
        case 0x385ac0u: goto label_385ac0;
        case 0x385ac4u: goto label_385ac4;
        case 0x385ac8u: goto label_385ac8;
        case 0x385accu: goto label_385acc;
        case 0x385ad0u: goto label_385ad0;
        case 0x385ad4u: goto label_385ad4;
        case 0x385ad8u: goto label_385ad8;
        case 0x385adcu: goto label_385adc;
        case 0x385ae0u: goto label_385ae0;
        case 0x385ae4u: goto label_385ae4;
        case 0x385ae8u: goto label_385ae8;
        case 0x385aecu: goto label_385aec;
        case 0x385af0u: goto label_385af0;
        case 0x385af4u: goto label_385af4;
        case 0x385af8u: goto label_385af8;
        case 0x385afcu: goto label_385afc;
        case 0x385b00u: goto label_385b00;
        case 0x385b04u: goto label_385b04;
        case 0x385b08u: goto label_385b08;
        case 0x385b0cu: goto label_385b0c;
        case 0x385b10u: goto label_385b10;
        case 0x385b14u: goto label_385b14;
        case 0x385b18u: goto label_385b18;
        case 0x385b1cu: goto label_385b1c;
        case 0x385b20u: goto label_385b20;
        case 0x385b24u: goto label_385b24;
        case 0x385b28u: goto label_385b28;
        case 0x385b2cu: goto label_385b2c;
        case 0x385b30u: goto label_385b30;
        case 0x385b34u: goto label_385b34;
        case 0x385b38u: goto label_385b38;
        case 0x385b3cu: goto label_385b3c;
        case 0x385b40u: goto label_385b40;
        case 0x385b44u: goto label_385b44;
        case 0x385b48u: goto label_385b48;
        case 0x385b4cu: goto label_385b4c;
        case 0x385b50u: goto label_385b50;
        case 0x385b54u: goto label_385b54;
        case 0x385b58u: goto label_385b58;
        case 0x385b5cu: goto label_385b5c;
        case 0x385b60u: goto label_385b60;
        case 0x385b64u: goto label_385b64;
        case 0x385b68u: goto label_385b68;
        case 0x385b6cu: goto label_385b6c;
        case 0x385b70u: goto label_385b70;
        case 0x385b74u: goto label_385b74;
        case 0x385b78u: goto label_385b78;
        case 0x385b7cu: goto label_385b7c;
        case 0x385b80u: goto label_385b80;
        case 0x385b84u: goto label_385b84;
        case 0x385b88u: goto label_385b88;
        case 0x385b8cu: goto label_385b8c;
        case 0x385b90u: goto label_385b90;
        case 0x385b94u: goto label_385b94;
        case 0x385b98u: goto label_385b98;
        case 0x385b9cu: goto label_385b9c;
        case 0x385ba0u: goto label_385ba0;
        case 0x385ba4u: goto label_385ba4;
        case 0x385ba8u: goto label_385ba8;
        case 0x385bacu: goto label_385bac;
        case 0x385bb0u: goto label_385bb0;
        case 0x385bb4u: goto label_385bb4;
        case 0x385bb8u: goto label_385bb8;
        case 0x385bbcu: goto label_385bbc;
        case 0x385bc0u: goto label_385bc0;
        case 0x385bc4u: goto label_385bc4;
        case 0x385bc8u: goto label_385bc8;
        case 0x385bccu: goto label_385bcc;
        case 0x385bd0u: goto label_385bd0;
        case 0x385bd4u: goto label_385bd4;
        case 0x385bd8u: goto label_385bd8;
        case 0x385bdcu: goto label_385bdc;
        case 0x385be0u: goto label_385be0;
        case 0x385be4u: goto label_385be4;
        case 0x385be8u: goto label_385be8;
        case 0x385becu: goto label_385bec;
        case 0x385bf0u: goto label_385bf0;
        case 0x385bf4u: goto label_385bf4;
        case 0x385bf8u: goto label_385bf8;
        case 0x385bfcu: goto label_385bfc;
        case 0x385c00u: goto label_385c00;
        case 0x385c04u: goto label_385c04;
        case 0x385c08u: goto label_385c08;
        case 0x385c0cu: goto label_385c0c;
        case 0x385c10u: goto label_385c10;
        case 0x385c14u: goto label_385c14;
        case 0x385c18u: goto label_385c18;
        case 0x385c1cu: goto label_385c1c;
        case 0x385c20u: goto label_385c20;
        case 0x385c24u: goto label_385c24;
        case 0x385c28u: goto label_385c28;
        case 0x385c2cu: goto label_385c2c;
        case 0x385c30u: goto label_385c30;
        case 0x385c34u: goto label_385c34;
        case 0x385c38u: goto label_385c38;
        case 0x385c3cu: goto label_385c3c;
        case 0x385c40u: goto label_385c40;
        case 0x385c44u: goto label_385c44;
        case 0x385c48u: goto label_385c48;
        case 0x385c4cu: goto label_385c4c;
        case 0x385c50u: goto label_385c50;
        case 0x385c54u: goto label_385c54;
        case 0x385c58u: goto label_385c58;
        case 0x385c5cu: goto label_385c5c;
        case 0x385c60u: goto label_385c60;
        case 0x385c64u: goto label_385c64;
        case 0x385c68u: goto label_385c68;
        case 0x385c6cu: goto label_385c6c;
        case 0x385c70u: goto label_385c70;
        case 0x385c74u: goto label_385c74;
        case 0x385c78u: goto label_385c78;
        case 0x385c7cu: goto label_385c7c;
        case 0x385c80u: goto label_385c80;
        case 0x385c84u: goto label_385c84;
        case 0x385c88u: goto label_385c88;
        case 0x385c8cu: goto label_385c8c;
        case 0x385c90u: goto label_385c90;
        case 0x385c94u: goto label_385c94;
        case 0x385c98u: goto label_385c98;
        case 0x385c9cu: goto label_385c9c;
        case 0x385ca0u: goto label_385ca0;
        case 0x385ca4u: goto label_385ca4;
        case 0x385ca8u: goto label_385ca8;
        case 0x385cacu: goto label_385cac;
        case 0x385cb0u: goto label_385cb0;
        case 0x385cb4u: goto label_385cb4;
        case 0x385cb8u: goto label_385cb8;
        case 0x385cbcu: goto label_385cbc;
        case 0x385cc0u: goto label_385cc0;
        case 0x385cc4u: goto label_385cc4;
        case 0x385cc8u: goto label_385cc8;
        case 0x385cccu: goto label_385ccc;
        case 0x385cd0u: goto label_385cd0;
        case 0x385cd4u: goto label_385cd4;
        case 0x385cd8u: goto label_385cd8;
        case 0x385cdcu: goto label_385cdc;
        case 0x385ce0u: goto label_385ce0;
        case 0x385ce4u: goto label_385ce4;
        case 0x385ce8u: goto label_385ce8;
        case 0x385cecu: goto label_385cec;
        case 0x385cf0u: goto label_385cf0;
        case 0x385cf4u: goto label_385cf4;
        case 0x385cf8u: goto label_385cf8;
        case 0x385cfcu: goto label_385cfc;
        case 0x385d00u: goto label_385d00;
        case 0x385d04u: goto label_385d04;
        case 0x385d08u: goto label_385d08;
        case 0x385d0cu: goto label_385d0c;
        case 0x385d10u: goto label_385d10;
        case 0x385d14u: goto label_385d14;
        case 0x385d18u: goto label_385d18;
        case 0x385d1cu: goto label_385d1c;
        case 0x385d20u: goto label_385d20;
        case 0x385d24u: goto label_385d24;
        case 0x385d28u: goto label_385d28;
        case 0x385d2cu: goto label_385d2c;
        case 0x385d30u: goto label_385d30;
        case 0x385d34u: goto label_385d34;
        case 0x385d38u: goto label_385d38;
        case 0x385d3cu: goto label_385d3c;
        case 0x385d40u: goto label_385d40;
        case 0x385d44u: goto label_385d44;
        case 0x385d48u: goto label_385d48;
        case 0x385d4cu: goto label_385d4c;
        case 0x385d50u: goto label_385d50;
        case 0x385d54u: goto label_385d54;
        case 0x385d58u: goto label_385d58;
        case 0x385d5cu: goto label_385d5c;
        case 0x385d60u: goto label_385d60;
        case 0x385d64u: goto label_385d64;
        case 0x385d68u: goto label_385d68;
        case 0x385d6cu: goto label_385d6c;
        case 0x385d70u: goto label_385d70;
        case 0x385d74u: goto label_385d74;
        case 0x385d78u: goto label_385d78;
        case 0x385d7cu: goto label_385d7c;
        case 0x385d80u: goto label_385d80;
        case 0x385d84u: goto label_385d84;
        case 0x385d88u: goto label_385d88;
        case 0x385d8cu: goto label_385d8c;
        case 0x385d90u: goto label_385d90;
        case 0x385d94u: goto label_385d94;
        case 0x385d98u: goto label_385d98;
        case 0x385d9cu: goto label_385d9c;
        case 0x385da0u: goto label_385da0;
        case 0x385da4u: goto label_385da4;
        case 0x385da8u: goto label_385da8;
        case 0x385dacu: goto label_385dac;
        case 0x385db0u: goto label_385db0;
        case 0x385db4u: goto label_385db4;
        case 0x385db8u: goto label_385db8;
        case 0x385dbcu: goto label_385dbc;
        case 0x385dc0u: goto label_385dc0;
        case 0x385dc4u: goto label_385dc4;
        case 0x385dc8u: goto label_385dc8;
        case 0x385dccu: goto label_385dcc;
        case 0x385dd0u: goto label_385dd0;
        case 0x385dd4u: goto label_385dd4;
        case 0x385dd8u: goto label_385dd8;
        case 0x385ddcu: goto label_385ddc;
        case 0x385de0u: goto label_385de0;
        case 0x385de4u: goto label_385de4;
        case 0x385de8u: goto label_385de8;
        case 0x385decu: goto label_385dec;
        case 0x385df0u: goto label_385df0;
        case 0x385df4u: goto label_385df4;
        case 0x385df8u: goto label_385df8;
        case 0x385dfcu: goto label_385dfc;
        case 0x385e00u: goto label_385e00;
        case 0x385e04u: goto label_385e04;
        case 0x385e08u: goto label_385e08;
        case 0x385e0cu: goto label_385e0c;
        case 0x385e10u: goto label_385e10;
        case 0x385e14u: goto label_385e14;
        case 0x385e18u: goto label_385e18;
        case 0x385e1cu: goto label_385e1c;
        case 0x385e20u: goto label_385e20;
        case 0x385e24u: goto label_385e24;
        case 0x385e28u: goto label_385e28;
        case 0x385e2cu: goto label_385e2c;
        case 0x385e30u: goto label_385e30;
        case 0x385e34u: goto label_385e34;
        case 0x385e38u: goto label_385e38;
        case 0x385e3cu: goto label_385e3c;
        case 0x385e40u: goto label_385e40;
        case 0x385e44u: goto label_385e44;
        case 0x385e48u: goto label_385e48;
        case 0x385e4cu: goto label_385e4c;
        case 0x385e50u: goto label_385e50;
        case 0x385e54u: goto label_385e54;
        case 0x385e58u: goto label_385e58;
        case 0x385e5cu: goto label_385e5c;
        case 0x385e60u: goto label_385e60;
        case 0x385e64u: goto label_385e64;
        case 0x385e68u: goto label_385e68;
        case 0x385e6cu: goto label_385e6c;
        case 0x385e70u: goto label_385e70;
        case 0x385e74u: goto label_385e74;
        case 0x385e78u: goto label_385e78;
        case 0x385e7cu: goto label_385e7c;
        case 0x385e80u: goto label_385e80;
        case 0x385e84u: goto label_385e84;
        case 0x385e88u: goto label_385e88;
        case 0x385e8cu: goto label_385e8c;
        case 0x385e90u: goto label_385e90;
        case 0x385e94u: goto label_385e94;
        case 0x385e98u: goto label_385e98;
        case 0x385e9cu: goto label_385e9c;
        case 0x385ea0u: goto label_385ea0;
        case 0x385ea4u: goto label_385ea4;
        case 0x385ea8u: goto label_385ea8;
        case 0x385eacu: goto label_385eac;
        case 0x385eb0u: goto label_385eb0;
        case 0x385eb4u: goto label_385eb4;
        case 0x385eb8u: goto label_385eb8;
        case 0x385ebcu: goto label_385ebc;
        case 0x385ec0u: goto label_385ec0;
        case 0x385ec4u: goto label_385ec4;
        case 0x385ec8u: goto label_385ec8;
        case 0x385eccu: goto label_385ecc;
        case 0x385ed0u: goto label_385ed0;
        case 0x385ed4u: goto label_385ed4;
        case 0x385ed8u: goto label_385ed8;
        case 0x385edcu: goto label_385edc;
        case 0x385ee0u: goto label_385ee0;
        case 0x385ee4u: goto label_385ee4;
        case 0x385ee8u: goto label_385ee8;
        case 0x385eecu: goto label_385eec;
        case 0x385ef0u: goto label_385ef0;
        case 0x385ef4u: goto label_385ef4;
        case 0x385ef8u: goto label_385ef8;
        case 0x385efcu: goto label_385efc;
        case 0x385f00u: goto label_385f00;
        case 0x385f04u: goto label_385f04;
        case 0x385f08u: goto label_385f08;
        case 0x385f0cu: goto label_385f0c;
        case 0x385f10u: goto label_385f10;
        case 0x385f14u: goto label_385f14;
        case 0x385f18u: goto label_385f18;
        case 0x385f1cu: goto label_385f1c;
        case 0x385f20u: goto label_385f20;
        case 0x385f24u: goto label_385f24;
        case 0x385f28u: goto label_385f28;
        case 0x385f2cu: goto label_385f2c;
        case 0x385f30u: goto label_385f30;
        case 0x385f34u: goto label_385f34;
        case 0x385f38u: goto label_385f38;
        case 0x385f3cu: goto label_385f3c;
        case 0x385f40u: goto label_385f40;
        case 0x385f44u: goto label_385f44;
        case 0x385f48u: goto label_385f48;
        case 0x385f4cu: goto label_385f4c;
        case 0x385f50u: goto label_385f50;
        case 0x385f54u: goto label_385f54;
        case 0x385f58u: goto label_385f58;
        case 0x385f5cu: goto label_385f5c;
        case 0x385f60u: goto label_385f60;
        case 0x385f64u: goto label_385f64;
        case 0x385f68u: goto label_385f68;
        case 0x385f6cu: goto label_385f6c;
        case 0x385f70u: goto label_385f70;
        case 0x385f74u: goto label_385f74;
        case 0x385f78u: goto label_385f78;
        case 0x385f7cu: goto label_385f7c;
        case 0x385f80u: goto label_385f80;
        case 0x385f84u: goto label_385f84;
        case 0x385f88u: goto label_385f88;
        case 0x385f8cu: goto label_385f8c;
        case 0x385f90u: goto label_385f90;
        case 0x385f94u: goto label_385f94;
        case 0x385f98u: goto label_385f98;
        case 0x385f9cu: goto label_385f9c;
        case 0x385fa0u: goto label_385fa0;
        case 0x385fa4u: goto label_385fa4;
        case 0x385fa8u: goto label_385fa8;
        case 0x385facu: goto label_385fac;
        case 0x385fb0u: goto label_385fb0;
        case 0x385fb4u: goto label_385fb4;
        case 0x385fb8u: goto label_385fb8;
        case 0x385fbcu: goto label_385fbc;
        case 0x385fc0u: goto label_385fc0;
        case 0x385fc4u: goto label_385fc4;
        case 0x385fc8u: goto label_385fc8;
        case 0x385fccu: goto label_385fcc;
        case 0x385fd0u: goto label_385fd0;
        case 0x385fd4u: goto label_385fd4;
        case 0x385fd8u: goto label_385fd8;
        case 0x385fdcu: goto label_385fdc;
        case 0x385fe0u: goto label_385fe0;
        case 0x385fe4u: goto label_385fe4;
        case 0x385fe8u: goto label_385fe8;
        case 0x385fecu: goto label_385fec;
        case 0x385ff0u: goto label_385ff0;
        case 0x385ff4u: goto label_385ff4;
        case 0x385ff8u: goto label_385ff8;
        case 0x385ffcu: goto label_385ffc;
        case 0x386000u: goto label_386000;
        case 0x386004u: goto label_386004;
        case 0x386008u: goto label_386008;
        case 0x38600cu: goto label_38600c;
        case 0x386010u: goto label_386010;
        case 0x386014u: goto label_386014;
        case 0x386018u: goto label_386018;
        case 0x38601cu: goto label_38601c;
        case 0x386020u: goto label_386020;
        case 0x386024u: goto label_386024;
        case 0x386028u: goto label_386028;
        case 0x38602cu: goto label_38602c;
        case 0x386030u: goto label_386030;
        case 0x386034u: goto label_386034;
        case 0x386038u: goto label_386038;
        case 0x38603cu: goto label_38603c;
        case 0x386040u: goto label_386040;
        case 0x386044u: goto label_386044;
        case 0x386048u: goto label_386048;
        case 0x38604cu: goto label_38604c;
        case 0x386050u: goto label_386050;
        case 0x386054u: goto label_386054;
        case 0x386058u: goto label_386058;
        case 0x38605cu: goto label_38605c;
        case 0x386060u: goto label_386060;
        case 0x386064u: goto label_386064;
        case 0x386068u: goto label_386068;
        case 0x38606cu: goto label_38606c;
        case 0x386070u: goto label_386070;
        case 0x386074u: goto label_386074;
        case 0x386078u: goto label_386078;
        case 0x38607cu: goto label_38607c;
        case 0x386080u: goto label_386080;
        case 0x386084u: goto label_386084;
        case 0x386088u: goto label_386088;
        case 0x38608cu: goto label_38608c;
        case 0x386090u: goto label_386090;
        case 0x386094u: goto label_386094;
        case 0x386098u: goto label_386098;
        case 0x38609cu: goto label_38609c;
        case 0x3860a0u: goto label_3860a0;
        case 0x3860a4u: goto label_3860a4;
        case 0x3860a8u: goto label_3860a8;
        case 0x3860acu: goto label_3860ac;
        case 0x3860b0u: goto label_3860b0;
        case 0x3860b4u: goto label_3860b4;
        case 0x3860b8u: goto label_3860b8;
        case 0x3860bcu: goto label_3860bc;
        case 0x3860c0u: goto label_3860c0;
        case 0x3860c4u: goto label_3860c4;
        case 0x3860c8u: goto label_3860c8;
        case 0x3860ccu: goto label_3860cc;
        case 0x3860d0u: goto label_3860d0;
        case 0x3860d4u: goto label_3860d4;
        case 0x3860d8u: goto label_3860d8;
        case 0x3860dcu: goto label_3860dc;
        case 0x3860e0u: goto label_3860e0;
        case 0x3860e4u: goto label_3860e4;
        case 0x3860e8u: goto label_3860e8;
        case 0x3860ecu: goto label_3860ec;
        case 0x3860f0u: goto label_3860f0;
        case 0x3860f4u: goto label_3860f4;
        case 0x3860f8u: goto label_3860f8;
        case 0x3860fcu: goto label_3860fc;
        case 0x386100u: goto label_386100;
        case 0x386104u: goto label_386104;
        case 0x386108u: goto label_386108;
        case 0x38610cu: goto label_38610c;
        case 0x386110u: goto label_386110;
        case 0x386114u: goto label_386114;
        case 0x386118u: goto label_386118;
        case 0x38611cu: goto label_38611c;
        case 0x386120u: goto label_386120;
        case 0x386124u: goto label_386124;
        case 0x386128u: goto label_386128;
        case 0x38612cu: goto label_38612c;
        case 0x386130u: goto label_386130;
        case 0x386134u: goto label_386134;
        case 0x386138u: goto label_386138;
        case 0x38613cu: goto label_38613c;
        case 0x386140u: goto label_386140;
        case 0x386144u: goto label_386144;
        case 0x386148u: goto label_386148;
        case 0x38614cu: goto label_38614c;
        case 0x386150u: goto label_386150;
        case 0x386154u: goto label_386154;
        case 0x386158u: goto label_386158;
        case 0x38615cu: goto label_38615c;
        case 0x386160u: goto label_386160;
        case 0x386164u: goto label_386164;
        case 0x386168u: goto label_386168;
        case 0x38616cu: goto label_38616c;
        case 0x386170u: goto label_386170;
        case 0x386174u: goto label_386174;
        case 0x386178u: goto label_386178;
        case 0x38617cu: goto label_38617c;
        case 0x386180u: goto label_386180;
        case 0x386184u: goto label_386184;
        case 0x386188u: goto label_386188;
        case 0x38618cu: goto label_38618c;
        case 0x386190u: goto label_386190;
        case 0x386194u: goto label_386194;
        case 0x386198u: goto label_386198;
        case 0x38619cu: goto label_38619c;
        case 0x3861a0u: goto label_3861a0;
        case 0x3861a4u: goto label_3861a4;
        case 0x3861a8u: goto label_3861a8;
        case 0x3861acu: goto label_3861ac;
        case 0x3861b0u: goto label_3861b0;
        case 0x3861b4u: goto label_3861b4;
        case 0x3861b8u: goto label_3861b8;
        case 0x3861bcu: goto label_3861bc;
        case 0x3861c0u: goto label_3861c0;
        case 0x3861c4u: goto label_3861c4;
        case 0x3861c8u: goto label_3861c8;
        case 0x3861ccu: goto label_3861cc;
        case 0x3861d0u: goto label_3861d0;
        case 0x3861d4u: goto label_3861d4;
        case 0x3861d8u: goto label_3861d8;
        case 0x3861dcu: goto label_3861dc;
        case 0x3861e0u: goto label_3861e0;
        default: break;
    }

    ctx->pc = 0x3858c0u;

label_3858c0:
    // 0x3858c0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x3858c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_3858c4:
    // 0x3858c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3858c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3858c8:
    // 0x3858c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3858c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3858cc:
    // 0x3858cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3858ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3858d0:
    // 0x3858d0: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x3858d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
label_3858d4:
    // 0x3858d4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3858d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3858d8:
    // 0x3858d8: 0x102000d5  beqz        $at, . + 4 + (0xD5 << 2)
label_3858dc:
    if (ctx->pc == 0x3858DCu) {
        ctx->pc = 0x3858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858D8u;
        // 0x3858dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3858E0u;
        goto label_3858e0;
    }
    ctx->pc = 0x3858D8u;
    {
        const bool branch_taken_0x3858d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858D8u;
        // 0x3858dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3858d8) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x3858E0u;
label_3858e0:
    // 0x3858e0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3858e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
label_3858e4:
    // 0x3858e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3858e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3858e8:
    // 0x3858e8: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0
    ctx->pc = 0x3858e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
label_3858ec:
    // 0x3858ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3858ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3858f0:
    // 0x3858f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3858f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3858f4:
    // 0x3858f4: 0x600008  jr          $v1
label_3858f8:
    if (ctx->pc == 0x3858F8u) {
        ctx->pc = 0x3858FCu;
        goto label_3858fc;
    }
    ctx->pc = 0x3858F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x385900u: goto label_385900;
            case 0x3859A8u: goto label_3859a8;
            case 0x385A30u: goto label_385a30;
            case 0x385A70u: goto label_385a70;
            case 0x385B20u: goto label_385b20;
            case 0x385C00u: goto label_385c00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3858F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3858FCu;
label_3858fc:
    // 0x3858fc: 0x0  nop
    ctx->pc = 0x3858fcu;
    // NOP
label_385900:
    // 0x385900: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x385900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_385904:
    // 0x385904: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x385904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385908:
    // 0x385908: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x385908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_38590c:
    // 0x38590c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38590cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_385910:
    // 0x385910: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x385910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_385914:
    // 0x385914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x385914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385918:
    // 0x385918: 0x0  nop
    ctx->pc = 0x385918u;
    // NOP
label_38591c:
    // 0x38591c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x38591cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_385920:
    // 0x385920: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x385920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_385924:
    // 0x385924: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_385928:
    if (ctx->pc == 0x385928u) {
        ctx->pc = 0x385928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385924u;
        // 0x385928: 0x24640124  addiu       $a0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38592Cu;
        goto label_38592c;
    }
    ctx->pc = 0x385924u;
    {
        const bool branch_taken_0x385924 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x385928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385924u;
        // 0x385928: 0x24640124  addiu       $a0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385924) {
            ctx->pc = 0x38593Cu;
            goto label_38593c;
        }
    }
    ctx->pc = 0x38592Cu;
label_38592c:
    // 0x38592c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38592cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_385930:
    // 0x385930: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x385930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_385934:
    // 0x385934: 0x10000007  b           . + 4 + (0x7 << 2)
label_385938:
    if (ctx->pc == 0x385938u) {
        ctx->pc = 0x38593Cu;
        goto label_38593c;
    }
    ctx->pc = 0x385934u;
    {
        const bool branch_taken_0x385934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x385934) {
            ctx->pc = 0x385954u;
            goto label_385954;
        }
    }
    ctx->pc = 0x38593Cu;
label_38593c:
    // 0x38593c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38593cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_385940:
    // 0x385940: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x385940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_385944:
    // 0x385944: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x385944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_385948:
    // 0x385948: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x385948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_38594c:
    // 0x38594c: 0x0  nop
    ctx->pc = 0x38594cu;
    // NOP
label_385950:
    // 0x385950: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x385950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_385954:
    // 0x385954: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x385954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_385958:
    // 0x385958: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x385958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
label_38595c:
    // 0x38595c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x38595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
label_385960:
    // 0x385960: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x385960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
label_385964:
    // 0x385964: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x385964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_385968:
    // 0x385968: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x385968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_38596c:
    // 0x38596c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x38596cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_385970:
    // 0x385970: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x385970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_385974:
    // 0x385974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x385974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_385978:
    // 0x385978: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x385978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_38597c:
    // 0x38597c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x38597cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
label_385980:
    // 0x385980: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x385980u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_385984:
    // 0x385984: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x385984u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_385988:
    // 0x385988: 0x0  nop
    ctx->pc = 0x385988u;
    // NOP
label_38598c:
    // 0x38598c: 0x0  nop
    ctx->pc = 0x38598cu;
    // NOP
label_385990:
    // 0x385990: 0x1010  mfhi        $v0
    ctx->pc = 0x385990u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_385994:
    // 0x385994: 0xc0d0ae8  jal         func_342BA0
label_385998:
    if (ctx->pc == 0x385998u) {
        ctx->pc = 0x385998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385994u;
        // 0x385998: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38599Cu;
        goto label_38599c;
    }
    ctx->pc = 0x385994u;
    SET_GPR_U32(ctx, 31, 0x38599Cu);
    ctx->pc = 0x385998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385994u;
    // 0x385998: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x385994u, 0x38599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38599Cu;
label_38599c:
    // 0x38599c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x38599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3859a0:
    // 0x3859a0: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3859a4:
    if (ctx->pc == 0x3859A4u) {
        ctx->pc = 0x3859A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859A0u;
        // 0x3859a4: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859A8u;
        goto label_3859a8;
    }
    ctx->pc = 0x3859A0u;
    {
        const bool branch_taken_0x3859a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3859A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859A0u;
        // 0x3859a4: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859a0) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x3859A8u;
label_3859a8:
    // 0x3859a8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3859a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3859ac:
    // 0x3859ac: 0x24050a20  addiu       $a1, $zero, 0xA20
    ctx->pc = 0x3859acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2592));
label_3859b0:
    // 0x3859b0: 0xc0d165c  jal         func_345970
label_3859b4:
    if (ctx->pc == 0x3859B4u) {
        ctx->pc = 0x3859B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859B0u;
        // 0x3859b4: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859B8u;
        goto label_3859b8;
    }
    ctx->pc = 0x3859B0u;
    SET_GPR_U32(ctx, 31, 0x3859B8u);
    ctx->pc = 0x3859B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3859B0u;
    // 0x3859b4: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x3859B0u, 0x3859B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3859B8u;
label_3859b8:
    // 0x3859b8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3859b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3859bc:
    // 0x3859bc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x3859bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_3859c0:
    // 0x3859c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3859c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3859c4:
    // 0x3859c4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3859c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_3859c8:
    // 0x3859c8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3859c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_3859cc:
    // 0x3859cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3859ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3859d0:
    // 0x3859d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3859d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3859d4:
    // 0x3859d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3859d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3859d8:
    // 0x3859d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3859d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3859dc:
    // 0x3859dc: 0x0  nop
    ctx->pc = 0x3859dcu;
    // NOP
label_3859e0:
    // 0x3859e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3859e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3859e4:
    // 0x3859e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3859e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3859e8:
    // 0x3859e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3859ec:
    if (ctx->pc == 0x3859ECu) {
        ctx->pc = 0x3859F0u;
        goto label_3859f0;
    }
    ctx->pc = 0x3859E8u;
    {
        const bool branch_taken_0x3859e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3859e8) {
            ctx->pc = 0x385A00u;
            goto label_385a00;
        }
    }
    ctx->pc = 0x3859F0u;
label_3859f0:
    // 0x3859f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3859f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3859f4:
    // 0x3859f4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3859f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3859f8:
    // 0x3859f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3859fc:
    if (ctx->pc == 0x3859FCu) {
        ctx->pc = 0x3859FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859F8u;
        // 0x3859fc: 0x8e220144  lw          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A00u;
        goto label_385a00;
    }
    ctx->pc = 0x3859F8u;
    {
        const bool branch_taken_0x3859f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3859FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859F8u;
        // 0x3859fc: 0x8e220144  lw          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859f8) {
            ctx->pc = 0x385A1Cu;
            goto label_385a1c;
        }
    }
    ctx->pc = 0x385A00u;
label_385a00:
    // 0x385a00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x385a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_385a04:
    // 0x385a04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x385a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_385a08:
    // 0x385a08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x385a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_385a0c:
    // 0x385a0c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x385a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_385a10:
    // 0x385a10: 0x0  nop
    ctx->pc = 0x385a10u;
    // NOP
label_385a14:
    // 0x385a14: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x385a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_385a18:
    // 0x385a18: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385a1c:
    // 0x385a1c: 0xc0d0ae8  jal         func_342BA0
label_385a20:
    if (ctx->pc == 0x385A20u) {
        ctx->pc = 0x385A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A1Cu;
        // 0x385a20: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A24u;
        goto label_385a24;
    }
    ctx->pc = 0x385A1Cu;
    SET_GPR_U32(ctx, 31, 0x385A24u);
    ctx->pc = 0x385A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A1Cu;
    // 0x385a20: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x385A1Cu, 0x385A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A24u;
label_385a24:
    // 0x385a24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x385a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_385a28:
    // 0x385a28: 0x10000081  b           . + 4 + (0x81 << 2)
label_385a2c:
    if (ctx->pc == 0x385A2Cu) {
        ctx->pc = 0x385A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A28u;
        // 0x385a2c: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A30u;
        goto label_385a30;
    }
    ctx->pc = 0x385A28u;
    {
        const bool branch_taken_0x385a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A28u;
        // 0x385a2c: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a28) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385A30u;
label_385a30:
    // 0x385a30: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385a34:
    // 0x385a34: 0xc0d0b00  jal         func_342C00
label_385a38:
    if (ctx->pc == 0x385A38u) {
        ctx->pc = 0x385A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A34u;
        // 0x385a38: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A3Cu;
        goto label_385a3c;
    }
    ctx->pc = 0x385A34u;
    SET_GPR_U32(ctx, 31, 0x385A3Cu);
    ctx->pc = 0x385A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A34u;
    // 0x385a38: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x385A34u, 0x385A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A3Cu;
label_385a3c:
    // 0x385a3c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385a40:
    // 0x385a40: 0xc0d0af4  jal         func_342BD0
label_385a44:
    if (ctx->pc == 0x385A44u) {
        ctx->pc = 0x385A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A40u;
        // 0x385a44: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A48u;
        goto label_385a48;
    }
    ctx->pc = 0x385A40u;
    SET_GPR_U32(ctx, 31, 0x385A48u);
    ctx->pc = 0x385A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A40u;
    // 0x385a44: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x385A40u, 0x385A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A48u;
label_385a48:
    // 0x385a48: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_385a4c:
    if (ctx->pc == 0x385A4Cu) {
        ctx->pc = 0x385A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A48u;
        // 0x385a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A50u;
        goto label_385a50;
    }
    ctx->pc = 0x385A48u;
    {
        const bool branch_taken_0x385a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A48u;
        // 0x385a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a48) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385A50u;
label_385a50:
    // 0x385a50: 0xc0d0548  jal         func_341520
label_385a54:
    if (ctx->pc == 0x385A54u) {
        ctx->pc = 0x385A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A50u;
        // 0x385a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A58u;
        goto label_385a58;
    }
    ctx->pc = 0x385A50u;
    SET_GPR_U32(ctx, 31, 0x385A58u);
    ctx->pc = 0x385A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A50u;
    // 0x385a54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x385A50u, 0x385A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A58u;
label_385a58:
    // 0x385a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_385a5c:
    // 0x385a5c: 0xc0d0548  jal         func_341520
label_385a60:
    if (ctx->pc == 0x385A60u) {
        ctx->pc = 0x385A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A5Cu;
        // 0x385a60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A64u;
        goto label_385a64;
    }
    ctx->pc = 0x385A5Cu;
    SET_GPR_U32(ctx, 31, 0x385A64u);
    ctx->pc = 0x385A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A5Cu;
    // 0x385a60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x385A5Cu, 0x385A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A64u;
label_385a64:
    // 0x385a64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x385a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_385a68:
    // 0x385a68: 0x10000071  b           . + 4 + (0x71 << 2)
label_385a6c:
    if (ctx->pc == 0x385A6Cu) {
        ctx->pc = 0x385A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A68u;
        // 0x385a6c: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A70u;
        goto label_385a70;
    }
    ctx->pc = 0x385A68u;
    {
        const bool branch_taken_0x385a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A68u;
        // 0x385a6c: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a68) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385A70u;
label_385a70:
    // 0x385a70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x385a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385a74:
    // 0x385a74: 0xc0d0590  jal         func_341640
label_385a78:
    if (ctx->pc == 0x385A78u) {
        ctx->pc = 0x385A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A74u;
        // 0x385a78: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A7Cu;
        goto label_385a7c;
    }
    ctx->pc = 0x385A74u;
    SET_GPR_U32(ctx, 31, 0x385A7Cu);
    ctx->pc = 0x385A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A74u;
    // 0x385a78: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x385A74u, 0x385A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A7Cu;
label_385a7c:
    // 0x385a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_385a80:
    // 0x385a80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x385a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_385a84:
    // 0x385a84: 0xc0d0590  jal         func_341640
label_385a88:
    if (ctx->pc == 0x385A88u) {
        ctx->pc = 0x385A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A84u;
        // 0x385a88: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385A8Cu;
        goto label_385a8c;
    }
    ctx->pc = 0x385A84u;
    SET_GPR_U32(ctx, 31, 0x385A8Cu);
    ctx->pc = 0x385A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A84u;
    // 0x385a88: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x385A84u, 0x385A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A8Cu;
label_385a8c:
    // 0x385a8c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x385a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_385a90:
    // 0x385a90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x385a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_385a94:
    // 0x385a94: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x385a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_385a98:
    // 0x385a98: 0x320f809  jalr        $t9
label_385a9c:
    if (ctx->pc == 0x385A9Cu) {
        ctx->pc = 0x385A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A98u;
        // 0x385a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385AA0u;
        goto label_385aa0;
    }
    ctx->pc = 0x385A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x385AA0u);
        ctx->pc = 0x385A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A98u;
        // 0x385a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385A98u, 0x385AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385AA0u;
label_385aa0:
    // 0x385aa0: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_385aa4:
    if (ctx->pc == 0x385AA4u) {
        ctx->pc = 0x385AA8u;
        goto label_385aa8;
    }
    ctx->pc = 0x385AA0u;
    {
        const bool branch_taken_0x385aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385aa0) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385AA8u;
label_385aa8:
    // 0x385aa8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x385aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_385aac:
    // 0x385aac: 0x24051422  addiu       $a1, $zero, 0x1422
    ctx->pc = 0x385aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5154));
label_385ab0:
    // 0x385ab0: 0xc0d165c  jal         func_345970
label_385ab4:
    if (ctx->pc == 0x385AB4u) {
        ctx->pc = 0x385AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AB0u;
        // 0x385ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385AB8u;
        goto label_385ab8;
    }
    ctx->pc = 0x385AB0u;
    SET_GPR_U32(ctx, 31, 0x385AB8u);
    ctx->pc = 0x385AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385AB0u;
    // 0x385ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x385AB0u, 0x385AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385AB8u;
label_385ab8:
    // 0x385ab8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x385ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385abc:
    // 0x385abc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x385abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_385ac0:
    // 0x385ac0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x385ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_385ac4:
    // 0x385ac4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x385ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_385ac8:
    // 0x385ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x385ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385acc:
    // 0x385acc: 0x0  nop
    ctx->pc = 0x385accu;
    // NOP
label_385ad0:
    // 0x385ad0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x385ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_385ad4:
    // 0x385ad4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x385ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_385ad8:
    // 0x385ad8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_385adc:
    if (ctx->pc == 0x385ADCu) {
        ctx->pc = 0x385AE0u;
        goto label_385ae0;
    }
    ctx->pc = 0x385AD8u;
    {
        const bool branch_taken_0x385ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x385ad8) {
            ctx->pc = 0x385AF0u;
            goto label_385af0;
        }
    }
    ctx->pc = 0x385AE0u;
label_385ae0:
    // 0x385ae0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x385ae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_385ae4:
    // 0x385ae4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x385ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_385ae8:
    // 0x385ae8: 0x10000008  b           . + 4 + (0x8 << 2)
label_385aec:
    if (ctx->pc == 0x385AECu) {
        ctx->pc = 0x385AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AE8u;
        // 0x385aec: 0x8e220144  lw          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385AF0u;
        goto label_385af0;
    }
    ctx->pc = 0x385AE8u;
    {
        const bool branch_taken_0x385ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AE8u;
        // 0x385aec: 0x8e220144  lw          $v0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ae8) {
            ctx->pc = 0x385B0Cu;
            goto label_385b0c;
        }
    }
    ctx->pc = 0x385AF0u;
label_385af0:
    // 0x385af0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x385af0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_385af4:
    // 0x385af4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x385af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_385af8:
    // 0x385af8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x385af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_385afc:
    // 0x385afc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x385afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_385b00:
    // 0x385b00: 0x0  nop
    ctx->pc = 0x385b00u;
    // NOP
label_385b04:
    // 0x385b04: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x385b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_385b08:
    // 0x385b08: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385b0c:
    // 0x385b0c: 0xc0d0ae8  jal         func_342BA0
label_385b10:
    if (ctx->pc == 0x385B10u) {
        ctx->pc = 0x385B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B0Cu;
        // 0x385b10: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B14u;
        goto label_385b14;
    }
    ctx->pc = 0x385B0Cu;
    SET_GPR_U32(ctx, 31, 0x385B14u);
    ctx->pc = 0x385B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B0Cu;
    // 0x385b10: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x385B0Cu, 0x385B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B14u;
label_385b14:
    // 0x385b14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x385b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_385b18:
    // 0x385b18: 0x10000045  b           . + 4 + (0x45 << 2)
label_385b1c:
    if (ctx->pc == 0x385B1Cu) {
        ctx->pc = 0x385B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B18u;
        // 0x385b1c: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B20u;
        goto label_385b20;
    }
    ctx->pc = 0x385B18u;
    {
        const bool branch_taken_0x385b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B18u;
        // 0x385b1c: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b18) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385B20u;
label_385b20:
    // 0x385b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x385b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385b24:
    // 0x385b24: 0xc0d0590  jal         func_341640
label_385b28:
    if (ctx->pc == 0x385B28u) {
        ctx->pc = 0x385B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B24u;
        // 0x385b28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B2Cu;
        goto label_385b2c;
    }
    ctx->pc = 0x385B24u;
    SET_GPR_U32(ctx, 31, 0x385B2Cu);
    ctx->pc = 0x385B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B24u;
    // 0x385b28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x385B24u, 0x385B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B2Cu;
label_385b2c:
    // 0x385b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_385b30:
    // 0x385b30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x385b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_385b34:
    // 0x385b34: 0xc0d0590  jal         func_341640
label_385b38:
    if (ctx->pc == 0x385B38u) {
        ctx->pc = 0x385B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B34u;
        // 0x385b38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B3Cu;
        goto label_385b3c;
    }
    ctx->pc = 0x385B34u;
    SET_GPR_U32(ctx, 31, 0x385B3Cu);
    ctx->pc = 0x385B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B34u;
    // 0x385b38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x385B34u, 0x385B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B3Cu;
label_385b3c:
    // 0x385b3c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385b40:
    // 0x385b40: 0xc0d0b00  jal         func_342C00
label_385b44:
    if (ctx->pc == 0x385B44u) {
        ctx->pc = 0x385B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B40u;
        // 0x385b44: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B48u;
        goto label_385b48;
    }
    ctx->pc = 0x385B40u;
    SET_GPR_U32(ctx, 31, 0x385B48u);
    ctx->pc = 0x385B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B40u;
    // 0x385b44: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x385B40u, 0x385B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B48u;
label_385b48:
    // 0x385b48: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385b4c:
    // 0x385b4c: 0xc0d0af4  jal         func_342BD0
label_385b50:
    if (ctx->pc == 0x385B50u) {
        ctx->pc = 0x385B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B4Cu;
        // 0x385b50: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385B54u;
        goto label_385b54;
    }
    ctx->pc = 0x385B4Cu;
    SET_GPR_U32(ctx, 31, 0x385B54u);
    ctx->pc = 0x385B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B4Cu;
    // 0x385b50: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x385B4Cu, 0x385B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B54u;
label_385b54:
    // 0x385b54: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_385b58:
    if (ctx->pc == 0x385B58u) {
        ctx->pc = 0x385B5Cu;
        goto label_385b5c;
    }
    ctx->pc = 0x385B54u;
    {
        const bool branch_taken_0x385b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385b54) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385B5Cu;
label_385b5c:
    // 0x385b5c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x385b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385b60:
    // 0x385b60: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x385b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
label_385b64:
    // 0x385b64: 0x3443a9e5  ori         $v1, $v0, 0xA9E5
    ctx->pc = 0x385b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
label_385b68:
    // 0x385b68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x385b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_385b6c:
    // 0x385b6c: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x385b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
label_385b70:
    // 0x385b70: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x385b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_385b74:
    // 0x385b74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x385b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_385b78:
    // 0x385b78: 0x8e240144  lw          $a0, 0x144($s1)
    ctx->pc = 0x385b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385b7c:
    // 0x385b7c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x385b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_385b80:
    // 0x385b80: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x385b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_385b84:
    // 0x385b84: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x385b84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_385b88:
    // 0x385b88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x385b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_385b8c:
    // 0x385b8c: 0x24840124  addiu       $a0, $a0, 0x124
    ctx->pc = 0x385b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
label_385b90:
    // 0x385b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x385b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385b94:
    // 0x385b94: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x385b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_385b98:
    // 0x385b98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x385b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_385b9c:
    // 0x385b9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_385ba0:
    // 0x385ba0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x385ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_385ba4:
    // 0x385ba4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x385ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_385ba8:
    // 0x385ba8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x385ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
label_385bac:
    // 0x385bac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_385bb0:
    if (ctx->pc == 0x385BB0u) {
        ctx->pc = 0x385BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BACu;
        // 0x385bb0: 0x22a02  srl         $a1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BB4u;
        goto label_385bb4;
    }
    ctx->pc = 0x385BACu;
    {
        const bool branch_taken_0x385bac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x385BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BACu;
        // 0x385bb0: 0x22a02  srl         $a1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385bac) {
            ctx->pc = 0x385BC4u;
            goto label_385bc4;
        }
    }
    ctx->pc = 0x385BB4u;
label_385bb4:
    // 0x385bb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x385bb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_385bb8:
    // 0x385bb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x385bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_385bbc:
    // 0x385bbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_385bc0:
    if (ctx->pc == 0x385BC0u) {
        ctx->pc = 0x385BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BBCu;
        // 0x385bc0: 0xa3001b  divu        $zero, $a1, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385BC4u;
        goto label_385bc4;
    }
    ctx->pc = 0x385BBCu;
    {
        const bool branch_taken_0x385bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BBCu;
        // 0x385bc0: 0xa3001b  divu        $zero, $a1, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x385bbc) {
            ctx->pc = 0x385BE0u;
            goto label_385be0;
        }
    }
    ctx->pc = 0x385BC4u;
label_385bc4:
    // 0x385bc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x385bc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_385bc8:
    // 0x385bc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x385bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_385bcc:
    // 0x385bcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x385bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_385bd0:
    // 0x385bd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x385bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_385bd4:
    // 0x385bd4: 0x0  nop
    ctx->pc = 0x385bd4u;
    // NOP
label_385bd8:
    // 0x385bd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x385bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_385bdc:
    // 0x385bdc: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x385bdcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_385be0:
    // 0x385be0: 0x0  nop
    ctx->pc = 0x385be0u;
    // NOP
label_385be4:
    // 0x385be4: 0x0  nop
    ctx->pc = 0x385be4u;
    // NOP
label_385be8:
    // 0x385be8: 0x2810  mfhi        $a1
    ctx->pc = 0x385be8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_385bec:
    // 0x385bec: 0xc0d0ae8  jal         func_342BA0
label_385bf0:
    if (ctx->pc == 0x385BF0u) {
        ctx->pc = 0x385BF4u;
        goto label_385bf4;
    }
    ctx->pc = 0x385BECu;
    SET_GPR_U32(ctx, 31, 0x385BF4u);
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x385BECu, 0x385BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385BF4u;
label_385bf4:
    // 0x385bf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x385bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_385bf8:
    // 0x385bf8: 0x1000000d  b           . + 4 + (0xD << 2)
label_385bfc:
    if (ctx->pc == 0x385BFCu) {
        ctx->pc = 0x385BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BF8u;
        // 0x385bfc: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C00u;
        goto label_385c00;
    }
    ctx->pc = 0x385BF8u;
    {
        const bool branch_taken_0x385bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BF8u;
        // 0x385bfc: 0xa223011a  sb          $v1, 0x11A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385bf8) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385C00u;
label_385c00:
    // 0x385c00: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385c04:
    // 0x385c04: 0xc0d0b00  jal         func_342C00
label_385c08:
    if (ctx->pc == 0x385C08u) {
        ctx->pc = 0x385C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C04u;
        // 0x385c08: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C0Cu;
        goto label_385c0c;
    }
    ctx->pc = 0x385C04u;
    SET_GPR_U32(ctx, 31, 0x385C0Cu);
    ctx->pc = 0x385C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C04u;
    // 0x385c08: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x385C04u, 0x385C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C0Cu;
label_385c0c:
    // 0x385c0c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385c10:
    // 0x385c10: 0xc0d0af4  jal         func_342BD0
label_385c14:
    if (ctx->pc == 0x385C14u) {
        ctx->pc = 0x385C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C10u;
        // 0x385c14: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C18u;
        goto label_385c18;
    }
    ctx->pc = 0x385C10u;
    SET_GPR_U32(ctx, 31, 0x385C18u);
    ctx->pc = 0x385C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C10u;
    // 0x385c14: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x385C10u, 0x385C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C18u;
label_385c18:
    // 0x385c18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_385c1c:
    if (ctx->pc == 0x385C1Cu) {
        ctx->pc = 0x385C20u;
        goto label_385c20;
    }
    ctx->pc = 0x385C18u;
    {
        const bool branch_taken_0x385c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385c18) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385C20u;
label_385c20:
    // 0x385c20: 0x9223011b  lbu         $v1, 0x11B($s1)
    ctx->pc = 0x385c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 283)));
label_385c24:
    // 0x385c24: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_385c28:
    if (ctx->pc == 0x385C28u) {
        ctx->pc = 0x385C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C24u;
        // 0x385c28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C2Cu;
        goto label_385c2c;
    }
    ctx->pc = 0x385C24u;
    {
        const bool branch_taken_0x385c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x385C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C24u;
        // 0x385c28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c24) {
            ctx->pc = 0x385C30u;
            goto label_385c30;
        }
    }
    ctx->pc = 0x385C2Cu;
label_385c2c:
    // 0x385c2c: 0xa223011a  sb          $v1, 0x11A($s1)
    ctx->pc = 0x385c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 282), (uint8_t)GPR_U32(ctx, 3));
label_385c30:
    // 0x385c30: 0x92240118  lbu         $a0, 0x118($s1)
    ctx->pc = 0x385c30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 280)));
label_385c34:
    // 0x385c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385c38:
    // 0x385c38: 0x108300a1  beq         $a0, $v1, . + 4 + (0xA1 << 2)
label_385c3c:
    if (ctx->pc == 0x385C3Cu) {
        ctx->pc = 0x385C40u;
        goto label_385c40;
    }
    ctx->pc = 0x385C38u;
    {
        const bool branch_taken_0x385c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x385c38) {
            ctx->pc = 0x385EC0u;
            goto label_385ec0;
        }
    }
    ctx->pc = 0x385C40u;
label_385c40:
    // 0x385c40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_385c44:
    if (ctx->pc == 0x385C44u) {
        ctx->pc = 0x385C48u;
        goto label_385c48;
    }
    ctx->pc = 0x385C40u;
    {
        const bool branch_taken_0x385c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385c40) {
            ctx->pc = 0x385C50u;
            goto label_385c50;
        }
    }
    ctx->pc = 0x385C48u;
label_385c48:
    // 0x385c48: 0x10000161  b           . + 4 + (0x161 << 2)
label_385c4c:
    if (ctx->pc == 0x385C4Cu) {
        ctx->pc = 0x385C50u;
        goto label_385c50;
    }
    ctx->pc = 0x385C48u;
    {
        const bool branch_taken_0x385c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x385c48) {
            ctx->pc = 0x3861D0u;
            goto label_3861d0;
        }
    }
    ctx->pc = 0x385C50u;
label_385c50:
    // 0x385c50: 0x92230119  lbu         $v1, 0x119($s1)
    ctx->pc = 0x385c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 281)));
label_385c54:
    // 0x385c54: 0x96222ad4  lhu         $v0, 0x2AD4($s1)
    ctx->pc = 0x385c54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10964)));
label_385c58:
    // 0x385c58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x385c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_385c5c:
    // 0x385c5c: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x385c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385c60:
    // 0x385c60: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x385c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_385c64:
    // 0x385c64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x385c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_385c68:
    // 0x385c68: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x385c68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_385c6c:
    // 0x385c6c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x385c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_385c70:
    // 0x385c70: 0x0  nop
    ctx->pc = 0x385c70u;
    // NOP
label_385c74:
    // 0x385c74: 0x1010  mfhi        $v0
    ctx->pc = 0x385c74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_385c78:
    // 0x385c78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x385c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_385c7c:
    // 0x385c7c: 0xc0414ca  jal         func_105328
label_385c80:
    if (ctx->pc == 0x385C80u) {
        ctx->pc = 0x385C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C7Cu;
        // 0x385c80: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385C84u;
        goto label_385c84;
    }
    ctx->pc = 0x385C7Cu;
    SET_GPR_U32(ctx, 31, 0x385C84u);
    ctx->pc = 0x385C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C7Cu;
    // 0x385c80: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385C7Cu, 0x385C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C84u;
label_385c84:
    // 0x385c84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x385c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_385c88:
    // 0x385c88: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x385c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_385c8c:
    // 0x385c8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385c8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385c90:
    // 0x385c90: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x385c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_385c94:
    // 0x385c94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_385c98:
    // 0x385c98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385c9c:
    // 0x385c9c: 0xc0414b0  jal         func_1052C0
label_385ca0:
    if (ctx->pc == 0x385CA0u) {
        ctx->pc = 0x385CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C9Cu;
        // 0x385ca0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CA4u;
        goto label_385ca4;
    }
    ctx->pc = 0x385C9Cu;
    SET_GPR_U32(ctx, 31, 0x385CA4u);
    ctx->pc = 0x385CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C9Cu;
    // 0x385ca0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x385C9Cu, 0x385CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CA4u;
label_385ca4:
    // 0x385ca4: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x385ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_385ca8:
    // 0x385ca8: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x385ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_385cac:
    // 0x385cac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385cacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385cb0:
    // 0x385cb0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x385cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_385cb4:
    // 0x385cb4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x385cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_385cb8:
    // 0x385cb8: 0x92220119  lbu         $v0, 0x119($s1)
    ctx->pc = 0x385cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 281)));
label_385cbc:
    // 0x385cbc: 0x96252ad4  lhu         $a1, 0x2AD4($s1)
    ctx->pc = 0x385cbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10964)));
label_385cc0:
    // 0x385cc0: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x385cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385cc4:
    // 0x385cc4: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x385cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_385cc8:
    // 0x385cc8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x385cc8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_385ccc:
    // 0x385ccc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x385cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_385cd0:
    // 0x385cd0: 0x0  nop
    ctx->pc = 0x385cd0u;
    // NOP
label_385cd4:
    // 0x385cd4: 0x1810  mfhi        $v1
    ctx->pc = 0x385cd4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_385cd8:
    // 0x385cd8: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x385cd8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_385cdc:
    // 0x385cdc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x385cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_385ce0:
    // 0x385ce0: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x385ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_385ce4:
    // 0x385ce4: 0x1010  mfhi        $v0
    ctx->pc = 0x385ce4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_385ce8:
    // 0x385ce8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x385ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_385cec:
    // 0x385cec: 0xc0414ca  jal         func_105328
label_385cf0:
    if (ctx->pc == 0x385CF0u) {
        ctx->pc = 0x385CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CECu;
        // 0x385cf0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385CF4u;
        goto label_385cf4;
    }
    ctx->pc = 0x385CECu;
    SET_GPR_U32(ctx, 31, 0x385CF4u);
    ctx->pc = 0x385CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385CECu;
    // 0x385cf0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385CECu, 0x385CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CF4u;
label_385cf4:
    // 0x385cf4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x385cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_385cf8:
    // 0x385cf8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x385cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_385cfc:
    // 0x385cfc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385cfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385d00:
    // 0x385d00: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x385d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_385d04:
    // 0x385d04: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_385d08:
    // 0x385d08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385d0c:
    // 0x385d0c: 0xc0414b0  jal         func_1052C0
label_385d10:
    if (ctx->pc == 0x385D10u) {
        ctx->pc = 0x385D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D0Cu;
        // 0x385d10: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D14u;
        goto label_385d14;
    }
    ctx->pc = 0x385D0Cu;
    SET_GPR_U32(ctx, 31, 0x385D14u);
    ctx->pc = 0x385D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D0Cu;
    // 0x385d10: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x385D0Cu, 0x385D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D14u;
label_385d14:
    // 0x385d14: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x385d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_385d18:
    // 0x385d18: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x385d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_385d1c:
    // 0x385d1c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385d1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385d20:
    // 0x385d20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x385d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_385d24:
    // 0x385d24: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x385d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_385d28:
    // 0x385d28: 0xc0414ca  jal         func_105328
label_385d2c:
    if (ctx->pc == 0x385D2Cu) {
        ctx->pc = 0x385D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D28u;
        // 0x385d2c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D30u;
        goto label_385d30;
    }
    ctx->pc = 0x385D28u;
    SET_GPR_U32(ctx, 31, 0x385D30u);
    ctx->pc = 0x385D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D28u;
    // 0x385d2c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385D28u, 0x385D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D30u;
label_385d30:
    // 0x385d30: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x385d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_385d34:
    // 0x385d34: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x385d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_385d38:
    // 0x385d38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385d38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385d3c:
    // 0x385d3c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x385d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_385d40:
    // 0x385d40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x385d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_385d44:
    // 0x385d44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385d48:
    // 0x385d48: 0xc0414b0  jal         func_1052C0
label_385d4c:
    if (ctx->pc == 0x385D4Cu) {
        ctx->pc = 0x385D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D48u;
        // 0x385d4c: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D50u;
        goto label_385d50;
    }
    ctx->pc = 0x385D48u;
    SET_GPR_U32(ctx, 31, 0x385D50u);
    ctx->pc = 0x385D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D48u;
    // 0x385d4c: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C0u, 0x385D48u, 0x385D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D50u;
label_385d50:
    // 0x385d50: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x385d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_385d54:
    // 0x385d54: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x385d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_385d58:
    // 0x385d58: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385d5c:
    // 0x385d5c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x385d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_385d60:
    // 0x385d60: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x385d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_385d64:
    // 0x385d64: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x385d64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_385d68:
    // 0x385d68: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385d6c:
    // 0x385d6c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x385d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_385d70:
    // 0x385d70: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x385d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_385d74:
    // 0x385d74: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x385d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385d78:
    // 0x385d78: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x385d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385d7c:
    // 0x385d7c: 0xe44300d0  swc1        $f3, 0xD0($v0)
    ctx->pc = 0x385d7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_385d80:
    // 0x385d80: 0xe44200d4  swc1        $f2, 0xD4($v0)
    ctx->pc = 0x385d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_385d84:
    // 0x385d84: 0xe44100d8  swc1        $f1, 0xD8($v0)
    ctx->pc = 0x385d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_385d88:
    // 0x385d88: 0xc0414d0  jal         func_105340
label_385d8c:
    if (ctx->pc == 0x385D8Cu) {
        ctx->pc = 0x385D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D88u;
        // 0x385d8c: 0xe44000dc  swc1        $f0, 0xDC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385D90u;
        goto label_385d90;
    }
    ctx->pc = 0x385D88u;
    SET_GPR_U32(ctx, 31, 0x385D90u);
    ctx->pc = 0x385D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D88u;
    // 0x385d8c: 0xe44000dc  swc1        $f0, 0xDC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x385D88u, 0x385D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D90u;
label_385d90:
    // 0x385d90: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x385d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_385d94:
    // 0x385d94: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x385d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_385d98:
    // 0x385d98: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385d9c:
    // 0x385d9c: 0xc07cd2c  jal         func_1F34B0
label_385da0:
    if (ctx->pc == 0x385DA0u) {
        ctx->pc = 0x385DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D9Cu;
        // 0x385da0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DA4u;
        goto label_385da4;
    }
    ctx->pc = 0x385D9Cu;
    SET_GPR_U32(ctx, 31, 0x385DA4u);
    ctx->pc = 0x385DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D9Cu;
    // 0x385da0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34B0u, 0x385D9Cu, 0x385DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DA4u;
label_385da4:
    // 0x385da4: 0x96222ace  lhu         $v0, 0x2ACE($s1)
    ctx->pc = 0x385da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10958)));
label_385da8:
    // 0x385da8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x385da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_385dac:
    // 0x385dac: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x385dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_385db0:
    // 0x385db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x385db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385db4:
    // 0x385db4: 0xc0414dc  jal         func_105370
label_385db8:
    if (ctx->pc == 0x385DB8u) {
        ctx->pc = 0x385DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DB4u;
        // 0x385db8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DBCu;
        goto label_385dbc;
    }
    ctx->pc = 0x385DB4u;
    SET_GPR_U32(ctx, 31, 0x385DBCu);
    ctx->pc = 0x385DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385DB4u;
    // 0x385db8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x385DB4u, 0x385DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DBCu;
label_385dbc:
    // 0x385dbc: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x385dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_385dc0:
    // 0x385dc0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x385dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_385dc4:
    // 0x385dc4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385dc8:
    // 0x385dc8: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x385dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_385dcc:
    // 0x385dcc: 0x27b001e8  addiu       $s0, $sp, 0x1E8
    ctx->pc = 0x385dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_385dd0:
    // 0x385dd0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x385dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_385dd4:
    // 0x385dd4: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x385dd4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_385dd8:
    // 0x385dd8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x385dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_385ddc:
    // 0x385ddc: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385de0:
    // 0x385de0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x385de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_385de4:
    // 0x385de4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x385de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_385de8:
    // 0x385de8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x385de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385dec:
    // 0x385dec: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x385decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385df0:
    // 0x385df0: 0xe44300e0  swc1        $f3, 0xE0($v0)
    ctx->pc = 0x385df0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_385df4:
    // 0x385df4: 0xe44200e4  swc1        $f2, 0xE4($v0)
    ctx->pc = 0x385df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_385df8:
    // 0x385df8: 0xe44100e8  swc1        $f1, 0xE8($v0)
    ctx->pc = 0x385df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_385dfc:
    // 0x385dfc: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x385dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_385e00:
    // 0x385e00: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x385e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_385e04:
    // 0x385e04: 0xc047b88  jal         func_11EE20
label_385e08:
    if (ctx->pc == 0x385E08u) {
        ctx->pc = 0x385E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E04u;
        // 0x385e08: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E0Cu;
        goto label_385e0c;
    }
    ctx->pc = 0x385E04u;
    SET_GPR_U32(ctx, 31, 0x385E0Cu);
    ctx->pc = 0x385E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E04u;
    // 0x385e08: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x385E04u, 0x385E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E0Cu;
label_385e0c:
    // 0x385e0c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x385e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_385e10:
    // 0x385e10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x385e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_385e14:
    // 0x385e14: 0xc04b946  jal         func_12E518
label_385e18:
    if (ctx->pc == 0x385E18u) {
        ctx->pc = 0x385E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E14u;
        // 0x385e18: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E1Cu;
        goto label_385e1c;
    }
    ctx->pc = 0x385E14u;
    SET_GPR_U32(ctx, 31, 0x385E1Cu);
    ctx->pc = 0x385E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E14u;
    // 0x385e18: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x385E14u, 0x385E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E1Cu;
label_385e1c:
    // 0x385e1c: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x385e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
label_385e20:
    // 0x385e20: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x385e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
label_385e24:
    // 0x385e24: 0x348421fb  ori         $a0, $a0, 0x21FB
    ctx->pc = 0x385e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8699);
label_385e28:
    // 0x385e28: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x385e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
label_385e2c:
    // 0x385e2c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x385e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_385e30:
    // 0x385e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x385e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385e34:
    // 0x385e34: 0xc04bafa  jal         func_12EBE8
label_385e38:
    if (ctx->pc == 0x385E38u) {
        ctx->pc = 0x385E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E34u;
        // 0x385e38: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E3Cu;
        goto label_385e3c;
    }
    ctx->pc = 0x385E34u;
    SET_GPR_U32(ctx, 31, 0x385E3Cu);
    ctx->pc = 0x385E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E34u;
    // 0x385e38: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x385E34u, 0x385E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E3Cu;
label_385e3c:
    // 0x385e3c: 0xc04bbce  jal         func_12EF38
label_385e40:
    if (ctx->pc == 0x385E40u) {
        ctx->pc = 0x385E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E3Cu;
        // 0x385e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E44u;
        goto label_385e44;
    }
    ctx->pc = 0x385E3Cu;
    SET_GPR_U32(ctx, 31, 0x385E44u);
    ctx->pc = 0x385E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E3Cu;
    // 0x385e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x385E3Cu, 0x385E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E44u;
label_385e44:
    // 0x385e44: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x385e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_385e48:
    // 0x385e48: 0xa6222acc  sh          $v0, 0x2ACC($s1)
    ctx->pc = 0x385e48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10956), (uint16_t)GPR_U32(ctx, 2));
label_385e4c:
    // 0x385e4c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x385e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_385e50:
    // 0x385e50: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x385e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385e54:
    // 0x385e54: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x385e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385e58:
    // 0x385e58: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x385e58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_385e5c:
    // 0x385e5c: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x385e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_385e60:
    // 0x385e60: 0x46010344  c1          0x10344
    ctx->pc = 0x385e60u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[1]);
label_385e64:
    // 0x385e64: 0x0  nop
    ctx->pc = 0x385e64u;
    // NOP
label_385e68:
    // 0x385e68: 0x0  nop
    ctx->pc = 0x385e68u;
    // NOP
label_385e6c:
    // 0x385e6c: 0xc047b88  jal         func_11EE20
label_385e70:
    if (ctx->pc == 0x385E70u) {
        ctx->pc = 0x385E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E6Cu;
        // 0x385e70: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E74u;
        goto label_385e74;
    }
    ctx->pc = 0x385E6Cu;
    SET_GPR_U32(ctx, 31, 0x385E74u);
    ctx->pc = 0x385E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E6Cu;
    // 0x385e70: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x385E6Cu, 0x385E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E74u;
label_385e74:
    // 0x385e74: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x385e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_385e78:
    // 0x385e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x385e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_385e7c:
    // 0x385e7c: 0xc04b946  jal         func_12E518
label_385e80:
    if (ctx->pc == 0x385E80u) {
        ctx->pc = 0x385E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E7Cu;
        // 0x385e80: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E84u;
        goto label_385e84;
    }
    ctx->pc = 0x385E7Cu;
    SET_GPR_U32(ctx, 31, 0x385E84u);
    ctx->pc = 0x385E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E7Cu;
    // 0x385e80: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x385E7Cu, 0x385E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E84u;
label_385e84:
    // 0x385e84: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x385e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
label_385e88:
    // 0x385e88: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x385e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
label_385e8c:
    // 0x385e8c: 0x348421fb  ori         $a0, $a0, 0x21FB
    ctx->pc = 0x385e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8699);
label_385e90:
    // 0x385e90: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x385e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
label_385e94:
    // 0x385e94: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x385e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_385e98:
    // 0x385e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x385e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385e9c:
    // 0x385e9c: 0xc04bafa  jal         func_12EBE8
label_385ea0:
    if (ctx->pc == 0x385EA0u) {
        ctx->pc = 0x385EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E9Cu;
        // 0x385ea0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EA4u;
        goto label_385ea4;
    }
    ctx->pc = 0x385E9Cu;
    SET_GPR_U32(ctx, 31, 0x385EA4u);
    ctx->pc = 0x385EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E9Cu;
    // 0x385ea0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x385E9Cu, 0x385EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EA4u;
label_385ea4:
    // 0x385ea4: 0xc04bbce  jal         func_12EF38
label_385ea8:
    if (ctx->pc == 0x385EA8u) {
        ctx->pc = 0x385EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EA4u;
        // 0x385ea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EACu;
        goto label_385eac;
    }
    ctx->pc = 0x385EA4u;
    SET_GPR_U32(ctx, 31, 0x385EACu);
    ctx->pc = 0x385EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385EA4u;
    // 0x385ea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x385EA4u, 0x385EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EACu;
label_385eac:
    // 0x385eac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x385eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_385eb0:
    // 0x385eb0: 0xa6222ad0  sh          $v0, 0x2AD0($s1)
    ctx->pc = 0x385eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 2));
label_385eb4:
    // 0x385eb4: 0x92220118  lbu         $v0, 0x118($s1)
    ctx->pc = 0x385eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 280)));
label_385eb8:
    // 0x385eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_385ebc:
    // 0x385ebc: 0xa2220118  sb          $v0, 0x118($s1)
    ctx->pc = 0x385ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 280), (uint8_t)GPR_U32(ctx, 2));
label_385ec0:
    // 0x385ec0: 0x862500c0  lh          $a1, 0xC0($s1)
    ctx->pc = 0x385ec0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
label_385ec4:
    // 0x385ec4: 0x96262ad0  lhu         $a2, 0x2AD0($s1)
    ctx->pc = 0x385ec4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10960)));
label_385ec8:
    // 0x385ec8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x385ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_385ecc:
    // 0x385ecc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x385eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_385ed0:
    // 0x385ed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385ed4:
    // 0x385ed4: 0xc0e2cd4  jal         func_38B350
label_385ed8:
    if (ctx->pc == 0x385ED8u) {
        ctx->pc = 0x385ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385ED4u;
        // 0x385ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EDCu;
        goto label_385edc;
    }
    ctx->pc = 0x385ED4u;
    SET_GPR_U32(ctx, 31, 0x385EDCu);
    ctx->pc = 0x385ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385ED4u;
    // 0x385ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B350u, 0x385ED4u, 0x385EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EDCu;
label_385edc:
    // 0x385edc: 0xa62200c0  sh          $v0, 0xC0($s1)
    ctx->pc = 0x385edcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 2));
label_385ee0:
    // 0x385ee0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x385ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_385ee4:
    // 0x385ee4: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385ee8:
    // 0x385ee8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x385ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_385eec:
    // 0x385eec: 0xc0414d0  jal         func_105340
label_385ef0:
    if (ctx->pc == 0x385EF0u) {
        ctx->pc = 0x385EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EECu;
        // 0x385ef0: 0x244500d0  addiu       $a1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EF4u;
        goto label_385ef4;
    }
    ctx->pc = 0x385EECu;
    SET_GPR_U32(ctx, 31, 0x385EF4u);
    ctx->pc = 0x385EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385EECu;
    // 0x385ef0: 0x244500d0  addiu       $a1, $v0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x385EECu, 0x385EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EF4u;
label_385ef4:
    // 0x385ef4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x385ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_385ef8:
    // 0x385ef8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x385ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_385efc:
    // 0x385efc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385f00:
    // 0x385f00: 0xc07cd2c  jal         func_1F34B0
label_385f04:
    if (ctx->pc == 0x385F04u) {
        ctx->pc = 0x385F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F00u;
        // 0x385f04: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F08u;
        goto label_385f08;
    }
    ctx->pc = 0x385F00u;
    SET_GPR_U32(ctx, 31, 0x385F08u);
    ctx->pc = 0x385F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F00u;
    // 0x385f04: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34B0u, 0x385F00u, 0x385F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F08u;
label_385f08:
    // 0x385f08: 0x96222ace  lhu         $v0, 0x2ACE($s1)
    ctx->pc = 0x385f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10958)));
label_385f0c:
    // 0x385f0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x385f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_385f10:
    // 0x385f10: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x385f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_385f14:
    // 0x385f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x385f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385f18:
    // 0x385f18: 0xc0414dc  jal         func_105370
label_385f1c:
    if (ctx->pc == 0x385F1Cu) {
        ctx->pc = 0x385F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F18u;
        // 0x385f1c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F20u;
        goto label_385f20;
    }
    ctx->pc = 0x385F18u;
    SET_GPR_U32(ctx, 31, 0x385F20u);
    ctx->pc = 0x385F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F18u;
    // 0x385f1c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x385F18u, 0x385F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F20u;
label_385f20:
    // 0x385f20: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x385f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_385f24:
    // 0x385f24: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x385f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_385f28:
    // 0x385f28: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x385f28u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385f2c:
    // 0x385f2c: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x385f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_385f30:
    // 0x385f30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x385f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_385f34:
    // 0x385f34: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x385f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_385f38:
    // 0x385f38: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x385f38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_385f3c:
    // 0x385f3c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x385f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_385f40:
    // 0x385f40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385f44:
    // 0x385f44: 0x70a01628  paddub      $v0, $a1, $zero
    ctx->pc = 0x385f44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_385f48:
    // 0x385f48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x385f48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_385f4c:
    // 0x385f4c: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x385f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385f50:
    // 0x385f50: 0xc0414dc  jal         func_105370
label_385f54:
    if (ctx->pc == 0x385F54u) {
        ctx->pc = 0x385F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F50u;
        // 0x385f54: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F58u;
        goto label_385f58;
    }
    ctx->pc = 0x385F50u;
    SET_GPR_U32(ctx, 31, 0x385F58u);
    ctx->pc = 0x385F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F50u;
    // 0x385f54: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x385F50u, 0x385F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F58u;
label_385f58:
    // 0x385f58: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x385f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_385f5c:
    // 0x385f5c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x385f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_385f60:
    // 0x385f60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385f64:
    // 0x385f64: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x385f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_385f68:
    // 0x385f68: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x385f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_385f6c:
    // 0x385f6c: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x385f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_385f70:
    // 0x385f70: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x385f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_385f74:
    // 0x385f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x385f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385f78:
    // 0x385f78: 0xc0414dc  jal         func_105370
label_385f7c:
    if (ctx->pc == 0x385F7Cu) {
        ctx->pc = 0x385F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F78u;
        // 0x385f7c: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F80u;
        goto label_385f80;
    }
    ctx->pc = 0x385F78u;
    SET_GPR_U32(ctx, 31, 0x385F80u);
    ctx->pc = 0x385F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F78u;
    // 0x385f7c: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x385F78u, 0x385F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F80u;
label_385f80:
    // 0x385f80: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x385f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_385f84:
    // 0x385f84: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x385f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_385f88:
    // 0x385f88: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x385f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385f8c:
    // 0x385f8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x385f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_385f90:
    // 0x385f90: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x385f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_385f94:
    // 0x385f94: 0xc0414ca  jal         func_105328
label_385f98:
    if (ctx->pc == 0x385F98u) {
        ctx->pc = 0x385F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F94u;
        // 0x385f98: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F9Cu;
        goto label_385f9c;
    }
    ctx->pc = 0x385F94u;
    SET_GPR_U32(ctx, 31, 0x385F9Cu);
    ctx->pc = 0x385F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F94u;
    // 0x385f98: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x385F94u, 0x385F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F9Cu;
label_385f9c:
    // 0x385f9c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x385f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_385fa0:
    // 0x385fa0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x385fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_385fa4:
    // 0x385fa4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385fa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385fa8:
    // 0x385fa8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x385fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_385fac:
    // 0x385fac: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x385facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_385fb0:
    // 0x385fb0: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x385fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385fb4:
    // 0x385fb4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x385fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_385fb8:
    // 0x385fb8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x385fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_385fbc:
    // 0x385fbc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x385fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385fc0:
    // 0x385fc0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x385fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385fc4:
    // 0x385fc4: 0xe46300f0  swc1        $f3, 0xF0($v1)
    ctx->pc = 0x385fc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
label_385fc8:
    // 0x385fc8: 0xe46200f4  swc1        $f2, 0xF4($v1)
    ctx->pc = 0x385fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
label_385fcc:
    // 0x385fcc: 0xe46100f8  swc1        $f1, 0xF8($v1)
    ctx->pc = 0x385fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
label_385fd0:
    // 0x385fd0: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x385fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
label_385fd4:
    // 0x385fd4: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x385fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_385fd8:
    // 0x385fd8: 0x863000c2  lh          $s0, 0xC2($s1)
    ctx->pc = 0x385fd8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_385fdc:
    // 0x385fdc: 0xc46300f0  lwc1        $f3, 0xF0($v1)
    ctx->pc = 0x385fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_385fe0:
    // 0x385fe0: 0xc46200f4  lwc1        $f2, 0xF4($v1)
    ctx->pc = 0x385fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_385fe4:
    // 0x385fe4: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x385fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_385fe8:
    // 0x385fe8: 0xc46000fc  lwc1        $f0, 0xFC($v1)
    ctx->pc = 0x385fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385fec:
    // 0x385fec: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x385fecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_385ff0:
    // 0x385ff0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x385ff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_385ff4:
    // 0x385ff4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x385ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_385ff8:
    // 0x385ff8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x385ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_385ffc:
    // 0x385ffc: 0xc7ad01c8  lwc1        $f13, 0x1C8($sp)
    ctx->pc = 0x385ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_386000:
    // 0x386000: 0xc047b88  jal         func_11EE20
label_386004:
    if (ctx->pc == 0x386004u) {
        ctx->pc = 0x386004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386000u;
        // 0x386004: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x386008u;
        goto label_386008;
    }
    ctx->pc = 0x386000u;
    SET_GPR_U32(ctx, 31, 0x386008u);
    ctx->pc = 0x386004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386000u;
    // 0x386004: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x386000u, 0x386008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386008u;
label_386008:
    // 0x386008: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x386008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_38600c:
    // 0x38600c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x38600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_386010:
    // 0x386010: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x386010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_386014:
    // 0x386014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x386014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_386018:
    // 0x386018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x386018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38601c:
    // 0x38601c: 0x0  nop
    ctx->pc = 0x38601cu;
    // NOP
label_386020:
    // 0x386020: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x386020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_386024:
    // 0x386024: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x386024u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_386028:
    // 0x386028: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x386028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38602c:
    // 0x38602c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38602cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_386030:
    // 0x386030: 0x0  nop
    ctx->pc = 0x386030u;
    // NOP
label_386034:
    // 0x386034: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x386034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_386038:
    // 0x386038: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x386038u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38603c:
    // 0x38603c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x38603cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_386040:
    // 0x386040: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x386040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_386044:
    // 0x386044: 0xc0967cc  jal         func_259F30
label_386048:
    if (ctx->pc == 0x386048u) {
        ctx->pc = 0x386048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386044u;
        // 0x386048: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38604Cu;
        goto label_38604c;
    }
    ctx->pc = 0x386044u;
    SET_GPR_U32(ctx, 31, 0x38604Cu);
    ctx->pc = 0x386048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386044u;
    // 0x386048: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x386044u, 0x38604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38604Cu;
label_38604c:
    // 0x38604c: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x38604cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
label_386050:
    // 0x386050: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x386050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_386054:
    // 0x386054: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x386054u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_386058:
    // 0x386058: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x386058u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_38605c:
    // 0x38605c: 0x9223011b  lbu         $v1, 0x11B($s1)
    ctx->pc = 0x38605cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 283)));
label_386060:
    // 0x386060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_386064:
    // 0x386064: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_386068:
    if (ctx->pc == 0x386068u) {
        ctx->pc = 0x386068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386064u;
        // 0x386068: 0xa42023  subu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38606Cu;
        goto label_38606c;
    }
    ctx->pc = 0x386064u;
    {
        const bool branch_taken_0x386064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x386068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386064u;
        // 0x386068: 0xa42023  subu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386064) {
            ctx->pc = 0x386108u;
            goto label_386108;
        }
    }
    ctx->pc = 0x38606Cu;
label_38606c:
    // 0x38606c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386070:
    // 0x386070: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_386074:
    if (ctx->pc == 0x386074u) {
        ctx->pc = 0x386078u;
        goto label_386078;
    }
    ctx->pc = 0x386070u;
    {
        const bool branch_taken_0x386070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x386070) {
            ctx->pc = 0x3860E8u;
            goto label_3860e8;
        }
    }
    ctx->pc = 0x386078u;
label_386078:
    // 0x386078: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_38607c:
    if (ctx->pc == 0x38607Cu) {
        ctx->pc = 0x386080u;
        goto label_386080;
    }
    ctx->pc = 0x386078u;
    {
        const bool branch_taken_0x386078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x386078) {
            ctx->pc = 0x386088u;
            goto label_386088;
        }
    }
    ctx->pc = 0x386080u;
label_386080:
    // 0x386080: 0x10000029  b           . + 4 + (0x29 << 2)
label_386084:
    if (ctx->pc == 0x386084u) {
        ctx->pc = 0x386088u;
        goto label_386088;
    }
    ctx->pc = 0x386080u;
    {
        const bool branch_taken_0x386080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386080) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x386088u;
label_386088:
    // 0x386088: 0x9223011a  lbu         $v1, 0x11A($s1)
    ctx->pc = 0x386088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 282)));
label_38608c:
    // 0x38608c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x38608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_386090:
    // 0x386090: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_386094:
    if (ctx->pc == 0x386094u) {
        ctx->pc = 0x386094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386090u;
        // 0x386094: 0x28810003  slti        $at, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x386098u;
        goto label_386098;
    }
    ctx->pc = 0x386090u;
    {
        const bool branch_taken_0x386090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386090u;
        // 0x386094: 0x28810003  slti        $at, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x386090) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x386098u;
label_386098:
    // 0x386098: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_38609c:
    if (ctx->pc == 0x38609Cu) {
        ctx->pc = 0x3860A0u;
        goto label_3860a0;
    }
    ctx->pc = 0x386098u;
    {
        const bool branch_taken_0x386098 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x386098) {
            ctx->pc = 0x3860C0u;
            goto label_3860c0;
        }
    }
    ctx->pc = 0x3860A0u;
label_3860a0:
    // 0x3860a0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3860a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3860a4:
    // 0x3860a4: 0x24051424  addiu       $a1, $zero, 0x1424
    ctx->pc = 0x3860a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5156));
label_3860a8:
    // 0x3860a8: 0xc0d165c  jal         func_345970
label_3860ac:
    if (ctx->pc == 0x3860ACu) {
        ctx->pc = 0x3860ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860A8u;
        // 0x3860ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860B0u;
        goto label_3860b0;
    }
    ctx->pc = 0x3860A8u;
    SET_GPR_U32(ctx, 31, 0x3860B0u);
    ctx->pc = 0x3860ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3860A8u;
    // 0x3860ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x3860A8u, 0x3860B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3860B0u;
label_3860b0:
    // 0x3860b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3860b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3860b4:
    // 0x3860b4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3860b8:
    if (ctx->pc == 0x3860B8u) {
        ctx->pc = 0x3860B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860B4u;
        // 0x3860b8: 0xa222011b  sb          $v0, 0x11B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 283), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860BCu;
        goto label_3860bc;
    }
    ctx->pc = 0x3860B4u;
    {
        const bool branch_taken_0x3860b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860B4u;
        // 0x3860b8: 0xa222011b  sb          $v0, 0x11B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 283), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860b4) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x3860BCu;
label_3860bc:
    // 0x3860bc: 0x0  nop
    ctx->pc = 0x3860bcu;
    // NOP
label_3860c0:
    // 0x3860c0: 0x2881fffe  slti        $at, $a0, -0x2
    ctx->pc = 0x3860c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
label_3860c4:
    // 0x3860c4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_3860c8:
    if (ctx->pc == 0x3860C8u) {
        ctx->pc = 0x3860CCu;
        goto label_3860cc;
    }
    ctx->pc = 0x3860C4u;
    {
        const bool branch_taken_0x3860c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3860c4) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x3860CCu;
label_3860cc:
    // 0x3860cc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3860ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3860d0:
    // 0x3860d0: 0x24051425  addiu       $a1, $zero, 0x1425
    ctx->pc = 0x3860d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5157));
label_3860d4:
    // 0x3860d4: 0xc0d165c  jal         func_345970
label_3860d8:
    if (ctx->pc == 0x3860D8u) {
        ctx->pc = 0x3860D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860D4u;
        // 0x3860d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860DCu;
        goto label_3860dc;
    }
    ctx->pc = 0x3860D4u;
    SET_GPR_U32(ctx, 31, 0x3860DCu);
    ctx->pc = 0x3860D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3860D4u;
    // 0x3860d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x3860D4u, 0x3860DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3860DCu;
label_3860dc:
    // 0x3860dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3860dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3860e0:
    // 0x3860e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3860e4:
    if (ctx->pc == 0x3860E4u) {
        ctx->pc = 0x3860E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860E0u;
        // 0x3860e4: 0xa222011b  sb          $v0, 0x11B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 283), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860E8u;
        goto label_3860e8;
    }
    ctx->pc = 0x3860E0u;
    {
        const bool branch_taken_0x3860e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860E0u;
        // 0x3860e4: 0xa222011b  sb          $v0, 0x11B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 283), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860e0) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x3860E8u;
label_3860e8:
    // 0x3860e8: 0x1c80000f  bgtz        $a0, . + 4 + (0xF << 2)
label_3860ec:
    if (ctx->pc == 0x3860ECu) {
        ctx->pc = 0x3860F0u;
        goto label_3860f0;
    }
    ctx->pc = 0x3860E8u;
    {
        const bool branch_taken_0x3860e8 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x3860e8) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x3860F0u;
label_3860f0:
    // 0x3860f0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3860f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3860f4:
    // 0x3860f4: 0x24051e22  addiu       $a1, $zero, 0x1E22
    ctx->pc = 0x3860f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7714));
label_3860f8:
    // 0x3860f8: 0xc0d165c  jal         func_345970
label_3860fc:
    if (ctx->pc == 0x3860FCu) {
        ctx->pc = 0x3860FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860F8u;
        // 0x3860fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386100u;
        goto label_386100;
    }
    ctx->pc = 0x3860F8u;
    SET_GPR_U32(ctx, 31, 0x386100u);
    ctx->pc = 0x3860FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3860F8u;
    // 0x3860fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x3860F8u, 0x386100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386100u;
label_386100:
    // 0x386100: 0x10000009  b           . + 4 + (0x9 << 2)
label_386104:
    if (ctx->pc == 0x386104u) {
        ctx->pc = 0x386104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386100u;
        // 0x386104: 0xa220011b  sb          $zero, 0x11B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 283), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386108u;
        goto label_386108;
    }
    ctx->pc = 0x386100u;
    {
        const bool branch_taken_0x386100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386100u;
        // 0x386104: 0xa220011b  sb          $zero, 0x11B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 283), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386100) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x386108u;
label_386108:
    // 0x386108: 0x28810000  slti        $at, $a0, 0x0
    ctx->pc = 0x386108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_38610c:
    // 0x38610c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_386110:
    if (ctx->pc == 0x386110u) {
        ctx->pc = 0x386114u;
        goto label_386114;
    }
    ctx->pc = 0x38610Cu;
    {
        const bool branch_taken_0x38610c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38610c) {
            ctx->pc = 0x386128u;
            goto label_386128;
        }
    }
    ctx->pc = 0x386114u;
label_386114:
    // 0x386114: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x386114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_386118:
    // 0x386118: 0x24051e22  addiu       $a1, $zero, 0x1E22
    ctx->pc = 0x386118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7714));
label_38611c:
    // 0x38611c: 0xc0d165c  jal         func_345970
label_386120:
    if (ctx->pc == 0x386120u) {
        ctx->pc = 0x386120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38611Cu;
        // 0x386120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386124u;
        goto label_386124;
    }
    ctx->pc = 0x38611Cu;
    SET_GPR_U32(ctx, 31, 0x386124u);
    ctx->pc = 0x386120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38611Cu;
    // 0x386120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38611Cu, 0x386124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386124u;
label_386124:
    // 0x386124: 0xa220011b  sb          $zero, 0x11B($s1)
    ctx->pc = 0x386124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 283), (uint8_t)GPR_U32(ctx, 0));
label_386128:
    // 0x386128: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x386128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_38612c:
    // 0x38612c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_386130:
    // 0x386130: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x386130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_386134:
    // 0x386134: 0xc0414ca  jal         func_105328
label_386138:
    if (ctx->pc == 0x386138u) {
        ctx->pc = 0x386138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386134u;
        // 0x386138: 0x244600f0  addiu       $a2, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38613Cu;
        goto label_38613c;
    }
    ctx->pc = 0x386134u;
    SET_GPR_U32(ctx, 31, 0x38613Cu);
    ctx->pc = 0x386138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386134u;
    // 0x386138: 0x244600f0  addiu       $a2, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x386134u, 0x38613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38613Cu;
label_38613c:
    // 0x38613c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x38613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_386140:
    // 0x386140: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x386140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_386144:
    // 0x386144: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x386144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_386148:
    // 0x386148: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x386148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_38614c:
    // 0x38614c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x38614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_386150:
    // 0x386150: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x386150u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_386154:
    // 0x386154: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x386154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_386158:
    // 0x386158: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x386158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38615c:
    // 0x38615c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x38615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_386160:
    // 0x386160: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x386160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_386164:
    // 0x386164: 0xe6230020  swc1        $f3, 0x20($s1)
    ctx->pc = 0x386164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_386168:
    // 0x386168: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x386168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_38616c:
    // 0x38616c: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x38616cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_386170:
    // 0x386170: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x386170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_386174:
    // 0x386174: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x386174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
label_386178:
    // 0x386178: 0xc0414d0  jal         func_105340
label_38617c:
    if (ctx->pc == 0x38617Cu) {
        ctx->pc = 0x38617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386178u;
        // 0x38617c: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386180u;
        goto label_386180;
    }
    ctx->pc = 0x386178u;
    SET_GPR_U32(ctx, 31, 0x386180u);
    ctx->pc = 0x38617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386178u;
    // 0x38617c: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x386178u, 0x386180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386180u;
label_386180:
    // 0x386180: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x386180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_386184:
    // 0x386184: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x386184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_386188:
    // 0x386188: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x386188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38618c:
    // 0x38618c: 0xc07cd3c  jal         func_1F34F0
label_386190:
    if (ctx->pc == 0x386190u) {
        ctx->pc = 0x386190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38618Cu;
        // 0x386190: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386194u;
        goto label_386194;
    }
    ctx->pc = 0x38618Cu;
    SET_GPR_U32(ctx, 31, 0x386194u);
    ctx->pc = 0x386190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38618Cu;
    // 0x386190: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34F0u, 0x38618Cu, 0x386194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386194u;
label_386194:
    // 0x386194: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x386194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_386198:
    // 0x386198: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x386198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38619c:
    // 0x38619c: 0x0  nop
    ctx->pc = 0x38619cu;
    // NOP
label_3861a0:
    // 0x3861a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3861a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3861a4:
    // 0x3861a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_3861a8:
    if (ctx->pc == 0x3861A8u) {
        ctx->pc = 0x3861ACu;
        goto label_3861ac;
    }
    ctx->pc = 0x3861A4u;
    {
        const bool branch_taken_0x3861a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3861a4) {
            ctx->pc = 0x3861D0u;
            goto label_3861d0;
        }
    }
    ctx->pc = 0x3861ACu;
label_3861ac:
    // 0x3861ac: 0x92240119  lbu         $a0, 0x119($s1)
    ctx->pc = 0x3861acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 281)));
label_3861b0:
    // 0x3861b0: 0x96232ad4  lhu         $v1, 0x2AD4($s1)
    ctx->pc = 0x3861b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10964)));
label_3861b4:
    // 0x3861b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3861b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3861b8:
    // 0x3861b8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3861b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3861bc:
    // 0x3861bc: 0x0  nop
    ctx->pc = 0x3861bcu;
    // NOP
label_3861c0:
    // 0x3861c0: 0x0  nop
    ctx->pc = 0x3861c0u;
    // NOP
label_3861c4:
    // 0x3861c4: 0x1810  mfhi        $v1
    ctx->pc = 0x3861c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3861c8:
    // 0x3861c8: 0xa2230119  sb          $v1, 0x119($s1)
    ctx->pc = 0x3861c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 281), (uint8_t)GPR_U32(ctx, 3));
label_3861cc:
    // 0x3861cc: 0xa2200118  sb          $zero, 0x118($s1)
    ctx->pc = 0x3861ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 280), (uint8_t)GPR_U32(ctx, 0));
label_3861d0:
    // 0x3861d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3861d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3861d4:
    // 0x3861d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3861d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3861d8:
    // 0x3861d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3861d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3861dc:
    // 0x3861dc: 0x3e00008  jr          $ra
label_3861e0:
    if (ctx->pc == 0x3861E0u) {
        ctx->pc = 0x3861E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861DCu;
        // 0x3861e0: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861E4u;
        goto label_fallthrough_0x3861dc;
    }
    ctx->pc = 0x3861DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3861E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861DCu;
        // 0x3861e0: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3861DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3861dc:
    ctx->pc = 0x3861E4u;
}
