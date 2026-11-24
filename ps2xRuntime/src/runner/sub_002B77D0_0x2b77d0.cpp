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

// Function: sub_002B77D0
// Address: 0x2b77d0 - 0x2b7d0c
void sub_002B77D0_0x2b77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B77D0_0x2b77d0");
#endif

    switch (ctx->pc) {
        case 0x2b77d0u: goto label_2b77d0;
        case 0x2b77d4u: goto label_2b77d4;
        case 0x2b77d8u: goto label_2b77d8;
        case 0x2b77dcu: goto label_2b77dc;
        case 0x2b77e0u: goto label_2b77e0;
        case 0x2b77e4u: goto label_2b77e4;
        case 0x2b77e8u: goto label_2b77e8;
        case 0x2b77ecu: goto label_2b77ec;
        case 0x2b77f0u: goto label_2b77f0;
        case 0x2b77f4u: goto label_2b77f4;
        case 0x2b77f8u: goto label_2b77f8;
        case 0x2b77fcu: goto label_2b77fc;
        case 0x2b7800u: goto label_2b7800;
        case 0x2b7804u: goto label_2b7804;
        case 0x2b7808u: goto label_2b7808;
        case 0x2b780cu: goto label_2b780c;
        case 0x2b7810u: goto label_2b7810;
        case 0x2b7814u: goto label_2b7814;
        case 0x2b7818u: goto label_2b7818;
        case 0x2b781cu: goto label_2b781c;
        case 0x2b7820u: goto label_2b7820;
        case 0x2b7824u: goto label_2b7824;
        case 0x2b7828u: goto label_2b7828;
        case 0x2b782cu: goto label_2b782c;
        case 0x2b7830u: goto label_2b7830;
        case 0x2b7834u: goto label_2b7834;
        case 0x2b7838u: goto label_2b7838;
        case 0x2b783cu: goto label_2b783c;
        case 0x2b7840u: goto label_2b7840;
        case 0x2b7844u: goto label_2b7844;
        case 0x2b7848u: goto label_2b7848;
        case 0x2b784cu: goto label_2b784c;
        case 0x2b7850u: goto label_2b7850;
        case 0x2b7854u: goto label_2b7854;
        case 0x2b7858u: goto label_2b7858;
        case 0x2b785cu: goto label_2b785c;
        case 0x2b7860u: goto label_2b7860;
        case 0x2b7864u: goto label_2b7864;
        case 0x2b7868u: goto label_2b7868;
        case 0x2b786cu: goto label_2b786c;
        case 0x2b7870u: goto label_2b7870;
        case 0x2b7874u: goto label_2b7874;
        case 0x2b7878u: goto label_2b7878;
        case 0x2b787cu: goto label_2b787c;
        case 0x2b7880u: goto label_2b7880;
        case 0x2b7884u: goto label_2b7884;
        case 0x2b7888u: goto label_2b7888;
        case 0x2b788cu: goto label_2b788c;
        case 0x2b7890u: goto label_2b7890;
        case 0x2b7894u: goto label_2b7894;
        case 0x2b7898u: goto label_2b7898;
        case 0x2b789cu: goto label_2b789c;
        case 0x2b78a0u: goto label_2b78a0;
        case 0x2b78a4u: goto label_2b78a4;
        case 0x2b78a8u: goto label_2b78a8;
        case 0x2b78acu: goto label_2b78ac;
        case 0x2b78b0u: goto label_2b78b0;
        case 0x2b78b4u: goto label_2b78b4;
        case 0x2b78b8u: goto label_2b78b8;
        case 0x2b78bcu: goto label_2b78bc;
        case 0x2b78c0u: goto label_2b78c0;
        case 0x2b78c4u: goto label_2b78c4;
        case 0x2b78c8u: goto label_2b78c8;
        case 0x2b78ccu: goto label_2b78cc;
        case 0x2b78d0u: goto label_2b78d0;
        case 0x2b78d4u: goto label_2b78d4;
        case 0x2b78d8u: goto label_2b78d8;
        case 0x2b78dcu: goto label_2b78dc;
        case 0x2b78e0u: goto label_2b78e0;
        case 0x2b78e4u: goto label_2b78e4;
        case 0x2b78e8u: goto label_2b78e8;
        case 0x2b78ecu: goto label_2b78ec;
        case 0x2b78f0u: goto label_2b78f0;
        case 0x2b78f4u: goto label_2b78f4;
        case 0x2b78f8u: goto label_2b78f8;
        case 0x2b78fcu: goto label_2b78fc;
        case 0x2b7900u: goto label_2b7900;
        case 0x2b7904u: goto label_2b7904;
        case 0x2b7908u: goto label_2b7908;
        case 0x2b790cu: goto label_2b790c;
        case 0x2b7910u: goto label_2b7910;
        case 0x2b7914u: goto label_2b7914;
        case 0x2b7918u: goto label_2b7918;
        case 0x2b791cu: goto label_2b791c;
        case 0x2b7920u: goto label_2b7920;
        case 0x2b7924u: goto label_2b7924;
        case 0x2b7928u: goto label_2b7928;
        case 0x2b792cu: goto label_2b792c;
        case 0x2b7930u: goto label_2b7930;
        case 0x2b7934u: goto label_2b7934;
        case 0x2b7938u: goto label_2b7938;
        case 0x2b793cu: goto label_2b793c;
        case 0x2b7940u: goto label_2b7940;
        case 0x2b7944u: goto label_2b7944;
        case 0x2b7948u: goto label_2b7948;
        case 0x2b794cu: goto label_2b794c;
        case 0x2b7950u: goto label_2b7950;
        case 0x2b7954u: goto label_2b7954;
        case 0x2b7958u: goto label_2b7958;
        case 0x2b795cu: goto label_2b795c;
        case 0x2b7960u: goto label_2b7960;
        case 0x2b7964u: goto label_2b7964;
        case 0x2b7968u: goto label_2b7968;
        case 0x2b796cu: goto label_2b796c;
        case 0x2b7970u: goto label_2b7970;
        case 0x2b7974u: goto label_2b7974;
        case 0x2b7978u: goto label_2b7978;
        case 0x2b797cu: goto label_2b797c;
        case 0x2b7980u: goto label_2b7980;
        case 0x2b7984u: goto label_2b7984;
        case 0x2b7988u: goto label_2b7988;
        case 0x2b798cu: goto label_2b798c;
        case 0x2b7990u: goto label_2b7990;
        case 0x2b7994u: goto label_2b7994;
        case 0x2b7998u: goto label_2b7998;
        case 0x2b799cu: goto label_2b799c;
        case 0x2b79a0u: goto label_2b79a0;
        case 0x2b79a4u: goto label_2b79a4;
        case 0x2b79a8u: goto label_2b79a8;
        case 0x2b79acu: goto label_2b79ac;
        case 0x2b79b0u: goto label_2b79b0;
        case 0x2b79b4u: goto label_2b79b4;
        case 0x2b79b8u: goto label_2b79b8;
        case 0x2b79bcu: goto label_2b79bc;
        case 0x2b79c0u: goto label_2b79c0;
        case 0x2b79c4u: goto label_2b79c4;
        case 0x2b79c8u: goto label_2b79c8;
        case 0x2b79ccu: goto label_2b79cc;
        case 0x2b79d0u: goto label_2b79d0;
        case 0x2b79d4u: goto label_2b79d4;
        case 0x2b79d8u: goto label_2b79d8;
        case 0x2b79dcu: goto label_2b79dc;
        case 0x2b79e0u: goto label_2b79e0;
        case 0x2b79e4u: goto label_2b79e4;
        case 0x2b79e8u: goto label_2b79e8;
        case 0x2b79ecu: goto label_2b79ec;
        case 0x2b79f0u: goto label_2b79f0;
        case 0x2b79f4u: goto label_2b79f4;
        case 0x2b79f8u: goto label_2b79f8;
        case 0x2b79fcu: goto label_2b79fc;
        case 0x2b7a00u: goto label_2b7a00;
        case 0x2b7a04u: goto label_2b7a04;
        case 0x2b7a08u: goto label_2b7a08;
        case 0x2b7a0cu: goto label_2b7a0c;
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a14u: goto label_2b7a14;
        case 0x2b7a18u: goto label_2b7a18;
        case 0x2b7a1cu: goto label_2b7a1c;
        case 0x2b7a20u: goto label_2b7a20;
        case 0x2b7a24u: goto label_2b7a24;
        case 0x2b7a28u: goto label_2b7a28;
        case 0x2b7a2cu: goto label_2b7a2c;
        case 0x2b7a30u: goto label_2b7a30;
        case 0x2b7a34u: goto label_2b7a34;
        case 0x2b7a38u: goto label_2b7a38;
        case 0x2b7a3cu: goto label_2b7a3c;
        case 0x2b7a40u: goto label_2b7a40;
        case 0x2b7a44u: goto label_2b7a44;
        case 0x2b7a48u: goto label_2b7a48;
        case 0x2b7a4cu: goto label_2b7a4c;
        case 0x2b7a50u: goto label_2b7a50;
        case 0x2b7a54u: goto label_2b7a54;
        case 0x2b7a58u: goto label_2b7a58;
        case 0x2b7a5cu: goto label_2b7a5c;
        case 0x2b7a60u: goto label_2b7a60;
        case 0x2b7a64u: goto label_2b7a64;
        case 0x2b7a68u: goto label_2b7a68;
        case 0x2b7a6cu: goto label_2b7a6c;
        case 0x2b7a70u: goto label_2b7a70;
        case 0x2b7a74u: goto label_2b7a74;
        case 0x2b7a78u: goto label_2b7a78;
        case 0x2b7a7cu: goto label_2b7a7c;
        case 0x2b7a80u: goto label_2b7a80;
        case 0x2b7a84u: goto label_2b7a84;
        case 0x2b7a88u: goto label_2b7a88;
        case 0x2b7a8cu: goto label_2b7a8c;
        case 0x2b7a90u: goto label_2b7a90;
        case 0x2b7a94u: goto label_2b7a94;
        case 0x2b7a98u: goto label_2b7a98;
        case 0x2b7a9cu: goto label_2b7a9c;
        case 0x2b7aa0u: goto label_2b7aa0;
        case 0x2b7aa4u: goto label_2b7aa4;
        case 0x2b7aa8u: goto label_2b7aa8;
        case 0x2b7aacu: goto label_2b7aac;
        case 0x2b7ab0u: goto label_2b7ab0;
        case 0x2b7ab4u: goto label_2b7ab4;
        case 0x2b7ab8u: goto label_2b7ab8;
        case 0x2b7abcu: goto label_2b7abc;
        case 0x2b7ac0u: goto label_2b7ac0;
        case 0x2b7ac4u: goto label_2b7ac4;
        case 0x2b7ac8u: goto label_2b7ac8;
        case 0x2b7accu: goto label_2b7acc;
        case 0x2b7ad0u: goto label_2b7ad0;
        case 0x2b7ad4u: goto label_2b7ad4;
        case 0x2b7ad8u: goto label_2b7ad8;
        case 0x2b7adcu: goto label_2b7adc;
        case 0x2b7ae0u: goto label_2b7ae0;
        case 0x2b7ae4u: goto label_2b7ae4;
        case 0x2b7ae8u: goto label_2b7ae8;
        case 0x2b7aecu: goto label_2b7aec;
        case 0x2b7af0u: goto label_2b7af0;
        case 0x2b7af4u: goto label_2b7af4;
        case 0x2b7af8u: goto label_2b7af8;
        case 0x2b7afcu: goto label_2b7afc;
        case 0x2b7b00u: goto label_2b7b00;
        case 0x2b7b04u: goto label_2b7b04;
        case 0x2b7b08u: goto label_2b7b08;
        case 0x2b7b0cu: goto label_2b7b0c;
        case 0x2b7b10u: goto label_2b7b10;
        case 0x2b7b14u: goto label_2b7b14;
        case 0x2b7b18u: goto label_2b7b18;
        case 0x2b7b1cu: goto label_2b7b1c;
        case 0x2b7b20u: goto label_2b7b20;
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b28u: goto label_2b7b28;
        case 0x2b7b2cu: goto label_2b7b2c;
        case 0x2b7b30u: goto label_2b7b30;
        case 0x2b7b34u: goto label_2b7b34;
        case 0x2b7b38u: goto label_2b7b38;
        case 0x2b7b3cu: goto label_2b7b3c;
        case 0x2b7b40u: goto label_2b7b40;
        case 0x2b7b44u: goto label_2b7b44;
        case 0x2b7b48u: goto label_2b7b48;
        case 0x2b7b4cu: goto label_2b7b4c;
        case 0x2b7b50u: goto label_2b7b50;
        case 0x2b7b54u: goto label_2b7b54;
        case 0x2b7b58u: goto label_2b7b58;
        case 0x2b7b5cu: goto label_2b7b5c;
        case 0x2b7b60u: goto label_2b7b60;
        case 0x2b7b64u: goto label_2b7b64;
        case 0x2b7b68u: goto label_2b7b68;
        case 0x2b7b6cu: goto label_2b7b6c;
        case 0x2b7b70u: goto label_2b7b70;
        case 0x2b7b74u: goto label_2b7b74;
        case 0x2b7b78u: goto label_2b7b78;
        case 0x2b7b7cu: goto label_2b7b7c;
        case 0x2b7b80u: goto label_2b7b80;
        case 0x2b7b84u: goto label_2b7b84;
        case 0x2b7b88u: goto label_2b7b88;
        case 0x2b7b8cu: goto label_2b7b8c;
        case 0x2b7b90u: goto label_2b7b90;
        case 0x2b7b94u: goto label_2b7b94;
        case 0x2b7b98u: goto label_2b7b98;
        case 0x2b7b9cu: goto label_2b7b9c;
        case 0x2b7ba0u: goto label_2b7ba0;
        case 0x2b7ba4u: goto label_2b7ba4;
        case 0x2b7ba8u: goto label_2b7ba8;
        case 0x2b7bacu: goto label_2b7bac;
        case 0x2b7bb0u: goto label_2b7bb0;
        case 0x2b7bb4u: goto label_2b7bb4;
        case 0x2b7bb8u: goto label_2b7bb8;
        case 0x2b7bbcu: goto label_2b7bbc;
        case 0x2b7bc0u: goto label_2b7bc0;
        case 0x2b7bc4u: goto label_2b7bc4;
        case 0x2b7bc8u: goto label_2b7bc8;
        case 0x2b7bccu: goto label_2b7bcc;
        case 0x2b7bd0u: goto label_2b7bd0;
        case 0x2b7bd4u: goto label_2b7bd4;
        case 0x2b7bd8u: goto label_2b7bd8;
        case 0x2b7bdcu: goto label_2b7bdc;
        case 0x2b7be0u: goto label_2b7be0;
        case 0x2b7be4u: goto label_2b7be4;
        case 0x2b7be8u: goto label_2b7be8;
        case 0x2b7becu: goto label_2b7bec;
        case 0x2b7bf0u: goto label_2b7bf0;
        case 0x2b7bf4u: goto label_2b7bf4;
        case 0x2b7bf8u: goto label_2b7bf8;
        case 0x2b7bfcu: goto label_2b7bfc;
        case 0x2b7c00u: goto label_2b7c00;
        case 0x2b7c04u: goto label_2b7c04;
        case 0x2b7c08u: goto label_2b7c08;
        case 0x2b7c0cu: goto label_2b7c0c;
        case 0x2b7c10u: goto label_2b7c10;
        case 0x2b7c14u: goto label_2b7c14;
        case 0x2b7c18u: goto label_2b7c18;
        case 0x2b7c1cu: goto label_2b7c1c;
        case 0x2b7c20u: goto label_2b7c20;
        case 0x2b7c24u: goto label_2b7c24;
        case 0x2b7c28u: goto label_2b7c28;
        case 0x2b7c2cu: goto label_2b7c2c;
        case 0x2b7c30u: goto label_2b7c30;
        case 0x2b7c34u: goto label_2b7c34;
        case 0x2b7c38u: goto label_2b7c38;
        case 0x2b7c3cu: goto label_2b7c3c;
        case 0x2b7c40u: goto label_2b7c40;
        case 0x2b7c44u: goto label_2b7c44;
        case 0x2b7c48u: goto label_2b7c48;
        case 0x2b7c4cu: goto label_2b7c4c;
        case 0x2b7c50u: goto label_2b7c50;
        case 0x2b7c54u: goto label_2b7c54;
        case 0x2b7c58u: goto label_2b7c58;
        case 0x2b7c5cu: goto label_2b7c5c;
        case 0x2b7c60u: goto label_2b7c60;
        case 0x2b7c64u: goto label_2b7c64;
        case 0x2b7c68u: goto label_2b7c68;
        case 0x2b7c6cu: goto label_2b7c6c;
        case 0x2b7c70u: goto label_2b7c70;
        case 0x2b7c74u: goto label_2b7c74;
        case 0x2b7c78u: goto label_2b7c78;
        case 0x2b7c7cu: goto label_2b7c7c;
        case 0x2b7c80u: goto label_2b7c80;
        case 0x2b7c84u: goto label_2b7c84;
        case 0x2b7c88u: goto label_2b7c88;
        case 0x2b7c8cu: goto label_2b7c8c;
        case 0x2b7c90u: goto label_2b7c90;
        case 0x2b7c94u: goto label_2b7c94;
        case 0x2b7c98u: goto label_2b7c98;
        case 0x2b7c9cu: goto label_2b7c9c;
        case 0x2b7ca0u: goto label_2b7ca0;
        case 0x2b7ca4u: goto label_2b7ca4;
        case 0x2b7ca8u: goto label_2b7ca8;
        case 0x2b7cacu: goto label_2b7cac;
        case 0x2b7cb0u: goto label_2b7cb0;
        case 0x2b7cb4u: goto label_2b7cb4;
        case 0x2b7cb8u: goto label_2b7cb8;
        case 0x2b7cbcu: goto label_2b7cbc;
        case 0x2b7cc0u: goto label_2b7cc0;
        case 0x2b7cc4u: goto label_2b7cc4;
        case 0x2b7cc8u: goto label_2b7cc8;
        case 0x2b7cccu: goto label_2b7ccc;
        case 0x2b7cd0u: goto label_2b7cd0;
        case 0x2b7cd4u: goto label_2b7cd4;
        case 0x2b7cd8u: goto label_2b7cd8;
        case 0x2b7cdcu: goto label_2b7cdc;
        case 0x2b7ce0u: goto label_2b7ce0;
        case 0x2b7ce4u: goto label_2b7ce4;
        case 0x2b7ce8u: goto label_2b7ce8;
        case 0x2b7cecu: goto label_2b7cec;
        case 0x2b7cf0u: goto label_2b7cf0;
        case 0x2b7cf4u: goto label_2b7cf4;
        case 0x2b7cf8u: goto label_2b7cf8;
        case 0x2b7cfcu: goto label_2b7cfc;
        case 0x2b7d00u: goto label_2b7d00;
        case 0x2b7d04u: goto label_2b7d04;
        case 0x2b7d08u: goto label_2b7d08;
        default: break;
    }

    ctx->pc = 0x2b77d0u;

