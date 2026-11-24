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

// Function: sub_00365AA0
// Address: 0x365aa0 - 0x365f58
void sub_00365AA0_0x365aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365AA0_0x365aa0");
#endif

    switch (ctx->pc) {
        case 0x365aa0u: goto label_365aa0;
        case 0x365aa4u: goto label_365aa4;
        case 0x365aa8u: goto label_365aa8;
        case 0x365aacu: goto label_365aac;
        case 0x365ab0u: goto label_365ab0;
        case 0x365ab4u: goto label_365ab4;
        case 0x365ab8u: goto label_365ab8;
        case 0x365abcu: goto label_365abc;
        case 0x365ac0u: goto label_365ac0;
        case 0x365ac4u: goto label_365ac4;
        case 0x365ac8u: goto label_365ac8;
        case 0x365accu: goto label_365acc;
        case 0x365ad0u: goto label_365ad0;
        case 0x365ad4u: goto label_365ad4;
        case 0x365ad8u: goto label_365ad8;
        case 0x365adcu: goto label_365adc;
        case 0x365ae0u: goto label_365ae0;
        case 0x365ae4u: goto label_365ae4;
        case 0x365ae8u: goto label_365ae8;
        case 0x365aecu: goto label_365aec;
        case 0x365af0u: goto label_365af0;
        case 0x365af4u: goto label_365af4;
        case 0x365af8u: goto label_365af8;
        case 0x365afcu: goto label_365afc;
        case 0x365b00u: goto label_365b00;
        case 0x365b04u: goto label_365b04;
        case 0x365b08u: goto label_365b08;
        case 0x365b0cu: goto label_365b0c;
        case 0x365b10u: goto label_365b10;
        case 0x365b14u: goto label_365b14;
        case 0x365b18u: goto label_365b18;
        case 0x365b1cu: goto label_365b1c;
        case 0x365b20u: goto label_365b20;
        case 0x365b24u: goto label_365b24;
        case 0x365b28u: goto label_365b28;
        case 0x365b2cu: goto label_365b2c;
        case 0x365b30u: goto label_365b30;
        case 0x365b34u: goto label_365b34;
        case 0x365b38u: goto label_365b38;
        case 0x365b3cu: goto label_365b3c;
        case 0x365b40u: goto label_365b40;
        case 0x365b44u: goto label_365b44;
        case 0x365b48u: goto label_365b48;
        case 0x365b4cu: goto label_365b4c;
        case 0x365b50u: goto label_365b50;
        case 0x365b54u: goto label_365b54;
        case 0x365b58u: goto label_365b58;
        case 0x365b5cu: goto label_365b5c;
        case 0x365b60u: goto label_365b60;
        case 0x365b64u: goto label_365b64;
        case 0x365b68u: goto label_365b68;
        case 0x365b6cu: goto label_365b6c;
        case 0x365b70u: goto label_365b70;
        case 0x365b74u: goto label_365b74;
        case 0x365b78u: goto label_365b78;
        case 0x365b7cu: goto label_365b7c;
        case 0x365b80u: goto label_365b80;
        case 0x365b84u: goto label_365b84;
        case 0x365b88u: goto label_365b88;
        case 0x365b8cu: goto label_365b8c;
        case 0x365b90u: goto label_365b90;
        case 0x365b94u: goto label_365b94;
        case 0x365b98u: goto label_365b98;
        case 0x365b9cu: goto label_365b9c;
        case 0x365ba0u: goto label_365ba0;
        case 0x365ba4u: goto label_365ba4;
        case 0x365ba8u: goto label_365ba8;
        case 0x365bacu: goto label_365bac;
        case 0x365bb0u: goto label_365bb0;
        case 0x365bb4u: goto label_365bb4;
        case 0x365bb8u: goto label_365bb8;
        case 0x365bbcu: goto label_365bbc;
        case 0x365bc0u: goto label_365bc0;
        case 0x365bc4u: goto label_365bc4;
        case 0x365bc8u: goto label_365bc8;
        case 0x365bccu: goto label_365bcc;
        case 0x365bd0u: goto label_365bd0;
        case 0x365bd4u: goto label_365bd4;
        case 0x365bd8u: goto label_365bd8;
        case 0x365bdcu: goto label_365bdc;
        case 0x365be0u: goto label_365be0;
        case 0x365be4u: goto label_365be4;
        case 0x365be8u: goto label_365be8;
        case 0x365becu: goto label_365bec;
        case 0x365bf0u: goto label_365bf0;
        case 0x365bf4u: goto label_365bf4;
        case 0x365bf8u: goto label_365bf8;
        case 0x365bfcu: goto label_365bfc;
        case 0x365c00u: goto label_365c00;
        case 0x365c04u: goto label_365c04;
        case 0x365c08u: goto label_365c08;
        case 0x365c0cu: goto label_365c0c;
        case 0x365c10u: goto label_365c10;
        case 0x365c14u: goto label_365c14;
        case 0x365c18u: goto label_365c18;
        case 0x365c1cu: goto label_365c1c;
        case 0x365c20u: goto label_365c20;
        case 0x365c24u: goto label_365c24;
        case 0x365c28u: goto label_365c28;
        case 0x365c2cu: goto label_365c2c;
        case 0x365c30u: goto label_365c30;
        case 0x365c34u: goto label_365c34;
        case 0x365c38u: goto label_365c38;
        case 0x365c3cu: goto label_365c3c;
        case 0x365c40u: goto label_365c40;
        case 0x365c44u: goto label_365c44;
        case 0x365c48u: goto label_365c48;
        case 0x365c4cu: goto label_365c4c;
        case 0x365c50u: goto label_365c50;
        case 0x365c54u: goto label_365c54;
        case 0x365c58u: goto label_365c58;
        case 0x365c5cu: goto label_365c5c;
        case 0x365c60u: goto label_365c60;
        case 0x365c64u: goto label_365c64;
        case 0x365c68u: goto label_365c68;
        case 0x365c6cu: goto label_365c6c;
        case 0x365c70u: goto label_365c70;
        case 0x365c74u: goto label_365c74;
        case 0x365c78u: goto label_365c78;
        case 0x365c7cu: goto label_365c7c;
        case 0x365c80u: goto label_365c80;
        case 0x365c84u: goto label_365c84;
        case 0x365c88u: goto label_365c88;
        case 0x365c8cu: goto label_365c8c;
        case 0x365c90u: goto label_365c90;
        case 0x365c94u: goto label_365c94;
        case 0x365c98u: goto label_365c98;
        case 0x365c9cu: goto label_365c9c;
        case 0x365ca0u: goto label_365ca0;
        case 0x365ca4u: goto label_365ca4;
        case 0x365ca8u: goto label_365ca8;
        case 0x365cacu: goto label_365cac;
        case 0x365cb0u: goto label_365cb0;
        case 0x365cb4u: goto label_365cb4;
        case 0x365cb8u: goto label_365cb8;
        case 0x365cbcu: goto label_365cbc;
        case 0x365cc0u: goto label_365cc0;
        case 0x365cc4u: goto label_365cc4;
        case 0x365cc8u: goto label_365cc8;
        case 0x365cccu: goto label_365ccc;
        case 0x365cd0u: goto label_365cd0;
        case 0x365cd4u: goto label_365cd4;
        case 0x365cd8u: goto label_365cd8;
        case 0x365cdcu: goto label_365cdc;
        case 0x365ce0u: goto label_365ce0;
        case 0x365ce4u: goto label_365ce4;
        case 0x365ce8u: goto label_365ce8;
        case 0x365cecu: goto label_365cec;
        case 0x365cf0u: goto label_365cf0;
        case 0x365cf4u: goto label_365cf4;
        case 0x365cf8u: goto label_365cf8;
        case 0x365cfcu: goto label_365cfc;
        case 0x365d00u: goto label_365d00;
        case 0x365d04u: goto label_365d04;
        case 0x365d08u: goto label_365d08;
        case 0x365d0cu: goto label_365d0c;
        case 0x365d10u: goto label_365d10;
        case 0x365d14u: goto label_365d14;
        case 0x365d18u: goto label_365d18;
        case 0x365d1cu: goto label_365d1c;
        case 0x365d20u: goto label_365d20;
        case 0x365d24u: goto label_365d24;
        case 0x365d28u: goto label_365d28;
        case 0x365d2cu: goto label_365d2c;
        case 0x365d30u: goto label_365d30;
        case 0x365d34u: goto label_365d34;
        case 0x365d38u: goto label_365d38;
        case 0x365d3cu: goto label_365d3c;
        case 0x365d40u: goto label_365d40;
        case 0x365d44u: goto label_365d44;
        case 0x365d48u: goto label_365d48;
        case 0x365d4cu: goto label_365d4c;
        case 0x365d50u: goto label_365d50;
        case 0x365d54u: goto label_365d54;
        case 0x365d58u: goto label_365d58;
        case 0x365d5cu: goto label_365d5c;
        case 0x365d60u: goto label_365d60;
        case 0x365d64u: goto label_365d64;
        case 0x365d68u: goto label_365d68;
        case 0x365d6cu: goto label_365d6c;
        case 0x365d70u: goto label_365d70;
        case 0x365d74u: goto label_365d74;
        case 0x365d78u: goto label_365d78;
        case 0x365d7cu: goto label_365d7c;
        case 0x365d80u: goto label_365d80;
        case 0x365d84u: goto label_365d84;
        case 0x365d88u: goto label_365d88;
        case 0x365d8cu: goto label_365d8c;
        case 0x365d90u: goto label_365d90;
        case 0x365d94u: goto label_365d94;
        case 0x365d98u: goto label_365d98;
        case 0x365d9cu: goto label_365d9c;
        case 0x365da0u: goto label_365da0;
        case 0x365da4u: goto label_365da4;
        case 0x365da8u: goto label_365da8;
        case 0x365dacu: goto label_365dac;
        case 0x365db0u: goto label_365db0;
        case 0x365db4u: goto label_365db4;
        case 0x365db8u: goto label_365db8;
        case 0x365dbcu: goto label_365dbc;
        case 0x365dc0u: goto label_365dc0;
        case 0x365dc4u: goto label_365dc4;
        case 0x365dc8u: goto label_365dc8;
        case 0x365dccu: goto label_365dcc;
        case 0x365dd0u: goto label_365dd0;
        case 0x365dd4u: goto label_365dd4;
        case 0x365dd8u: goto label_365dd8;
        case 0x365ddcu: goto label_365ddc;
        case 0x365de0u: goto label_365de0;
        case 0x365de4u: goto label_365de4;
        case 0x365de8u: goto label_365de8;
        case 0x365decu: goto label_365dec;
        case 0x365df0u: goto label_365df0;
        case 0x365df4u: goto label_365df4;
        case 0x365df8u: goto label_365df8;
        case 0x365dfcu: goto label_365dfc;
        case 0x365e00u: goto label_365e00;
        case 0x365e04u: goto label_365e04;
        case 0x365e08u: goto label_365e08;
        case 0x365e0cu: goto label_365e0c;
        case 0x365e10u: goto label_365e10;
        case 0x365e14u: goto label_365e14;
        case 0x365e18u: goto label_365e18;
        case 0x365e1cu: goto label_365e1c;
        case 0x365e20u: goto label_365e20;
        case 0x365e24u: goto label_365e24;
        case 0x365e28u: goto label_365e28;
        case 0x365e2cu: goto label_365e2c;
        case 0x365e30u: goto label_365e30;
        case 0x365e34u: goto label_365e34;
        case 0x365e38u: goto label_365e38;
        case 0x365e3cu: goto label_365e3c;
        case 0x365e40u: goto label_365e40;
        case 0x365e44u: goto label_365e44;
        case 0x365e48u: goto label_365e48;
        case 0x365e4cu: goto label_365e4c;
        case 0x365e50u: goto label_365e50;
        case 0x365e54u: goto label_365e54;
        case 0x365e58u: goto label_365e58;
        case 0x365e5cu: goto label_365e5c;
        case 0x365e60u: goto label_365e60;
        case 0x365e64u: goto label_365e64;
        case 0x365e68u: goto label_365e68;
        case 0x365e6cu: goto label_365e6c;
        case 0x365e70u: goto label_365e70;
        case 0x365e74u: goto label_365e74;
        case 0x365e78u: goto label_365e78;
        case 0x365e7cu: goto label_365e7c;
        case 0x365e80u: goto label_365e80;
        case 0x365e84u: goto label_365e84;
        case 0x365e88u: goto label_365e88;
        case 0x365e8cu: goto label_365e8c;
        case 0x365e90u: goto label_365e90;
        case 0x365e94u: goto label_365e94;
        case 0x365e98u: goto label_365e98;
        case 0x365e9cu: goto label_365e9c;
        case 0x365ea0u: goto label_365ea0;
        case 0x365ea4u: goto label_365ea4;
        case 0x365ea8u: goto label_365ea8;
        case 0x365eacu: goto label_365eac;
        case 0x365eb0u: goto label_365eb0;
        case 0x365eb4u: goto label_365eb4;
        case 0x365eb8u: goto label_365eb8;
        case 0x365ebcu: goto label_365ebc;
        case 0x365ec0u: goto label_365ec0;
        case 0x365ec4u: goto label_365ec4;
        case 0x365ec8u: goto label_365ec8;
        case 0x365eccu: goto label_365ecc;
        case 0x365ed0u: goto label_365ed0;
        case 0x365ed4u: goto label_365ed4;
        case 0x365ed8u: goto label_365ed8;
        case 0x365edcu: goto label_365edc;
        case 0x365ee0u: goto label_365ee0;
        case 0x365ee4u: goto label_365ee4;
        case 0x365ee8u: goto label_365ee8;
        case 0x365eecu: goto label_365eec;
        case 0x365ef0u: goto label_365ef0;
        case 0x365ef4u: goto label_365ef4;
        case 0x365ef8u: goto label_365ef8;
        case 0x365efcu: goto label_365efc;
        case 0x365f00u: goto label_365f00;
        case 0x365f04u: goto label_365f04;
        case 0x365f08u: goto label_365f08;
        case 0x365f0cu: goto label_365f0c;
        case 0x365f10u: goto label_365f10;
        case 0x365f14u: goto label_365f14;
        case 0x365f18u: goto label_365f18;
        case 0x365f1cu: goto label_365f1c;
        case 0x365f20u: goto label_365f20;
        case 0x365f24u: goto label_365f24;
        case 0x365f28u: goto label_365f28;
        case 0x365f2cu: goto label_365f2c;
        case 0x365f30u: goto label_365f30;
        case 0x365f34u: goto label_365f34;
        case 0x365f38u: goto label_365f38;
        case 0x365f3cu: goto label_365f3c;
        case 0x365f40u: goto label_365f40;
        case 0x365f44u: goto label_365f44;
        case 0x365f48u: goto label_365f48;
        case 0x365f4cu: goto label_365f4c;
        case 0x365f50u: goto label_365f50;
        case 0x365f54u: goto label_365f54;
        default: break;
    }

    ctx->pc = 0x365aa0u;

