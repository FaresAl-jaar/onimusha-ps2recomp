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

// Function: sub_00229350
// Address: 0x229350 - 0x22939c
void sub_00229350_0x229350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229350_0x229350");
#endif

    ctx->pc = 0x229350u;

    // 0x229350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x229354: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x229354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x229358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22935c: 0x2463adb8  addiu       $v1, $v1, -0x5248
    ctx->pc = 0x22935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946232));
    // 0x229360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x229360u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BADB8u));
    // 0x229364: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x229364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229368: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x229368u;
    {
        const bool branch_taken_0x229368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229368u;
        // 0x22936c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229368) {
            ctx->pc = 0x229390u;
            goto label_229390;
        }
    }
    ctx->pc = 0x229370u;
    // 0x229370: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x229370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x229374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22937c: 0x2484adc0  addiu       $a0, $a0, -0x5240
    ctx->pc = 0x22937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946240));
    // 0x229380: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x229380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x229384: 0x8049590  j           func_125640
    ctx->pc = 0x229384u;
    ctx->pc = 0x229388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229384u;
    // 0x229388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x22938Cu;
    // 0x22938c: 0x0  nop
    ctx->pc = 0x22938cu;
    // NOP
label_229390:
    // 0x229390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229394: 0x3e00008  jr          $ra
    ctx->pc = 0x229394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229394u;
        // 0x229398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22939Cu;
}
