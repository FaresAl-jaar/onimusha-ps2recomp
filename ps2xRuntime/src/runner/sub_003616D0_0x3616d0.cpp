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

// Function: sub_003616D0
// Address: 0x3616d0 - 0x36175c
void sub_003616D0_0x3616d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003616D0_0x3616d0");
#endif

    ctx->pc = 0x3616d0u;

    // 0x3616d0: 0xc48128f0  lwc1        $f1, 0x28F0($a0)
    ctx->pc = 0x3616d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3616d4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3616d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x3616d8: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x3616d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x3616dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3616dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3616e0: 0x0  nop
    ctx->pc = 0x3616e0u;
    // NOP
    // 0x3616e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3616e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3616e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3616E8u;
    {
        const bool branch_taken_0x3616e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3616e8) {
            ctx->pc = 0x361708u;
            goto label_361708;
        }
    }
    ctx->pc = 0x3616F0u;
    // 0x3616f0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3616f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3616f4: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x3616f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3616f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3616f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3616fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3616FCu;
    {
        const bool branch_taken_0x3616fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616FCu;
        // 0x361700: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3616fc) {
            ctx->pc = 0x361748u;
            goto label_361748;
        }
    }
    ctx->pc = 0x361704u;
    // 0x361704: 0x0  nop
    ctx->pc = 0x361704u;
    // NOP
label_361708:
    // 0x361708: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x361708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x36170c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36170cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361710: 0x0  nop
    ctx->pc = 0x361710u;
    // NOP
    // 0x361714: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x361714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361718: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x361718u;
    {
        const bool branch_taken_0x361718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x361718) {
            ctx->pc = 0x361738u;
            goto label_361738;
        }
    }
    ctx->pc = 0x361720u;
    // 0x361720: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x361720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x361724: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x361724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x361728: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x361728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36172c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36172Cu;
    {
        const bool branch_taken_0x36172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36172Cu;
        // 0x361730: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36172c) {
            ctx->pc = 0x361748u;
            goto label_361748;
        }
    }
    ctx->pc = 0x361734u;
    // 0x361734: 0x0  nop
    ctx->pc = 0x361734u;
    // NOP
label_361738:
    // 0x361738: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x361738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x36173c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x36173cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x361740: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x361740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x361744: 0x0  nop
    ctx->pc = 0x361744u;
    // NOP
label_361748:
    // 0x361748: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x361748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x36174c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x361750: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x361750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x361754: 0x80a6188  j           func_298620
    ctx->pc = 0x361754u;
    ctx->pc = 0x361758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361754u;
    // 0x361758: 0xac8028f4  sw          $zero, 0x28F4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 10484), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x36175Cu;
}
