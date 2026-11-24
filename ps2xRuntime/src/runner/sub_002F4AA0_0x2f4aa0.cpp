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

// Function: sub_002F4AA0
// Address: 0x2f4aa0 - 0x2f4b50
void sub_002F4AA0_0x2f4aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4AA0_0x2f4aa0");
#endif

    ctx->pc = 0x2f4aa0u;

    // 0x2f4aa0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2f4aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f4aa4: 0x3c013b9a  lui         $at, 0x3B9A
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15258 << 16));
    // 0x2f4aa8: 0x3421ca00  ori         $at, $at, 0xCA00
    ctx->pc = 0x2f4aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51712);
    // 0x2f4aac: 0x8cc322cc  lw          $v1, 0x22CC($a2)
    ctx->pc = 0x2f4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8908)));
    // 0x2f4ab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f4ab4: 0xacc322cc  sw          $v1, 0x22CC($a2)
    ctx->pc = 0x2f4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8908), GPR_U32(ctx, 3));
    // 0x2f4ab8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f4ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f4abc: 0x246622cc  addiu       $a2, $v1, 0x22CC
    ctx->pc = 0x2f4abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8908));
    // 0x2f4ac0: 0x8c6322cc  lw          $v1, 0x22CC($v1)
    ctx->pc = 0x2f4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8908)));
    // 0x2f4ac4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x2f4ac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2f4ac8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4AC8u;
    {
        const bool branch_taken_0x2f4ac8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ac8) {
            ctx->pc = 0x2F4ADCu;
            goto label_2f4adc;
        }
    }
    ctx->pc = 0x2F4AD0u;
    // 0x2f4ad0: 0x3c033b9a  lui         $v1, 0x3B9A
    ctx->pc = 0x2f4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15258 << 16));
    // 0x2f4ad4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4AD4u;
    {
        const bool branch_taken_0x2f4ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AD4u;
        // 0x2f4ad8: 0x3463c9ff  ori         $v1, $v1, 0xC9FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51711);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ad4) {
            ctx->pc = 0x2F4AECu;
            goto label_2f4aec;
        }
    }
    ctx->pc = 0x2F4ADCu;
label_2f4adc:
    // 0x2f4adc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4ADCu;
    {
        const bool branch_taken_0x2f4adc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2f4adc) {
            ctx->pc = 0x2F4AECu;
            goto label_2f4aec;
        }
    }
    ctx->pc = 0x2F4AE4u;
    // 0x2f4ae4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4AE4u;
    {
        const bool branch_taken_0x2f4ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AE4u;
        // 0x2f4ae8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ae4) {
            ctx->pc = 0x2F4AECu;
            goto label_2f4aec;
        }
    }
    ctx->pc = 0x2F4AECu;
label_2f4aec:
    // 0x2f4aec: 0x18a00016  blez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F4AECu;
    {
        const bool branch_taken_0x2f4aec = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2F4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AECu;
        // 0x2f4af0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4aec) {
            ctx->pc = 0x2F4B48u;
            goto label_2f4b48;
        }
    }
    ctx->pc = 0x2F4AF4u;
    // 0x2f4af4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2f4af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f4af8: 0x3c013b9a  lui         $at, 0x3B9A
    ctx->pc = 0x2f4af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15258 << 16));
    // 0x2f4afc: 0x3421ca00  ori         $at, $at, 0xCA00
    ctx->pc = 0x2f4afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51712);
    // 0x2f4b00: 0x8cc322d0  lw          $v1, 0x22D0($a2)
    ctx->pc = 0x2f4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8912)));
    // 0x2f4b04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f4b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f4b08: 0xacc322d0  sw          $v1, 0x22D0($a2)
    ctx->pc = 0x2f4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8912), GPR_U32(ctx, 3));
    // 0x2f4b0c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f4b10: 0x246422d0  addiu       $a0, $v1, 0x22D0
    ctx->pc = 0x2f4b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8912));
    // 0x2f4b14: 0x8c6322d0  lw          $v1, 0x22D0($v1)
    ctx->pc = 0x2f4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8912)));
    // 0x2f4b18: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x2f4b18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2f4b1c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4B1Cu;
    {
        const bool branch_taken_0x2f4b1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b1c) {
            ctx->pc = 0x2F4B30u;
            goto label_2f4b30;
        }
    }
    ctx->pc = 0x2F4B24u;
    // 0x2f4b24: 0x3c033b9a  lui         $v1, 0x3B9A
    ctx->pc = 0x2f4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15258 << 16));
    // 0x2f4b28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4B28u;
    {
        const bool branch_taken_0x2f4b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B28u;
        // 0x2f4b2c: 0x3463c9ff  ori         $v1, $v1, 0xC9FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51711);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b28) {
            ctx->pc = 0x2F4B40u;
            goto label_2f4b40;
        }
    }
    ctx->pc = 0x2F4B30u;
label_2f4b30:
    // 0x2f4b30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4B30u;
    {
        const bool branch_taken_0x2f4b30 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2f4b30) {
            ctx->pc = 0x2F4B40u;
            goto label_2f4b40;
        }
    }
    ctx->pc = 0x2F4B38u;
    // 0x2f4b38: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2F4B38u;
    {
        const bool branch_taken_0x2f4b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B38u;
        // 0x2f4b3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b38) {
            ctx->pc = 0x2F4B40u;
            goto label_2f4b40;
        }
    }
    ctx->pc = 0x2F4B40u;
label_2f4b40:
    // 0x2f4b40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2f4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2f4b44: 0x0  nop
    ctx->pc = 0x2f4b44u;
    // NOP
label_2f4b48:
    // 0x2f4b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4B50u;
}
