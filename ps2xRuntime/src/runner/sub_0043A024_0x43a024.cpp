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

// Function: sub_0043A024
// Address: 0x43a024 - 0x43a04c
void sub_0043A024_0x43a024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A024_0x43a024");
#endif

    ctx->pc = 0x43a024u;

    // 0x43a024: 0x50a0d  break       5, 40
    ctx->pc = 0x43a024u;
    runtime->handleBreak(rdram, ctx);
    // 0x43a028: 0x11071173  beq         $t0, $a3, . + 4 + (0x1173 << 2)
    ctx->pc = 0x43A028u;
    {
        const bool branch_taken_0x43a028 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x43a028) {
            ctx->pc = 0x43E5F8u;
            return;
        }
    }
    ctx->pc = 0x43A030u;
    // 0x43a030: 0x0  nop
    ctx->pc = 0x43a030u;
    // NOP
    // 0x43a034: 0x0  nop
    ctx->pc = 0x43a034u;
    // NOP
    // 0x43a038: 0x0  nop
    ctx->pc = 0x43a038u;
    // NOP
    // 0x43a03c: 0x0  nop
    ctx->pc = 0x43a03cu;
    // NOP
    // 0x43a040: 0x70a00  sll         $at, $a3, 8
    ctx->pc = 0x43a040u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x43a044: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x43a044u;
    
    // 0x43a048: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x43a048u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x43a04cu;
}
