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

// Function: sub_003F0B20
// Address: 0x3f0b20 - 0x3f0f14
void sub_003F0B20_0x3f0b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0B20_0x3f0b20");
#endif

    switch (ctx->pc) {
        case 0x3f0b20u: goto label_3f0b20;
        case 0x3f0b24u: goto label_3f0b24;
        case 0x3f0b28u: goto label_3f0b28;
        case 0x3f0b2cu: goto label_3f0b2c;
        case 0x3f0b30u: goto label_3f0b30;
        case 0x3f0b34u: goto label_3f0b34;
        case 0x3f0b38u: goto label_3f0b38;
        case 0x3f0b3cu: goto label_3f0b3c;
        case 0x3f0b40u: goto label_3f0b40;
        case 0x3f0b44u: goto label_3f0b44;
        case 0x3f0b48u: goto label_3f0b48;
        case 0x3f0b4cu: goto label_3f0b4c;
        case 0x3f0b50u: goto label_3f0b50;
        case 0x3f0b54u: goto label_3f0b54;
        case 0x3f0b58u: goto label_3f0b58;
        case 0x3f0b5cu: goto label_3f0b5c;
        case 0x3f0b60u: goto label_3f0b60;
        case 0x3f0b64u: goto label_3f0b64;
        case 0x3f0b68u: goto label_3f0b68;
        case 0x3f0b6cu: goto label_3f0b6c;
        case 0x3f0b70u: goto label_3f0b70;
        case 0x3f0b74u: goto label_3f0b74;
        case 0x3f0b78u: goto label_3f0b78;
        case 0x3f0b7cu: goto label_3f0b7c;
        case 0x3f0b80u: goto label_3f0b80;
        case 0x3f0b84u: goto label_3f0b84;
        case 0x3f0b88u: goto label_3f0b88;
        case 0x3f0b8cu: goto label_3f0b8c;
        case 0x3f0b90u: goto label_3f0b90;
        case 0x3f0b94u: goto label_3f0b94;
        case 0x3f0b98u: goto label_3f0b98;
        case 0x3f0b9cu: goto label_3f0b9c;
        case 0x3f0ba0u: goto label_3f0ba0;
        case 0x3f0ba4u: goto label_3f0ba4;
        case 0x3f0ba8u: goto label_3f0ba8;
        case 0x3f0bacu: goto label_3f0bac;
        case 0x3f0bb0u: goto label_3f0bb0;
        case 0x3f0bb4u: goto label_3f0bb4;
        case 0x3f0bb8u: goto label_3f0bb8;
        case 0x3f0bbcu: goto label_3f0bbc;
        case 0x3f0bc0u: goto label_3f0bc0;
        case 0x3f0bc4u: goto label_3f0bc4;
        case 0x3f0bc8u: goto label_3f0bc8;
        case 0x3f0bccu: goto label_3f0bcc;
        case 0x3f0bd0u: goto label_3f0bd0;
        case 0x3f0bd4u: goto label_3f0bd4;
        case 0x3f0bd8u: goto label_3f0bd8;
        case 0x3f0bdcu: goto label_3f0bdc;
        case 0x3f0be0u: goto label_3f0be0;
        case 0x3f0be4u: goto label_3f0be4;
        case 0x3f0be8u: goto label_3f0be8;
        case 0x3f0becu: goto label_3f0bec;
        case 0x3f0bf0u: goto label_3f0bf0;
        case 0x3f0bf4u: goto label_3f0bf4;
        case 0x3f0bf8u: goto label_3f0bf8;
        case 0x3f0bfcu: goto label_3f0bfc;
        case 0x3f0c00u: goto label_3f0c00;
        case 0x3f0c04u: goto label_3f0c04;
        case 0x3f0c08u: goto label_3f0c08;
        case 0x3f0c0cu: goto label_3f0c0c;
        case 0x3f0c10u: goto label_3f0c10;
        case 0x3f0c14u: goto label_3f0c14;
        case 0x3f0c18u: goto label_3f0c18;
        case 0x3f0c1cu: goto label_3f0c1c;
        case 0x3f0c20u: goto label_3f0c20;
        case 0x3f0c24u: goto label_3f0c24;
        case 0x3f0c28u: goto label_3f0c28;
        case 0x3f0c2cu: goto label_3f0c2c;
        case 0x3f0c30u: goto label_3f0c30;
        case 0x3f0c34u: goto label_3f0c34;
        case 0x3f0c38u: goto label_3f0c38;
        case 0x3f0c3cu: goto label_3f0c3c;
        case 0x3f0c40u: goto label_3f0c40;
        case 0x3f0c44u: goto label_3f0c44;
        case 0x3f0c48u: goto label_3f0c48;
        case 0x3f0c4cu: goto label_3f0c4c;
        case 0x3f0c50u: goto label_3f0c50;
        case 0x3f0c54u: goto label_3f0c54;
        case 0x3f0c58u: goto label_3f0c58;
        case 0x3f0c5cu: goto label_3f0c5c;
        case 0x3f0c60u: goto label_3f0c60;
        case 0x3f0c64u: goto label_3f0c64;
        case 0x3f0c68u: goto label_3f0c68;
        case 0x3f0c6cu: goto label_3f0c6c;
        case 0x3f0c70u: goto label_3f0c70;
        case 0x3f0c74u: goto label_3f0c74;
        case 0x3f0c78u: goto label_3f0c78;
        case 0x3f0c7cu: goto label_3f0c7c;
        case 0x3f0c80u: goto label_3f0c80;
        case 0x3f0c84u: goto label_3f0c84;
        case 0x3f0c88u: goto label_3f0c88;
        case 0x3f0c8cu: goto label_3f0c8c;
        case 0x3f0c90u: goto label_3f0c90;
        case 0x3f0c94u: goto label_3f0c94;
        case 0x3f0c98u: goto label_3f0c98;
        case 0x3f0c9cu: goto label_3f0c9c;
        case 0x3f0ca0u: goto label_3f0ca0;
        case 0x3f0ca4u: goto label_3f0ca4;
        case 0x3f0ca8u: goto label_3f0ca8;
        case 0x3f0cacu: goto label_3f0cac;
        case 0x3f0cb0u: goto label_3f0cb0;
        case 0x3f0cb4u: goto label_3f0cb4;
        case 0x3f0cb8u: goto label_3f0cb8;
        case 0x3f0cbcu: goto label_3f0cbc;
        case 0x3f0cc0u: goto label_3f0cc0;
        case 0x3f0cc4u: goto label_3f0cc4;
        case 0x3f0cc8u: goto label_3f0cc8;
        case 0x3f0cccu: goto label_3f0ccc;
        case 0x3f0cd0u: goto label_3f0cd0;
        case 0x3f0cd4u: goto label_3f0cd4;
        case 0x3f0cd8u: goto label_3f0cd8;
        case 0x3f0cdcu: goto label_3f0cdc;
        case 0x3f0ce0u: goto label_3f0ce0;
        case 0x3f0ce4u: goto label_3f0ce4;
        case 0x3f0ce8u: goto label_3f0ce8;
        case 0x3f0cecu: goto label_3f0cec;
        case 0x3f0cf0u: goto label_3f0cf0;
        case 0x3f0cf4u: goto label_3f0cf4;
        case 0x3f0cf8u: goto label_3f0cf8;
        case 0x3f0cfcu: goto label_3f0cfc;
        case 0x3f0d00u: goto label_3f0d00;
        case 0x3f0d04u: goto label_3f0d04;
        case 0x3f0d08u: goto label_3f0d08;
        case 0x3f0d0cu: goto label_3f0d0c;
        case 0x3f0d10u: goto label_3f0d10;
        case 0x3f0d14u: goto label_3f0d14;
        case 0x3f0d18u: goto label_3f0d18;
        case 0x3f0d1cu: goto label_3f0d1c;
        case 0x3f0d20u: goto label_3f0d20;
        case 0x3f0d24u: goto label_3f0d24;
        case 0x3f0d28u: goto label_3f0d28;
        case 0x3f0d2cu: goto label_3f0d2c;
        case 0x3f0d30u: goto label_3f0d30;
        case 0x3f0d34u: goto label_3f0d34;
        case 0x3f0d38u: goto label_3f0d38;
        case 0x3f0d3cu: goto label_3f0d3c;
        case 0x3f0d40u: goto label_3f0d40;
        case 0x3f0d44u: goto label_3f0d44;
        case 0x3f0d48u: goto label_3f0d48;
        case 0x3f0d4cu: goto label_3f0d4c;
        case 0x3f0d50u: goto label_3f0d50;
        case 0x3f0d54u: goto label_3f0d54;
        case 0x3f0d58u: goto label_3f0d58;
        case 0x3f0d5cu: goto label_3f0d5c;
        case 0x3f0d60u: goto label_3f0d60;
        case 0x3f0d64u: goto label_3f0d64;
        case 0x3f0d68u: goto label_3f0d68;
        case 0x3f0d6cu: goto label_3f0d6c;
        case 0x3f0d70u: goto label_3f0d70;
        case 0x3f0d74u: goto label_3f0d74;
        case 0x3f0d78u: goto label_3f0d78;
        case 0x3f0d7cu: goto label_3f0d7c;
        case 0x3f0d80u: goto label_3f0d80;
        case 0x3f0d84u: goto label_3f0d84;
        case 0x3f0d88u: goto label_3f0d88;
        case 0x3f0d8cu: goto label_3f0d8c;
        case 0x3f0d90u: goto label_3f0d90;
        case 0x3f0d94u: goto label_3f0d94;
        case 0x3f0d98u: goto label_3f0d98;
        case 0x3f0d9cu: goto label_3f0d9c;
        case 0x3f0da0u: goto label_3f0da0;
        case 0x3f0da4u: goto label_3f0da4;
        case 0x3f0da8u: goto label_3f0da8;
        case 0x3f0dacu: goto label_3f0dac;
        case 0x3f0db0u: goto label_3f0db0;
        case 0x3f0db4u: goto label_3f0db4;
        case 0x3f0db8u: goto label_3f0db8;
        case 0x3f0dbcu: goto label_3f0dbc;
        case 0x3f0dc0u: goto label_3f0dc0;
        case 0x3f0dc4u: goto label_3f0dc4;
        case 0x3f0dc8u: goto label_3f0dc8;
        case 0x3f0dccu: goto label_3f0dcc;
        case 0x3f0dd0u: goto label_3f0dd0;
        case 0x3f0dd4u: goto label_3f0dd4;
        case 0x3f0dd8u: goto label_3f0dd8;
        case 0x3f0ddcu: goto label_3f0ddc;
        case 0x3f0de0u: goto label_3f0de0;
        case 0x3f0de4u: goto label_3f0de4;
        case 0x3f0de8u: goto label_3f0de8;
        case 0x3f0decu: goto label_3f0dec;
        case 0x3f0df0u: goto label_3f0df0;
        case 0x3f0df4u: goto label_3f0df4;
        case 0x3f0df8u: goto label_3f0df8;
        case 0x3f0dfcu: goto label_3f0dfc;
        case 0x3f0e00u: goto label_3f0e00;
        case 0x3f0e04u: goto label_3f0e04;
        case 0x3f0e08u: goto label_3f0e08;
        case 0x3f0e0cu: goto label_3f0e0c;
        case 0x3f0e10u: goto label_3f0e10;
        case 0x3f0e14u: goto label_3f0e14;
        case 0x3f0e18u: goto label_3f0e18;
        case 0x3f0e1cu: goto label_3f0e1c;
        case 0x3f0e20u: goto label_3f0e20;
        case 0x3f0e24u: goto label_3f0e24;
        case 0x3f0e28u: goto label_3f0e28;
        case 0x3f0e2cu: goto label_3f0e2c;
        case 0x3f0e30u: goto label_3f0e30;
        case 0x3f0e34u: goto label_3f0e34;
        case 0x3f0e38u: goto label_3f0e38;
        case 0x3f0e3cu: goto label_3f0e3c;
        case 0x3f0e40u: goto label_3f0e40;
        case 0x3f0e44u: goto label_3f0e44;
        case 0x3f0e48u: goto label_3f0e48;
        case 0x3f0e4cu: goto label_3f0e4c;
        case 0x3f0e50u: goto label_3f0e50;
        case 0x3f0e54u: goto label_3f0e54;
        case 0x3f0e58u: goto label_3f0e58;
        case 0x3f0e5cu: goto label_3f0e5c;
        case 0x3f0e60u: goto label_3f0e60;
        case 0x3f0e64u: goto label_3f0e64;
        case 0x3f0e68u: goto label_3f0e68;
        case 0x3f0e6cu: goto label_3f0e6c;
        case 0x3f0e70u: goto label_3f0e70;
        case 0x3f0e74u: goto label_3f0e74;
        case 0x3f0e78u: goto label_3f0e78;
        case 0x3f0e7cu: goto label_3f0e7c;
        case 0x3f0e80u: goto label_3f0e80;
        case 0x3f0e84u: goto label_3f0e84;
        case 0x3f0e88u: goto label_3f0e88;
        case 0x3f0e8cu: goto label_3f0e8c;
        case 0x3f0e90u: goto label_3f0e90;
        case 0x3f0e94u: goto label_3f0e94;
        case 0x3f0e98u: goto label_3f0e98;
        case 0x3f0e9cu: goto label_3f0e9c;
        case 0x3f0ea0u: goto label_3f0ea0;
        case 0x3f0ea4u: goto label_3f0ea4;
        case 0x3f0ea8u: goto label_3f0ea8;
        case 0x3f0eacu: goto label_3f0eac;
        case 0x3f0eb0u: goto label_3f0eb0;
        case 0x3f0eb4u: goto label_3f0eb4;
        case 0x3f0eb8u: goto label_3f0eb8;
        case 0x3f0ebcu: goto label_3f0ebc;
        case 0x3f0ec0u: goto label_3f0ec0;
        case 0x3f0ec4u: goto label_3f0ec4;
        case 0x3f0ec8u: goto label_3f0ec8;
        case 0x3f0eccu: goto label_3f0ecc;
        case 0x3f0ed0u: goto label_3f0ed0;
        case 0x3f0ed4u: goto label_3f0ed4;
        case 0x3f0ed8u: goto label_3f0ed8;
        case 0x3f0edcu: goto label_3f0edc;
        case 0x3f0ee0u: goto label_3f0ee0;
        case 0x3f0ee4u: goto label_3f0ee4;
        case 0x3f0ee8u: goto label_3f0ee8;
        case 0x3f0eecu: goto label_3f0eec;
        case 0x3f0ef0u: goto label_3f0ef0;
        case 0x3f0ef4u: goto label_3f0ef4;
        case 0x3f0ef8u: goto label_3f0ef8;
        case 0x3f0efcu: goto label_3f0efc;
        case 0x3f0f00u: goto label_3f0f00;
        case 0x3f0f04u: goto label_3f0f04;
        case 0x3f0f08u: goto label_3f0f08;
        case 0x3f0f0cu: goto label_3f0f0c;
        case 0x3f0f10u: goto label_3f0f10;
        default: break;
    }

    ctx->pc = 0x3f0b20u;

