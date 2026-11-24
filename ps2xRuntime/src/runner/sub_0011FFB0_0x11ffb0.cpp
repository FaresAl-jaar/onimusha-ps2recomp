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

// Function: sub_0011FFB0
// Address: 0x11ffb0 - 0x1201c8
void sub_0011FFB0_0x11ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FFB0_0x11ffb0");
#endif

    switch (ctx->pc) {
        case 0x11fff4u: goto label_11fff4;
        case 0x11fffcu: goto label_11fffc;
        case 0x120014u: goto label_120014;
        case 0x12001cu: goto label_12001c;
        case 0x120028u: goto label_120028;
        case 0x12003cu: goto label_12003c;
        case 0x12004cu: goto label_12004c;
        case 0x120068u: goto label_120068;
        case 0x120070u: goto label_120070;
        case 0x120090u: goto label_120090;
        case 0x1200a4u: goto label_1200a4;
        case 0x1200c4u: goto label_1200c4;
        case 0x1200d0u: goto label_1200d0;
        case 0x120100u: goto label_120100;
        case 0x120120u: goto label_120120;
        case 0x12014cu: goto label_12014c;
        case 0x120160u: goto label_120160;
        case 0x120184u: goto label_120184;
        case 0x120198u: goto label_120198;
        default: break;
    }

    ctx->pc = 0x11ffb0u;

    // 0x11ffb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11ffb4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11ffb8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x11ffb8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x11ffbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11ffc0: 0x8ec24190  lw          $v0, 0x4190($s6)
    ctx->pc = 0x11ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x404190u));
    // 0x11ffc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ffc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffc8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11ffcc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11ffd0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11ffd4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11ffd8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11ffdc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11ffe0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FFE0u;
    {
        const bool branch_taken_0x11ffe0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFE0u;
        // 0x11ffe4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffe0) {
            ctx->pc = 0x11FFF4u;
            goto label_11fff4;
        }
    }
    ctx->pc = 0x11FFE8u;
    // 0x11ffe8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x11ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x11ffec: 0xc044332  jal         func_110CC8
    ctx->pc = 0x11FFECu;
    SET_GPR_U32(ctx, 31, 0x11FFF4u);
    ctx->pc = 0x11FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFECu;
    // 0x11fff0: 0x24843898  addiu       $a0, $a0, 0x3898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x11FFECu, 0x11FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFF4u;
label_11fff4:
    // 0x11fff4: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11FFF4u;
    SET_GPR_U32(ctx, 31, 0x11FFFCu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x11FFF4u, 0x11FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFFCu;
label_11fffc:
    // 0x11fffc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x120000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x120000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120004u;
    {
        const bool branch_taken_0x120004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120004u;
        // 0x120008: 0xac8341c0  sw          $v1, 0x41C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120004) {
            ctx->pc = 0x120014u;
            goto label_120014;
        }
    }
    ctx->pc = 0x12000Cu;
    // 0x12000c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x12000Cu;
    SET_GPR_U32(ctx, 31, 0x120014u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x12000Cu, 0x120014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120014u;
label_120014:
    // 0x120014: 0xc047c72  jal         func_11F1C8
    ctx->pc = 0x120014u;
    SET_GPR_U32(ctx, 31, 0x12001Cu);
    ctx->pc = 0x120018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120014u;
    // 0x120018: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1C8u, 0x120014u, 0x12001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12001Cu;
label_12001c:
    // 0x12001c: 0x8e6441ac  lw          $a0, 0x41AC($s3)
    ctx->pc = 0x12001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16812)));
    // 0x120020: 0xc04380c  jal         func_10E030
    ctx->pc = 0x120020u;
    SET_GPR_U32(ctx, 31, 0x120028u);
    ctx->pc = 0x10E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E030u, 0x120020u, 0x120028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120028u;
label_120028:
    // 0x120028: 0x8e6341ac  lw          $v1, 0x41AC($s3)
    ctx->pc = 0x120028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16812)));
    // 0x12002c: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x12002Cu;
    {
        const bool branch_taken_0x12002c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12002Cu;
        // 0x120030: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12002c) {
            ctx->pc = 0x12019Cu;
            goto label_12019c;
        }
    }
    ctx->pc = 0x120034u;
    // 0x120034: 0xc047e94  jal         func_11FA50
    ctx->pc = 0x120034u;
    SET_GPR_U32(ctx, 31, 0x12003Cu);
    ctx->pc = 0x120038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120034u;
    // 0x120038: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA50u, 0x120034u, 0x12003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12003Cu;
