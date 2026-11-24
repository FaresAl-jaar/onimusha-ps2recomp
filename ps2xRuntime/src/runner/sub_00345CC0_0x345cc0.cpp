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

// Function: sub_00345CC0
// Address: 0x345cc0 - 0x345d04
void sub_00345CC0_0x345cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345CC0_0x345cc0");
#endif

    ctx->pc = 0x345cc0u;

    // 0x345cc0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x345cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345cc4: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x345cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x345cc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345cc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345ccc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345cccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345cd0: 0x0  nop
    ctx->pc = 0x345cd0u;
    // NOP
    // 0x345cd4: 0xa48200c8  sh          $v0, 0xC8($a0)
    ctx->pc = 0x345cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x345cd8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x345cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345cdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345ce0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345ce4: 0x0  nop
    ctx->pc = 0x345ce4u;
    // NOP
    // 0x345ce8: 0xa48200ca  sh          $v0, 0xCA($a0)
    ctx->pc = 0x345ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x345cec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x345cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345cf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345cf4: 0x248500c8  addiu       $a1, $a0, 0xC8
    ctx->pc = 0x345cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x345cf8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345cf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345cfc: 0x804d60c  j           func_135830
    ctx->pc = 0x345CFCu;
    ctx->pc = 0x345D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CFCu;
    // 0x345d00: 0xa48200cc  sh          $v0, 0xCC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 204), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135830u;
    sub_00135830_0x135830(rdram, ctx, runtime); return;
    ctx->pc = 0x345D04u;
}
