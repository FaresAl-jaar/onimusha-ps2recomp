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

// Function: sub_0066C9D8
// Address: 0x66c9d8 - 0x66c9ec
void sub_0066C9D8_0x66c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066C9D8_0x66c9d8");
#endif

    ctx->pc = 0x66c9d8u;

    // 0x66c9d8: 0x3a445253  xori        $a0, $s2, 0x5253
    ctx->pc = 0x66c9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21075);
    // 0x66c9dc: 0x44525320  .word       0x44525320                   # cfc1        $s2, $10 # 00000320 <InstrIdType: R5900_COP1>
    ctx->pc = 0x66c9dcu;
    SET_GPR_U32(ctx, 18, 0); // Unimplemented FCR10
    // 0x66c9e0: 0x6961575f  ldl         $at, 0x575F($t3)
    ctx->pc = 0x66c9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 22367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x66c9e4: 0x726f4674  .word       0x726F4674                   # psllh       $t0, $t7, 25 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x66c9e4u;
    SET_GPR_VEC(ctx, 8, _mm_slli_epi16(GPR_VEC(ctx, 15), 25));
    // 0x66c9e8: 0x63657845  daddi       $a1, $k1, 0x7845
    ctx->pc = 0x66c9e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30789; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    ctx->pc = 0x66c9ecu;
}
