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

// Function: sub_0034E950
// Address: 0x34e950 - 0x34e980
void sub_0034E950_0x34e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E950_0x34e950");
#endif

    switch (ctx->pc) {
        case 0x34e96cu: goto label_34e96c;
        default: break;
    }

    ctx->pc = 0x34e950u;

    // 0x34e950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e960: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34e960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34e964: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x34E964u;
    SET_GPR_U32(ctx, 31, 0x34E96Cu);
    ctx->pc = 0x34E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E964u;
    // 0x34e968: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x34E964u, 0x34E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E96Cu;
label_34e96c:
    // 0x34e96c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x34e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x34e970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e978: 0x3e00008  jr          $ra
    ctx->pc = 0x34E978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E978u;
        // 0x34e97c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E980u;
}
