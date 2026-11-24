#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_00103B38_0x103b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00103B38_0x103b38");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceGsSyncVCallback(rdram, ctx, runtime); 
}
