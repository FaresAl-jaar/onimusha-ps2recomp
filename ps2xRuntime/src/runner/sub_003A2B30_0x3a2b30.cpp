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

// Function: sub_003A2B30
// Address: 0x3a2b30 - 0x3a2b6c
void sub_003A2B30_0x3a2b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2B30_0x3a2b30");
#endif

    switch (ctx->pc) {
        case 0x3a2b44u: goto label_3a2b44;
        case 0x3a2b5cu: goto label_3a2b5c;
        default: break;
    }

    ctx->pc = 0x3a2b30u;

    // 0x3a2b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a2b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a2b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a2b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a2b3c: 0xc0c0858  jal         func_302160
    ctx->pc = 0x3A2B3Cu;
    SET_GPR_U32(ctx, 31, 0x3A2B44u);
    ctx->pc = 0x3A2B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B3Cu;
    // 0x3a2b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x3A2B3Cu, 0x3A2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B44u;
label_3a2b44:
    // 0x3a2b44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A2B44u;
    {
        const bool branch_taken_0x3a2b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B44u;
        // 0x3a2b48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b44) {
            ctx->pc = 0x3A2B50u;
            goto label_3a2b50;
        }
    }
    ctx->pc = 0x3A2B4Cu;
    // 0x3a2b4c: 0xa443056e  sh          $v1, 0x56E($v0)
    ctx->pc = 0x3a2b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1390), (uint16_t)GPR_U32(ctx, 3));
label_3a2b50:
    // 0x3a2b50: 0x8e050550  lw          $a1, 0x550($s0)
    ctx->pc = 0x3a2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3a2b54: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3A2B54u;
    SET_GPR_U32(ctx, 31, 0x3A2B5Cu);
    ctx->pc = 0x3A2B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B54u;
    // 0x3a2b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3A2B54u, 0x3A2B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B5Cu;
label_3a2b5c:
    // 0x3a2b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a2b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2b64: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B64u;
        // 0x3a2b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2B6Cu;
}
