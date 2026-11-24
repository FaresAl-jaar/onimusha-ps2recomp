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

// Function: sub_0025B8D0
// Address: 0x25b8d0 - 0x25b908
void sub_0025B8D0_0x25b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B8D0_0x25b8d0");
#endif

    ctx->pc = 0x25b8d0u;

    // 0x25b8d0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x25b8d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b8d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b8d8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x25b8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b8dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b8e0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x25b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x25b8e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x25b8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b8ec: 0x0  nop
    ctx->pc = 0x25b8ecu;
    // NOP
    // 0x25b8f0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25b8f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x25b8f4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x25b8f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25b8f8: 0x0  nop
    ctx->pc = 0x25b8f8u;
    // NOP
    // 0x25b8fc: 0x0  nop
    ctx->pc = 0x25b8fcu;
    // NOP
    // 0x25b900: 0x8096e0c  j           func_25B830
    ctx->pc = 0x25B900u;
    ctx->pc = 0x25B830u;
    sub_0025B830_0x25b830(rdram, ctx, runtime); return;
    ctx->pc = 0x25B908u;
}
