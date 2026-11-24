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

// Function: sub_0065C6A8
// Address: 0x65c6a8 - 0x65c6dc
void sub_0065C6A8_0x65c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065C6A8_0x65c6a8");
#endif

    ctx->pc = 0x65c6a8u;

    // 0x65c6a8: 0x0  nop
    ctx->pc = 0x65c6a8u;
    // NOP
    // 0x65c6ac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x65c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x65c6b0: 0x3881a0  .word       0x003881A0                   # add         $s0, $at, $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x65c6b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x65c6b4: 0x0  nop
    ctx->pc = 0x65c6b4u;
    // NOP
    // 0x65c6b8: 0x0  nop
    ctx->pc = 0x65c6b8u;
    // NOP
    // 0x65c6bc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x65c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x65c6c0: 0x388540  .word       0x00388540                   # sll         $s0, $t8, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x65c6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 21));
    // 0x65c6c4: 0x0  nop
    ctx->pc = 0x65c6c4u;
    // NOP
    // 0x65c6c8: 0x0  nop
    ctx->pc = 0x65c6c8u;
    // NOP
    // 0x65c6cc: 0x0  nop
    ctx->pc = 0x65c6ccu;
    // NOP
    // 0x65c6d0: 0x0  nop
    ctx->pc = 0x65c6d0u;
    // NOP
    // 0x65c6d4: 0xa1c3264  j           func_870C990
    ctx->pc = 0x65C6D4u;
    ctx->pc = 0x65C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x65C6D4u;
    // 0x65c6d8: 0xa1c50c8  j           func_8714320 (Delay Slot)
    // J 0x8714320 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x870C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x870C990u, 0x65C6D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x65C6DCu;
}
