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

// Function: sub_001E83F0
// Address: 0x1e83f0 - 0x1e8440
void sub_001E83F0_0x1e83f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E83F0_0x1e83f0");
#endif

    switch (ctx->pc) {
        case 0x1e8424u: goto label_1e8424;
        default: break;
    }

    ctx->pc = 0x1e83f0u;

    // 0x1e83f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e83f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e83f4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e83f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e83fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e83fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8404: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e8404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8408: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8408u;
    {
        const bool branch_taken_0x1e8408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8408) {
            ctx->pc = 0x1E8430u;
            goto label_1e8430;
        }
    }
    ctx->pc = 0x1E8410u;
    // 0x1e8410: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1e8410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1e8414: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8414u;
    {
        const bool branch_taken_0x1e8414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8414) {
            ctx->pc = 0x1E8428u;
            goto label_1e8428;
        }
    }
    ctx->pc = 0x1E841Cu;
    // 0x1e841c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E841Cu;
    SET_GPR_U32(ctx, 31, 0x1E8424u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E841Cu, 0x1E8424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8424u;
label_1e8424:
    // 0x1e8424: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1e8424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_1e8428:
    // 0x1e8428: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e8428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e842c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e842cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e8430:
    // 0x1e8430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8438: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8438u;
        // 0x1e843c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8440u;
}
