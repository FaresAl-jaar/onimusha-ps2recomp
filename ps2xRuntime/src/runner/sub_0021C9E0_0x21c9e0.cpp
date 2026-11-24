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

// Function: sub_0021C9E0
// Address: 0x21c9e0 - 0x21ca8c
void sub_0021C9E0_0x21c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C9E0_0x21c9e0");
#endif

    switch (ctx->pc) {
        case 0x21ca04u: goto label_21ca04;
        case 0x21ca1cu: goto label_21ca1c;
        case 0x21ca40u: goto label_21ca40;
        case 0x21ca50u: goto label_21ca50;
        case 0x21ca64u: goto label_21ca64;
        case 0x21ca70u: goto label_21ca70;
        default: break;
    }

    ctx->pc = 0x21c9e0u;

    // 0x21c9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c9e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21c9e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21c9f0: 0x26110950  addiu       $s1, $s0, 0x950
    ctx->pc = 0x21c9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x21c9f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c9f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21c9fc: 0xc084990  jal         func_212640
    ctx->pc = 0x21C9FCu;
    SET_GPR_U32(ctx, 31, 0x21CA04u);
    ctx->pc = 0x21CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9FCu;
    // 0x21ca00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21C9FCu, 0x21CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA04u;
label_21ca04:
    // 0x21ca04: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x21ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x21ca08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21ca08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca0c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21CA0Cu;
    {
        const bool branch_taken_0x21ca0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA0Cu;
        // 0x21ca10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca0c) {
            ctx->pc = 0x21CA48u;
            goto label_21ca48;
        }
    }
    ctx->pc = 0x21CA14u;
    // 0x21ca14: 0xc0872a4  jal         func_21CA90
    ctx->pc = 0x21CA14u;
    SET_GPR_U32(ctx, 31, 0x21CA1Cu);
    ctx->pc = 0x21CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA90u, 0x21CA14u, 0x21CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA1Cu;
label_21ca1c:
    // 0x21ca1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21CA1Cu;
    {
        const bool branch_taken_0x21ca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA1Cu;
        // 0x21ca20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca1c) {
            ctx->pc = 0x21CA68u;
            goto label_21ca68;
        }
    }
    ctx->pc = 0x21CA24u;
    // 0x21ca24: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x21ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x21ca28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ca2c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x21ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x21ca30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ca38: 0xc086fa6  jal         func_21BE98
    ctx->pc = 0x21CA38u;
    SET_GPR_U32(ctx, 31, 0x21CA40u);
    ctx->pc = 0x21CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA38u;
    // 0x21ca3c: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE98u, 0x21CA38u, 0x21CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA40u;
label_21ca40:
    // 0x21ca40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21CA40u;
    {
        const bool branch_taken_0x21ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA40u;
        // 0x21ca44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca40) {
            ctx->pc = 0x21CA68u;
            goto label_21ca68;
        }
    }
    ctx->pc = 0x21CA48u;
label_21ca48:
    // 0x21ca48: 0xc087304  jal         func_21CC10
    ctx->pc = 0x21CA48u;
    SET_GPR_U32(ctx, 31, 0x21CA50u);
    ctx->pc = 0x21CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA48u;
    // 0x21ca4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CC10u, 0x21CA48u, 0x21CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA50u;
label_21ca50:
    // 0x21ca50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CA54u;
    {
        const bool branch_taken_0x21ca54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA54u;
        // 0x21ca58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca54) {
            ctx->pc = 0x21CA68u;
            goto label_21ca68;
        }
    }
    ctx->pc = 0x21CA5Cu;
    // 0x21ca5c: 0xc086fa6  jal         func_21BE98
    ctx->pc = 0x21CA5Cu;
    SET_GPR_U32(ctx, 31, 0x21CA64u);
    ctx->pc = 0x21CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA5Cu;
    // 0x21ca60: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE98u, 0x21CA5Cu, 0x21CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA64u;
label_21ca64:
    // 0x21ca64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21ca64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ca68:
    // 0x21ca68: 0xc084996  jal         func_212658
    ctx->pc = 0x21CA68u;
    SET_GPR_U32(ctx, 31, 0x21CA70u);
    ctx->pc = 0x21CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA68u;
    // 0x21ca6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x21CA68u, 0x21CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA70u;
label_21ca70:
    // 0x21ca70: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21ca70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21ca74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ca78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21ca78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ca7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ca7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ca80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ca84: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA84u;
        // 0x21ca88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CA8Cu;
}
