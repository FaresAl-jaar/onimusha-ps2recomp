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

// Function: sub_0012FEF0
// Address: 0x12fef0 - 0x12ffe8
void sub_0012FEF0_0x12fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FEF0_0x12fef0");
#endif

    switch (ctx->pc) {
        case 0x12ff68u: goto label_12ff68;
        default: break;
    }

    ctx->pc = 0x12fef0u;

    // 0x12fef0: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x12FEF0u;
    {
        const bool branch_taken_0x12fef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fef0) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FEF8u;
    // 0x12fef8: 0x8ca7ffe4  lw          $a3, -0x1C($a1)
    ctx->pc = 0x12fef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967268)));
    // 0x12fefc: 0x10e00038  beqz        $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x12FEFCu;
    {
        const bool branch_taken_0x12fefc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEFCu;
        // 0x12ff00: 0x24a8ffe0  addiu       $t0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fefc) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FF04u;
    // 0x12ff04: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x12ff04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x12ff08: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x12ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x12ff0c: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x12ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x12ff10: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x12ff14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ff18: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x12ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x12ff1c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x12ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x12ff20: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x12ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ff24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FF24u;
    {
        const bool branch_taken_0x12ff24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ff24) {
            ctx->pc = 0x12FF38u;
            goto label_12ff38;
        }
    }
    ctx->pc = 0x12FF2Cu;
    // 0x12ff2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12FF2Cu;
    {
        const bool branch_taken_0x12ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF2Cu;
        // 0x12ff30: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff2c) {
            ctx->pc = 0x12FF40u;
            goto label_12ff40;
        }
    }
    ctx->pc = 0x12FF34u;
    // 0x12ff34: 0x0  nop
    ctx->pc = 0x12ff34u;
    // NOP
label_12ff38:
    // 0x12ff38: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12ff3c: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x12ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_12ff40:
    // 0x12ff40: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x12ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x12ff44: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x12ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12ff48: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x12FF48u;
    {
        const bool branch_taken_0x12ff48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF48u;
        // 0x12ff4c: 0x8d06000c  lw          $a2, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff48) {
            ctx->pc = 0x12FFC8u;
            goto label_12ffc8;
        }
    }
    ctx->pc = 0x12FF50u;
    // 0x12ff50: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x12FF50u;
    {
        const bool branch_taken_0x12ff50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ff50) {
            ctx->pc = 0x12FFB0u;
            goto label_12ffb0;
        }
    }
    ctx->pc = 0x12FF58u;
    // 0x12ff58: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x12ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x12ff5c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x12FF5Cu;
    {
        const bool branch_taken_0x12ff5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF5Cu;
        // 0x12ff60: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff5c) {
            ctx->pc = 0x12FF90u;
            goto label_12ff90;
        }
    }
    ctx->pc = 0x12FF64u;
    // 0x12ff64: 0x0  nop
    ctx->pc = 0x12ff64u;
    // NOP
label_12ff68:
    // 0x12ff68: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x12ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12ff6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FF6Cu;
    {
        const bool branch_taken_0x12ff6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff6c) {
            ctx->pc = 0x12FF80u;
            goto label_12ff80;
        }
    }
    ctx->pc = 0x12FF74u;
    // 0x12ff74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12FF74u;
    {
        const bool branch_taken_0x12ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF74u;
        // 0x12ff78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff74) {
            ctx->pc = 0x12FF90u;
            goto label_12ff90;
        }
    }
    ctx->pc = 0x12FF7Cu;
    // 0x12ff7c: 0x0  nop
    ctx->pc = 0x12ff7cu;
    // NOP
label_12ff80:
    // 0x12ff80: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x12ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12ff84: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12FF84u;
    {
        const bool branch_taken_0x12ff84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ff84) {
            ctx->pc = 0x12FF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ff68;
        }
    }
    ctx->pc = 0x12FF8Cu;
    // 0x12ff8c: 0x0  nop
    ctx->pc = 0x12ff8cu;
    // NOP
label_12ff90:
    // 0x12ff90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ff94: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x12ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x12ff98: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x12ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x12ff9c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12FF9Cu;
    {
        const bool branch_taken_0x12ff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF9Cu;
        // 0x12ffa0: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff9c) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FFA4u;
    // 0x12ffa4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12FFA4u;
    {
        const bool branch_taken_0x12ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFA4u;
        // 0x12ffa8: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffa4) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FFACu;
    // 0x12ffac: 0x0  nop
    ctx->pc = 0x12ffacu;
    // NOP
label_12ffb0:
    // 0x12ffb0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x12ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x12ffb4: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x12ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x12ffb8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12FFB8u;
    {
        const bool branch_taken_0x12ffb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFB8u;
        // 0x12ffbc: 0xace50008  sw          $a1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffb8) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FFC0u;
    // 0x12ffc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FFC0u;
    {
        const bool branch_taken_0x12ffc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFC0u;
        // 0x12ffc4: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffc0) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FFC8u;
label_12ffc8:
    // 0x12ffc8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FFC8u;
    {
        const bool branch_taken_0x12ffc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ffc8) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FFD0u;
    // 0x12ffd0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FFD0u;
    {
        const bool branch_taken_0x12ffd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFD0u;
        // 0x12ffd4: 0xace50008  sw          $a1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffd0) {
            ctx->pc = 0x12FFE0u;
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x12FFD8u;
    // 0x12ffd8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x12ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x12ffdc: 0x0  nop
    ctx->pc = 0x12ffdcu;
    // NOP
label_12ffe0:
    // 0x12ffe0: 0x3e00008  jr          $ra
    ctx->pc = 0x12FFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FFE8u;
}
