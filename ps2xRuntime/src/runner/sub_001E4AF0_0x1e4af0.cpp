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

// Function: sub_001E4AF0
// Address: 0x1e4af0 - 0x1e4b40
void sub_001E4AF0_0x1e4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4AF0_0x1e4af0");
#endif

    switch (ctx->pc) {
        case 0x1e4b24u: goto label_1e4b24;
        default: break;
    }

    ctx->pc = 0x1e4af0u;

    // 0x1e4af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4af4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e4af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e4af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e4afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b04: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4b08: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4B08u;
    {
        const bool branch_taken_0x1e4b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e4b08) {
            ctx->pc = 0x1E4B30u;
            goto label_1e4b30;
        }
    }
    ctx->pc = 0x1E4B10u;
    // 0x1e4b10: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1e4b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e4b14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4B14u;
    {
        const bool branch_taken_0x1e4b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b14) {
            ctx->pc = 0x1E4B28u;
            goto label_1e4b28;
        }
    }
    ctx->pc = 0x1E4B1Cu;
    // 0x1e4b1c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1E4B24u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E4B1Cu, 0x1E4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B24u;
label_1e4b24:
    // 0x1e4b24: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e4b28:
    // 0x1e4b28: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e4b2c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e4b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e4b30:
    // 0x1e4b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B38u;
        // 0x1e4b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4B40u;
}