label_12003c:
    // 0x12003c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x12003Cu;
    {
        const bool branch_taken_0x12003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12003Cu;
        // 0x120040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12003c) {
            ctx->pc = 0x120154u;
            goto label_120154;
        }
    }
    ctx->pc = 0x120044u;
    // 0x120044: 0xc044568  jal         func_1115A0
    ctx->pc = 0x120044u;
    SET_GPR_U32(ctx, 31, 0x12004Cu);
    ctx->pc = 0x120048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120044u;
    // 0x120048: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A0u, 0x120044u, 0x12004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12004Cu;
label_12004c:
    // 0x12004c: 0x8e2241d0  lw          $v0, 0x41D0($s1)
    ctx->pc = 0x12004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16848)));
    // 0x120050: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x120050u;
    {
        const bool branch_taken_0x120050 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x120054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120050u;
        // 0x120054: 0x3c150069  lui         $s5, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120050) {
            ctx->pc = 0x120104u;
            goto label_120104;
        }
    }
    ctx->pc = 0x120058u;
    // 0x120058: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x120058u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x12005c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12005Cu;
    {
        const bool branch_taken_0x12005c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12005Cu;
        // 0x120060: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12005c) {
            ctx->pc = 0x12008Cu;
            goto label_12008c;
        }
    }
    ctx->pc = 0x120064u;
    // 0x120064: 0x0  nop
    ctx->pc = 0x120064u;
    // NOP
label_120068:
    // 0x120068: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12006c: 0x0  nop
    ctx->pc = 0x12006cu;
    // NOP
label_120070:
    // 0x120070: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x120074: 0x0  nop
    ctx->pc = 0x120074u;
    // NOP
    // 0x120078: 0x0  nop
    ctx->pc = 0x120078u;
    // NOP
    // 0x12007c: 0x0  nop
    ctx->pc = 0x12007cu;
    // NOP
    // 0x120080: 0x0  nop
    ctx->pc = 0x120080u;
    // NOP
    // 0x120084: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120084u;
    {
        const bool branch_taken_0x120084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x120084) {
            ctx->pc = 0x120070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120070;
        }
    }
    ctx->pc = 0x12008Cu;
label_12008c:
    // 0x12008c: 0x26b043d0  addiu       $s0, $s5, 0x43D0
    ctx->pc = 0x12008cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 17360));
label_120090:
    // 0x120090: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x120090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x120094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120098: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x120098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x12009c: 0xc044752  jal         func_111D48
    ctx->pc = 0x12009Cu;
    SET_GPR_U32(ctx, 31, 0x1200A4u);
    ctx->pc = 0x1200A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12009Cu;
    // 0x1200a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x12009Cu, 0x1200A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200A4u;
label_1200a4:
    // 0x1200a4: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1200A4u;
    {
        const bool branch_taken_0x1200a4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1200a4) {
            ctx->pc = 0x1200A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1200A4u;
            // 0x1200a8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1200F4u;
            goto label_1200f4;
        }
    }
    ctx->pc = 0x1200ACu;
    // 0x1200ac: 0x8ec24190  lw          $v0, 0x4190($s6)
    ctx->pc = 0x1200acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16784)));
    // 0x1200b0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1200B0u;
    {
        const bool branch_taken_0x1200b0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1200B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200B0u;
        // 0x1200b4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200b0) {
            ctx->pc = 0x1200C8u;
            goto label_1200c8;
        }
    }
    ctx->pc = 0x1200B8u;
    // 0x1200b8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1200b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1200bc: 0xc044332  jal         func_110CC8
    ctx->pc = 0x1200BCu;
    SET_GPR_U32(ctx, 31, 0x1200C4u);
    ctx->pc = 0x1200C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200BCu;
    // 0x1200c0: 0x248438b0  addiu       $a0, $a0, 0x38B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x1200BCu, 0x1200C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200C4u;
label_1200c4:
    // 0x1200c4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1200c8:
    // 0x1200c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1200c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1200cc: 0x0  nop
    ctx->pc = 0x1200ccu;
    // NOP
label_1200d0:
    // 0x1200d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1200d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1200d4: 0x0  nop
    ctx->pc = 0x1200d4u;
    // NOP
    // 0x1200d8: 0x0  nop
    ctx->pc = 0x1200d8u;
    // NOP
    // 0x1200dc: 0x0  nop
    ctx->pc = 0x1200dcu;
    // NOP
    // 0x1200e0: 0x0  nop
    ctx->pc = 0x1200e0u;
    // NOP
    // 0x1200e4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1200E4u;
    {
        const bool branch_taken_0x1200e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1200e4) {
            ctx->pc = 0x1200D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1200d0;
        }
    }
    ctx->pc = 0x1200ECu;
    // 0x1200ec: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1200ECu;
    {
        const bool branch_taken_0x1200ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200ECu;
        // 0x1200f0: 0x26b043d0  addiu       $s0, $s5, 0x43D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 17360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200ec) {
            ctx->pc = 0x120090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120090;
        }
    }
    ctx->pc = 0x1200F4u;
