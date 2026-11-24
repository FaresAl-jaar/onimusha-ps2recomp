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

// Function: sub_00182CC0
// Address: 0x182cc0 - 0x1833d8
void sub_00182CC0_0x182cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182CC0_0x182cc0");
#endif

    ctx->pc = 0x182cc0u;

    // 0x182cc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x182cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x182cc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x182cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x182cc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182ccc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182cd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182cd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182ce0: 0x8ca30070  lw          $v1, 0x70($a1)
    ctx->pc = 0x182ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x182ce4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x182ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x182ce8: 0x906d0000  lbu         $t5, 0x0($v1)
    ctx->pc = 0x182ce8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182cec: 0x25a3fffd  addiu       $v1, $t5, -0x3
    ctx->pc = 0x182cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967293));
    // 0x182cf0: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x182cf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x182cf4: 0x10200170  beqz        $at, . + 4 + (0x170 << 2)
    ctx->pc = 0x182CF4u;
    {
        const bool branch_taken_0x182cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cf4) {
            ctx->pc = 0x1832B8u;
            goto label_1832b8;
        }
    }
    ctx->pc = 0x182CFCu;
    // 0x182cfc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x182cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x182d00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182d04: 0x248455e0  addiu       $a0, $a0, 0x55E0
    ctx->pc = 0x182d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21984));
    // 0x182d08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182d0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x182d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182d10: 0x600008  jr          $v1
    ctx->pc = 0x182D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182D18u: goto label_182d18;
            case 0x182E30u: goto label_182e30;
            case 0x182F08u: goto label_182f08;
            case 0x183008u: goto label_183008;
            case 0x1830D0u: goto label_1830d0;
            case 0x183198u: goto label_183198;
            case 0x1832B8u: goto label_1832b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182D10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x182D18u;
