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

// Function: sub_0040E6C0
// Address: 0x40e6c0 - 0x40e6c4
void sub_0040E6C0_0x40e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E6C0_0x40e6c0");
#endif

    ctx->pc = 0x40e6c0u;

    // 0x40e6c0: 0xa00303  .word       0x00A00303                   # sra         $zero, $zero, 12 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x40e6c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 12));
    ctx->pc = 0x40e6c4u;
}
