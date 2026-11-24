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

// Function: sub_0017A360
// Address: 0x17a360 - 0x17a3ac
void sub_0017A360_0x17a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A360_0x17a360");
#endif

    switch (ctx->pc) {
        case 0x17a39cu: goto label_17a39c;
        default: break;
    }

    ctx->pc = 0x17a360u;

    // 0x17a360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17a364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a36c: 0x8c862cbc  lw          $a2, 0x2CBC($a0)
    ctx->pc = 0x17a36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11452)));
    // 0x17a370: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17A370u;
    {
        const bool branch_taken_0x17a370 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x17a370) {
            ctx->pc = 0x17A3A0u;
            goto label_17a3a0;
        }
    }
    ctx->pc = 0x17A378u;
    // 0x17a378: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x17a378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17a37c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17a380: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17a380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17a384: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17a388: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x17a388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x17a38c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x17a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17a390: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17a390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17a394: 0xc049522  jal         func_125488
    ctx->pc = 0x17A394u;
    SET_GPR_U32(ctx, 31, 0x17A39Cu);
    ctx->pc = 0x17A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A394u;
    // 0x17a398: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x17A394u, 0x17A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A39Cu;
label_17a39c:
    // 0x17a39c: 0x0  nop
    ctx->pc = 0x17a39cu;
    // NOP
label_17a3a0:
    // 0x17a3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3A4u;
        // 0x17a3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A3ACu;
}
