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

// Function: sub_00104C88
// Address: 0x104c88 - 0x104ce0
void sub_00104C88_0x104c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104C88_0x104c88");
#endif

    switch (ctx->pc) {
        case 0x104ca4u: goto label_104ca4;
        default: break;
    }

    ctx->pc = 0x104c88u;

    // 0x104c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104c8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104c98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104c9c: 0xc041298  jal         func_104A60
    ctx->pc = 0x104C9Cu;
    SET_GPR_U32(ctx, 31, 0x104CA4u);
    ctx->pc = 0x104CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C9Cu;
    // 0x104ca0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x104C9Cu, 0x104CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CA4u;
label_104ca4:
    // 0x104ca4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x104ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104ca8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x104ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x104cac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x104cacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x104cb0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x104cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x104cb4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x104cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x104cb8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x104cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x104cbc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x104cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x104cc0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x104cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x104cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104cc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x104cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x104ccc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104cd4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x104cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x104cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x104CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CD8u;
        // 0x104cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104CE0u;
}
