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

// Function: sub_002721C0
// Address: 0x2721c0 - 0x2721f0
void sub_002721C0_0x2721c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002721C0_0x2721c0");
#endif

    ctx->pc = 0x2721c0u;

    // 0x2721c0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2721C0u;
    {
        const bool branch_taken_0x2721c0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2721C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721C0u;
        // 0x2721c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721c0) {
            ctx->pc = 0x2721D8u;
            goto label_2721d8;
        }
    }
    ctx->pc = 0x2721C8u;
    // 0x2721c8: 0x2882005a  slti        $v0, $a0, 0x5A
    ctx->pc = 0x2721c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2721cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2721CCu;
    {
        const bool branch_taken_0x2721cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2721cc) {
            ctx->pc = 0x2721E0u;
            goto label_2721e0;
        }
    }
    ctx->pc = 0x2721D4u;
    // 0x2721d4: 0x0  nop
    ctx->pc = 0x2721d4u;
    // NOP
label_2721d8:
    // 0x2721d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2721d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721dc: 0x0  nop
    ctx->pc = 0x2721dcu;
    // NOP
label_2721e0:
    // 0x2721e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2721e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721e4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2721e8: 0x809c880  j           func_272200
    ctx->pc = 0x2721E8u;
    ctx->pc = 0x2721ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721E8u;
    // 0x2721ec: 0x24840800  addiu       $a0, $a0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272200u;
    sub_00272200_0x272200(rdram, ctx, runtime); return;
    ctx->pc = 0x2721F0u;
}