label_365aa0:
    // 0x365aa0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x365aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_365aa4:
    // 0x365aa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x365aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_365aa8:
    // 0x365aa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x365aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_365aac:
    // 0x365aac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x365aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_365ab0:
    // 0x365ab0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x365ab0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_365ab4:
    // 0x365ab4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x365ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_365ab8:
    // 0x365ab8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x365ab8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_365abc:
    // 0x365abc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x365abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_365ac0:
    // 0x365ac0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x365ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_365ac4:
    // 0x365ac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x365ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_365ac8:
    // 0x365ac8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x365ac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_365acc:
    // 0x365acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x365accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_365ad0:
    // 0x365ad0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x365ad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_365ad4:
    // 0x365ad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x365ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_365ad8:
    // 0x365ad8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x365ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_365adc:
    // 0x365adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_365ae0:
    // 0x365ae0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x365ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_365ae4:
    // 0x365ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_365ae8:
    // 0x365ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_365aec:
    // 0x365aec: 0xc096c80  jal         func_25B200
label_365af0:
    if (ctx->pc == 0x365AF0u) {
        ctx->pc = 0x365AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365AECu;
        // 0x365af0: 0xa3ab00af  sb          $t3, 0xAF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365AF4u;
        goto label_365af4;
    }
    ctx->pc = 0x365AECu;
    SET_GPR_U32(ctx, 31, 0x365AF4u);
    ctx->pc = 0x365AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AECu;
    // 0x365af0: 0xa3ab00af  sb          $t3, 0xAF($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x365AECu, 0x365AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AF4u;