label_182d18:
    // 0x182d18: 0x8cb10080  lw          $s1, 0x80($a1)
    ctx->pc = 0x182d18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182d1c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x182d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x182d20: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x182d20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x182d24: 0x672023  subu        $a0, $v1, $a3
    ctx->pc = 0x182d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x182d28: 0x24eb0002  addiu       $t3, $a3, 0x2
    ctx->pc = 0x182d28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x182d2c: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x182d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x182d30: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x182d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x182d34: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x182d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x182d38: 0xb2100  sll         $a0, $t3, 4
    ctx->pc = 0x182d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x182d3c: 0x37940  sll         $t7, $v1, 5
    ctx->pc = 0x182d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182d40: 0xc7100  sll         $t6, $t4, 4
    ctx->pc = 0x182d40u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x182d44: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x182d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x182d48: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x182d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x182d4c: 0x963000c6  lhu         $s0, 0xC6($s1)
    ctx->pc = 0x182d4cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x182d50: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x182d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x182d54: 0x34940  sll         $t1, $v1, 5
    ctx->pc = 0x182d54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182d58: 0x24ea0003  addiu       $t2, $a3, 0x3
    ctx->pc = 0x182d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x182d5c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x182d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182d60: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x182d60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x182d64: 0xa63000c6  sh          $s0, 0xC6($s1)
    ctx->pc = 0x182d64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 198), (uint16_t)GPR_U32(ctx, 16));
    // 0x182d68: 0x8cb00080  lw          $s0, 0x80($a1)
    ctx->pc = 0x182d68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182d6c: 0x1f08021  addu        $s0, $t7, $s0
    ctx->pc = 0x182d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x182d70: 0x960f00c6  lhu         $t7, 0xC6($s0)
    ctx->pc = 0x182d70u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x182d74: 0x35ef0020  ori         $t7, $t7, 0x20
    ctx->pc = 0x182d74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32);
    // 0x182d78: 0xa60f00c6  sh          $t7, 0xC6($s0)
    ctx->pc = 0x182d78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 15));
    // 0x182d7c: 0x8caf0080  lw          $t7, 0x80($a1)
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182d80: 0x12f7821  addu        $t7, $t1, $t7
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x182d84: 0x95e900c6  lhu         $t1, 0xC6($t7)
    ctx->pc = 0x182d84u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 198)));
    // 0x182d88: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x182d88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
    // 0x182d8c: 0xa5e900c6  sh          $t1, 0xC6($t7)
    ctx->pc = 0x182d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 198), (uint16_t)GPR_U32(ctx, 9));
    // 0x182d90: 0x8ca90074  lw          $t1, 0x74($a1)
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182d94: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x182d94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x182d98: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x182d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x182d9c: 0x1c94821  addu        $t1, $t6, $t1
    ctx->pc = 0x182d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x182da0: 0xc523000c  lwc1        $f3, 0xC($t1)
    ctx->pc = 0x182da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182da4: 0xc486000c  lwc1        $f6, 0xC($a0)
    ctx->pc = 0x182da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x182da8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182dac: 0xacca0080  sw          $t2, 0x80($a2)
    ctx->pc = 0x182dacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 10));
    // 0x182db0: 0x8ca40074  lw          $a0, 0x74($a1)
    ctx->pc = 0x182db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182db4: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x182db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x182db8: 0x78900000  lq          $s0, 0x0($a0)
    ctx->pc = 0x182db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182dbc: 0xa7100  sll         $t6, $t2, 4
    ctx->pc = 0x182dbcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x182dc0: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x182dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x182dc4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x182dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x182dc8: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x182dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x182dcc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x182dccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182dd0: 0x0  nop
    ctx->pc = 0x182dd0u;
    // NOP
    // 0x182dd4: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x182dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x182dd8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x182dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x182ddc: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x182ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182de0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x182de0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182de4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x182de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182de8: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x182de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x182dec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x182decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182df0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x182df0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x182df4: 0xe4c10030  swc1        $f1, 0x30($a2)
    ctx->pc = 0x182df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x182df8: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x182df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182dfc: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x182dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x182e00: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x182e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182e04: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x182e04u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x182e08: 0xe4c10034  swc1        $f1, 0x34($a2)
    ctx->pc = 0x182e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x182e0c: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x182e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182e10: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x182e14: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x182e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182e18: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x182e18u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x182e1c: 0xe4c10038  swc1        $f1, 0x38($a2)
    ctx->pc = 0x182e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x182e20: 0xe4c0003c  swc1        $f0, 0x3C($a2)
    ctx->pc = 0x182e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x182e24: 0xacc90084  sw          $t1, 0x84($a2)
    ctx->pc = 0x182e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 9));
    // 0x182e28: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x182E28u;
    {
        const bool branch_taken_0x182e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E28u;
        // 0x182e2c: 0xacc40088  sw          $a0, 0x88($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e28) {
            ctx->pc = 0x1832B8u;
            goto label_1832b8;
        }
    }
    ctx->pc = 0x182E30u;
