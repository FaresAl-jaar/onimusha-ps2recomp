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

// Function: sub_00126650
// Address: 0x126650 - 0x126704
void sub_00126650_0x126650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126650_0x126650");
#endif

    switch (ctx->pc) {
        case 0x126674u: goto label_126674;
        case 0x126684u: goto label_126684;
        case 0x1266d0u: goto label_1266d0;
        case 0x1266dcu: goto label_1266dc;
        default: break;
    }

    ctx->pc = 0x126650u;

    // 0x126650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126654: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x126654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126658: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x126658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12665c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12665cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x126660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x126664: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x126664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x126668: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12666c: 0xc0498d2  jal         func_126348
    ctx->pc = 0x12666Cu;
    SET_GPR_U32(ctx, 31, 0x126674u);
    ctx->pc = 0x126670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12666Cu;
    // 0x126670: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126348u, 0x12666Cu, 0x126674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126674u;
label_126674:
    // 0x126674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x126674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12667c: 0xc0498d2  jal         func_126348
    ctx->pc = 0x12667Cu;
    SET_GPR_U32(ctx, 31, 0x126684u);
    ctx->pc = 0x126680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12667Cu;
    // 0x126680: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126348u, 0x12667Cu, 0x126684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126684u;
label_126684:
    // 0x126684: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x126684u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x126688: 0x12603f  dsra32      $t4, $s2, 0
    ctx->pc = 0x126688u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x12668c: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x12668cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x126690: 0x2583f  dsra32      $t3, $v0, 0
    ctx->pc = 0x126690u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x126694: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x126694u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x126698: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x126698u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12669c: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12669cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1266a0: 0xd6940  sll         $t5, $t5, 5
    ctx->pc = 0x1266a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x1266a4: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1266a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1266a8: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1266a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1266ac: 0xf7500  sll         $t6, $t7, 20
    ctx->pc = 0x1266acu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 20));
    // 0x1266b0: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1266b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1266b4: 0x16e5823  subu        $t3, $t3, $t6
    ctx->pc = 0x1266b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1266b8: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x1266b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1266bc: 0x19e0000d  blez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x1266BCu;
    {
        const bool branch_taken_0x1266bc = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x1266C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266BCu;
        // 0x1266c0: 0xb583c  dsll32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266bc) {
            ctx->pc = 0x1266F4u;
            goto label_1266f4;
        }
    }
    ctx->pc = 0x1266C4u;
    // 0x1266c4: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x1266c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1266c8: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1266c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x1266cc: 0x24c9025  or          $s2, $s2, $t4
    ctx->pc = 0x1266ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 12));
label_1266d0:
    // 0x1266d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1266d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266d4: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x1266D4u;
    SET_GPR_U32(ctx, 31, 0x1266DCu);
    ctx->pc = 0x1266D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266D4u;
    // 0x1266d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x1266D4u, 0x1266DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266DCu;
label_1266dc:
    // 0x1266dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1266dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1266e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1266e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1266e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1266e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1266e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1266e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1266ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1266ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1266F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266ECu;
        // 0x1266f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1266F4u;
label_1266f4:
    // 0x1266f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1266f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1266f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1266f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1266fc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1266FCu;
    {
        const bool branch_taken_0x1266fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266FCu;
        // 0x126700: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266fc) {
            ctx->pc = 0x1266D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1266d0;
        }
    }
    ctx->pc = 0x126704u;
}
