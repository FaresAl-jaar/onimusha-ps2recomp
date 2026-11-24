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

// Function: sub_001A4AF0
// Address: 0x1a4af0 - 0x1a4b60
void sub_001A4AF0_0x1a4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4AF0_0x1a4af0");
#endif

    switch (ctx->pc) {
        case 0x1a4b28u: goto label_1a4b28;
        default: break;
    }

    ctx->pc = 0x1a4af0u;

    // 0x1a4af0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4AF0u;
    {
        const bool branch_taken_0x1a4af0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AF0u;
        // 0x1a4af4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4af0) {
            ctx->pc = 0x1A4B10u;
            goto label_1a4b10;
        }
    }
    ctx->pc = 0x1A4AF8u;
    // 0x1a4af8: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x1a4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a4afc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4AFCu;
    {
        const bool branch_taken_0x1a4afc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AFCu;
        // 0x1a4b00: 0x31243  sra         $v0, $v1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4afc) {
            ctx->pc = 0x1A4B0Cu;
            goto label_1a4b0c;
        }
    }
    ctx->pc = 0x1A4B04u;
    // 0x1a4b04: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x1a4b08: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
label_1a4b0c:
    // 0x1a4b0c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1a4b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a4b10:
    // 0x1a4b10: 0x2ce10010  sltiu       $at, $a3, 0x10
    ctx->pc = 0x1a4b10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4b14: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4B14u;
    {
        const bool branch_taken_0x1a4b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B14u;
        // 0x1a4b18: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b14) {
            ctx->pc = 0x1A4B50u;
            goto label_1a4b50;
        }
    }
    ctx->pc = 0x1A4B1Cu;
    // 0x1a4b1c: 0x71240  sll         $v0, $a3, 9
    ctx->pc = 0x1a4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
    // 0x1a4b20: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1a4b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a4b24: 0x0  nop
    ctx->pc = 0x1a4b24u;
    // NOP
label_1a4b28:
    // 0x1a4b28: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1a4b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4b2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4B2Cu;
    {
        const bool branch_taken_0x1a4b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B2Cu;
        // 0x1a4b30: 0x71240  sll         $v0, $a3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b2c) {
            ctx->pc = 0x1A4B40u;
            goto label_1a4b40;
        }
    }
    ctx->pc = 0x1A4B34u;
    // 0x1a4b34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4B34u;
    {
        const bool branch_taken_0x1a4b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B34u;
        // 0x1a4b38: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b34) {
            ctx->pc = 0x1A4B58u;
            goto label_1a4b58;
        }
    }
    ctx->pc = 0x1A4B3Cu;
    // 0x1a4b3c: 0x0  nop
    ctx->pc = 0x1a4b3cu;
    // NOP
label_1a4b40:
    // 0x1a4b40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a4b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a4b44: 0x2ce20010  sltiu       $v0, $a3, 0x10
    ctx->pc = 0x1a4b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4b48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A4B48u;
    {
        const bool branch_taken_0x1a4b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B48u;
        // 0x1a4b4c: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b48) {
            ctx->pc = 0x1A4B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4b28;
        }
    }
    ctx->pc = 0x1A4B50u;
label_1a4b50:
    // 0x1a4b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b54: 0x0  nop
    ctx->pc = 0x1a4b54u;
    // NOP
label_1a4b58:
    // 0x1a4b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B60u;
}
