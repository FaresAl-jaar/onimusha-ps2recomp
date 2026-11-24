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

// Function: sub_004035A0
// Address: 0x4035a0 - 0x403670
void sub_004035A0_0x4035a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004035A0_0x4035a0");
#endif

    switch (ctx->pc) {
        case 0x4035a0u: goto label_4035a0;
        case 0x4035a4u: goto label_4035a4;
        case 0x4035a8u: goto label_4035a8;
        case 0x4035acu: goto label_4035ac;
        case 0x4035b0u: goto label_4035b0;
        case 0x4035b4u: goto label_4035b4;
        case 0x4035b8u: goto label_4035b8;
        case 0x4035bcu: goto label_4035bc;
        case 0x4035c0u: goto label_4035c0;
        case 0x4035c4u: goto label_4035c4;
        case 0x4035c8u: goto label_4035c8;
        case 0x4035ccu: goto label_4035cc;
        case 0x4035d0u: goto label_4035d0;
        case 0x4035d4u: goto label_4035d4;
        case 0x4035d8u: goto label_4035d8;
        case 0x4035dcu: goto label_4035dc;
        case 0x4035e0u: goto label_4035e0;
        case 0x4035e4u: goto label_4035e4;
        case 0x4035e8u: goto label_4035e8;
        case 0x4035ecu: goto label_4035ec;
        case 0x4035f0u: goto label_4035f0;
        case 0x4035f4u: goto label_4035f4;
        case 0x4035f8u: goto label_4035f8;
        case 0x4035fcu: goto label_4035fc;
        case 0x403600u: goto label_403600;
        case 0x403604u: goto label_403604;
        case 0x403608u: goto label_403608;
        case 0x40360cu: goto label_40360c;
        case 0x403610u: goto label_403610;
        case 0x403614u: goto label_403614;
        case 0x403618u: goto label_403618;
        case 0x40361cu: goto label_40361c;
        case 0x403620u: goto label_403620;
        case 0x403624u: goto label_403624;
        case 0x403628u: goto label_403628;
        case 0x40362cu: goto label_40362c;
        case 0x403630u: goto label_403630;
        case 0x403634u: goto label_403634;
        case 0x403638u: goto label_403638;
        case 0x40363cu: goto label_40363c;
        case 0x403640u: goto label_403640;
        case 0x403644u: goto label_403644;
        case 0x403648u: goto label_403648;
        case 0x40364cu: goto label_40364c;
        case 0x403650u: goto label_403650;
        case 0x403654u: goto label_403654;
        case 0x403658u: goto label_403658;
        case 0x40365cu: goto label_40365c;
        case 0x403660u: goto label_403660;
        case 0x403664u: goto label_403664;
        case 0x403668u: goto label_403668;
        case 0x40366cu: goto label_40366c;
        default: break;
    }

    ctx->pc = 0x4035a0u;

label_4035a0:
    // 0x4035a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4035a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4035a4:
    // 0x4035a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4035a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_4035a8:
    // 0x4035a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4035a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4035ac:
    // 0x4035ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4035acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4035b0:
    // 0x4035b0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4035b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4035b4:
    // 0x4035b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4035b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_4035b8:
    // 0x4035b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4035b8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000f000
label_4035bc:
    // 0x4035bc: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x4035bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_4035c0:
    // 0x4035c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4035c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000f000
label_4035c4:
    // 0x4035c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4035c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4035c8:
    // 0x4035c8: 0x0  nop
    ctx->pc = 0x4035c8u;
    // NOP
label_4035cc:
    // 0x4035cc: 0x0  nop
    ctx->pc = 0x4035ccu;
    // NOP
label_4035d0:
    // 0x4035d0: 0x0  nop
    ctx->pc = 0x4035d0u;
    // NOP
label_4035d4:
    // 0x4035d4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4035d8:
    if (ctx->pc == 0x4035D8u) {
        ctx->pc = 0x4035DCu;
        goto label_4035dc;
    }
    ctx->pc = 0x4035D4u;
    {
        const bool branch_taken_0x4035d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4035d4) {
            ctx->pc = 0x4035C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4035c0;
        }
    }
    ctx->pc = 0x4035DCu;
label_4035dc:
    // 0x4035dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4035dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_4035e0:
    // 0x4035e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4035e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4035e4:
    // 0x4035e4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4035e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4035e8:
    // 0x4035e8: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4035e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4035ec:
    // 0x4035ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4035ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000f000
