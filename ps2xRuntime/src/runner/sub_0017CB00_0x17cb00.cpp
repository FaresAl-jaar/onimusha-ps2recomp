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

// Function: sub_0017CB00
// Address: 0x17cb00 - 0x17cb7c
void sub_0017CB00_0x17cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CB00_0x17cb00");
#endif

    switch (ctx->pc) {
        case 0x17cb6cu: goto label_17cb6c;
        default: break;
    }

    ctx->pc = 0x17cb00u;

    // 0x17cb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cb04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cb08: 0x9083007c  lbu         $v1, 0x7C($a0)
    ctx->pc = 0x17cb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x17cb0c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x17CB0Cu;
    {
        const bool branch_taken_0x17cb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB0Cu;
        // 0x17cb10: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb0c) {
            ctx->pc = 0x17CB70u;
            goto label_17cb70;
        }
    }
    ctx->pc = 0x17CB14u;
    // 0x17cb14: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x17cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954720)));
    // 0x17cb18: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x17cb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x17cb1c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17CB1Cu;
    {
        const bool branch_taken_0x17cb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cb1c) {
            ctx->pc = 0x17CB70u;
            goto label_17cb70;
        }
    }
    ctx->pc = 0x17CB24u;
    // 0x17cb24: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x17cb24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x17cb28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CB28u;
    {
        const bool branch_taken_0x17cb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cb28) {
            ctx->pc = 0x17CB40u;
            goto label_17cb40;
        }
    }
    ctx->pc = 0x17CB30u;
    // 0x17cb30: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x17cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x17cb34: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x17cb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17cb38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17CB38u;
    {
        const bool branch_taken_0x17cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB38u;
        // 0x17cb3c: 0xac830074  sw          $v1, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb38) {
            ctx->pc = 0x17CB70u;
            goto label_17cb70;
        }
    }
    ctx->pc = 0x17CB40u;
label_17cb40:
    // 0x17cb40: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17cb44: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x17cb44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17cb48: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x17cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x17cb4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17cb50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cb54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17cb58: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17cb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17cb5c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17cb60: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x17cb60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x17cb64: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x17CB64u;
    SET_GPR_U32(ctx, 31, 0x17CB6Cu);
    ctx->pc = 0x17CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB64u;
    // 0x17cb68: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x17CB64u, 0x17CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB6Cu;
label_17cb6c:
    // 0x17cb6c: 0x0  nop
    ctx->pc = 0x17cb6cu;
    // NOP
label_17cb70:
    // 0x17cb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb74: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB74u;
        // 0x17cb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB7Cu;
}
