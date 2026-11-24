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

// Function: sub_00664FF8
// Address: 0x664ff8 - 0x66501c
void sub_00664FF8_0x664ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00664FF8_0x664ff8");
#endif

    ctx->pc = 0x664ff8u;

    // 0x664ff8: 0x554c535c  bnel        $t2, $t4, . + 4 + (0x535C << 2)
    ctx->pc = 0x664FF8u;
    {
        const bool branch_taken_0x664ff8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x664ff8) {
            ctx->pc = 0x664FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x664FF8u;
            // 0x664ffc: 0x31325f53  andi        $s2, $t1, 0x5F53 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)24403);
            ctx->in_delay_slot = false;
            ctx->pc = 0x679D6Cu;
            return;
        }
    }
    ctx->pc = 0x665000u;
    // 0x665000: 0x30382e31  andi        $t8, $at, 0x2E31
    ctx->pc = 0x665000u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)11825);
    // 0x665004: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x665004u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
    // 0x665008: 0x554c535c  bnel        $t2, $t4, . + 4 + (0x535C << 2)
    ctx->pc = 0x665008u;
    {
        const bool branch_taken_0x665008 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x665008) {
            ctx->pc = 0x66500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x665008u;
            // 0x66500c: 0x31325f53  andi        $s2, $t1, 0x5F53 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)24403);
            ctx->in_delay_slot = false;
            ctx->pc = 0x679D7Cu;
            return;
        }
    }
    ctx->pc = 0x665010u;
    // 0x665010: 0x32362e33  andi        $s6, $s1, 0x2E33
    ctx->pc = 0x665010u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11827);
    // 0x665014: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x665014u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
    // 0x665018: 0x3a564443  xori        $s6, $s2, 0x4443
    ctx->pc = 0x665018u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)17475);
    ctx->pc = 0x66501cu;
}