label_3f0b20:
    // 0x3f0b20: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x3f0b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_3f0b24:
    // 0x3f0b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f0b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f0b28:
    // 0x3f0b28: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x3f0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0b2c:
    // 0x3f0b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0b30:
    // 0x3f0b30: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x3f0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_3f0b34:
    // 0x3f0b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0b38:
    // 0x3f0b38: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3f0b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b3c:
    // 0x3f0b3c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0b40:
    // 0x3f0b40: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x3f0b40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3f0b44:
    // 0x3f0b44: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0b48:
    // 0x3f0b48: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0b4c:
    // 0x3f0b4c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0b50:
    // 0x3f0b50: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3f0b50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3f0b54:
    // 0x3f0b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b58:
    // 0x3f0b58: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0b5c:
    // 0x3f0b5c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f0b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0b60:
    // 0x3f0b60: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f0b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0b64:
    // 0x3f0b64: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3f0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0b68:
    // 0x3f0b68: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3f0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0b6c:
    // 0x3f0b6c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3f0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0b70:
    // 0x3f0b70: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3f0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0b74:
    // 0x3f0b74: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3f0b74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3f0b78:
    // 0x3f0b78: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f0b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f0b7c:
    // 0x3f0b7c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f0b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f0b80:
    // 0x3f0b80: 0xc0a4408  jal         func_291020
