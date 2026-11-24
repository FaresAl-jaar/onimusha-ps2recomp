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

// Function: sub_001869A0
// Address: 0x1869a0 - 0x186e08
void sub_001869A0_0x1869a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001869A0_0x1869a0");
#endif

    switch (ctx->pc) {
        case 0x1869a0u: goto label_1869a0;
        case 0x1869a4u: goto label_1869a4;
        case 0x1869a8u: goto label_1869a8;
        case 0x1869acu: goto label_1869ac;
        case 0x1869b0u: goto label_1869b0;
        case 0x1869b4u: goto label_1869b4;
        case 0x1869b8u: goto label_1869b8;
        case 0x1869bcu: goto label_1869bc;
        case 0x1869c0u: goto label_1869c0;
        case 0x1869c4u: goto label_1869c4;
        case 0x1869c8u: goto label_1869c8;
        case 0x1869ccu: goto label_1869cc;
        case 0x1869d0u: goto label_1869d0;
        case 0x1869d4u: goto label_1869d4;
        case 0x1869d8u: goto label_1869d8;
        case 0x1869dcu: goto label_1869dc;
        case 0x1869e0u: goto label_1869e0;
        case 0x1869e4u: goto label_1869e4;
        case 0x1869e8u: goto label_1869e8;
        case 0x1869ecu: goto label_1869ec;
        case 0x1869f0u: goto label_1869f0;
        case 0x1869f4u: goto label_1869f4;
        case 0x1869f8u: goto label_1869f8;
        case 0x1869fcu: goto label_1869fc;
        case 0x186a00u: goto label_186a00;
        case 0x186a04u: goto label_186a04;
        case 0x186a08u: goto label_186a08;
        case 0x186a0cu: goto label_186a0c;
        case 0x186a10u: goto label_186a10;
        case 0x186a14u: goto label_186a14;
        case 0x186a18u: goto label_186a18;
        case 0x186a1cu: goto label_186a1c;
        case 0x186a20u: goto label_186a20;
        case 0x186a24u: goto label_186a24;
        case 0x186a28u: goto label_186a28;
        case 0x186a2cu: goto label_186a2c;
        case 0x186a30u: goto label_186a30;
        case 0x186a34u: goto label_186a34;
        case 0x186a38u: goto label_186a38;
        case 0x186a3cu: goto label_186a3c;
        case 0x186a40u: goto label_186a40;
        case 0x186a44u: goto label_186a44;
        case 0x186a48u: goto label_186a48;
        case 0x186a4cu: goto label_186a4c;
        case 0x186a50u: goto label_186a50;
        case 0x186a54u: goto label_186a54;
        case 0x186a58u: goto label_186a58;
        case 0x186a5cu: goto label_186a5c;
        case 0x186a60u: goto label_186a60;
        case 0x186a64u: goto label_186a64;
        case 0x186a68u: goto label_186a68;
        case 0x186a6cu: goto label_186a6c;
        case 0x186a70u: goto label_186a70;
        case 0x186a74u: goto label_186a74;
        case 0x186a78u: goto label_186a78;
        case 0x186a7cu: goto label_186a7c;
        case 0x186a80u: goto label_186a80;
        case 0x186a84u: goto label_186a84;
        case 0x186a88u: goto label_186a88;
        case 0x186a8cu: goto label_186a8c;
        case 0x186a90u: goto label_186a90;
        case 0x186a94u: goto label_186a94;
        case 0x186a98u: goto label_186a98;
        case 0x186a9cu: goto label_186a9c;
        case 0x186aa0u: goto label_186aa0;
        case 0x186aa4u: goto label_186aa4;
        case 0x186aa8u: goto label_186aa8;
        case 0x186aacu: goto label_186aac;
        case 0x186ab0u: goto label_186ab0;
        case 0x186ab4u: goto label_186ab4;
        case 0x186ab8u: goto label_186ab8;
        case 0x186abcu: goto label_186abc;
        case 0x186ac0u: goto label_186ac0;
        case 0x186ac4u: goto label_186ac4;
        case 0x186ac8u: goto label_186ac8;
        case 0x186accu: goto label_186acc;
        case 0x186ad0u: goto label_186ad0;
        case 0x186ad4u: goto label_186ad4;
        case 0x186ad8u: goto label_186ad8;
        case 0x186adcu: goto label_186adc;
        case 0x186ae0u: goto label_186ae0;
        case 0x186ae4u: goto label_186ae4;
        case 0x186ae8u: goto label_186ae8;
        case 0x186aecu: goto label_186aec;
        case 0x186af0u: goto label_186af0;
        case 0x186af4u: goto label_186af4;
        case 0x186af8u: goto label_186af8;
        case 0x186afcu: goto label_186afc;
        case 0x186b00u: goto label_186b00;
        case 0x186b04u: goto label_186b04;
        case 0x186b08u: goto label_186b08;
        case 0x186b0cu: goto label_186b0c;
        case 0x186b10u: goto label_186b10;
        case 0x186b14u: goto label_186b14;
        case 0x186b18u: goto label_186b18;
        case 0x186b1cu: goto label_186b1c;
        case 0x186b20u: goto label_186b20;
        case 0x186b24u: goto label_186b24;
        case 0x186b28u: goto label_186b28;
        case 0x186b2cu: goto label_186b2c;
        case 0x186b30u: goto label_186b30;
        case 0x186b34u: goto label_186b34;
        case 0x186b38u: goto label_186b38;
        case 0x186b3cu: goto label_186b3c;
        case 0x186b40u: goto label_186b40;
        case 0x186b44u: goto label_186b44;
        case 0x186b48u: goto label_186b48;
        case 0x186b4cu: goto label_186b4c;
        case 0x186b50u: goto label_186b50;
        case 0x186b54u: goto label_186b54;
        case 0x186b58u: goto label_186b58;
        case 0x186b5cu: goto label_186b5c;
        case 0x186b60u: goto label_186b60;
        case 0x186b64u: goto label_186b64;
        case 0x186b68u: goto label_186b68;
        case 0x186b6cu: goto label_186b6c;
        case 0x186b70u: goto label_186b70;
        case 0x186b74u: goto label_186b74;
        case 0x186b78u: goto label_186b78;
        case 0x186b7cu: goto label_186b7c;
        case 0x186b80u: goto label_186b80;
        case 0x186b84u: goto label_186b84;
        case 0x186b88u: goto label_186b88;
        case 0x186b8cu: goto label_186b8c;
        case 0x186b90u: goto label_186b90;
        case 0x186b94u: goto label_186b94;
        case 0x186b98u: goto label_186b98;
        case 0x186b9cu: goto label_186b9c;
        case 0x186ba0u: goto label_186ba0;
        case 0x186ba4u: goto label_186ba4;
        case 0x186ba8u: goto label_186ba8;
        case 0x186bacu: goto label_186bac;
        case 0x186bb0u: goto label_186bb0;
        case 0x186bb4u: goto label_186bb4;
        case 0x186bb8u: goto label_186bb8;
        case 0x186bbcu: goto label_186bbc;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bc4u: goto label_186bc4;
        case 0x186bc8u: goto label_186bc8;
        case 0x186bccu: goto label_186bcc;
        case 0x186bd0u: goto label_186bd0;
        case 0x186bd4u: goto label_186bd4;
        case 0x186bd8u: goto label_186bd8;
        case 0x186bdcu: goto label_186bdc;
        case 0x186be0u: goto label_186be0;
        case 0x186be4u: goto label_186be4;
        case 0x186be8u: goto label_186be8;
        case 0x186becu: goto label_186bec;
        case 0x186bf0u: goto label_186bf0;
        case 0x186bf4u: goto label_186bf4;
        case 0x186bf8u: goto label_186bf8;
        case 0x186bfcu: goto label_186bfc;
        case 0x186c00u: goto label_186c00;
        case 0x186c04u: goto label_186c04;
        case 0x186c08u: goto label_186c08;
        case 0x186c0cu: goto label_186c0c;
        case 0x186c10u: goto label_186c10;
        case 0x186c14u: goto label_186c14;
        case 0x186c18u: goto label_186c18;
        case 0x186c1cu: goto label_186c1c;
        case 0x186c20u: goto label_186c20;
        case 0x186c24u: goto label_186c24;
        case 0x186c28u: goto label_186c28;
        case 0x186c2cu: goto label_186c2c;
        case 0x186c30u: goto label_186c30;
        case 0x186c34u: goto label_186c34;
        case 0x186c38u: goto label_186c38;
        case 0x186c3cu: goto label_186c3c;
        case 0x186c40u: goto label_186c40;
        case 0x186c44u: goto label_186c44;
        case 0x186c48u: goto label_186c48;
        case 0x186c4cu: goto label_186c4c;
        case 0x186c50u: goto label_186c50;
        case 0x186c54u: goto label_186c54;
        case 0x186c58u: goto label_186c58;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c60u: goto label_186c60;
        case 0x186c64u: goto label_186c64;
        case 0x186c68u: goto label_186c68;
        case 0x186c6cu: goto label_186c6c;
        case 0x186c70u: goto label_186c70;
        case 0x186c74u: goto label_186c74;
        case 0x186c78u: goto label_186c78;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c80u: goto label_186c80;
        case 0x186c84u: goto label_186c84;
        case 0x186c88u: goto label_186c88;
        case 0x186c8cu: goto label_186c8c;
        case 0x186c90u: goto label_186c90;
        case 0x186c94u: goto label_186c94;
        case 0x186c98u: goto label_186c98;
        case 0x186c9cu: goto label_186c9c;
        case 0x186ca0u: goto label_186ca0;
        case 0x186ca4u: goto label_186ca4;
        case 0x186ca8u: goto label_186ca8;
        case 0x186cacu: goto label_186cac;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cb4u: goto label_186cb4;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cbcu: goto label_186cbc;
        case 0x186cc0u: goto label_186cc0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cc8u: goto label_186cc8;
        case 0x186cccu: goto label_186ccc;
        case 0x186cd0u: goto label_186cd0;
        case 0x186cd4u: goto label_186cd4;
        case 0x186cd8u: goto label_186cd8;
        case 0x186cdcu: goto label_186cdc;
        case 0x186ce0u: goto label_186ce0;
        case 0x186ce4u: goto label_186ce4;
        case 0x186ce8u: goto label_186ce8;
        case 0x186cecu: goto label_186cec;
        case 0x186cf0u: goto label_186cf0;
        case 0x186cf4u: goto label_186cf4;
        case 0x186cf8u: goto label_186cf8;
        case 0x186cfcu: goto label_186cfc;
        case 0x186d00u: goto label_186d00;
        case 0x186d04u: goto label_186d04;
        case 0x186d08u: goto label_186d08;
        case 0x186d0cu: goto label_186d0c;
        case 0x186d10u: goto label_186d10;
        case 0x186d14u: goto label_186d14;
        case 0x186d18u: goto label_186d18;
        case 0x186d1cu: goto label_186d1c;
        case 0x186d20u: goto label_186d20;
        case 0x186d24u: goto label_186d24;
        case 0x186d28u: goto label_186d28;
        case 0x186d2cu: goto label_186d2c;
        case 0x186d30u: goto label_186d30;
        case 0x186d34u: goto label_186d34;
        case 0x186d38u: goto label_186d38;
        case 0x186d3cu: goto label_186d3c;
        case 0x186d40u: goto label_186d40;
        case 0x186d44u: goto label_186d44;
        case 0x186d48u: goto label_186d48;
        case 0x186d4cu: goto label_186d4c;
        case 0x186d50u: goto label_186d50;
        case 0x186d54u: goto label_186d54;
        case 0x186d58u: goto label_186d58;
        case 0x186d5cu: goto label_186d5c;
        case 0x186d60u: goto label_186d60;
        case 0x186d64u: goto label_186d64;
        case 0x186d68u: goto label_186d68;
        case 0x186d6cu: goto label_186d6c;
        case 0x186d70u: goto label_186d70;
        case 0x186d74u: goto label_186d74;
        case 0x186d78u: goto label_186d78;
        case 0x186d7cu: goto label_186d7c;
        case 0x186d80u: goto label_186d80;
        case 0x186d84u: goto label_186d84;
        case 0x186d88u: goto label_186d88;
        case 0x186d8cu: goto label_186d8c;
        case 0x186d90u: goto label_186d90;
        case 0x186d94u: goto label_186d94;
        case 0x186d98u: goto label_186d98;
        case 0x186d9cu: goto label_186d9c;
        case 0x186da0u: goto label_186da0;
        case 0x186da4u: goto label_186da4;
        case 0x186da8u: goto label_186da8;
        case 0x186dacu: goto label_186dac;
        case 0x186db0u: goto label_186db0;
        case 0x186db4u: goto label_186db4;
        case 0x186db8u: goto label_186db8;
        case 0x186dbcu: goto label_186dbc;
        case 0x186dc0u: goto label_186dc0;
        case 0x186dc4u: goto label_186dc4;
        case 0x186dc8u: goto label_186dc8;
        case 0x186dccu: goto label_186dcc;
        case 0x186dd0u: goto label_186dd0;
        case 0x186dd4u: goto label_186dd4;
        case 0x186dd8u: goto label_186dd8;
        case 0x186ddcu: goto label_186ddc;
        case 0x186de0u: goto label_186de0;
        case 0x186de4u: goto label_186de4;
        case 0x186de8u: goto label_186de8;
        case 0x186decu: goto label_186dec;
        case 0x186df0u: goto label_186df0;
        case 0x186df4u: goto label_186df4;
        case 0x186df8u: goto label_186df8;
        case 0x186dfcu: goto label_186dfc;
        case 0x186e00u: goto label_186e00;
        case 0x186e04u: goto label_186e04;
        default: break;
    }

    ctx->pc = 0x1869a0u;

