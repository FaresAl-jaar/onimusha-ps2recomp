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

// Function: sub_00350F90
// Address: 0x350f90 - 0x35105c
void sub_00350F90_0x350f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350F90_0x350f90");
#endif

    switch (ctx->pc) {
        case 0x350fc0u: goto label_350fc0;
        case 0x350fccu: goto label_350fcc;
        case 0x350fd8u: goto label_350fd8;
        case 0x351008u: goto label_351008;
        case 0x351018u: goto label_351018;
        case 0x351020u: goto label_351020;
        case 0x35102cu: goto label_35102c;
        case 0x351034u: goto label_351034;
        case 0x351044u: goto label_351044;
        default: break;
    }

    ctx->pc = 0x350f90u;

    // 0x350f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x350f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x350f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350fa0: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x350fa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x350fa4: 0x80850018  lb          $a1, 0x18($a0)
    ctx->pc = 0x350fa4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x350fa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x350fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x350fac: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x350facu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350fb0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x350FB0u;
    {
        const bool branch_taken_0x350fb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x350FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FB0u;
        // 0x350fb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350fb0) {
            ctx->pc = 0x351010u;
            goto label_351010;
        }
    }
    ctx->pc = 0x350FB8u;
    // 0x350fb8: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x350FB8u;
    SET_GPR_U32(ctx, 31, 0x350FC0u);
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x350FB8u, 0x350FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FC0u;
label_350fc0:
    // 0x350fc0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x350fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x350fc4: 0xc0d46cc  jal         func_351B30
    ctx->pc = 0x350FC4u;
    SET_GPR_U32(ctx, 31, 0x350FCCu);
    ctx->pc = 0x350FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350FC4u;
    // 0x350fc8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B30u, 0x350FC4u, 0x350FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FCCu;
label_350fcc:
    // 0x350fcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x350fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x350fd0: 0xc0d46c8  jal         func_351B20
    ctx->pc = 0x350FD0u;
    SET_GPR_U32(ctx, 31, 0x350FD8u);
    ctx->pc = 0x350FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350FD0u;
    // 0x350fd4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B20u, 0x350FD0u, 0x350FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FD8u;
label_350fd8:
    // 0x350fd8: 0x82020018  lb          $v0, 0x18($s0)
    ctx->pc = 0x350fd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x350fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x350fe0: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x350fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x350fe4: 0x82030014  lb          $v1, 0x14($s0)
    ctx->pc = 0x350fe4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x350fe8: 0x82020016  lb          $v0, 0x16($s0)
    ctx->pc = 0x350fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x350fec: 0x82040018  lb          $a0, 0x18($s0)
    ctx->pc = 0x350fecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x350ff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x350ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x350ff4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x350ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350ff8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350FF8u;
    {
        const bool branch_taken_0x350ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FF8u;
        // 0x350ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ff8) {
            ctx->pc = 0x351008u;
            goto label_351008;
        }
    }
    ctx->pc = 0x351000u;
    // 0x351000: 0xc0d4524  jal         func_351490
    ctx->pc = 0x351000u;
    SET_GPR_U32(ctx, 31, 0x351008u);
    ctx->pc = 0x351490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351490u, 0x351000u, 0x351008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351008u;
label_351008:
    // 0x351008: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x351008u;
    {
        const bool branch_taken_0x351008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351008u;
        // 0x35100c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351008) {
            ctx->pc = 0x351048u;
            goto label_351048;
        }
    }
    ctx->pc = 0x351010u;
label_351010:
    // 0x351010: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x351010u;
    SET_GPR_U32(ctx, 31, 0x351018u);
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x351010u, 0x351018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351018u;
label_351018:
    // 0x351018: 0xc0d46cc  jal         func_351B30
    ctx->pc = 0x351018u;
    SET_GPR_U32(ctx, 31, 0x351020u);
    ctx->pc = 0x35101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351018u;
    // 0x35101c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B30u, 0x351018u, 0x351020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351020u;
label_351020:
    // 0x351020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351024: 0xc0d4388  jal         func_350E20
    ctx->pc = 0x351024u;
    SET_GPR_U32(ctx, 31, 0x35102Cu);
    ctx->pc = 0x351028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351024u;
    // 0x351028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E20u, 0x351024u, 0x35102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35102Cu;
label_35102c:
    // 0x35102c: 0xc0d46c8  jal         func_351B20
    ctx->pc = 0x35102Cu;
    SET_GPR_U32(ctx, 31, 0x351034u);
    ctx->pc = 0x351030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35102Cu;
    // 0x351030: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B20u, 0x35102Cu, 0x351034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351034u;
label_351034:
    // 0x351034: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x351034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x351038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35103c: 0xc0d4548  jal         func_351520
    ctx->pc = 0x35103Cu;
    SET_GPR_U32(ctx, 31, 0x351044u);
    ctx->pc = 0x351040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35103Cu;
    // 0x351040: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351520u, 0x35103Cu, 0x351044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351044u;
label_351044:
    // 0x351044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351048:
    // 0x351048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x351048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35104c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35104cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351054: 0x3e00008  jr          $ra
    ctx->pc = 0x351054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351054u;
        // 0x351058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35105Cu;
}
