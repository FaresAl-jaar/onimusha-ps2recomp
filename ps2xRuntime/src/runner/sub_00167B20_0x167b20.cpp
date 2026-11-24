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

// Function: sub_00167B20
// Address: 0x167b20 - 0x168044
void sub_00167B20_0x167b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167B20_0x167b20");
#endif

    switch (ctx->pc) {
        case 0x167b68u: goto label_167b68;
        case 0x167b74u: goto label_167b74;
        case 0x167c50u: goto label_167c50;
        case 0x167d80u: goto label_167d80;
        case 0x167df0u: goto label_167df0;
        default: break;
    }

    ctx->pc = 0x167b20u;

    // 0x167b20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x167b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x167b24: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x167b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x167b28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x167b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x167b2c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x167b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x167b30: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x167b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x167b34: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x167b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167b38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x167b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x167b3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x167b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x167b40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x167b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x167b44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x167b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x167b48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167b4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167b54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167b58: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x167b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x167b5c: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x167b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x167b60: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x167b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x167b64: 0x0  nop
    ctx->pc = 0x167b64u;
    // NOP
label_167b68:
    // 0x167b68: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x167b6c: 0xc059e08  jal         func_167820
    ctx->pc = 0x167B6Cu;
    SET_GPR_U32(ctx, 31, 0x167B74u);
    ctx->pc = 0x167B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B6Cu;
    // 0x167b70: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167820u, 0x167B6Cu, 0x167B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B74u;
label_167b74:
    // 0x167b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b78: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x167b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x167b7c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x167b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x167b80: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x167b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x167b84: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x167b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x167b88: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x167b8c: 0x94420068  lhu         $v0, 0x68($v0)
    ctx->pc = 0x167b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x167b90: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x167b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x167b94: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x167b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167b98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167b9c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x167b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x167ba0: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x167ba0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x167ba4: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x167ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x167ba8: 0x35f70002  ori         $s7, $t7, 0x2
    ctx->pc = 0x167ba8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x167bac: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x167bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x167bb0: 0x3c0f6c01  lui         $t7, 0x6C01
    ctx->pc = 0x167bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)27649 << 16));
    // 0x167bb4: 0x3c037814  lui         $v1, 0x7814
    ctx->pc = 0x167bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30740 << 16));
    // 0x167bb8: 0x35ef8000  ori         $t7, $t7, 0x8000
    ctx->pc = 0x167bb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32768);
    // 0x167bbc: 0x34668001  ori         $a2, $v1, 0x8001
    ctx->pc = 0x167bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x167bc0: 0x7faf00a0  sq          $t7, 0xA0($sp)
    ctx->pc = 0x167bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 15));
    // 0x167bc4: 0x10883c  dsll32      $s1, $s0, 0
    ctx->pc = 0x167bc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 0));
    // 0x167bc8: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x167bc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167bcc: 0x360a0005  ori         $t2, $s0, 0x5
    ctx->pc = 0x167bccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5);
    // 0x167bd0: 0x1f17825  or          $t7, $t7, $s1
    ctx->pc = 0x167bd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 17));
    // 0x167bd4: 0x3607000f  ori         $a3, $s0, 0xF
    ctx->pc = 0x167bd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15);
    // 0x167bd8: 0x7faf00d0  sq          $t7, 0xD0($sp)
    ctx->pc = 0x167bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 15));
    // 0x167bdc: 0x34490104  ori         $t1, $v0, 0x104
    ctx->pc = 0x167bdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)260);
    // 0x167be0: 0x360f0004  ori         $t7, $s0, 0x4
    ctx->pc = 0x167be0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x167be4: 0x344d0404  ori         $t5, $v0, 0x404
    ctx->pc = 0x167be4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x167be8: 0x7faf00f0  sq          $t7, 0xF0($sp)
    ctx->pc = 0x167be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 15));
    // 0x167bec: 0x3c026e14  lui         $v0, 0x6E14
    ctx->pc = 0x167becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28180 << 16));
    // 0x167bf0: 0x360f0008  ori         $t7, $s0, 0x8
    ctx->pc = 0x167bf0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x167bf4: 0x3448c004  ori         $t0, $v0, 0xC004
    ctx->pc = 0x167bf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49156);
    // 0x167bf8: 0x7faf0110  sq          $t7, 0x110($sp)
    ctx->pc = 0x167bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    // 0x167bfc: 0x3c026514  lui         $v0, 0x6514
    ctx->pc = 0x167bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25876 << 16));
    // 0x167c00: 0x3c0f5000  lui         $t7, 0x5000
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)20480 << 16));
    // 0x167c04: 0x3444c003  ori         $a0, $v0, 0xC003
    ctx->pc = 0x167c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49155);
    // 0x167c08: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x167c08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x167c0c: 0x240b8000  addiu       $t3, $zero, -0x8000
    ctx->pc = 0x167c0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167c10: 0x7faf00e0  sq          $t7, 0xE0($sp)
    ctx->pc = 0x167c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 15));
    // 0x167c14: 0x640c0014  daddiu      $t4, $zero, 0x14
    ctx->pc = 0x167c14u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
    // 0x167c18: 0x3c0f5000  lui         $t7, 0x5000
    ctx->pc = 0x167c18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)20480 << 16));
    // 0x167c1c: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x167c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x167c20: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x167c20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x167c24: 0x3c0e2000  lui         $t6, 0x2000
    ctx->pc = 0x167c24u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8192 << 16));
    // 0x167c28: 0x7faf00c0  sq          $t7, 0xC0($sp)
    ctx->pc = 0x167c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 15));
    // 0x167c2c: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x167c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x167c30: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x167c34: 0xf803c  dsll32      $s0, $t7, 0
    ctx->pc = 0x167c34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) << (32 + 0));
    // 0x167c38: 0x340f8001  ori         $t7, $zero, 0x8001
    ctx->pc = 0x167c38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x167c3c: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x167c3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x167c40: 0x7faf00b0  sq          $t7, 0xB0($sp)
    ctx->pc = 0x167c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 15));
    // 0x167c44: 0x3c0f5000  lui         $t7, 0x5000
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)20480 << 16));
    // 0x167c48: 0x35ef0005  ori         $t7, $t7, 0x5
    ctx->pc = 0x167c48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)5);
    // 0x167c4c: 0x7faf0100  sq          $t7, 0x100($sp)
    ctx->pc = 0x167c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 15));
