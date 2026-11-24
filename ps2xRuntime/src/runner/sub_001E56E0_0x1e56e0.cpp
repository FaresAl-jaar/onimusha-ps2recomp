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

// Function: sub_001E56E0
// Address: 0x1e56e0 - 0x1e5734
void sub_001E56E0_0x1e56e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E56E0_0x1e56e0");
#endif

    switch (ctx->pc) {
        case 0x1e56e0u: goto label_1e56e0;
        case 0x1e56e4u: goto label_1e56e4;
        case 0x1e56e8u: goto label_1e56e8;
        case 0x1e56ecu: goto label_1e56ec;
        case 0x1e56f0u: goto label_1e56f0;
        case 0x1e56f4u: goto label_1e56f4;
        case 0x1e56f8u: goto label_1e56f8;
        case 0x1e56fcu: goto label_1e56fc;
        case 0x1e5700u: goto label_1e5700;
        case 0x1e5704u: goto label_1e5704;
        case 0x1e5708u: goto label_1e5708;
        case 0x1e570cu: goto label_1e570c;
        case 0x1e5710u: goto label_1e5710;
        case 0x1e5714u: goto label_1e5714;
        case 0x1e5718u: goto label_1e5718;
        case 0x1e571cu: goto label_1e571c;
        case 0x1e5720u: goto label_1e5720;
        case 0x1e5724u: goto label_1e5724;
        case 0x1e5728u: goto label_1e5728;
        case 0x1e572cu: goto label_1e572c;
        case 0x1e5730u: goto label_1e5730;
        default: break;
    }

    ctx->pc = 0x1e56e0u;

label_1e56e0:
    // 0x1e56e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e56e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e56e4:
    // 0x1e56e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e56e8:
    // 0x1e56e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e56ec:
    // 0x1e56ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e56ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e56f0:
    // 0x1e56f0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e56f4:
    if (ctx->pc == 0x1E56F4u) {
        ctx->pc = 0x1E56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56F0u;
        // 0x1e56f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E56F8u;
        goto label_1e56f8;
    }
    ctx->pc = 0x1E56F0u;
    {
        const bool branch_taken_0x1e56f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56F0u;
        // 0x1e56f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56f0) {
            ctx->pc = 0x1E5720u;
            goto label_1e5720;
        }
    }
    ctx->pc = 0x1E56F8u;
label_1e56f8:
    // 0x1e56f8: 0x244269f0  addiu       $v0, $v0, 0x69F0
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27120));
label_1e56fc:
    // 0x1e56fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e56fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e5700:
    // 0x1e5700: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e5700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e5704:
    // 0x1e5704: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5708:
    // 0x1e5708: 0x320f809  jalr        $t9
label_1e570c:
    if (ctx->pc == 0x1E570Cu) {
        ctx->pc = 0x1E5710u;
        goto label_1e5710;
    }
    ctx->pc = 0x1E5708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5710u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5708u, 0x1E5710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5710u;
label_1e5710:
    // 0x1e5710: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e5714:
    if (ctx->pc == 0x1E5714u) {
        ctx->pc = 0x1E5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5710u;
        // 0x1e5714: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5718u;
        goto label_1e5718;
    }
    ctx->pc = 0x1E5710u;
    {
        const bool branch_taken_0x1e5710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5710u;
        // 0x1e5714: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5710) {
            ctx->pc = 0x1E5720u;
            goto label_1e5720;
        }
    }
    ctx->pc = 0x1E5718u;
label_1e5718:
    // 0x1e5718: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e571c:
    // 0x1e571c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e5720:
    // 0x1e5720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5724:
    // 0x1e5724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5728:
    // 0x1e5728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e572c:
    // 0x1e572c: 0x3e00008  jr          $ra
label_1e5730:
    if (ctx->pc == 0x1E5730u) {
        ctx->pc = 0x1E5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E572Cu;
        // 0x1e5730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5734u;
        goto label_fallthrough_0x1e572c;
    }
    ctx->pc = 0x1E572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E572Cu;
        // 0x1e5730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E572Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e572c:
    ctx->pc = 0x1E5734u;
}
