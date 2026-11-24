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

// Function: sub_002733D0
// Address: 0x2733d0 - 0x273470
void sub_002733D0_0x2733d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002733D0_0x2733d0");
#endif

    switch (ctx->pc) {
        case 0x2733e8u: goto label_2733e8;
        case 0x2733f8u: goto label_2733f8;
        case 0x273404u: goto label_273404;
        case 0x27341cu: goto label_27341c;
        case 0x273430u: goto label_273430;
        case 0x27344cu: goto label_27344c;
        case 0x273464u: goto label_273464;
        default: break;
    }

    ctx->pc = 0x2733d0u;

    // 0x2733d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2733d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2733d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2733d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2733d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2733d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2733dc: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x2733dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x2733e0: 0xc0b65e8  jal         func_2D97A0
    ctx->pc = 0x2733E0u;
    SET_GPR_U32(ctx, 31, 0x2733E8u);
    ctx->pc = 0x2733E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733E0u;
    // 0x2733e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D97A0u, 0x2733E0u, 0x2733E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733E8u;
label_2733e8:
    // 0x2733e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2733e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2733ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2733ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2733f0: 0xc0ce078  jal         func_3381E0
    ctx->pc = 0x2733F0u;
    SET_GPR_U32(ctx, 31, 0x2733F8u);
    ctx->pc = 0x2733F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733F0u;
    // 0x2733f4: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3381E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3381E0u, 0x2733F0u, 0x2733F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733F8u;
label_2733f8:
    // 0x2733f8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2733fc: 0xc0b65e4  jal         func_2D9790
    ctx->pc = 0x2733FCu;
    SET_GPR_U32(ctx, 31, 0x273404u);
    ctx->pc = 0x273400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733FCu;
    // 0x273400: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9790u, 0x2733FCu, 0x273404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273404u;
label_273404:
    // 0x273404: 0x978588b8  lhu         $a1, -0x7748($gp)
    ctx->pc = 0x273404u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936760)));
    // 0x273408: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x273408u;
    {
        const bool branch_taken_0x273408 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x27340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273408u;
        // 0x27340c: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273408) {
            ctx->pc = 0x273440u;
            goto label_273440;
        }
    }
    ctx->pc = 0x273410u;
    // 0x273410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273414: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x273414u;
    SET_GPR_U32(ctx, 31, 0x27341Cu);
    ctx->pc = 0x273418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273414u;
    // 0x273418: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x273414u, 0x27341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27341Cu;
label_27341c:
    // 0x27341c: 0xa78288c8  sh          $v0, -0x7738($gp)
    ctx->pc = 0x27341cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936776), (uint16_t)GPR_U32(ctx, 2));
    // 0x273420: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x273420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x273424: 0x978588c8  lhu         $a1, -0x7738($gp)
    ctx->pc = 0x273424u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x273428: 0xc07cc2c  jal         func_1F30B0
    ctx->pc = 0x273428u;
    SET_GPR_U32(ctx, 31, 0x273430u);
    ctx->pc = 0x27342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273428u;
    // 0x27342c: 0x2484f820  addiu       $a0, $a0, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x273428u, 0x273430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273430u;
label_273430:
    // 0x273430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273430u;
    {
        const bool branch_taken_0x273430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273430u;
        // 0x273434: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273430) {
            ctx->pc = 0x273440u;
            goto label_273440;
        }
    }
    ctx->pc = 0x273438u;
    // 0x273438: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x273438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x27343c: 0x0  nop
    ctx->pc = 0x27343cu;
    // NOP
label_273440:
    // 0x273440: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x273440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x273444: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x273444u;
    SET_GPR_U32(ctx, 31, 0x27344Cu);
    ctx->pc = 0x273448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273444u;
    // 0x273448: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x273444u, 0x27344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27344Cu;
label_27344c:
    // 0x27344c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273450: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x273450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x273454: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x273454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x273458: 0xa38288a4  sb          $v0, -0x775C($gp)
    ctx->pc = 0x273458u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 2));
    // 0x27345c: 0xc0ce978  jal         func_33A5E0
    ctx->pc = 0x27345Cu;
    SET_GPR_U32(ctx, 31, 0x273464u);
    ctx->pc = 0x273460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27345Cu;
    // 0x273460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5E0u, 0x27345Cu, 0x273464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273464u;
label_273464:
    // 0x273464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273468: 0x3e00008  jr          $ra
    ctx->pc = 0x273468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273468u;
        // 0x27346c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273470u;
}
