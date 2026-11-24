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

// Function: sub_0026B0A0
// Address: 0x26b0a0 - 0x26b258
void sub_0026B0A0_0x26b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B0A0_0x26b0a0");
#endif

    switch (ctx->pc) {
        case 0x26b0c8u: goto label_26b0c8;
        case 0x26b0d8u: goto label_26b0d8;
        case 0x26b100u: goto label_26b100;
        case 0x26b13cu: goto label_26b13c;
        case 0x26b178u: goto label_26b178;
        case 0x26b188u: goto label_26b188;
        case 0x26b19cu: goto label_26b19c;
        case 0x26b1c0u: goto label_26b1c0;
        case 0x26b1e8u: goto label_26b1e8;
        case 0x26b208u: goto label_26b208;
        case 0x26b210u: goto label_26b210;
        default: break;
    }

    ctx->pc = 0x26b0a0u;

    // 0x26b0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26b0a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26b0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b0b4: 0x93838874  lbu         $v1, -0x778C($gp)
    ctx->pc = 0x26b0b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936692)));
    // 0x26b0b8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26B0B8u;
    {
        const bool branch_taken_0x26b0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0B8u;
        // 0x26b0bc: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0b8) {
            ctx->pc = 0x26B0E8u;
            goto label_26b0e8;
        }
    }
    ctx->pc = 0x26B0C0u;
    // 0x26b0c0: 0xc095150  jal         func_254540
    ctx->pc = 0x26B0C0u;
    SET_GPR_U32(ctx, 31, 0x26B0C8u);
    ctx->pc = 0x26B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B0C0u;
    // 0x26b0c4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x26B0C0u, 0x26B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0C8u;
label_26b0c8:
    // 0x26b0c8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x26B0C8u;
    {
        const bool branch_taken_0x26b0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0C8u;
        // 0x26b0cc: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0c8) {
            ctx->pc = 0x26B240u;
            goto label_26b240;
        }
    }
    ctx->pc = 0x26B0D0u;
    // 0x26b0d0: 0xc0c2d7c  jal         func_30B5F0
    ctx->pc = 0x26B0D0u;
    SET_GPR_U32(ctx, 31, 0x26B0D8u);
    ctx->pc = 0x26B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B0D0u;
    // 0x26b0d4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B5F0u, 0x26B0D0u, 0x26B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0D8u;
label_26b0d8:
    // 0x26b0d8: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x26B0D8u;
    {
        const bool branch_taken_0x26b0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b0d8) {
            ctx->pc = 0x26B240u;
            goto label_26b240;
        }
    }
    ctx->pc = 0x26B0E0u;
    // 0x26b0e0: 0xa3808874  sb          $zero, -0x778C($gp)
    ctx->pc = 0x26b0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936692), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b0e4: 0x0  nop
    ctx->pc = 0x26b0e4u;
    // NOP
label_26b0e8:
    // 0x26b0e8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26b0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26b0ec: 0x8c31f7d0  lw          $s1, -0x830($at)
    ctx->pc = 0x26b0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8BF7D0u));
    // 0x26b0f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x26b0f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26b0f4: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x26B0F4u;
    {
        const bool branch_taken_0x26b0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b0f4) {
            ctx->pc = 0x26B240u;
            goto label_26b240;
        }
    }
    ctx->pc = 0x26B0FCu;
    // 0x26b0fc: 0x0  nop
    ctx->pc = 0x26b0fcu;
    // NOP
