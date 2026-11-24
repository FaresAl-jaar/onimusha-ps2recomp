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

// Function: sub_00244880
// Address: 0x244880 - 0x2448d8
void sub_00244880_0x244880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244880_0x244880");
#endif

    switch (ctx->pc) {
        case 0x244880u: goto label_244880;
        case 0x244884u: goto label_244884;
        case 0x244888u: goto label_244888;
        case 0x24488cu: goto label_24488c;
        case 0x244890u: goto label_244890;
        case 0x244894u: goto label_244894;
        case 0x244898u: goto label_244898;
        case 0x24489cu: goto label_24489c;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        default: break;
    }

    ctx->pc = 0x244880u;

label_244880:
    // 0x244880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_244884:
    // 0x244884: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_244888:
    if (ctx->pc == 0x244888u) {
        ctx->pc = 0x244888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244884u;
        // 0x244888: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24488Cu;
        goto label_24488c;
    }
    ctx->pc = 0x244884u;
    {
        const bool branch_taken_0x244884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244884u;
        // 0x244888: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244884) {
            ctx->pc = 0x2448A0u;
            goto label_2448a0;
        }
    }
    ctx->pc = 0x24488Cu;
label_24488c:
    // 0x24488c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24488cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244890:
    // 0x244890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244894:
    // 0x244894: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x244894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
label_244898:
    // 0x244898: 0x8090d8a  j           func_243628
label_24489c:
    if (ctx->pc == 0x24489Cu) {
        ctx->pc = 0x24489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244898u;
        // 0x24489c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448A0u;
        goto label_2448a0;
    }
    ctx->pc = 0x244898u;
    ctx->pc = 0x24489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244898u;
    // 0x24489c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x2448A0u;
label_2448a0:
    // 0x2448a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2448a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2448a4:
    // 0x2448a4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2448a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2448a8:
    // 0x2448a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2448ac:
    if (ctx->pc == 0x2448ACu) {
        ctx->pc = 0x2448ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448A8u;
        // 0x2448ac: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448B0u;
        goto label_2448b0;
    }
    ctx->pc = 0x2448A8u;
    {
        const bool branch_taken_0x2448a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448a8) {
            ctx->pc = 0x2448ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2448A8u;
            // 0x2448ac: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2448C8u;
            goto label_2448c8;
        }
    }
    ctx->pc = 0x2448B0u;
label_2448b0:
    // 0x2448b0: 0x40f809  jalr        $v0
label_2448b4:
    if (ctx->pc == 0x2448B4u) {
        ctx->pc = 0x2448B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B0u;
        // 0x2448b4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448B8u;
        goto label_2448b8;
    }
    ctx->pc = 0x2448B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2448B8u);
        ctx->pc = 0x2448B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448B0u;
        // 0x2448b4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2448B0u, 0x2448B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2448B8u;
label_2448b8:
    // 0x2448b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2448b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2448bc:
    // 0x2448bc: 0x3e00008  jr          $ra
label_2448c0:
    if (ctx->pc == 0x2448C0u) {
        ctx->pc = 0x2448C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448BCu;
        // 0x2448c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448C4u;
        goto label_2448c4;
    }
    ctx->pc = 0x2448BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2448C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448BCu;
        // 0x2448c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2448BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2448C4u;
label_2448c4:
    // 0x2448c4: 0x0  nop
    ctx->pc = 0x2448c4u;
    // NOP
label_2448c8:
    // 0x2448c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2448c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2448cc:
    // 0x2448cc: 0x2484c0e0  addiu       $a0, $a0, -0x3F20
    ctx->pc = 0x2448ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951136));
label_2448d0:
    // 0x2448d0: 0x8090d8a  j           func_243628
label_2448d4:
    if (ctx->pc == 0x2448D4u) {
        ctx->pc = 0x2448D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448D0u;
        // 0x2448d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448D8u;
        goto label_fallthrough_0x2448d0;
    }
    ctx->pc = 0x2448D0u;
    ctx->pc = 0x2448D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448D0u;
    // 0x2448d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
label_fallthrough_0x2448d0:
    ctx->pc = 0x2448D8u;
}
