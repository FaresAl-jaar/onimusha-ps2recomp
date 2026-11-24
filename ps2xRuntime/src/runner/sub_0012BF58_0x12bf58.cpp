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

// Function: sub_0012BF58
// Address: 0x12bf58 - 0x12c044
void sub_0012BF58_0x12bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BF58_0x12bf58");
#endif

    switch (ctx->pc) {
        case 0x12bf74u: goto label_12bf74;
        case 0x12bf7cu: goto label_12bf7c;
        case 0x12bfb4u: goto label_12bfb4;
        case 0x12bfc0u: goto label_12bfc0;
        case 0x12bfe4u: goto label_12bfe4;
        case 0x12c018u: goto label_12c018;
        default: break;
    }

    ctx->pc = 0x12bf58u;

    // 0x12bf58: 0x80ad0000  lb          $t5, 0x0($a1)
    ctx->pc = 0x12bf58u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12bf5c: 0x240f005e  addiu       $t7, $zero, 0x5E
    ctx->pc = 0x12bf5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x12bf60: 0x15af0036  bne         $t5, $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x12BF60u;
    {
        const bool branch_taken_0x12bf60 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x12BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF60u;
        // 0x12bf64: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf60) {
            ctx->pc = 0x12C03Cu;
            goto label_12c03c;
        }
    }
    ctx->pc = 0x12BF68u;
    // 0x12bf68: 0x80ad0000  lb          $t5, 0x0($a1)
    ctx->pc = 0x12bf68u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12bf6c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bf70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12bf74:
    // 0x12bf74: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12bf74u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf78: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_12bf7c:
    // 0x12bf7c: 0xa1eb0000  sb          $t3, 0x0($t7)
    ctx->pc = 0x12bf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x12bf80: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12bf80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12bf84: 0x29cf0100  slti        $t7, $t6, 0x100
    ctx->pc = 0x12bf84u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x12bf88: 0x0  nop
    ctx->pc = 0x12bf88u;
    // NOP
    // 0x12bf8c: 0x0  nop
    ctx->pc = 0x12bf8cu;
    // NOP
    // 0x12bf90: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12BF90u;
    {
        const bool branch_taken_0x12bf90 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF90u;
        // 0x12bf94: 0x8e7821  addu        $t7, $a0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf90) {
            ctx->pc = 0x12BF7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bf7c;
        }
    }
    ctx->pc = 0x12BF98u;
    // 0x12bf98: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x12BF98u;
    {
        const bool branch_taken_0x12bf98 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF98u;
        // 0x12bf9c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf98) {
            ctx->pc = 0x12BFE4u;
            goto label_12bfe4;
        }
    }
    ctx->pc = 0x12BFA0u;
    // 0x12bfa0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12bfa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bfa4: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x12bfa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12bfa8: 0x1eb5823  subu        $t3, $t7, $t3
    ctx->pc = 0x12bfa8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x12bfac: 0x2408005d  addiu       $t0, $zero, 0x5D
    ctx->pc = 0x12bfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12bfb0: 0x240a005d  addiu       $t2, $zero, 0x5D
    ctx->pc = 0x12bfb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_12bfb4:
    // 0x12bfb4: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x12bfb8: 0xa1eb0000  sb          $t3, 0x0($t7)
    ctx->pc = 0x12bfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x12bfbc: 0x80ac0000  lb          $t4, 0x0($a1)
    ctx->pc = 0x12bfbcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12bfc0:
    // 0x12bfc0: 0x1189000e  beq         $t4, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x12BFC0u;
    {
        const bool branch_taken_0x12bfc0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 9));
        ctx->pc = 0x12BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFC0u;
        // 0x12bfc4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfc0) {
            ctx->pc = 0x12BFFCu;
            goto label_12bffc;
        }
    }
    ctx->pc = 0x12BFC8u;
    // 0x12bfc8: 0x298f002e  slti        $t7, $t4, 0x2E
    ctx->pc = 0x12bfc8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x12bfcc: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BFCCu;
    {
        const bool branch_taken_0x12bfcc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bfcc) {
            ctx->pc = 0x12BFECu;
            goto label_12bfec;
        }
    }
    ctx->pc = 0x12BFD4u;
    // 0x12bfd4: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BFD4u;
    {
        const bool branch_taken_0x12bfd4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFD4u;
        // 0x12bfd8: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfd4) {
            ctx->pc = 0x12BFE4u;
            goto label_12bfe4;
        }
    }
    ctx->pc = 0x12BFDCu;
    // 0x12bfdc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x12BFDCu;
    {
        const bool branch_taken_0x12bfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFDCu;
        // 0x12bfe0: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfdc) {
            ctx->pc = 0x12BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfb4;
        }
    }
    ctx->pc = 0x12BFE4u;
