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

// Function: sub_003DB2B0
// Address: 0x3db2b0 - 0x3db314
void sub_003DB2B0_0x3db2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB2B0_0x3db2b0");
#endif

    ctx->pc = 0x3db2b0u;

    // 0x3db2b0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3db2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db2b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3db2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3db2b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3db2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3db2bc: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3db2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3db2c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3db2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3db2c4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3db2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3db2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3db2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3db2cc: 0x0  nop
    ctx->pc = 0x3db2ccu;
    // NOP
    // 0x3db2d0: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3db2d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3db2d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3db2d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3db2d8: 0xe4812bc0  swc1        $f1, 0x2BC0($a0)
    ctx->pc = 0x3db2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
    // 0x3db2dc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3db2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db2e0: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3db2e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3db2e4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3db2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3db2e8: 0xe4812bc4  swc1        $f1, 0x2BC4($a0)
    ctx->pc = 0x3db2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11204), bits); }
    // 0x3db2ec: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3db2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db2f0: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3db2f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3db2f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3db2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3db2f8: 0xe4802bc8  swc1        $f0, 0x2BC8($a0)
    ctx->pc = 0x3db2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11208), bits); }
    // 0x3db2fc: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3db2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db300: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x3db300u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x3db304: 0x0  nop
    ctx->pc = 0x3db304u;
    // NOP
    // 0x3db308: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3db308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3db30c: 0x80f6ce4  j           func_3DB390
    ctx->pc = 0x3DB30Cu;
    ctx->pc = 0x3DB310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB30Cu;
    // 0x3db310: 0xe4802bcc  swc1        $f0, 0x2BCC($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB390u;
    sub_003DB390_0x3db390(rdram, ctx, runtime); return;
    ctx->pc = 0x3DB314u;
}
