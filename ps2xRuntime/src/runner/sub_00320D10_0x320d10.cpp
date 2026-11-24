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

// Function: sub_00320D10
// Address: 0x320d10 - 0x320e6c
void sub_00320D10_0x320d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320D10_0x320d10");
#endif

    ctx->pc = 0x320d10u;

    // 0x320d10: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x320d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x320d14: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x320d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x320d18: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x320d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x320d1c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x320d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x320d20: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x320d20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x320d24: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x320d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x320d28: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x320d28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x320d2c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x320d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320d30: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x320d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x320d34: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x320d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320d38: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x320d38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x320d3c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x320d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320d40: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x320d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x320d44: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x320d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x320d48: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x320d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x320d4c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x320d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x320d50: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x320d50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x320d54: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x320d54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x320d58: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x320d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x320d5c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x320d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x320d60: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x320d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x320d64: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x320d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320d68: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x320d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320d6c: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x320d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d70: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x320d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320d74: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x320d74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x320d78: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x320d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x320d7c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x320d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x320d80: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x320d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x320d84: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x320d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x320d88: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x320d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x320d8c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x320d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x320d90: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x320d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320d94: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x320d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320d98: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x320d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d9c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x320d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320da0: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x320da0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x320da4: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x320da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x320da8: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x320da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x320dac: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x320dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x320db0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x320db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x320db4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x320db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x320db8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x320db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x320dbc: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x320dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320dc0: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x320dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320dc4: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x320dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320dc8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x320dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320dcc: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x320dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x320dd0: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x320dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x320dd4: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x320dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x320dd8: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x320dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x320ddc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x320ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x320de0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x320de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x320de4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x320de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x320de8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x320de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320dec: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x320decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320df0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x320df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320df4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x320df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320df8: 0xe4830040  swc1        $f3, 0x40($a0)
    ctx->pc = 0x320df8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x320dfc: 0xe4820044  swc1        $f2, 0x44($a0)
    ctx->pc = 0x320dfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x320e00: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x320e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x320e04: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x320e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x320e08: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x320e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x320e0c: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x320e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x320e10: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x320e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x320e14: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x320e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x320e18: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x320e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x320e1c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x320e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x320e20: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x320e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x320e24: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x320e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x320e28: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x320e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x320e2c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x320e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x320e30: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x320e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x320e34: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x320e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x320e38: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x320e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x320e3c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x320e3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320e40: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x320e40u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x320e44: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x320e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320e48: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x320e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320e4c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x320e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320e50: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x320e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320e54: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x320e54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x320e58: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x320e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x320e5c: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x320e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x320e60: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x320e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x320e64: 0x3e00008  jr          $ra
    ctx->pc = 0x320E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E64u;
        // 0x320e68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320E6Cu;
}
