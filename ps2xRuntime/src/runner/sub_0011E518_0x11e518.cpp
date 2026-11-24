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

// Function: sub_0011E518
// Address: 0x11e518 - 0x11e688
void sub_0011E518_0x11e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E518_0x11e518");
#endif

    switch (ctx->pc) {
        case 0x11e56cu: goto label_11e56c;
        case 0x11e598u: goto label_11e598;
        case 0x11e5a0u: goto label_11e5a0;
        case 0x11e5a4u: goto label_11e5a4;
        case 0x11e5ccu: goto label_11e5cc;
        case 0x11e62cu: goto label_11e62c;
        case 0x11e634u: goto label_11e634;
        default: break;
    }

    ctx->pc = 0x11e518u;

    // 0x11e518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e51c: 0x4603f  dsra32      $t4, $a0, 0
    ctx->pc = 0x11e51cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11e524: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11e524u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11e528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e52c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11e52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e530: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x11e530u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x11e534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e538: 0x1917824  and         $t7, $t4, $s1
    ctx->pc = 0x11e538u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 17));
    // 0x11e53c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11e53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e540: 0xf6d03  sra         $t5, $t7, 20
    ctx->pc = 0x11e540u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 15), 20));
    // 0x11e544: 0x15a0001b  bnez        $t5, . + 4 + (0x1B << 2)
    ctx->pc = 0x11E544u;
    {
        const bool branch_taken_0x11e544 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E544u;
        // 0x11e548: 0xe703f  dsra32      $t6, $t6, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e544) {
            ctx->pc = 0x11E5B4u;
            goto label_11e5b4;
        }
    }
    ctx->pc = 0x11E54Cu;
    // 0x11e54c: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11e54cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11e550: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e550u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e554: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11e554u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11e558: 0x1cf7825  or          $t7, $t6, $t7
    ctx->pc = 0x11e558u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11e55c: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E55Cu;
    {
        const bool branch_taken_0x11e55c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E55Cu;
        // 0x11e560: 0x24050435  addiu       $a1, $zero, 0x435 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1077));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e55c) {
            ctx->pc = 0x11E5A0u;
            goto label_11e5a0;
        }
    }
    ctx->pc = 0x11E564u;
    // 0x11e564: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11E564u;
    SET_GPR_U32(ctx, 31, 0x11E56Cu);
    ctx->pc = 0x11E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E564u;
    // 0x11e568: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11E564u, 0x11E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E56Cu;
label_11e56c:
    // 0x11e56c: 0x2603f  dsra32      $t4, $v0, 0
    ctx->pc = 0x11e56cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e570: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x11e570u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x11e574: 0x1917824  and         $t7, $t4, $s1
    ctx->pc = 0x11e574u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 17));
    // 0x11e578: 0x35ce3cb0  ori         $t6, $t6, 0x3CB0
    ctx->pc = 0x11e578u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)15536);
    // 0x11e57c: 0xf7d03  sra         $t7, $t7, 20
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 20));
    // 0x11e580: 0x20e702a  slt         $t6, $s0, $t6
    ctx->pc = 0x11e580u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x11e584: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x11E584u;
    {
        const bool branch_taken_0x11e584 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E584u;
        // 0x11e588: 0x25edffca  addiu       $t5, $t7, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e584) {
            ctx->pc = 0x11E5B4u;
            goto label_11e5b4;
        }
    }
    ctx->pc = 0x11E58Cu;
    // 0x11e58c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e58cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e594: 0xdde53600  ld          $a1, 0x3600($t7)
    ctx->pc = 0x11e594u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x663600u));
label_11e598:
    // 0x11e598: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11E598u;
    SET_GPR_U32(ctx, 31, 0x11E5A0u);
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11E598u, 0x11E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5A0u;
label_11e5a0:
    // 0x11e5a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e5a4:
    // 0x11e5a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11e5a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e5a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5ACu;
        // 0x11e5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E5B4u;
label_11e5b4:
    // 0x11e5b4: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x11e5b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x11e5b8: 0x15af0006  bne         $t5, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E5B8u;
    {
        const bool branch_taken_0x11e5b8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x11E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5B8u;
        // 0x11e5bc: 0x1b06821  addu        $t5, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5b8) {
            ctx->pc = 0x11E5D4u;
            goto label_11e5d4;
        }
    }
    ctx->pc = 0x11E5C0u;
    // 0x11e5c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e5c4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11E5C4u;
    SET_GPR_U32(ctx, 31, 0x11E5CCu);
    ctx->pc = 0x11E5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E5C4u;
    // 0x11e5c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11E5C4u, 0x11E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E5CCu;