label_2b77d0:
    // 0x2b77d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b77d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b77d4:
    // 0x2b77d4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2b77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2b77d8:
    // 0x2b77d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b77d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b77dc:
    // 0x2b77dc: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2b77dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2b77e0:
    // 0x2b77e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b77e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b77e4:
    // 0x2b77e4: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x2b77e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
label_2b77e8:
    // 0x2b77e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b77e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b77ec:
    // 0x2b77ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b77ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b77f0:
    // 0x2b77f0: 0x8c8929c0  lw          $t1, 0x29C0($a0)
    ctx->pc = 0x2b77f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_2b77f4:
    // 0x2b77f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b77f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b77f8:
    // 0x2b77f8: 0x8d280024  lw          $t0, 0x24($t1)
    ctx->pc = 0x2b77f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
label_2b77fc:
    // 0x2b77fc: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2b77fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_2b7800:
    // 0x2b7800: 0xad260024  sw          $a2, 0x24($t1)
    ctx->pc = 0x2b7800u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 6));
label_2b7804:
    // 0x2b7804: 0x8c8606c8  lw          $a2, 0x6C8($a0)
    ctx->pc = 0x2b7804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_2b7808:
    // 0x2b7808: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2b7808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2b780c:
    // 0x2b780c: 0xac8606c8  sw          $a2, 0x6C8($a0)
    ctx->pc = 0x2b780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 6));