label_1869a0:
    // 0x1869a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1869a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1869a4:
    // 0x1869a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1869a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1869a8:
    // 0x1869a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1869a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1869ac:
    // 0x1869ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1869acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1869b0:
    // 0x1869b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1869b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1869b4:
    // 0x1869b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1869b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1869b8:
    // 0x1869b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1869b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1869bc:
    // 0x1869bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1869bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1869c0:
    // 0x1869c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1869c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1869c4:
    // 0x1869c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1869c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1869c8:
    // 0x1869c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1869c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1869cc:
    // 0x1869cc: 0x3c130084  lui         $s3, 0x84
    ctx->pc = 0x1869ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)132 << 16));
label_1869d0:
    // 0x1869d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1869d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1869d4:
    // 0x1869d4: 0x3c120084  lui         $s2, 0x84
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)132 << 16));
label_1869d8:
    // 0x1869d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1869d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1869dc:
    // 0x1869dc: 0x2673e0c0  addiu       $s3, $s3, -0x1F40
    ctx->pc = 0x1869dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959296));
label_1869e0:
    // 0x1869e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1869e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1869e4:
    // 0x1869e4: 0x2652f0c0  addiu       $s2, $s2, -0xF40
    ctx->pc = 0x1869e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963392));
label_1869e8:
    // 0x1869e8: 0x8c940048  lw          $s4, 0x48($a0)
    ctx->pc = 0x1869e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1869ec:
    // 0x1869ec: 0xc060d40  jal         func_183500
