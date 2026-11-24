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

// Function: sub_00265B30
// Address: 0x265b30 - 0x265de0
void sub_00265B30_0x265b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265B30_0x265b30");
#endif

    ctx->pc = 0x265b30u;

    // 0x265b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x265b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x265b34: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x265b34u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x265b38: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x265b38u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x265b3c: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x265b3cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x265b40: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x265b40u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x265b44: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x265b44u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x265b48: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x265b48u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x265b4c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x265b4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x265b50: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x265b50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x265b54: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x265b54u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265b58: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x265b58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265b5c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x265b5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265b60: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x265b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265b64: 0xc4b60024  lwc1        $f22, 0x24($a1)
    ctx->pc = 0x265b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x265b68: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x265b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b6c: 0xc4ba0014  lwc1        $f26, 0x14($a1)
    ctx->pc = 0x265b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x265b70: 0xc49d0004  lwc1        $f29, 0x4($a0)
    ctx->pc = 0x265b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x265b74: 0xc4b80004  lwc1        $f24, 0x4($a1)
    ctx->pc = 0x265b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x265b78: 0xc49c0000  lwc1        $f28, 0x0($a0)
    ctx->pc = 0x265b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x265b7c: 0xc4b40034  lwc1        $f20, 0x34($a1)
    ctx->pc = 0x265b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x265b80: 0xc49b000c  lwc1        $f27, 0xC($a0)
    ctx->pc = 0x265b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x265b84: 0xc4b20018  lwc1        $f18, 0x18($a1)
    ctx->pc = 0x265b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x265b88: 0xc4b10008  lwc1        $f17, 0x8($a1)
    ctx->pc = 0x265b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x265b8c: 0xc4b00028  lwc1        $f16, 0x28($a1)
    ctx->pc = 0x265b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x265b90: 0xc4af0038  lwc1        $f15, 0x38($a1)
    ctx->pc = 0x265b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x265b94: 0x46160802  mul.s       $f0, $f1, $f22
    ctx->pc = 0x265b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x265b98: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x265b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x265b9c: 0xc4ae001c  lwc1        $f14, 0x1C($a1)
    ctx->pc = 0x265b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x265ba0: 0xc4ad000c  lwc1        $f13, 0xC($a1)
    ctx->pc = 0x265ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x265ba4: 0xc4ac002c  lwc1        $f12, 0x2C($a1)
    ctx->pc = 0x265ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x265ba8: 0xc4ab003c  lwc1        $f11, 0x3C($a1)
    ctx->pc = 0x265ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x265bac: 0xc4aa0010  lwc1        $f10, 0x10($a1)
    ctx->pc = 0x265bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x265bb0: 0x46100802  mul.s       $f0, $f1, $f16
    ctx->pc = 0x265bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[16]);
    // 0x265bb4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x265bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x265bb8: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x265bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x265bbc: 0xc4990014  lwc1        $f25, 0x14($a0)
    ctx->pc = 0x265bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x265bc0: 0xc4970010  lwc1        $f23, 0x10($a0)
    ctx->pc = 0x265bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x265bc4: 0xc4a80020  lwc1        $f8, 0x20($a1)
    ctx->pc = 0x265bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x265bc8: 0xc4a70030  lwc1        $f7, 0x30($a1)
    ctx->pc = 0x265bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x265bcc: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x265bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x265bd0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x265bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x265bd4: 0xc4950018  lwc1        $f21, 0x18($a0)
    ctx->pc = 0x265bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x265bd8: 0xc493001c  lwc1        $f19, 0x1C($a0)
    ctx->pc = 0x265bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x265bdc: 0xc4860024  lwc1        $f6, 0x24($a0)
    ctx->pc = 0x265bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265be0: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x265be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265be4: 0x46080802  mul.s       $f0, $f1, $f8
    ctx->pc = 0x265be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x265be8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x265be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x265bec: 0x4609e01a  mula.s      $f28, $f9
    ctx->pc = 0x265becu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[9]));
    // 0x265bf0: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x265bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x265bf4: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x265bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265bf8: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x265bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265bfc: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x265bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265c00: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x265c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265c04: 0xc49e003c  lwc1        $f30, 0x3C($a0)
    ctx->pc = 0x265c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x265c08: 0x460aefdc  madd.s      $f31, $f29, $f10
    ctx->pc = 0x265c08u;
    ctx->f[31] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[29], ctx->f[10]));
    // 0x265c0c: 0xe7be0038  swc1        $f30, 0x38($sp)
    ctx->pc = 0x265c0cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x265c10: 0xc7be004c  lwc1        $f30, 0x4C($sp)
    ctx->pc = 0x265c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x265c14: 0x461ff018  adda.s      $f30, $f31
    ctx->pc = 0x265c14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[30], ctx->f[31]));
    // 0x265c18: 0x4607df9c  madd.s      $f30, $f27, $f7
    ctx->pc = 0x265c18u;
    ctx->f[30] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[7]));
    // 0x265c1c: 0xe7be0034  swc1        $f30, 0x34($sp)
    ctx->pc = 0x265c1cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x265c20: 0x4618e01a  mula.s      $f28, $f24
    ctx->pc = 0x265c20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[24]));
    // 0x265c24: 0x461aef9c  madd.s      $f30, $f29, $f26
    ctx->pc = 0x265c24u;
    ctx->f[30] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[29], ctx->f[26]));
    // 0x265c28: 0xe7be0048  swc1        $f30, 0x48($sp)
    ctx->pc = 0x265c28u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x265c2c: 0xc7bf0044  lwc1        $f31, 0x44($sp)
    ctx->pc = 0x265c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x265c30: 0xc7be0048  lwc1        $f30, 0x48($sp)
    ctx->pc = 0x265c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x265c34: 0x461ef818  adda.s      $f31, $f30
    ctx->pc = 0x265c34u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[31], ctx->f[30]));
    // 0x265c38: 0xc7be0034  lwc1        $f30, 0x34($sp)
    ctx->pc = 0x265c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x265c3c: 0xe49e0000  swc1        $f30, 0x0($a0)
    ctx->pc = 0x265c3cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265c40: 0x4614df9c  madd.s      $f30, $f27, $f20
    ctx->pc = 0x265c40u;
    ctx->f[30] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[20]));
    // 0x265c44: 0xe49e0004  swc1        $f30, 0x4($a0)
    ctx->pc = 0x265c44u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x265c48: 0x4611e01a  mula.s      $f28, $f17
    ctx->pc = 0x265c48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[17]));
    // 0x265c4c: 0xc7be0040  lwc1        $f30, 0x40($sp)
    ctx->pc = 0x265c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x265c50: 0x4612efdc  madd.s      $f31, $f29, $f18
    ctx->pc = 0x265c50u;
    ctx->f[31] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[29], ctx->f[18]));
    // 0x265c54: 0x461ff018  adda.s      $f30, $f31
    ctx->pc = 0x265c54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[30], ctx->f[31]));
    // 0x265c58: 0x460fdf9c  madd.s      $f30, $f27, $f15
    ctx->pc = 0x265c58u;
    ctx->f[30] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[15]));
    // 0x265c5c: 0x460de01a  mula.s      $f28, $f13
    ctx->pc = 0x265c5cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[13]));
    // 0x265c60: 0xe49e0008  swc1        $f30, 0x8($a0)
    ctx->pc = 0x265c60u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x265c64: 0xc7bc003c  lwc1        $f28, 0x3C($sp)
    ctx->pc = 0x265c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x265c68: 0x460eef5c  madd.s      $f29, $f29, $f14
    ctx->pc = 0x265c68u;
    ctx->f[29] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[29], ctx->f[14]));
    // 0x265c6c: 0x461de018  adda.s      $f28, $f29
    ctx->pc = 0x265c6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[28], ctx->f[29]));
    // 0x265c70: 0x460bdedc  madd.s      $f27, $f27, $f11
    ctx->pc = 0x265c70u;
    ctx->f[27] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[11]));
    // 0x265c74: 0xe49b000c  swc1        $f27, 0xC($a0)
    ctx->pc = 0x265c74u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x265c78: 0x4609b81a  mula.s      $f23, $f9
    ctx->pc = 0x265c78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[23], ctx->f[9]));
    // 0x265c7c: 0x4608aec2  mul.s       $f27, $f21, $f8
    ctx->pc = 0x265c7cu;
    ctx->f[27] = FPU_MUL_S(ctx->f[21], ctx->f[8]);
    // 0x265c80: 0x460acf1c  madd.s      $f28, $f25, $f10
    ctx->pc = 0x265c80u;
    ctx->f[28] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[10]));
    // 0x265c84: 0x461cd818  adda.s      $f27, $f28
    ctx->pc = 0x265c84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[27], ctx->f[28]));
    // 0x265c88: 0x46079edc  madd.s      $f27, $f19, $f7
    ctx->pc = 0x265c88u;
    ctx->f[27] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[19], ctx->f[7]));
    // 0x265c8c: 0xe49b0010  swc1        $f27, 0x10($a0)
    ctx->pc = 0x265c8cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x265c90: 0x4618b81a  mula.s      $f23, $f24
    ctx->pc = 0x265c90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[23], ctx->f[24]));
    // 0x265c94: 0x4616aec2  mul.s       $f27, $f21, $f22
    ctx->pc = 0x265c94u;
    ctx->f[27] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x265c98: 0x461acf1c  madd.s      $f28, $f25, $f26
    ctx->pc = 0x265c98u;
    ctx->f[28] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[26]));
    // 0x265c9c: 0x461cd818  adda.s      $f27, $f28
    ctx->pc = 0x265c9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[27], ctx->f[28]));
    // 0x265ca0: 0x46149edc  madd.s      $f27, $f19, $f20
    ctx->pc = 0x265ca0u;
    ctx->f[27] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[19], ctx->f[20]));
    // 0x265ca4: 0xe49b0014  swc1        $f27, 0x14($a0)
    ctx->pc = 0x265ca4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x265ca8: 0x4610aec2  mul.s       $f27, $f21, $f16
    ctx->pc = 0x265ca8u;
    ctx->f[27] = FPU_MUL_S(ctx->f[21], ctx->f[16]);
    // 0x265cac: 0x4611b81a  mula.s      $f23, $f17
    ctx->pc = 0x265cacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[23], ctx->f[17]));
    // 0x265cb0: 0x4612cf1c  madd.s      $f28, $f25, $f18
    ctx->pc = 0x265cb0u;
    ctx->f[28] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[18]));
    // 0x265cb4: 0x461cd818  adda.s      $f27, $f28
    ctx->pc = 0x265cb4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[27], ctx->f[28]));
    // 0x265cb8: 0x460f9edc  madd.s      $f27, $f19, $f15
    ctx->pc = 0x265cb8u;
    ctx->f[27] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[19], ctx->f[15]));
    // 0x265cbc: 0x460db81a  mula.s      $f23, $f13
    ctx->pc = 0x265cbcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[23], ctx->f[13]));
    // 0x265cc0: 0x460cad42  mul.s       $f21, $f21, $f12
    ctx->pc = 0x265cc0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x265cc4: 0x460ecddc  madd.s      $f23, $f25, $f14
    ctx->pc = 0x265cc4u;
    ctx->f[23] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[14]));
    // 0x265cc8: 0x4617a818  adda.s      $f21, $f23
    ctx->pc = 0x265cc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[23]));
    // 0x265ccc: 0x460b9cdc  madd.s      $f19, $f19, $f11
    ctx->pc = 0x265cccu;
    ctx->f[19] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[19], ctx->f[11]));
    // 0x265cd0: 0xe49b0018  swc1        $f27, 0x18($a0)
    ctx->pc = 0x265cd0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x265cd4: 0xe493001c  swc1        $f19, 0x1C($a0)
    ctx->pc = 0x265cd4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x265cd8: 0x4609281a  mula.s      $f5, $f9
    ctx->pc = 0x265cd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[9]));
    // 0x265cdc: 0x460824c2  mul.s       $f19, $f4, $f8
    ctx->pc = 0x265cdcu;
    ctx->f[19] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x265ce0: 0x460a355c  madd.s      $f21, $f6, $f10
    ctx->pc = 0x265ce0u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[10]));
    // 0x265ce4: 0x46159818  adda.s      $f19, $f21
    ctx->pc = 0x265ce4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[19], ctx->f[21]));
    // 0x265ce8: 0x46080542  mul.s       $f21, $f0, $f8
    ctx->pc = 0x265ce8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x265cec: 0x46071a1c  madd.s      $f8, $f3, $f7
    ctx->pc = 0x265cecu;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x265cf0: 0xe4880020  swc1        $f8, 0x20($a0)
    ctx->pc = 0x265cf0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x265cf4: 0x4618281a  mula.s      $f5, $f24
    ctx->pc = 0x265cf4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[24]));
    // 0x265cf8: 0x46162202  mul.s       $f8, $f4, $f22
    ctx->pc = 0x265cf8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
    // 0x265cfc: 0x461a34dc  madd.s      $f19, $f6, $f26
    ctx->pc = 0x265cfcu;
    ctx->f[19] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[26]));
    // 0x265d00: 0x46134018  adda.s      $f8, $f19
    ctx->pc = 0x265d00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[8], ctx->f[19]));
    // 0x265d04: 0x46141a1c  madd.s      $f8, $f3, $f20
    ctx->pc = 0x265d04u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[20]));
    // 0x265d08: 0xe4880024  swc1        $f8, 0x24($a0)
    ctx->pc = 0x265d08u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x265d0c: 0x461604c2  mul.s       $f19, $f0, $f22
    ctx->pc = 0x265d0cu;
    ctx->f[19] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x265d10: 0x4611281a  mula.s      $f5, $f17
    ctx->pc = 0x265d10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[17]));
    // 0x265d14: 0x46102202  mul.s       $f8, $f4, $f16
    ctx->pc = 0x265d14u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[16]);
    // 0x265d18: 0x4612359c  madd.s      $f22, $f6, $f18
    ctx->pc = 0x265d18u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[18]));
    // 0x265d1c: 0x46164018  adda.s      $f8, $f22
    ctx->pc = 0x265d1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[8], ctx->f[22]));
    // 0x265d20: 0x460c2582  mul.s       $f22, $f4, $f12
    ctx->pc = 0x265d20u;
    ctx->f[22] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x265d24: 0x46100202  mul.s       $f8, $f0, $f16
    ctx->pc = 0x265d24u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x265d28: 0x460c0102  mul.s       $f4, $f0, $f12
    ctx->pc = 0x265d28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x265d2c: 0x460f181c  madd.s      $f0, $f3, $f15
    ctx->pc = 0x265d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[15]));
    // 0x265d30: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x265d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x265d34: 0x460d281a  mula.s      $f5, $f13
    ctx->pc = 0x265d34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[13]));
    // 0x265d38: 0x460e301c  madd.s      $f0, $f6, $f14
    ctx->pc = 0x265d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[14]));
    // 0x265d3c: 0x4600b018  adda.s      $f22, $f0
    ctx->pc = 0x265d3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[22], ctx->f[0]));
    // 0x265d40: 0x460b181c  madd.s      $f0, $f3, $f11
    ctx->pc = 0x265d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[11]));
    // 0x265d44: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x265d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x265d48: 0x4609081a  mula.s      $f1, $f9
    ctx->pc = 0x265d48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[9]));
    // 0x265d4c: 0x460a101c  madd.s      $f0, $f2, $f10
    ctx->pc = 0x265d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[10]));
    // 0x265d50: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x265d50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
    // 0x265d54: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x265d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d58: 0x4607001c  madd.s      $f0, $f0, $f7
    ctx->pc = 0x265d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[7]));
    // 0x265d5c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x265d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x265d60: 0x4618081a  mula.s      $f1, $f24
    ctx->pc = 0x265d60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[24]));
    // 0x265d64: 0x461a101c  madd.s      $f0, $f2, $f26
    ctx->pc = 0x265d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[26]));
    // 0x265d68: 0x46009818  adda.s      $f19, $f0
    ctx->pc = 0x265d68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[19], ctx->f[0]));
    // 0x265d6c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x265d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d70: 0x4614001c  madd.s      $f0, $f0, $f20
    ctx->pc = 0x265d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x265d74: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x265d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x265d78: 0x4611081a  mula.s      $f1, $f17
    ctx->pc = 0x265d78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[17]));
    // 0x265d7c: 0x4612101c  madd.s      $f0, $f2, $f18
    ctx->pc = 0x265d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[18]));
    // 0x265d80: 0x46004018  adda.s      $f8, $f0
    ctx->pc = 0x265d80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[8], ctx->f[0]));
    // 0x265d84: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x265d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d88: 0x460f001c  madd.s      $f0, $f0, $f15
    ctx->pc = 0x265d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[15]));
    // 0x265d8c: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x265d8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[13]));
    // 0x265d90: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x265d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x265d94: 0x460e101c  madd.s      $f0, $f2, $f14
    ctx->pc = 0x265d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[14]));
    // 0x265d98: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x265d98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[4], ctx->f[0]));
    // 0x265d9c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x265d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265da0: 0x460b001c  madd.s      $f0, $f0, $f11
    ctx->pc = 0x265da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[11]));
    // 0x265da4: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x265da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x265da8: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x265da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x265dac: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x265dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x265db0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x265db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x265db4: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x265db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x265db8: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x265db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x265dbc: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x265dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x265dc0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x265dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x265dc4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x265dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x265dc8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x265dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x265dcc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x265dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x265dd0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x265dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x265dd4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x265dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x265dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x265DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DD8u;
        // 0x265ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265DE0u;
}
