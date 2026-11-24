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

// Function: sub_001DF8A0
// Address: 0x1df8a0 - 0x1df8f4
void sub_001DF8A0_0x1df8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF8A0_0x1df8a0");
#endif

    switch (ctx->pc) {
        case 0x1df8a0u: goto label_1df8a0;
        case 0x1df8a4u: goto label_1df8a4;
        case 0x1df8a8u: goto label_1df8a8;
        case 0x1df8acu: goto label_1df8ac;
        case 0x1df8b0u: goto label_1df8b0;
        case 0x1df8b4u: goto label_1df8b4;
        case 0x1df8b8u: goto label_1df8b8;
        case 0x1df8bcu: goto label_1df8bc;
        case 0x1df8c0u: goto label_1df8c0;
        case 0x1df8c4u: goto label_1df8c4;
        case 0x1df8c8u: goto label_1df8c8;
        case 0x1df8ccu: goto label_1df8cc;
        case 0x1df8d0u: goto label_1df8d0;
        case 0x1df8d4u: goto label_1df8d4;
        case 0x1df8d8u: goto label_1df8d8;
        case 0x1df8dcu: goto label_1df8dc;
        case 0x1df8e0u: goto label_1df8e0;
        case 0x1df8e4u: goto label_1df8e4;
        case 0x1df8e8u: goto label_1df8e8;
        case 0x1df8ecu: goto label_1df8ec;
        case 0x1df8f0u: goto label_1df8f0;
        default: break;
    }

    ctx->pc = 0x1df8a0u;

label_1df8a0:
    // 0x1df8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1df8a4:
    // 0x1df8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1df8a8:
    // 0x1df8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df8ac:
    // 0x1df8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df8b0:
    // 0x1df8b0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1df8b4:
    if (ctx->pc == 0x1DF8B4u) {
        ctx->pc = 0x1DF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8B0u;
        // 0x1df8b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8B8u;
        goto label_1df8b8;
    }
    ctx->pc = 0x1DF8B0u;
    {
        const bool branch_taken_0x1df8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8B0u;
        // 0x1df8b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8b0) {
            ctx->pc = 0x1DF8E0u;
            goto label_1df8e0;
        }
    }
    ctx->pc = 0x1DF8B8u;
label_1df8b8:
    // 0x1df8b8: 0x244264f0  addiu       $v0, $v0, 0x64F0
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_1df8bc:
    // 0x1df8bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1df8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1df8c0:
    // 0x1df8c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1df8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1df8c4:
    // 0x1df8c4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df8c8:
    // 0x1df8c8: 0x320f809  jalr        $t9
label_1df8cc:
    if (ctx->pc == 0x1DF8CCu) {
        ctx->pc = 0x1DF8D0u;
        goto label_1df8d0;
    }
    ctx->pc = 0x1DF8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF8D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF8C8u, 0x1DF8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF8D0u;
label_1df8d0:
    // 0x1df8d0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1df8d4:
    if (ctx->pc == 0x1DF8D4u) {
        ctx->pc = 0x1DF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8D0u;
        // 0x1df8d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8D8u;
        goto label_1df8d8;
    }
    ctx->pc = 0x1DF8D0u;
    {
        const bool branch_taken_0x1df8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8D0u;
        // 0x1df8d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8d0) {
            ctx->pc = 0x1DF8E0u;
            goto label_1df8e0;
        }
    }
    ctx->pc = 0x1DF8D8u;
label_1df8d8:
    // 0x1df8d8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1df8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1df8dc:
    // 0x1df8dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1df8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1df8e0:
    // 0x1df8e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df8e4:
    // 0x1df8e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df8e8:
    // 0x1df8e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1df8ec:
    // 0x1df8ec: 0x3e00008  jr          $ra
label_1df8f0:
    if (ctx->pc == 0x1DF8F0u) {
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ECu;
        // 0x1df8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8F4u;
        goto label_fallthrough_0x1df8ec;
    }
    ctx->pc = 0x1DF8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ECu;
        // 0x1df8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1df8ec:
    ctx->pc = 0x1DF8F4u;
}