label_1869f0:
    if (ctx->pc == 0x1869F0u) {
        ctx->pc = 0x1869F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869ECu;
        // 0x1869f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869F4u;
        goto label_1869f4;
    }
    ctx->pc = 0x1869ECu;
    SET_GPR_U32(ctx, 31, 0x1869F4u);
    ctx->pc = 0x1869F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869ECu;
    // 0x1869f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x1869ECu, 0x1869F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869F4u;
label_1869f4:
    // 0x1869f4: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1869f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_1869f8:
    // 0x1869f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1869f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1869fc:
    // 0x1869fc: 0xc060d40  jal         func_183500
label_186a00:
    if (ctx->pc == 0x186A00u) {
        ctx->pc = 0x186A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869FCu;
        // 0x186a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A04u;
        goto label_186a04;
    }
    ctx->pc = 0x1869FCu;
    SET_GPR_U32(ctx, 31, 0x186A04u);
    ctx->pc = 0x186A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869FCu;
    // 0x186a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x1869FCu, 0x186A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A04u;
label_186a04:
    // 0x186a04: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x186a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_186a08:
    // 0x186a08: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
label_186a0c:
    if (ctx->pc == 0x186A0Cu) {
        ctx->pc = 0x186A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A08u;
        // 0x186a0c: 0xafa2012c  sw          $v0, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A10u;
        goto label_186a10;
    }
    ctx->pc = 0x186A08u;
    {
        const bool branch_taken_0x186a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A08u;
        // 0x186a0c: 0xafa2012c  sw          $v0, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a08) {
            ctx->pc = 0x186AC8u;
            goto label_186ac8;
        }
    }
    ctx->pc = 0x186A10u;