label_365af4:
    // 0x365af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365af8:
    // 0x365af8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_365afc:
    if (ctx->pc == 0x365AFCu) {
        ctx->pc = 0x365B00u;
        goto label_365b00;
    }
    ctx->pc = 0x365AF8u;
    {
        const bool branch_taken_0x365af8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x365af8) {
            ctx->pc = 0x365B08u;
            goto label_365b08;
        }
    }
    ctx->pc = 0x365B00u;
label_365b00:
    // 0x365b00: 0x10000109  b           . + 4 + (0x109 << 2)
label_365b04:
    if (ctx->pc == 0x365B04u) {
        ctx->pc = 0x365B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B00u;
        // 0x365b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365B08u;
        goto label_365b08;
    }
    ctx->pc = 0x365B00u;
    {
        const bool branch_taken_0x365b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B00u;
        // 0x365b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b00) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365B08u;
label_365b08:
    // 0x365b08: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_365b0c:
    if (ctx->pc == 0x365B0Cu) {
        ctx->pc = 0x365B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B08u;
        // 0x365b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365B10u;
        goto label_365b10;
    }
    ctx->pc = 0x365B08u;
    {
        const bool branch_taken_0x365b08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x365B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B08u;
        // 0x365b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b08) {
            ctx->pc = 0x365B18u;
            goto label_365b18;
        }
    }
    ctx->pc = 0x365B10u;
