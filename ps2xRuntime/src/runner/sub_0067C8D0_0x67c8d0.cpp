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

// Function: sub_0067C8D0
// Address: 0x67c8d0 - 0x67c8f0
void sub_0067C8D0_0x67c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067C8D0_0x67c8d0");
#endif

    switch (ctx->pc) {
        case 0x67c8dcu: goto label_67c8dc;
        default: break;
    }

    ctx->pc = 0x67c8d0u;

    // 0x67c8d0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x67c8d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x67c8d4: 0x0  nop
    ctx->pc = 0x67c8d4u;
    // NOP
    // 0x67c8d8: 0x18000c  .word       0x0018000C                   # syscall     0 # 00180000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c8d8u;
    ctx->pc = 0x67C8DCu;
runtime->handleSyscall(rdram, ctx, 0x6000u);
label_67c8dc:
    // 0x67c8dc: 0x300024  and         $zero, $at, $s0
    ctx->pc = 0x67c8dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 16));
    // 0x67c8e0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x67c8e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
    // 0x67c8e4: 0x0  nop
    ctx->pc = 0x67c8e4u;
    // NOP
    // 0x67c8e8: 0x0  nop
    ctx->pc = 0x67c8e8u;
    // NOP
    // 0x67c8ec: 0x0  nop
    ctx->pc = 0x67c8ecu;
    // NOP
    ctx->pc = 0x67c8f0u;
}