label_12bfe4:
    // 0x12bfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BFECu;
label_12bfec:
    // 0x12bfec: 0x1188fffd  beq         $t4, $t0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x12BFECu;
    {
        const bool branch_taken_0x12bfec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 8));
        ctx->pc = 0x12BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFECu;
        // 0x12bff0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfec) {
            ctx->pc = 0x12BFE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfe4;
        }
    }
    ctx->pc = 0x12BFF4u;
    // 0x12bff4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x12BFF4u;
    {
        const bool branch_taken_0x12bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFF4u;
        // 0x12bff8: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bff4) {
            ctx->pc = 0x12BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfb4;
        }
    }
    ctx->pc = 0x12BFFCu;
label_12bffc:
    // 0x12bffc: 0x80ac0000  lb          $t4, 0x0($a1)
    ctx->pc = 0x12bffcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12c000: 0x118a0003  beq         $t4, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C000u;
    {
        const bool branch_taken_0x12c000 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        ctx->pc = 0x12C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C000u;
        // 0x12c004: 0x18d782a  slt         $t7, $t4, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c000) {
            ctx->pc = 0x12C010u;
            goto label_12c010;
        }
    }
    ctx->pc = 0x12C008u;
    // 0x12c008: 0x51e00003  beql        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C008u;
    {
        const bool branch_taken_0x12c008 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c008) {
            ctx->pc = 0x12C00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C008u;
            // 0x12c00c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C018u;
            goto label_12c018;
        }
    }
    ctx->pc = 0x12C010u;
label_12c010:
    // 0x12c010: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x12C010u;
    {
        const bool branch_taken_0x12c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C010u;
        // 0x12c014: 0x240d002d  addiu       $t5, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c010) {
            ctx->pc = 0x12BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfb4;
        }
    }
    ctx->pc = 0x12C018u;
label_12c018:
    // 0x12c018: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12c018u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12c01c: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x12c01cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x12c020: 0x1ac702a  slt         $t6, $t5, $t4
    ctx->pc = 0x12c020u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x12c024: 0x0  nop
    ctx->pc = 0x12c024u;
    // NOP
    // 0x12c028: 0x0  nop
    ctx->pc = 0x12c028u;
    // NOP
    // 0x12c02c: 0x15c0fffa  bnez        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C02Cu;
    {
        const bool branch_taken_0x12c02c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C02Cu;
        // 0x12c030: 0xa1eb0000  sb          $t3, 0x0($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c02c) {
            ctx->pc = 0x12C018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c018;
        }
    }
    ctx->pc = 0x12C034u;
    // 0x12c034: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x12C034u;
    {
        const bool branch_taken_0x12c034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C034u;
        // 0x12c038: 0x80ac0000  lb          $t4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c034) {
            ctx->pc = 0x12BFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfc0;
        }
    }
    ctx->pc = 0x12C03Cu;
label_12c03c:
    // 0x12c03c: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x12C03Cu;
    {
        const bool branch_taken_0x12c03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C03Cu;
        // 0x12c040: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c03c) {
            ctx->pc = 0x12BF74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bf74;
        }
    }
    ctx->pc = 0x12C044u;
}
