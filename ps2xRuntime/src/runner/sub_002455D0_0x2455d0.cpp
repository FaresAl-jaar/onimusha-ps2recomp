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

// Function: sub_002455D0
// Address: 0x2455d0 - 0x245668
void sub_002455D0_0x2455d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002455D0_0x2455d0");
#endif

    switch (ctx->pc) {
        case 0x2455d0u: goto label_2455d0;
        case 0x2455d4u: goto label_2455d4;
        case 0x2455d8u: goto label_2455d8;
        case 0x2455dcu: goto label_2455dc;
        case 0x2455e0u: goto label_2455e0;
        case 0x2455e4u: goto label_2455e4;
        case 0x2455e8u: goto label_2455e8;
        case 0x2455ecu: goto label_2455ec;
        case 0x2455f0u: goto label_2455f0;
        case 0x2455f4u: goto label_2455f4;
        case 0x2455f8u: goto label_2455f8;
        case 0x2455fcu: goto label_2455fc;
        case 0x245600u: goto label_245600;
        case 0x245604u: goto label_245604;
        case 0x245608u: goto label_245608;
        case 0x24560cu: goto label_24560c;
        case 0x245610u: goto label_245610;
        case 0x245614u: goto label_245614;
        case 0x245618u: goto label_245618;
        case 0x24561cu: goto label_24561c;
        case 0x245620u: goto label_245620;
        case 0x245624u: goto label_245624;
        case 0x245628u: goto label_245628;
        case 0x24562cu: goto label_24562c;
        case 0x245630u: goto label_245630;
        case 0x245634u: goto label_245634;
        case 0x245638u: goto label_245638;
        case 0x24563cu: goto label_24563c;
        case 0x245640u: goto label_245640;
        case 0x245644u: goto label_245644;
        case 0x245648u: goto label_245648;
        case 0x24564cu: goto label_24564c;
        case 0x245650u: goto label_245650;
        case 0x245654u: goto label_245654;
        case 0x245658u: goto label_245658;
        case 0x24565cu: goto label_24565c;
        case 0x245660u: goto label_245660;
        case 0x245664u: goto label_245664;
        default: break;
    }

    ctx->pc = 0x2455d0u;

label_2455d0:
    // 0x2455d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2455d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2455d4:
    // 0x2455d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2455d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2455d8:
    // 0x2455d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2455d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2455dc:
    // 0x2455dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2455dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2455e0:
    // 0x2455e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2455e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2455e4:
    // 0x2455e4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_2455e8:
    if (ctx->pc == 0x2455E8u) {
        ctx->pc = 0x2455E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455E4u;
        // 0x2455e8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2455ECu;
        goto label_2455ec;
    }
    ctx->pc = 0x2455E4u;
    {
        const bool branch_taken_0x2455e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2455E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455E4u;
        // 0x2455e8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455e4) {
            ctx->pc = 0x245600u;
            goto label_245600;
        }
    }
    ctx->pc = 0x2455ECu;
label_2455ec:
    // 0x2455ec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2455ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2455f0:
    // 0x2455f0: 0xc090d8a  jal         func_243628
label_2455f4:
    if (ctx->pc == 0x2455F4u) {
        ctx->pc = 0x2455F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455F0u;
        // 0x2455f4: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2455F8u;
        goto label_2455f8;
    }
    ctx->pc = 0x2455F0u;
    SET_GPR_U32(ctx, 31, 0x2455F8u);
    ctx->pc = 0x2455F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2455F0u;
    // 0x2455f4: 0x2484c7c0  addiu       $a0, $a0, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2455F0u, 0x2455F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455F8u;
label_2455f8:
    // 0x2455f8: 0x10000016  b           . + 4 + (0x16 << 2)
label_2455fc:
    if (ctx->pc == 0x2455FCu) {
        ctx->pc = 0x2455FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455F8u;
        // 0x2455fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245600u;
        goto label_245600;
    }
    ctx->pc = 0x2455F8u;
    {
        const bool branch_taken_0x2455f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455F8u;
        // 0x2455fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455f8) {
            ctx->pc = 0x245654u;
            goto label_245654;
        }
    }
    ctx->pc = 0x245600u;
label_245600:
    // 0x245600: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x245600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_245604:
    // 0x245604: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x245604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_245608:
    // 0x245608: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_24560c:
    if (ctx->pc == 0x24560Cu) {
        ctx->pc = 0x24560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245608u;
        // 0x24560c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245610u;
        goto label_245610;
    }
    ctx->pc = 0x245608u;
    {
        const bool branch_taken_0x245608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245608u;
        // 0x24560c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245608) {
            ctx->pc = 0x245650u;
            goto label_245650;
        }
    }
    ctx->pc = 0x245610u;
label_245610:
    // 0x245610: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_245614:
    // 0x245614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245618:
    // 0x245618: 0x40f809  jalr        $v0
label_24561c:
    if (ctx->pc == 0x24561Cu) {
        ctx->pc = 0x24561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245618u;
        // 0x24561c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245620u;
        goto label_245620;
    }
    ctx->pc = 0x245618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245620u);
        ctx->pc = 0x24561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245618u;
        // 0x24561c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245618u, 0x245620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245620u;
label_245620:
    // 0x245620: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x245620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_245624:
    // 0x245624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245628:
    // 0x245628: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x245628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24562c:
    // 0x24562c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x24562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_245630:
    // 0x245630: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x245630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_245634:
    // 0x245634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245638:
    // 0x245638: 0x40f809  jalr        $v0
label_24563c:
    if (ctx->pc == 0x24563Cu) {
        ctx->pc = 0x24563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245638u;
        // 0x24563c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245640u;
        goto label_245640;
    }
    ctx->pc = 0x245638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245640u);
        ctx->pc = 0x24563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245638u;
        // 0x24563c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245638u, 0x245640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245640u;
label_245640:
    // 0x245640: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x245640u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_245644:
    // 0x245644: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x245644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_245648:
    // 0x245648: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x245648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_24564c:
    // 0x24564c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x24564cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_245650:
    // 0x245650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245654:
    // 0x245654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245658:
    // 0x245658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24565c:
    // 0x24565c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24565cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_245660:
    // 0x245660: 0x3e00008  jr          $ra
label_245664:
    if (ctx->pc == 0x245664u) {
        ctx->pc = 0x245664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245660u;
        // 0x245664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245668u;
        goto label_fallthrough_0x245660;
    }
    ctx->pc = 0x245660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245660u;
        // 0x245664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245660:
    ctx->pc = 0x245668u;
}