label_182e30:
    // 0x182e30: 0x8ca90080  lw          $t1, 0x80($a1)
    ctx->pc = 0x182e30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182e34: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x182e34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x182e38: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x182e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x182e3c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x182e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x182e40: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x182e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x182e44: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x182e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x182e48: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x182e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x182e4c: 0x24eb0002  addiu       $t3, $a3, 0x2
    ctx->pc = 0x182e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x182e50: 0x38940  sll         $s1, $v1, 5
    ctx->pc = 0x182e50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182e54: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x182e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x182e58: 0xc8100  sll         $s0, $t4, 4
    ctx->pc = 0x182e58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x182e5c: 0x899821  addu        $s3, $a0, $t1
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x182e60: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x182e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x182e64: 0x967200c6  lhu         $s2, 0xC6($s3)
    ctx->pc = 0x182e64u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 198)));
    // 0x182e68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x182e68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e6c: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x182e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x182e70: 0x37940  sll         $t7, $v1, 5
    ctx->pc = 0x182e70u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182e74: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x182e74u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182e78: 0xb7100  sll         $t6, $t3, 4
    ctx->pc = 0x182e78u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x182e7c: 0xc5100  sll         $t2, $t4, 4
    ctx->pc = 0x182e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x182e80: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x182e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182e84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x182e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182e88: 0x36490020  ori         $t1, $s2, 0x20
    ctx->pc = 0x182e88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
    // 0x182e8c: 0xa66900c6  sh          $t1, 0xC6($s3)
    ctx->pc = 0x182e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 198), (uint16_t)GPR_U32(ctx, 9));
    // 0x182e90: 0x8ca90080  lw          $t1, 0x80($a1)
    ctx->pc = 0x182e90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182e94: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x182e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x182e98: 0x962900c6  lhu         $t1, 0xC6($s1)
    ctx->pc = 0x182e98u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x182e9c: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x182e9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
    // 0x182ea0: 0xa62900c6  sh          $t1, 0xC6($s1)
    ctx->pc = 0x182ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 198), (uint16_t)GPR_U32(ctx, 9));
    // 0x182ea4: 0x8ca90080  lw          $t1, 0x80($a1)
    ctx->pc = 0x182ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182ea8: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x182ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x182eac: 0x95e900c6  lhu         $t1, 0xC6($t7)
    ctx->pc = 0x182eacu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 198)));
    // 0x182eb0: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x182eb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
    // 0x182eb4: 0xa5e900c6  sh          $t1, 0xC6($t7)
    ctx->pc = 0x182eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 198), (uint16_t)GPR_U32(ctx, 9));
    // 0x182eb8: 0x8ca9006c  lw          $t1, 0x6C($a1)
    ctx->pc = 0x182eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x182ebc: 0x8cb10074  lw          $s1, 0x74($a1)
    ctx->pc = 0x182ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182ec0: 0x8caf0074  lw          $t7, 0x74($a1)
    ctx->pc = 0x182ec0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182ec4: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x182ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x182ec8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x182ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x182ecc: 0x9129ffff  lbu         $t1, -0x1($t1)
    ctx->pc = 0x182eccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967295)));
    // 0x182ed0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x182ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x182ed4: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x182ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182ed8: 0xc5c6000c  lwc1        $f6, 0xC($t6)
    ctx->pc = 0x182ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x182edc: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x182edcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x182ee0: 0xacc90078  sw          $t1, 0x78($a2)
    ctx->pc = 0x182ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 9));
    // 0x182ee4: 0x8ca90074  lw          $t1, 0x74($a1)
    ctx->pc = 0x182ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182ee8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x182ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x182eec: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x182eecu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182ef0: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x182ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x182ef4: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x182ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x182ef8: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x182ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
    // 0x182efc: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x182EFCu;
    {
        const bool branch_taken_0x182efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EFCu;
        // 0x182f00: 0xacc40088  sw          $a0, 0x88($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182efc) {
            ctx->pc = 0x1832B8u;
            goto label_1832b8;
        }
    }
    ctx->pc = 0x182F04u;
    // 0x182f04: 0x0  nop
    ctx->pc = 0x182f04u;
    // NOP