label_3f0b84:
    if (ctx->pc == 0x3F0B84u) {
        ctx->pc = 0x3F0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B80u;
        // 0x3f0b84: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B88u;
        goto label_3f0b88;
    }
    ctx->pc = 0x3F0B80u;
    SET_GPR_U32(ctx, 31, 0x3F0B88u);
    ctx->pc = 0x3F0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B80u;
    // 0x3f0b84: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3F0B80u, 0x3F0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B88u;
label_3f0b88:
    // 0x3f0b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0b8c:
    // 0x3f0b8c: 0xc0a43fc  jal         func_290FF0
label_3f0b90:
    if (ctx->pc == 0x3F0B90u) {
        ctx->pc = 0x3F0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0B8Cu;
        // 0x3f0b90: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0B94u;
        goto label_3f0b94;
    }
    ctx->pc = 0x3F0B8Cu;
    SET_GPR_U32(ctx, 31, 0x3F0B94u);
    ctx->pc = 0x3F0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0B8Cu;
    // 0x3f0b90: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3F0B8Cu, 0x3F0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0B94u;
label_3f0b94:
    // 0x3f0b94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f0b98:
    // 0x3f0b98: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3f0b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3f0b9c:
    // 0x3f0b9c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f0b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f0ba0:
    // 0x3f0ba0: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3f0ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3f0ba4:
    // 0x3f0ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0ba8:
    // 0x3f0ba8: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3f0ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f0bac:
    // 0x3f0bac: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3f0bacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3f0bb0:
    // 0x3f0bb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0bb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0bb4:
    // 0x3f0bb4: 0xc0510e0  jal         func_144380
