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

// Function: sub_006648A8
// Address: 0x6648a8 - 0x6648b4
void sub_006648A8_0x6648a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006648A8_0x6648a8");
#endif

    ctx->pc = 0x6648a8u;

    // 0x6648a8: 0x6d636264  ldr         $v1, 0x6264($t3)
    ctx->pc = 0x6648a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x6648ac: 0x3a206e61  xori        $zero, $s1, 0x6E61
    ctx->pc = 0x6648acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28257);
    // 0x6648b0: 0x6e655320  ldr         $a1, 0x5320($s3)
    ctx->pc = 0x6648b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    ctx->pc = 0x6648b4u;
}
