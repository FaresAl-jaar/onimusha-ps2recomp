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

// Function: sub_0022C030
// Address: 0x22c030 - 0x22c070
void sub_0022C030_0x22c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C030_0x22c030");
#endif

    switch (ctx->pc) {
        case 0x22c058u: goto label_22c058;
        default: break;
    }

    ctx->pc = 0x22c030u;

    // 0x22c030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c034: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22c044: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22c048: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C048u;
    {
        const bool branch_taken_0x22c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c048) {
            ctx->pc = 0x22C04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C048u;
            // 0x22c04c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C064u;
            goto label_22c064;
        }
    }
    ctx->pc = 0x22C050u;
    // 0x22c050: 0xc08f95c  jal         func_23E570
    ctx->pc = 0x22C050u;
    SET_GPR_U32(ctx, 31, 0x22C058u);
    ctx->pc = 0x22C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C050u;
    // 0x22c054: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E570u, 0x22C050u, 0x22C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C058u;
label_22c058:
    // 0x22c058: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x22c058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x22c05c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x22c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x22c060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c064:
    // 0x22c064: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c068: 0x3e00008  jr          $ra
    ctx->pc = 0x22C068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C068u;
        // 0x22c06c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C070u;
}