label_3f0bb8:
    if (ctx->pc == 0x3F0BB8u) {
        ctx->pc = 0x3F0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0BB4u;
        // 0x3f0bb8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0BBCu;
        goto label_3f0bbc;
    }
    ctx->pc = 0x3F0BB4u;
    SET_GPR_U32(ctx, 31, 0x3F0BBCu);
    ctx->pc = 0x3F0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BB4u;
    // 0x3f0bb8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3F0BB4u, 0x3F0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BBCu;
label_3f0bbc:
    // 0x3f0bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0bc0:
    // 0x3f0bc0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x3f0bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
label_3f0bc4:
    // 0x3f0bc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3f0bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3f0bc8:
    // 0x3f0bc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f0bcc:
    // 0x3f0bcc: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
label_3f0bd0:
    if (ctx->pc == 0x3F0BD0u) {
        ctx->pc = 0x3F0BD4u;
        goto label_3f0bd4;
    }
    ctx->pc = 0x3F0BCCu;
    {
        const bool branch_taken_0x3f0bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f0bcc) {
            ctx->pc = 0x3F0D60u;
            goto label_3f0d60;
        }
    }
    ctx->pc = 0x3F0BD4u;
label_3f0bd4:
    // 0x3f0bd4: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x3f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_3f0bd8:
    // 0x3f0bd8: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3f0bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3f0bdc:
    // 0x3f0bdc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f0bdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0be0:
    // 0x3f0be0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x3f0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3f0be4:
    // 0x3f0be4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f0be8:
    // 0x3f0be8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0bec:
    // 0x3f0bec: 0xc0996b8  jal         func_265AE0
label_3f0bf0:
    if (ctx->pc == 0x3F0BF0u) {
        ctx->pc = 0x3F0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0BECu;
        // 0x3f0bf0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0BF4u;
        goto label_3f0bf4;
    }
    ctx->pc = 0x3F0BECu;
    SET_GPR_U32(ctx, 31, 0x3F0BF4u);
    ctx->pc = 0x3F0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BECu;
    // 0x3f0bf0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x3F0BECu, 0x3F0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0BF4u;
label_3f0bf4:
    // 0x3f0bf4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3f0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3f0bf8:
    // 0x3f0bf8: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3f0bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3f0bfc:
    // 0x3f0bfc: 0xc0997ac  jal         func_265EB0
label_3f0c00:
    if (ctx->pc == 0x3F0C00u) {
        ctx->pc = 0x3F0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0BFCu;
        // 0x3f0c00: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C04u;
        goto label_3f0c04;
    }
    ctx->pc = 0x3F0BFCu;
    SET_GPR_U32(ctx, 31, 0x3F0C04u);
    ctx->pc = 0x3F0C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0BFCu;
    // 0x3f0c00: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3F0BFCu, 0x3F0C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C04u;
label_3f0c04:
    // 0x3f0c04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3f0c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3f0c08:
    // 0x3f0c08: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3f0c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0c0c:
    // 0x3f0c0c: 0xc0414ca  jal         func_105328
label_3f0c10:
    if (ctx->pc == 0x3F0C10u) {
        ctx->pc = 0x3F0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C0Cu;
        // 0x3f0c10: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C14u;
        goto label_3f0c14;
    }
    ctx->pc = 0x3F0C0Cu;
    SET_GPR_U32(ctx, 31, 0x3F0C14u);
    ctx->pc = 0x3F0C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C0Cu;
    // 0x3f0c10: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0C0Cu, 0x3F0C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C14u;
label_3f0c14:
    // 0x3f0c14: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x3f0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3f0c18:
    // 0x3f0c18: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x3f0c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_3f0c1c:
    // 0x3f0c1c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f0c1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0c20:
    // 0x3f0c20: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x3f0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3f0c24:
    // 0x3f0c24: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3f0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3f0c28:
    // 0x3f0c28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3f0c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3f0c2c:
    // 0x3f0c2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0c30:
    // 0x3f0c30: 0xc099778  jal         func_265DE0
label_3f0c34:
    if (ctx->pc == 0x3F0C34u) {
        ctx->pc = 0x3F0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C30u;
        // 0x3f0c34: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C38u;
        goto label_3f0c38;
    }
    ctx->pc = 0x3F0C30u;
    SET_GPR_U32(ctx, 31, 0x3F0C38u);
    ctx->pc = 0x3F0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C30u;
    // 0x3f0c34: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3F0C30u, 0x3F0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C38u;
label_3f0c38:
    // 0x3f0c38: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3f0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3f0c3c:
    // 0x3f0c3c: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3f0c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3f0c40:
    // 0x3f0c40: 0xc0997ac  jal         func_265EB0
label_3f0c44:
    if (ctx->pc == 0x3F0C44u) {
        ctx->pc = 0x3F0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C40u;
        // 0x3f0c44: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C48u;
        goto label_3f0c48;
    }
    ctx->pc = 0x3F0C40u;
    SET_GPR_U32(ctx, 31, 0x3F0C48u);
    ctx->pc = 0x3F0C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C40u;
    // 0x3f0c44: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3F0C40u, 0x3F0C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C48u;
label_3f0c48:
    // 0x3f0c48: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3f0c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f0c4c:
    // 0x3f0c4c: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3f0c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0c50:
    // 0x3f0c50: 0xc0414ca  jal         func_105328