label_365b10:
    // 0x365b10: 0x10000105  b           . + 4 + (0x105 << 2)
label_365b14:
    if (ctx->pc == 0x365B14u) {
        ctx->pc = 0x365B18u;
        goto label_365b18;
    }
    ctx->pc = 0x365B10u;
    {
        const bool branch_taken_0x365b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b10) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365B18u;
label_365b18:
    // 0x365b18: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x365b18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
label_365b1c:
    // 0x365b1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x365b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365b20:
    // 0x365b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x365b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365b24:
    // 0x365b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x365b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365b28:
    // 0x365b28: 0x240705b0  addiu       $a3, $zero, 0x5B0
    ctx->pc = 0x365b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
label_365b2c:
    // 0x365b2c: 0xc0b300c  jal         func_2CC030
label_365b30:
    if (ctx->pc == 0x365B30u) {
        ctx->pc = 0x365B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B2Cu;
        // 0x365b30: 0x25085a30  addiu       $t0, $t0, 0x5A30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365B34u;
        goto label_365b34;
    }
    ctx->pc = 0x365B2Cu;
    SET_GPR_U32(ctx, 31, 0x365B34u);
    ctx->pc = 0x365B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B2Cu;
    // 0x365b30: 0x25085a30  addiu       $t0, $t0, 0x5A30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x365B2Cu, 0x365B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B34u;
label_365b34:
    // 0x365b34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365b38:
    // 0x365b38: 0x122000f9  beqz        $s1, . + 4 + (0xF9 << 2)
label_365b3c:
    if (ctx->pc == 0x365B3Cu) {
        ctx->pc = 0x365B40u;
        goto label_365b40;
    }
    ctx->pc = 0x365B38u;
    {
        const bool branch_taken_0x365b38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b38) {
            ctx->pc = 0x365F20u;
            goto label_365f20;
        }
    }
    ctx->pc = 0x365B40u;
label_365b40:
    // 0x365b40: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365b44:
    // 0x365b44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x365b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365b48:
    // 0x365b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365b4c:
    // 0x365b4c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x365b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_365b50:
    // 0x365b50: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x365b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_365b54:
    // 0x365b54: 0x320f809  jalr        $t9
label_365b58:
    if (ctx->pc == 0x365B58u) {
        ctx->pc = 0x365B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B54u;
        // 0x365b58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365B5Cu;
        goto label_365b5c;
    }
    ctx->pc = 0x365B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365B5Cu);
        ctx->pc = 0x365B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B54u;
        // 0x365b58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365B54u, 0x365B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365B5Cu;
label_365b5c:
    // 0x365b5c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x365b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_365b60:
    // 0x365b60: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x365b60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_365b64:
    // 0x365b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_365b68:
    // 0x365b68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x365b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_365b6c:
    // 0x365b6c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x365b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_365b70:
    // 0x365b70: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x365b70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_365b74:
    // 0x365b74: 0xc0c067c  jal         func_3019F0
label_365b78:
    if (ctx->pc == 0x365B78u) {
        ctx->pc = 0x365B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B74u;
        // 0x365b78: 0x27aa00b0  addiu       $t2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365B7Cu;
        goto label_365b7c;
    }
    ctx->pc = 0x365B74u;
    SET_GPR_U32(ctx, 31, 0x365B7Cu);
    ctx->pc = 0x365B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B74u;
    // 0x365b78: 0x27aa00b0  addiu       $t2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x365B74u, 0x365B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B7Cu;
label_365b7c:
    // 0x365b7c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x365b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_365b80:
    // 0x365b80: 0xc076664  jal         func_1D9990
label_365b84:
    if (ctx->pc == 0x365B84u) {
        ctx->pc = 0x365B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B80u;
        // 0x365b84: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365B88u;
        goto label_365b88;
    }
    ctx->pc = 0x365B80u;
    SET_GPR_U32(ctx, 31, 0x365B88u);
    ctx->pc = 0x365B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B80u;
    // 0x365b84: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x365B80u, 0x365B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B88u;
label_365b88:
    // 0x365b88: 0xc0765d8  jal         func_1D9760
label_365b8c:
    if (ctx->pc == 0x365B8Cu) {
        ctx->pc = 0x365B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B88u;
        // 0x365b8c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x365B90u;
        goto label_365b90;
    }
    ctx->pc = 0x365B88u;
    SET_GPR_U32(ctx, 31, 0x365B90u);
    ctx->pc = 0x365B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B88u;
    // 0x365b8c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x365B88u, 0x365B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B90u;
label_365b90:
    // 0x365b90: 0x93a400c0  lbu         $a0, 0xC0($sp)
    ctx->pc = 0x365b90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_365b94:
    // 0x365b94: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x365b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_365b98:
    // 0x365b98: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x365b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
label_365b9c:
    // 0x365b9c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x365b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_365ba0:
    // 0x365ba0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x365ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_365ba4:
    // 0x365ba4: 0x2463185c  addiu       $v1, $v1, 0x185C
    ctx->pc = 0x365ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6236));
label_365ba8:
    // 0x365ba8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x365ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_365bac:
    // 0x365bac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x365bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_365bb0:
    // 0x365bb0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x365bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_365bb4:
    // 0x365bb4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x365bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_365bb8:
    // 0x365bb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x365bb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_365bbc:
    // 0x365bbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365bbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_365bc0:
    // 0x365bc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x365bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_365bc4:
    // 0x365bc4: 0x0  nop
    ctx->pc = 0x365bc4u;
    // NOP
label_365bc8:
    // 0x365bc8: 0xa6220526  sh          $v0, 0x526($s1)
    ctx->pc = 0x365bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 2));
