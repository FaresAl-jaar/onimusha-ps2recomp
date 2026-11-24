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

// Function: sub_00232320
// Address: 0x232320 - 0x232414
void sub_00232320_0x232320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232320_0x232320");
#endif

    switch (ctx->pc) {
        case 0x232384u: goto label_232384;
        case 0x232394u: goto label_232394;
        case 0x2323a4u: goto label_2323a4;
        case 0x2323c0u: goto label_2323c0;
        case 0x2323e0u: goto label_2323e0;
        default: break;
    }

    ctx->pc = 0x232320u;

    // 0x232320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232324: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x232324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x232328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23232c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23232cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232338: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23233c: 0x2452aa38  addiu       $s2, $v0, -0x55C8
    ctx->pc = 0x23233cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x232340: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x232344: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x232344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232348: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x232348u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23234c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23234cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x232350: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x232350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x232354: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x232354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x232358: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x232358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23235c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x23235cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x232360: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x232360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x232364: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x232364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x232368: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x232368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x23236c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x23236cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x232370: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x232370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x232374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232378: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x232378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23237c: 0xc08c7a6  jal         func_231E98
    ctx->pc = 0x23237Cu;
    SET_GPR_U32(ctx, 31, 0x232384u);
    ctx->pc = 0x232380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23237Cu;
    // 0x232380: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E98u, 0x23237Cu, 0x232384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232384u;
label_232384:
    // 0x232384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232388: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x232388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23238c: 0xc08c7a6  jal         func_231E98
    ctx->pc = 0x23238Cu;
    SET_GPR_U32(ctx, 31, 0x232394u);
    ctx->pc = 0x232390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23238Cu;
    // 0x232390: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E98u, 0x23238Cu, 0x232394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232394u;
label_232394:
    // 0x232394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232398: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23239c: 0xc08c79a  jal         func_231E68
    ctx->pc = 0x23239Cu;
    SET_GPR_U32(ctx, 31, 0x2323A4u);
    ctx->pc = 0x2323A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23239Cu;
    // 0x2323a0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E68u, 0x23239Cu, 0x2323A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323A4u;
label_2323a4:
    // 0x2323a4: 0x9202003c  lbu         $v0, 0x3C($s0)
    ctx->pc = 0x2323a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2323a8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2323a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2323ac: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2323acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2323b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2323b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2323b4: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x2323b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x2323b8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2323b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2323bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2323bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2323c0:
    // 0x2323c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2323c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2323c4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2323c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2323c8: 0x0  nop
    ctx->pc = 0x2323c8u;
    // NOP
    // 0x2323cc: 0x0  nop
    ctx->pc = 0x2323ccu;
    // NOP
    // 0x2323d0: 0x0  nop
    ctx->pc = 0x2323d0u;
    // NOP
    // 0x2323d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2323D4u;
    {
        const bool branch_taken_0x2323d4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2323D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323D4u;
        // 0x2323d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323d4) {
            ctx->pc = 0x2323C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2323c0;
        }
    }
    ctx->pc = 0x2323DCu;
    // 0x2323dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2323dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2323e0:
    // 0x2323e0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2323e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2323e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2323e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2323e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2323ec: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2323ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2323f0: 0x0  nop
    ctx->pc = 0x2323f0u;
    // NOP
    // 0x2323f4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2323F4u;
    {
        const bool branch_taken_0x2323f4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2323F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323F4u;
        // 0x2323f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323f4) {
            ctx->pc = 0x2323E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2323e0;
        }
    }
    ctx->pc = 0x2323FCu;
    // 0x2323fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2323fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232408: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23240c: 0x3e00008  jr          $ra
    ctx->pc = 0x23240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23240Cu;
        // 0x232410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23240Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232414u;
}