label_26b100:
    // 0x26b100: 0x9223004b  lbu         $v1, 0x4B($s1)
    ctx->pc = 0x26b100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x26b104: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x26B104u;
    {
        const bool branch_taken_0x26b104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B104u;
        // 0x26b108: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b104) {
            ctx->pc = 0x26B140u;
            goto label_26b140;
        }
    }
    ctx->pc = 0x26B10Cu;
    // 0x26b10c: 0x9223004a  lbu         $v1, 0x4A($s1)
    ctx->pc = 0x26b10cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x26b110: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26B110u;
    {
        const bool branch_taken_0x26b110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B110u;
        // 0x26b114: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b110) {
            ctx->pc = 0x26B140u;
            goto label_26b140;
        }
    }
    ctx->pc = 0x26B118u;
    // 0x26b118: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x26b118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x26b11c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x26b11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26b120: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x26b120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x26b124: 0xa223004b  sb          $v1, 0x4B($s1)
    ctx->pc = 0x26b124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x26b128: 0x9223004b  lbu         $v1, 0x4B($s1)
    ctx->pc = 0x26b128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x26b12c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B12Cu;
    {
        const bool branch_taken_0x26b12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B12Cu;
        // 0x26b130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b12c) {
            ctx->pc = 0x26B140u;
            goto label_26b140;
        }
    }
    ctx->pc = 0x26B134u;
    // 0x26b134: 0xc099910  jal         func_266440
    ctx->pc = 0x26B134u;
    SET_GPR_U32(ctx, 31, 0x26B13Cu);
    ctx->pc = 0x266440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266440u, 0x26B134u, 0x26B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B13Cu;
label_26b13c:
    // 0x26b13c: 0x0  nop
    ctx->pc = 0x26b13cu;
    // NOP
label_26b140:
    // 0x26b140: 0x96230036  lhu         $v1, 0x36($s1)
    ctx->pc = 0x26b140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x26b144: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x26b144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x26b148: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x26B148u;
    {
        const bool branch_taken_0x26b148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B148u;
        // 0x26b14c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b148) {
            ctx->pc = 0x26B210u;
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B150u;
    // 0x26b150: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26b154: 0x24845900  addiu       $a0, $a0, 0x5900
    ctx->pc = 0x26b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22784));
    // 0x26b158: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b15c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b160: 0x600008  jr          $v1
    ctx->pc = 0x26B160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B168u: goto label_26b168;
            case 0x26B170u: goto label_26b170;
            case 0x26B1B8u: goto label_26b1b8;
            case 0x26B1D0u: goto label_26b1d0;
            case 0x26B1E0u: goto label_26b1e0;
            case 0x26B200u: goto label_26b200;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26B168u;
label_26b168:
    // 0x26b168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b16c: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x26b16cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
label_26b170:
    // 0x26b170: 0xc099b68  jal         func_266DA0
    ctx->pc = 0x26B170u;
    SET_GPR_U32(ctx, 31, 0x26B178u);
    ctx->pc = 0x26B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B170u;
    // 0x26b174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266DA0u, 0x26B170u, 0x26B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B178u;
label_26b178:
    // 0x26b178: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b17c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26B17Cu;
    {
        const bool branch_taken_0x26b17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B17Cu;
        // 0x26b180: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b17c) {
            ctx->pc = 0x26B1A8u;
            goto label_26b1a8;
        }
    }
    ctx->pc = 0x26B184u;
    // 0x26b184: 0x0  nop
    ctx->pc = 0x26b184u;
    // NOP
label_26b188:
    // 0x26b188: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26b188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b18c: 0x12430006  beq         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B18Cu;
    {
        const bool branch_taken_0x26b18c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B18Cu;
        // 0x26b190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b18c) {
            ctx->pc = 0x26B1A8u;
            goto label_26b1a8;
        }
    }
    ctx->pc = 0x26B194u;
    // 0x26b194: 0xc099b68  jal         func_266DA0
    ctx->pc = 0x26B194u;
    SET_GPR_U32(ctx, 31, 0x26B19Cu);
    ctx->pc = 0x266DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266DA0u, 0x26B194u, 0x26B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B19Cu;
label_26b19c:
    // 0x26b19c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b1a0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26B1A0u;
    {
        const bool branch_taken_0x26b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1A0u;
        // 0x26b1a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1a0) {
            ctx->pc = 0x26B188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b188;
        }
    }
    ctx->pc = 0x26B1A8u;