label_186a10:
    // 0x186a10: 0x8cc311d4  lw          $v1, 0x11D4($a2)
    ctx->pc = 0x186a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4564)));
label_186a14:
    // 0x186a14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x186a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_186a18:
    // 0x186a18: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_186a1c:
    if (ctx->pc == 0x186A1Cu) {
        ctx->pc = 0x186A20u;
        goto label_186a20;
    }
    ctx->pc = 0x186A18u;
    {
        const bool branch_taken_0x186a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a18) {
            ctx->pc = 0x186AC8u;
            goto label_186ac8;
        }
    }
    ctx->pc = 0x186A20u;
label_186a20:
    // 0x186a20: 0x82a301fb  lb          $v1, 0x1FB($s5)
    ctx->pc = 0x186a20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 507)));
label_186a24:
    // 0x186a24: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
label_186a28:
    if (ctx->pc == 0x186A28u) {
        ctx->pc = 0x186A2Cu;
        goto label_186a2c;
    }
    ctx->pc = 0x186A24u;
    {
        const bool branch_taken_0x186a24 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x186a24) {
            ctx->pc = 0x186AC8u;
            goto label_186ac8;
        }
    }
    ctx->pc = 0x186A2Cu;
label_186a2c:
    // 0x186a2c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x186a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186a30:
    // 0x186a30: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x186a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_186a34:
    // 0x186a34: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x186a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_186a38:
    // 0x186a38: 0xc04144e  jal         func_105138
label_186a3c:
    if (ctx->pc == 0x186A3Cu) {
        ctx->pc = 0x186A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A38u;
        // 0x186a3c: 0x26a50110  addiu       $a1, $s5, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A40u;
        goto label_186a40;
    }
    ctx->pc = 0x186A38u;
    SET_GPR_U32(ctx, 31, 0x186A40u);
    ctx->pc = 0x186A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A38u;
    // 0x186a3c: 0x26a50110  addiu       $a1, $s5, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186A38u, 0x186A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A40u;
label_186a40:
    // 0x186a40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x186a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_186a44:
    // 0x186a44: 0xc041494  jal         func_105250
label_186a48:
    if (ctx->pc == 0x186A48u) {
        ctx->pc = 0x186A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A44u;
        // 0x186a48: 0x26a500d0  addiu       $a1, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A4Cu;
        goto label_186a4c;
    }
    ctx->pc = 0x186A44u;
    SET_GPR_U32(ctx, 31, 0x186A4Cu);
    ctx->pc = 0x186A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A44u;
    // 0x186a48: 0x26a500d0  addiu       $a1, $s5, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x186A44u, 0x186A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A4Cu;
label_186a4c:
    // 0x186a4c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x186a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_186a50:
    // 0x186a50: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x186a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_186a54:
    // 0x186a54: 0xc04144e  jal         func_105138
label_186a58:
    if (ctx->pc == 0x186A58u) {
        ctx->pc = 0x186A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A54u;
        // 0x186a58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A5Cu;
        goto label_186a5c;
    }
    ctx->pc = 0x186A54u;
    SET_GPR_U32(ctx, 31, 0x186A5Cu);
    ctx->pc = 0x186A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A54u;
    // 0x186a58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x186A54u, 0x186A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A5Cu;
label_186a5c:
    // 0x186a5c: 0x82a301fb  lb          $v1, 0x1FB($s5)
    ctx->pc = 0x186a5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 507)));
label_186a60:
    // 0x186a60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x186a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_186a64:
    // 0x186a64: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x186a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186a68:
    // 0x186a68: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x186a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_186a6c:
    // 0x186a6c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x186a6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_186a70:
    // 0x186a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186a74:
    // 0x186a74: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x186a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_186a78:
    // 0x186a78: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x186a78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_186a7c:
    // 0x186a7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186a80:
    // 0x186a80: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x186a80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_186a84:
    // 0x186a84: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x186a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_186a88:
    // 0x186a88: 0x82a301fb  lb          $v1, 0x1FB($s5)
    ctx->pc = 0x186a88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 507)));
label_186a8c:
    // 0x186a8c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x186a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_186a90:
    // 0x186a90: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x186a90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_186a94:
    // 0x186a94: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x186a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186a98:
    // 0x186a98: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x186a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_186a9c:
    // 0x186a9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x186a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_186aa0:
    // 0x186aa0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x186aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_186aa4:
    // 0x186aa4: 0x82a301fb  lb          $v1, 0x1FB($s5)
    ctx->pc = 0x186aa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 507)));
label_186aa8:
    // 0x186aa8: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x186aa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_186aac:
    // 0x186aac: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x186aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_186ab0:
    // 0x186ab0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x186ab0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_186ab4:
    // 0x186ab4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x186ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186ab8:
    // 0x186ab8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x186ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_186abc:
    // 0x186abc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_186ac0:
    // 0x186ac0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x186ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_186ac4:
    // 0x186ac4: 0x0  nop
    ctx->pc = 0x186ac4u;
    // NOP
label_186ac8:
    // 0x186ac8: 0x10000075  b           . + 4 + (0x75 << 2)
label_186acc:
    if (ctx->pc == 0x186ACCu) {
        ctx->pc = 0x186ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC8u;
        // 0x186acc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AD0u;
        goto label_186ad0;
    }
    ctx->pc = 0x186AC8u;
    {
        const bool branch_taken_0x186ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC8u;
        // 0x186acc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ac8) {
            ctx->pc = 0x186CA0u;
            goto label_186ca0;
        }
    }
    ctx->pc = 0x186AD0u;