label_167c50:
    // 0x167c50: 0x8faf0120  lw          $t7, 0x120($sp)
    ctx->pc = 0x167c50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167c54: 0xade50078  sw          $a1, 0x78($t7)
    ctx->pc = 0x167c54u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 120), GPR_U32(ctx, 5));
    // 0x167c58: 0x8faf0120  lw          $t7, 0x120($sp)
    ctx->pc = 0x167c58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167c5c: 0xade50060  sw          $a1, 0x60($t7)
    ctx->pc = 0x167c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 96), GPR_U32(ctx, 5));
    // 0x167c60: 0x8faf0170  lw          $t7, 0x170($sp)
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167c64: 0x25ef00f0  addiu       $t7, $t7, 0xF0
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
    // 0x167c68: 0xf813c  dsll32      $s0, $t7, 4
    ctx->pc = 0x167c68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) << (32 + 4));
    // 0x167c6c: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x167c6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x167c70: 0x24af0010  addiu       $t7, $a1, 0x10
    ctx->pc = 0x167c70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x167c74: 0x10883c  dsll32      $s1, $s0, 0
    ctx->pc = 0x167c74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 0));
    // 0x167c78: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x167c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x167c7c: 0x2308025  or          $s0, $s1, $s0
    ctx->pc = 0x167c7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x167c80: 0xfcb00000  sd          $s0, 0x0($a1)
    ctx->pc = 0x167c80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 16));
    // 0x167c84: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x167c88: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x167c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x167c8c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x167c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x167c90: 0xacb0000c  sw          $s0, 0xC($a1)
    ctx->pc = 0x167c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 16));
    // 0x167c94: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167c98: 0xacaf0070  sw          $t7, 0x70($a1)
    ctx->pc = 0x167c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 15));
    // 0x167c9c: 0x8fb00170  lw          $s0, 0x170($sp)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167ca0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x167ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x167ca4: 0x32100004  andi        $s0, $s0, 0x4
    ctx->pc = 0x167ca4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x167ca8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x167CA8u;
    {
        const bool branch_taken_0x167ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CA8u;
        // 0x167cac: 0x25e50010  addiu       $a1, $t7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ca8) {
            ctx->pc = 0x167CD8u;
            goto label_167cd8;
        }
    }
    ctx->pc = 0x167CB0u;
    // 0x167cb0: 0x8fb00170  lw          $s0, 0x170($sp)
    ctx->pc = 0x167cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167cb4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x167cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167cb8: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x167cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x167cbc: 0x8fb0018c  lw          $s0, 0x18C($sp)
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x167cc0: 0x8e100118  lw          $s0, 0x118($s0)
    ctx->pc = 0x167cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x167cc4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x167cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x167cc8: 0xde100000  ld          $s0, 0x0($s0)
    ctx->pc = 0x167cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167ccc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x167CCCu;
    {
        const bool branch_taken_0x167ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CCCu;
        // 0x167cd0: 0xfdf00000  sd          $s0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ccc) {
            ctx->pc = 0x167CF8u;
            goto label_167cf8;
        }
    }
    ctx->pc = 0x167CD4u;
    // 0x167cd4: 0x0  nop
    ctx->pc = 0x167cd4u;
    // NOP
