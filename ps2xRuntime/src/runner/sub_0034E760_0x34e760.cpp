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

// Function: sub_0034E760
// Address: 0x34e760 - 0x34e7b0
void sub_0034E760_0x34e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E760_0x34e760");
#endif

    switch (ctx->pc) {
        case 0x34e790u: goto label_34e790;
        default: break;
    }

    ctx->pc = 0x34e760u;

    // 0x34e760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e76c: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x34e76cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x34e770: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x34e770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x34e774: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x34E774u;
    {
        const bool branch_taken_0x34e774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E774u;
        // 0x34e778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e774) {
            ctx->pc = 0x34E7A0u;
            goto label_34e7a0;
        }
    }
    ctx->pc = 0x34E77Cu;
    // 0x34e77c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x34e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x34e780: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34E780u;
    {
        const bool branch_taken_0x34e780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E780u;
        // 0x34e784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e780) {
            ctx->pc = 0x34E7A0u;
            goto label_34e7a0;
        }
    }
    ctx->pc = 0x34E788u;
    // 0x34e788: 0xc0d45b0  jal         func_3516C0
    ctx->pc = 0x34E788u;
    SET_GPR_U32(ctx, 31, 0x34E790u);
    ctx->pc = 0x3516C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3516C0u, 0x34E788u, 0x34E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E790u;
label_34e790:
    // 0x34e790: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x34e790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x34e794: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x34e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x34e798: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x34e798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e79c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x34e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_34e7a0:
    // 0x34e7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e7a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x34E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7A8u;
        // 0x34e7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E7B0u;
}
