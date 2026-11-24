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

// Function: sub_002CB740
// Address: 0x2cb740 - 0x2cb7ac
void sub_002CB740_0x2cb740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB740_0x2cb740");
#endif

    switch (ctx->pc) {
        case 0x2cb76cu: goto label_2cb76c;
        default: break;
    }

    ctx->pc = 0x2cb740u;

    // 0x2cb740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb74c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb750: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB750u;
    {
        const bool branch_taken_0x2cb750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb750) {
            ctx->pc = 0x2CB778u;
            goto label_2cb778;
        }
    }
    ctx->pc = 0x2CB758u;
    // 0x2cb758: 0x8f828a0c  lw          $v0, -0x75F4($gp)
    ctx->pc = 0x2cb758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x2cb75c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB75Cu;
    {
        const bool branch_taken_0x2cb75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb75c) {
            ctx->pc = 0x2CB770u;
            goto label_2cb770;
        }
    }
    ctx->pc = 0x2CB764u;
    // 0x2cb764: 0xc0b2da4  jal         func_2CB690
    ctx->pc = 0x2CB764u;
    SET_GPR_U32(ctx, 31, 0x2CB76Cu);
    ctx->pc = 0x2CB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB690u, 0x2CB764u, 0x2CB76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB76Cu;
label_2cb76c:
    // 0x2cb76c: 0xaf808a0c  sw          $zero, -0x75F4($gp)
    ctx->pc = 0x2cb76cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 0));
label_2cb770:
    // 0x2cb770: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x2cb770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    // 0x2cb774: 0x0  nop
    ctx->pc = 0x2cb774u;
    // NOP
label_2cb778:
    // 0x2cb778: 0x8f828a08  lw          $v0, -0x75F8($gp)
    ctx->pc = 0x2cb778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937096)));
    // 0x2cb77c: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2cb77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cb780: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB780u;
    {
        const bool branch_taken_0x2cb780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb780) {
            ctx->pc = 0x2CB790u;
            goto label_2cb790;
        }
    }
    ctx->pc = 0x2CB788u;
    // 0x2cb788: 0xaf908a08  sw          $s0, -0x75F8($gp)
    ctx->pc = 0x2cb788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 16));
    // 0x2cb78c: 0x0  nop
    ctx->pc = 0x2cb78cu;
    // NOP
label_2cb790:
    // 0x2cb790: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x2cb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x2cb794: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cb798: 0xaf828a20  sw          $v0, -0x75E0($gp)
    ctx->pc = 0x2cb798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 2));
    // 0x2cb79c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb7a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7A4u;
        // 0x2cb7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB7ACu;
}
