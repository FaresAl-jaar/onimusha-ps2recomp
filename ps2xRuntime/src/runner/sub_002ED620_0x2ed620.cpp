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

// Function: sub_002ED620
// Address: 0x2ed620 - 0x2ed6e0
void sub_002ED620_0x2ed620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED620_0x2ed620");
#endif

    switch (ctx->pc) {
        case 0x2ed694u: goto label_2ed694;
        case 0x2ed6a8u: goto label_2ed6a8;
        case 0x2ed6bcu: goto label_2ed6bc;
        case 0x2ed6d0u: goto label_2ed6d0;
        default: break;
    }

    ctx->pc = 0x2ed620u;

    // 0x2ed620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed624: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2ed624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2ed628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed62c: 0x24030c83  addiu       $v1, $zero, 0xC83
    ctx->pc = 0x2ed62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3203));
    // 0x2ed630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ed630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ed634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed638: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2ed638u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2ed63c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED63Cu;
    {
        const bool branch_taken_0x2ed63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED63Cu;
        // 0x2ed640: 0x24030c82  addiu       $v1, $zero, 0xC82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed63c) {
            ctx->pc = 0x2ED680u;
            goto label_2ed680;
        }
    }
    ctx->pc = 0x2ED644u;
    // 0x2ed644: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2ED644u;
    {
        const bool branch_taken_0x2ed644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed644) {
            ctx->pc = 0x2ED680u;
            goto label_2ed680;
        }
    }
    ctx->pc = 0x2ED64Cu;
    // 0x2ed64c: 0x24030c81  addiu       $v1, $zero, 0xC81
    ctx->pc = 0x2ed64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3201));
    // 0x2ed650: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED650u;
    {
        const bool branch_taken_0x2ed650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED650u;
        // 0x2ed654: 0x24030f33  addiu       $v1, $zero, 0xF33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3891));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed650) {
            ctx->pc = 0x2ED680u;
            goto label_2ed680;
        }
    }
    ctx->pc = 0x2ED658u;
    // 0x2ed658: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED658u;
    {
        const bool branch_taken_0x2ed658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed658) {
            ctx->pc = 0x2ED680u;
            goto label_2ed680;
        }
    }
    ctx->pc = 0x2ED660u;
    // 0x2ed660: 0x24030f32  addiu       $v1, $zero, 0xF32
    ctx->pc = 0x2ed660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3890));
    // 0x2ed664: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED664u;
    {
        const bool branch_taken_0x2ed664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED664u;
        // 0x2ed668: 0x24030f31  addiu       $v1, $zero, 0xF31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3889));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed664) {
            ctx->pc = 0x2ED680u;
            goto label_2ed680;
        }
    }
    ctx->pc = 0x2ED66Cu;
    // 0x2ed66c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED66Cu;
    {
        const bool branch_taken_0x2ed66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed66c) {
            ctx->pc = 0x2ED680u;
            goto label_2ed680;
        }
    }
    ctx->pc = 0x2ED674u;
    // 0x2ed674: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2ED674u;
    {
        const bool branch_taken_0x2ed674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed674) {
            ctx->pc = 0x2ED6D0u;
            goto label_2ed6d0;
        }
    }
    ctx->pc = 0x2ED67Cu;
    // 0x2ed67c: 0x0  nop
    ctx->pc = 0x2ed67cu;
    // NOP
label_2ed680:
    // 0x2ed680: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ed680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ed684: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2ed684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ed688: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x2ed688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x2ed68c: 0xc05d6a0  jal         func_175A80
    ctx->pc = 0x2ED68Cu;
    SET_GPR_U32(ctx, 31, 0x2ED694u);
    ctx->pc = 0x2ED690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED68Cu;
    // 0x2ed690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A80u, 0x2ED68Cu, 0x2ED694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED694u;
label_2ed694:
    // 0x2ed694: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ed694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ed698: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2ed698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ed69c: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x2ed69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x2ed6a0: 0xc05d6a0  jal         func_175A80
    ctx->pc = 0x2ED6A0u;
    SET_GPR_U32(ctx, 31, 0x2ED6A8u);
    ctx->pc = 0x2ED6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6A0u;
    // 0x2ed6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A80u, 0x2ED6A0u, 0x2ED6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6A8u;
label_2ed6a8:
    // 0x2ed6a8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ed6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ed6ac: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2ed6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ed6b0: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x2ed6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x2ed6b4: 0xc05d6a0  jal         func_175A80
    ctx->pc = 0x2ED6B4u;
    SET_GPR_U32(ctx, 31, 0x2ED6BCu);
    ctx->pc = 0x2ED6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6B4u;
    // 0x2ed6b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A80u, 0x2ED6B4u, 0x2ED6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6BCu;
label_2ed6bc:
    // 0x2ed6bc: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2ed6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2ed6c0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2ed6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ed6c4: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x2ed6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x2ed6c8: 0xc05d6a0  jal         func_175A80
    ctx->pc = 0x2ED6C8u;
    SET_GPR_U32(ctx, 31, 0x2ED6D0u);
    ctx->pc = 0x2ED6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6C8u;
    // 0x2ed6cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A80u, 0x2ED6C8u, 0x2ED6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6D0u;
label_2ed6d0:
    // 0x2ed6d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6D8u;
        // 0x2ed6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED6E0u;
}
