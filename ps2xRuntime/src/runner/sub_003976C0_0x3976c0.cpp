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

// Function: sub_003976C0
// Address: 0x3976c0 - 0x397744
void sub_003976C0_0x3976c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003976C0_0x3976c0");
#endif

    switch (ctx->pc) {
        case 0x397708u: goto label_397708;
        case 0x397718u: goto label_397718;
        case 0x397728u: goto label_397728;
        case 0x397738u: goto label_397738;
        default: break;
    }

    ctx->pc = 0x3976c0u;

    // 0x3976c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3976c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3976c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3976c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3976c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3976c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3976cc: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x3976ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3976d0: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3976D0u;
    {
        const bool branch_taken_0x3976d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3976D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976D0u;
        // 0x3976d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3976d0) {
            ctx->pc = 0x397730u;
            goto label_397730;
        }
    }
    ctx->pc = 0x3976D8u;
    // 0x3976d8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3976D8u;
    {
        const bool branch_taken_0x3976d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3976d8) {
            ctx->pc = 0x397720u;
            goto label_397720;
        }
    }
    ctx->pc = 0x3976E0u;
    // 0x3976e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3976e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3976e4: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3976E4u;
    {
        const bool branch_taken_0x3976e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3976E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976E4u;
        // 0x3976e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3976e4) {
            ctx->pc = 0x397710u;
            goto label_397710;
        }
    }
    ctx->pc = 0x3976ECu;
    // 0x3976ec: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3976ECu;
    {
        const bool branch_taken_0x3976ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3976ec) {
            ctx->pc = 0x397700u;
            goto label_397700;
        }
    }
    ctx->pc = 0x3976F4u;
    // 0x3976f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3976F4u;
    {
        const bool branch_taken_0x3976f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3976f4) {
            ctx->pc = 0x397738u;
            goto label_397738;
        }
    }
    ctx->pc = 0x3976FCu;
    // 0x3976fc: 0x0  nop
    ctx->pc = 0x3976fcu;
    // NOP
label_397700:
    // 0x397700: 0xc0e5dfc  jal         func_3977F0
    ctx->pc = 0x397700u;
    SET_GPR_U32(ctx, 31, 0x397708u);
    ctx->pc = 0x3977F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3977F0u, 0x397700u, 0x397708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397708u;
label_397708:
    // 0x397708: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x397708u;
    {
        const bool branch_taken_0x397708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397708) {
            ctx->pc = 0x397738u;
            goto label_397738;
        }
    }
    ctx->pc = 0x397710u;
label_397710:
    // 0x397710: 0xc0e5f28  jal         func_397CA0
    ctx->pc = 0x397710u;
    SET_GPR_U32(ctx, 31, 0x397718u);
    ctx->pc = 0x397CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CA0u, 0x397710u, 0x397718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397718u;
label_397718:
    // 0x397718: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x397718u;
    {
        const bool branch_taken_0x397718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397718) {
            ctx->pc = 0x397738u;
            goto label_397738;
        }
    }
    ctx->pc = 0x397720u;
label_397720:
    // 0x397720: 0xc0e60d4  jal         func_398350
    ctx->pc = 0x397720u;
    SET_GPR_U32(ctx, 31, 0x397728u);
    ctx->pc = 0x398350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398350u, 0x397720u, 0x397728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397728u;
label_397728:
    // 0x397728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x397728u;
    {
        const bool branch_taken_0x397728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397728) {
            ctx->pc = 0x397738u;
            goto label_397738;
        }
    }
    ctx->pc = 0x397730u;
label_397730:
    // 0x397730: 0xc0e6224  jal         func_398890
    ctx->pc = 0x397730u;
    SET_GPR_U32(ctx, 31, 0x397738u);
    ctx->pc = 0x398890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398890u, 0x397730u, 0x397738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397738u;
label_397738:
    // 0x397738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39773c: 0x3e00008  jr          $ra
    ctx->pc = 0x39773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39773Cu;
        // 0x397740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39773Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397744u;
}
