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

// Function: sub_0022C638
// Address: 0x22c638 - 0x22c720
void sub_0022C638_0x22c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C638_0x22c638");
#endif

    switch (ctx->pc) {
        case 0x22c65cu: goto label_22c65c;
        case 0x22c678u: goto label_22c678;
        case 0x22c690u: goto label_22c690;
        case 0x22c6a8u: goto label_22c6a8;
        case 0x22c6c0u: goto label_22c6c0;
        case 0x22c6d8u: goto label_22c6d8;
        case 0x22c6f0u: goto label_22c6f0;
        default: break;
    }

    ctx->pc = 0x22c638u;

    // 0x22c638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c644: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22c648: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x22c648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x22c64c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C64Cu;
    {
        const bool branch_taken_0x22c64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c64c) {
            ctx->pc = 0x22C650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C64Cu;
            // 0x22c650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C668u;
            goto label_22c668;
        }
    }
    ctx->pc = 0x22C654u;
    // 0x22c654: 0xc08b13a  jal         func_22C4E8
    ctx->pc = 0x22C654u;
    SET_GPR_U32(ctx, 31, 0x22C65Cu);
    ctx->pc = 0x22C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C4E8u, 0x22C654u, 0x22C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C65Cu;
label_22c65c:
    // 0x22c65c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x22C65Cu;
    {
        const bool branch_taken_0x22c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C65Cu;
        // 0x22c660: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c65c) {
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C664u;
    // 0x22c664: 0x0  nop
    ctx->pc = 0x22c664u;
    // NOP
label_22c668:
    // 0x22c668: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C668u;
    {
        const bool branch_taken_0x22c668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c668) {
            ctx->pc = 0x22C66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C668u;
            // 0x22c66c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C680u;
            goto label_22c680;
        }
    }
    ctx->pc = 0x22C670u;
    // 0x22c670: 0xc08a728  jal         func_229CA0
    ctx->pc = 0x22C670u;
    SET_GPR_U32(ctx, 31, 0x22C678u);
    ctx->pc = 0x229CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229CA0u, 0x22C670u, 0x22C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C678u;
label_22c678:
    // 0x22c678: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22C678u;
    {
        const bool branch_taken_0x22c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C678u;
        // 0x22c67c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c678) {
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C680u;
label_22c680:
    // 0x22c680: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C680u;
    {
        const bool branch_taken_0x22c680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c680) {
            ctx->pc = 0x22C684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C680u;
            // 0x22c684: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C698u;
            goto label_22c698;
        }
    }
    ctx->pc = 0x22C688u;
    // 0x22c688: 0xc08b280  jal         func_22CA00
    ctx->pc = 0x22C688u;
    SET_GPR_U32(ctx, 31, 0x22C690u);
    ctx->pc = 0x22CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CA00u, 0x22C688u, 0x22C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C690u;
label_22c690:
    // 0x22c690: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22C690u;
    {
        const bool branch_taken_0x22c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C690u;
        // 0x22c694: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c690) {
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C698u;
label_22c698:
    // 0x22c698: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C698u;
    {
        const bool branch_taken_0x22c698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c698) {
            ctx->pc = 0x22C69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C698u;
            // 0x22c69c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C6A0u;
    // 0x22c6a0: 0xc08a994  jal         func_22A650
    ctx->pc = 0x22C6A0u;
    SET_GPR_U32(ctx, 31, 0x22C6A8u);
    ctx->pc = 0x22A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A650u, 0x22C6A0u, 0x22C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6A8u;
label_22c6a8:
    // 0x22c6a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22C6A8u;
    {
        const bool branch_taken_0x22c6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6A8u;
        // 0x22c6ac: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6a8) {
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C6B0u;
label_22c6b0:
    // 0x22c6b0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C6B0u;
    {
        const bool branch_taken_0x22c6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c6b0) {
            ctx->pc = 0x22C6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6B0u;
            // 0x22c6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C6C8u;
            goto label_22c6c8;
        }
    }
    ctx->pc = 0x22C6B8u;
    // 0x22c6b8: 0xc08ac2e  jal         func_22B0B8
    ctx->pc = 0x22C6B8u;
    SET_GPR_U32(ctx, 31, 0x22C6C0u);
    ctx->pc = 0x22B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B0B8u, 0x22C6B8u, 0x22C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6C0u;
label_22c6c0:
    // 0x22c6c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22C6C0u;
    {
        const bool branch_taken_0x22c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6C0u;
        // 0x22c6c4: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6c0) {
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C6C8u;
label_22c6c8:
    // 0x22c6c8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C6C8u;
    {
        const bool branch_taken_0x22c6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c6c8) {
            ctx->pc = 0x22C6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6C8u;
            // 0x22c6cc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C6E0u;
            goto label_22c6e0;
        }
    }
    ctx->pc = 0x22C6D0u;
    // 0x22c6d0: 0xc08b4fa  jal         func_22D3E8
    ctx->pc = 0x22C6D0u;
    SET_GPR_U32(ctx, 31, 0x22C6D8u);
    ctx->pc = 0x22D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E8u, 0x22C6D0u, 0x22C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6D8u;
label_22c6d8:
    // 0x22c6d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22C6D8u;
    {
        const bool branch_taken_0x22c6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D8u;
        // 0x22c6dc: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6d8) {
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C6E0u;
label_22c6e0:
    // 0x22c6e0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C6E0u;
    {
        const bool branch_taken_0x22c6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c6e0) {
            ctx->pc = 0x22C6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6E0u;
            // 0x22c6e4: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C6F4u;
            goto label_22c6f4;
        }
    }
    ctx->pc = 0x22C6E8u;
    // 0x22c6e8: 0xc08a6a8  jal         func_229AA0
    ctx->pc = 0x22C6E8u;
    SET_GPR_U32(ctx, 31, 0x22C6F0u);
    ctx->pc = 0x229AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229AA0u, 0x22C6E8u, 0x22C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6F0u;
label_22c6f0:
    // 0x22c6f0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x22c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_22c6f4:
    // 0x22c6f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C6F4u;
    {
        const bool branch_taken_0x22c6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6F4u;
        // 0x22c6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6f4) {
            ctx->pc = 0x22C710u;
            goto label_22c710;
        }
    }
    ctx->pc = 0x22C6FCu;
    // 0x22c6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c700: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c704: 0x808b1c8  j           func_22C720
    ctx->pc = 0x22C704u;
    ctx->pc = 0x22C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C704u;
    // 0x22c708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C720u;
    sub_0022C720_0x22c720(rdram, ctx, runtime); return;
    ctx->pc = 0x22C70Cu;
    // 0x22c70c: 0x0  nop
    ctx->pc = 0x22c70cu;
    // NOP
label_22c710:
    // 0x22c710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c714: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c718: 0x3e00008  jr          $ra
    ctx->pc = 0x22C718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C718u;
        // 0x22c71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C720u;
}
