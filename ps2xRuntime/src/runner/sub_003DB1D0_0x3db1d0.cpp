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

// Function: sub_003DB1D0
// Address: 0x3db1d0 - 0x3db238
void sub_003DB1D0_0x3db1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB1D0_0x3db1d0");
#endif

    ctx->pc = 0x3db1d0u;

    // 0x3db1d0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3db1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3db1d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3db1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3db1d8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3db1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3db1dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3db1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3db1e0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3db1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3db1e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3db1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3db1e8: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x3db1e8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x3db1ec: 0x3c02473b  lui         $v0, 0x473B
    ctx->pc = 0x3db1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18235 << 16));
    // 0x3db1f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3db1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3db1f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3db1f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3db1f8: 0xe4822bc0  swc1        $f2, 0x2BC0($a0)
    ctx->pc = 0x3db1f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
    // 0x3db1fc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3db1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3db200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3db200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3db204: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x3db204u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x3db208: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3db208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3db20c: 0xe4812bc4  swc1        $f1, 0x2BC4($a0)
    ctx->pc = 0x3db20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11204), bits); }
    // 0x3db210: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3db210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db214: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x3db214u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x3db218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3db218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3db21c: 0xe4802bc8  swc1        $f0, 0x2BC8($a0)
    ctx->pc = 0x3db21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11208), bits); }
    // 0x3db220: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3db220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db224: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x3db224u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x3db228: 0x0  nop
    ctx->pc = 0x3db228u;
    // NOP
    // 0x3db22c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3db22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3db230: 0x80f6ce4  j           func_3DB390
    ctx->pc = 0x3DB230u;
    ctx->pc = 0x3DB234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB230u;
    // 0x3db234: 0xe4802bcc  swc1        $f0, 0x2BCC($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB390u;
    sub_003DB390_0x3db390(rdram, ctx, runtime); return;
    ctx->pc = 0x3DB238u;
}
