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

// Function: sub_0010B0E8
// Address: 0x10b0e8 - 0x10b29c
void sub_0010B0E8_0x10b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B0E8_0x10b0e8");
#endif

    switch (ctx->pc) {
        case 0x10b130u: goto label_10b130;
        case 0x10b14cu: goto label_10b14c;
        case 0x10b154u: goto label_10b154;
        case 0x10b15cu: goto label_10b15c;
        case 0x10b170u: goto label_10b170;
        case 0x10b178u: goto label_10b178;
        case 0x10b180u: goto label_10b180;
        case 0x10b1d8u: goto label_10b1d8;
        case 0x10b200u: goto label_10b200;
        case 0x10b224u: goto label_10b224;
        case 0x10b248u: goto label_10b248;
        default: break;
    }

    ctx->pc = 0x10b0e8u;

    // 0x10b0e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b0ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b0f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b0f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10b0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b0fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10b0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b100: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10b104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b10c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x10b10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10b110: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x10b114: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x10b114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x10b118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B118u;
    {
        const bool branch_taken_0x10b118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B118u;
        // 0x10b11c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b118) {
            ctx->pc = 0x10B138u;
            goto label_10b138;
        }
    }
    ctx->pc = 0x10B120u;
    // 0x10b120: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10b124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b128: 0xc04354c  jal         func_10D530
    ctx->pc = 0x10B128u;
    SET_GPR_U32(ctx, 31, 0x10B130u);
    ctx->pc = 0x10B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B128u;
    // 0x10b12c: 0x24a52200  addiu       $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x10B128u, 0x10B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B130u;
label_10b130:
    // 0x10b130: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x10B130u;
    {
        const bool branch_taken_0x10b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B130u;
        // 0x10b134: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b130) {
            ctx->pc = 0x10B280u;
            goto label_10b280;
        }
    }
    ctx->pc = 0x10B138u;
label_10b138:
    // 0x10b138: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x10b13c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B13Cu;
    {
        const bool branch_taken_0x10b13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B13Cu;
        // 0x10b140: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b13c) {
            ctx->pc = 0x10B164u;
            goto label_10b164;
        }
    }
    ctx->pc = 0x10B144u;
    // 0x10b144: 0xc044332  jal         func_110CC8
    ctx->pc = 0x10B144u;
    SET_GPR_U32(ctx, 31, 0x10B14Cu);
    ctx->pc = 0x10B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B144u;
    // 0x10b148: 0x24842240  addiu       $a0, $a0, 0x2240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x10B144u, 0x10B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B14Cu;
label_10b14c:
    // 0x10b14c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x10B14Cu;
    {
        const bool branch_taken_0x10b14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B14Cu;
        // 0x10b150: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b14c) {
            ctx->pc = 0x10B280u;
            goto label_10b280;
        }
    }
    ctx->pc = 0x10B154u;
label_10b154:
    // 0x10b154: 0xc044332  jal         func_110CC8
    ctx->pc = 0x10B154u;
    SET_GPR_U32(ctx, 31, 0x10B15Cu);
    ctx->pc = 0x10B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B154u;
    // 0x10b158: 0x24842280  addiu       $a0, $a0, 0x2280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x10B154u, 0x10B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B15Cu;
label_10b15c:
    // 0x10b15c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x10B15Cu;
    {
        const bool branch_taken_0x10b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B15Cu;
        // 0x10b160: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b15c) {
            ctx->pc = 0x10B280u;
            goto label_10b280;
        }
    }
    ctx->pc = 0x10B164u;
label_10b164:
    // 0x10b164: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x10b164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x10b168: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b16c: 0x0  nop
    ctx->pc = 0x10b16cu;
    // NOP
label_10b170:
    // 0x10b170: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10B170u;
    {
        const bool branch_taken_0x10b170 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B170u;
        // 0x10b174: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b170) {
            ctx->pc = 0x10B1B0u;
            goto label_10b1b0;
        }
    }
    ctx->pc = 0x10B178u;
label_10b178:
    // 0x10b178: 0xc042a12  jal         func_10A848
    ctx->pc = 0x10B178u;
    SET_GPR_U32(ctx, 31, 0x10B180u);
    ctx->pc = 0x10B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B178u;
    // 0x10b17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A848u, 0x10B178u, 0x10B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B180u;
label_10b180:
    // 0x10b180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b184: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x10B184u;
    {
        const bool branch_taken_0x10b184 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x10B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B184u;
        // 0x10b188: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b184) {
            ctx->pc = 0x10B280u;
            goto label_10b280;
        }
    }
    ctx->pc = 0x10B18Cu;
    // 0x10b18c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B18Cu;
    {
        const bool branch_taken_0x10b18c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B18Cu;
        // 0x10b190: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b18c) {
            ctx->pc = 0x10B1B0u;
            goto label_10b1b0;
        }
    }
    ctx->pc = 0x10B194u;
    // 0x10b194: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10b198: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x10b19c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B19Cu;
    {
        const bool branch_taken_0x10b19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B19Cu;
        // 0x10b1a0: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b19c) {
            ctx->pc = 0x10B1B0u;
            goto label_10b1b0;
        }
    }
    ctx->pc = 0x10B1A4u;
    // 0x10b1a4: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x10b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x10b1a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10B1A8u;
    {
        const bool branch_taken_0x10b1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1A8u;
        // 0x10b1ac: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1a8) {
            ctx->pc = 0x10B178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b178;
        }
    }
    ctx->pc = 0x10B1B0u;
