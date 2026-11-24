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

// Function: sub_0024FEE0
// Address: 0x24fee0 - 0x24ffa8
void sub_0024FEE0_0x24fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FEE0_0x24fee0");
#endif

    switch (ctx->pc) {
        case 0x24ff10u: goto label_24ff10;
        case 0x24ff94u: goto label_24ff94;
        default: break;
    }

    ctx->pc = 0x24fee0u;

    // 0x24fee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fee4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x24fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x24fee8: 0x24c2a898  addiu       $v0, $a2, -0x5768
    ctx->pc = 0x24fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944920));
    // 0x24feec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24feecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24fef4: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x24fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fef8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24fef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fefc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24fefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DA89Cu));
    // 0x24ff04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24FF04u;
    {
        const bool branch_taken_0x24ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF04u;
        // 0x24ff08: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff04) {
            ctx->pc = 0x24FF34u;
            goto label_24ff34;
        }
    }
    ctx->pc = 0x24FF0Cu;
    // 0x24ff0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_24ff10:
    // 0x24ff10: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x24ff10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x24ff14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24FF14u;
    {
        const bool branch_taken_0x24ff14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF14u;
        // 0x24ff18: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff14) {
            ctx->pc = 0x24FF34u;
            goto label_24ff34;
        }
    }
    ctx->pc = 0x24FF1Cu;
    // 0x24ff1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ff20: 0x0  nop
    ctx->pc = 0x24ff20u;
    // NOP
    // 0x24ff24: 0x0  nop
    ctx->pc = 0x24ff24u;
    // NOP
    // 0x24ff28: 0x0  nop
    ctx->pc = 0x24ff28u;
    // NOP
    // 0x24ff2c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24FF2Cu;
    {
        const bool branch_taken_0x24ff2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ff2c) {
            ctx->pc = 0x24FF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FF2Cu;
            // 0x24ff30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ff10;
        }
    }
    ctx->pc = 0x24FF34u;
label_24ff34:
    // 0x24ff34: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x24ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24ff38: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24FF38u;
    {
        const bool branch_taken_0x24ff38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF38u;
        // 0x24ff3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff38) {
            ctx->pc = 0x24FF98u;
            goto label_24ff98;
        }
    }
    ctx->pc = 0x24FF40u;
    // 0x24ff40: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x24ff40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x24ff44: 0x24c2a898  addiu       $v0, $a2, -0x5768
    ctx->pc = 0x24ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944920));
    // 0x24ff48: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24ff48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24ff4c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x24ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x24ff50: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24ff50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24ff54: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x24ff54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x24ff58: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x24ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x24ff5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24ff5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24ff60: 0x2463a860  addiu       $v1, $v1, -0x57A0
    ctx->pc = 0x24ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944864));
    // 0x24ff64: 0x24c6e998  addiu       $a2, $a2, -0x1668
    ctx->pc = 0x24ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961560));
    // 0x24ff68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ff6c: 0x24a5fd30  addiu       $a1, $a1, -0x2D0
    ctx->pc = 0x24ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966576));
    // 0x24ff70: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x24ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x24ff74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ff74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ff78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x24ff7c: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x24ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x24ff80: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x24ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x24ff84: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x24ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x24ff88: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x24ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x24ff8c: 0xc094074  jal         func_2501D0
    ctx->pc = 0x24FF8Cu;
    SET_GPR_U32(ctx, 31, 0x24FF94u);
    ctx->pc = 0x24FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF8Cu;
    // 0x24ff90: 0xae100020  sw          $s0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2501D0u, 0x24FF8Cu, 0x24FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF94u;
label_24ff94:
    // 0x24ff94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ff94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ff98:
    // 0x24ff98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ff98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ff9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24ff9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ffa0: 0x3e00008  jr          $ra
    ctx->pc = 0x24FFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA0u;
        // 0x24ffa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FFA8u;
}