label_186ad0:
    // 0x186ad0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x186ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_186ad4:
    // 0x186ad4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x186ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_186ad8:
    // 0x186ad8: 0x8c660128  lw          $a2, 0x128($v1)
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
label_186adc:
    // 0x186adc: 0x10c0006e  beqz        $a2, . + 4 + (0x6E << 2)
label_186ae0:
    if (ctx->pc == 0x186AE0u) {
        ctx->pc = 0x186AE4u;
        goto label_186ae4;
    }
    ctx->pc = 0x186ADCu;
    {
        const bool branch_taken_0x186adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x186adc) {
            ctx->pc = 0x186C98u;
            goto label_186c98;
        }
    }
    ctx->pc = 0x186AE4u;
label_186ae4:
    // 0x186ae4: 0x8cc311d4  lw          $v1, 0x11D4($a2)
    ctx->pc = 0x186ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4564)));
label_186ae8:
    // 0x186ae8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x186ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_186aec:
    // 0x186aec: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
label_186af0:
    if (ctx->pc == 0x186AF0u) {
        ctx->pc = 0x186AF4u;
        goto label_186af4;
    }
    ctx->pc = 0x186AECu;
    {
        const bool branch_taken_0x186aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186aec) {
            ctx->pc = 0x186C98u;
            goto label_186c98;
        }
    }
    ctx->pc = 0x186AF4u;
label_186af4:
    // 0x186af4: 0xc4c111f8  lwc1        $f1, 0x11F8($a2)
    ctx->pc = 0x186af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186af8:
    // 0x186af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186afc:
    // 0x186afc: 0x0  nop
    ctx->pc = 0x186afcu;
    // NOP
label_186b00:
    // 0x186b00: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x186b00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186b04:
    // 0x186b04: 0x45010064  bc1t        . + 4 + (0x64 << 2)
label_186b08:
    if (ctx->pc == 0x186B08u) {
        ctx->pc = 0x186B0Cu;
        goto label_186b0c;
    }
    ctx->pc = 0x186B04u;
    {
        const bool branch_taken_0x186b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186b04) {
            ctx->pc = 0x186C98u;
            goto label_186c98;
        }
    }
    ctx->pc = 0x186B0Cu;
label_186b0c:
    // 0x186b0c: 0x16200050  bnez        $s1, . + 4 + (0x50 << 2)
label_186b10:
    if (ctx->pc == 0x186B10u) {
        ctx->pc = 0x186B14u;
        goto label_186b14;
    }
    ctx->pc = 0x186B0Cu;
    {
        const bool branch_taken_0x186b0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b0c) {
            ctx->pc = 0x186C50u;
            goto label_186c50;
        }
    }
    ctx->pc = 0x186B14u;
label_186b14:
    // 0x186b14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x186b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186b18:
    // 0x186b18: 0x10000013  b           . + 4 + (0x13 << 2)
label_186b1c:
    if (ctx->pc == 0x186B1Cu) {
        ctx->pc = 0x186B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B18u;
        // 0x186b1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B20u;
        goto label_186b20;
    }
    ctx->pc = 0x186B18u;
    {
        const bool branch_taken_0x186b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B18u;
        // 0x186b1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b18) {
            ctx->pc = 0x186B68u;
            goto label_186b68;
        }
    }
    ctx->pc = 0x186B20u;
label_186b20:
    // 0x186b20: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x186b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_186b24:
    // 0x186b24: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x186b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_186b28:
    // 0x186b28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x186b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_186b2c:
    // 0x186b2c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x186b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_186b30:
    // 0x186b30: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x186b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186b34:
    // 0x186b34: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x186b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_186b38:
    // 0x186b38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_186b3c:
    // 0x186b3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_186b40:
    // 0x186b40: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x186b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_186b44:
    // 0x186b44: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x186b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_186b48:
    // 0x186b48: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x186b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_186b4c:
    // 0x186b4c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x186b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_186b50:
    // 0x186b50: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x186b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_186b54:
    // 0x186b54: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x186b54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_186b58:
    // 0x186b58: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x186b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_186b5c:
    // 0x186b5c: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x186b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
label_186b60:
    // 0x186b60: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x186b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_186b64:
    // 0x186b64: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x186b64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
label_186b68:
    // 0x186b68: 0x9682006a  lhu         $v0, 0x6A($s4)
    ctx->pc = 0x186b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
label_186b6c:
    // 0x186b6c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x186b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_186b70:
    // 0x186b70: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_186b74:
    if (ctx->pc == 0x186B74u) {
        ctx->pc = 0x186B78u;
        goto label_186b78;
    }
    ctx->pc = 0x186B70u;
    {
        const bool branch_taken_0x186b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b70) {
            ctx->pc = 0x186B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186b20;
        }
    }
    ctx->pc = 0x186B78u;
label_186b78:
    // 0x186b78: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x186b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_186b7c:
    // 0x186b7c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_186b80:
    if (ctx->pc == 0x186B80u) {
        ctx->pc = 0x186B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B7Cu;
        // 0x186b80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B84u;
        goto label_186b84;
    }
    ctx->pc = 0x186B7Cu;
    {
        const bool branch_taken_0x186b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B7Cu;
        // 0x186b80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b7c) {
            ctx->pc = 0x186C08u;
            goto label_186c08;
        }
    }
    ctx->pc = 0x186B84u;
label_186b84:
    // 0x186b84: 0x1000001a  b           . + 4 + (0x1A << 2)
label_186b88:
    if (ctx->pc == 0x186B88u) {
        ctx->pc = 0x186B8Cu;
        goto label_186b8c;
    }
    ctx->pc = 0x186B84u;
    {
        const bool branch_taken_0x186b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b84) {
            ctx->pc = 0x186BF0u;
            goto label_186bf0;
        }
    }
    ctx->pc = 0x186B8Cu;
