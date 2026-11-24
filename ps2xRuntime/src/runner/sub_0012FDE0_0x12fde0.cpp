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

// Function: sub_0012FDE0
// Address: 0x12fde0 - 0x12fef0
void sub_0012FDE0_0x12fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FDE0_0x12fde0");
#endif

    switch (ctx->pc) {
        case 0x12fe10u: goto label_12fe10;
        default: break;
    }

    ctx->pc = 0x12fde0u;

    // 0x12fde0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FDE0u;
    {
        const bool branch_taken_0x12fde0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDE0u;
        // 0x12fde4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fde0) {
            ctx->pc = 0x12FDF0u;
            goto label_12fdf0;
        }
    }
    ctx->pc = 0x12FDE8u;
    // 0x12fde8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x12FDE8u;
    {
        const bool branch_taken_0x12fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fde8) {
            ctx->pc = 0x12FEE8u;
            goto label_12fee8;
        }
    }
    ctx->pc = 0x12FDF0u;
label_12fdf0:
    // 0x12fdf0: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x12fdf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12fdf4: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x12fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12fdf8: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x12fdf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x12fdfc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12fe00: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x12fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x12fe04: 0x11400036  beqz        $t2, . + 4 + (0x36 << 2)
    ctx->pc = 0x12FE04u;
    {
        const bool branch_taken_0x12fe04 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE04u;
        // 0x12fe08: 0x23902  srl         $a3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe04) {
            ctx->pc = 0x12FEE0u;
            goto label_12fee0;
        }
    }
    ctx->pc = 0x12FE0Cu;
    // 0x12fe0c: 0x0  nop
    ctx->pc = 0x12fe0cu;
    // NOP
label_12fe10:
    // 0x12fe10: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x12fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x12fe14: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x12fe14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12fe18: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12FE18u;
    {
        const bool branch_taken_0x12fe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE18u;
        // 0x12fe1c: 0x8d430010  lw          $v1, 0x10($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe18) {
            ctx->pc = 0x12FED0u;
            goto label_12fed0;
        }
    }
    ctx->pc = 0x12FE20u;
    // 0x12fe20: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x12fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x12fe24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x12fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12fe28: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x12fe2c: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x12fe2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12fe30: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x12fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12fe34: 0x63023  negu        $a2, $a2
    ctx->pc = 0x12fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x12fe38: 0xc01027  not         $v0, $a2
    ctx->pc = 0x12fe38u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x12fe3c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12fe40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fe44: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x12fe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x12fe48: 0xac49ffe0  sw          $t1, -0x20($v0)
    ctx->pc = 0x12fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 9));
    // 0x12fe4c: 0x2446ffe0  addiu       $a2, $v0, -0x20
    ctx->pc = 0x12fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x12fe50: 0xca1023  subu        $v0, $a2, $t2
    ctx->pc = 0x12fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x12fe54: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x12fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12fe58: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE58u;
    {
        const bool branch_taken_0x12fe58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE58u;
        // 0x12fe5c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe58) {
            ctx->pc = 0x12FE68u;
            goto label_12fe68;
        }
    }
    ctx->pc = 0x12FE60u;
    // 0x12fe60: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x12fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x12fe64: 0x0  nop
    ctx->pc = 0x12fe64u;
    // NOP
label_12fe68:
    // 0x12fe68: 0xacca0004  sw          $t2, 0x4($a2)
    ctx->pc = 0x12fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
    // 0x12fe6c: 0xacc70010  sw          $a3, 0x10($a2)
    ctx->pc = 0x12fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 7));
    // 0x12fe70: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x12fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
    // 0x12fe74: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x12fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x12fe78: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x12fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12fe7c: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x12fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x12fe80: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x12fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x12fe84: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x12fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x12fe88: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x12fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x12fe8c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x12fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x12fe90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FE90u;
    {
        const bool branch_taken_0x12fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE90u;
        // 0x12fe94: 0x8d430008  lw          $v1, 0x8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe90) {
            ctx->pc = 0x12FEB0u;
            goto label_12feb0;
        }
    }
    ctx->pc = 0x12FE98u;
    // 0x12fe98: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x12fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x12fe9c: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x12fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x12fea0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12FEA0u;
    {
        const bool branch_taken_0x12fea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEA0u;
        // 0x12fea4: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fea0) {
            ctx->pc = 0x12FEC8u;
            goto label_12fec8;
        }
    }
    ctx->pc = 0x12FEA8u;
    // 0x12fea8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FEA8u;
    {
        const bool branch_taken_0x12fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEA8u;
        // 0x12feac: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fea8) {
            ctx->pc = 0x12FEC8u;
            goto label_12fec8;
        }
    }
    ctx->pc = 0x12FEB0u;
label_12feb0:
    // 0x12feb0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x12feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x12feb4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x12feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x12feb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FEB8u;
    {
        const bool branch_taken_0x12feb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEB8u;
        // 0x12febc: 0xad030008  sw          $v1, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12feb8) {
            ctx->pc = 0x12FEC8u;
            goto label_12fec8;
        }
    }
    ctx->pc = 0x12FEC0u;
    // 0x12fec0: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x12fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x12fec4: 0x0  nop
    ctx->pc = 0x12fec4u;
    // NOP
label_12fec8:
    // 0x12fec8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FEC8u;
    {
        const bool branch_taken_0x12fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEC8u;
        // 0x12fecc: 0x24c20020  addiu       $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fec8) {
            ctx->pc = 0x12FEE8u;
            goto label_12fee8;
        }
    }
    ctx->pc = 0x12FED0u;
label_12fed0:
    // 0x12fed0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x12fed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fed4: 0x8d4a0008  lw          $t2, 0x8($t2)
    ctx->pc = 0x12fed4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x12fed8: 0x1540ffcd  bnez        $t2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x12FED8u;
    {
        const bool branch_taken_0x12fed8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fed8) {
            ctx->pc = 0x12FE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fe10;
        }
    }
    ctx->pc = 0x12FEE0u;
label_12fee0:
    // 0x12fee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12fee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fee4: 0x0  nop
    ctx->pc = 0x12fee4u;
    // NOP
label_12fee8:
    // 0x12fee8: 0x3e00008  jr          $ra
    ctx->pc = 0x12FEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FEF0u;
}
