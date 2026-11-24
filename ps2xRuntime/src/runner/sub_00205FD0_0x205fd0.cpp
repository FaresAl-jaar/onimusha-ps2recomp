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

// Function: sub_00205FD0
// Address: 0x205fd0 - 0x206028
void sub_00205FD0_0x205fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205FD0_0x205fd0");
#endif

    switch (ctx->pc) {
        case 0x205ff0u: goto label_205ff0;
        case 0x206014u: goto label_206014;
        default: break;
    }

    ctx->pc = 0x205fd0u;

    // 0x205fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205fd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x205fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205fdc: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x205fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x205fe0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x205FE0u;
    {
        const bool branch_taken_0x205fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FE0u;
        // 0x205fe4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fe0) {
            ctx->pc = 0x20601Cu;
            goto label_20601c;
        }
    }
    ctx->pc = 0x205FE8u;
    // 0x205fe8: 0xc086f6e  jal         func_21BDB8
    ctx->pc = 0x205FE8u;
    SET_GPR_U32(ctx, 31, 0x205FF0u);
    ctx->pc = 0x21BDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BDB8u, 0x205FE8u, 0x205FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FF0u;
label_205ff0:
    // 0x205ff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205ff4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x205FF4u;
    {
        const bool branch_taken_0x205ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FF4u;
        // 0x205ff8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ff4) {
            ctx->pc = 0x206018u;
            goto label_206018;
        }
    }
    ctx->pc = 0x205FFCu;
    // 0x205ffc: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205FFCu;
    {
        const bool branch_taken_0x205ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x206000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FFCu;
        // 0x206000: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ffc) {
            ctx->pc = 0x206018u;
            goto label_206018;
        }
    }
    ctx->pc = 0x206004u;
    // 0x206004: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x206008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20600c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20600Cu;
    SET_GPR_U32(ctx, 31, 0x206014u);
    ctx->pc = 0x206010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20600Cu;
    // 0x206010: 0x24847218  addiu       $a0, $a0, 0x7218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20600Cu, 0x206014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206014u;
label_206014:
    // 0x206014: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x206014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206018:
    // 0x206018: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x206018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20601c:
    // 0x20601c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206020: 0x3e00008  jr          $ra
    ctx->pc = 0x206020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206020u;
        // 0x206024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206028u;
}