label_182f08:
    // 0x182f08: 0x8cae0080  lw          $t6, 0x80($a1)
    ctx->pc = 0x182f08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182f0c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x182f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x182f10: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x182f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x182f14: 0x674823  subu        $t1, $v1, $a3
    ctx->pc = 0x182f14u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x182f18: 0x24eb0003  addiu       $t3, $a3, 0x3
    ctx->pc = 0x182f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x182f1c: 0x95140  sll         $t2, $t1, 5
    ctx->pc = 0x182f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x182f20: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x182f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x182f24: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x182f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182f28: 0x24ec0002  addiu       $t4, $a3, 0x2
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x182f2c: 0x39940  sll         $s3, $v1, 5
    ctx->pc = 0x182f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182f30: 0x48900  sll         $s1, $a0, 4
    ctx->pc = 0x182f30u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x182f34: 0x14ea821  addu        $s5, $t2, $t6
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x182f38: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x182f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x182f3c: 0x96b400c6  lhu         $s4, 0xC6($s5)
    ctx->pc = 0x182f3cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 198)));
    // 0x182f40: 0x6c4823  subu        $t1, $v1, $t4
    ctx->pc = 0x182f40u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x182f44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x182f44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f48: 0x99140  sll         $s2, $t1, 5
    ctx->pc = 0x182f48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x182f4c: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x182f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x182f50: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x182f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x182f54: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x182f54u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182f58: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x182f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x182f5c: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x182f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182f60: 0xb7900  sll         $t7, $t3, 4
    ctx->pc = 0x182f60u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x182f64: 0x47100  sll         $t6, $a0, 4
    ctx->pc = 0x182f64u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x182f68: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x182f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x182f6c: 0x368a0020  ori         $t2, $s4, 0x20
    ctx->pc = 0x182f6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
    // 0x182f70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x182f70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182f74: 0xa6aa00c6  sh          $t2, 0xC6($s5)
    ctx->pc = 0x182f74u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 198), (uint16_t)GPR_U32(ctx, 10));
    // 0x182f78: 0x8caa0080  lw          $t2, 0x80($a1)
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182f7c: 0x26a9821  addu        $s3, $s3, $t2
    ctx->pc = 0x182f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x182f80: 0x966a00c6  lhu         $t2, 0xC6($s3)
    ctx->pc = 0x182f80u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 198)));
    // 0x182f84: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x182f84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x182f88: 0xa66a00c6  sh          $t2, 0xC6($s3)
    ctx->pc = 0x182f88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 198), (uint16_t)GPR_U32(ctx, 10));
    // 0x182f8c: 0x8caa0080  lw          $t2, 0x80($a1)
    ctx->pc = 0x182f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182f90: 0x24a9021  addu        $s2, $s2, $t2
    ctx->pc = 0x182f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x182f94: 0x964a00c6  lhu         $t2, 0xC6($s2)
    ctx->pc = 0x182f94u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
    // 0x182f98: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x182f98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x182f9c: 0xa64a00c6  sh          $t2, 0xC6($s2)
    ctx->pc = 0x182f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 198), (uint16_t)GPR_U32(ctx, 10));
    // 0x182fa0: 0x8caa0080  lw          $t2, 0x80($a1)
    ctx->pc = 0x182fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x182fa4: 0x20a8021  addu        $s0, $s0, $t2
    ctx->pc = 0x182fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x182fa8: 0x960a00c6  lhu         $t2, 0xC6($s0)
    ctx->pc = 0x182fa8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x182fac: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x182facu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x182fb0: 0xa60a00c6  sh          $t2, 0xC6($s0)
    ctx->pc = 0x182fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 10));
    // 0x182fb4: 0x8caa006c  lw          $t2, 0x6C($a1)
    ctx->pc = 0x182fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x182fb8: 0x8cb20074  lw          $s2, 0x74($a1)
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182fbc: 0x8cb00074  lw          $s0, 0x74($a1)
    ctx->pc = 0x182fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182fc0: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x182fc4: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x182fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x182fc8: 0x914affff  lbu         $t2, -0x1($t2)
    ctx->pc = 0x182fc8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294967295)));
    // 0x182fcc: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x182fccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x182fd0: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x182fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182fd4: 0xc5e6000c  lwc1        $f6, 0xC($t7)
    ctx->pc = 0x182fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x182fd8: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x182fd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x182fdc: 0xacca0078  sw          $t2, 0x78($a2)
    ctx->pc = 0x182fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 10));
    // 0x182fe0: 0xacc4007c  sw          $a0, 0x7C($a2)
    ctx->pc = 0x182fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 4));
    // 0x182fe4: 0x8ca40074  lw          $a0, 0x74($a1)
    ctx->pc = 0x182fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x182fe8: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x182fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x182fec: 0x788a0000  lq          $t2, 0x0($a0)
    ctx->pc = 0x182fecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182ff0: 0x7c6a0000  sq          $t2, 0x0($v1)
    ctx->pc = 0x182ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
    // 0x182ff4: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x182ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x182ff8: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x182ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
    // 0x182ffc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x182FFCu;
    {
        const bool branch_taken_0x182ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FFCu;
        // 0x183000: 0xacc90088  sw          $t1, 0x88($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ffc) {
            ctx->pc = 0x1832B8u;
            goto label_1832b8;
        }
    }
    ctx->pc = 0x183004u;
    // 0x183004: 0x0  nop
    ctx->pc = 0x183004u;
    // NOP