label_2b7810:
    // 0x2b7810: 0x8c8606cc  lw          $a2, 0x6CC($a0)
    ctx->pc = 0x2b7810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_2b7814:
    // 0x2b7814: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2b7814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2b7818:
    // 0x2b7818: 0xac8606cc  sw          $a2, 0x6CC($a0)
    ctx->pc = 0x2b7818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 6));
label_2b781c:
    // 0x2b781c: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x2b781cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2b7820:
    // 0x2b7820: 0x10c30125  beq         $a2, $v1, . + 4 + (0x125 << 2)
label_2b7824:
    if (ctx->pc == 0x2B7824u) {
        ctx->pc = 0x2B7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7820u;
        // 0x2b7824: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7828u;
        goto label_2b7828;
    }
    ctx->pc = 0x2B7820u;
    {
        const bool branch_taken_0x2b7820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7820u;
        // 0x2b7824: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7820) {
            ctx->pc = 0x2B7CB8u;
            goto label_2b7cb8;
        }
    }
    ctx->pc = 0x2B7828u;
label_2b7828:
    // 0x2b7828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b782c:
    // 0x2b782c: 0x10c300e2  beq         $a2, $v1, . + 4 + (0xE2 << 2)
label_2b7830:
    if (ctx->pc == 0x2B7830u) {
        ctx->pc = 0x2B7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B782Cu;
        // 0x2b7830: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7834u;
        goto label_2b7834;
    }
    ctx->pc = 0x2B782Cu;
    {
        const bool branch_taken_0x2b782c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B782Cu;
        // 0x2b7830: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b782c) {
            ctx->pc = 0x2B7BB8u;
            goto label_2b7bb8;
        }
    }
    ctx->pc = 0x2B7834u;
label_2b7834:
    // 0x2b7834: 0x10c300a0  beq         $a2, $v1, . + 4 + (0xA0 << 2)
label_2b7838:
    if (ctx->pc == 0x2B7838u) {
        ctx->pc = 0x2B783Cu;
        goto label_2b783c;
    }
    ctx->pc = 0x2B7834u;
    {
        const bool branch_taken_0x2b7834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b7834) {
            ctx->pc = 0x2B7AB8u;
            goto label_2b7ab8;
        }
    }
    ctx->pc = 0x2B783Cu;
