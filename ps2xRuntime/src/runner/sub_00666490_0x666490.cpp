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

// Function: sub_00666490
// Address: 0x666490 - 0x66649c
void sub_00666490_0x666490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00666490_0x666490");
#endif

    ctx->pc = 0x666490u;

    // 0x666490: 0x36303245  ori         $s0, $s1, 0x3245
    ctx->pc = 0x666490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)12869);
    // 0x666494: 0x3a313130  xori        $s1, $s1, 0x3130
    ctx->pc = 0x666494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)12592);
    // 0x666498: 0x73774d20  .word       0x73774D20                   # madd1       $t1, $k1, $s7 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x666498u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    ctx->pc = 0x66649cu;
}
