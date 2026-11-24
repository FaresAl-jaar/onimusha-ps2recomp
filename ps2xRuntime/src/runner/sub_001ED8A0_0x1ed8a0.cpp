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

// Function: sub_001ED8A0
// Address: 0x1ed8a0 - 0x1ed8f4
void sub_001ED8A0_0x1ed8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED8A0_0x1ed8a0");
#endif

    switch (ctx->pc) {
        case 0x1ed8a0u: goto label_1ed8a0;
        case 0x1ed8a4u: goto label_1ed8a4;
        case 0x1ed8a8u: goto label_1ed8a8;
        case 0x1ed8acu: goto label_1ed8ac;
        case 0x1ed8b0u: goto label_1ed8b0;
        case 0x1ed8b4u: goto label_1ed8b4;
        case 0x1ed8b8u: goto label_1ed8b8;
        case 0x1ed8bcu: goto label_1ed8bc;
        case 0x1ed8c0u: goto label_1ed8c0;
        case 0x1ed8c4u: goto label_1ed8c4;
        case 0x1ed8c8u: goto label_1ed8c8;
        case 0x1ed8ccu: goto label_1ed8cc;
        case 0x1ed8d0u: goto label_1ed8d0;
        case 0x1ed8d4u: goto label_1ed8d4;
        case 0x1ed8d8u: goto label_1ed8d8;
        case 0x1ed8dcu: goto label_1ed8dc;
        case 0x1ed8e0u: goto label_1ed8e0;
        case 0x1ed8e4u: goto label_1ed8e4;
        case 0x1ed8e8u: goto label_1ed8e8;
        case 0x1ed8ecu: goto label_1ed8ec;
        case 0x1ed8f0u: goto label_1ed8f0;
        default: break;
    }

    ctx->pc = 0x1ed8a0u;

label_1ed8a0:
    // 0x1ed8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ed8a4:
    // 0x1ed8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ed8a8:
    // 0x1ed8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed8ac:
    // 0x1ed8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed8b0:
    // 0x1ed8b0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ed8b4:
    if (ctx->pc == 0x1ED8B4u) {
        ctx->pc = 0x1ED8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8B0u;
        // 0x1ed8b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED8B8u;
        goto label_1ed8b8;
    }
    ctx->pc = 0x1ED8B0u;
    {
        const bool branch_taken_0x1ed8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8B0u;
        // 0x1ed8b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8b0) {
            ctx->pc = 0x1ED8E0u;
            goto label_1ed8e0;
        }
    }
    ctx->pc = 0x1ED8B8u;
label_1ed8b8:
    // 0x1ed8b8: 0x244271d0  addiu       $v0, $v0, 0x71D0
    ctx->pc = 0x1ed8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29136));
label_1ed8bc:
    // 0x1ed8bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ed8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ed8c0:
    // 0x1ed8c0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ed8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ed8c4:
    // 0x1ed8c4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ed8c8:
    // 0x1ed8c8: 0x320f809  jalr        $t9
label_1ed8cc:
    if (ctx->pc == 0x1ED8CCu) {
        ctx->pc = 0x1ED8D0u;
        goto label_1ed8d0;
    }
    ctx->pc = 0x1ED8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ED8D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED8C8u, 0x1ED8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED8D0u;
label_1ed8d0:
    // 0x1ed8d0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ed8d4:
    if (ctx->pc == 0x1ED8D4u) {
        ctx->pc = 0x1ED8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8D0u;
        // 0x1ed8d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED8D8u;
        goto label_1ed8d8;
    }
    ctx->pc = 0x1ED8D0u;
    {
        const bool branch_taken_0x1ed8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8D0u;
        // 0x1ed8d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8d0) {
            ctx->pc = 0x1ED8E0u;
            goto label_1ed8e0;
        }
    }
    ctx->pc = 0x1ED8D8u;
label_1ed8d8:
    // 0x1ed8d8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1ed8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1ed8dc:
    // 0x1ed8dc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ed8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ed8e0:
    // 0x1ed8e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ed8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed8e4:
    // 0x1ed8e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed8e8:
    // 0x1ed8e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed8ec:
    // 0x1ed8ec: 0x3e00008  jr          $ra
label_1ed8f0:
    if (ctx->pc == 0x1ED8F0u) {
        ctx->pc = 0x1ED8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8ECu;
        // 0x1ed8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED8F4u;
        goto label_fallthrough_0x1ed8ec;
    }
    ctx->pc = 0x1ED8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8ECu;
        // 0x1ed8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ed8ec:
    ctx->pc = 0x1ED8F4u;
}
