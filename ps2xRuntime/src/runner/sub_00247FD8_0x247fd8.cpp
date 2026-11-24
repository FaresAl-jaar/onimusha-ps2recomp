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

// Function: sub_00247FD8
// Address: 0x247fd8 - 0x248060
void sub_00247FD8_0x247fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247FD8_0x247fd8");
#endif

    switch (ctx->pc) {
        case 0x247ffcu: goto label_247ffc;
        case 0x24801cu: goto label_24801c;
        case 0x248024u: goto label_248024;
        case 0x24802cu: goto label_24802c;
        case 0x248034u: goto label_248034;
        case 0x248040u: goto label_248040;
        default: break;
    }

    ctx->pc = 0x247fd8u;

    // 0x247fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x247fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x247fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fe0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x247fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x247fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fe8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x247fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x247fec: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x247FECu;
    {
        const bool branch_taken_0x247fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FECu;
        // 0x247ff0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fec) {
            ctx->pc = 0x24804Cu;
            goto label_24804c;
        }
    }
    ctx->pc = 0x247FF4u;
    // 0x247ff4: 0xc09246a  jal         func_2491A8
    ctx->pc = 0x247FF4u;
    SET_GPR_U32(ctx, 31, 0x247FFCu);
    ctx->pc = 0x247FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FF4u;
    // 0x247ff8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491A8u, 0x247FF4u, 0x247FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FFCu;
label_247ffc:
    // 0x247ffc: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x247ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x248000: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x248000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x248004: 0x24710a10  addiu       $s1, $v1, 0xA10
    ctx->pc = 0x248004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x248008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24800c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24800Cu;
    {
        const bool branch_taken_0x24800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24800Cu;
        // 0x248010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24800c) {
            ctx->pc = 0x248048u;
            goto label_248048;
        }
    }
    ctx->pc = 0x248014u;
    // 0x248014: 0xc09224e  jal         func_248938
    ctx->pc = 0x248014u;
    SET_GPR_U32(ctx, 31, 0x24801Cu);
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x248014u, 0x24801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24801Cu;
label_24801c:
    // 0x24801c: 0xc091a44  jal         func_246910
    ctx->pc = 0x24801Cu;
    SET_GPR_U32(ctx, 31, 0x248024u);
    ctx->pc = 0x248020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24801Cu;
    // 0x248020: 0x34048100  ori         $a0, $zero, 0x8100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24801Cu, 0x248024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248024u;
label_248024:
    // 0x248024: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x248024u;
    SET_GPR_U32(ctx, 31, 0x24802Cu);
    ctx->pc = 0x248028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248024u;
    // 0x248028: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x248024u, 0x24802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24802Cu;
label_24802c:
    // 0x24802c: 0xc091a44  jal         func_246910
    ctx->pc = 0x24802Cu;
    SET_GPR_U32(ctx, 31, 0x248034u);
    ctx->pc = 0x248030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24802Cu;
    // 0x248030: 0x34048101  ori         $a0, $zero, 0x8101 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24802Cu, 0x248034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248034u;
label_248034:
    // 0x248034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x248034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248038: 0xc091f58  jal         func_247D60
    ctx->pc = 0x248038u;
    SET_GPR_U32(ctx, 31, 0x248040u);
    ctx->pc = 0x24803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248038u;
    // 0x24803c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D60u, 0x248038u, 0x248040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248040u;
label_248040:
    // 0x248040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248040u;
    {
        const bool branch_taken_0x248040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248040u;
        // 0x248044: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248040) {
            ctx->pc = 0x248050u;
            goto label_248050;
        }
    }
    ctx->pc = 0x248048u;
label_248048:
    // 0x248048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24804c:
    // 0x24804c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24804cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_248050:
    // 0x248050: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x248050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x248054: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x248054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248058: 0x3e00008  jr          $ra
    ctx->pc = 0x248058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248058u;
        // 0x24805c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248060u;
}