label_365bcc:
    // 0x365bcc: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x365bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_365bd0:
    // 0x365bd0: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x365bd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_365bd4:
    // 0x365bd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_365bd8:
    if (ctx->pc == 0x365BD8u) {
        ctx->pc = 0x365BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BD4u;
        // 0x365bd8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365BDCu;
        goto label_365bdc;
    }
    ctx->pc = 0x365BD4u;
    {
        const bool branch_taken_0x365bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x365BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BD4u;
        // 0x365bd8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365bd4) {
            ctx->pc = 0x365BE0u;
            goto label_365be0;
        }
    }
    ctx->pc = 0x365BDCu;
label_365bdc:
    // 0x365bdc: 0xa6220526  sh          $v0, 0x526($s1)
    ctx->pc = 0x365bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 2));
label_365be0:
    // 0x365be0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x365be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_365be4:
    // 0x365be4: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x365be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
label_365be8:
    // 0x365be8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_365bec:
    if (ctx->pc == 0x365BECu) {
        ctx->pc = 0x365BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BE8u;
        // 0x365bec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365BF0u;
        goto label_365bf0;
    }
    ctx->pc = 0x365BE8u;
    {
        const bool branch_taken_0x365be8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x365BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BE8u;
        // 0x365bec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365be8) {
            ctx->pc = 0x365BF8u;
            goto label_365bf8;
        }
    }
    ctx->pc = 0x365BF0u;
label_365bf0:
    // 0x365bf0: 0xa6220526  sh          $v0, 0x526($s1)
    ctx->pc = 0x365bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 2));
label_365bf4:
    // 0x365bf4: 0x0  nop
    ctx->pc = 0x365bf4u;
    // NOP
label_365bf8:
    // 0x365bf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x365bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_365bfc:
    // 0x365bfc: 0xa6220528  sh          $v0, 0x528($s1)
    ctx->pc = 0x365bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 2));
label_365c00:
    // 0x365c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_365c04:
    // 0x365c04: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x365c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_365c08:
    // 0x365c08: 0xa622052a  sh          $v0, 0x52A($s1)
    ctx->pc = 0x365c08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 2));
label_365c0c:
    // 0x365c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x365c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365c10:
    // 0x365c10: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x365c10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
label_365c14:
    // 0x365c14: 0xc0c08a8  jal         func_3022A0
label_365c18:
    if (ctx->pc == 0x365C18u) {
        ctx->pc = 0x365C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365C14u;
        // 0x365c18: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365C1Cu;
        goto label_365c1c;
    }
    ctx->pc = 0x365C14u;
    SET_GPR_U32(ctx, 31, 0x365C1Cu);
    ctx->pc = 0x365C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C14u;
    // 0x365c18: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x365C14u, 0x365C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C1Cu;
label_365c1c:
    // 0x365c1c: 0xae200594  sw          $zero, 0x594($s1)
    ctx->pc = 0x365c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1428), GPR_U32(ctx, 0));
label_365c20:
    // 0x365c20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x365c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_365c24:
    // 0x365c24: 0xae200598  sw          $zero, 0x598($s1)
    ctx->pc = 0x365c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 0));
label_365c28:
    // 0x365c28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x365c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_365c2c:
    // 0x365c2c: 0xae20059c  sw          $zero, 0x59C($s1)
    ctx->pc = 0x365c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1436), GPR_U32(ctx, 0));
label_365c30:
    // 0x365c30: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x365c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_365c34:
    // 0x365c34: 0xae2005a0  sw          $zero, 0x5A0($s1)
    ctx->pc = 0x365c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
label_365c38:
    // 0x365c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365c3c:
    // 0x365c3c: 0xae2505a4  sw          $a1, 0x5A4($s1)
    ctx->pc = 0x365c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 5));
label_365c40:
    // 0x365c40: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x365c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
label_365c44:
    // 0x365c44: 0xa22205a8  sb          $v0, 0x5A8($s1)
    ctx->pc = 0x365c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1448), (uint8_t)GPR_U32(ctx, 2));
label_365c48:
    // 0x365c48: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x365c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_365c4c:
    // 0x365c4c: 0xa22205a9  sb          $v0, 0x5A9($s1)
    ctx->pc = 0x365c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1449), (uint8_t)GPR_U32(ctx, 2));
label_365c50:
    // 0x365c50: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x365c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_365c54:
    // 0x365c54: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x365c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
label_365c58:
    // 0x365c58: 0xae320590  sw          $s2, 0x590($s1)
    ctx->pc = 0x365c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1424), GPR_U32(ctx, 18));
label_365c5c:
    // 0x365c5c: 0xa23705ae  sb          $s7, 0x5AE($s1)
    ctx->pc = 0x365c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1454), (uint8_t)GPR_U32(ctx, 23));
label_365c60:
    // 0x365c60: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x365c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_365c64:
    // 0x365c64: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x365c64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
label_365c68:
    // 0x365c68: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x365c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365c6c:
    // 0x365c6c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x365c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_365c70:
    // 0x365c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_365c74:
    // 0x365c74: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x365c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_365c78:
    // 0x365c78: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365c7c:
    // 0x365c7c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x365c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365c80:
    // 0x365c80: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365c84:
    // 0x365c84: 0x320f809  jalr        $t9
label_365c88:
    if (ctx->pc == 0x365C88u) {
        ctx->pc = 0x365C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365C84u;
        // 0x365c88: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365C8Cu;
        goto label_365c8c;
    }
    ctx->pc = 0x365C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365C8Cu);
        ctx->pc = 0x365C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365C84u;
        // 0x365c88: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365C84u, 0x365C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365C8Cu;
label_365c8c:
    // 0x365c8c: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x365c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_365c90:
    // 0x365c90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x365c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_365c94:
    // 0x365c94: 0xa22305aa  sb          $v1, 0x5AA($s1)
    ctx->pc = 0x365c94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 3));
label_365c98:
    // 0x365c98: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x365c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_365c9c:
    // 0x365c9c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x365c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365ca0:
    // 0x365ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365ca4:
    // 0x365ca4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x365ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_365ca8:
    // 0x365ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_365cac:
    // 0x365cac: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x365cacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_365cb0:
    // 0x365cb0: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365cb4:
    // 0x365cb4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x365cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365cb8:
    // 0x365cb8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365cbc:
    // 0x365cbc: 0x320f809  jalr        $t9
