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

// Function: sub_0033F7D0
// Address: 0x33f7d0 - 0x33f838
void sub_0033F7D0_0x33f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F7D0_0x33f7d0");
#endif

    switch (ctx->pc) {
        case 0x33f804u: goto label_33f804;
        default: break;
    }

    ctx->pc = 0x33f7d0u;

    // 0x33f7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f7e0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33F7E0u;
    {
        const bool branch_taken_0x33f7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7E0u;
        // 0x33f7e4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f7e0) {
            ctx->pc = 0x33F828u;
            goto label_33f828;
        }
    }
    ctx->pc = 0x33F7E8u;
    // 0x33f7e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33f7ec: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x33f7f0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x33f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x33f7f4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33f7f8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x33f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x33f7fc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33F7FCu;
    SET_GPR_U32(ctx, 31, 0x33F804u);
    ctx->pc = 0x33F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F7FCu;
    // 0x33f800: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33F7FCu, 0x33F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F804u;
label_33f804:
    // 0x33f804: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33f804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33f808: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x33f808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x33f80c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x33f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x33f810: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x33f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x33f814: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33f814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33f818: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33f818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33f81c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x33f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x33f820: 0x24638ab0  addiu       $v1, $v1, -0x7550
    ctx->pc = 0x33f820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937264));
    // 0x33f824: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33f824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_33f828:
    // 0x33f828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f830: 0x3e00008  jr          $ra
    ctx->pc = 0x33F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F830u;
        // 0x33f834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F838u;
}