label_1200f4:
    // 0x1200f4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1200F4u;
    {
        const bool branch_taken_0x1200f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200F4u;
        // 0x1200f8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200f4) {
            ctx->pc = 0x120068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120068;
        }
    }
    ctx->pc = 0x1200FCu;
    // 0x1200fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_120100:
    if (ctx->pc == 0x120100u) {
        ctx->pc = 0x120100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200FCu;
        // 0x120100: 0xae2041d0  sw          $zero, 0x41D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120104u;
        goto label_120104;
    }
    ctx->pc = 0x1200FCu;
    {
        const bool branch_taken_0x1200fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200FCu;
        // 0x120100: 0xae2041d0  sw          $zero, 0x41D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200fc) {
            ctx->pc = 0x12010Cu;
            goto label_12010c;
        }
    }
    ctx->pc = 0x120104u;
label_120104:
    // 0x120104: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x120104u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x120108: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x120108u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_12010c:
    // 0x12010c: 0x26904410  addiu       $s0, $s4, 0x4410
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 17424));
    // 0x120110: 0xae924410  sw          $s2, 0x4410($s4)
    ctx->pc = 0x120110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17424), GPR_U32(ctx, 18));
    // 0x120114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120118: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x120118u;
    SET_GPR_U32(ctx, 31, 0x120120u);
    ctx->pc = 0x12011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120118u;
    // 0x12011c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x120118u, 0x120120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120120u;
label_120120:
    // 0x120120: 0x26f15380  addiu       $s1, $s7, 0x5380
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 21376));
    // 0x120124: 0x26a443d0  addiu       $a0, $s5, 0x43D0
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17360));
    // 0x120128: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x120128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12012c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12012cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x120130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120138: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x120138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12013c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x12013cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120140: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x120140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x120144: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x120144u;
    SET_GPR_U32(ctx, 31, 0x12014Cu);
    ctx->pc = 0x120148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120144u;
    // 0x120148: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x120144u, 0x12014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12014Cu;
label_12014c:
    // 0x12014c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12014Cu;
    {
        const bool branch_taken_0x12014c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x12014c) {
            ctx->pc = 0x120150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12014Cu;
            // 0x120150: 0x8ec24190  lw          $v0, 0x4190($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120174u;
            goto label_120174;
        }
    }
    ctx->pc = 0x120154u;
label_120154:
    // 0x120154: 0x8e6441ac  lw          $a0, 0x41AC($s3)
    ctx->pc = 0x120154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16812)));
    // 0x120158: 0xc043800  jal         func_10E000
    ctx->pc = 0x120158u;
    SET_GPR_U32(ctx, 31, 0x120160u);
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x120158u, 0x120160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120160u;
label_120160:
    // 0x120160: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x120160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x120164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120168: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x120168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12016c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12016Cu;
    {
        const bool branch_taken_0x12016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12016Cu;
        // 0x120170: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12016c) {
            ctx->pc = 0x12019Cu;
            goto label_12019c;
        }
    }
    ctx->pc = 0x120174u;
label_120174:
    // 0x120174: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120174u;
    {
        const bool branch_taken_0x120174 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x120178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120174u;
        // 0x120178: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120174) {
            ctx->pc = 0x120184u;
            goto label_120184;
        }
    }
    ctx->pc = 0x12017Cu;
    // 0x12017c: 0xc044332  jal         func_110CC8
    ctx->pc = 0x12017Cu;
    SET_GPR_U32(ctx, 31, 0x120184u);
    ctx->pc = 0x120180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12017Cu;
    // 0x120180: 0x248438d0  addiu       $a0, $a0, 0x38D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x12017Cu, 0x120184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120184u;
label_120184:
    // 0x120184: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x120184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x120188: 0x8e6441ac  lw          $a0, 0x41AC($s3)
    ctx->pc = 0x120188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16812)));
    // 0x12018c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x12018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x120190: 0xc043800  jal         func_10E000
    ctx->pc = 0x120190u;
    SET_GPR_U32(ctx, 31, 0x120198u);
    ctx->pc = 0x120194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120190u;
    // 0x120194: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x120190u, 0x120198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120198u;
label_120198:
    // 0x120198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x120198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12019c:
    // 0x12019c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12019cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1201a0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1201a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1201a4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1201a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1201a8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1201a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1201ac: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1201acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1201b0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1201b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1201b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1201b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1201b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1201b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1201bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1201bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1201c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1201C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1201C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201C0u;
        // 0x1201c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1201C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1201C8u;
}