label_2b783c:
    // 0x2b783c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7840:
    // 0x2b7840: 0x10c3007d  beq         $a2, $v1, . + 4 + (0x7D << 2)
label_2b7844:
    if (ctx->pc == 0x2B7844u) {
        ctx->pc = 0x2B7848u;
        goto label_2b7848;
    }
    ctx->pc = 0x2B7840u;
    {
        const bool branch_taken_0x2b7840 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b7840) {
            ctx->pc = 0x2B7A38u;
            goto label_2b7a38;
        }
    }
    ctx->pc = 0x2B7848u;
label_2b7848:
    // 0x2b7848: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2b784c:
    if (ctx->pc == 0x2B784Cu) {
        ctx->pc = 0x2B7850u;
        goto label_2b7850;
    }
    ctx->pc = 0x2B7848u;
    {
        const bool branch_taken_0x2b7848 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7848) {
            ctx->pc = 0x2B7858u;
            goto label_2b7858;
        }
    }
    ctx->pc = 0x2B7850u;
label_2b7850:
    // 0x2b7850: 0x1000011d  b           . + 4 + (0x11D << 2)
label_2b7854:
    if (ctx->pc == 0x2B7854u) {
        ctx->pc = 0x2B7858u;
        goto label_2b7858;
    }
    ctx->pc = 0x2B7850u;
    {
        const bool branch_taken_0x2b7850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7850) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7858u;
label_2b7858:
    // 0x2b7858: 0x8e2629c0  lw          $a2, 0x29C0($s1)
    ctx->pc = 0x2b7858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2b785c:
    // 0x2b785c: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x2b785cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
label_2b7860:
    // 0x2b7860: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2b7860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
label_2b7864:
    // 0x2b7864: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x2b7864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
label_2b7868:
    // 0x2b7868: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x2b7868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_2b786c:
    // 0x2b786c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b7870:
    // 0x2b7870: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x2b7870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_2b7874:
    // 0x2b7874: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_2b7878:
    if (ctx->pc == 0x2B7878u) {
        ctx->pc = 0x2B787Cu;
        goto label_2b787c;
    }
    ctx->pc = 0x2B7874u;
    {
        const bool branch_taken_0x2b7874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7874) {
            ctx->pc = 0x2B7980u;
            goto label_2b7980;
        }
    }
    ctx->pc = 0x2B787Cu;
label_2b787c:
    // 0x2b787c: 0xc46200a8  lwc1        $f2, 0xA8($v1)
    ctx->pc = 0x2b787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b7880:
    // 0x2b7880: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2b7880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_2b7884:
    // 0x2b7884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b7888:
    // 0x2b7888: 0x0  nop
    ctx->pc = 0x2b7888u;
    // NOP
label_2b788c:
    // 0x2b788c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b788cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b7890:
    // 0x2b7890: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2b7894:
    // 0x2b7894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7898:
    // 0x2b7898: 0x0  nop
    ctx->pc = 0x2b7898u;
    // NOP
label_2b789c:
    // 0x2b789c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b789cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b78a0:
    // 0x2b78a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b78a4:
    if (ctx->pc == 0x2B78A4u) {
        ctx->pc = 0x2B78A8u;
        goto label_2b78a8;
    }
    ctx->pc = 0x2B78A0u;
    {
        const bool branch_taken_0x2b78a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b78a0) {
            ctx->pc = 0x2B78B8u;
            goto label_2b78b8;
        }
    }
    ctx->pc = 0x2B78A8u;
label_2b78a8:
    // 0x2b78a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b78a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b78ac:
    // 0x2b78ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b78acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b78b0:
    // 0x2b78b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b78b4:
    if (ctx->pc == 0x2B78B4u) {
        ctx->pc = 0x2B78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78B0u;
        // 0x2b78b4: 0x3c034420  lui         $v1, 0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B78B8u;
        goto label_2b78b8;
    }
    ctx->pc = 0x2B78B0u;
    {
        const bool branch_taken_0x2b78b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78B0u;
        // 0x2b78b4: 0x3c034420  lui         $v1, 0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78b0) {
            ctx->pc = 0x2B78D4u;
            goto label_2b78d4;
        }
    }
    ctx->pc = 0x2B78B8u;
label_2b78b8:
    // 0x2b78b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b78b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b78bc:
    // 0x2b78bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b78c0:
    // 0x2b78c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b78c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b78c4:
    // 0x2b78c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b78c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b78c8:
    // 0x2b78c8: 0x0  nop
    ctx->pc = 0x2b78c8u;
    // NOP
label_2b78cc:
    // 0x2b78cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b78ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b78d0:
    // 0x2b78d0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x2b78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_2b78d4:
    // 0x2b78d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b78d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b78d8:
    // 0x2b78d8: 0x0  nop
    ctx->pc = 0x2b78d8u;
    // NOP
label_2b78dc:
    // 0x2b78dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b78dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b78e0:
    // 0x2b78e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2b78e4:
    // 0x2b78e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b78e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b78e8:
    // 0x2b78e8: 0x0  nop
    ctx->pc = 0x2b78e8u;
    // NOP
label_2b78ec:
    // 0x2b78ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b78ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b78f0:
    // 0x2b78f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b78f4:
    if (ctx->pc == 0x2B78F4u) {
        ctx->pc = 0x2B78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78F0u;
        // 0x2b78f4: 0x3088ffff  andi        $t0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B78F8u;
        goto label_2b78f8;
    }
    ctx->pc = 0x2B78F0u;
    {
        const bool branch_taken_0x2b78f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78F0u;
        // 0x2b78f4: 0x3088ffff  andi        $t0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78f0) {
            ctx->pc = 0x2B7908u;
            goto label_2b7908;
        }
    }
    ctx->pc = 0x2B78F8u;
label_2b78f8:
    // 0x2b78f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b78f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b78fc:
    // 0x2b78fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b78fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7900:
    // 0x2b7900: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b7904:
    if (ctx->pc == 0x2B7904u) {
        ctx->pc = 0x2B7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7900u;
        // 0x2b7904: 0x3c034470  lui         $v1, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7908u;
        goto label_2b7908;
    }
    ctx->pc = 0x2B7900u;
    {
        const bool branch_taken_0x2b7900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7900u;
        // 0x2b7904: 0x3c034470  lui         $v1, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7900) {
            ctx->pc = 0x2B7924u;
            goto label_2b7924;
        }
    }
    ctx->pc = 0x2B7908u;
label_2b7908:
    // 0x2b7908: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7908u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b790c:
    // 0x2b790c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b790cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7910:
    // 0x2b7910: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7914:
    // 0x2b7914: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7918:
    // 0x2b7918: 0x0  nop
    ctx->pc = 0x2b7918u;
    // NOP
label_2b791c:
    // 0x2b791c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b791cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b7920:
    // 0x2b7920: 0x3c034470  lui         $v1, 0x4470
    ctx->pc = 0x2b7920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
label_2b7924:
    // 0x2b7924: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b7928:
    // 0x2b7928: 0x0  nop
    ctx->pc = 0x2b7928u;
    // NOP
label_2b792c:
    // 0x2b792c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b792cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b7930:
    // 0x2b7930: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2b7934:
    // 0x2b7934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7938:
    // 0x2b7938: 0x0  nop
    ctx->pc = 0x2b7938u;
    // NOP
