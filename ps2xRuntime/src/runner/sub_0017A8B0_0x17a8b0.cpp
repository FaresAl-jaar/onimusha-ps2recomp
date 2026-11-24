#include <cstdio>
#include <string>
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

// Function: sub_0017A8B0
// Address: 0x17a8b0 - 0x17a8b8
void sub_0017A8B0_0x17a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A8B0_0x17a8b0");
#endif
    { static uint32_t n=0; ++n; if (n==2||n==30||(n%300)==0) { extern std::string ps2xFormatDispatchHistory(); fprintf(stderr,"[mainloop] n=%u ra=0x%x hist=%s\n",n,GPR_U32(ctx,31),ps2xFormatDispatchHistory().c_str()); } }

    ctx->pc = 0x17a8b0u;

    // 0x17a8b0: 0x8054bdc  j           func_152F70
    ctx->pc = 0x17A8B0u;
    ctx->pc = 0x152F70u;
    sub_00152F70_0x152f70(rdram, ctx, runtime); return;
    ctx->pc = 0x17A8B8u;
}
