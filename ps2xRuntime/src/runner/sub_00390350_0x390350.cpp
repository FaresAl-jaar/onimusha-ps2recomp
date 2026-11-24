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

// Function: sub_00390350
// Address: 0x390350 - 0x3903b0
void sub_00390350_0x390350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390350_0x390350");
#endif

    switch (ctx->pc) {
        case 0x390378u: goto label_390378;
        default: break;
    }

    ctx->pc = 0x390350u;

    // 0x390350: 0x8f828c48  lw          $v0, -0x73B8($gp)
    ctx->pc = 0x390350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x390354: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390354u;
    {
        const bool branch_taken_0x390354 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x390358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390354u;
        // 0x390358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390354) {
            ctx->pc = 0x390368u;
            goto label_390368;
        }
    }
    ctx->pc = 0x39035Cu;
    // 0x39035c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x39035Cu;
    {
        const bool branch_taken_0x39035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39035c) {
            ctx->pc = 0x3903A8u;
            goto label_3903a8;
        }
    }
    ctx->pc = 0x390364u;
    // 0x390364: 0x0  nop
    ctx->pc = 0x390364u;
    // NOP
label_390368:
    // 0x390368: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x390368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x39036c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39036Cu;
    {
        const bool branch_taken_0x39036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39036c) {
            ctx->pc = 0x3903A0u;
            goto label_3903a0;
        }
    }
    ctx->pc = 0x390374u;
    // 0x390374: 0x0  nop
    ctx->pc = 0x390374u;
    // NOP
label_390378:
    // 0x390378: 0x8c430564  lw          $v1, 0x564($v0)
    ctx->pc = 0x390378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1380)));
    // 0x39037c: 0x90420569  lbu         $v0, 0x569($v0)
    ctx->pc = 0x39037cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1385)));
    // 0x390380: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x390380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x390384: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x390384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x390388: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390388u;
    {
        const bool branch_taken_0x390388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390388) {
            ctx->pc = 0x390398u;
            goto label_390398;
        }
    }
    ctx->pc = 0x390390u;
    // 0x390390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x390390u;
    {
        const bool branch_taken_0x390390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390390u;
        // 0x390394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390390) {
            ctx->pc = 0x3903A8u;
            goto label_3903a8;
        }
    }
    ctx->pc = 0x390398u;
label_390398:
    // 0x390398: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x390398u;
    {
        const bool branch_taken_0x390398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390398u;
        // 0x39039c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390398) {
            ctx->pc = 0x390378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390378;
        }
    }
    ctx->pc = 0x3903A0u;
label_3903a0:
    // 0x3903a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3903a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3903a4: 0x0  nop
    ctx->pc = 0x3903a4u;
    // NOP
label_3903a8:
    // 0x3903a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3903A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3903A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3903B0u;
}