label_186b8c:
    // 0x186b8c: 0x0  nop
    ctx->pc = 0x186b8cu;
    // NOP
label_186b90:
    // 0x186b90: 0x8ea8004c  lw          $t0, 0x4C($s5)
    ctx->pc = 0x186b90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_186b94:
    // 0x186b94: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x186b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_186b98:
    // 0x186b98: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x186b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186b9c:
    // 0x186b9c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x186b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_186ba0:
    // 0x186ba0: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x186ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_186ba4:
    // 0x186ba4: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x186ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_186ba8:
    // 0x186ba8: 0x92a200cd  lbu         $v0, 0xCD($s5)
    ctx->pc = 0x186ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 205)));
label_186bac:
    // 0x186bac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x186bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_186bb0:
    // 0x186bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_186bb4:
    // 0x186bb4: 0x8d050080  lw          $a1, 0x80($t0)
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_186bb8:
    // 0x186bb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_186bbc:
    // 0x186bbc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_186bc0:
    // 0x186bc0: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x186bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_186bc4:
    // 0x186bc4: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x186bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_186bc8:
    // 0x186bc8: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x186bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_186bcc:
    // 0x186bcc: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x186bccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_186bd0:
    // 0x186bd0: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x186bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
label_186bd4:
    // 0x186bd4: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x186bd4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_186bd8:
    // 0x186bd8: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x186bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
label_186bdc:
    // 0x186bdc: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x186bdcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_186be0:
    // 0x186be0: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x186be0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
label_186be4:
    // 0x186be4: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x186be4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_186be8:
    // 0x186be8: 0x7d050030  sq          $a1, 0x30($t0)
    ctx->pc = 0x186be8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 5));
label_186bec:
    // 0x186bec: 0x0  nop
    ctx->pc = 0x186becu;
    // NOP
label_186bf0:
    // 0x186bf0: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_186bf4:
    // 0x186bf4: 0x9442006a  lhu         $v0, 0x6A($v0)
    ctx->pc = 0x186bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
label_186bf8:
    // 0x186bf8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x186bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_186bfc:
    // 0x186bfc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_186c00:
    if (ctx->pc == 0x186C00u) {
        ctx->pc = 0x186C04u;
        goto label_186c04;
    }
    ctx->pc = 0x186BFCu;
    {
        const bool branch_taken_0x186bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186bfc) {
            ctx->pc = 0x186B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186b90;
        }
    }
    ctx->pc = 0x186C04u;
label_186c04:
    // 0x186c04: 0x0  nop
    ctx->pc = 0x186c04u;
    // NOP
label_186c08:
    // 0x186c08: 0x8cc311d4  lw          $v1, 0x11D4($a2)
    ctx->pc = 0x186c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4564)));
label_186c0c:
    // 0x186c0c: 0x92a201fa  lbu         $v0, 0x1FA($s5)
    ctx->pc = 0x186c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 506)));
label_186c10:
    // 0x186c10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x186c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_186c14:
    // 0x186c14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x186c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_186c18:
    // 0x186c18: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186c1c:
    // 0x186c1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_186c20:
    // 0x186c20: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x186c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_186c24:
    // 0x186c24: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x186c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_186c28:
    // 0x186c28: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x186c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_186c2c:
    // 0x186c2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x186c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_186c30:
    // 0x186c30: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x186c30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_186c34:
    // 0x186c34: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x186c34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_186c38:
    // 0x186c38: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x186c38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_186c3c:
    // 0x186c3c: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x186c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
label_186c40:
    // 0x186c40: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x186c40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_186c44:
    // 0x186c44: 0x7c440020  sq          $a0, 0x20($v0)
    ctx->pc = 0x186c44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 4));
label_186c48:
    // 0x186c48: 0x78640030  lq          $a0, 0x30($v1)
    ctx->pc = 0x186c48u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_186c4c:
    // 0x186c4c: 0x7c440030  sq          $a0, 0x30($v0)
    ctx->pc = 0x186c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 4));
label_186c50:
    // 0x186c50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_186c54:
    // 0x186c54: 0xc4c111f8  lwc1        $f1, 0x11F8($a2)
    ctx->pc = 0x186c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186c58:
    // 0x186c58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x186c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_186c5c:
    // 0x186c5c: 0xc4c011f4  lwc1        $f0, 0x11F4($a2)
    ctx->pc = 0x186c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186c60:
    // 0x186c60: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x186c60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_186c64:
    // 0x186c64: 0x0  nop
    ctx->pc = 0x186c64u;
    // NOP
label_186c68:
    // 0x186c68: 0x0  nop
    ctx->pc = 0x186c68u;
    // NOP
label_186c6c:
    // 0x186c6c: 0xc0619c8  jal         func_186720
label_186c70:
    if (ctx->pc == 0x186C70u) {
        ctx->pc = 0x186C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C6Cu;
        // 0x186c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C74u;
        goto label_186c74;
    }
    ctx->pc = 0x186C6Cu;
    SET_GPR_U32(ctx, 31, 0x186C74u);
    ctx->pc = 0x186C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C6Cu;
    // 0x186c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186720u, 0x186C6Cu, 0x186C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C74u;
label_186c74:
    // 0x186c74: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x186c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_186c78:
    // 0x186c78: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x186c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_186c7c:
    // 0x186c7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_186c80:
    if (ctx->pc == 0x186C80u) {
        ctx->pc = 0x186C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C7Cu;
        // 0x186c80: 0x309600ff  andi        $s6, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C84u;
        goto label_186c84;
    }
    ctx->pc = 0x186C7Cu;
    {
        const bool branch_taken_0x186c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C7Cu;
        // 0x186c80: 0x309600ff  andi        $s6, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c7c) {
            ctx->pc = 0x186C98u;
            goto label_186c98;
        }
    }
    ctx->pc = 0x186C84u;
