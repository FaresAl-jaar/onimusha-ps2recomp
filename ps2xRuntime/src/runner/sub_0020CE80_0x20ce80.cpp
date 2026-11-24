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

// Function: sub_0020CE80
// Address: 0x20ce80 - 0x20cf1c
void sub_0020CE80_0x20ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CE80_0x20ce80");
#endif

    switch (ctx->pc) {
        case 0x20ce9cu: goto label_20ce9c;
        case 0x20ceacu: goto label_20ceac;
        case 0x20cec8u: goto label_20cec8;
        case 0x20ced4u: goto label_20ced4;
        case 0x20cee0u: goto label_20cee0;
        case 0x20ceecu: goto label_20ceec;
        case 0x20cef4u: goto label_20cef4;
        case 0x20cefcu: goto label_20cefc;
        case 0x20cf04u: goto label_20cf04;
        default: break;
    }

    ctx->pc = 0x20ce80u;

    // 0x20ce80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ce84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20ce88: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20ce8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20ce90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20ce94: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20CE94u;
    SET_GPR_U32(ctx, 31, 0x20CE9Cu);
    ctx->pc = 0x20CE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE94u;
    // 0x20ce98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20CE94u, 0x20CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE9Cu;
label_20ce9c:
    // 0x20ce9c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20CE9Cu;
    {
        const bool branch_taken_0x20ce9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE9Cu;
        // 0x20cea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce9c) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CEA4u;
    // 0x20cea4: 0xc0836c6  jal         func_20DB18
    ctx->pc = 0x20CEA4u;
    SET_GPR_U32(ctx, 31, 0x20CEACu);
    ctx->pc = 0x20DB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB18u, 0x20CEA4u, 0x20CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEACu;
label_20ceac:
    // 0x20ceac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ceb0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CEB0u;
    {
        const bool branch_taken_0x20ceb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEB0u;
        // 0x20ceb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ceb0) {
            ctx->pc = 0x20CEC0u;
            goto label_20cec0;
        }
    }
    ctx->pc = 0x20CEB8u;
    // 0x20ceb8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20CEB8u;
    {
        const bool branch_taken_0x20ceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEB8u;
        // 0x20cebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ceb8) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CEC0u;
label_20cec0:
    // 0x20cec0: 0xc0833c8  jal         func_20CF20
    ctx->pc = 0x20CEC0u;
    SET_GPR_U32(ctx, 31, 0x20CEC8u);
    ctx->pc = 0x20CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CF20u, 0x20CEC0u, 0x20CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEC8u;
label_20cec8:
    // 0x20cec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20cec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cecc: 0xc0833ca  jal         func_20CF28
    ctx->pc = 0x20CECCu;
    SET_GPR_U32(ctx, 31, 0x20CED4u);
    ctx->pc = 0x20CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CECCu;
    // 0x20ced0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CF28u, 0x20CECCu, 0x20CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CED4u;
label_20ced4:
    // 0x20ced4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ced8: 0xc0835e0  jal         func_20D780
    ctx->pc = 0x20CED8u;
    SET_GPR_U32(ctx, 31, 0x20CEE0u);
    ctx->pc = 0x20CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CED8u;
    // 0x20cedc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D780u, 0x20CED8u, 0x20CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEE0u;
label_20cee0:
    // 0x20cee0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cee4: 0xc083614  jal         func_20D850
    ctx->pc = 0x20CEE4u;
    SET_GPR_U32(ctx, 31, 0x20CEECu);
    ctx->pc = 0x20CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEE4u;
    // 0x20cee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D850u, 0x20CEE4u, 0x20CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEECu;
label_20ceec:
    // 0x20ceec: 0xc0836d4  jal         func_20DB50
    ctx->pc = 0x20CEECu;
    SET_GPR_U32(ctx, 31, 0x20CEF4u);
    ctx->pc = 0x20CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEECu;
    // 0x20cef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB50u, 0x20CEECu, 0x20CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEF4u;
label_20cef4:
    // 0x20cef4: 0xc08370c  jal         func_20DC30
    ctx->pc = 0x20CEF4u;
    SET_GPR_U32(ctx, 31, 0x20CEFCu);
    ctx->pc = 0x20CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEF4u;
    // 0x20cef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC30u, 0x20CEF4u, 0x20CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEFCu;
label_20cefc:
    // 0x20cefc: 0xc083376  jal         func_20CDD8
    ctx->pc = 0x20CEFCu;
    SET_GPR_U32(ctx, 31, 0x20CF04u);
    ctx->pc = 0x20CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEFCu;
    // 0x20cf00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CDD8u, 0x20CEFCu, 0x20CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF04u;
label_20cf04:
    // 0x20cf04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20cf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20cf08:
    // 0x20cf08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20cf08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cf0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20cf0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20cf10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x20CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF14u;
        // 0x20cf18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CF1Cu;
}
