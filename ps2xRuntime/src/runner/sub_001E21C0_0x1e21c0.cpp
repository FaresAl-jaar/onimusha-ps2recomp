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

// Function: sub_001E21C0
// Address: 0x1e21c0 - 0x1e2214
void sub_001E21C0_0x1e21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E21C0_0x1e21c0");
#endif

    switch (ctx->pc) {
        case 0x1e21c0u: goto label_1e21c0;
        case 0x1e21c4u: goto label_1e21c4;
        case 0x1e21c8u: goto label_1e21c8;
        case 0x1e21ccu: goto label_1e21cc;
        case 0x1e21d0u: goto label_1e21d0;
        case 0x1e21d4u: goto label_1e21d4;
        case 0x1e21d8u: goto label_1e21d8;
        case 0x1e21dcu: goto label_1e21dc;
        case 0x1e21e0u: goto label_1e21e0;
        case 0x1e21e4u: goto label_1e21e4;
        case 0x1e21e8u: goto label_1e21e8;
        case 0x1e21ecu: goto label_1e21ec;
        case 0x1e21f0u: goto label_1e21f0;
        case 0x1e21f4u: goto label_1e21f4;
        case 0x1e21f8u: goto label_1e21f8;
        case 0x1e21fcu: goto label_1e21fc;
        case 0x1e2200u: goto label_1e2200;
        case 0x1e2204u: goto label_1e2204;
        case 0x1e2208u: goto label_1e2208;
        case 0x1e220cu: goto label_1e220c;
        case 0x1e2210u: goto label_1e2210;
        default: break;
    }

    ctx->pc = 0x1e21c0u;

label_1e21c0:
    // 0x1e21c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e21c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e21c4:
    // 0x1e21c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e21c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e21c8:
    // 0x1e21c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e21c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e21cc:
    // 0x1e21cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e21ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e21d0:
    // 0x1e21d0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e21d4:
    if (ctx->pc == 0x1E21D4u) {
        ctx->pc = 0x1E21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21D0u;
        // 0x1e21d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21D8u;
        goto label_1e21d8;
    }
    ctx->pc = 0x1E21D0u;
    {
        const bool branch_taken_0x1e21d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21D0u;
        // 0x1e21d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21d0) {
            ctx->pc = 0x1E2200u;
            goto label_1e2200;
        }
    }
    ctx->pc = 0x1E21D8u;
label_1e21d8:
    // 0x1e21d8: 0x244267b0  addiu       $v0, $v0, 0x67B0
    ctx->pc = 0x1e21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26544));
label_1e21dc:
    // 0x1e21dc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e21e0:
    // 0x1e21e0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e21e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e21e4:
    // 0x1e21e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e21e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e21e8:
    // 0x1e21e8: 0x320f809  jalr        $t9
label_1e21ec:
    if (ctx->pc == 0x1E21ECu) {
        ctx->pc = 0x1E21F0u;
        goto label_1e21f0;
    }
    ctx->pc = 0x1E21E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E21F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E21E8u, 0x1E21F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E21F0u;
label_1e21f0:
    // 0x1e21f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e21f4:
    if (ctx->pc == 0x1E21F4u) {
        ctx->pc = 0x1E21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21F0u;
        // 0x1e21f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21F8u;
        goto label_1e21f8;
    }
    ctx->pc = 0x1E21F0u;
    {
        const bool branch_taken_0x1e21f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21F0u;
        // 0x1e21f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21f0) {
            ctx->pc = 0x1E2200u;
            goto label_1e2200;
        }
    }
    ctx->pc = 0x1E21F8u;
label_1e21f8:
    // 0x1e21f8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e21fc:
    // 0x1e21fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e2200:
    // 0x1e2200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2204:
    // 0x1e2204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2208:
    // 0x1e2208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e220c:
    // 0x1e220c: 0x3e00008  jr          $ra
label_1e2210:
    if (ctx->pc == 0x1E2210u) {
        ctx->pc = 0x1E2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E220Cu;
        // 0x1e2210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2214u;
        goto label_fallthrough_0x1e220c;
    }
    ctx->pc = 0x1E220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E220Cu;
        // 0x1e2210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E220Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e220c:
    ctx->pc = 0x1E2214u;
}
