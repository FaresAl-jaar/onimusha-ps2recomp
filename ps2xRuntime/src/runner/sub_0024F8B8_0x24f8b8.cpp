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

// Function: sub_0024F8B8
// Address: 0x24f8b8 - 0x24f908
void sub_0024F8B8_0x24f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F8B8_0x24f8b8");
#endif

    switch (ctx->pc) {
        case 0x24f8fcu: goto label_24f8fc;
        default: break;
    }

    ctx->pc = 0x24f8b8u;

    // 0x24f8b8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f8bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f8c0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f8c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f8cc: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F8CCu;
    {
        const bool branch_taken_0x24f8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8CCu;
        // 0x24f8d0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8cc) {
            ctx->pc = 0x24F8E4u;
            goto label_24f8e4;
        }
    }
    ctx->pc = 0x24F8D4u;
    // 0x24f8d4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f8d8: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f8dc: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F8DCu;
    {
        const bool branch_taken_0x24f8dc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8DCu;
        // 0x24f8e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8dc) {
            ctx->pc = 0x24F900u;
            goto label_24f900;
        }
    }
    ctx->pc = 0x24F8E4u;
label_24f8e4:
    // 0x24f8e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24f8e8: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F8E8u;
    {
        const bool branch_taken_0x24f8e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8E8u;
        // 0x24f8ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8e8) {
            ctx->pc = 0x24F900u;
            goto label_24f900;
        }
    }
    ctx->pc = 0x24F8F0u;
    // 0x24f8f0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24f8f4: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x24F8F4u;
    SET_GPR_U32(ctx, 31, 0x24F8FCu);
    ctx->pc = 0x24F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F8F4u;
    // 0x24f8f8: 0x2484e870  addiu       $a0, $a0, -0x1790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24F8F4u, 0x24F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8FCu;
label_24f8fc:
    // 0x24f8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f900:
    // 0x24f900: 0x3e00008  jr          $ra
    ctx->pc = 0x24F900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F900u;
        // 0x24f904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F908u;
}
