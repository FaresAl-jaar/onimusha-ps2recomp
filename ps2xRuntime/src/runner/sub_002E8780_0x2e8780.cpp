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

// Function: sub_002E8780
// Address: 0x2e8780 - 0x2e87ec
void sub_002E8780_0x2e8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8780_0x2e8780");
#endif

    ctx->pc = 0x2e8780u;

    // 0x2e8780: 0x84870160  lh          $a3, 0x160($a0)
    ctx->pc = 0x2e8780u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x2e8784: 0x54e3c  dsll32      $t1, $a1, 24
    ctx->pc = 0x2e8784u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2e8788: 0x84860162  lh          $a2, 0x162($a0)
    ctx->pc = 0x2e8788u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 354)));
    // 0x2e878c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e878cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e8790: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e8790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e8794: 0x8483015a  lh          $v1, 0x15A($a0)
    ctx->pc = 0x2e8794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x2e8798: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2e8798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e879c: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x2e879cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x2e87a0: 0x8482015c  lh          $v0, 0x15C($a0)
    ctx->pc = 0x2e87a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x2e87a4: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2e87a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e87a8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2e87a8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e87ac: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2e87acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e87b0: 0x0  nop
    ctx->pc = 0x2e87b0u;
    // NOP
    // 0x2e87b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e87b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e87b8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2e87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e87bc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2e87bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e87c0: 0x24a50096  addiu       $a1, $a1, 0x96
    ctx->pc = 0x2e87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 150));
    // 0x2e87c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2e87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2e87c8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2e87c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2e87cc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2e87ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e87d0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2e87d0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2e87d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e87d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e87d8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e87d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e87dc: 0x0  nop
    ctx->pc = 0x2e87dcu;
    // NOP
    // 0x2e87e0: 0x0  nop
    ctx->pc = 0x2e87e0u;
    // NOP
    // 0x2e87e4: 0x80ba254  j           func_2E8950
    ctx->pc = 0x2E87E4u;
    ctx->pc = 0x2E8950u;
    sub_002E8950_0x2e8950(rdram, ctx, runtime); return;
    ctx->pc = 0x2E87ECu;
}
