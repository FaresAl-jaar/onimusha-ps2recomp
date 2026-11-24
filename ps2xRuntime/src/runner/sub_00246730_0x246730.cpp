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

// Function: sub_00246730
// Address: 0x246730 - 0x2467cc
void sub_00246730_0x246730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246730_0x246730");
#endif

    switch (ctx->pc) {
        case 0x246758u: goto label_246758;
        case 0x246760u: goto label_246760;
        case 0x246770u: goto label_246770;
        case 0x246780u: goto label_246780;
        case 0x246790u: goto label_246790;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467b8u: goto label_2467b8;
        default: break;
    }

    ctx->pc = 0x246730u;

    // 0x246730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246734: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246738: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x246738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24673c: 0x2450e980  addiu       $s0, $v0, -0x1680
    ctx->pc = 0x24673cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    // 0x246740: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x246740u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x4CE982u));
    // 0x246744: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x246744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246748: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x246748u;
    {
        const bool branch_taken_0x246748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246748u;
        // 0x24674c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246748) {
            ctx->pc = 0x2467B8u;
            goto label_2467b8;
        }
    }
    ctx->pc = 0x246750u;
    // 0x246750: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x246750u;
    SET_GPR_U32(ctx, 31, 0x246758u);
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x246750u, 0x246758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246758u;
label_246758:
    // 0x246758: 0xc091a44  jal         func_246910
    ctx->pc = 0x246758u;
    SET_GPR_U32(ctx, 31, 0x246760u);
    ctx->pc = 0x24675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246758u;
    // 0x24675c: 0x24042400  addiu       $a0, $zero, 0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246758u, 0x246760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246760u;
label_246760:
    // 0x246760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246764: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x246764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x246768: 0xc091aea  jal         func_246BA8
    ctx->pc = 0x246768u;
    SET_GPR_U32(ctx, 31, 0x246770u);
    ctx->pc = 0x24676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246768u;
    // 0x24676c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246BA8u, 0x246768u, 0x246770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246770u;
label_246770:
    // 0x246770: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246770u;
    {
        const bool branch_taken_0x246770 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x246774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246770u;
        // 0x246774: 0x24042402  addiu       $a0, $zero, 0x2402 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246770) {
            ctx->pc = 0x246788u;
            goto label_246788;
        }
    }
    ctx->pc = 0x246778u;
    // 0x246778: 0xc091a44  jal         func_246910
    ctx->pc = 0x246778u;
    SET_GPR_U32(ctx, 31, 0x246780u);
    ctx->pc = 0x24677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246778u;
    // 0x24677c: 0x24042401  addiu       $a0, $zero, 0x2401 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9217));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246778u, 0x246780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246780u;
label_246780:
    // 0x246780: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x246780u;
    {
        const bool branch_taken_0x246780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246780) {
            ctx->pc = 0x2467B0u;
            goto label_2467b0;
        }
    }
    ctx->pc = 0x246788u;
label_246788:
    // 0x246788: 0xc091a44  jal         func_246910
    ctx->pc = 0x246788u;
    SET_GPR_U32(ctx, 31, 0x246790u);
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246788u, 0x246790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246790u;
label_246790:
    // 0x246790: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x246790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246794: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246794u;
    {
        const bool branch_taken_0x246794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246794) {
            ctx->pc = 0x2467B0u;
            goto label_2467b0;
        }
    }
    ctx->pc = 0x24679Cu;
    // 0x24679c: 0xc094bae  jal         func_252EB8
    ctx->pc = 0x24679Cu;
    SET_GPR_U32(ctx, 31, 0x2467A4u);
    ctx->pc = 0x252EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EB8u, 0x24679Cu, 0x2467A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467A4u;
label_2467a4:
    // 0x2467a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2467A4u;
    {
        const bool branch_taken_0x2467a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467A4u;
        // 0x2467a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467a4) {
            ctx->pc = 0x2467BCu;
            goto label_2467bc;
        }
    }
    ctx->pc = 0x2467ACu;
    // 0x2467ac: 0x0  nop
    ctx->pc = 0x2467acu;
    // NOP
label_2467b0:
    // 0x2467b0: 0xc094bae  jal         func_252EB8
    ctx->pc = 0x2467B0u;
    SET_GPR_U32(ctx, 31, 0x2467B8u);
    ctx->pc = 0x252EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EB8u, 0x2467B0u, 0x2467B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467B8u;
label_2467b8:
    // 0x2467b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2467b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2467bc:
    // 0x2467bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2467bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2467c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2467c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2467c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2467C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2467C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467C4u;
        // 0x2467c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2467C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2467CCu;
}