label_183008:
    // 0x183008: 0x8ca90080  lw          $t1, 0x80($a1)
    ctx->pc = 0x183008u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x18300c: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x18300cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x183010: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x183010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x183014: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x183014u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x183018: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x183018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x18301c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18301cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x183020: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x183024: 0x24eb0002  addiu       $t3, $a3, 0x2
    ctx->pc = 0x183024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x183028: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x183028u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18302c: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x183030: 0xc8900  sll         $s1, $t4, 4
    ctx->pc = 0x183030u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x183034: 0x899821  addu        $s3, $a0, $t1
    ctx->pc = 0x183034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x183038: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x183038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x18303c: 0x967200c6  lhu         $s2, 0xC6($s3)
    ctx->pc = 0x18303cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 198)));
    // 0x183040: 0x35140  sll         $t2, $v1, 5
    ctx->pc = 0x183040u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x183044: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x183044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x183048: 0xb7900  sll         $t7, $t3, 4
    ctx->pc = 0x183048u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x18304c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18304cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183050: 0xc7100  sll         $t6, $t4, 4
    ctx->pc = 0x183050u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x183054: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x183054u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183058: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x183058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x18305c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x18305cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183060: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183064: 0x36520020  ori         $s2, $s2, 0x20
    ctx->pc = 0x183064u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
    // 0x183068: 0xa67200c6  sh          $s2, 0xC6($s3)
    ctx->pc = 0x183068u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 198), (uint16_t)GPR_U32(ctx, 18));
    // 0x18306c: 0x8cb20080  lw          $s2, 0x80($a1)
    ctx->pc = 0x18306cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x183070: 0x2129021  addu        $s2, $s0, $s2
    ctx->pc = 0x183070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x183074: 0x965000c6  lhu         $s0, 0xC6($s2)
    ctx->pc = 0x183074u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
    // 0x183078: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x183078u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x18307c: 0xa65000c6  sh          $s0, 0xC6($s2)
    ctx->pc = 0x18307cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 198), (uint16_t)GPR_U32(ctx, 16));
    // 0x183080: 0x8cb00080  lw          $s0, 0x80($a1)
    ctx->pc = 0x183080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x183084: 0x1508021  addu        $s0, $t2, $s0
    ctx->pc = 0x183084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x183088: 0x960a00c6  lhu         $t2, 0xC6($s0)
    ctx->pc = 0x183088u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x18308c: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x18308cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x183090: 0xa60a00c6  sh          $t2, 0xC6($s0)
    ctx->pc = 0x183090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 10));
    // 0x183094: 0x8cb20074  lw          $s2, 0x74($a1)
    ctx->pc = 0x183094u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183098: 0x8cb00074  lw          $s0, 0x74($a1)
    ctx->pc = 0x183098u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x18309c: 0x8caa0074  lw          $t2, 0x74($a1)
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x1830a0: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x1830a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1830a4: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1830a8: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x1830a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x1830ac: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x1830acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1830b0: 0x79540000  lq          $s4, 0x0($t2)
    ctx->pc = 0x1830b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1830b4: 0xc5e6000c  lwc1        $f6, 0xC($t7)
    ctx->pc = 0x1830b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1830b8: 0x7c740000  sq          $s4, 0x0($v1)
    ctx->pc = 0x1830b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 20));
    // 0x1830bc: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x1830bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x1830c0: 0xacc90084  sw          $t1, 0x84($a2)
    ctx->pc = 0x1830c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 9));
    // 0x1830c4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1830C4u;
    {
        const bool branch_taken_0x1830c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1830C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830C4u;
        // 0x1830c8: 0xacc40088  sw          $a0, 0x88($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830c4) {
            ctx->pc = 0x1832B8u;
            goto label_1832b8;
        }
    }
    ctx->pc = 0x1830CCu;
    // 0x1830cc: 0x0  nop
    ctx->pc = 0x1830ccu;
    // NOP
