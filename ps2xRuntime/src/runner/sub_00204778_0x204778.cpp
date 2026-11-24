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

// Function: sub_00204778
// Address: 0x204778 - 0x2047a4
void sub_00204778_0x204778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204778_0x204778");
#endif

    ctx->pc = 0x204778u;

    // 0x204778: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x204778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20477c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204780: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x204780u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x204784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204788: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x204788u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20478c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20478cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x204790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204794: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x204794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x204798: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x204798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20479c: 0x8080568  j           func_2015A0
    ctx->pc = 0x20479Cu;
    ctx->pc = 0x2047A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20479Cu;
    // 0x2047a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    sub_002015A0_0x2015a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2047A4u;
}
