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

// Function: sub_0023F600
// Address: 0x23f600 - 0x23f6fc
void sub_0023F600_0x23f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F600_0x23f600");
#endif

    switch (ctx->pc) {
        case 0x23f658u: goto label_23f658;
        case 0x23f660u: goto label_23f660;
        case 0x23f67cu: goto label_23f67c;
        case 0x23f6a0u: goto label_23f6a0;
        case 0x23f6c0u: goto label_23f6c0;
        default: break;
    }

    ctx->pc = 0x23f600u;

    // 0x23f600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f604: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23f608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f610: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f614: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23f614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f618: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23f61c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23f61cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f628: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23f62c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23f630: 0x8e0801a8  lw          $t0, 0x1A8($s0)
    ctx->pc = 0x23f630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x23f634: 0x11030029  beq         $t0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x23F634u;
    {
        const bool branch_taken_0x23f634 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F634u;
        // 0x23f638: 0x8e1301e8  lw          $s3, 0x1E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f634) {
            ctx->pc = 0x23F6DCu;
            goto label_23f6dc;
        }
    }
    ctx->pc = 0x23F63Cu;
    // 0x23f63c: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x23f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x23f640: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x23f640u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x23f644: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x23f644u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f648: 0x260501e4  addiu       $a1, $s0, 0x1E4
    ctx->pc = 0x23f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x23f64c: 0x26060220  addiu       $a2, $s0, 0x220
    ctx->pc = 0x23f64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x23f650: 0xc08ffe2  jal         func_23FF88
    ctx->pc = 0x23F650u;
    SET_GPR_U32(ctx, 31, 0x23F658u);
    ctx->pc = 0x23F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F650u;
    // 0x23f654: 0x26070420  addiu       $a3, $s0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FF88u, 0x23F650u, 0x23F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F658u;
label_23f658:
    // 0x23f658: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23f658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f65c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23f660:
    // 0x23f660: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x23f660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x23f664: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x23f664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x23f668: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x23f668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23f66c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23f670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f674: 0xc090ab0  jal         func_242AC0
    ctx->pc = 0x23F674u;
    SET_GPR_U32(ctx, 31, 0x23F67Cu);
    ctx->pc = 0x23F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F674u;
    // 0x23f678: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242AC0u, 0x23F674u, 0x23F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F67Cu;
label_23f67c:
    // 0x23f67c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23f67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f680: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23F680u;
    {
        const bool branch_taken_0x23f680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f680) {
            ctx->pc = 0x23F684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F680u;
            // 0x23f684: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f660;
        }
    }
    ctx->pc = 0x23F688u;
    // 0x23f688: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x23f688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23f68c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23F68Cu;
    {
        const bool branch_taken_0x23f68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f68c) {
            ctx->pc = 0x23F690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F68Cu;
            // 0x23f690: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F6D0u;
            goto label_23f6d0;
        }
    }
    ctx->pc = 0x23F694u;
    // 0x23f694: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23f694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f698: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f69c: 0x0  nop
    ctx->pc = 0x23f69cu;
    // NOP
label_23f6a0:
    // 0x23f6a0: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x23f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x23f6a4: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x23f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x23f6a8: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x23f6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23f6ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23f6b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23f6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f6b4: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x23f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x23f6b8: 0xc090ab0  jal         func_242AC0
    ctx->pc = 0x23F6B8u;
    SET_GPR_U32(ctx, 31, 0x23F6C0u);
    ctx->pc = 0x23F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6B8u;
    // 0x23f6bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242AC0u, 0x23F6B8u, 0x23F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6C0u;
label_23f6c0:
    // 0x23f6c0: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23f6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f6c4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x23F6C4u;
    {
        const bool branch_taken_0x23f6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f6c4) {
            ctx->pc = 0x23F6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F6C4u;
            // 0x23f6c8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f6a0;
        }
    }
    ctx->pc = 0x23F6CCu;
    // 0x23f6cc: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x23f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_23f6d0:
    // 0x23f6d0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x23f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x23f6d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23f6d8: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x23f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
label_23f6dc:
    // 0x23f6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f6e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f6e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f6e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f6e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f6e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f6e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f6ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23f6ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f6f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23f6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23f6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6F4u;
        // 0x23f6f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F6FCu;
}
