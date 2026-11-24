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

// Function: sub_0032A7F0
// Address: 0x32a7f0 - 0x32a8f8
void sub_0032A7F0_0x32a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A7F0_0x32a7f0");
#endif

    switch (ctx->pc) {
        case 0x32a814u: goto label_32a814;
        case 0x32a844u: goto label_32a844;
        case 0x32a850u: goto label_32a850;
        case 0x32a8e4u: goto label_32a8e4;
        default: break;
    }

    ctx->pc = 0x32a7f0u;

    // 0x32a7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a800: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32a800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a808: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32a808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32a80c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x32A80Cu;
    SET_GPR_U32(ctx, 31, 0x32A814u);
    ctx->pc = 0x32A810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A80Cu;
    // 0x32a810: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x32A80Cu, 0x32A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A814u;
label_32a814:
    // 0x32a814: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x32a814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x32a818: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x32a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x32a81c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x32a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x32a820: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x32a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32a824: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x32a824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32a828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a82c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x32a82cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a830: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x32a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x32a834: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x32a834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a838: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x32a838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a83c: 0xc049590  jal         func_125640
    ctx->pc = 0x32A83Cu;
    SET_GPR_U32(ctx, 31, 0x32A844u);
    ctx->pc = 0x32A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A83Cu;
    // 0x32a840: 0xa200000e  sb          $zero, 0xE($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x32A83Cu, 0x32A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A844u;
label_32a844:
    // 0x32a844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32a844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a84c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x32a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_32a850:
    // 0x32a850: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x32a850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a854: 0xa083002a  sb          $v1, 0x2A($a0)
    ctx->pc = 0x32a854u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a858: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x32a858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x32a85c: 0xa083003a  sb          $v1, 0x3A($a0)
    ctx->pc = 0x32a85cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a860: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x32a860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x32a864: 0xa083004a  sb          $v1, 0x4A($a0)
    ctx->pc = 0x32a864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a868: 0xa083005a  sb          $v1, 0x5A($a0)
    ctx->pc = 0x32a868u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a86c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32A86Cu;
    {
        const bool branch_taken_0x32a86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A86Cu;
        // 0x32a870: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a86c) {
            ctx->pc = 0x32A850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a850;
        }
    }
    ctx->pc = 0x32A874u;
    // 0x32a874: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32a874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32a878: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32a87c: 0x9022fc8c  lbu         $v0, -0x374($at)
    ctx->pc = 0x32a87cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x32a880: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x32A880u;
    {
        const bool branch_taken_0x32a880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A880u;
        // 0x32a884: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a880) {
            ctx->pc = 0x32A8C8u;
            goto label_32a8c8;
        }
    }
    ctx->pc = 0x32A888u;
    // 0x32a888: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x32a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x32a88c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32a890: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32A890u;
    {
        const bool branch_taken_0x32a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a890) {
            ctx->pc = 0x32A8C8u;
            goto label_32a8c8;
        }
    }
    ctx->pc = 0x32A898u;
    // 0x32a898: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x32a898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32a89c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A89Cu;
    {
        const bool branch_taken_0x32a89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A89Cu;
        // 0x32a8a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a89c) {
            ctx->pc = 0x32A8B0u;
            goto label_32a8b0;
        }
    }
    ctx->pc = 0x32A8A4u;
    // 0x32a8a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A8A4u;
    {
        const bool branch_taken_0x32a8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8A4u;
        // 0x32a8a8: 0xa2020164  sb          $v0, 0x164($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a8a4) {
            ctx->pc = 0x32A8B8u;
            goto label_32a8b8;
        }
    }
    ctx->pc = 0x32A8ACu;
    // 0x32a8ac: 0x0  nop
    ctx->pc = 0x32a8acu;
    // NOP
label_32a8b0:
    // 0x32a8b0: 0xa2030164  sb          $v1, 0x164($s0)
    ctx->pc = 0x32a8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a8b4: 0x0  nop
    ctx->pc = 0x32a8b4u;
    // NOP
label_32a8b8:
    // 0x32a8b8: 0x3c023f55  lui         $v0, 0x3F55
    ctx->pc = 0x32a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16213 << 16));
    // 0x32a8bc: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x32a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x32a8c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32A8C0u;
    {
        const bool branch_taken_0x32a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8C0u;
        // 0x32a8c4: 0xae020168  sw          $v0, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a8c0) {
            ctx->pc = 0x32A8D8u;
            goto label_32a8d8;
        }
    }
    ctx->pc = 0x32A8C8u;
label_32a8c8:
    // 0x32a8c8: 0xa2000164  sb          $zero, 0x164($s0)
    ctx->pc = 0x32a8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a8cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32a8d0: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x32a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x32a8d4: 0x0  nop
    ctx->pc = 0x32a8d4u;
    // NOP
label_32a8d8:
    // 0x32a8d8: 0x2604016c  addiu       $a0, $s0, 0x16C
    ctx->pc = 0x32a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    // 0x32a8dc: 0xc0e49f4  jal         func_3927D0
    ctx->pc = 0x32A8DCu;
    SET_GPR_U32(ctx, 31, 0x32A8E4u);
    ctx->pc = 0x32A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8DCu;
    // 0x32a8e0: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3927D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3927D0u, 0x32A8DCu, 0x32A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8E4u;
label_32a8e4:
    // 0x32a8e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a8e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a8ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x32A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8F0u;
        // 0x32a8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A8F8u;
}