label_11e5cc:
    // 0x11e5cc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11E5CCu;
    {
        const bool branch_taken_0x11e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5CCu;
        // 0x11e5d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5cc) {
            ctx->pc = 0x11E5A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e5a4;
        }
    }
    ctx->pc = 0x11E5D4u;
label_11e5d4:
    // 0x11e5d4: 0x29af07ff  slti        $t7, $t5, 0x7FF
    ctx->pc = 0x11e5d4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x11e5d8: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E5D8u;
    {
        const bool branch_taken_0x11e5d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D8u;
        // 0x11e5dc: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d8) {
            ctx->pc = 0x11E624u;
            goto label_11e624;
        }
    }
    ctx->pc = 0x11E5E0u;
    // 0x11e5e0: 0x19a0000a  blez        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x11E5E0u;
    {
        const bool branch_taken_0x11e5e0 = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x11E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5E0u;
        // 0x11e5e4: 0x3c0f800f  lui         $t7, 0x800F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32783 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5e0) {
            ctx->pc = 0x11E60Cu;
            goto label_11e60c;
        }
    }
    ctx->pc = 0x11E5E8u;
    // 0x11e5e8: 0xd6d00  sll         $t5, $t5, 20
    ctx->pc = 0x11e5e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 20));
    // 0x11e5ec: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e5ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e5f0: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x11e5f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e5f4: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11e5f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11e5f8: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11e5f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11e5fc: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x11e5fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x11e600: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11e600u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11e604: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11E604u;
    {
        const bool branch_taken_0x11e604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E604u;
        // 0x11e608: 0x1cf1025  or          $v0, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e604) {
            ctx->pc = 0x11E5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e5a0;
        }
    }
    ctx->pc = 0x11E60Cu;
label_11e60c:
    // 0x11e60c: 0x29afffcb  slti        $t7, $t5, -0x35
    ctx->pc = 0x11e60cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x11e610: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11E610u;
    {
        const bool branch_taken_0x11e610 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E610u;
        // 0x11e614: 0x340fc350  ori         $t7, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e610) {
            ctx->pc = 0x11E650u;
            goto label_11e650;
        }
    }
    ctx->pc = 0x11E618u;
    // 0x11e618: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11e618u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e61c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E61Cu;
    {
        const bool branch_taken_0x11e61c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E61Cu;
        // 0x11e620: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e61c) {
            ctx->pc = 0x11E640u;
            goto label_11e640;
        }
    }
    ctx->pc = 0x11E624u;
label_11e624:
    // 0x11e624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e628: 0xddf03608  ld          $s0, 0x3608($t7)
    ctx->pc = 0x11e628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 13832)));
label_11e62c:
    // 0x11e62c: 0xc047860  jal         func_11E180
    ctx->pc = 0x11E62Cu;
    SET_GPR_U32(ctx, 31, 0x11E634u);
    ctx->pc = 0x11E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E62Cu;
    // 0x11e630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x11E62Cu, 0x11E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E634u;
label_11e634:
    // 0x11e634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e638: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x11E638u;
    {
        const bool branch_taken_0x11e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E638u;
        // 0x11e63c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e638) {
            ctx->pc = 0x11E598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e598;
        }
    }
    ctx->pc = 0x11E640u;
label_11e640:
    // 0x11e640: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11e640u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11e644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e648: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11E648u;
    {
        const bool branch_taken_0x11e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E648u;
        // 0x11e64c: 0xddf03600  ld          $s0, 0x3600($t7) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 13824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e648) {
            ctx->pc = 0x11E62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e62c;
        }
    }
    ctx->pc = 0x11E650u;
label_11e650:
    // 0x11e650: 0x3c0f800f  lui         $t7, 0x800F
    ctx->pc = 0x11e650u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32783 << 16));
    // 0x11e654: 0x25ad0036  addiu       $t5, $t5, 0x36
    ctx->pc = 0x11e654u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 54));
    // 0x11e658: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e658u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e65c: 0xd6d00  sll         $t5, $t5, 20
    ctx->pc = 0x11e65cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 20));
    // 0x11e660: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11e660u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11e664: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x11e664u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e668: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x11e668u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x11e66c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11e66cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11e670: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11e674: 0x240503c9  addiu       $a1, $zero, 0x3C9
    ctx->pc = 0x11e674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 969));
    // 0x11e678: 0x1cf1025  or          $v0, $t6, $t7
    ctx->pc = 0x11e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11e67c: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x11e67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x11e680: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x11E680u;
    {
        const bool branch_taken_0x11e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E680u;
        // 0x11e684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e680) {
            ctx->pc = 0x11E598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e598;
        }
    }
    ctx->pc = 0x11E688u;
}
