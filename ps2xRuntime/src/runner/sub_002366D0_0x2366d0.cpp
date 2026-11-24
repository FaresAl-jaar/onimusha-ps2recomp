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

// Function: sub_002366D0
// Address: 0x2366d0 - 0x236774
void sub_002366D0_0x2366d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002366D0_0x2366d0");
#endif

    switch (ctx->pc) {
        case 0x2366f4u: goto label_2366f4;
        case 0x2366fcu: goto label_2366fc;
        case 0x236704u: goto label_236704;
        case 0x23671cu: goto label_23671c;
        case 0x236738u: goto label_236738;
        case 0x23674cu: goto label_23674c;
        case 0x236754u: goto label_236754;
        default: break;
    }

    ctx->pc = 0x2366d0u;

    // 0x2366d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2366d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2366d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2366d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2366d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2366d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2366dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2366e0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2366e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2366e4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2366E4u;
    {
        const bool branch_taken_0x2366e4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2366e4) {
            ctx->pc = 0x2366E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2366E4u;
            // 0x2366e8: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236708u;
            goto label_236708;
        }
    }
    ctx->pc = 0x2366ECu;
    // 0x2366ec: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x2366ECu;
    SET_GPR_U32(ctx, 31, 0x2366F4u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x2366ECu, 0x2366F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366F4u;
label_2366f4:
    // 0x2366f4: 0xc08d9de  jal         func_236778
    ctx->pc = 0x2366F4u;
    SET_GPR_U32(ctx, 31, 0x2366FCu);
    ctx->pc = 0x2366F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366F4u;
    // 0x2366f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236778u, 0x2366F4u, 0x2366FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366FCu;
label_2366fc:
    // 0x2366fc: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x2366FCu;
    SET_GPR_U32(ctx, 31, 0x236704u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x2366FCu, 0x236704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236704u;
label_236704:
    // 0x236704: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x236704u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_236708:
    // 0x236708: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23670c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23670Cu;
    {
        const bool branch_taken_0x23670c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23670c) {
            ctx->pc = 0x236710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23670Cu;
            // 0x236710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236728u;
            goto label_236728;
        }
    }
    ctx->pc = 0x236714u;
    // 0x236714: 0xc08d988  jal         func_236620
    ctx->pc = 0x236714u;
    SET_GPR_U32(ctx, 31, 0x23671Cu);
    ctx->pc = 0x236718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236714u;
    // 0x236718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236620u, 0x236714u, 0x23671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23671Cu;
label_23671c:
    // 0x23671c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23671Cu;
    {
        const bool branch_taken_0x23671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23671Cu;
        // 0x236720: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23671c) {
            ctx->pc = 0x23673Cu;
            goto label_23673c;
        }
    }
    ctx->pc = 0x236724u;
    // 0x236724: 0x0  nop
    ctx->pc = 0x236724u;
    // NOP
label_236728:
    // 0x236728: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236728u;
    {
        const bool branch_taken_0x236728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236728) {
            ctx->pc = 0x23672Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236728u;
            // 0x23672c: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23673Cu;
            goto label_23673c;
        }
    }
    ctx->pc = 0x236730u;
    // 0x236730: 0xc08d6fc  jal         func_235BF0
    ctx->pc = 0x236730u;
    SET_GPR_U32(ctx, 31, 0x236738u);
    ctx->pc = 0x236734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236730u;
    // 0x236734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BF0u, 0x236730u, 0x236738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236738u;
label_236738:
    // 0x236738: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x236738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_23673c:
    // 0x23673c: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23673Cu;
    {
        const bool branch_taken_0x23673c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x23673c) {
            ctx->pc = 0x236740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23673Cu;
            // 0x236740: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236768u;
            goto label_236768;
        }
    }
    ctx->pc = 0x236744u;
    // 0x236744: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x236744u;
    SET_GPR_U32(ctx, 31, 0x23674Cu);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x236744u, 0x23674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23674Cu;
label_23674c:
    // 0x23674c: 0xc08da32  jal         func_2368C8
    ctx->pc = 0x23674Cu;
    SET_GPR_U32(ctx, 31, 0x236754u);
    ctx->pc = 0x236750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23674Cu;
    // 0x236750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2368C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2368C8u, 0x23674Cu, 0x236754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236754u;
label_236754:
    // 0x236754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236758: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23675c: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x23675Cu;
    ctx->pc = 0x236760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23675Cu;
    // 0x236760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x236764u;
    // 0x236764: 0x0  nop
    ctx->pc = 0x236764u;
    // NOP
label_236768:
    // 0x236768: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23676c: 0x3e00008  jr          $ra
    ctx->pc = 0x23676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23676Cu;
        // 0x236770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236774u;
}
