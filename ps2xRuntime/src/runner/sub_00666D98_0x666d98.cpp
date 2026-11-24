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

// Function: sub_00666D98
// Address: 0x666d98 - 0x666db0
void sub_00666D98_0x666d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00666D98_0x666d98");
#endif

    ctx->pc = 0x666d98u;

    // 0x666d98: 0x39303445  xori        $s0, $t1, 0x3445
    ctx->pc = 0x666d98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)13381);
    // 0x666d9c: 0x3a313731  xori        $s1, $s1, 0x3731
    ctx->pc = 0x666d9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)14129);
    // 0x666da0: 0x50776d20  beql        $v1, $s7, . + 4 + (0x6D20 << 2)
    ctx->pc = 0x666DA0u;
    {
        const bool branch_taken_0x666da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x666da0) {
            ctx->pc = 0x666DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x666DA0u;
            // 0x666da4: 0x6547796c  daddiu      $a3, $t2, 0x796C (Delay Slot)
            SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)31084);
            ctx->in_delay_slot = false;
            ctx->pc = 0x682224u;
            return;
        }
    }
    ctx->pc = 0x666DA8u;
    // 0x666da8: 0x6d754e74  ldr         $s5, 0x4E74($t3)
    ctx->pc = 0x666da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20084); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x666dac: 0x616d6552  daddi       $t5, $t3, 0x6552
    ctx->pc = 0x666dacu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25938; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    ctx->pc = 0x666db0u;
}