label_1830d0:
    // 0x1830d0: 0x8ca90080  lw          $t1, 0x80($a1)
    ctx->pc = 0x1830d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1830d4: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x1830d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1830d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1830d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1830dc: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1830dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1830e0: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x1830e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1830e4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1830e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1830e8: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x1830e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1830ec: 0x24eb0002  addiu       $t3, $a3, 0x2
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1830f0: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x1830f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1830f4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x1830f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1830f8: 0xc8900  sll         $s1, $t4, 4
    ctx->pc = 0x1830f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1830fc: 0x899821  addu        $s3, $a0, $t1
    ctx->pc = 0x1830fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x183100: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x183104: 0x967200c6  lhu         $s2, 0xC6($s3)
    ctx->pc = 0x183104u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 198)));
    // 0x183108: 0x35140  sll         $t2, $v1, 5
    ctx->pc = 0x183108u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18310c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x18310cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x183110: 0xb7900  sll         $t7, $t3, 4
    ctx->pc = 0x183110u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x183114: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x183114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183118: 0xc7100  sll         $t6, $t4, 4
    ctx->pc = 0x183118u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x18311c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18311cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183120: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x183120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x183124: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x183124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x183128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18312c: 0x36520020  ori         $s2, $s2, 0x20
    ctx->pc = 0x18312cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
    // 0x183130: 0xa67200c6  sh          $s2, 0xC6($s3)
    ctx->pc = 0x183130u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 198), (uint16_t)GPR_U32(ctx, 18));
    // 0x183134: 0x8cb20080  lw          $s2, 0x80($a1)
    ctx->pc = 0x183134u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x183138: 0x2129021  addu        $s2, $s0, $s2
    ctx->pc = 0x183138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18313c: 0x965000c6  lhu         $s0, 0xC6($s2)
    ctx->pc = 0x18313cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 198)));
    // 0x183140: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x183140u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x183144: 0xa65000c6  sh          $s0, 0xC6($s2)
    ctx->pc = 0x183144u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 198), (uint16_t)GPR_U32(ctx, 16));
    // 0x183148: 0x8cb00080  lw          $s0, 0x80($a1)
    ctx->pc = 0x183148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x18314c: 0x1508021  addu        $s0, $t2, $s0
    ctx->pc = 0x18314cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x183150: 0x960a00c6  lhu         $t2, 0xC6($s0)
    ctx->pc = 0x183150u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x183154: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x183154u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x183158: 0xa60a00c6  sh          $t2, 0xC6($s0)
    ctx->pc = 0x183158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 10));
    // 0x18315c: 0x8cb20074  lw          $s2, 0x74($a1)
    ctx->pc = 0x18315cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183160: 0x8cb00074  lw          $s0, 0x74($a1)
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183164: 0x8caa0074  lw          $t2, 0x74($a1)
    ctx->pc = 0x183164u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183168: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x18316c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x18316cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x183170: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x183170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x183174: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x183174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x183178: 0x79540000  lq          $s4, 0x0($t2)
    ctx->pc = 0x183178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18317c: 0xc5e6000c  lwc1        $f6, 0xC($t7)
    ctx->pc = 0x18317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x183180: 0x7c740000  sq          $s4, 0x0($v1)
    ctx->pc = 0x183180u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 20));
    // 0x183184: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x183184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x183188: 0xacc90084  sw          $t1, 0x84($a2)
    ctx->pc = 0x183188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 9));
    // 0x18318c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x18318Cu;
    {
        const bool branch_taken_0x18318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18318Cu;
        // 0x183190: 0xacc40088  sw          $a0, 0x88($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18318c) {
            ctx->pc = 0x1832B8u;
            goto label_1832b8;
        }
    }
    ctx->pc = 0x183194u;
    // 0x183194: 0x0  nop
    ctx->pc = 0x183194u;
    // NOP
