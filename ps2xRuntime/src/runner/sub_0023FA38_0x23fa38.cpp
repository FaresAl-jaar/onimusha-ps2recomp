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

// Function: sub_0023FA38
// Address: 0x23fa38 - 0x23fb1c
void sub_0023FA38_0x23fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FA38_0x23fa38");
#endif

    switch (ctx->pc) {
        case 0x23fa94u: goto label_23fa94;
        default: break;
    }

    ctx->pc = 0x23fa38u;

    // 0x23fa38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23fa3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fa40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23fa40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23fa48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23fa48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23fa50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23fa54: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FA54u;
    {
        const bool branch_taken_0x23fa54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fa54) {
            ctx->pc = 0x23FA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FA54u;
            // 0x23fa58: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FA78u;
            goto label_23fa78;
        }
    }
    ctx->pc = 0x23FA5Cu;
    // 0x23fa5c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x23fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x23fa60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fa64: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23FA64u;
    {
        const bool branch_taken_0x23fa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23fa64) {
            ctx->pc = 0x23FA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FA64u;
            // 0x23fa68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FA70u;
            goto label_23fa70;
        }
    }
    ctx->pc = 0x23FA6Cu;
    // 0x23fa6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fa70:
    // 0x23fa70: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23fa74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23fa78:
    // 0x23fa78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fa7c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FA7Cu;
    {
        const bool branch_taken_0x23fa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23fa7c) {
            ctx->pc = 0x23FA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FA7Cu;
            // 0x23fa80: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FA98u;
            goto label_23fa98;
        }
    }
    ctx->pc = 0x23FA84u;
    // 0x23fa84: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23fa88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa8c: 0xc08fe86  jal         func_23FA18
    ctx->pc = 0x23FA8Cu;
    SET_GPR_U32(ctx, 31, 0x23FA94u);
    ctx->pc = 0x23FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA8Cu;
    // 0x23fa90: 0x26060018  addiu       $a2, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FA18u, 0x23FA8Cu, 0x23FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA94u;
label_23fa94:
    // 0x23fa94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23fa98:
    // 0x23fa98: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x23fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x23fa9c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x23faa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23faa4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23FAA4u;
    {
        const bool branch_taken_0x23faa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23faa4) {
            ctx->pc = 0x23FAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAA4u;
            // 0x23faa8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FAD8u;
            goto label_23fad8;
        }
    }
    ctx->pc = 0x23FAACu;
    // 0x23faac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23fab0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x23fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x23fab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23fab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fabc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23fac0: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x23fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x23fac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fac8: 0x8c63c658  lw          $v1, -0x39A8($v1)
    ctx->pc = 0x23fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952536)));
    // 0x23facc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23FACCu;
    {
        const bool branch_taken_0x23facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FACCu;
        // 0x23fad0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23facc) {
            ctx->pc = 0x23FADCu;
            goto label_23fadc;
        }
    }
    ctx->pc = 0x23FAD4u;
    // 0x23fad4: 0x0  nop
    ctx->pc = 0x23fad4u;
    // NOP
label_23fad8:
    // 0x23fad8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_23fadc:
    // 0x23fadc: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23FADCu;
    {
        const bool branch_taken_0x23fadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fadc) {
            ctx->pc = 0x23FAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FADCu;
            // 0x23fae0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB0Cu;
            goto label_23fb0c;
        }
    }
    ctx->pc = 0x23FAE4u;
    // 0x23fae4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23fae8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x23fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23faec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23faecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23faf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23faf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23faf8: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x23faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x23fafc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fb00: 0x8c63c4d0  lw          $v1, -0x3B30($v1)
    ctx->pc = 0x23fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952144)));
    // 0x23fb04: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x23fb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fb0c:
    // 0x23fb0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23fb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fb10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fb14: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB14u;
        // 0x23fb18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB1Cu;
}
