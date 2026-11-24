#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_00127740_0x127740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00127740_0x127740");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::strcat(rdram, ctx, runtime); 
}
