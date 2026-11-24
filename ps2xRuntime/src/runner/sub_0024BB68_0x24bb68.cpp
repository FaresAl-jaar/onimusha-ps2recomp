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

// Function: sub_0024BB68
// Address: 0x24bb68 - 0x24bbfc
void sub_0024BB68_0x24bb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BB68_0x24bb68");
#endif

    switch (ctx->pc) {
        case 0x24bb80u: goto label_24bb80;
        case 0x24bba0u: goto label_24bba0;
        case 0x24bbdcu: goto label_24bbdc;
        default: break;
    }

    ctx->pc = 0x24bb68u;

    // 0x24bb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bb6c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BB6Cu;
    {
        const bool branch_taken_0x24bb6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB6Cu;
        // 0x24bb70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb6c) {
            ctx->pc = 0x24BB88u;
            goto label_24bb88;
        }
    }
    ctx->pc = 0x24BB74u;
    // 0x24bb74: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24bb78: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BB78u;
    SET_GPR_U32(ctx, 31, 0x24BB80u);
    ctx->pc = 0x24BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB78u;
    // 0x24bb7c: 0x2484d970  addiu       $a0, $a0, -0x2690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BB78u, 0x24BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB80u;
label_24bb80:
    // 0x24bb80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24BB80u;
    {
        const bool branch_taken_0x24bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB80u;
        // 0x24bb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb80) {
            ctx->pc = 0x24BBF0u;
            goto label_24bbf0;
        }
    }
    ctx->pc = 0x24BB88u;
label_24bb88:
    // 0x24bb88: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x24bb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x24bb8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24bb90: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x24BB90u;
    {
        const bool branch_taken_0x24bb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x24BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB90u;
        // 0x24bb94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb90) {
            ctx->pc = 0x24BBC4u;
            goto label_24bbc4;
        }
    }
    ctx->pc = 0x24BB98u;
    // 0x24bb98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24bb9c: 0x0  nop
    ctx->pc = 0x24bb9cu;
    // NOP
label_24bba0:
    // 0x24bba0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x24bba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24bba4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BBA4u;
    {
        const bool branch_taken_0x24bba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBA4u;
        // 0x24bba8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bba4) {
            ctx->pc = 0x24BBC4u;
            goto label_24bbc4;
        }
    }
    ctx->pc = 0x24BBACu;
    // 0x24bbac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24bbb0: 0x0  nop
    ctx->pc = 0x24bbb0u;
    // NOP
    // 0x24bbb4: 0x0  nop
    ctx->pc = 0x24bbb4u;
    // NOP
    // 0x24bbb8: 0x0  nop
    ctx->pc = 0x24bbb8u;
    // NOP
    // 0x24bbbc: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24BBBCu;
    {
        const bool branch_taken_0x24bbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24bbbc) {
            ctx->pc = 0x24BBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BBBCu;
            // 0x24bbc0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bba0;
        }
    }
    ctx->pc = 0x24BBC4u;
label_24bbc4:
    // 0x24bbc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24bbc8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BBC8u;
    {
        const bool branch_taken_0x24bbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bbc8) {
            ctx->pc = 0x24BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BBC8u;
            // 0x24bbcc: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BBE8u;
            goto label_24bbe8;
        }
    }
    ctx->pc = 0x24BBD0u;
    // 0x24bbd0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24bbd4: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BBD4u;
    SET_GPR_U32(ctx, 31, 0x24BBDCu);
    ctx->pc = 0x24BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBD4u;
    // 0x24bbd8: 0x2484d9a0  addiu       $a0, $a0, -0x2660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BBD4u, 0x24BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBDCu;
label_24bbdc:
    // 0x24bbdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24BBDCu;
    {
        const bool branch_taken_0x24bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBDCu;
        // 0x24bbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbdc) {
            ctx->pc = 0x24BBF0u;
            goto label_24bbf0;
        }
    }
    ctx->pc = 0x24BBE4u;
    // 0x24bbe4: 0x0  nop
    ctx->pc = 0x24bbe4u;
    // NOP
label_24bbe8:
    // 0x24bbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24bbec: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x24bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_24bbf0:
    // 0x24bbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x24BBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBF4u;
        // 0x24bbf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BBFCu;
}
