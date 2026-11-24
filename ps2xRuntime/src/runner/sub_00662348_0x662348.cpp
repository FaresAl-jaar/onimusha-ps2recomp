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

// Function: sub_00662348
// Address: 0x662348 - 0x66235c
void sub_00662348_0x662348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00662348_0x662348");
#endif

    ctx->pc = 0x662348u;

    // 0x662348: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x662348u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x66234c: 0x6f636573  ldr         $v1, 0x6573($k1)
    ctx->pc = 0x66234cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x662350: 0x6620646e  daddiu      $zero, $s1, 0x646E
    ctx->pc = 0x662350u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25710);
    // 0x662354: 0x646c6569  daddiu      $t4, $v1, 0x6569
    ctx->pc = 0x662354u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25961);
    // 0x662358: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x662358u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    ctx->pc = 0x66235cu;
}
