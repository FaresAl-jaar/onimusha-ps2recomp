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

// Function: sub_00204468
// Address: 0x204468 - 0x2044ac
void sub_00204468_0x204468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204468_0x204468");
#endif

    ctx->pc = 0x204468u;

    // 0x204468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20446c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204470: 0x8c8202d4  lw          $v0, 0x2D4($a0)
    ctx->pc = 0x204470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
    // 0x204474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204474u;
    {
        const bool branch_taken_0x204474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204474) {
            ctx->pc = 0x204488u;
            goto label_204488;
        }
    }
    ctx->pc = 0x20447Cu;
    // 0x20447c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20447Cu;
    {
        const bool branch_taken_0x20447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20447Cu;
        // 0x204480: 0xac8502d4  sw          $a1, 0x2D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20447c) {
            ctx->pc = 0x2044A0u;
            goto label_2044a0;
        }
    }
    ctx->pc = 0x204484u;
    // 0x204484: 0x0  nop
    ctx->pc = 0x204484u;
    // NOP
label_204488:
    // 0x204488: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x204488u;
    {
        const bool branch_taken_0x204488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x20448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204488u;
        // 0x20448c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204488) {
            ctx->pc = 0x2044A0u;
            goto label_2044a0;
        }
    }
    ctx->pc = 0x204490u;
    // 0x204490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204494: 0x24846b80  addiu       $a0, $a0, 0x6B80
    ctx->pc = 0x204494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27520));
    // 0x204498: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x204498u;
    ctx->pc = 0x20449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204498u;
    // 0x20449c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2044A0u;
label_2044a0:
    // 0x2044a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2044a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2044a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2044A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2044A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044A4u;
        // 0x2044a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2044A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2044ACu;
}
