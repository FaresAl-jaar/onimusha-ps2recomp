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

// Function: sub_001E74B0
// Address: 0x1e74b0 - 0x1e7504
void sub_001E74B0_0x1e74b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E74B0_0x1e74b0");
#endif

    switch (ctx->pc) {
        case 0x1e74b0u: goto label_1e74b0;
        case 0x1e74b4u: goto label_1e74b4;
        case 0x1e74b8u: goto label_1e74b8;
        case 0x1e74bcu: goto label_1e74bc;
        case 0x1e74c0u: goto label_1e74c0;
        case 0x1e74c4u: goto label_1e74c4;
        case 0x1e74c8u: goto label_1e74c8;
        case 0x1e74ccu: goto label_1e74cc;
        case 0x1e74d0u: goto label_1e74d0;
        case 0x1e74d4u: goto label_1e74d4;
        case 0x1e74d8u: goto label_1e74d8;
        case 0x1e74dcu: goto label_1e74dc;
        case 0x1e74e0u: goto label_1e74e0;
        case 0x1e74e4u: goto label_1e74e4;
        case 0x1e74e8u: goto label_1e74e8;
        case 0x1e74ecu: goto label_1e74ec;
        case 0x1e74f0u: goto label_1e74f0;
        case 0x1e74f4u: goto label_1e74f4;
        case 0x1e74f8u: goto label_1e74f8;
        case 0x1e74fcu: goto label_1e74fc;
        case 0x1e7500u: goto label_1e7500;
        default: break;
    }

    ctx->pc = 0x1e74b0u;

label_1e74b0:
    // 0x1e74b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e74b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e74b4:
    // 0x1e74b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e74b8:
    // 0x1e74b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e74bc:
    // 0x1e74bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e74bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e74c0:
    // 0x1e74c0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e74c4:
    if (ctx->pc == 0x1E74C4u) {
        ctx->pc = 0x1E74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74C0u;
        // 0x1e74c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74C8u;
        goto label_1e74c8;
    }
    ctx->pc = 0x1E74C0u;
    {
        const bool branch_taken_0x1e74c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74C0u;
        // 0x1e74c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74c0) {
            ctx->pc = 0x1E74F0u;
            goto label_1e74f0;
        }
    }
    ctx->pc = 0x1E74C8u;
label_1e74c8:
    // 0x1e74c8: 0x24426cf0  addiu       $v0, $v0, 0x6CF0
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27888));
label_1e74cc:
    // 0x1e74cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e74d0:
    // 0x1e74d0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e74d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e74d4:
    // 0x1e74d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e74d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e74d8:
    // 0x1e74d8: 0x320f809  jalr        $t9
label_1e74dc:
    if (ctx->pc == 0x1E74DCu) {
        ctx->pc = 0x1E74E0u;
        goto label_1e74e0;
    }
    ctx->pc = 0x1E74D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E74E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E74D8u, 0x1E74E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E74E0u;
label_1e74e0:
    // 0x1e74e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e74e4:
    if (ctx->pc == 0x1E74E4u) {
        ctx->pc = 0x1E74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74E0u;
        // 0x1e74e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74E8u;
        goto label_1e74e8;
    }
    ctx->pc = 0x1E74E0u;
    {
        const bool branch_taken_0x1e74e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74E0u;
        // 0x1e74e4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74e0) {
            ctx->pc = 0x1E74F0u;
            goto label_1e74f0;
        }
    }
    ctx->pc = 0x1E74E8u;
label_1e74e8:
    // 0x1e74e8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e74ec:
    // 0x1e74ec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e74ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e74f0:
    // 0x1e74f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e74f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e74f4:
    // 0x1e74f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e74f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e74f8:
    // 0x1e74f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e74f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e74fc:
    // 0x1e74fc: 0x3e00008  jr          $ra
label_1e7500:
    if (ctx->pc == 0x1E7500u) {
        ctx->pc = 0x1E7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74FCu;
        // 0x1e7500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7504u;
        goto label_fallthrough_0x1e74fc;
    }
    ctx->pc = 0x1E74FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74FCu;
        // 0x1e7500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E74FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e74fc:
    ctx->pc = 0x1E7504u;
}