label_26b1a8:
    // 0x26b1a8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x26b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x26b1ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b1b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x26B1B0u;
    {
        const bool branch_taken_0x26b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1B0u;
        // 0x26b1b4: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1b0) {
            ctx->pc = 0x26B210u;
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B1B8u;
label_26b1b8:
    // 0x26b1b8: 0xc099908  jal         func_266420
    ctx->pc = 0x26B1B8u;
    SET_GPR_U32(ctx, 31, 0x26B1C0u);
    ctx->pc = 0x26B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B1B8u;
    // 0x26b1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266420u, 0x26B1B8u, 0x26B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1C0u;
label_26b1c0:
    // 0x26b1c0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x26b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x26b1c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b1c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26B1C8u;
    {
        const bool branch_taken_0x26b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1C8u;
        // 0x26b1cc: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1c8) {
            ctx->pc = 0x26B210u;
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B1D0u;
label_26b1d0:
    // 0x26b1d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b1d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26B1D4u;
    {
        const bool branch_taken_0x26b1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1D4u;
        // 0x26b1d8: 0xa6230036  sh          $v1, 0x36($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1d4) {
            ctx->pc = 0x26B210u;
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B1DCu;
    // 0x26b1dc: 0x0  nop
    ctx->pc = 0x26b1dcu;
    // NOP
label_26b1e0:
    // 0x26b1e0: 0xc099b00  jal         func_266C00
    ctx->pc = 0x26B1E0u;
    SET_GPR_U32(ctx, 31, 0x26B1E8u);
    ctx->pc = 0x26B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B1E0u;
    // 0x26b1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C00u, 0x26B1E0u, 0x26B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1E8u;
label_26b1e8:
    // 0x26b1e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26b1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26b1ec: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B1ECu;
    {
        const bool branch_taken_0x26b1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1ECu;
        // 0x26b1f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1ec) {
            ctx->pc = 0x26B210u;
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B1F4u;
    // 0x26b1f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B1F4u;
    {
        const bool branch_taken_0x26b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1F4u;
        // 0x26b1f8: 0xa6230036  sh          $v1, 0x36($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1f4) {
            ctx->pc = 0x26B210u;
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B1FCu;
    // 0x26b1fc: 0x0  nop
    ctx->pc = 0x26b1fcu;
    // NOP
label_26b200:
    // 0x26b200: 0xc0998fc  jal         func_2663F0
    ctx->pc = 0x26B200u;
    SET_GPR_U32(ctx, 31, 0x26B208u);
    ctx->pc = 0x26B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B200u;
    // 0x26b204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2663F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663F0u, 0x26B200u, 0x26B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B208u;
label_26b208:
    // 0x26b208: 0xc099800  jal         func_266000
    ctx->pc = 0x26B208u;
    SET_GPR_U32(ctx, 31, 0x26B210u);
    ctx->pc = 0x26B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B208u;
    // 0x26b20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266000u, 0x26B208u, 0x26B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B210u;
label_26b210:
    // 0x26b210: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b214: 0x1243000a  beq         $s2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26B214u;
    {
        const bool branch_taken_0x26b214 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b214) {
            ctx->pc = 0x26B240u;
            goto label_26b240;
        }
    }
    ctx->pc = 0x26B21Cu;
    // 0x26b21c: 0x9383886c  lbu         $v1, -0x7794($gp)
    ctx->pc = 0x26b21cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936684)));
    // 0x26b220: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B220u;
    {
        const bool branch_taken_0x26b220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b220) {
            ctx->pc = 0x26B230u;
            goto label_26b230;
        }
    }
    ctx->pc = 0x26B228u;
    // 0x26b228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26B228u;
    {
        const bool branch_taken_0x26b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B228u;
        // 0x26b22c: 0xa380886c  sb          $zero, -0x7794($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936684), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b228) {
            ctx->pc = 0x26B240u;
            goto label_26b240;
        }
    }
    ctx->pc = 0x26B230u;
label_26b230:
    // 0x26b230: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x26b230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b234: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x26B234u;
    {
        const bool branch_taken_0x26b234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B234u;
        // 0x26b238: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b234) {
            ctx->pc = 0x26B100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b100;
        }
    }
    ctx->pc = 0x26B23Cu;
    // 0x26b23c: 0x0  nop
    ctx->pc = 0x26b23cu;
    // NOP
label_26b240:
    // 0x26b240: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26b240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b250: 0x3e00008  jr          $ra
    ctx->pc = 0x26B250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B250u;
        // 0x26b254: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B258u;
}
