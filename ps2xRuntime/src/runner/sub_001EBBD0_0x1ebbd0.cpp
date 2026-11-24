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

// Function: sub_001EBBD0
// Address: 0x1ebbd0 - 0x1ebc20
void sub_001EBBD0_0x1ebbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBBD0_0x1ebbd0");
#endif

    switch (ctx->pc) {
        case 0x1ebc04u: goto label_1ebc04;
        default: break;
    }

    ctx->pc = 0x1ebbd0u;

    // 0x1ebbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebbd4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1ebbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ebbd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ebbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebbe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbe4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1ebbe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ebbe8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EBBE8u;
    {
        const bool branch_taken_0x1ebbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ebbe8) {
            ctx->pc = 0x1EBC10u;
            goto label_1ebc10;
        }
    }
    ctx->pc = 0x1EBBF0u;
    // 0x1ebbf0: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x1ebbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1ebbf4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBBF4u;
    {
        const bool branch_taken_0x1ebbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebbf4) {
            ctx->pc = 0x1EBC08u;
            goto label_1ebc08;
        }
    }
    ctx->pc = 0x1EBBFCu;
    // 0x1ebbfc: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1EBBFCu;
    SET_GPR_U32(ctx, 31, 0x1EBC04u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1EBBFCu, 0x1EBC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC04u;
label_1ebc04:
    // 0x1ebc04: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1ebc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_1ebc08:
    // 0x1ebc08: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ebc0c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ebc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ebc10:
    // 0x1ebc10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebc18: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC18u;
        // 0x1ebc1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC20u;
}
