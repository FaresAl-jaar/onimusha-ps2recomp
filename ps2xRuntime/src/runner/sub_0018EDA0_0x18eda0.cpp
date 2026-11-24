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

// Function: sub_0018EDA0
// Address: 0x18eda0 - 0x18ee2c
void sub_0018EDA0_0x18eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EDA0_0x18eda0");
#endif

    switch (ctx->pc) {
        case 0x18edc8u: goto label_18edc8;
        case 0x18edd8u: goto label_18edd8;
        case 0x18ee1cu: goto label_18ee1c;
        default: break;
    }

    ctx->pc = 0x18eda0u;

    // 0x18eda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18eda4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x18eda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x18eda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18edac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18edacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18edb0: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x18edb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x18edb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18edb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18edb8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x18edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x18edbc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x18edbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x18edc0: 0xa022feea  sb          $v0, -0x116($at)
    ctx->pc = 0x18edc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x18edc4: 0x0  nop
    ctx->pc = 0x18edc4u;
    // NOP
label_18edc8:
    // 0x18edc8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18edcc: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x18edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x18edd0: 0xc04c918  jal         func_132460
    ctx->pc = 0x18EDD0u;
    SET_GPR_U32(ctx, 31, 0x18EDD8u);
    ctx->pc = 0x18EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EDD0u;
    // 0x18edd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x18EDD0u, 0x18EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EDD8u;
label_18edd8:
    // 0x18edd8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x18edd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x18eddc: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x18eddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x18ede0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x18ede0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18ede4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18EDE4u;
    {
        const bool branch_taken_0x18ede4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ede4) {
            ctx->pc = 0x18EDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18edc8;
        }
    }
    ctx->pc = 0x18EDECu;
    // 0x18edec: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x18edecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18edf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EDF0u;
    {
        const bool branch_taken_0x18edf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDF0u;
        // 0x18edf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edf0) {
            ctx->pc = 0x18EE00u;
            goto label_18ee00;
        }
    }
    ctx->pc = 0x18EDF8u;
    // 0x18edf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18EDF8u;
    {
        const bool branch_taken_0x18edf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDF8u;
        // 0x18edfc: 0xaf828b64  sw          $v0, -0x749C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edf8) {
            ctx->pc = 0x18EE08u;
            goto label_18ee08;
        }
    }
    ctx->pc = 0x18EE00u;
label_18ee00:
    // 0x18ee00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ee04: 0xaf828b64  sw          $v0, -0x749C($gp)
    ctx->pc = 0x18ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
label_18ee08:
    // 0x18ee08: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18ee0c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x18ee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x18ee10: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x18ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x18ee14: 0xc04c910  jal         func_132440
    ctx->pc = 0x18EE14u;
    SET_GPR_U32(ctx, 31, 0x18EE1Cu);
    ctx->pc = 0x18EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE14u;
    // 0x18ee18: 0x24a589a0  addiu       $a1, $a1, -0x7660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132440u, 0x18EE14u, 0x18EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE1Cu;
label_18ee1c:
    // 0x18ee1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ee1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ee20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ee20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ee24: 0x3e00008  jr          $ra
    ctx->pc = 0x18EE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE24u;
        // 0x18ee28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EE2Cu;
}