label_2b793c:
    // 0x2b793c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b793cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b7940:
    // 0x2b7940: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b7944:
    if (ctx->pc == 0x2B7944u) {
        ctx->pc = 0x2B7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7940u;
        // 0x2b7944: 0x3087ffff  andi        $a3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7948u;
        goto label_2b7948;
    }
    ctx->pc = 0x2B7940u;
    {
        const bool branch_taken_0x2b7940 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7940u;
        // 0x2b7944: 0x3087ffff  andi        $a3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7940) {
            ctx->pc = 0x2B7958u;
            goto label_2b7958;
        }
    }
    ctx->pc = 0x2B7948u;
label_2b7948:
    // 0x2b7948: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b794c:
    // 0x2b794c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b794cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7950:
    // 0x2b7950: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b7954:
    if (ctx->pc == 0x2B7954u) {
        ctx->pc = 0x2B7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7950u;
        // 0x2b7954: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7958u;
        goto label_2b7958;
    }
    ctx->pc = 0x2B7950u;
    {
        const bool branch_taken_0x2b7950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7950u;
        // 0x2b7954: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7950) {
            ctx->pc = 0x2B7974u;
            goto label_2b7974;
        }
    }
    ctx->pc = 0x2B7958u;
label_2b7958:
    // 0x2b7958: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b795c:
    // 0x2b795c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b795cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7960:
    // 0x2b7960: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7964:
    // 0x2b7964: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7968:
    // 0x2b7968: 0x0  nop
    ctx->pc = 0x2b7968u;
    // NOP
label_2b796c:
    // 0x2b796c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b796cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b7970:
    // 0x2b7970: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2b7970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2b7974:
    // 0x2b7974: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b7978:
    if (ctx->pc == 0x2B7978u) {
        ctx->pc = 0x2B797Cu;
        goto label_2b797c;
    }
    ctx->pc = 0x2B7974u;
    {
        const bool branch_taken_0x2b7974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7974) {
            ctx->pc = 0x2B7990u;
            goto label_2b7990;
        }
    }
    ctx->pc = 0x2B797Cu;
label_2b797c:
    // 0x2b797c: 0x0  nop
    ctx->pc = 0x2b797cu;
    // NOP
label_2b7980:
    // 0x2b7980: 0x64080140  daddiu      $t0, $zero, 0x140
    ctx->pc = 0x2b7980u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
label_2b7984:
    // 0x2b7984: 0x64070280  daddiu      $a3, $zero, 0x280
    ctx->pc = 0x2b7984u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)640);
label_2b7988:
    // 0x2b7988: 0x640403c0  daddiu      $a0, $zero, 0x3C0
    ctx->pc = 0x2b7988u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)960);
label_2b798c:
    // 0x2b798c: 0x0  nop
    ctx->pc = 0x2b798cu;
    // NOP
label_2b7990:
    // 0x2b7990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b7994:
    // 0x2b7994: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
label_2b7998:
    if (ctx->pc == 0x2B7998u) {
        ctx->pc = 0x2B7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7994u;
        // 0x2b7998: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B799Cu;
        goto label_2b799c;
    }
    ctx->pc = 0x2B7994u;
    {
        const bool branch_taken_0x2b7994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7994u;
        // 0x2b7998: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7994) {
            ctx->pc = 0x2B7A08u;
            goto label_2b7a08;
        }
    }
    ctx->pc = 0x2B799Cu;
label_2b799c:
    // 0x2b799c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_2b79a0:
    if (ctx->pc == 0x2B79A0u) {
        ctx->pc = 0x2B79A4u;
        goto label_2b79a4;
    }
    ctx->pc = 0x2B799Cu;
    {
        const bool branch_taken_0x2b799c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b799c) {
            ctx->pc = 0x2B79E0u;
            goto label_2b79e0;
        }
    }
    ctx->pc = 0x2B79A4u;
label_2b79a4:
    // 0x2b79a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2b79a8:
    if (ctx->pc == 0x2B79A8u) {
        ctx->pc = 0x2B79ACu;
        goto label_2b79ac;
    }
    ctx->pc = 0x2B79A4u;
    {
        const bool branch_taken_0x2b79a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b79a4) {
            ctx->pc = 0x2B79B8u;
            goto label_2b79b8;
        }
    }
    ctx->pc = 0x2B79ACu;
label_2b79ac:
    // 0x2b79ac: 0x10000020  b           . + 4 + (0x20 << 2)
label_2b79b0:
    if (ctx->pc == 0x2B79B0u) {
        ctx->pc = 0x2B79B4u;
        goto label_2b79b4;
    }
    ctx->pc = 0x2B79ACu;
    {
        const bool branch_taken_0x2b79ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b79ac) {
            ctx->pc = 0x2B7A30u;
            goto label_2b7a30;
        }
    }
    ctx->pc = 0x2B79B4u;
label_2b79b4:
    // 0x2b79b4: 0x0  nop
    ctx->pc = 0x2b79b4u;
    // NOP
label_2b79b8:
    // 0x2b79b8: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2b79b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2b79bc:
    // 0x2b79bc: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2b79bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_2b79c0:
    // 0x2b79c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b79c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b79c4:
    // 0x2b79c4: 0xc096974  jal         func_25A5D0
label_2b79c8:
    if (ctx->pc == 0x2B79C8u) {
        ctx->pc = 0x2B79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79C4u;
        // 0x2b79c8: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79CCu;
        goto label_2b79cc;
    }
    ctx->pc = 0x2B79C4u;
    SET_GPR_U32(ctx, 31, 0x2B79CCu);
    ctx->pc = 0x2B79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79C4u;
    // 0x2b79c8: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B79C4u, 0x2B79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79CCu;
label_2b79cc:
    // 0x2b79cc: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x2b79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2b79d0:
    // 0x2b79d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b79d4:
    // 0x2b79d4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2b79d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2b79d8:
    // 0x2b79d8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b79dc:
    if (ctx->pc == 0x2B79DCu) {
        ctx->pc = 0x2B79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79D8u;
        // 0x2b79dc: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79E0u;
        goto label_2b79e0;
    }
    ctx->pc = 0x2B79D8u;
    {
        const bool branch_taken_0x2b79d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79D8u;
        // 0x2b79dc: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79d8) {
            ctx->pc = 0x2B7A30u;
            goto label_2b7a30;
        }
    }
    ctx->pc = 0x2B79E0u;
label_2b79e0:
    // 0x2b79e0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2b79e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2b79e4:
    // 0x2b79e4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x2b79e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_2b79e8:
    // 0x2b79e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b79e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b79ec:
    // 0x2b79ec: 0xc096974  jal         func_25A5D0
label_2b79f0:
    if (ctx->pc == 0x2B79F0u) {
        ctx->pc = 0x2B79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79ECu;
        // 0x2b79f0: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79F4u;
        goto label_2b79f4;
    }
    ctx->pc = 0x2B79ECu;
    SET_GPR_U32(ctx, 31, 0x2B79F4u);
    ctx->pc = 0x2B79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79ECu;
    // 0x2b79f0: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B79ECu, 0x2B79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79F4u;
label_2b79f4:
    // 0x2b79f4: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x2b79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2b79f8:
    // 0x2b79f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b79fc:
    // 0x2b79fc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2b79fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2b7a00:
    // 0x2b7a00: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b7a04:
    if (ctx->pc == 0x2B7A04u) {
        ctx->pc = 0x2B7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A00u;
        // 0x2b7a04: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A08u;
        goto label_2b7a08;
    }
    ctx->pc = 0x2B7A00u;
    {
        const bool branch_taken_0x2b7a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A00u;
        // 0x2b7a04: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a00) {
            ctx->pc = 0x2B7A30u;
            goto label_2b7a30;
        }
    }
    ctx->pc = 0x2B7A08u;
label_2b7a08:
    // 0x2b7a08: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2b7a08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2b7a0c:
    // 0x2b7a0c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2b7a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2b7a10:
    // 0x2b7a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7a14:
    // 0x2b7a14: 0xc096974  jal         func_25A5D0
