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

// Function: sub_001E4990
// Address: 0x1e4990 - 0x1e49e4
void sub_001E4990_0x1e4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4990_0x1e4990");
#endif

    switch (ctx->pc) {
        case 0x1e4990u: goto label_1e4990;
        case 0x1e4994u: goto label_1e4994;
        case 0x1e4998u: goto label_1e4998;
        case 0x1e499cu: goto label_1e499c;
        case 0x1e49a0u: goto label_1e49a0;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49a8u: goto label_1e49a8;
        case 0x1e49acu: goto label_1e49ac;
        case 0x1e49b0u: goto label_1e49b0;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49b8u: goto label_1e49b8;
        case 0x1e49bcu: goto label_1e49bc;
        case 0x1e49c0u: goto label_1e49c0;
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49c8u: goto label_1e49c8;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e49d4u: goto label_1e49d4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49dcu: goto label_1e49dc;
        case 0x1e49e0u: goto label_1e49e0;
        default: break;
    }

    ctx->pc = 0x1e4990u;

label_1e4990:
    // 0x1e4990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e4994:
    // 0x1e4994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e4998:
    // 0x1e4998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e499c:
    // 0x1e499c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e499cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e49a0:
    // 0x1e49a0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e49a4:
    if (ctx->pc == 0x1E49A4u) {
        ctx->pc = 0x1E49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49A0u;
        // 0x1e49a4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49A8u;
        goto label_1e49a8;
    }
    ctx->pc = 0x1E49A0u;
    {
        const bool branch_taken_0x1e49a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49A0u;
        // 0x1e49a4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49a0) {
            ctx->pc = 0x1E49D0u;
            goto label_1e49d0;
        }
    }
    ctx->pc = 0x1E49A8u;
label_1e49a8:
    // 0x1e49a8: 0x24426990  addiu       $v0, $v0, 0x6990
    ctx->pc = 0x1e49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27024));
label_1e49ac:
    // 0x1e49ac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e49acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e49b0:
    // 0x1e49b0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e49b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e49b4:
    // 0x1e49b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e49b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e49b8:
    // 0x1e49b8: 0x320f809  jalr        $t9
label_1e49bc:
    if (ctx->pc == 0x1E49BCu) {
        ctx->pc = 0x1E49C0u;
        goto label_1e49c0;
    }
    ctx->pc = 0x1E49B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E49C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E49B8u, 0x1E49C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E49C0u;
label_1e49c0:
    // 0x1e49c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e49c4:
    if (ctx->pc == 0x1E49C4u) {
        ctx->pc = 0x1E49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49C0u;
        // 0x1e49c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49C8u;
        goto label_1e49c8;
    }
    ctx->pc = 0x1E49C0u;
    {
        const bool branch_taken_0x1e49c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49C0u;
        // 0x1e49c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49c0) {
            ctx->pc = 0x1E49D0u;
            goto label_1e49d0;
        }
    }
    ctx->pc = 0x1E49C8u;
label_1e49c8:
    // 0x1e49c8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e49cc:
    // 0x1e49cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e49ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e49d0:
    // 0x1e49d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e49d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e49d4:
    // 0x1e49d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e49d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e49d8:
    // 0x1e49d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e49d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e49dc:
    // 0x1e49dc: 0x3e00008  jr          $ra
label_1e49e0:
    if (ctx->pc == 0x1E49E0u) {
        ctx->pc = 0x1E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49DCu;
        // 0x1e49e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49E4u;
        goto label_fallthrough_0x1e49dc;
    }
    ctx->pc = 0x1E49DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49DCu;
        // 0x1e49e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E49DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e49dc:
    ctx->pc = 0x1E49E4u;
}
