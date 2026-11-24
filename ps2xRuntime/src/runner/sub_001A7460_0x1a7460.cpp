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

// Function: sub_001A7460
// Address: 0x1a7460 - 0x1a74c8
void sub_001A7460_0x1a7460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7460_0x1a7460");
#endif

    ctx->pc = 0x1a7460u;

    // 0x1a7460: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7460u;
    {
        const bool branch_taken_0x1a7460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7460) {
            ctx->pc = 0x1A74C0u;
            goto label_1a74c0;
        }
    }
    ctx->pc = 0x1A7468u;
    // 0x1a7468: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1a7468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a746c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A746Cu;
    {
        const bool branch_taken_0x1a746c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a746c) {
            ctx->pc = 0x1A7490u;
            goto label_1a7490;
        }
    }
    ctx->pc = 0x1A7474u;
    // 0x1a7474: 0x8c837800  lw          $v1, 0x7800($a0)
    ctx->pc = 0x1a7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30720)));
    // 0x1a7478: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a747c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a747cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7480: 0xac867800  sw          $a2, 0x7800($a0)
    ctx->pc = 0x1a7480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30720), GPR_U32(ctx, 6));
    // 0x1a7484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a7484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7488: 0xac677400  sw          $a3, 0x7400($v1)
    ctx->pc = 0x1a7488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29696), GPR_U32(ctx, 7));
    // 0x1a748c: 0x0  nop
    ctx->pc = 0x1a748cu;
    // NOP
label_1a7490:
    // 0x1a7490: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a7494: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7494u;
    {
        const bool branch_taken_0x1a7494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7494) {
            ctx->pc = 0x1A74B8u;
            goto label_1a74b8;
        }
    }
    ctx->pc = 0x1A749Cu;
    // 0x1a749c: 0x8c837804  lw          $v1, 0x7804($a0)
    ctx->pc = 0x1a749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30724)));
    // 0x1a74a0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1a74a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a74a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a74a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a74a8: 0xac867804  sw          $a2, 0x7804($a0)
    ctx->pc = 0x1a74a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30724), GPR_U32(ctx, 6));
    // 0x1a74ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a74b0: 0xac677600  sw          $a3, 0x7600($v1)
    ctx->pc = 0x1a74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 30208), GPR_U32(ctx, 7));
    // 0x1a74b4: 0x0  nop
    ctx->pc = 0x1a74b4u;
    // NOP
label_1a74b8:
    // 0x1a74b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1a74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1a74bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1a74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1a74c0:
    // 0x1a74c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A74C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A74C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A74C8u;
}
