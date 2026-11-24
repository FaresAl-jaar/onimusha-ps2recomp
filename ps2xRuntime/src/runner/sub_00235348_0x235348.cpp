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

// Function: sub_00235348
// Address: 0x235348 - 0x23537c
void sub_00235348_0x235348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235348_0x235348");
#endif

    switch (ctx->pc) {
        case 0x23536cu: goto label_23536c;
        default: break;
    }

    ctx->pc = 0x235348u;

    // 0x235348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23534c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235350: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x235350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x235354: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x235354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x235358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23535c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x235360: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x235360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x235364: 0xc0949d0  jal         func_252740
    ctx->pc = 0x235364u;
    SET_GPR_U32(ctx, 31, 0x23536Cu);
    ctx->pc = 0x235368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235364u;
    // 0x235368: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252740u, 0x235364u, 0x23536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23536Cu;
label_23536c:
    // 0x23536c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235370: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x235370u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x235374: 0x3e00008  jr          $ra
    ctx->pc = 0x235374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235374u;
        // 0x235378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23537Cu;
}