label_10b1b0:
    // 0x10b1b0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10B1B0u;
    {
        const bool branch_taken_0x10b1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1B0u;
        // 0x10b1b4: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1b0) {
            ctx->pc = 0x10B258u;
            goto label_10b258;
        }
    }
    ctx->pc = 0x10B1B8u;
    // 0x10b1b8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x10b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10b1bc: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x10b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x10b1c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b1c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b1c8: 0x800008  jr          $a0
    ctx->pc = 0x10B1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B1D0u: goto label_10b1d0;
            case 0x10B1E4u: goto label_10b1e4;
            case 0x10B214u: goto label_10b214;
            case 0x10B238u: goto label_10b238;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B1C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10B1D0u;
label_10b1d0:
    // 0x10b1d0: 0xc043256  jal         func_10C958
    ctx->pc = 0x10B1D0u;
    SET_GPR_U32(ctx, 31, 0x10B1D8u);
    ctx->pc = 0x10B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1D0u;
    // 0x10b1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C958u, 0x10B1D0u, 0x10B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1D8u;
label_10b1d8:
    // 0x10b1d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b1dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10B1DCu;
    {
        const bool branch_taken_0x10b1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1DCu;
        // 0x10b1e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1dc) {
            ctx->pc = 0x10B258u;
            goto label_10b258;
        }
    }
    ctx->pc = 0x10B1E4u;
label_10b1e4:
    // 0x10b1e4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x10b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x10b1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1ec: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x10b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x10b1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10b1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1f4: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x10b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x10b1f8: 0xc042f1c  jal         func_10BC70
    ctx->pc = 0x10B1F8u;
    SET_GPR_U32(ctx, 31, 0x10B200u);
    ctx->pc = 0x10B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1F8u;
    // 0x10b1fc: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC70u, 0x10B1F8u, 0x10B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B200u;
label_10b200:
    // 0x10b200: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x10b200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x10b204: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b208: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b20c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10B20Cu;
    {
        const bool branch_taken_0x10b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B20Cu;
        // 0x10b210: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b20c) {
            ctx->pc = 0x10B258u;
            goto label_10b258;
        }
    }
    ctx->pc = 0x10B214u;
label_10b214:
    // 0x10b214: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x10b214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x10b218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b21c: 0xc042f1c  jal         func_10BC70
    ctx->pc = 0x10B21Cu;
    SET_GPR_U32(ctx, 31, 0x10B224u);
    ctx->pc = 0x10B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B21Cu;
    // 0x10b220: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC70u, 0x10B21Cu, 0x10B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B224u;
label_10b224:
    // 0x10b224: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x10b224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x10b228: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b22c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10B230u;
    {
        const bool branch_taken_0x10b230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B230u;
        // 0x10b234: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b230) {
            ctx->pc = 0x10B258u;
            goto label_10b258;
        }
    }
    ctx->pc = 0x10B238u;
label_10b238:
    // 0x10b238: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x10b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x10b23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b240: 0xc042f1c  jal         func_10BC70
    ctx->pc = 0x10B240u;
    SET_GPR_U32(ctx, 31, 0x10B248u);
    ctx->pc = 0x10B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B240u;
    // 0x10b244: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC70u, 0x10B240u, 0x10B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B248u;
label_10b248:
    // 0x10b248: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x10b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x10b24c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b24cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b250: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b254: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x10b254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_10b258:
    // 0x10b258: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x10b25c: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x10B25Cu;
    {
        const bool branch_taken_0x10b25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B25Cu;
        // 0x10b260: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b25c) {
            ctx->pc = 0x10B154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b154;
        }
    }
    ctx->pc = 0x10B264u;
    // 0x10b264: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x10b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x10b268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B268u;
    {
        const bool branch_taken_0x10b268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B268u;
        // 0x10b26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b268) {
            ctx->pc = 0x10B280u;
            goto label_10b280;
        }
    }
    ctx->pc = 0x10B270u;
    // 0x10b270: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10b274: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x10B274u;
    {
        const bool branch_taken_0x10b274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B274u;
        // 0x10b278: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b274) {
            ctx->pc = 0x10B170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b170;
        }
    }
    ctx->pc = 0x10B27Cu;
    // 0x10b27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b280:
    // 0x10b280: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b284: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b288: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b28c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b294: 0x3e00008  jr          $ra
    ctx->pc = 0x10B294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B294u;
        // 0x10b298: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B29Cu;
}
