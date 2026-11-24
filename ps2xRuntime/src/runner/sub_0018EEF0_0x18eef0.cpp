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

// Function: sub_0018EEF0
// Address: 0x18eef0 - 0x18f048
void sub_0018EEF0_0x18eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EEF0_0x18eef0");
#endif

    switch (ctx->pc) {
        case 0x18ef70u: goto label_18ef70;
        case 0x18ef90u: goto label_18ef90;
        case 0x18ef9cu: goto label_18ef9c;
        case 0x18eff4u: goto label_18eff4;
        case 0x18f00cu: goto label_18f00c;
        default: break;
    }

    ctx->pc = 0x18eef0u;

    // 0x18eef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18eef4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18eef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18eefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ef00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ef00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef04: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x18ef04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x18ef08: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x18EF08u;
    {
        const bool branch_taken_0x18ef08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF08u;
        // 0x18ef0c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef08) {
            ctx->pc = 0x18F000u;
            goto label_18f000;
        }
    }
    ctx->pc = 0x18EF10u;
    // 0x18ef10: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x18EF10u;
    {
        const bool branch_taken_0x18ef10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF10u;
        // 0x18ef14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef10) {
            ctx->pc = 0x18EFB8u;
            goto label_18efb8;
        }
    }
    ctx->pc = 0x18EF18u;
    // 0x18ef18: 0x1085001d  beq         $a0, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18EF18u;
    {
        const bool branch_taken_0x18ef18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x18ef18) {
            ctx->pc = 0x18EF90u;
            goto label_18ef90;
        }
    }
    ctx->pc = 0x18EF20u;
    // 0x18ef20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EF20u;
    {
        const bool branch_taken_0x18ef20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef20) {
            ctx->pc = 0x18EF30u;
            goto label_18ef30;
        }
    }
    ctx->pc = 0x18EF28u;
    // 0x18ef28: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x18EF28u;
    {
        const bool branch_taken_0x18ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef28) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18EF30u;
label_18ef30:
    // 0x18ef30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18ef30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18ef34: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x18ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x18ef38: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18ef38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x18ef3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EF3Cu;
    {
        const bool branch_taken_0x18ef3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ef3c) {
            ctx->pc = 0x18EF58u;
            goto label_18ef58;
        }
    }
    ctx->pc = 0x18EF44u;
    // 0x18ef44: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18ef44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ef48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ef4c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x18ef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ef50: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x18EF50u;
    {
        const bool branch_taken_0x18ef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF50u;
        // 0x18ef54: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef50) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18EF58u;
label_18ef58:
    // 0x18ef58: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x18ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18ef5c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x18ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x18ef60: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x18ef60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ef64: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x18ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x18ef68: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x18EF68u;
    SET_GPR_U32(ctx, 31, 0x18EF70u);
    ctx->pc = 0x18EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF68u;
    // 0x18ef6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x18EF68u, 0x18EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF70u;
label_18ef70:
    // 0x18ef70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x18ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x18ef74: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18ef78: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x18ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x18ef7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ef7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ef80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18ef84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef88: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x18EF88u;
    SET_GPR_U32(ctx, 31, 0x18EF90u);
    ctx->pc = 0x18EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF88u;
    // 0x18ef8c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x18EF88u, 0x18EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF90u;
label_18ef90:
    // 0x18ef90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x18ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x18ef94: 0xc063d48  jal         func_18F520
    ctx->pc = 0x18EF94u;
    SET_GPR_U32(ctx, 31, 0x18EF9Cu);
    ctx->pc = 0x18EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF94u;
    // 0x18ef98: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x18EF94u, 0x18EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF9Cu;
label_18ef9c:
    // 0x18ef9c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x18EF9Cu;
    {
        const bool branch_taken_0x18ef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ef9c) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18EFA4u;
    // 0x18efa4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x18efa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x18efa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18efac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18EFACu;
    {
        const bool branch_taken_0x18efac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFACu;
        // 0x18efb0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efac) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18EFB4u;
    // 0x18efb4: 0x0  nop
    ctx->pc = 0x18efb4u;
    // NOP
label_18efb8:
    // 0x18efb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18efbc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x18efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x18efc0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18efc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x18efc4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18EFC4u;
    {
        const bool branch_taken_0x18efc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18efc4) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18EFCCu;
    // 0x18efcc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x18efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18efd0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18efd4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x18efd8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x18efd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18efdc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x18efe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18efe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18efe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18efe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efec: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x18EFECu;
    SET_GPR_U32(ctx, 31, 0x18EFF4u);
    ctx->pc = 0x18EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EFECu;
    // 0x18eff0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x18EFECu, 0x18EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFF4u;
label_18eff4:
    // 0x18eff4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18EFF4u;
    {
        const bool branch_taken_0x18eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eff4) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18EFFCu;
    // 0x18effc: 0x0  nop
    ctx->pc = 0x18effcu;
    // NOP
label_18f000:
    // 0x18f000: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x18f004: 0xc063d48  jal         func_18F520
    ctx->pc = 0x18F004u;
    SET_GPR_U32(ctx, 31, 0x18F00Cu);
    ctx->pc = 0x18F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F004u;
    // 0x18f008: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x18F004u, 0x18F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F00Cu;
label_18f00c:
    // 0x18f00c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18F00Cu;
    {
        const bool branch_taken_0x18f00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F00Cu;
        // 0x18f010: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f00c) {
            ctx->pc = 0x18F038u;
            goto label_18f038;
        }
    }
    ctx->pc = 0x18F014u;
    // 0x18f014: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x18f014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967018)));
    // 0x18f018: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x18f018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x18f01c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x18f020: 0xa023feea  sb          $v1, -0x116($at)
    ctx->pc = 0x18f020u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x18f024: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18f024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18f02c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x18f02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f030: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x18f030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f034: 0x0  nop
    ctx->pc = 0x18f034u;
    // NOP
label_18f038:
    // 0x18f038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f040: 0x3e00008  jr          $ra
    ctx->pc = 0x18F040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F040u;
        // 0x18f044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F048u;
}