label_2b7a18:
    if (ctx->pc == 0x2B7A18u) {
        ctx->pc = 0x2B7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A14u;
        // 0x2b7a18: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A1Cu;
        goto label_2b7a1c;
    }
    ctx->pc = 0x2B7A14u;
    SET_GPR_U32(ctx, 31, 0x2B7A1Cu);
    ctx->pc = 0x2B7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A14u;
    // 0x2b7a18: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B7A14u, 0x2B7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A1Cu;
label_2b7a1c:
    // 0x2b7a1c: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x2b7a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2b7a20:
    // 0x2b7a20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b7a24:
    // 0x2b7a24: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2b7a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2b7a28:
    // 0x2b7a28: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x2b7a28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2b7a2c:
    // 0x2b7a2c: 0x0  nop
    ctx->pc = 0x2b7a2cu;
    // NOP
label_2b7a30:
    // 0x2b7a30: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_2b7a34:
    if (ctx->pc == 0x2B7A34u) {
        ctx->pc = 0x2B7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A30u;
        // 0x2b7a34: 0xa620082c  sh          $zero, 0x82C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A38u;
        goto label_2b7a38;
    }
    ctx->pc = 0x2B7A30u;
    {
        const bool branch_taken_0x2b7a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A30u;
        // 0x2b7a34: 0xa620082c  sh          $zero, 0x82C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a30) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7A38u;
label_2b7a38:
    // 0x2b7a38: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2b7a38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b7a3c:
    // 0x2b7a3c: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x2b7a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
label_2b7a40:
    // 0x2b7a40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b7a44:
    // 0x2b7a44: 0xa623082c  sh          $v1, 0x82C($s1)
    ctx->pc = 0x2b7a44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 3));
label_2b7a48:
    // 0x2b7a48: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x2b7a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
label_2b7a4c:
    // 0x2b7a4c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x2b7a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_2b7a50:
    // 0x2b7a50: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_2b7a54:
    if (ctx->pc == 0x2B7A54u) {
        ctx->pc = 0x2B7A58u;
        goto label_2b7a58;
    }
    ctx->pc = 0x2B7A50u;
    {
        const bool branch_taken_0x2b7a50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a50) {
            ctx->pc = 0x2B7AA0u;
            goto label_2b7aa0;
        }
    }
    ctx->pc = 0x2B7A58u;
label_2b7a58:
    // 0x2b7a58: 0xde250500  ld          $a1, 0x500($s1)
    ctx->pc = 0x2b7a58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_2b7a5c:
    // 0x2b7a5c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2b7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_2b7a60:
    // 0x2b7a60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b7a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2b7a64:
    // 0x2b7a64: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2b7a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2b7a68:
    // 0x2b7a68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2b7a6c:
    if (ctx->pc == 0x2B7A6Cu) {
        ctx->pc = 0x2B7A70u;
        goto label_2b7a70;
    }
    ctx->pc = 0x2B7A68u;
    {
        const bool branch_taken_0x2b7a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a68) {
            ctx->pc = 0x2B7AA0u;
            goto label_2b7aa0;
        }
    }
    ctx->pc = 0x2B7A70u;
label_2b7a70:
    // 0x2b7a70: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2b7a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2b7a74:
    // 0x2b7a74: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b7a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b7a78:
    // 0x2b7a78: 0x320f809  jalr        $t9
label_2b7a7c:
    if (ctx->pc == 0x2B7A7Cu) {
        ctx->pc = 0x2B7A80u;
        goto label_2b7a80;
    }
    ctx->pc = 0x2B7A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7A80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A78u, 0x2B7A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7A80u;
label_2b7a80:
    // 0x2b7a80: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x2b7a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_2b7a84:
    // 0x2b7a84: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2b7a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2b7a88:
    // 0x2b7a88: 0x320f809  jalr        $t9
label_2b7a8c:
    if (ctx->pc == 0x2B7A8Cu) {
        ctx->pc = 0x2B7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A88u;
        // 0x2b7a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A90u;
        goto label_2b7a90;
    }
    ctx->pc = 0x2B7A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7A90u);
        ctx->pc = 0x2B7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A88u;
        // 0x2b7a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A88u, 0x2B7A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7A90u;
label_2b7a90:
    // 0x2b7a90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b7a94:
    // 0x2b7a94: 0x10000098  b           . + 4 + (0x98 << 2)
label_2b7a98:
    if (ctx->pc == 0x2B7A98u) {
        ctx->pc = 0x2B7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A94u;
        // 0x2b7a98: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A9Cu;
        goto label_2b7a9c;
    }
    ctx->pc = 0x2B7A94u;
    {
        const bool branch_taken_0x2b7a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A94u;
        // 0x2b7a98: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a94) {
            ctx->pc = 0x2B7CF8u;
            goto label_2b7cf8;
        }
    }
    ctx->pc = 0x2B7A9Cu;
label_2b7a9c:
    // 0x2b7a9c: 0x0  nop
    ctx->pc = 0x2b7a9cu;
    // NOP
label_2b7aa0:
    // 0x2b7aa0: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2b7aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2b7aa4:
    // 0x2b7aa4: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
label_2b7aa8:
    if (ctx->pc == 0x2B7AA8u) {
        ctx->pc = 0x2B7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AA4u;
        // 0x2b7aa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AACu;
        goto label_2b7aac;
    }
    ctx->pc = 0x2B7AA4u;
    {
        const bool branch_taken_0x2b7aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AA4u;
        // 0x2b7aa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7aa4) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7AACu;
label_2b7aac:
    // 0x2b7aac: 0x10000086  b           . + 4 + (0x86 << 2)
label_2b7ab0:
    if (ctx->pc == 0x2B7AB0u) {
        ctx->pc = 0x2B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AACu;
        // 0x2b7ab0: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AB4u;
        goto label_2b7ab4;
    }
    ctx->pc = 0x2B7AACu;
    {
        const bool branch_taken_0x2b7aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AACu;
        // 0x2b7ab0: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7aac) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7AB4u;
label_2b7ab4:
    // 0x2b7ab4: 0x0  nop
    ctx->pc = 0x2b7ab4u;
    // NOP
label_2b7ab8:
    // 0x2b7ab8: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x2b7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
label_2b7abc:
    // 0x2b7abc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b7abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b7ac0:
    // 0x2b7ac0: 0x9625082c  lhu         $a1, 0x82C($s1)
    ctx->pc = 0x2b7ac0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
label_2b7ac4:
    // 0x2b7ac4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_2b7ac8:
    // 0x2b7ac8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b7ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_2b7acc:
    // 0x2b7acc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2b7ad0:
    // 0x2b7ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7ad4:
    // 0x2b7ad4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b7ad4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b7ad8:
    // 0x2b7ad8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2b7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b7adc:
    // 0x2b7adc: 0xa623082c  sh          $v1, 0x82C($s1)
    ctx->pc = 0x2b7adcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 3));
label_2b7ae0:
    // 0x2b7ae0: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x2b7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b7ae4:
    // 0x2b7ae4: 0x9625082c  lhu         $a1, 0x82C($s1)
    ctx->pc = 0x2b7ae4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
label_2b7ae8:
    // 0x2b7ae8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b7ae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2b7aec:
    // 0x2b7aec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b7af0:
    // 0x2b7af0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b7af4:
    // 0x2b7af4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b7af8:
    if (ctx->pc == 0x2B7AF8u) {
        ctx->pc = 0x2B7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AF4u;
        // 0x2b7af8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AFCu;
        goto label_2b7afc;
    }
    ctx->pc = 0x2B7AF4u;
    {
        const bool branch_taken_0x2b7af4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AF4u;
        // 0x2b7af8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7af4) {
            ctx->pc = 0x2B7B0Cu;
            goto label_2b7b0c;
        }
    }
    ctx->pc = 0x2B7AFCu;
