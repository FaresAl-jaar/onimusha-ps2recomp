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

// Function: sub_00432818
// Address: 0x432818 - 0x432850
void sub_00432818_0x432818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432818_0x432818");
#endif

    switch (ctx->pc) {
        case 0x432824u: goto label_432824;
        default: break;
    }

    ctx->pc = 0x432818u;

    // 0x432818: 0x0  nop
    ctx->pc = 0x432818u;
    // NOP
    // 0x43281c: 0x0  nop
    ctx->pc = 0x43281cu;
    // NOP
    // 0x432820: 0x10c  syscall     4
    ctx->pc = 0x432820u;
    ctx->pc = 0x432824u;
runtime->handleSyscall(rdram, ctx, 0x4u);
label_432824:
    // 0x432824: 0x1d0  .word       0x000001D0                   # mfhi        $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x432824u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x432828: 0x0  nop
    ctx->pc = 0x432828u;
    // NOP
    // 0x43282c: 0x0  nop
    ctx->pc = 0x43282cu;
    // NOP
    // 0x432830: 0x307  .word       0x00000307                   # srav        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x432830u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x432834: 0x218  .word       0x00000218                   # mult        $zero, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x432834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x432838: 0x0  nop
    ctx->pc = 0x432838u;
    // NOP
    // 0x43283c: 0x0  nop
    ctx->pc = 0x43283cu;
    // NOP
    // 0x432840: 0x10307  .word       0x00010307                   # srav        $zero, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x432840u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
    // 0x432844: 0x218  .word       0x00000218                   # mult        $zero, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x432844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x432848: 0x0  nop
    ctx->pc = 0x432848u;
    // NOP
    // 0x43284c: 0x0  nop
    ctx->pc = 0x43284cu;
    // NOP
    ctx->pc = 0x432850u;
}
