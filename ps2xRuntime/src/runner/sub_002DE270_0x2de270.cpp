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

// Function: sub_002DE270
// Address: 0x2de270 - 0x2de2c8
void sub_002DE270_0x2de270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE270_0x2de270");
#endif

    ctx->pc = 0x2de270u;

    // 0x2de270: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2de270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2de274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2de274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2de278: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE278u;
    {
        const bool branch_taken_0x2de278 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2DE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE278u;
        // 0x2de27c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de278) {
            ctx->pc = 0x2DE28Cu;
            goto label_2de28c;
        }
    }
    ctx->pc = 0x2DE280u;
    // 0x2de280: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2de280u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de284: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE284u;
    {
        const bool branch_taken_0x2de284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE284u;
        // 0x2de288: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de284) {
            ctx->pc = 0x2DE2A4u;
            goto label_2de2a4;
        }
    }
    ctx->pc = 0x2DE28Cu;
label_2de28c:
    // 0x2de28c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2de28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2de290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2de290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2de294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de298: 0x0  nop
    ctx->pc = 0x2de298u;
    // NOP
    // 0x2de29c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2de29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2de2a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2de2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2de2a4:
    // 0x2de2a4: 0x0  nop
    ctx->pc = 0x2de2a4u;
    // NOP
    // 0x2de2a8: 0x0  nop
    ctx->pc = 0x2de2a8u;
    // NOP
    // 0x2de2ac: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x2de2acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2de2b0: 0x0  nop
    ctx->pc = 0x2de2b0u;
    // NOP
    // 0x2de2b4: 0x0  nop
    ctx->pc = 0x2de2b4u;
    // NOP
    // 0x2de2b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2de2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2de2bc: 0x0  nop
    ctx->pc = 0x2de2bcu;
    // NOP
    // 0x2de2c0: 0x80b7848  j           func_2DE120
    ctx->pc = 0x2DE2C0u;
    ctx->pc = 0x2DE120u;
    sub_002DE120_0x2de120(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE2C8u;
}