label_183198:
    // 0x183198: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x183198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18319c: 0x672023  subu        $a0, $v1, $a3
    ctx->pc = 0x18319cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1831a0: 0x8cae0080  lw          $t6, 0x80($a1)
    ctx->pc = 0x1831a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1831a4: 0x24eb0002  addiu       $t3, $a3, 0x2
    ctx->pc = 0x1831a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1831a8: 0x44940  sll         $t1, $a0, 5
    ctx->pc = 0x1831a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1831ac: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x1831acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1831b0: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x1831b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1831b4: 0x8b2023  subu        $a0, $a0, $t3
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1831b8: 0x24ea0003  addiu       $t2, $a3, 0x3
    ctx->pc = 0x1831b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1831bc: 0x4a140  sll         $s4, $a0, 5
    ctx->pc = 0x1831bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1831c0: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x1831c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1831c4: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x1831c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1831c8: 0xc9900  sll         $s3, $t4, 4
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1831cc: 0x12e2021  addu        $a0, $t1, $t6
    ctx->pc = 0x1831ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x1831d0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1831d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1831d4: 0x949500c6  lhu         $s5, 0xC6($a0)
    ctx->pc = 0x1831d4u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x1831d8: 0x3c0e3f80  lui         $t6, 0x3F80
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16256 << 16));
    // 0x1831dc: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x1831dcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1831e0: 0xb9100  sll         $s2, $t3, 4
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1831e4: 0xc8900  sll         $s1, $t4, 4
    ctx->pc = 0x1831e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1831e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1831e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831ec: 0x3c0e3f80  lui         $t6, 0x3F80
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16256 << 16));
    // 0x1831f0: 0x24c90010  addiu       $t1, $a2, 0x10
    ctx->pc = 0x1831f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1831f4: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x1831f4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1831f8: 0xa8100  sll         $s0, $t2, 4
    ctx->pc = 0x1831f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1831fc: 0xac900  sll         $t9, $t2, 4
    ctx->pc = 0x1831fcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x183200: 0xac100  sll         $t8, $t2, 4
    ctx->pc = 0x183200u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x183204: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x183204u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
    // 0x183208: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x183208u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18320c: 0xa49500c6  sh          $s5, 0xC6($a0)
    ctx->pc = 0x18320cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 21));
    // 0x183210: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x183210u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183214: 0x8ca40080  lw          $a0, 0x80($a1)
    ctx->pc = 0x183214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x183218: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x183218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18321c: 0x948300c6  lhu         $v1, 0xC6($a0)
    ctx->pc = 0x18321cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x183220: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x183220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x183224: 0xa48300c6  sh          $v1, 0xC6($a0)
    ctx->pc = 0x183224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x183228: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x183228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x18322c: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x18322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x183230: 0x948300c6  lhu         $v1, 0xC6($a0)
    ctx->pc = 0x183230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x183234: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x183234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x183238: 0xa48300c6  sh          $v1, 0xC6($a0)
    ctx->pc = 0x183238u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x18323c: 0x8ca40074  lw          $a0, 0x74($a1)
    ctx->pc = 0x18323cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183240: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x183240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183244: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x183248: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18324c: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x18324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x183250: 0xc466000c  lwc1        $f6, 0xC($v1)
    ctx->pc = 0x183250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x183254: 0xacca0080  sw          $t2, 0x80($a2)
    ctx->pc = 0x183254u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 10));
    // 0x183258: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x183258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x18325c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x183260: 0x78760000  lq          $s6, 0x0($v1)
    ctx->pc = 0x183260u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183264: 0x7d360000  sq          $s6, 0x0($t1)
    ctx->pc = 0x183264u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 22));
    // 0x183268: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x183268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x18326c: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x18326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183270: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x183270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x183274: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x183274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183278: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x183278u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x18327c: 0xe4c10030  swc1        $f1, 0x30($a2)
    ctx->pc = 0x18327cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x183280: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x183280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183284: 0x3231821  addu        $v1, $t9, $v1
    ctx->pc = 0x183284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x183288: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x183288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18328c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18328cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x183290: 0xe4c10034  swc1        $f1, 0x34($a2)
    ctx->pc = 0x183290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x183294: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x183294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x183298: 0x3031821  addu        $v1, $t8, $v1
    ctx->pc = 0x183298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x18329c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1832a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1832a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1832a4: 0xe4c10038  swc1        $f1, 0x38($a2)
    ctx->pc = 0x1832a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x1832a8: 0xe4c0003c  swc1        $f0, 0x3C($a2)
    ctx->pc = 0x1832a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x1832ac: 0xaccf0084  sw          $t7, 0x84($a2)
    ctx->pc = 0x1832acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 15));
    // 0x1832b0: 0xacce0088  sw          $t6, 0x88($a2)
    ctx->pc = 0x1832b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 14));
    // 0x1832b4: 0x0  nop
    ctx->pc = 0x1832b4u;
    // NOP
