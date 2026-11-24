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

// Function: sub_004D6528
// Address: 0x4d6528 - 0x4d6534
void sub_004D6528_0x4d6528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6528_0x4d6528");
#endif

    ctx->pc = 0x4d6528u;

    // 0x4d6528: 0x66e410  .word       0x0066E410                   # mfhi        $gp # 00660400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4d6528u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    // 0x4d652c: 0x0  nop
    ctx->pc = 0x4d652cu;
    // NOP
    // 0x4d6530: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x4d6530u;
    
    ctx->pc = 0x4d6534u;
}
