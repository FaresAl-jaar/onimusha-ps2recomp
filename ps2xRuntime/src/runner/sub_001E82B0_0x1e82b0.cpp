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

// Function: sub_001E82B0
// Address: 0x1e82b0 - 0x1e8304
void sub_001E82B0_0x1e82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E82B0_0x1e82b0");
#endif

    switch (ctx->pc) {
        case 0x1e82b0u: goto label_1e82b0;
        case 0x1e82b4u: goto label_1e82b4;
        case 0x1e82b8u: goto label_1e82b8;
        case 0x1e82bcu: goto label_1e82bc;
        case 0x1e82c0u: goto label_1e82c0;
        case 0x1e82c4u: goto label_1e82c4;
        case 0x1e82c8u: goto label_1e82c8;
        case 0x1e82ccu: goto label_1e82cc;
        case 0x1e82d0u: goto label_1e82d0;
        case 0x1e82d4u: goto label_1e82d4;
        case 0x1e82d8u: goto label_1e82d8;
        case 0x1e82dcu: goto label_1e82dc;
        case 0x1e82e0u: goto label_1e82e0;
        case 0x1e82e4u: goto label_1e82e4;
        case 0x1e82e8u: goto label_1e82e8;
        case 0x1e82ecu: goto label_1e82ec;
        case 0x1e82f0u: goto label_1e82f0;
        case 0x1e82f4u: goto label_1e82f4;
        case 0x1e82f8u: goto label_1e82f8;
        case 0x1e82fcu: goto label_1e82fc;
        case 0x1e8300u: goto label_1e8300;
        default: break;
    }

    ctx->pc = 0x1e82b0u;

label_1e82b0:
    // 0x1e82b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e82b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e82b4:
    // 0x1e82b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e82b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e82b8:
    // 0x1e82b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e82b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e82bc:
    // 0x1e82bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e82bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e82c0:
    // 0x1e82c0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e82c4:
    if (ctx->pc == 0x1E82C4u) {
        ctx->pc = 0x1E82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82C0u;
        // 0x1e82c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E82C8u;
        goto label_1e82c8;
    }
    ctx->pc = 0x1E82C0u;
    {
        const bool branch_taken_0x1e82c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82C0u;
        // 0x1e82c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82c0) {
            ctx->pc = 0x1E82F0u;
            goto label_1e82f0;
        }
    }
    ctx->pc = 0x1E82C8u;
label_1e82c8:
    // 0x1e82c8: 0x24426db0  addiu       $v0, $v0, 0x6DB0
    ctx->pc = 0x1e82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28080));
label_1e82cc:
    // 0x1e82cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e82d0:
    // 0x1e82d0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e82d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e82d4:
    // 0x1e82d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e82d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e82d8:
    // 0x1e82d8: 0x320f809  jalr        $t9
label_1e82dc:
    if (ctx->pc == 0x1E82DCu) {
        ctx->pc = 0x1E82E0u;
        goto label_1e82e0;
    }
    ctx->pc = 0x1E82D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E82E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E82D8u, 0x1E82E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E82E0u;
label_1e82e0:
    // 0x1e82e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e82e4:
    if (ctx->pc == 0x1E82E4u) {
        ctx->pc = 0x1E82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82E0u;
        // 0x1e82e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E82E8u;
        goto label_1e82e8;
    }
    ctx->pc = 0x1E82E0u;
    {
        const bool branch_taken_0x1e82e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82E0u;
        // 0x1e82e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82e0) {
            ctx->pc = 0x1E82F0u;
            goto label_1e82f0;
        }
    }
    ctx->pc = 0x1E82E8u;
label_1e82e8:
    // 0x1e82e8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e82ec:
    // 0x1e82ec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e82f0:
    // 0x1e82f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e82f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e82f4:
    // 0x1e82f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e82f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e82f8:
    // 0x1e82f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e82f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e82fc:
    // 0x1e82fc: 0x3e00008  jr          $ra
label_1e8300:
    if (ctx->pc == 0x1E8300u) {
        ctx->pc = 0x1E8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82FCu;
        // 0x1e8300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8304u;
        goto label_fallthrough_0x1e82fc;
    }
    ctx->pc = 0x1E82FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82FCu;
        // 0x1e8300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E82FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e82fc:
    ctx->pc = 0x1E8304u;
}