label_1832b8:
    // 0x1832b8: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x1832b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x1832bc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1832bcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1832c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1832c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1832c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1832c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1832c8: 0x31a300ff  andi        $v1, $t5, 0xFF
    ctx->pc = 0x1832c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x1832cc: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1832ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1832d0: 0xacc80060  sw          $t0, 0x60($a2)
    ctx->pc = 0x1832d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 8));
    // 0x1832d4: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x1832d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x1832d8: 0xacc70068  sw          $a3, 0x68($a2)
    ctx->pc = 0x1832d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 7));
    // 0x1832dc: 0x31030080  andi        $v1, $t0, 0x80
    ctx->pc = 0x1832dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x1832e0: 0xaccc006c  sw          $t4, 0x6C($a2)
    ctx->pc = 0x1832e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 12));
    // 0x1832e4: 0xaccb0070  sw          $t3, 0x70($a2)
    ctx->pc = 0x1832e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 11));
    // 0x1832e8: 0x46061002  mul.s       $f0, $f2, $f6
    ctx->pc = 0x1832e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1832ec: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x1832ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x1832f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1832f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1832f4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1832f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1832f8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1832f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1832fc: 0xacc40074  sw          $a0, 0x74($a2)
    ctx->pc = 0x1832fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 4));
    // 0x183300: 0x46061900  add.s       $f4, $f3, $f6
    ctx->pc = 0x183300u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x183304: 0x46063142  mul.s       $f5, $f6, $f6
    ctx->pc = 0x183304u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x183308: 0xe4c40040  swc1        $f4, 0x40($a2)
    ctx->pc = 0x183308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x18330c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x18330cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x183310: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x183310u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x183314: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x183314u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x183318: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x183318u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x18331c: 0xe4c40044  swc1        $f4, 0x44($a2)
    ctx->pc = 0x18331cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x183320: 0xe4c3004c  swc1        $f3, 0x4C($a2)
    ctx->pc = 0x183320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x183324: 0xe4c20048  swc1        $f2, 0x48($a2)
    ctx->pc = 0x183324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x183328: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x183328u;
    {
        const bool branch_taken_0x183328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183328u;
        // 0x18332c: 0xe4c00050  swc1        $f0, 0x50($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183328) {
            ctx->pc = 0x183340u;
            goto label_183340;
        }
    }
    ctx->pc = 0x183330u;
    // 0x183330: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x183330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x183334: 0xacc30054  sw          $v1, 0x54($a2)
    ctx->pc = 0x183334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 3));
    // 0x183338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183338u;
    {
        const bool branch_taken_0x183338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183338u;
        // 0x18333c: 0xacc30058  sw          $v1, 0x58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183338) {
            ctx->pc = 0x183348u;
            goto label_183348;
        }
    }
    ctx->pc = 0x183340u;
label_183340:
    // 0x183340: 0xe4c10054  swc1        $f1, 0x54($a2)
    ctx->pc = 0x183340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x183344: 0xe4c10058  swc1        $f1, 0x58($a2)
    ctx->pc = 0x183344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
label_183348:
    // 0x183348: 0x31030100  andi        $v1, $t0, 0x100
    ctx->pc = 0x183348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
    // 0x18334c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18334Cu;
    {
        const bool branch_taken_0x18334c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18334c) {
            ctx->pc = 0x183360u;
            goto label_183360;
        }
    }
    ctx->pc = 0x183354u;
    // 0x183354: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x183358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183358u;
    {
        const bool branch_taken_0x183358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183358u;
        // 0x18335c: 0xacc3005c  sw          $v1, 0x5C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183358) {
            ctx->pc = 0x183368u;
            goto label_183368;
        }
    }
    ctx->pc = 0x183360u;
label_183360:
    // 0x183360: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x183360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x183364: 0xacc3005c  sw          $v1, 0x5C($a2)
    ctx->pc = 0x183364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 3));
label_183368:
    // 0x183368: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x183368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18336c: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x18336cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x183370: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x183370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x183374: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x183374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183378: 0x8ca70074  lw          $a3, 0x74($a1)
    ctx->pc = 0x183378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x18337c: 0xb2100  sll         $a0, $t3, 4
    ctx->pc = 0x18337cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x183380: 0x24c90020  addiu       $t1, $a2, 0x20
    ctx->pc = 0x183380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x183384: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x183384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183388: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x183388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18338c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18338cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183390: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x183394: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x183394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183398: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x183398u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x18339c: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x18339cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1833a0: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x1833a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x1833a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1833a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1833a8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1833a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1833ac: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x1833acu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x1833b0: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x1833b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x1833b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1833b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1833b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1833b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1833bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1833bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1833c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1833c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1833c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1833c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1833c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1833c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1833cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1833ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1833d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1833D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1833D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833D0u;
        // 0x1833d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1833D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1833D8u;
}
