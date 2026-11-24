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

// Function: sub_002DE210
// Address: 0x2de210 - 0x2de264
void sub_002DE210_0x2de210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE210_0x2de210");
#endif

    ctx->pc = 0x2de210u;

    // 0x2de210: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2de210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2de214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2de214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2de218: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE218u;
    {
        const bool branch_taken_0x2de218 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2DE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE218u;
        // 0x2de21c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de218) {
            ctx->pc = 0x2DE22Cu;
            goto label_2de22c;
        }
    }
    ctx->pc = 0x2DE220u;
    // 0x2de220: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2de220u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE224u;
    {
        const bool branch_taken_0x2de224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE224u;
        // 0x2de228: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de224) {
            ctx->pc = 0x2DE244u;
            goto label_2de244;
        }
    }
    ctx->pc = 0x2DE22Cu;
label_2de22c:
    // 0x2de22c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2de22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2de230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2de230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2de234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de238: 0x0  nop
    ctx->pc = 0x2de238u;
    // NOP
    // 0x2de23c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2de23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2de240: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2de240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2de244:
    // 0x2de244: 0x0  nop
    ctx->pc = 0x2de244u;
    // NOP
    // 0x2de248: 0x0  nop
    ctx->pc = 0x2de248u;
    // NOP
    // 0x2de24c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2de24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2de250: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2de250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2de254: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2de254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2de258: 0x0  nop
    ctx->pc = 0x2de258u;
    // NOP
    // 0x2de25c: 0x80b7844  j           func_2DE110
    ctx->pc = 0x2DE25Cu;
    ctx->pc = 0x2DE260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE25Cu;
    // 0x2de260: 0x46000b43  div.s       $f13, $f1, $f0 (Delay Slot)
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE110u;
    sub_002DE110_0x2de110(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE264u;
}