label_167cd8:
    // 0x167cd8: 0x8fb00170  lw          $s0, 0x170($sp)
    ctx->pc = 0x167cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167cdc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x167cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x167ce0: 0x8fb0018c  lw          $s0, 0x18C($sp)
    ctx->pc = 0x167ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x167ce4: 0x8e100118  lw          $s0, 0x118($s0)
    ctx->pc = 0x167ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x167ce8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x167ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167cec: 0xde100000  ld          $s0, 0x0($s0)
    ctx->pc = 0x167cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167cf0: 0xfdf00000  sd          $s0, 0x0($t7)
    ctx->pc = 0x167cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 16));
    // 0x167cf4: 0x0  nop
    ctx->pc = 0x167cf4u;
    // NOP
label_167cf8:
    // 0x167cf8: 0xfde00008  sd          $zero, 0x8($t7)
    ctx->pc = 0x167cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 0));
    // 0x167cfc: 0x8faf0120  lw          $t7, 0x120($sp)
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167d00: 0x24b40030  addiu       $s4, $a1, 0x30
    ctx->pc = 0x167d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x167d04: 0x14813c  dsll32      $s0, $s4, 4
    ctx->pc = 0x167d04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 4));
    // 0x167d08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x167d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d0c: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x167d0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x167d10: 0x10883c  dsll32      $s1, $s0, 0
    ctx->pc = 0x167d10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 0));
    // 0x167d14: 0xade50088  sw          $a1, 0x88($t7)
    ctx->pc = 0x167d14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 136), GPR_U32(ctx, 5));
    // 0x167d18: 0x24af0020  addiu       $t7, $a1, 0x20
    ctx->pc = 0x167d18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x167d1c: 0xf813c  dsll32      $s0, $t7, 4
    ctx->pc = 0x167d1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) << (32 + 4));
    // 0x167d20: 0x3c0f5000  lui         $t7, 0x5000
    ctx->pc = 0x167d20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)20480 << 16));
    // 0x167d24: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x167d24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x167d28: 0x22f8825  or          $s1, $s1, $t7
    ctx->pc = 0x167d28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 15));
    // 0x167d2c: 0x10783c  dsll32      $t7, $s0, 0
    ctx->pc = 0x167d2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) << (32 + 0));
    // 0x167d30: 0xfcb10000  sd          $s1, 0x0($a1)
    ctx->pc = 0x167d30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 17));
    // 0x167d34: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x167d34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x167d38: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x167d38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x167d3c: 0xfcaf0010  sd          $t7, 0x10($a1)
    ctx->pc = 0x167d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 15));
    // 0x167d40: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x167d40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x167d44: 0xfca00018  sd          $zero, 0x18($a1)
    ctx->pc = 0x167d44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 0));
    // 0x167d48: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x167d4c: 0xfcb00020  sd          $s0, 0x20($a1)
    ctx->pc = 0x167d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 16));
    // 0x167d50: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x167d50u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d54: 0xfca00028  sd          $zero, 0x28($a1)
    ctx->pc = 0x167d54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 0));
    // 0x167d58: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x167d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167d5c: 0xacb10058  sw          $s1, 0x58($a1)
    ctx->pc = 0x167d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 17));
    // 0x167d60: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x167d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167d64: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x167d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x167d68: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x167d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x167d6c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167d70: 0xacb40068  sw          $s4, 0x68($a1)
    ctx->pc = 0x167d70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 20));
    // 0x167d74: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x167d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167d78: 0x90be0001  lbu         $fp, 0x1($a1)
    ctx->pc = 0x167d78u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x167d7c: 0x0  nop
    ctx->pc = 0x167d7cu;
    // NOP
