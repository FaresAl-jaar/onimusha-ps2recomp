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

// Function: sub_0021F620
// Address: 0x21f620 - 0x21f710
void sub_0021F620_0x21f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F620_0x21f620");
#endif

    switch (ctx->pc) {
        case 0x21f650u: goto label_21f650;
        case 0x21f688u: goto label_21f688;
        default: break;
    }

    ctx->pc = 0x21f620u;

    // 0x21f620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f628: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f62c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21f62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f630: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21f630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21f634: 0x26540dc4  addiu       $s4, $s2, 0xDC4
    ctx->pc = 0x21f634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 3524));
    // 0x21f638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f63c: 0x265136b4  addiu       $s1, $s2, 0x36B4
    ctx->pc = 0x21f63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 14004));
    // 0x21f640: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21f644: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21f648: 0xc084144  jal         func_210510
    ctx->pc = 0x21F648u;
    SET_GPR_U32(ctx, 31, 0x21F650u);
    ctx->pc = 0x21F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F648u;
    // 0x21f64c: 0x8e5036b0  lw          $s0, 0x36B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210510u, 0x21F648u, 0x21F650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F650u;
label_21f650:
    // 0x21f650: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x21F650u;
    {
        const bool branch_taken_0x21f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f650) {
            ctx->pc = 0x21F654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F650u;
            // 0x21f654: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F6F4u;
            goto label_21f6f4;
        }
    }
    ctx->pc = 0x21F658u;
    // 0x21f658: 0x8e020dac  lw          $v0, 0xDAC($s0)
    ctx->pc = 0x21f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
    // 0x21f65c: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21F65Cu;
    {
        const bool branch_taken_0x21f65c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x21F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F65Cu;
        // 0x21f660: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f65c) {
            ctx->pc = 0x21F6A0u;
            goto label_21f6a0;
        }
    }
    ctx->pc = 0x21F664u;
    // 0x21f664: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21f668: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x21f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x21f66c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21F66Cu;
    {
        const bool branch_taken_0x21f66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F66Cu;
        // 0x21f670: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f66c) {
            ctx->pc = 0x21F678u;
            goto label_21f678;
        }
    }
    ctx->pc = 0x21F674u;
    // 0x21f674: 0x8e110dd4  lw          $s1, 0xDD4($s0)
    ctx->pc = 0x21f674u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3540)));
label_21f678:
    // 0x21f678: 0x622000a  bltzl       $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x21F678u;
    {
        const bool branch_taken_0x21f678 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x21f678) {
            ctx->pc = 0x21F67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F678u;
            // 0x21f67c: 0x8e020db0  lw          $v0, 0xDB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F6A4u;
            goto label_21f6a4;
        }
    }
    ctx->pc = 0x21F680u;
    // 0x21f680: 0xc087dc4  jal         func_21F710
    ctx->pc = 0x21F680u;
    SET_GPR_U32(ctx, 31, 0x21F688u);
    ctx->pc = 0x21F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F680u;
    // 0x21f684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F710u, 0x21F680u, 0x21F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F688u;
label_21f688:
    // 0x21f688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21f688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f68c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21f690: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F690u;
    {
        const bool branch_taken_0x21f690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F690u;
        // 0x21f694: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f690) {
            ctx->pc = 0x21F6A0u;
            goto label_21f6a0;
        }
    }
    ctx->pc = 0x21F698u;
    // 0x21f698: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21f698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f69c: 0xae020dac  sw          $v0, 0xDAC($s0)
    ctx->pc = 0x21f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 2));
label_21f6a0:
    // 0x21f6a0: 0x8e020db0  lw          $v0, 0xDB0($s0)
    ctx->pc = 0x21f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_21f6a4:
    // 0x21f6a4: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F6A4u;
    {
        const bool branch_taken_0x21f6a4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x21f6a4) {
            ctx->pc = 0x21F6C8u;
            goto label_21f6c8;
        }
    }
    ctx->pc = 0x21F6ACu;
    // 0x21f6ac: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x21f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x21f6b0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F6B0u;
    {
        const bool branch_taken_0x21f6b0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x21f6b0) {
            ctx->pc = 0x21F6C8u;
            goto label_21f6c8;
        }
    }
    ctx->pc = 0x21F6B8u;
    // 0x21f6b8: 0xae020db0  sw          $v0, 0xDB0($s0)
    ctx->pc = 0x21f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 2));
    // 0x21f6bc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x21f6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f6c0: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x21f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x21f6c4: 0xae020db4  sw          $v0, 0xDB4($s0)
    ctx->pc = 0x21f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 2));
label_21f6c8:
    // 0x21f6c8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F6C8u;
    {
        const bool branch_taken_0x21f6c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6C8u;
        // 0x21f6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6c8) {
            ctx->pc = 0x21F6F0u;
            goto label_21f6f0;
        }
    }
    ctx->pc = 0x21F6D0u;
    // 0x21f6d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f6d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f6d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f6dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21f6dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f6e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21f6e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f6e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21f6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f6e8: 0x8087dd6  j           func_21F758
    ctx->pc = 0x21F6E8u;
    ctx->pc = 0x21F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6E8u;
    // 0x21f6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F758u;
    sub_0021F758_0x21f758(rdram, ctx, runtime); return;
    ctx->pc = 0x21F6F0u;
label_21f6f0:
    // 0x21f6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f6f4:
    // 0x21f6f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f6f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f6fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21f6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f700: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21f700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f704: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21f704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f708: 0x3e00008  jr          $ra
    ctx->pc = 0x21F708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F708u;
        // 0x21f70c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F710u;
}
