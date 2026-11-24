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

// Function: sub_0065AC60
// Address: 0x65ac60 - 0x65ac70
void sub_0065AC60_0x65ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065AC60_0x65ac60");
#endif

    ctx->pc = 0x65ac60u;

    // 0x65ac60: 0x0  nop
    ctx->pc = 0x65ac60u;
    // NOP
    // 0x65ac64: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x65ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x65ac68: 0x370c10  .word       0x00370C10                   # mfhi        $at # 00370400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x65ac68u;
    SET_GPR_U64(ctx, 1, ctx->hi);
    // 0x65ac6c: 0x0  nop
    ctx->pc = 0x65ac6cu;
    // NOP
    ctx->pc = 0x65ac70u;
}