label_2b7afc:
    // 0x2b7afc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7b00:
    // 0x2b7b00: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7b04:
    // 0x2b7b04: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b7b08:
    if (ctx->pc == 0x2B7B08u) {
        ctx->pc = 0x2B7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B04u;
        // 0x2b7b08: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B0Cu;
        goto label_2b7b0c;
    }
    ctx->pc = 0x2B7B04u;
    {
        const bool branch_taken_0x2b7b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B04u;
        // 0x2b7b08: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b04) {
            ctx->pc = 0x2B7B28u;
            goto label_2b7b28;
        }
    }
    ctx->pc = 0x2B7B0Cu;
label_2b7b0c:
    // 0x2b7b0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b7b10:
    // 0x2b7b10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7b14:
    // 0x2b7b14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7b14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7b18:
    // 0x2b7b18: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7b1c:
    // 0x2b7b1c: 0x0  nop
    ctx->pc = 0x2b7b1cu;
    // NOP
label_2b7b20:
    // 0x2b7b20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b7b24:
    // 0x2b7b24: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x2b7b24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2b7b28:
    // 0x2b7b28: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
label_2b7b2c:
    if (ctx->pc == 0x2B7B2Cu) {
        ctx->pc = 0x2B7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B28u;
        // 0x2b7b2c: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B30u;
        goto label_2b7b30;
    }
    ctx->pc = 0x2B7B28u;
    {
        const bool branch_taken_0x2b7b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B28u;
        // 0x2b7b2c: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b28) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7B30u;
label_2b7b30:
    // 0x2b7b30: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2b7b30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2b7b34:
    // 0x2b7b34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7b38:
    // 0x2b7b38: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x2b7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_2b7b3c:
    // 0x2b7b3c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2b7b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2b7b40:
    // 0x2b7b40: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2b7b40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2b7b44:
    // 0x2b7b44: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2b7b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2b7b48:
    // 0x2b7b48: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2b7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_2b7b4c:
    // 0x2b7b4c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2b7b50:
    // 0x2b7b50: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2b7b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_2b7b54:
    // 0x2b7b54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b7b54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b7b58:
    // 0x2b7b58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7b5c:
    // 0x2b7b5c: 0x0  nop
    ctx->pc = 0x2b7b5cu;
    // NOP
label_2b7b60:
    // 0x2b7b60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7b60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b7b64:
    // 0x2b7b64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7b64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b7b68:
    // 0x2b7b68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b7b6c:
    if (ctx->pc == 0x2B7B6Cu) {
        ctx->pc = 0x2B7B70u;
        goto label_2b7b70;
    }
    ctx->pc = 0x2B7B68u;
    {
        const bool branch_taken_0x2b7b68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7b68) {
            ctx->pc = 0x2B7B80u;
            goto label_2b7b80;
        }
    }
    ctx->pc = 0x2B7B70u;
label_2b7b70:
    // 0x2b7b70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7b70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7b74:
    // 0x2b7b74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7b78:
    // 0x2b7b78: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b7b7c:
    if (ctx->pc == 0x2B7B7Cu) {
        ctx->pc = 0x2B7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B78u;
        // 0x2b7b7c: 0xa22407f5  sb          $a0, 0x7F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B80u;
        goto label_2b7b80;
    }
    ctx->pc = 0x2B7B78u;
    {
        const bool branch_taken_0x2b7b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B78u;
        // 0x2b7b7c: 0xa22407f5  sb          $a0, 0x7F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b78) {
            ctx->pc = 0x2B7B9Cu;
            goto label_2b7b9c;
        }
    }
    ctx->pc = 0x2B7B80u;
label_2b7b80:
    // 0x2b7b80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7b80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b7b84:
    // 0x2b7b84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7b88:
    // 0x2b7b88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7b88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7b8c:
    // 0x2b7b8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7b8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7b90:
    // 0x2b7b90: 0x0  nop
    ctx->pc = 0x2b7b90u;
    // NOP
label_2b7b94:
    // 0x2b7b94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b7b98:
    // 0x2b7b98: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x2b7b98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2b7b9c:
    // 0x2b7b9c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7ba0:
    // 0x2b7ba0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2b7ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2b7ba4:
    // 0x2b7ba4: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2b7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2b7ba8:
    // 0x2b7ba8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b7bac:
    // 0x2b7bac: 0xa620082c  sh          $zero, 0x82C($s1)
    ctx->pc = 0x2b7bacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
label_2b7bb0:
    // 0x2b7bb0: 0x10000045  b           . + 4 + (0x45 << 2)
label_2b7bb4:
    if (ctx->pc == 0x2B7BB4u) {
        ctx->pc = 0x2B7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BB0u;
        // 0x2b7bb4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BB8u;
        goto label_2b7bb8;
    }
    ctx->pc = 0x2B7BB0u;
    {
        const bool branch_taken_0x2b7bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BB0u;
        // 0x2b7bb4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bb0) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7BB8u;
label_2b7bb8:
    // 0x2b7bb8: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x2b7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
label_2b7bbc:
    // 0x2b7bbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b7bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b7bc0:
    // 0x2b7bc0: 0x9625082c  lhu         $a1, 0x82C($s1)
    ctx->pc = 0x2b7bc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
label_2b7bc4:
    // 0x2b7bc4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_2b7bc8:
    // 0x2b7bc8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b7bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_2b7bcc:
    // 0x2b7bcc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2b7bd0:
    // 0x2b7bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7bd4:
    // 0x2b7bd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b7bd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b7bd8:
    // 0x2b7bd8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2b7bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b7bdc:
    // 0x2b7bdc: 0xa623082c  sh          $v1, 0x82C($s1)
    ctx->pc = 0x2b7bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 3));
label_2b7be0:
    // 0x2b7be0: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x2b7be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b7be4:
    // 0x2b7be4: 0x9625082c  lhu         $a1, 0x82C($s1)
    ctx->pc = 0x2b7be4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
label_2b7be8:
    // 0x2b7be8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2b7be8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2b7bec:
    // 0x2b7bec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b7bf0:
    // 0x2b7bf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b7bf4:
    // 0x2b7bf4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b7bf8:
    if (ctx->pc == 0x2B7BF8u) {
        ctx->pc = 0x2B7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BF4u;
        // 0x2b7bf8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BFCu;
        goto label_2b7bfc;
    }
    ctx->pc = 0x2B7BF4u;
    {
        const bool branch_taken_0x2b7bf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BF4u;
        // 0x2b7bf8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bf4) {
            ctx->pc = 0x2B7C0Cu;
            goto label_2b7c0c;
        }
    }
    ctx->pc = 0x2B7BFCu;
label_2b7bfc:
    // 0x2b7bfc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7c00:
    // 0x2b7c00: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7c04:
    // 0x2b7c04: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b7c08:
    if (ctx->pc == 0x2B7C08u) {
        ctx->pc = 0x2B7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C04u;
        // 0x2b7c08: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C0Cu;
        goto label_2b7c0c;
    }
    ctx->pc = 0x2B7C04u;
    {
        const bool branch_taken_0x2b7c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C04u;
        // 0x2b7c08: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c04) {
            ctx->pc = 0x2B7C28u;
            goto label_2b7c28;
        }
    }
    ctx->pc = 0x2B7C0Cu;
label_2b7c0c:
    // 0x2b7c0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7c0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b7c10:
    // 0x2b7c10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7c14:
    // 0x2b7c14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7c18:
    // 0x2b7c18: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7c1c:
    // 0x2b7c1c: 0x0  nop
    ctx->pc = 0x2b7c1cu;
    // NOP
