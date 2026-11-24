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

// Function: sub_00662430
// Address: 0x662430 - 0x662450
void sub_00662430_0x662430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00662430_0x662430");
#endif

    ctx->pc = 0x662430u;

    // 0x662430: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x662430u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
    // 0x662434: 0x63657220  daddi       $a1, $k1, 0x7220
    ctx->pc = 0x662434u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x662438: 0x65766965  daddiu      $s6, $t3, 0x6965
    ctx->pc = 0x662438u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26981);
    // 0x66243c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x66243cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x662440: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x662440u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x662444: 0x0  nop
    ctx->pc = 0x662444u;
    // NOP
    // 0x662448: 0x3a595454  xori        $t9, $s2, 0x5454
    ctx->pc = 0x662448u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21588);
    // 0x66244c: 0x6e657320  ldr         $a1, 0x7320($s3)
    ctx->pc = 0x66244cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    ctx->pc = 0x662450u;
}
