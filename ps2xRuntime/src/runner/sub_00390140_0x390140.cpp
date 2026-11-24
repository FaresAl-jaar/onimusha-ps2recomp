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

// Function: sub_00390140
// Address: 0x390140 - 0x3901b0
void sub_00390140_0x390140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390140_0x390140");
#endif

    ctx->pc = 0x390140u;

    // 0x390140: 0x8c850560  lw          $a1, 0x560($a0)
    ctx->pc = 0x390140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x390144: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390144u;
    {
        const bool branch_taken_0x390144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x390144) {
            ctx->pc = 0x390158u;
            goto label_390158;
        }
    }
    ctx->pc = 0x39014Cu;
    // 0x39014c: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x39014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x390150: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x390150u;
    {
        const bool branch_taken_0x390150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390150u;
        // 0x390154: 0xaca30564  sw          $v1, 0x564($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390150) {
            ctx->pc = 0x390170u;
            goto label_390170;
        }
    }
    ctx->pc = 0x390158u;
label_390158:
    // 0x390158: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x390158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x39015c: 0xaf838c40  sw          $v1, -0x73C0($gp)
    ctx->pc = 0x39015cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 3));
    // 0x390160: 0x8f838c40  lw          $v1, -0x73C0($gp)
    ctx->pc = 0x390160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x390164: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x390164u;
    {
        const bool branch_taken_0x390164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390164) {
            ctx->pc = 0x390170u;
            goto label_390170;
        }
    }
    ctx->pc = 0x39016Cu;
    // 0x39016c: 0xac600560  sw          $zero, 0x560($v1)
    ctx->pc = 0x39016cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 0));
label_390170:
    // 0x390170: 0x8c850564  lw          $a1, 0x564($a0)
    ctx->pc = 0x390170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x390174: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390174u;
    {
        const bool branch_taken_0x390174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x390174) {
            ctx->pc = 0x390188u;
            goto label_390188;
        }
    }
    ctx->pc = 0x39017Cu;
    // 0x39017c: 0x8c830560  lw          $v1, 0x560($a0)
    ctx->pc = 0x39017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x390180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x390180u;
    {
        const bool branch_taken_0x390180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390180u;
        // 0x390184: 0xaca30560  sw          $v1, 0x560($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390180) {
            ctx->pc = 0x3901A0u;
            goto label_3901a0;
        }
    }
    ctx->pc = 0x390188u;
label_390188:
    // 0x390188: 0x8c830560  lw          $v1, 0x560($a0)
    ctx->pc = 0x390188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x39018c: 0xaf838c44  sw          $v1, -0x73BC($gp)
    ctx->pc = 0x39018cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937668), GPR_U32(ctx, 3));
    // 0x390190: 0x8f838c44  lw          $v1, -0x73BC($gp)
    ctx->pc = 0x390190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937668)));
    // 0x390194: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x390194u;
    {
        const bool branch_taken_0x390194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390194) {
            ctx->pc = 0x3901A0u;
            goto label_3901a0;
        }
    }
    ctx->pc = 0x39019Cu;
    // 0x39019c: 0xac600564  sw          $zero, 0x564($v1)
    ctx->pc = 0x39019cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1380), GPR_U32(ctx, 0));
label_3901a0:
    // 0x3901a0: 0x8f838c48  lw          $v1, -0x73B8($gp)
    ctx->pc = 0x3901a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x3901a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3901a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3901a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3901A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3901ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901A8u;
        // 0x3901ac: 0xaf838c48  sw          $v1, -0x73B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3901A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3901B0u;
}