label_186c84:
    // 0x186c84: 0x8ea5008c  lw          $a1, 0x8C($s5)
    ctx->pc = 0x186c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_186c88:
    // 0x186c88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x186c88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_186c8c:
    // 0x186c8c: 0x60f809  jalr        $v1
label_186c90:
    if (ctx->pc == 0x186C90u) {
        ctx->pc = 0x186C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C8Cu;
        // 0x186c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C94u;
        goto label_186c94;
    }
    ctx->pc = 0x186C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186C94u);
        ctx->pc = 0x186C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C8Cu;
        // 0x186c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186C8Cu, 0x186C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186C94u;
label_186c94:
    // 0x186c94: 0x0  nop
    ctx->pc = 0x186c94u;
    // NOP
label_186c98:
    // 0x186c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_186c9c:
    // 0x186c9c: 0x0  nop
    ctx->pc = 0x186c9cu;
    // NOP
label_186ca0:
    // 0x186ca0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x186ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_186ca4:
    // 0x186ca4: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_186ca8:
    if (ctx->pc == 0x186CA8u) {
        ctx->pc = 0x186CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CA4u;
        // 0x186ca8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CACu;
        goto label_186cac;
    }
    ctx->pc = 0x186CA4u;
    {
        const bool branch_taken_0x186ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CA4u;
        // 0x186ca8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ca4) {
            ctx->pc = 0x186AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186ad0;
        }
    }
    ctx->pc = 0x186CACu;
label_186cac:
    // 0x186cac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_186cb0:
    if (ctx->pc == 0x186CB0u) {
        ctx->pc = 0x186CB4u;
        goto label_186cb4;
    }
    ctx->pc = 0x186CACu;
    {
        const bool branch_taken_0x186cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cac) {
            ctx->pc = 0x186D20u;
            goto label_186d20;
        }
    }
    ctx->pc = 0x186CB4u;
label_186cb4:
    // 0x186cb4: 0x0  nop
    ctx->pc = 0x186cb4u;
    // NOP
label_186cb8:
    // 0x186cb8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_186cbc:
    // 0x186cbc: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x186cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_186cc0:
    // 0x186cc0: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x186cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_186cc4:
    // 0x186cc4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x186cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_186cc8:
    // 0x186cc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_186ccc:
    // 0x186ccc: 0x948500c6  lhu         $a1, 0xC6($a0)
    ctx->pc = 0x186cccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
label_186cd0:
    // 0x186cd0: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x186cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_186cd4:
    // 0x186cd4: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_186cd8:
    if (ctx->pc == 0x186CD8u) {
        ctx->pc = 0x186CDCu;
        goto label_186cdc;
    }
    ctx->pc = 0x186CD4u;
    {
        const bool branch_taken_0x186cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cd4) {
            ctx->pc = 0x186D18u;
            goto label_186d18;
        }
    }
    ctx->pc = 0x186CDCu;
label_186cdc:
    // 0x186cdc: 0x948600c6  lhu         $a2, 0xC6($a0)
    ctx->pc = 0x186cdcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
label_186ce0:
    // 0x186ce0: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186ce4:
    // 0x186ce4: 0x2453821  addu        $a3, $s2, $a1
    ctx->pc = 0x186ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_186ce8:
    // 0x186ce8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x186ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_186cec:
    // 0x186cec: 0x30c5fff7  andi        $a1, $a2, 0xFFF7
    ctx->pc = 0x186cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65527);
label_186cf0:
    // 0x186cf0: 0xa48500c6  sh          $a1, 0xC6($a0)
    ctx->pc = 0x186cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 5));
label_186cf4:
    // 0x186cf4: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x186cf4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_186cf8:
    // 0x186cf8: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x186cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_186cfc:
    // 0x186cfc: 0x78e50010  lq          $a1, 0x10($a3)
    ctx->pc = 0x186cfcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_186d00:
    // 0x186d00: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x186d00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
label_186d04:
    // 0x186d04: 0x78e50020  lq          $a1, 0x20($a3)
    ctx->pc = 0x186d04u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_186d08:
    // 0x186d08: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x186d08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
label_186d0c:
    // 0x186d0c: 0x78e50030  lq          $a1, 0x30($a3)
    ctx->pc = 0x186d0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_186d10:
    // 0x186d10: 0x7c850030  sq          $a1, 0x30($a0)
    ctx->pc = 0x186d10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 5));
label_186d14:
    // 0x186d14: 0x0  nop
    ctx->pc = 0x186d14u;
    // NOP
label_186d18:
    // 0x186d18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_186d1c:
    // 0x186d1c: 0x0  nop
    ctx->pc = 0x186d1cu;
    // NOP
label_186d20:
    // 0x186d20: 0x9684006a  lhu         $a0, 0x6A($s4)
    ctx->pc = 0x186d20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
label_186d24:
    // 0x186d24: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x186d24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_186d28:
    // 0x186d28: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
label_186d2c:
    if (ctx->pc == 0x186D2Cu) {
        ctx->pc = 0x186D30u;
        goto label_186d30;
    }
    ctx->pc = 0x186D28u;
    {
        const bool branch_taken_0x186d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d28) {
            ctx->pc = 0x186CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186cb8;
        }
    }
    ctx->pc = 0x186D30u;
