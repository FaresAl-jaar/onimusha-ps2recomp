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

// Function: sub_00680670
// Address: 0x680670 - 0x68068c
void sub_00680670_0x680670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00680670_0x680670");
#endif

    ctx->pc = 0x680670u;

    // 0x680670: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x680670u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x680674: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x680674u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x680678: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x680678u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x68067c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x68067cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x680680: 0x10d0480  .word       0x010D0480                   # sll         $zero, $t5, 18 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x680680u;
    
    // 0x680684: 0x9070200  j           func_41C0800
    ctx->pc = 0x680684u;
    ctx->pc = 0x680688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x680684u;
    // 0x680688: 0xffffffff  sd          $ra, -0x1($ra) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0800u, 0x680684u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x68068Cu;
}
