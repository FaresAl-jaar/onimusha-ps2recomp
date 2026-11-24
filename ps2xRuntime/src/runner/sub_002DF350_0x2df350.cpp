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

// Function: sub_002DF350
// Address: 0x2df350 - 0x2df394
void sub_002DF350_0x2df350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF350_0x2df350");
#endif

    switch (ctx->pc) {
        case 0x2df37cu: goto label_2df37c;
        default: break;
    }

    ctx->pc = 0x2df350u;

    // 0x2df350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df360: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF360u;
    {
        const bool branch_taken_0x2df360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF360u;
        // 0x2df364: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df360) {
            ctx->pc = 0x2DF380u;
            goto label_2df380;
        }
    }
    ctx->pc = 0x2DF368u;
    // 0x2df368: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df36c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF36Cu;
    {
        const bool branch_taken_0x2df36c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2df36c) {
            ctx->pc = 0x2DF380u;
            goto label_2df380;
        }
    }
    ctx->pc = 0x2DF374u;
    // 0x2df374: 0xc040148  jal         func_100520
    ctx->pc = 0x2DF374u;
    SET_GPR_U32(ctx, 31, 0x2DF37Cu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x2DF374u, 0x2DF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF37Cu;
label_2df37c:
    // 0x2df37c: 0x0  nop
    ctx->pc = 0x2df37cu;
    // NOP
label_2df380:
    // 0x2df380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df38c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF38Cu;
        // 0x2df390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF394u;
}
