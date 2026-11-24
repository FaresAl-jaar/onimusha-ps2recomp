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

// Function: sub_0022BBA8
// Address: 0x22bba8 - 0x22bbf8
void sub_0022BBA8_0x22bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BBA8_0x22bba8");
#endif

    switch (ctx->pc) {
        case 0x22bbe0u: goto label_22bbe0;
        default: break;
    }

    ctx->pc = 0x22bba8u;

    // 0x22bba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22bbac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bbb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bbb4: 0x8082000e  lb          $v0, 0xE($a0)
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x22bbb8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BBB8u;
    {
        const bool branch_taken_0x22bbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBB8u;
        // 0x22bbbc: 0x9085000e  lbu         $a1, 0xE($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbb8) {
            ctx->pc = 0x22BBCCu;
            goto label_22bbcc;
        }
    }
    ctx->pc = 0x22BBC0u;
    // 0x22bbc0: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x22bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x22bbc4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BBC4u;
    {
        const bool branch_taken_0x22bbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBC4u;
        // 0x22bbc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbc4) {
            ctx->pc = 0x22BBECu;
            goto label_22bbec;
        }
    }
    ctx->pc = 0x22BBCCu;
label_22bbcc:
    // 0x22bbcc: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BBCCu;
    {
        const bool branch_taken_0x22bbcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bbcc) {
            ctx->pc = 0x22BBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BBCCu;
            // 0x22bbd0: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BBE8u;
            goto label_22bbe8;
        }
    }
    ctx->pc = 0x22BBD4u;
    // 0x22bbd4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22bbd8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22BBD8u;
    SET_GPR_U32(ctx, 31, 0x22BBE0u);
    ctx->pc = 0x22BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBD8u;
    // 0x22bbdc: 0x2484a208  addiu       $a0, $a0, -0x5DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22BBD8u, 0x22BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBE0u;
label_22bbe0:
    // 0x22bbe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22BBE0u;
    {
        const bool branch_taken_0x22bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBE0u;
        // 0x22bbe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbe0) {
            ctx->pc = 0x22BBECu;
            goto label_22bbec;
        }
    }
    ctx->pc = 0x22BBE8u;
label_22bbe8:
    // 0x22bbe8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22bbe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22bbec:
    // 0x22bbec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x22BBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBF0u;
        // 0x22bbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BBF8u;
}
