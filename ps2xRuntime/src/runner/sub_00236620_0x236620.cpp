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

// Function: sub_00236620
// Address: 0x236620 - 0x2366d0
void sub_00236620_0x236620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236620_0x236620");
#endif

    switch (ctx->pc) {
        case 0x236640u: goto label_236640;
        case 0x236650u: goto label_236650;
        case 0x236658u: goto label_236658;
        case 0x236660u: goto label_236660;
        case 0x236674u: goto label_236674;
        default: break;
    }

    ctx->pc = 0x236620u;

    // 0x236620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236628: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23662c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236634: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x236634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x236638: 0xc08afd2  jal         func_22BF48
    ctx->pc = 0x236638u;
    SET_GPR_U32(ctx, 31, 0x236640u);
    ctx->pc = 0x23663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236638u;
    // 0x23663c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BF48u, 0x236638u, 0x236640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236640u;
label_236640:
    // 0x236640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236640u;
    {
        const bool branch_taken_0x236640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236640) {
            ctx->pc = 0x236650u;
            goto label_236650;
        }
    }
    ctx->pc = 0x236648u;
    // 0x236648: 0xc08d806  jal         func_236018
    ctx->pc = 0x236648u;
    SET_GPR_U32(ctx, 31, 0x236650u);
    ctx->pc = 0x23664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236648u;
    // 0x23664c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236018u, 0x236648u, 0x236650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236650u;
label_236650:
    // 0x236650: 0xc08b18e  jal         func_22C638
    ctx->pc = 0x236650u;
    SET_GPR_U32(ctx, 31, 0x236658u);
    ctx->pc = 0x236654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236650u;
    // 0x236654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C638u, 0x236650u, 0x236658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236658u;
label_236658:
    // 0x236658: 0xc08afd2  jal         func_22BF48
    ctx->pc = 0x236658u;
    SET_GPR_U32(ctx, 31, 0x236660u);
    ctx->pc = 0x23665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236658u;
    // 0x23665c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BF48u, 0x236658u, 0x236660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236660u;
label_236660:
    // 0x236660: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x236660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236664: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x236664u;
    {
        const bool branch_taken_0x236664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x236664) {
            ctx->pc = 0x236668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236664u;
            // 0x236668: 0x86040098  lh          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236678u;
            goto label_236678;
        }
    }
    ctx->pc = 0x23666Cu;
    // 0x23666c: 0xc08d8ea  jal         func_2363A8
    ctx->pc = 0x23666Cu;
    SET_GPR_U32(ctx, 31, 0x236674u);
    ctx->pc = 0x236670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23666Cu;
    // 0x236670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2363A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2363A8u, 0x23666Cu, 0x236674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236674u;
label_236674:
    // 0x236674: 0x86040098  lh          $a0, 0x98($s0)
    ctx->pc = 0x236674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_236678:
    // 0x236678: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x236678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23667c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23667Cu;
    {
        const bool branch_taken_0x23667c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x236680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23667Cu;
        // 0x236680: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23667c) {
            ctx->pc = 0x2366A4u;
            goto label_2366a4;
        }
    }
    ctx->pc = 0x236684u;
    // 0x236684: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x236684u;
    {
        const bool branch_taken_0x236684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x236688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236684u;
        // 0x236688: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236684) {
            ctx->pc = 0x2366A4u;
            goto label_2366a4;
        }
    }
    ctx->pc = 0x23668Cu;
    // 0x23668c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23668Cu;
    {
        const bool branch_taken_0x23668c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x236690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23668Cu;
        // 0x236690: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23668c) {
            ctx->pc = 0x2366A4u;
            goto label_2366a4;
        }
    }
    ctx->pc = 0x236694u;
    // 0x236694: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236694u;
    {
        const bool branch_taken_0x236694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x236698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236694u;
        // 0x236698: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236694) {
            ctx->pc = 0x2366A4u;
            goto label_2366a4;
        }
    }
    ctx->pc = 0x23669Cu;
    // 0x23669c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23669Cu;
    {
        const bool branch_taken_0x23669c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2366A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23669Cu;
        // 0x2366a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23669c) {
            ctx->pc = 0x2366C0u;
            goto label_2366c0;
        }
    }
    ctx->pc = 0x2366A4u;
label_2366a4:
    // 0x2366a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2366a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2366a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2366a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2366ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2366acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2366b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2366b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2366b4: 0x808d964  j           func_236590
    ctx->pc = 0x2366B4u;
    ctx->pc = 0x2366B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366B4u;
    // 0x2366b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236590u;
    sub_00236590_0x236590(rdram, ctx, runtime); return;
    ctx->pc = 0x2366BCu;
    // 0x2366bc: 0x0  nop
    ctx->pc = 0x2366bcu;
    // NOP
label_2366c0:
    // 0x2366c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2366c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2366c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2366c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2366c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2366C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2366CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366C8u;
        // 0x2366cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2366C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2366D0u;
}