label_3f0c54:
    if (ctx->pc == 0x3F0C54u) {
        ctx->pc = 0x3F0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C50u;
        // 0x3f0c54: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C58u;
        goto label_3f0c58;
    }
    ctx->pc = 0x3F0C50u;
    SET_GPR_U32(ctx, 31, 0x3F0C58u);
    ctx->pc = 0x3F0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C50u;
    // 0x3f0c54: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0C50u, 0x3F0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C58u;
label_3f0c58:
    // 0x3f0c58: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x3f0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f0c5c:
    // 0x3f0c5c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x3f0c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_3f0c60:
    // 0x3f0c60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f0c60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0c64:
    // 0x3f0c64: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x3f0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3f0c68:
    // 0x3f0c68: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3f0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3f0c6c:
    // 0x3f0c6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3f0c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3f0c70:
    // 0x3f0c70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0c74:
    // 0x3f0c74: 0xc099778  jal         func_265DE0
label_3f0c78:
    if (ctx->pc == 0x3F0C78u) {
        ctx->pc = 0x3F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C74u;
        // 0x3f0c78: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C7Cu;
        goto label_3f0c7c;
    }
    ctx->pc = 0x3F0C74u;
    SET_GPR_U32(ctx, 31, 0x3F0C7Cu);
    ctx->pc = 0x3F0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C74u;
    // 0x3f0c78: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3F0C74u, 0x3F0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C7Cu;
label_3f0c7c:
    // 0x3f0c7c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3f0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3f0c80:
    // 0x3f0c80: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3f0c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3f0c84:
    // 0x3f0c84: 0xc0997ac  jal         func_265EB0
label_3f0c88:
    if (ctx->pc == 0x3F0C88u) {
        ctx->pc = 0x3F0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C84u;
        // 0x3f0c88: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C8Cu;
        goto label_3f0c8c;
    }
    ctx->pc = 0x3F0C84u;
    SET_GPR_U32(ctx, 31, 0x3F0C8Cu);
    ctx->pc = 0x3F0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C84u;
    // 0x3f0c88: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3F0C84u, 0x3F0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C8Cu;
label_3f0c8c:
    // 0x3f0c8c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f0c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f0c90:
    // 0x3f0c90: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3f0c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0c94:
    // 0x3f0c94: 0xc0414ca  jal         func_105328
label_3f0c98:
    if (ctx->pc == 0x3F0C98u) {
        ctx->pc = 0x3F0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0C94u;
        // 0x3f0c98: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0C9Cu;
        goto label_3f0c9c;
    }
    ctx->pc = 0x3F0C94u;
    SET_GPR_U32(ctx, 31, 0x3F0C9Cu);
    ctx->pc = 0x3F0C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0C94u;
    // 0x3f0c98: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0C94u, 0x3F0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0C9Cu;
label_3f0c9c:
    // 0x3f0c9c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x3f0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f0ca0:
    // 0x3f0ca0: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x3f0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_3f0ca4:
    // 0x3f0ca4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f0ca4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0ca8:
    // 0x3f0ca8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x3f0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3f0cac:
    // 0x3f0cac: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3f0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3f0cb0:
    // 0x3f0cb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3f0cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3f0cb4:
    // 0x3f0cb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0cb8:
    // 0x3f0cb8: 0xc099778  jal         func_265DE0
label_3f0cbc:
    if (ctx->pc == 0x3F0CBCu) {
        ctx->pc = 0x3F0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0CB8u;
        // 0x3f0cbc: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0CC0u;
        goto label_3f0cc0;
    }
    ctx->pc = 0x3F0CB8u;
    SET_GPR_U32(ctx, 31, 0x3F0CC0u);
    ctx->pc = 0x3F0CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CB8u;
    // 0x3f0cbc: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3F0CB8u, 0x3F0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CC0u;
label_3f0cc0:
    // 0x3f0cc0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3f0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3f0cc4:
    // 0x3f0cc4: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3f0cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3f0cc8:
    // 0x3f0cc8: 0xc0997ac  jal         func_265EB0
label_3f0ccc:
    if (ctx->pc == 0x3F0CCCu) {
        ctx->pc = 0x3F0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0CC8u;
        // 0x3f0ccc: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0CD0u;
        goto label_3f0cd0;
    }
    ctx->pc = 0x3F0CC8u;
    SET_GPR_U32(ctx, 31, 0x3F0CD0u);
    ctx->pc = 0x3F0CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CC8u;
    // 0x3f0ccc: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3F0CC8u, 0x3F0CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CD0u;
label_3f0cd0:
    // 0x3f0cd0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3f0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3f0cd4:
    // 0x3f0cd4: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3f0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0cd8:
    // 0x3f0cd8: 0xc0414ca  jal         func_105328
label_3f0cdc:
    if (ctx->pc == 0x3F0CDCu) {
        ctx->pc = 0x3F0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0CD8u;
        // 0x3f0cdc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0CE0u;
        goto label_3f0ce0;
    }
    ctx->pc = 0x3F0CD8u;
    SET_GPR_U32(ctx, 31, 0x3F0CE0u);
    ctx->pc = 0x3F0CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CD8u;
    // 0x3f0cdc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0CD8u, 0x3F0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0CE0u;
label_3f0ce0:
    // 0x3f0ce0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x3f0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3f0ce4:
    // 0x3f0ce4: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x3f0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3f0ce8:
    // 0x3f0ce8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0cec:
    // 0x3f0cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0cf0:
    // 0x3f0cf0: 0x2405021f  addiu       $a1, $zero, 0x21F
    ctx->pc = 0x3f0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
label_3f0cf4:
    // 0x3f0cf4: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x3f0cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_3f0cf8:
    // 0x3f0cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0cfc:
    // 0x3f0cfc: 0xc0d0484  jal         func_341210
label_3f0d00:
    if (ctx->pc == 0x3F0D00u) {
        ctx->pc = 0x3F0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0CFCu;
        // 0x3f0d00: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D04u;
        goto label_3f0d04;
    }
    ctx->pc = 0x3F0CFCu;
    SET_GPR_U32(ctx, 31, 0x3F0D04u);
    ctx->pc = 0x3F0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0CFCu;
    // 0x3f0d00: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F0CFCu, 0x3F0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D04u;