label_365cc0:
    if (ctx->pc == 0x365CC0u) {
        ctx->pc = 0x365CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CBCu;
        // 0x365cc0: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365CC4u;
        goto label_365cc4;
    }
    ctx->pc = 0x365CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365CC4u);
        ctx->pc = 0x365CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CBCu;
        // 0x365cc0: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365CBCu, 0x365CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365CC4u;
label_365cc4:
    // 0x365cc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365cc8:
    // 0x365cc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365cc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365ccc:
    // 0x365ccc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_365cd0:
    if (ctx->pc == 0x365CD0u) {
        ctx->pc = 0x365CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CCCu;
        // 0x365cd0: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365CD4u;
        goto label_365cd4;
    }
    ctx->pc = 0x365CCCu;
    {
        const bool branch_taken_0x365ccc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x365CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CCCu;
        // 0x365cd0: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ccc) {
            ctx->pc = 0x365CDCu;
            goto label_365cdc;
        }
    }
    ctx->pc = 0x365CD4u;
label_365cd4:
    // 0x365cd4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x365cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_365cd8:
    // 0x365cd8: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x365cd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_365cdc:
    // 0x365cdc: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x365cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_365ce0:
    // 0x365ce0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x365ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_365ce4:
    // 0x365ce4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x365ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_365ce8:
    // 0x365ce8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x365ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_365cec:
    // 0x365cec: 0xa22305ab  sb          $v1, 0x5AB($s1)
    ctx->pc = 0x365cecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1451), (uint8_t)GPR_U32(ctx, 3));
label_365cf0:
    // 0x365cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365cf4:
    // 0x365cf4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x365cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365cf8:
    // 0x365cf8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x365cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_365cfc:
    // 0x365cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_365d00:
    // 0x365d00: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x365d00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_365d04:
    // 0x365d04: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365d08:
    // 0x365d08: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x365d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365d0c:
    // 0x365d0c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365d10:
    // 0x365d10: 0x320f809  jalr        $t9
label_365d14:
    if (ctx->pc == 0x365D14u) {
        ctx->pc = 0x365D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D10u;
        // 0x365d14: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D18u;
        goto label_365d18;
    }
    ctx->pc = 0x365D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365D18u);
        ctx->pc = 0x365D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D10u;
        // 0x365d14: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365D10u, 0x365D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365D18u;
label_365d18:
    // 0x365d18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365d1c:
    // 0x365d1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365d20:
    // 0x365d20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x365d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_365d24:
    // 0x365d24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_365d28:
    if (ctx->pc == 0x365D28u) {
        ctx->pc = 0x365D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D24u;
        // 0x365d28: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D2Cu;
        goto label_365d2c;
    }
    ctx->pc = 0x365D24u;
    {
        const bool branch_taken_0x365d24 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x365D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D24u;
        // 0x365d28: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d24) {
            ctx->pc = 0x365D34u;
            goto label_365d34;
        }
    }
    ctx->pc = 0x365D2Cu;
label_365d2c:
    // 0x365d2c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x365d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_365d30:
    // 0x365d30: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x365d30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_365d34:
    // 0x365d34: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x365d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_365d38:
    // 0x365d38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x365d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_365d3c:
    // 0x365d3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x365d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_365d40:
    // 0x365d40: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x365d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_365d44:
    // 0x365d44: 0xa22305ac  sb          $v1, 0x5AC($s1)
    ctx->pc = 0x365d44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1452), (uint8_t)GPR_U32(ctx, 3));
label_365d48:
    // 0x365d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365d4c:
    // 0x365d4c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x365d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365d50:
    // 0x365d50: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x365d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_365d54:
    // 0x365d54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_365d58:
    // 0x365d58: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x365d58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_365d5c:
    // 0x365d5c: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365d60:
    // 0x365d60: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x365d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_365d64:
    // 0x365d64: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365d68:
    // 0x365d68: 0x320f809  jalr        $t9
label_365d6c:
    if (ctx->pc == 0x365D6Cu) {
        ctx->pc = 0x365D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D68u;
        // 0x365d6c: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D70u;
        goto label_365d70;
    }
    ctx->pc = 0x365D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365D70u);
        ctx->pc = 0x365D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D68u;
        // 0x365d6c: 0x29302  srl         $s2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365D68u, 0x365D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365D70u;
label_365d70:
    // 0x365d70: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x365d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_365d74:
    // 0x365d74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x365d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_365d78:
    // 0x365d78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x365d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_365d7c:
    // 0x365d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x365d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_365d80:
    // 0x365d80: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_365d84:
    if (ctx->pc == 0x365D84u) {
        ctx->pc = 0x365D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D80u;
        // 0x365d84: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D88u;
        goto label_365d88;
    }
    ctx->pc = 0x365D80u;
    {
        const bool branch_taken_0x365d80 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x365D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D80u;
        // 0x365d84: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d80) {
            ctx->pc = 0x365D90u;
            goto label_365d90;
        }
    }
    ctx->pc = 0x365D88u;
label_365d88:
    // 0x365d88: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x365d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_365d8c:
    // 0x365d8c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x365d8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_365d90:
    // 0x365d90: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x365d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_365d94:
    // 0x365d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x365d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_365d98:
    // 0x365d98: 0xa22205ad  sb          $v0, 0x5AD($s1)
    ctx->pc = 0x365d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1453), (uint8_t)GPR_U32(ctx, 2));
label_365d9c:
    // 0x365d9c: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365da0:
    // 0x365da0: 0x923205aa  lbu         $s2, 0x5AA($s1)
    ctx->pc = 0x365da0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1450)));
label_365da4:
    // 0x365da4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365da8:
    // 0x365da8: 0x320f809  jalr        $t9
label_365dac:
    if (ctx->pc == 0x365DACu) {
        ctx->pc = 0x365DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DA8u;
        // 0x365dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365DB0u;
        goto label_365db0;
    }
    ctx->pc = 0x365DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365DB0u);
        ctx->pc = 0x365DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DA8u;
        // 0x365dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365DA8u, 0x365DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365DB0u;
