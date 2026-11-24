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

// Function: sub_0065ACE0
// Address: 0x65ace0 - 0x65acfc
void sub_0065ACE0_0x65ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065ACE0_0x65ace0");
#endif

    ctx->pc = 0x65ace0u;

    // 0x65ace0: 0xec3  sra         $at, $zero, 27
    ctx->pc = 0x65ace0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 27));
    // 0x65ace4: 0x17000ec3  bnez        $t8, . + 4 + (0xEC3 << 2)
    ctx->pc = 0x65ACE4u;
    {
        const bool branch_taken_0x65ace4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x65ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65ACE4u;
        // 0x65ace8: 0x16000ec3  bnez        $s0, . + 4 + (0xEC3 << 2) (Delay Slot)
        // Likely branch instruction at 0x65ACE8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x65ace4) {
            ctx->pc = 0x65E7F4u;
            return;
        }
    }
    ctx->pc = 0x65ACECu;
    // 0x65acec: 0x11000ec3  beqz        $t0, . + 4 + (0xEC3 << 2)
    ctx->pc = 0x65ACECu;
    {
        const bool branch_taken_0x65acec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x65ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65ACECu;
        // 0x65acf0: 0x11000ec3  beqz        $t0, . + 4 + (0xEC3 << 2) (Delay Slot)
        // Likely branch instruction at 0x65ACF0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x65acec) {
            ctx->pc = 0x65E7FCu;
            return;
        }
    }
    ctx->pc = 0x65ACF4u;
    // 0x65acf4: 0x10000ec3  b           . + 4 + (0xEC3 << 2)
    ctx->pc = 0x65ACF4u;
    {
        const bool branch_taken_0x65acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x65ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65ACF4u;
        // 0x65acf8: 0x19000ec3  blez        $t0, . + 4 + (0xEC3 << 2) (Delay Slot)
        // Likely branch instruction at 0x65ACF8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x65acf4) {
            ctx->pc = 0x65E804u;
            return;
        }
    }
    ctx->pc = 0x65ACFCu;
}