label_167d80:
    // 0x167d80: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167d84: 0x8cb10018  lw          $s1, 0x18($a1)
    ctx->pc = 0x167d84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x167d88: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x167d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x167d8c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x167d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167d90: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x167d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x167d94: 0x10813c  dsll32      $s0, $s0, 4
    ctx->pc = 0x167d94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 4));
    // 0x167d98: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x167d9c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x167d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x167da0: 0x10883c  dsll32      $s1, $s0, 0
    ctx->pc = 0x167da0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 0));
    // 0x167da4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x167da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x167da8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x167da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x167dac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x167dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167db0: 0x2308825  or          $s1, $s1, $s0
    ctx->pc = 0x167db0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x167db4: 0x8fb00160  lw          $s0, 0x160($sp)
    ctx->pc = 0x167db4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x167db8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x167dbc: 0xafb00160  sw          $s0, 0x160($sp)
    ctx->pc = 0x167dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 16));
    // 0x167dc0: 0xfe910000  sd          $s1, 0x0($s4)
    ctx->pc = 0x167dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 17));
    // 0x167dc4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x167dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x167dc8: 0xae900008  sw          $s0, 0x8($s4)
    ctx->pc = 0x167dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 16));
    // 0x167dcc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x167dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x167dd0: 0xae90000c  sw          $s0, 0xC($s4)
    ctx->pc = 0x167dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 16));
    // 0x167dd4: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x167dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x167dd8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x167dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x167ddc: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x167ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x167de0: 0x8cb9000c  lw          $t9, 0xC($a1)
    ctx->pc = 0x167de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x167de4: 0x8cb80010  lw          $t8, 0x10($a1)
    ctx->pc = 0x167de4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x167de8: 0x94b30000  lhu         $s3, 0x0($a1)
    ctx->pc = 0x167de8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167dec: 0x0  nop
    ctx->pc = 0x167decu;
    // NOP
