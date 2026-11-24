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

// Function: sub_0066CD08
// Address: 0x66cd08 - 0x66cd14
void sub_0066CD08_0x66cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066CD08_0x66cd08");
#endif

    ctx->pc = 0x66cd08u;

    // 0x66cd08: 0x5854440a  .word       0x5854440A                   # blezl       $v0, . + 4 + (0x440A << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x66CD08u;
    {
        const bool branch_taken_0x66cd08 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x66cd08) {
            ctx->pc = 0x66CD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x66CD08u;
            // 0x66cd0c: 0x72655620  .word       0x72655620                   # madd1       $t2, $s3, $a1 # 00000600 <InstrIdType: R5900_MMI> (Delay Slot)
            { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x67DD34u;
            return;
        }
    }
    ctx->pc = 0x66CD10u;
    // 0x66cd10: 0x312e312e  andi        $t6, $t1, 0x312E
    ctx->pc = 0x66cd10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12590);
    ctx->pc = 0x66cd14u;
}