label_365db0:
    // 0x365db0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365db4:
    // 0x365db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365db8:
    // 0x365db8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x365db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_365dbc:
    // 0x365dbc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_365dc0:
    if (ctx->pc == 0x365DC0u) {
        ctx->pc = 0x365DC4u;
        goto label_365dc4;
    }
    ctx->pc = 0x365DBCu;
    {
        const bool branch_taken_0x365dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365dbc) {
            ctx->pc = 0x365DE8u;
            goto label_365de8;
        }
    }
    ctx->pc = 0x365DC4u;
label_365dc4:
    // 0x365dc4: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365dc8:
    // 0x365dc8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365dcc:
    // 0x365dcc: 0x320f809  jalr        $t9
label_365dd0:
    if (ctx->pc == 0x365DD0u) {
        ctx->pc = 0x365DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DCCu;
        // 0x365dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365DD4u;
        goto label_365dd4;
    }
    ctx->pc = 0x365DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365DD4u);
        ctx->pc = 0x365DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DCCu;
        // 0x365dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365DCCu, 0x365DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365DD4u;
label_365dd4:
    // 0x365dd4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365dd8:
    // 0x365dd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365dd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365ddc:
    // 0x365ddc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x365ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_365de0:
    // 0x365de0: 0xa22205aa  sb          $v0, 0x5AA($s1)
    ctx->pc = 0x365de0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1450), (uint8_t)GPR_U32(ctx, 2));
label_365de4:
    // 0x365de4: 0x0  nop
    ctx->pc = 0x365de4u;
    // NOP
label_365de8:
    // 0x365de8: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365dec:
    // 0x365dec: 0x923205ab  lbu         $s2, 0x5AB($s1)
    ctx->pc = 0x365decu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1451)));
label_365df0:
    // 0x365df0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365df4:
    // 0x365df4: 0x320f809  jalr        $t9
label_365df8:
    if (ctx->pc == 0x365DF8u) {
        ctx->pc = 0x365DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DF4u;
        // 0x365df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365DFCu;
        goto label_365dfc;
    }
    ctx->pc = 0x365DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365DFCu);
        ctx->pc = 0x365DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DF4u;
        // 0x365df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365DF4u, 0x365DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365DFCu;
label_365dfc:
    // 0x365dfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365e00:
    // 0x365e00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365e04:
    // 0x365e04: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x365e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_365e08:
    // 0x365e08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_365e0c:
    if (ctx->pc == 0x365E0Cu) {
        ctx->pc = 0x365E10u;
        goto label_365e10;
    }
    ctx->pc = 0x365E08u;
    {
        const bool branch_taken_0x365e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365e08) {
            ctx->pc = 0x365E30u;
            goto label_365e30;
        }
    }
    ctx->pc = 0x365E10u;
label_365e10:
    // 0x365e10: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365e14:
    // 0x365e14: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365e18:
    // 0x365e18: 0x320f809  jalr        $t9
label_365e1c:
    if (ctx->pc == 0x365E1Cu) {
        ctx->pc = 0x365E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E18u;
        // 0x365e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365E20u;
        goto label_365e20;
    }
    ctx->pc = 0x365E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365E20u);
        ctx->pc = 0x365E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E18u;
        // 0x365e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365E18u, 0x365E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365E20u;
label_365e20:
    // 0x365e20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365e24:
    // 0x365e24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365e24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365e28:
    // 0x365e28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x365e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_365e2c:
    // 0x365e2c: 0xa22205ab  sb          $v0, 0x5AB($s1)
    ctx->pc = 0x365e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1451), (uint8_t)GPR_U32(ctx, 2));
label_365e30:
    // 0x365e30: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365e34:
    // 0x365e34: 0x923205ac  lbu         $s2, 0x5AC($s1)
    ctx->pc = 0x365e34u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_365e38:
    // 0x365e38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365e3c:
    // 0x365e3c: 0x320f809  jalr        $t9
label_365e40:
    if (ctx->pc == 0x365E40u) {
        ctx->pc = 0x365E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E3Cu;
        // 0x365e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365E44u;
        goto label_365e44;
    }
    ctx->pc = 0x365E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365E44u);
        ctx->pc = 0x365E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E3Cu;
        // 0x365e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365E3Cu, 0x365E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365E44u;
label_365e44:
    // 0x365e44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365e48:
    // 0x365e48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365e4c:
    // 0x365e4c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x365e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_365e50:
    // 0x365e50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_365e54:
    if (ctx->pc == 0x365E54u) {
        ctx->pc = 0x365E58u;
        goto label_365e58;
    }
    ctx->pc = 0x365E50u;
    {
        const bool branch_taken_0x365e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365e50) {
            ctx->pc = 0x365E78u;
            goto label_365e78;
        }
    }
    ctx->pc = 0x365E58u;
label_365e58:
    // 0x365e58: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365e5c:
    // 0x365e5c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365e60:
    // 0x365e60: 0x320f809  jalr        $t9
label_365e64:
    if (ctx->pc == 0x365E64u) {
        ctx->pc = 0x365E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E60u;
        // 0x365e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365E68u;
        goto label_365e68;
    }
    ctx->pc = 0x365E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365E68u);
        ctx->pc = 0x365E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E60u;
        // 0x365e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365E60u, 0x365E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365E68u;
label_365e68:
    // 0x365e68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365e6c:
    // 0x365e6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365e6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365e70:
    // 0x365e70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x365e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_365e74:
    // 0x365e74: 0xa22205ac  sb          $v0, 0x5AC($s1)
    ctx->pc = 0x365e74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1452), (uint8_t)GPR_U32(ctx, 2));
label_365e78:
    // 0x365e78: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365e7c:
    // 0x365e7c: 0x923205ad  lbu         $s2, 0x5AD($s1)
    ctx->pc = 0x365e7cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
