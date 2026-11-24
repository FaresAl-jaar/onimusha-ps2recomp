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

// Function: sub_0011EFA0
// Address: 0x11efa0 - 0x11f070
void sub_0011EFA0_0x11efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EFA0_0x11efa0");
#endif

    switch (ctx->pc) {
        case 0x11efa0u: goto label_11efa0;
        case 0x11efa4u: goto label_11efa4;
        case 0x11efa8u: goto label_11efa8;
        case 0x11efacu: goto label_11efac;
        case 0x11efb0u: goto label_11efb0;
        case 0x11efb4u: goto label_11efb4;
        case 0x11efb8u: goto label_11efb8;
        case 0x11efbcu: goto label_11efbc;
        case 0x11efc0u: goto label_11efc0;
        case 0x11efc4u: goto label_11efc4;
        case 0x11efc8u: goto label_11efc8;
        case 0x11efccu: goto label_11efcc;
        case 0x11efd0u: goto label_11efd0;
        case 0x11efd4u: goto label_11efd4;
        case 0x11efd8u: goto label_11efd8;
        case 0x11efdcu: goto label_11efdc;
        case 0x11efe0u: goto label_11efe0;
        case 0x11efe4u: goto label_11efe4;
        case 0x11efe8u: goto label_11efe8;
        case 0x11efecu: goto label_11efec;
        case 0x11eff0u: goto label_11eff0;
        case 0x11eff4u: goto label_11eff4;
        case 0x11eff8u: goto label_11eff8;
        case 0x11effcu: goto label_11effc;
        case 0x11f000u: goto label_11f000;
        case 0x11f004u: goto label_11f004;
        case 0x11f008u: goto label_11f008;
        case 0x11f00cu: goto label_11f00c;
        case 0x11f010u: goto label_11f010;
        case 0x11f014u: goto label_11f014;
        case 0x11f018u: goto label_11f018;
        case 0x11f01cu: goto label_11f01c;
        case 0x11f020u: goto label_11f020;
        case 0x11f024u: goto label_11f024;
        case 0x11f028u: goto label_11f028;
        case 0x11f02cu: goto label_11f02c;
        case 0x11f030u: goto label_11f030;
        case 0x11f034u: goto label_11f034;
        case 0x11f038u: goto label_11f038;
        case 0x11f03cu: goto label_11f03c;
        case 0x11f040u: goto label_11f040;
        case 0x11f044u: goto label_11f044;
        case 0x11f048u: goto label_11f048;
        case 0x11f04cu: goto label_11f04c;
        case 0x11f050u: goto label_11f050;
        case 0x11f054u: goto label_11f054;
        case 0x11f058u: goto label_11f058;
        case 0x11f05cu: goto label_11f05c;
        case 0x11f060u: goto label_11f060;
        case 0x11f064u: goto label_11f064;
        case 0x11f068u: goto label_11f068;
        case 0x11f06cu: goto label_11f06c;
        default: break;
    }

    ctx->pc = 0x11efa0u;

label_11efa0:
    // 0x11efa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_11efa4:
    // 0x11efa4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x11efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_11efa8:
    // 0x11efa8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_11efac:
    // 0x11efac: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x11efacu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
label_11efb0:
    // 0x11efb0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_11efb4:
    // 0x11efb4: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x11efb4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_11efb8:
    // 0x11efb8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_11efbc:
    // 0x11efbc: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x11efbcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
label_11efc0:
    // 0x11efc0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11efc4:
    // 0x11efc4: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x11efc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
label_11efc8:
    // 0x11efc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11efcc:
    // 0x11efcc: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x11efccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_11efd0:
    // 0x11efd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11efd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11efd4:
    // 0x11efd4: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x11efd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_11efd8:
    // 0x11efd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11efdc:
    // 0x11efdc: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x11efdcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
label_11efe0:
    // 0x11efe0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11efe4:
    // 0x11efe4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x11efe4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_11efe8:
    // 0x11efe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11efec:
    // 0x11efec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11efecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_11eff0:
    // 0x11eff0: 0xc043808  jal         func_10E020
label_11eff4:
    if (ctx->pc == 0x11EFF4u) {
        ctx->pc = 0x11EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF0u;
        // 0x11eff4: 0x8c4441a0  lw          $a0, 0x41A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EFF8u;
        goto label_11eff8;
    }
    ctx->pc = 0x11EFF0u;
    SET_GPR_U32(ctx, 31, 0x11EFF8u);
    ctx->pc = 0x11EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EFF0u;
    // 0x11eff4: 0x8c4441a0  lw          $a0, 0x41A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x11EFF0u, 0x11EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFF8u;
label_11eff8:
    // 0x11eff8: 0x8e8341e0  lw          $v1, 0x41E0($s4)
    ctx->pc = 0x11eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16864)));
label_11effc:
    // 0x11effc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f000:
    // 0x11f000: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_11f004:
    if (ctx->pc == 0x11F004u) {
        ctx->pc = 0x11F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F000u;
        // 0x11f004: 0x8ee24190  lw          $v0, 0x4190($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F008u;
        goto label_11f008;
    }
    ctx->pc = 0x11F000u;
    {
        const bool branch_taken_0x11f000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F000u;
        // 0x11f004: 0x8ee24190  lw          $v0, 0x4190($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f000) {
            ctx->pc = 0x11F024u;
            goto label_11f024;
        }
    }
    ctx->pc = 0x11F008u;