label_4035f0:
    // 0x4035f0: 0x8c624760  lw          $v0, 0x4760($v1)
    ctx->pc = 0x4035f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18272)));
label_4035f4:
    // 0x4035f4: 0x40f809  jalr        $v0
label_4035f8:
    if (ctx->pc == 0x4035F8u) {
        ctx->pc = 0x4035FCu;
        goto label_4035fc;
    }
    ctx->pc = 0x4035F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4035FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4035F4u, 0x4035FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4035FCu;
label_4035fc:
    // 0x4035fc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4035fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403600:
    // 0x403600: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x403600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_403604:
    // 0x403604: 0x8c434764  lw          $v1, 0x4764($v0)
    ctx->pc = 0x403604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18276)));
label_403608:
    // 0x403608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x403608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40360c:
    // 0x40360c: 0x60f809  jalr        $v1
label_403610:
    if (ctx->pc == 0x403610u) {
        ctx->pc = 0x403610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40360Cu;
        // 0x403610: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403614u;
        goto label_403614;
    }
    ctx->pc = 0x40360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403614u);
        ctx->pc = 0x403610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40360Cu;
        // 0x403610: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40360Cu, 0x403614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403614u;
label_403614:
    // 0x403614: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403618:
    // 0x403618: 0x8c43474c  lw          $v1, 0x474C($v0)
    ctx->pc = 0x403618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18252)));
label_40361c:
    // 0x40361c: 0x60f809  jalr        $v1
label_403620:
    if (ctx->pc == 0x403620u) {
        ctx->pc = 0x403620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40361Cu;
        // 0x403620: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = 0x403624u;
        goto label_403624;
    }
    ctx->pc = 0x40361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403624u);
        ctx->pc = 0x403620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40361Cu;
        // 0x403620: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40361Cu, 0x403624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403624u;
label_403624:
    // 0x403624: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403628:
    // 0x403628: 0x8c434750  lw          $v1, 0x4750($v0)
    ctx->pc = 0x403628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18256)));
label_40362c:
    // 0x40362c: 0x60f809  jalr        $v1
label_403630:
    if (ctx->pc == 0x403630u) {
        ctx->pc = 0x403634u;
        goto label_403634;
    }
    ctx->pc = 0x40362Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40362Cu, 0x403634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403634u;
label_403634:
    // 0x403634: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403638:
    // 0x403638: 0x8c43475c  lw          $v1, 0x475C($v0)
    ctx->pc = 0x403638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18268)));
label_40363c:
    // 0x40363c: 0x60f809  jalr        $v1
label_403640:
    if (ctx->pc == 0x403640u) {
        ctx->pc = 0x403640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40363Cu;
        // 0x403640: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403644u;
        goto label_403644;
    }
    ctx->pc = 0x40363Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403644u);
        ctx->pc = 0x403640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40363Cu;
        // 0x403640: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40363Cu, 0x403644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403644u;
label_403644:
    // 0x403644: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403648:
    // 0x403648: 0x8c434754  lw          $v1, 0x4754($v0)
    ctx->pc = 0x403648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18260)));
label_40364c:
    // 0x40364c: 0x60f809  jalr        $v1
label_403650:
    if (ctx->pc == 0x403650u) {
        ctx->pc = 0x403654u;
        goto label_403654;
    }
    ctx->pc = 0x40364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403654u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40364Cu, 0x403654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403654u;
label_403654:
    // 0x403654: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403658:
    // 0x403658: 0x8c434758  lw          $v1, 0x4758($v0)
    ctx->pc = 0x403658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18264)));
label_40365c:
    // 0x40365c: 0x60f809  jalr        $v1
label_403660:
    if (ctx->pc == 0x403660u) {
        ctx->pc = 0x403664u;
        goto label_403664;
    }
    ctx->pc = 0x40365Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40365Cu, 0x403664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403664u;
label_403664:
    // 0x403664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x403664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_403668:
    // 0x403668: 0x3e00008  jr          $ra
label_40366c:
    if (ctx->pc == 0x40366Cu) {
        ctx->pc = 0x40366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403668u;
        // 0x40366c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403670u;
        goto label_fallthrough_0x403668;
    }
    ctx->pc = 0x403668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403668u;
        // 0x40366c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x403668:
    ctx->pc = 0x403670u;
}
