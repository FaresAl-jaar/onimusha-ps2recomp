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

// Function: sub_00204E28
// Address: 0x204e28 - 0x204e74
void sub_00204E28_0x204e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204E28_0x204e28");
#endif

    switch (ctx->pc) {
        case 0x204e3cu: goto label_204e3c;
        case 0x204e54u: goto label_204e54;
        default: break;
    }

    ctx->pc = 0x204e28u;

    // 0x204e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204e30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x204e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x204e34: 0xc081d84  jal         func_207610
    ctx->pc = 0x204E34u;
    SET_GPR_U32(ctx, 31, 0x204E3Cu);
    ctx->pc = 0x204E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E34u;
    // 0x204e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x204E34u, 0x204E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E3Cu;
label_204e3c:
    // 0x204e3c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e44: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x204E44u;
    {
        const bool branch_taken_0x204e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E44u;
        // 0x204e48: 0x24846d38  addiu       $a0, $a0, 0x6D38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e44) {
            ctx->pc = 0x204E60u;
            goto label_204e60;
        }
    }
    ctx->pc = 0x204E4Cu;
    // 0x204e4c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x204E4Cu;
    SET_GPR_U32(ctx, 31, 0x204E54u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x204E4Cu, 0x204E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E54u;
label_204e54:
    // 0x204e54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204E54u;
    {
        const bool branch_taken_0x204e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E54u;
        // 0x204e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e54) {
            ctx->pc = 0x204E64u;
            goto label_204e64;
        }
    }
    ctx->pc = 0x204E5Cu;
    // 0x204e5c: 0x0  nop
    ctx->pc = 0x204e5cu;
    // NOP
label_204e60:
    // 0x204e60: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x204e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_204e64:
    // 0x204e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204e68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x204e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x204E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E6Cu;
        // 0x204e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204E74u;
}