label_11f008:
    // 0x11f008: 0xae6041b4  sw          $zero, 0x41B4($s3)
    ctx->pc = 0x11f008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16820), GPR_U32(ctx, 0));
label_11f00c:
    // 0x11f00c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_11f010:
    // 0x11f010: 0xae8041e0  sw          $zero, 0x41E0($s4)
    ctx->pc = 0x11f010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16864), GPR_U32(ctx, 0));
label_11f014:
    // 0x11f014: 0xac404194  sw          $zero, 0x4194($v0)
    ctx->pc = 0x11f014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16788), GPR_U32(ctx, 0));
label_11f018:
    // 0x11f018: 0xc043788  jal         func_10DE20
label_11f01c:
    if (ctx->pc == 0x11F01Cu) {
        ctx->pc = 0x11F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F018u;
        // 0x11f01c: 0xafc04194  sw          $zero, 0x4194($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F020u;
        goto label_11f020;
    }
    ctx->pc = 0x11F018u;
    SET_GPR_U32(ctx, 31, 0x11F020u);
    ctx->pc = 0x11F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F018u;
    // 0x11f01c: 0xafc04194  sw          $zero, 0x4194($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 16788), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE20u, 0x11F018u, 0x11F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F020u;
label_11f020:
    // 0x11f020: 0x8ee24190  lw          $v0, 0x4190($s7)
    ctx->pc = 0x11f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16784)));
label_11f024:
    // 0x11f024: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11f028:
    if (ctx->pc == 0x11F028u) {
        ctx->pc = 0x11F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F024u;
        // 0x11f028: 0x26c436d0  addiu       $a0, $s6, 0x36D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F02Cu;
        goto label_11f02c;
    }
    ctx->pc = 0x11F024u;
    {
        const bool branch_taken_0x11f024 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F024u;
        // 0x11f028: 0x26c436d0  addiu       $a0, $s6, 0x36D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f024) {
            ctx->pc = 0x11F038u;
            goto label_11f038;
        }
    }
    ctx->pc = 0x11F02Cu;
label_11f02c:
    // 0x11f02c: 0x8e454180  lw          $a1, 0x4180($s2)
    ctx->pc = 0x11f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16768)));
label_11f030:
    // 0x11f030: 0xc044332  jal         func_110CC8
label_11f034:
    if (ctx->pc == 0x11F034u) {
        ctx->pc = 0x11F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F030u;
        // 0x11f034: 0x8e2641e4  lw          $a2, 0x41E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F038u;
        goto label_11f038;
    }
    ctx->pc = 0x11F030u;
    SET_GPR_U32(ctx, 31, 0x11F038u);
    ctx->pc = 0x11F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F030u;
    // 0x11f034: 0x8e2641e4  lw          $a2, 0x41E4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x11F030u, 0x11F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F038u;
label_11f038:
    // 0x11f038: 0x8e434180  lw          $v1, 0x4180($s2)
    ctx->pc = 0x11f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16768)));
label_11f03c:
    // 0x11f03c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_11f040:
    if (ctx->pc == 0x11F040u) {
        ctx->pc = 0x11F044u;
        goto label_11f044;
    }
    ctx->pc = 0x11F03Cu;
    {
        const bool branch_taken_0x11f03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f03c) {
            ctx->pc = 0x11F064u;
            goto label_11f064;
        }
    }
    ctx->pc = 0x11F044u;
label_11f044:
    // 0x11f044: 0x8e2241e4  lw          $v0, 0x41E4($s1)
    ctx->pc = 0x11f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16868)));
label_11f048:
    // 0x11f048: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11f04c:
    if (ctx->pc == 0x11F04Cu) {
        ctx->pc = 0x11F050u;
        goto label_11f050;
    }
    ctx->pc = 0x11F048u;
    {
        const bool branch_taken_0x11f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f048) {
            ctx->pc = 0x11F064u;
            goto label_11f064;
        }
    }
    ctx->pc = 0x11F050u;
label_11f050:
    // 0x11f050: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11f050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11f054:
    // 0x11f054: 0x8ebc4184  lw          $gp, 0x4184($s5)
    ctx->pc = 0x11f054u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16772)));
label_11f058:
    // 0x11f058: 0x60f809  jalr        $v1
label_11f05c:
    if (ctx->pc == 0x11F05Cu) {
        ctx->pc = 0x11F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F058u;
        // 0x11f05c: 0x8e2441e4  lw          $a0, 0x41E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F060u;
        goto label_11f060;
    }
    ctx->pc = 0x11F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F060u);
        ctx->pc = 0x11F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F058u;
        // 0x11f05c: 0x8e2441e4  lw          $a0, 0x41E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16868)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F058u, 0x11F060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F060u;
label_11f060:
    // 0x11f060: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11f060u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f064:
    // 0x11f064: 0xae6041b4  sw          $zero, 0x41B4($s3)
    ctx->pc = 0x11f064u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16820), GPR_U32(ctx, 0));
label_11f068:
    // 0x11f068: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_11f06c:
    if (ctx->pc == 0x11F06Cu) {
        ctx->pc = 0x11F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F068u;
        // 0x11f06c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F070u;
        goto label_fallthrough_0x11f068;
    }
    ctx->pc = 0x11F068u;
    {
        const bool branch_taken_0x11f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F068u;
        // 0x11f06c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f068) {
            ctx->pc = 0x11EFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eff0;
        }
    }
label_fallthrough_0x11f068:
    ctx->pc = 0x11F070u;
}