label_167df0:
    // 0x167df0: 0xfe970000  sd          $s7, 0x0($s4)
    ctx->pc = 0x167df0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 23));
    // 0x167df4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x167df4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x167df8: 0x2a650014  slti        $a1, $s3, 0x14
    ctx->pc = 0x167df8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x167dfc: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x167dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x167e00: 0xae8e0010  sw          $t6, 0x10($s4)
    ctx->pc = 0x167e00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 14));
    // 0x167e04: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x167e04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x167e08: 0xae8d0018  sw          $t5, 0x18($s4)
    ctx->pc = 0x167e08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 13));
    // 0x167e0c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x167e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167e10: 0xae95001c  sw          $s5, 0x1C($s4)
    ctx->pc = 0x167e10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 21));
    // 0x167e14: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x167e14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x167e18: 0xfe950020  sd          $s5, 0x20($s4)
    ctx->pc = 0x167e18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 21));
    // 0x167e1c: 0xfe800028  sd          $zero, 0x28($s4)
    ctx->pc = 0x167e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 0));
    // 0x167e20: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x167e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x167e24: 0x92960028  lbu         $s6, 0x28($s4)
    ctx->pc = 0x167e24u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x167e28: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x167e2c: 0x64150002  daddiu      $s5, $zero, 0x2
    ctx->pc = 0x167e2cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x167e30: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x167e30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x167e34: 0xa2950028  sb          $s5, 0x28($s4)
    ctx->pc = 0x167e34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 21));
    // 0x167e38: 0x92960028  lbu         $s6, 0x28($s4)
    ctx->pc = 0x167e38u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x167e3c: 0x2415ff0f  addiu       $s5, $zero, -0xF1
    ctx->pc = 0x167e3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x167e40: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x167e40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x167e44: 0x64150010  daddiu      $s5, $zero, 0x10
    ctx->pc = 0x167e44u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x167e48: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x167e48u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x167e4c: 0xa2950028  sb          $s5, 0x28($s4)
    ctx->pc = 0x167e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 21));
    // 0x167e50: 0x92960029  lbu         $s6, 0x29($s4)
    ctx->pc = 0x167e50u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 41)));
    // 0x167e54: 0x2415fff0  addiu       $s5, $zero, -0x10
    ctx->pc = 0x167e54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x167e58: 0x2d5b024  and         $s6, $s6, $s5
    ctx->pc = 0x167e58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 21));
    // 0x167e5c: 0x64150004  daddiu      $s5, $zero, 0x4
    ctx->pc = 0x167e5cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x167e60: 0x2d5a825  or          $s5, $s6, $s5
    ctx->pc = 0x167e60u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) | GPR_U64(ctx, 21));
    // 0x167e64: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x167E64u;
    {
        const bool branch_taken_0x167e64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E64u;
        // 0x167e68: 0xa2950029  sb          $s5, 0x29($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 41), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e64) {
            ctx->pc = 0x167E80u;
            goto label_167e80;
        }
    }
    ctx->pc = 0x167E6Cu;
    // 0x167e6c: 0x96850020  lhu         $a1, 0x20($s4)
    ctx->pc = 0x167e6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x167e70: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x167e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x167e74: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x167e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x167e78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x167E78u;
    {
        const bool branch_taken_0x167e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E78u;
        // 0x167e7c: 0xa6850020  sh          $a1, 0x20($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e78) {
            ctx->pc = 0x167E98u;
            goto label_167e98;
        }
    }
    ctx->pc = 0x167E80u;
label_167e80:
    // 0x167e80: 0x96850020  lhu         $a1, 0x20($s4)
    ctx->pc = 0x167e80u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x167e84: 0x32757fff  andi        $s5, $s3, 0x7FFF
    ctx->pc = 0x167e84u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32767);
    // 0x167e88: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x167e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x167e8c: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x167e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x167e90: 0xa6850020  sh          $a1, 0x20($s4)
    ctx->pc = 0x167e90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x167e94: 0x0  nop
    ctx->pc = 0x167e94u;
    // NOP
