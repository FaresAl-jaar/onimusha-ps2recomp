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

// Function: sub_00118580
// Address: 0x118580 - 0x118698
void sub_00118580_0x118580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118580_0x118580");
#endif

    switch (ctx->pc) {
        case 0x1185d4u: goto label_1185d4;
        case 0x1185f0u: goto label_1185f0;
        case 0x1185fcu: goto label_1185fc;
        case 0x118610u: goto label_118610;
        case 0x118628u: goto label_118628;
        case 0x11863cu: goto label_11863c;
        case 0x118648u: goto label_118648;
        case 0x118660u: goto label_118660;
        default: break;
    }

    ctx->pc = 0x118580u;

    // 0x118580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118584: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x118584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x118588: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x118588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11858c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11858cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x118590: 0x8c532ee0  lw          $s3, 0x2EE0($v0)
    ctx->pc = 0x118590u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x402EE0u));
    // 0x118594: 0x24673998  addiu       $a3, $v1, 0x3998
    ctx->pc = 0x118594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 14744));
    // 0x118598: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x118598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11859c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1185a0: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x1185a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1185a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1185a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1185a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1185a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185ac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1185acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1185b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1185b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1185b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1185b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1185b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1185bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1185c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1185c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185c4: 0x8c643998  lw          $a0, 0x3998($v1)
    ctx->pc = 0x1185c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x403998u));
    // 0x1185c8: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1185c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x40399Cu));
    // 0x1185cc: 0xc04615c  jal         func_118570
    ctx->pc = 0x1185CCu;
    SET_GPR_U32(ctx, 31, 0x1185D4u);
    ctx->pc = 0x1185D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185CCu;
    // 0x1185d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118570u, 0x1185CCu, 0x1185D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185D4u;
label_1185d4:
    // 0x1185d4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1185d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1185d8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1185d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1185dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1185dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185e0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x1185e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x1185e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1185e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185e8: 0xc04614c  jal         func_118530
    ctx->pc = 0x1185E8u;
    SET_GPR_U32(ctx, 31, 0x1185F0u);
    ctx->pc = 0x1185ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185E8u;
    // 0x1185ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118530u, 0x1185E8u, 0x1185F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185F0u;
label_1185f0:
    // 0x1185f0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1185f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1185f4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x1185F4u;
    SET_GPR_U32(ctx, 31, 0x1185FCu);
    ctx->pc = 0x1185F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185F4u;
    // 0x1185f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x1185F4u, 0x1185FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185FCu;
label_1185fc:
    // 0x1185fc: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1185fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118600: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x118600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118608: 0xc04614c  jal         func_118530
    ctx->pc = 0x118608u;
    SET_GPR_U32(ctx, 31, 0x118610u);
    ctx->pc = 0x11860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118608u;
    // 0x11860c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118530u, 0x118608u, 0x118610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118610u;
label_118610:
    // 0x118610: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x118610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118614: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x118614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x118618: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x118618u;
    {
        const bool branch_taken_0x118618 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x11861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118618u;
        // 0x11861c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118618) {
            ctx->pc = 0x118670u;
            goto label_118670;
        }
    }
    ctx->pc = 0x118620u;
    // 0x118620: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x118620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118624: 0x0  nop
    ctx->pc = 0x118624u;
    // NOP
label_118628:
    // 0x118628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11862c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118630: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x118630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118634: 0xc04614c  jal         func_118530
    ctx->pc = 0x118634u;
    SET_GPR_U32(ctx, 31, 0x11863Cu);
    ctx->pc = 0x118638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118634u;
    // 0x118638: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118530u, 0x118634u, 0x11863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11863Cu;
label_11863c:
    // 0x11863c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11863cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x118640: 0xc049f18  jal         func_127C60
    ctx->pc = 0x118640u;
    SET_GPR_U32(ctx, 31, 0x118648u);
    ctx->pc = 0x118644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118640u;
    // 0x118644: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x118640u, 0x118648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118648u;
label_118648:
    // 0x118648: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x118648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11864c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11864cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118650: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x118650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118658: 0xc04614c  jal         func_118530
    ctx->pc = 0x118658u;
    SET_GPR_U32(ctx, 31, 0x118660u);
    ctx->pc = 0x11865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118658u;
    // 0x11865c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118530u, 0x118658u, 0x118660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118660u;
label_118660:
    // 0x118660: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x118660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118664: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x118664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x118668: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x118668u;
    {
        const bool branch_taken_0x118668 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118668u;
        // 0x11866c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118668) {
            ctx->pc = 0x118628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118628;
        }
    }
    ctx->pc = 0x118670u;
label_118670:
    // 0x118670: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x118670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118674: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118678: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x118678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11867c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11867cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118680: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x118680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118684: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x118684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118688: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x118688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11868c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11868cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118690: 0x3e00008  jr          $ra
    ctx->pc = 0x118690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118690u;
        // 0x118694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118698u;
}
