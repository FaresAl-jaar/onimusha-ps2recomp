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

// Function: sub_00663918
// Address: 0x663918 - 0x663928
void sub_00663918_0x663918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00663918_0x663918");
#endif

    ctx->pc = 0x663918u;

    // 0x663918: 0x65726463  daddiu      $s2, $t3, 0x6463
    ctx->pc = 0x663918u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25699);
    // 0x66391c: 0x65206461  daddiu      $zero, $t1, 0x6461
    ctx->pc = 0x66391cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25697);
    // 0x663920: 0xa646e  .word       0x000A646E                   # dsub        $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x663920u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x663924: 0x0  nop
    ctx->pc = 0x663924u;
    // NOP
    ctx->pc = 0x663928u;
}
