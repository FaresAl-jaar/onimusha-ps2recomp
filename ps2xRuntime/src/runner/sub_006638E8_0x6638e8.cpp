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

// Function: sub_006638E8
// Address: 0x6638e8 - 0x663914
void sub_006638E8_0x6638e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006638E8_0x6638e8");
#endif

    ctx->pc = 0x6638e8u;

    // 0x6638e8: 0x2057454e  addi        $s7, $v0, 0x454E
    ctx->pc = 0x6638e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
    // 0x6638ec: 0x6b736944  ldl         $s3, 0x6944($k1)
    ctx->pc = 0x6638ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x6638f0: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x6638f0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x6638f4: 0x61432079  daddi       $v1, $t2, 0x2079
    ctx->pc = 0x6638f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x6638f8: 0xa6c6c  .word       0x000A6C6C                   # dadd        $t5, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6638f8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    // 0x6638fc: 0x0  nop
    ctx->pc = 0x6638fcu;
    // NOP
    // 0x663900: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x663900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x663904: 0x72646320  .word       0x72646320                   # madd1       $t4, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x663904u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x663908: 0x20646165  addi        $a0, $v1, 0x6165
    ctx->pc = 0x663908u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x66390c: 0xa646d63  j           func_991B58C
    ctx->pc = 0x66390Cu;
    ctx->pc = 0x991B58Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x991B58Cu, 0x66390Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x663914u;
}
