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

// Function: sub_002DF2F0
// Address: 0x2df2f0 - 0x2df350
void sub_002DF2F0_0x2df2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF2F0_0x2df2f0");
#endif

    switch (ctx->pc) {
        case 0x2df320u: goto label_2df320;
        case 0x2df338u: goto label_2df338;
        default: break;
    }

    ctx->pc = 0x2df2f0u;

    // 0x2df2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2df2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2df2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df304: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DF304u;
    {
        const bool branch_taken_0x2df304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF304u;
        // 0x2df308: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df304) {
            ctx->pc = 0x2DF338u;
            goto label_2df338;
        }
    }
    ctx->pc = 0x2DF30Cu;
    // 0x2df30c: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2df30cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2df310: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2df310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2df314: 0x24a5f350  addiu       $a1, $a1, -0xCB0
    ctx->pc = 0x2df314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964048));
    // 0x2df318: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2DF318u;
    SET_GPR_U32(ctx, 31, 0x2DF320u);
    ctx->pc = 0x2DF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF318u;
    // 0x2df31c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2DF318u, 0x2DF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF320u;
label_2df320:
    // 0x2df320: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2df320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2df324: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df324u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df328: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF328u;
    {
        const bool branch_taken_0x2df328 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF328u;
        // 0x2df32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df328) {
            ctx->pc = 0x2DF338u;
            goto label_2df338;
        }
    }
    ctx->pc = 0x2DF330u;
    // 0x2df330: 0xc040148  jal         func_100520
    ctx->pc = 0x2DF330u;
    SET_GPR_U32(ctx, 31, 0x2DF338u);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x2DF330u, 0x2DF338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF338u;
label_2df338:
    // 0x2df338: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2df338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df33c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2df33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df348: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF348u;
        // 0x2df34c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF350u;
}