label_3f0d04:
    // 0x3f0d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d08:
    // 0x3f0d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d0c:
    // 0x3f0d0c: 0xc0d0490  jal         func_341240
label_3f0d10:
    if (ctx->pc == 0x3F0D10u) {
        ctx->pc = 0x3F0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D0Cu;
        // 0x3f0d10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D14u;
        goto label_3f0d14;
    }
    ctx->pc = 0x3F0D0Cu;
    SET_GPR_U32(ctx, 31, 0x3F0D14u);
    ctx->pc = 0x3F0D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0D0Cu;
    // 0x3f0d10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341240u, 0x3F0D0Cu, 0x3F0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D14u;
label_3f0d14:
    // 0x3f0d14: 0x27aa0200  addiu       $t2, $sp, 0x200
    ctx->pc = 0x3f0d14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3f0d18:
    // 0x3f0d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d1c:
    // 0x3f0d1c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3f0d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f0d20:
    // 0x3f0d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f0d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d24:
    // 0x3f0d24: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x3f0d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_3f0d28:
    // 0x3f0d28: 0x27a80220  addiu       $t0, $sp, 0x220
    ctx->pc = 0x3f0d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_3f0d2c:
    // 0x3f0d2c: 0x27a90210  addiu       $t1, $sp, 0x210
    ctx->pc = 0x3f0d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3f0d30:
    // 0x3f0d30: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3f0d30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f0d34:
    // 0x3f0d34: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x3f0d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_3f0d38:
    // 0x3f0d38: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x3f0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_3f0d3c:
    // 0x3f0d3c: 0xc0e148c  jal         func_385230
label_3f0d40:
    if (ctx->pc == 0x3F0D40u) {
        ctx->pc = 0x3F0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D3Cu;
        // 0x3f0d40: 0xafa00208  sw          $zero, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D44u;
        goto label_3f0d44;
    }
    ctx->pc = 0x3F0D3Cu;
    SET_GPR_U32(ctx, 31, 0x3F0D44u);
    ctx->pc = 0x3F0D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0D3Cu;
    // 0x3f0d40: 0xafa00208  sw          $zero, 0x208($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385230u, 0x3F0D3Cu, 0x3F0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D44u;
label_3f0d44:
    // 0x3f0d44: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3f0d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3f0d48:
    // 0x3f0d48: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f0d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f0d4c:
    // 0x3f0d4c: 0x320f809  jalr        $t9
label_3f0d50:
    if (ctx->pc == 0x3F0D50u) {
        ctx->pc = 0x3F0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D4Cu;
        // 0x3f0d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D54u;
        goto label_3f0d54;
    }
    ctx->pc = 0x3F0D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0D54u);
        ctx->pc = 0x3F0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D4Cu;
        // 0x3f0d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0D4Cu, 0x3F0D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0D54u;
label_3f0d54:
    // 0x3f0d54: 0x1000006a  b           . + 4 + (0x6A << 2)
label_3f0d58:
    if (ctx->pc == 0x3F0D58u) {
        ctx->pc = 0x3F0D5Cu;
        goto label_3f0d5c;
    }
    ctx->pc = 0x3F0D54u;
    {
        const bool branch_taken_0x3f0d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0d54) {
            ctx->pc = 0x3F0F00u;
            goto label_3f0f00;
        }
    }
    ctx->pc = 0x3F0D5Cu;
label_3f0d5c:
    // 0x3f0d5c: 0x0  nop
    ctx->pc = 0x3f0d5cu;
    // NOP
label_3f0d60:
    // 0x3f0d60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3f0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3f0d64:
    // 0x3f0d64: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x3f0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_3f0d68:
    // 0x3f0d68: 0xc0414d0  jal         func_105340
label_3f0d6c:
    if (ctx->pc == 0x3F0D6Cu) {
        ctx->pc = 0x3F0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D68u;
        // 0x3f0d6c: 0x27a602b0  addiu       $a2, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D70u;
        goto label_3f0d70;
    }
    ctx->pc = 0x3F0D68u;
    SET_GPR_U32(ctx, 31, 0x3F0D70u);
    ctx->pc = 0x3F0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0D68u;
    // 0x3f0d6c: 0x27a602b0  addiu       $a2, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3F0D68u, 0x3F0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D70u;
label_3f0d70:
    // 0x3f0d70: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3f0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3f0d74:
    // 0x3f0d74: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x3f0d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_3f0d78:
    // 0x3f0d78: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0d7c:
    // 0x3f0d7c: 0xc07cd2c  jal         func_1F34B0
label_3f0d80:
    if (ctx->pc == 0x3F0D80u) {
        ctx->pc = 0x3F0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D7Cu;
        // 0x3f0d80: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D84u;
        goto label_3f0d84;
    }
    ctx->pc = 0x3F0D7Cu;
    SET_GPR_U32(ctx, 31, 0x3F0D84u);
    ctx->pc = 0x3F0D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0D7Cu;
    // 0x3f0d80: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34B0u, 0x3F0D7Cu, 0x3F0D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D84u;
label_3f0d84:
    // 0x3f0d84: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3f0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_3f0d88:
    // 0x3f0d88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f0d8c:
    // 0x3f0d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0d90:
    // 0x3f0d90: 0xc0414dc  jal         func_105370
label_3f0d94:
    if (ctx->pc == 0x3F0D94u) {
        ctx->pc = 0x3F0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0D90u;
        // 0x3f0d94: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0D98u;
        goto label_3f0d98;
    }
    ctx->pc = 0x3F0D90u;
    SET_GPR_U32(ctx, 31, 0x3F0D98u);
    ctx->pc = 0x3F0D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0D90u;
    // 0x3f0d94: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3F0D90u, 0x3F0D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0D98u;
