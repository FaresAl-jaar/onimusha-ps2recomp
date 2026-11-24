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

// Function: sub_0066CB30
// Address: 0x66cb30 - 0x66cb3c
void sub_0066CB30_0x66cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066CB30_0x66cb30");
#endif

    ctx->pc = 0x66cb30u;

    // 0x66cb30: 0x3a445253  xori        $a0, $s2, 0x5253
    ctx->pc = 0x66cb30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)21075);
    // 0x66cb34: 0x65637320  daddiu      $v1, $t3, 0x7320
    ctx->pc = 0x66cb34u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29472);
    // 0x66cb38: 0x6565734c  daddiu      $a1, $t3, 0x734C
    ctx->pc = 0x66cb38u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29516);
    ctx->pc = 0x66cb3cu;
}
