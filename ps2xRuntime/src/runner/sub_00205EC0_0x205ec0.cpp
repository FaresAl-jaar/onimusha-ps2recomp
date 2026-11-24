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

// Function: sub_00205EC0
// Address: 0x205ec0 - 0x205efc
void sub_00205EC0_0x205ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205EC0_0x205ec0");
#endif

    switch (ctx->pc) {
        case 0x205ed0u: goto label_205ed0;
        case 0x205ee0u: goto label_205ee0;
        case 0x205eecu: goto label_205eec;
        default: break;
    }

    ctx->pc = 0x205ec0u;

    // 0x205ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205ec8: 0xc086fee  jal         func_21BFB8
    ctx->pc = 0x205EC8u;
    SET_GPR_U32(ctx, 31, 0x205ED0u);
    ctx->pc = 0x205ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EC8u;
    // 0x205ecc: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BFB8u, 0x205EC8u, 0x205ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205ED0u;
label_205ed0:
    // 0x205ed0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205ED0u;
    {
        const bool branch_taken_0x205ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ED0u;
        // 0x205ed4: 0x2404fec9  addiu       $a0, $zero, -0x137 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ed0) {
            ctx->pc = 0x205EF0u;
            goto label_205ef0;
        }
    }
    ctx->pc = 0x205ED8u;
    // 0x205ed8: 0xc08168c  jal         func_205A30
    ctx->pc = 0x205ED8u;
    SET_GPR_U32(ctx, 31, 0x205EE0u);
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x205ED8u, 0x205EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EE0u;
label_205ee0:
    // 0x205ee0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x205ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x205ee4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x205EE4u;
    SET_GPR_U32(ctx, 31, 0x205EECu);
    ctx->pc = 0x205EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EE4u;
    // 0x205ee8: 0x248471d8  addiu       $a0, $a0, 0x71D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x205EE4u, 0x205EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EECu;
label_205eec:
    // 0x205eec: 0x2402fec9  addiu       $v0, $zero, -0x137
    ctx->pc = 0x205eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
label_205ef0:
    // 0x205ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x205EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EF4u;
        // 0x205ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205EFCu;
}