label_3f0d98:
    // 0x3f0d98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3f0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f0d9c:
    // 0x3f0d9c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x3f0d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f0da0:
    // 0x3f0da0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0da4:
    // 0x3f0da4: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x3f0da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_3f0da8:
    // 0x3f0da8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f0dac:
    // 0x3f0dac: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3f0dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0db0:
    // 0x3f0db0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3f0db0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3f0db4:
    // 0x3f0db4: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x3f0db4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3f0db8:
    // 0x3f0db8: 0xc0414d0  jal         func_105340
label_3f0dbc:
    if (ctx->pc == 0x3F0DBCu) {
        ctx->pc = 0x3F0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0DB8u;
        // 0x3f0dbc: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0DC0u;
        goto label_3f0dc0;
    }
    ctx->pc = 0x3F0DB8u;
    SET_GPR_U32(ctx, 31, 0x3F0DC0u);
    ctx->pc = 0x3F0DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DB8u;
    // 0x3f0dbc: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3F0DB8u, 0x3F0DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0DC0u;
label_3f0dc0:
    // 0x3f0dc0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3f0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f0dc4:
    // 0x3f0dc4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x3f0dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3f0dc8:
    // 0x3f0dc8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f0dc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0dcc:
    // 0x3f0dcc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3f0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_3f0dd0:
    // 0x3f0dd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f0dd4:
    // 0x3f0dd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0dd8:
    // 0x3f0dd8: 0xc0996b8  jal         func_265AE0
label_3f0ddc:
    if (ctx->pc == 0x3F0DDCu) {
        ctx->pc = 0x3F0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0DD8u;
        // 0x3f0ddc: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0DE0u;
        goto label_3f0de0;
    }
    ctx->pc = 0x3F0DD8u;
    SET_GPR_U32(ctx, 31, 0x3F0DE0u);
    ctx->pc = 0x3F0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DD8u;
    // 0x3f0ddc: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x3F0DD8u, 0x3F0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0DE0u;
label_3f0de0:
    // 0x3f0de0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3f0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3f0de4:
    // 0x3f0de4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3f0de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3f0de8:
    // 0x3f0de8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0dec:
    // 0x3f0dec: 0xc099778  jal         func_265DE0
label_3f0df0:
    if (ctx->pc == 0x3F0DF0u) {
        ctx->pc = 0x3F0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0DECu;
        // 0x3f0df0: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0DF4u;
        goto label_3f0df4;
    }
    ctx->pc = 0x3F0DECu;
    SET_GPR_U32(ctx, 31, 0x3F0DF4u);
    ctx->pc = 0x3F0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DECu;
    // 0x3f0df0: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3F0DECu, 0x3F0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0DF4u;
label_3f0df4:
    // 0x3f0df4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3f0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3f0df8:
    // 0x3f0df8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x3f0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_3f0dfc:
    // 0x3f0dfc: 0xc0997ac  jal         func_265EB0
label_3f0e00:
    if (ctx->pc == 0x3F0E00u) {
        ctx->pc = 0x3F0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0DFCu;
        // 0x3f0e00: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E04u;
        goto label_3f0e04;
    }
    ctx->pc = 0x3F0DFCu;
    SET_GPR_U32(ctx, 31, 0x3F0E04u);
    ctx->pc = 0x3F0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0DFCu;
    // 0x3f0e00: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3F0DFCu, 0x3F0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E04u;
label_3f0e04:
    // 0x3f0e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e08:
    // 0x3f0e08: 0x2405021f  addiu       $a1, $zero, 0x21F
    ctx->pc = 0x3f0e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
label_3f0e0c:
    // 0x3f0e0c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x3f0e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3f0e10:
    // 0x3f0e10: 0xc0d0484  jal         func_341210
label_3f0e14:
    if (ctx->pc == 0x3F0E14u) {
        ctx->pc = 0x3F0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E10u;
        // 0x3f0e14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E18u;
        goto label_3f0e18;
    }
    ctx->pc = 0x3F0E10u;
    SET_GPR_U32(ctx, 31, 0x3F0E18u);
    ctx->pc = 0x3F0E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E10u;
    // 0x3f0e14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F0E10u, 0x3F0E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E18u;
label_3f0e18:
    // 0x3f0e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e1c:
    // 0x3f0e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e20:
    // 0x3f0e20: 0xc0d0490  jal         func_341240
label_3f0e24:
    if (ctx->pc == 0x3F0E24u) {
        ctx->pc = 0x3F0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E20u;
        // 0x3f0e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E28u;
        goto label_3f0e28;
    }
    ctx->pc = 0x3F0E20u;
    SET_GPR_U32(ctx, 31, 0x3F0E28u);
    ctx->pc = 0x3F0E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E20u;
    // 0x3f0e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341240u, 0x3F0E20u, 0x3F0E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E28u;
label_3f0e28:
    // 0x3f0e28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3f0e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f0e2c:
    // 0x3f0e2c: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3f0e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0e30:
    // 0x3f0e30: 0xc0414ca  jal         func_105328
label_3f0e34:
    if (ctx->pc == 0x3F0E34u) {
        ctx->pc = 0x3F0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E30u;
        // 0x3f0e34: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E38u;
        goto label_3f0e38;
    }
    ctx->pc = 0x3F0E30u;
    SET_GPR_U32(ctx, 31, 0x3F0E38u);
    ctx->pc = 0x3F0E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E30u;
    // 0x3f0e34: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0E30u, 0x3F0E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E38u;
label_3f0e38:
    // 0x3f0e38: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3f0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f0e3c:
    // 0x3f0e3c: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x3f0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3f0e40:
    // 0x3f0e40: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0e44:
    // 0x3f0e44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f0e48:
    // 0x3f0e48: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x3f0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_3f0e4c:
    // 0x3f0e4c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x3f0e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3f0e50:
    // 0x3f0e50: 0xc0414ca  jal         func_105328