label_2b7c20:
    // 0x2b7c20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b7c24:
    // 0x2b7c24: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x2b7c24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2b7c28:
    // 0x2b7c28: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_2b7c2c:
    if (ctx->pc == 0x2B7C2Cu) {
        ctx->pc = 0x2B7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C28u;
        // 0x2b7c2c: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C30u;
        goto label_2b7c30;
    }
    ctx->pc = 0x2B7C28u;
    {
        const bool branch_taken_0x2b7c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C28u;
        // 0x2b7c2c: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c28) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7C30u;
label_2b7c30:
    // 0x2b7c30: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2b7c30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2b7c34:
    // 0x2b7c34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7c38:
    // 0x2b7c38: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x2b7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2b7c3c:
    // 0x2b7c3c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2b7c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2b7c40:
    // 0x2b7c40: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2b7c40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2b7c44:
    // 0x2b7c44: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x2b7c44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2b7c48:
    // 0x2b7c48: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2b7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_2b7c4c:
    // 0x2b7c4c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2b7c50:
    // 0x2b7c50: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2b7c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_2b7c54:
    // 0x2b7c54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b7c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b7c58:
    // 0x2b7c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7c5c:
    // 0x2b7c5c: 0x0  nop
    ctx->pc = 0x2b7c5cu;
    // NOP
label_2b7c60:
    // 0x2b7c60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b7c60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b7c64:
    // 0x2b7c64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b7c68:
    // 0x2b7c68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b7c6c:
    if (ctx->pc == 0x2B7C6Cu) {
        ctx->pc = 0x2B7C70u;
        goto label_2b7c70;
    }
    ctx->pc = 0x2B7C68u;
    {
        const bool branch_taken_0x2b7c68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7c68) {
            ctx->pc = 0x2B7C80u;
            goto label_2b7c80;
        }
    }
    ctx->pc = 0x2B7C70u;
label_2b7c70:
    // 0x2b7c70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7c70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7c74:
    // 0x2b7c74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7c78:
    // 0x2b7c78: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b7c7c:
    if (ctx->pc == 0x2B7C7Cu) {
        ctx->pc = 0x2B7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C78u;
        // 0x2b7c7c: 0xa22407f5  sb          $a0, 0x7F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C80u;
        goto label_2b7c80;
    }
    ctx->pc = 0x2B7C78u;
    {
        const bool branch_taken_0x2b7c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C78u;
        // 0x2b7c7c: 0xa22407f5  sb          $a0, 0x7F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c78) {
            ctx->pc = 0x2B7C9Cu;
            goto label_2b7c9c;
        }
    }
    ctx->pc = 0x2B7C80u;
label_2b7c80:
    // 0x2b7c80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7c80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b7c84:
    // 0x2b7c84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7c88:
    // 0x2b7c88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b7c8c:
    // 0x2b7c8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2b7c90:
    // 0x2b7c90: 0x0  nop
    ctx->pc = 0x2b7c90u;
    // NOP
label_2b7c94:
    // 0x2b7c94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2b7c98:
    // 0x2b7c98: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x2b7c98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2b7c9c:
    // 0x2b7c9c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2b7ca0:
    // 0x2b7ca0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2b7ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2b7ca4:
    // 0x2b7ca4: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2b7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2b7ca8:
    // 0x2b7ca8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b7cac:
    // 0x2b7cac: 0xa620082c  sh          $zero, 0x82C($s1)
    ctx->pc = 0x2b7cacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
label_2b7cb0:
    // 0x2b7cb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b7cb4:
    if (ctx->pc == 0x2B7CB4u) {
        ctx->pc = 0x2B7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CB0u;
        // 0x2b7cb4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7CB8u;
        goto label_2b7cb8;
    }
    ctx->pc = 0x2B7CB0u;
    {
        const bool branch_taken_0x2b7cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CB0u;
        // 0x2b7cb4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cb0) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7CB8u;
label_2b7cb8:
    // 0x2b7cb8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2b7cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2b7cbc:
    // 0x2b7cbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2b7cc0:
    if (ctx->pc == 0x2B7CC0u) {
        ctx->pc = 0x2B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CBCu;
        // 0x2b7cc0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7CC4u;
        goto label_2b7cc4;
    }
    ctx->pc = 0x2B7CBCu;
    {
        const bool branch_taken_0x2b7cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CBCu;
        // 0x2b7cc0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cbc) {
            ctx->pc = 0x2B7CC8u;
            goto label_2b7cc8;
        }
    }
    ctx->pc = 0x2B7CC4u;
label_2b7cc4:
    // 0x2b7cc4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2b7cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2b7cc8:
    // 0x2b7cc8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2b7ccc:
    if (ctx->pc == 0x2B7CCCu) {
        ctx->pc = 0x2B7CD0u;
        goto label_2b7cd0;
    }
    ctx->pc = 0x2B7CC8u;
    {
        const bool branch_taken_0x2b7cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7cc8) {
            ctx->pc = 0x2B7CF8u;
            goto label_2b7cf8;
        }
    }
    ctx->pc = 0x2B7CD0u;
label_2b7cd0:
    // 0x2b7cd0: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x2b7cd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
label_2b7cd4:
    // 0x2b7cd4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2b7cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2b7cd8:
    // 0x2b7cd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2b7cdc:
    if (ctx->pc == 0x2B7CDCu) {
        ctx->pc = 0x2B7CE0u;
        goto label_2b7ce0;
    }
    ctx->pc = 0x2B7CD8u;
    {
        const bool branch_taken_0x2b7cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7cd8) {
            ctx->pc = 0x2B7CF8u;
            goto label_2b7cf8;
        }
    }
    ctx->pc = 0x2B7CE0u;
label_2b7ce0:
    // 0x2b7ce0: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x2b7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_2b7ce4:
    // 0x2b7ce4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2b7ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2b7ce8:
    // 0x2b7ce8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2b7cec:
    if (ctx->pc == 0x2B7CECu) {
        ctx->pc = 0x2B7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CE8u;
        // 0x2b7cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7CF0u;
        goto label_2b7cf0;
    }
    ctx->pc = 0x2B7CE8u;
    {
        const bool branch_taken_0x2b7ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CE8u;
        // 0x2b7cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ce8) {
            ctx->pc = 0x2B7CF8u;
            goto label_2b7cf8;
        }
    }
    ctx->pc = 0x2B7CF0u;
label_2b7cf0:
    // 0x2b7cf0: 0xc0a259c  jal         func_289670
label_2b7cf4:
    if (ctx->pc == 0x2B7CF4u) {
        ctx->pc = 0x2B7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CF0u;
        // 0x2b7cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7CF8u;
        goto label_2b7cf8;
    }
    ctx->pc = 0x2B7CF0u;
    SET_GPR_U32(ctx, 31, 0x2B7CF8u);
    ctx->pc = 0x2B7CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CF0u;
    // 0x2b7cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289670u, 0x2B7CF0u, 0x2B7CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CF8u;
label_2b7cf8:
    // 0x2b7cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b7cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b7cfc:
    // 0x2b7cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b7cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b7d00:
    // 0x2b7d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7d04:
    // 0x2b7d04: 0x3e00008  jr          $ra
label_2b7d08:
    if (ctx->pc == 0x2B7D08u) {
        ctx->pc = 0x2B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D04u;
        // 0x2b7d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D0Cu;
        goto label_fallthrough_0x2b7d04;
    }
    ctx->pc = 0x2B7D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D04u;
        // 0x2b7d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b7d04:
    ctx->pc = 0x2B7D0Cu;
}
