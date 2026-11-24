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

// Function: sub_00235870
// Address: 0x235870 - 0x2358b8
void sub_00235870_0x235870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235870_0x235870");
#endif

    ctx->pc = 0x235870u;

    // 0x235870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235874: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x235874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x235878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23587c: 0x24427560  addiu       $v0, $v0, 0x7560
    ctx->pc = 0x23587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
    // 0x235880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C7560u));
    // 0x235884: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x235884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x235888: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x235888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4C7560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C7560u, _value); } while (0);
    // 0x23588c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23588cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4C7560u));
    // 0x235890: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x235890u;
    {
        const bool branch_taken_0x235890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x235894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235890u;
        // 0x235894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235890) {
            ctx->pc = 0x2358B0u;
            goto label_2358b0;
        }
    }
    ctx->pc = 0x235898u;
    // 0x235898: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x235898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x23589c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23589cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358a0: 0x24847568  addiu       $a0, $a0, 0x7568
    ctx->pc = 0x2358a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30056));
    // 0x2358a4: 0x24060ac0  addiu       $a2, $zero, 0xAC0
    ctx->pc = 0x2358a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    // 0x2358a8: 0x8049590  j           func_125640
    ctx->pc = 0x2358A8u;
    ctx->pc = 0x2358ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358A8u;
    // 0x2358ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x2358B0u;
label_2358b0:
    // 0x2358b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2358B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2358B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358B0u;
        // 0x2358b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2358B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2358B8u;
}