label_365e80:
    // 0x365e80: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365e84:
    // 0x365e84: 0x320f809  jalr        $t9
label_365e88:
    if (ctx->pc == 0x365E88u) {
        ctx->pc = 0x365E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E84u;
        // 0x365e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365E8Cu;
        goto label_365e8c;
    }
    ctx->pc = 0x365E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365E8Cu);
        ctx->pc = 0x365E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365E84u;
        // 0x365e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365E84u, 0x365E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365E8Cu;
label_365e8c:
    // 0x365e8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365e90:
    // 0x365e90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365e90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365e94:
    // 0x365e94: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x365e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_365e98:
    // 0x365e98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_365e9c:
    if (ctx->pc == 0x365E9Cu) {
        ctx->pc = 0x365EA0u;
        goto label_365ea0;
    }
    ctx->pc = 0x365E98u;
    {
        const bool branch_taken_0x365e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365e98) {
            ctx->pc = 0x365EC0u;
            goto label_365ec0;
        }
    }
    ctx->pc = 0x365EA0u;
label_365ea0:
    // 0x365ea0: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365ea4:
    // 0x365ea4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x365ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_365ea8:
    // 0x365ea8: 0x320f809  jalr        $t9
label_365eac:
    if (ctx->pc == 0x365EACu) {
        ctx->pc = 0x365EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EA8u;
        // 0x365eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365EB0u;
        goto label_365eb0;
    }
    ctx->pc = 0x365EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365EB0u);
        ctx->pc = 0x365EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EA8u;
        // 0x365eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365EA8u, 0x365EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365EB0u;
label_365eb0:
    // 0x365eb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x365eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_365eb4:
    // 0x365eb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_365eb8:
    // 0x365eb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x365eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_365ebc:
    // 0x365ebc: 0xa22205ad  sb          $v0, 0x5AD($s1)
    ctx->pc = 0x365ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1453), (uint8_t)GPR_U32(ctx, 2));
label_365ec0:
    // 0x365ec0: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365ec4:
    // 0x365ec4: 0x922605ab  lbu         $a2, 0x5AB($s1)
    ctx->pc = 0x365ec4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1451)));
label_365ec8:
    // 0x365ec8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x365ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365ecc:
    // 0x365ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365ed0:
    // 0x365ed0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x365ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_365ed4:
    // 0x365ed4: 0x320f809  jalr        $t9
label_365ed8:
    if (ctx->pc == 0x365ED8u) {
        ctx->pc = 0x365ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365ED4u;
        // 0x365ed8: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365EDCu;
        goto label_365edc;
    }
    ctx->pc = 0x365ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365EDCu);
        ctx->pc = 0x365ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365ED4u;
        // 0x365ed8: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365ED4u, 0x365EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365EDCu;
label_365edc:
    // 0x365edc: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365ee0:
    // 0x365ee0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x365ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365ee4:
    // 0x365ee4: 0x922605ac  lbu         $a2, 0x5AC($s1)
    ctx->pc = 0x365ee4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_365ee8:
    // 0x365ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365eec:
    // 0x365eec: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x365eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_365ef0:
    // 0x365ef0: 0x320f809  jalr        $t9
label_365ef4:
    if (ctx->pc == 0x365EF4u) {
        ctx->pc = 0x365EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EF0u;
        // 0x365ef4: 0x26250570  addiu       $a1, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365EF8u;
        goto label_365ef8;
    }
    ctx->pc = 0x365EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365EF8u);
        ctx->pc = 0x365EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365EF0u;
        // 0x365ef4: 0x26250570  addiu       $a1, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365EF0u, 0x365EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365EF8u;
label_365ef8:
    // 0x365ef8: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x365ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_365efc:
    // 0x365efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x365efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_365f00:
    // 0x365f00: 0x922605ad  lbu         $a2, 0x5AD($s1)
    ctx->pc = 0x365f00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
label_365f04:
    // 0x365f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365f08:
    // 0x365f08: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x365f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_365f0c:
    // 0x365f0c: 0x320f809  jalr        $t9
label_365f10:
    if (ctx->pc == 0x365F10u) {
        ctx->pc = 0x365F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F0Cu;
        // 0x365f10: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365F14u;
        goto label_365f14;
    }
    ctx->pc = 0x365F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x365F14u);
        ctx->pc = 0x365F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F0Cu;
        // 0x365f10: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365F0Cu, 0x365F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365F14u;
label_365f14:
    // 0x365f14: 0x10000004  b           . + 4 + (0x4 << 2)
label_365f18:
    if (ctx->pc == 0x365F18u) {
        ctx->pc = 0x365F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F14u;
        // 0x365f18: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365F1Cu;
        goto label_365f1c;
    }
    ctx->pc = 0x365F14u;
    {
        const bool branch_taken_0x365f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F14u;
        // 0x365f18: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365f14) {
            ctx->pc = 0x365F28u;
            goto label_365f28;
        }
    }
    ctx->pc = 0x365F1Cu;
label_365f1c:
    // 0x365f1c: 0x0  nop
    ctx->pc = 0x365f1cu;
    // NOP
label_365f20:
    // 0x365f20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_365f24:
    // 0x365f24: 0x0  nop
    ctx->pc = 0x365f24u;
    // NOP
label_365f28:
    // 0x365f28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x365f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_365f2c:
    // 0x365f2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x365f2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_365f30:
    // 0x365f30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x365f30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_365f34:
    // 0x365f34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x365f34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_365f38:
    // 0x365f38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x365f38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_365f3c:
    // 0x365f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x365f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_365f40:
    // 0x365f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x365f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_365f44:
    // 0x365f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_365f48:
    // 0x365f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_365f4c:
    // 0x365f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_365f50:
    // 0x365f50: 0x3e00008  jr          $ra
label_365f54:
    if (ctx->pc == 0x365F54u) {
        ctx->pc = 0x365F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F50u;
        // 0x365f54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365F58u;
        goto label_fallthrough_0x365f50;
    }
    ctx->pc = 0x365F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F50u;
        // 0x365f54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x365f50:
    ctx->pc = 0x365F58u;
}
