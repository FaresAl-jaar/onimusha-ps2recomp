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

// Function: sub_003ADB10
// Address: 0x3adb10 - 0x3adb1c
void sub_003ADB10_0x3adb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADB10_0x3adb10");
#endif

    ctx->pc = 0x3adb10u;

    // 0x3adb10: 0xa08029d1  sb          $zero, 0x29D1($a0)
    ctx->pc = 0x3adb10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3adb14: 0x80a4a1c  j           func_292870
    ctx->pc = 0x3ADB14u;
    ctx->pc = 0x3ADB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB14u;
    // 0x3adb18: 0xa4800828  sh          $zero, 0x828($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 2088), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    sub_00292870_0x292870(rdram, ctx, runtime); return;
    ctx->pc = 0x3ADB1Cu;
}