label_3f0e54:
    if (ctx->pc == 0x3F0E54u) {
        ctx->pc = 0x3F0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E50u;
        // 0x3f0e54: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E58u;
        goto label_3f0e58;
    }
    ctx->pc = 0x3F0E50u;
    SET_GPR_U32(ctx, 31, 0x3F0E58u);
    ctx->pc = 0x3F0E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E50u;
    // 0x3f0e54: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0E50u, 0x3F0E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E58u;
label_3f0e58:
    // 0x3f0e58: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3f0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f0e5c:
    // 0x3f0e5c: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x3f0e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3f0e60:
    // 0x3f0e60: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0e64:
    // 0x3f0e64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f0e68:
    // 0x3f0e68: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x3f0e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_3f0e6c:
    // 0x3f0e6c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x3f0e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_3f0e70:
    // 0x3f0e70: 0xc0414ca  jal         func_105328
label_3f0e74:
    if (ctx->pc == 0x3F0E74u) {
        ctx->pc = 0x3F0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E70u;
        // 0x3f0e74: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E78u;
        goto label_3f0e78;
    }
    ctx->pc = 0x3F0E70u;
    SET_GPR_U32(ctx, 31, 0x3F0E78u);
    ctx->pc = 0x3F0E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E70u;
    // 0x3f0e74: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0E70u, 0x3F0E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E78u;
label_3f0e78:
    // 0x3f0e78: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3f0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f0e7c:
    // 0x3f0e7c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x3f0e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3f0e80:
    // 0x3f0e80: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0e84:
    // 0x3f0e84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f0e88:
    // 0x3f0e88: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x3f0e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_3f0e8c:
    // 0x3f0e8c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x3f0e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3f0e90:
    // 0x3f0e90: 0xc0414d0  jal         func_105340
label_3f0e94:
    if (ctx->pc == 0x3F0E94u) {
        ctx->pc = 0x3F0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0E90u;
        // 0x3f0e94: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0E98u;
        goto label_3f0e98;
    }
    ctx->pc = 0x3F0E90u;
    SET_GPR_U32(ctx, 31, 0x3F0E98u);
    ctx->pc = 0x3F0E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0E90u;
    // 0x3f0e94: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3F0E90u, 0x3F0E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0E98u;
label_3f0e98:
    // 0x3f0e98: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3f0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f0e9c:
    // 0x3f0e9c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x3f0e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3f0ea0:
    // 0x3f0ea0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0ea4:
    // 0x3f0ea4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3f0ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f0ea8:
    // 0x3f0ea8: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3f0ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_3f0eac:
    // 0x3f0eac: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x3f0eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3f0eb0:
    // 0x3f0eb0: 0xc0414d0  jal         func_105340
label_3f0eb4:
    if (ctx->pc == 0x3F0EB4u) {
        ctx->pc = 0x3F0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EB0u;
        // 0x3f0eb4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EB8u;
        goto label_3f0eb8;
    }
    ctx->pc = 0x3F0EB0u;
    SET_GPR_U32(ctx, 31, 0x3F0EB8u);
    ctx->pc = 0x3F0EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0EB0u;
    // 0x3f0eb4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3F0EB0u, 0x3F0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EB8u;
label_3f0eb8:
    // 0x3f0eb8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3f0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f0ebc:
    // 0x3f0ebc: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x3f0ebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
label_3f0ec0:
    // 0x3f0ec0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f0ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0ec4:
    // 0x3f0ec4: 0x27ab0140  addiu       $t3, $sp, 0x140
    ctx->pc = 0x3f0ec4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3f0ec8:
    // 0x3f0ec8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3f0ec8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_3f0ecc:
    // 0x3f0ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0ed0:
    // 0x3f0ed0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3f0ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f0ed4:
    // 0x3f0ed4: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x3f0ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3f0ed8:
    // 0x3f0ed8: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x3f0ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3f0edc:
    // 0x3f0edc: 0x27a90160  addiu       $t1, $sp, 0x160
    ctx->pc = 0x3f0edcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3f0ee0:
    // 0x3f0ee0: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x3f0ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3f0ee4:
    // 0x3f0ee4: 0xc0e148c  jal         func_385230
label_3f0ee8:
    if (ctx->pc == 0x3F0EE8u) {
        ctx->pc = 0x3F0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EE4u;
        // 0x3f0ee8: 0x7d620000  sq          $v0, 0x0($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EECu;
        goto label_3f0eec;
    }
    ctx->pc = 0x3F0EE4u;
    SET_GPR_U32(ctx, 31, 0x3F0EECu);
    ctx->pc = 0x3F0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0EE4u;
    // 0x3f0ee8: 0x7d620000  sq          $v0, 0x0($t3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385230u, 0x3F0EE4u, 0x3F0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EECu;
label_3f0eec:
    // 0x3f0eec: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3f0eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3f0ef0:
    // 0x3f0ef0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f0ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f0ef4:
    // 0x3f0ef4: 0x320f809  jalr        $t9
label_3f0ef8:
    if (ctx->pc == 0x3F0EF8u) {
        ctx->pc = 0x3F0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EF4u;
        // 0x3f0ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EFCu;
        goto label_3f0efc;
    }
    ctx->pc = 0x3F0EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0EFCu);
        ctx->pc = 0x3F0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EF4u;
        // 0x3f0ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0EF4u, 0x3F0EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0EFCu;
label_3f0efc:
    // 0x3f0efc: 0x0  nop
    ctx->pc = 0x3f0efcu;
    // NOP
label_3f0f00:
    // 0x3f0f00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f0f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0f04:
    // 0x3f0f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0f08:
    // 0x3f0f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0f0c:
    // 0x3f0f0c: 0x3e00008  jr          $ra
label_3f0f10:
    if (ctx->pc == 0x3F0F10u) {
        ctx->pc = 0x3F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0F0Cu;
        // 0x3f0f10: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0F14u;
        goto label_fallthrough_0x3f0f0c;
    }
    ctx->pc = 0x3F0F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0F0Cu;
        // 0x3f0f10: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0f0c:
    ctx->pc = 0x3F0F14u;
}
