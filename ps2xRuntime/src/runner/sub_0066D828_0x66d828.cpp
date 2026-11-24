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

// Function: sub_0066D828
// Address: 0x66d828 - 0x66d840
void sub_0066D828_0x66d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066D828_0x66d828");
#endif

    ctx->pc = 0x66d828u;

    // 0x66d828: 0x30303245  andi        $s0, $at, 0x3245
    ctx->pc = 0x66d828u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12869);
    // 0x66d82c: 0x32313035  andi        $s1, $s1, 0x3035
    ctx->pc = 0x66d82cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12341);
    // 0x66d830: 0x3a363038  xori        $s6, $s1, 0x3038
    ctx->pc = 0x66d830u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12344);
    // 0x66d834: 0x6c6c4920  ldr         $t4, 0x4920($v1)
    ctx->pc = 0x66d834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x66d838: 0x6c616769  ldr         $at, 0x6769($v1)
    ctx->pc = 0x66d838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26473); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x66d83c: 0x72617020  madd1       $t6, $s3, $at
    ctx->pc = 0x66d83cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    ctx->pc = 0x66d840u;
}
