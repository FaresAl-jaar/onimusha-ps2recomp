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

// Function: sub_00105E50
// Address: 0x105e50 - 0x105fd4
void sub_00105E50_0x105e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105E50_0x105e50");
#endif

    switch (ctx->pc) {
        case 0x105ee4u: goto label_105ee4;
        case 0x105ee8u: goto label_105ee8;
        default: break;
    }

    ctx->pc = 0x105e50u;

    // 0x105e50: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x105e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x105e54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x105e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105e58: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x105E58u;
    {
        const bool branch_taken_0x105e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x105e58) {
            ctx->pc = 0x105F70u;
            goto label_105f70;
        }
    }
    ctx->pc = 0x105E60u;
    // 0x105e60: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x105e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x105e64: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x105E64u;
    {
        const bool branch_taken_0x105e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105e64) {
            ctx->pc = 0x105E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E64u;
            // 0x105e68: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105EF8u;
            goto label_105ef8;
        }
    }
    ctx->pc = 0x105E6Cu;
    // 0x105e6c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E6Cu;
    {
        const bool branch_taken_0x105e6c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x105E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E6Cu;
        // 0x105e70: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e6c) {
            ctx->pc = 0x105E80u;
            goto label_105e80;
        }
    }
    ctx->pc = 0x105E74u;
    // 0x105e74: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x105e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x105e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105E78u;
    {
        const bool branch_taken_0x105e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E78u;
        // 0x105e7c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e78) {
            ctx->pc = 0x105E84u;
            goto label_105e84;
        }
    }
    ctx->pc = 0x105E80u;
label_105e80:
    // 0x105e80: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x105e80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_105e84:
    // 0x105e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105e88: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x105e8c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E8Cu;
    {
        const bool branch_taken_0x105e8c = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x105E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E8Cu;
        // 0x105e90: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e8c) {
            ctx->pc = 0x105EA0u;
            goto label_105ea0;
        }
    }
    ctx->pc = 0x105E94u;
    // 0x105e94: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x105e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x105e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105E98u;
    {
        const bool branch_taken_0x105e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E98u;
        // 0x105e9c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e98) {
            ctx->pc = 0x105EA4u;
            goto label_105ea4;
        }
    }
    ctx->pc = 0x105EA0u;
label_105ea0:
    // 0x105ea0: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x105ea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_105ea4:
    // 0x105ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105ea8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105eac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x105eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x105eb0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x105eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x105eb4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x105eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x105eb8: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x105EB8u;
    {
        const bool branch_taken_0x105eb8 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x105EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EB8u;
        // 0x105ebc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105eb8) {
            ctx->pc = 0x105EC4u;
            goto label_105ec4;
        }
    }
    ctx->pc = 0x105EC0u;
    // 0x105ec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105ec4:
    // 0x105ec4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105ec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105ec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105ecc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x105eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x105ed0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x105ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x105ed4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x105ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x105ed8: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x105ED8u;
    {
        const bool branch_taken_0x105ed8 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x105EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ED8u;
        // 0x105edc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ed8) {
            ctx->pc = 0x105EE4u;
            goto label_105ee4;
        }
    }
    ctx->pc = 0x105EE0u;
    // 0x105ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105ee4:
    // 0x105ee4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_105ee8:
    // 0x105ee8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x105ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x105eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x105EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EF0u;
        // 0x105ef4: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105EF8u;
label_105ef8:
    // 0x105ef8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x105ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x105efc: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x105EFCu;
    {
        const bool branch_taken_0x105efc = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x105F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EFCu;
        // 0x105f00: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105efc) {
            ctx->pc = 0x105F08u;
            goto label_105f08;
        }
    }
    ctx->pc = 0x105F04u;
    // 0x105f04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105f08:
    // 0x105f08: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105f08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105f10: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x105f14: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x105f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x105f18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x105f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x105f1c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x105F1Cu;
    {
        const bool branch_taken_0x105f1c = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x105F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F1Cu;
        // 0x105f20: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f1c) {
            ctx->pc = 0x105F28u;
            goto label_105f28;
        }
    }
    ctx->pc = 0x105F24u;
    // 0x105f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105f28:
    // 0x105f28: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105f28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105f30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105f34: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x105f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x105f38: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F38u;
    {
        const bool branch_taken_0x105f38 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x105F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F38u;
        // 0x105f3c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f38) {
            ctx->pc = 0x105F4Cu;
            goto label_105f4c;
        }
    }
    ctx->pc = 0x105F40u;
    // 0x105f40: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x105f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x105f44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105F44u;
    {
        const bool branch_taken_0x105f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F44u;
        // 0x105f48: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f44) {
            ctx->pc = 0x105F50u;
            goto label_105f50;
        }
    }
    ctx->pc = 0x105F4Cu;
label_105f4c:
    // 0x105f4c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x105f4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_105f50:
    // 0x105f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105f54: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x105f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x105f58: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105F58u;
    {
        const bool branch_taken_0x105f58 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x105F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F58u;
        // 0x105f5c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f58) {
            ctx->pc = 0x105F68u;
            goto label_105f68;
        }
    }
    ctx->pc = 0x105F60u;
    // 0x105f60: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x105F60u;
    {
        const bool branch_taken_0x105f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F60u;
        // 0x105f64: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f60) {
            ctx->pc = 0x105EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105ee4;
        }
    }
    ctx->pc = 0x105F68u;
label_105f68:
    // 0x105f68: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x105F68u;
    {
        const bool branch_taken_0x105f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F68u;
        // 0x105f6c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f68) {
            ctx->pc = 0x105EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105ee8;
        }
    }
    ctx->pc = 0x105F70u;
label_105f70:
    // 0x105f70: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F70u;
    {
        const bool branch_taken_0x105f70 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x105F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F70u;
        // 0x105f74: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f70) {
            ctx->pc = 0x105F84u;
            goto label_105f84;
        }
    }
    ctx->pc = 0x105F78u;
    // 0x105f78: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x105f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x105f7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105F7Cu;
    {
        const bool branch_taken_0x105f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F7Cu;
        // 0x105f80: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f7c) {
            ctx->pc = 0x105F88u;
            goto label_105f88;
        }
    }
    ctx->pc = 0x105F84u;
label_105f84:
    // 0x105f84: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x105f84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_105f88:
    // 0x105f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105f8c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x105f90: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F90u;
    {
        const bool branch_taken_0x105f90 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x105F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F90u;
        // 0x105f94: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f90) {
            ctx->pc = 0x105FA4u;
            goto label_105fa4;
        }
    }
    ctx->pc = 0x105F98u;
    // 0x105f98: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x105f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x105f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105F9Cu;
    {
        const bool branch_taken_0x105f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F9Cu;
        // 0x105fa0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f9c) {
            ctx->pc = 0x105FA8u;
            goto label_105fa8;
        }
    }
    ctx->pc = 0x105FA4u;
label_105fa4:
    // 0x105fa4: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x105fa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_105fa8:
    // 0x105fa8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x105fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x105fac: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x105facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x105fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105fb4: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x105fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x105fb8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105FB8u;
    {
        const bool branch_taken_0x105fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x105FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FB8u;
        // 0x105fbc: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fb8) {
            ctx->pc = 0x105FCCu;
            goto label_105fcc;
        }
    }
    ctx->pc = 0x105FC0u;
    // 0x105fc0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x105fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x105FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FC4u;
        // 0x105fc8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105FCCu;
label_105fcc:
    // 0x105fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x105FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FCCu;
        // 0x105fd0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105FD4u;
}
