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

// Function: sub_0020AF40
// Address: 0x20af40 - 0x20af94
void sub_0020AF40_0x20af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AF40_0x20af40");
#endif

    switch (ctx->pc) {
        case 0x20af40u: goto label_20af40;
        case 0x20af44u: goto label_20af44;
        case 0x20af48u: goto label_20af48;
        case 0x20af4cu: goto label_20af4c;
        case 0x20af50u: goto label_20af50;
        case 0x20af54u: goto label_20af54;
        case 0x20af58u: goto label_20af58;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af60u: goto label_20af60;
        case 0x20af64u: goto label_20af64;
        case 0x20af68u: goto label_20af68;
        case 0x20af6cu: goto label_20af6c;
        case 0x20af70u: goto label_20af70;
        case 0x20af74u: goto label_20af74;
        case 0x20af78u: goto label_20af78;
        case 0x20af7cu: goto label_20af7c;
        case 0x20af80u: goto label_20af80;
        case 0x20af84u: goto label_20af84;
        case 0x20af88u: goto label_20af88;
        case 0x20af8cu: goto label_20af8c;
        case 0x20af90u: goto label_20af90;
        default: break;
    }

    ctx->pc = 0x20af40u;

label_20af40:
    // 0x20af40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20af44:
    // 0x20af44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20af48:
    // 0x20af48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20af4c:
    // 0x20af4c: 0xc082d4c  jal         func_20B530
label_20af50:
    if (ctx->pc == 0x20AF50u) {
        ctx->pc = 0x20AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF4Cu;
        // 0x20af50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF54u;
        goto label_20af54;
    }
    ctx->pc = 0x20AF4Cu;
    SET_GPR_U32(ctx, 31, 0x20AF54u);
    ctx->pc = 0x20AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF4Cu;
    // 0x20af50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20AF4Cu, 0x20AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF54u;
label_20af54:
    // 0x20af54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20af58:
    // 0x20af58: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_20af5c:
    if (ctx->pc == 0x20AF5Cu) {
        ctx->pc = 0x20AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF58u;
        // 0x20af5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF60u;
        goto label_20af60;
    }
    ctx->pc = 0x20AF58u;
    {
        const bool branch_taken_0x20af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20af58) {
            ctx->pc = 0x20AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF58u;
            // 0x20af5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF88u;
            goto label_20af88;
        }
    }
    ctx->pc = 0x20AF60u;
label_20af60:
    // 0x20af60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20af64:
    // 0x20af64: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20af68:
    // 0x20af68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20af6c:
    if (ctx->pc == 0x20AF6Cu) {
        ctx->pc = 0x20AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF68u;
        // 0x20af6c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF70u;
        goto label_20af70;
    }
    ctx->pc = 0x20AF68u;
    {
        const bool branch_taken_0x20af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF68u;
        // 0x20af6c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af68) {
            ctx->pc = 0x20AF84u;
            goto label_20af84;
        }
    }
    ctx->pc = 0x20AF70u;
label_20af70:
    // 0x20af70: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_20af74:
    // 0x20af74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20af78:
    if (ctx->pc == 0x20AF78u) {
        ctx->pc = 0x20AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF74u;
        // 0x20af78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF7Cu;
        goto label_20af7c;
    }
    ctx->pc = 0x20AF74u;
    {
        const bool branch_taken_0x20af74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af74) {
            ctx->pc = 0x20AF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF74u;
            // 0x20af78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF88u;
            goto label_20af88;
        }
    }
    ctx->pc = 0x20AF7Cu;
label_20af7c:
    // 0x20af7c: 0x40f809  jalr        $v0
label_20af80:
    if (ctx->pc == 0x20AF80u) {
        ctx->pc = 0x20AF84u;
        goto label_20af84;
    }
    ctx->pc = 0x20AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AF84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF7Cu, 0x20AF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF84u;
label_20af84:
    // 0x20af84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20af84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20af88:
    // 0x20af88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20af8c:
    // 0x20af8c: 0x3e00008  jr          $ra
label_20af90:
    if (ctx->pc == 0x20AF90u) {
        ctx->pc = 0x20AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF8Cu;
        // 0x20af90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF94u;
        goto label_fallthrough_0x20af8c;
    }
    ctx->pc = 0x20AF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF8Cu;
        // 0x20af90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20af8c:
    ctx->pc = 0x20AF94u;
}