label_186d30:
    // 0x186d30: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x186d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_186d34:
    // 0x186d34: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_186d38:
    if (ctx->pc == 0x186D38u) {
        ctx->pc = 0x186D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D34u;
        // 0x186d38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D3Cu;
        goto label_186d3c;
    }
    ctx->pc = 0x186D34u;
    {
        const bool branch_taken_0x186d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D34u;
        // 0x186d38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d34) {
            ctx->pc = 0x186DD8u;
            goto label_186dd8;
        }
    }
    ctx->pc = 0x186D3Cu;
label_186d3c:
    // 0x186d3c: 0x10000020  b           . + 4 + (0x20 << 2)
label_186d40:
    if (ctx->pc == 0x186D40u) {
        ctx->pc = 0x186D44u;
        goto label_186d44;
    }
    ctx->pc = 0x186D3Cu;
    {
        const bool branch_taken_0x186d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d3c) {
            ctx->pc = 0x186DC0u;
            goto label_186dc0;
        }
    }
    ctx->pc = 0x186D44u;
label_186d44:
    // 0x186d44: 0x0  nop
    ctx->pc = 0x186d44u;
    // NOP
label_186d48:
    // 0x186d48: 0x8ea6004c  lw          $a2, 0x4C($s5)
    ctx->pc = 0x186d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_186d4c:
    // 0x186d4c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_186d50:
    // 0x186d50: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x186d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_186d54:
    // 0x186d54: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x186d54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_186d58:
    // 0x186d58: 0x8cc40080  lw          $a0, 0x80($a2)
    ctx->pc = 0x186d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
label_186d5c:
    // 0x186d5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_186d60:
    // 0x186d60: 0x948500c6  lhu         $a1, 0xC6($a0)
    ctx->pc = 0x186d60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
label_186d64:
    // 0x186d64: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x186d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_186d68:
    // 0x186d68: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_186d6c:
    if (ctx->pc == 0x186D6Cu) {
        ctx->pc = 0x186D70u;
        goto label_186d70;
    }
    ctx->pc = 0x186D68u;
    {
        const bool branch_taken_0x186d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d68) {
            ctx->pc = 0x186DB8u;
            goto label_186db8;
        }
    }
    ctx->pc = 0x186D70u;
label_186d70:
    // 0x186d70: 0x948700c6  lhu         $a3, 0xC6($a0)
    ctx->pc = 0x186d70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
label_186d74:
    // 0x186d74: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x186d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_186d78:
    // 0x186d78: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_186d7c:
    // 0x186d7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x186d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_186d80:
    // 0x186d80: 0x30e5fff7  andi        $a1, $a3, 0xFFF7
    ctx->pc = 0x186d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65527);
label_186d84:
    // 0x186d84: 0xa48500c6  sh          $a1, 0xC6($a0)
    ctx->pc = 0x186d84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 5));
label_186d88:
    // 0x186d88: 0x92a500cd  lbu         $a1, 0xCD($s5)
    ctx->pc = 0x186d88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 205)));
label_186d8c:
    // 0x186d8c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x186d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_186d90:
    // 0x186d90: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x186d90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_186d94:
    // 0x186d94: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x186d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_186d98:
    // 0x186d98: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x186d98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_186d9c:
    // 0x186d9c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x186d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_186da0:
    // 0x186da0: 0x78c50010  lq          $a1, 0x10($a2)
    ctx->pc = 0x186da0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_186da4:
    // 0x186da4: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x186da4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
label_186da8:
    // 0x186da8: 0x78c50020  lq          $a1, 0x20($a2)
    ctx->pc = 0x186da8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_186dac:
    // 0x186dac: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x186dacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
label_186db0:
    // 0x186db0: 0x78c50030  lq          $a1, 0x30($a2)
    ctx->pc = 0x186db0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_186db4:
    // 0x186db4: 0x7c850030  sq          $a1, 0x30($a0)
    ctx->pc = 0x186db4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 5));
label_186db8:
    // 0x186db8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_186dbc:
    // 0x186dbc: 0x0  nop
    ctx->pc = 0x186dbcu;
    // NOP
label_186dc0:
    // 0x186dc0: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x186dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_186dc4:
    // 0x186dc4: 0x9484006a  lhu         $a0, 0x6A($a0)
    ctx->pc = 0x186dc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
label_186dc8:
    // 0x186dc8: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x186dc8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_186dcc:
    // 0x186dcc: 0x1480ffde  bnez        $a0, . + 4 + (-0x22 << 2)
label_186dd0:
    if (ctx->pc == 0x186DD0u) {
        ctx->pc = 0x186DD4u;
        goto label_186dd4;
    }
    ctx->pc = 0x186DCCu;
    {
        const bool branch_taken_0x186dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186dcc) {
            ctx->pc = 0x186D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186d48;
        }
    }
    ctx->pc = 0x186DD4u;
label_186dd4:
    // 0x186dd4: 0x0  nop
    ctx->pc = 0x186dd4u;
    // NOP
label_186dd8:
    // 0x186dd8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x186dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_186ddc:
    // 0x186ddc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x186ddcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_186de0:
    // 0x186de0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_186de4:
    // 0x186de4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x186de4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_186de8:
    // 0x186de8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x186de8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_186dec:
    // 0x186dec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x186decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_186df0:
    // 0x186df0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x186df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_186df4:
    // 0x186df4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x186df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_186df8:
    // 0x186df8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_186dfc:
    // 0x186dfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_186e00:
    // 0x186e00: 0x3e00008  jr          $ra
label_186e04:
    if (ctx->pc == 0x186E04u) {
        ctx->pc = 0x186E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E00u;
        // 0x186e04: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186E08u;
        goto label_fallthrough_0x186e00;
    }
    ctx->pc = 0x186E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E00u;
        // 0x186e04: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186e00:
    ctx->pc = 0x186E08u;
}