label_167e98:
    // 0x167e98: 0x18293c  dsll32      $a1, $t8, 4
    ctx->pc = 0x167e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) << (32 + 4));
    // 0x167e9c: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x167e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x167ea0: 0x11a93c  dsll32      $s5, $s1, 4
    ctx->pc = 0x167ea0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) << (32 + 4));
    // 0x167ea4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x167ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x167ea8: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x167ea8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x167eac: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x167eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x167eb0: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x167eb0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x167eb4: 0xfe850030  sd          $a1, 0x30($s4)
    ctx->pc = 0x167eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 5));
    // 0x167eb8: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x167ebc: 0x2a72825  or          $a1, $s5, $a3
    ctx->pc = 0x167ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 7));
    // 0x167ec0: 0xae890038  sw          $t1, 0x38($s4)
    ctx->pc = 0x167ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 9));
    // 0x167ec4: 0x19a93c  dsll32      $s5, $t9, 4
    ctx->pc = 0x167ec4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 25) << (32 + 4));
    // 0x167ec8: 0xae88003c  sw          $t0, 0x3C($s4)
    ctx->pc = 0x167ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 8));
    // 0x167ecc: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x167eccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x167ed0: 0xfe850040  sd          $a1, 0x40($s4)
    ctx->pc = 0x167ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 5));
    // 0x167ed4: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x167ed4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x167ed8: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x167ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x167edc: 0x2aa2825  or          $a1, $s5, $t2
    ctx->pc = 0x167edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 10));
    // 0x167ee0: 0xae86004c  sw          $a2, 0x4C($s4)
    ctx->pc = 0x167ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 6));
    // 0x167ee4: 0x10a93c  dsll32      $s5, $s0, 4
    ctx->pc = 0x167ee4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) << (32 + 4));
    // 0x167ee8: 0xfe850050  sd          $a1, 0x50($s4)
    ctx->pc = 0x167ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 5));
    // 0x167eec: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x167eecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x167ef0: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x167ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
    // 0x167ef4: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x167ef4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x167ef8: 0xae84005c  sw          $a0, 0x5C($s4)
    ctx->pc = 0x167ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 4));
    // 0x167efc: 0x2a72825  or          $a1, $s5, $a3
    ctx->pc = 0x167efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 7));
    // 0x167f00: 0x263100f0  addiu       $s1, $s1, 0xF0
    ctx->pc = 0x167f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x167f04: 0x26950080  addiu       $s5, $s4, 0x80
    ctx->pc = 0x167f04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x167f08: 0xfe850060  sd          $a1, 0x60($s4)
    ctx->pc = 0x167f08u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 5));
    // 0x167f0c: 0x15a93c  dsll32      $s5, $s5, 4
    ctx->pc = 0x167f0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
    // 0x167f10: 0xae800068  sw          $zero, 0x68($s4)
    ctx->pc = 0x167f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 0));
    // 0x167f14: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x167f14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x167f18: 0xae83006c  sw          $v1, 0x6C($s4)
    ctx->pc = 0x167f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 3));
    // 0x167f1c: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x167f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x167f20: 0x261000f0  addiu       $s0, $s0, 0xF0
    ctx->pc = 0x167f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x167f24: 0xae2825  or          $a1, $a1, $t6
    ctx->pc = 0x167f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
    // 0x167f28: 0x27390050  addiu       $t9, $t9, 0x50
    ctx->pc = 0x167f28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 80));
    // 0x167f2c: 0xfe850070  sd          $a1, 0x70($s4)
    ctx->pc = 0x167f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 112), GPR_U64(ctx, 5));
    // 0x167f30: 0x27180050  addiu       $t8, $t8, 0x50
    ctx->pc = 0x167f30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 80));
    // 0x167f34: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x167f34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
    // 0x167f38: 0xae8d007c  sw          $t5, 0x7C($s4)
    ctx->pc = 0x167f38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 13));
    // 0x167f3c: 0x1e60ffac  bgtz        $s3, . + 4 + (-0x54 << 2)
    ctx->pc = 0x167F3Cu;
    {
        const bool branch_taken_0x167f3c = (GPR_S64(ctx, 19) > 0);
        ctx->pc = 0x167F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F3Cu;
        // 0x167f40: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f3c) {
            ctx->pc = 0x167DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167df0;
        }
    }
    ctx->pc = 0x167F44u;
    // 0x167f44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x167f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x167f48: 0x25e282b  sltu        $a1, $s2, $fp
    ctx->pc = 0x167f48u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x167f4c: 0x14a0ff8c  bnez        $a1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x167F4Cu;
    {
        const bool branch_taken_0x167f4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x167F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F4Cu;
        // 0x167f50: 0x25ef0008  addiu       $t7, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f4c) {
            ctx->pc = 0x167D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167d80;
        }
    }
    ctx->pc = 0x167F54u;
    // 0x167f54: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x167f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x167f58: 0x268f0010  addiu       $t7, $s4, 0x10
    ctx->pc = 0x167f58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x167f5c: 0x25f00020  addiu       $s0, $t7, 0x20
    ctx->pc = 0x167f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x167f60: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x167f64: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x167f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x167f68: 0xf293c  dsll32      $a1, $t7, 4
    ctx->pc = 0x167f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) << (32 + 4));
    // 0x167f6c: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x167f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x167f70: 0x5783c  dsll32      $t7, $a1, 0
    ctx->pc = 0x167f70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) << (32 + 0));
    // 0x167f74: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x167f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x167f78: 0x1f78025  or          $s0, $t7, $s7
    ctx->pc = 0x167f78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) | GPR_U64(ctx, 23));
    // 0x167f7c: 0x8faf0170  lw          $t7, 0x170($sp)
    ctx->pc = 0x167f7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x167f80: 0x25ef01f0  addiu       $t7, $t7, 0x1F0
    ctx->pc = 0x167f80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 496));
    // 0x167f84: 0xafaf0170  sw          $t7, 0x170($sp)
    ctx->pc = 0x167f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 15));
    // 0x167f88: 0xfe900000  sd          $s0, 0x0($s4)
    ctx->pc = 0x167f88u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 16));
    // 0x167f8c: 0x8faf0150  lw          $t7, 0x150($sp)
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x167f90: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x167f90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x167f94: 0xafaf0150  sw          $t7, 0x150($sp)
    ctx->pc = 0x167f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 15));
    // 0x167f98: 0x3c0f1100  lui         $t7, 0x1100
    ctx->pc = 0x167f98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4352 << 16));
    // 0x167f9c: 0xae8f0008  sw          $t7, 0x8($s4)
    ctx->pc = 0x167f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 15));
    // 0x167fa0: 0x7baf00c0  lq          $t7, 0xC0($sp)
    ctx->pc = 0x167fa0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x167fa4: 0xae8f000c  sw          $t7, 0xC($s4)
    ctx->pc = 0x167fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 15));
    // 0x167fa8: 0x7baf00b0  lq          $t7, 0xB0($sp)
    ctx->pc = 0x167fa8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167fac: 0xfe8f0010  sd          $t7, 0x10($s4)
    ctx->pc = 0x167facu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 15));
    // 0x167fb0: 0x240f000e  addiu       $t7, $zero, 0xE
    ctx->pc = 0x167fb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x167fb4: 0xfe8f0018  sd          $t7, 0x18($s4)
    ctx->pc = 0x167fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 15));
    // 0x167fb8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x167fb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167fbc: 0xfe8f0020  sd          $t7, 0x20($s4)
    ctx->pc = 0x167fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 15));
    // 0x167fc0: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x167fc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x167fc4: 0xfe8f0028  sd          $t7, 0x28($s4)
    ctx->pc = 0x167fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 15));
    // 0x167fc8: 0x3c0f6000  lui         $t7, 0x6000
    ctx->pc = 0x167fc8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)24576 << 16));
    // 0x167fcc: 0xfe8f0030  sd          $t7, 0x30($s4)
    ctx->pc = 0x167fccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 15));
    // 0x167fd0: 0x3c0f1100  lui         $t7, 0x1100
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4352 << 16));
    // 0x167fd4: 0xae8f0038  sw          $t7, 0x38($s4)
    ctx->pc = 0x167fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 15));
    // 0x167fd8: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x167fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
    // 0x167fdc: 0x8faf0150  lw          $t7, 0x150($sp)
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x167fe0: 0x15e0ff1b  bnez        $t7, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x167FE0u;
    {
        const bool branch_taken_0x167fe0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x167fe0) {
            ctx->pc = 0x167C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167c50;
        }
    }
    ctx->pc = 0x167FE8u;
    // 0x167fe8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x167fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x167fec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x167fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x167ff0: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x167ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x167ff4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x167ff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167ffc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x167ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x168000: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x168000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x168004: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x168004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x168008: 0x1440fed7  bnez        $v0, . + 4 + (-0x129 << 2)
    ctx->pc = 0x168008u;
    {
        const bool branch_taken_0x168008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168008) {
            ctx->pc = 0x167B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167b68;
        }
    }
    ctx->pc = 0x168010u;
    // 0x168010: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x168010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168014: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x168014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168018: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x168018u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16801c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16801cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168020: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x168020u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168024: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x168024u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168028: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x168028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16802c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16802cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16803c: 0x3e00008  jr          $ra
    ctx->pc = 0x16803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16803Cu;
        // 0x168040: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168044u;
}
