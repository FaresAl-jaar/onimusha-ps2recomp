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

// Function: sub_0031EEA0
// Address: 0x31eea0 - 0x31efdc
void sub_0031EEA0_0x31eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EEA0_0x31eea0");
#endif

    switch (ctx->pc) {
        case 0x31eee0u: goto label_31eee0;
        case 0x31eef0u: goto label_31eef0;
        case 0x31ef00u: goto label_31ef00;
        case 0x31ef10u: goto label_31ef10;
        case 0x31ef20u: goto label_31ef20;
        case 0x31ef30u: goto label_31ef30;
        case 0x31ef40u: goto label_31ef40;
        case 0x31ef50u: goto label_31ef50;
        case 0x31ef60u: goto label_31ef60;
        case 0x31ef70u: goto label_31ef70;
        case 0x31ef80u: goto label_31ef80;
        case 0x31ef90u: goto label_31ef90;
        case 0x31efa0u: goto label_31efa0;
        case 0x31efb0u: goto label_31efb0;
        case 0x31efc0u: goto label_31efc0;
        case 0x31efd0u: goto label_31efd0;
        default: break;
    }

    ctx->pc = 0x31eea0u;

    // 0x31eea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31eea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31eea8: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x31eea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x31eeac: 0x2463ff7e  addiu       $v1, $v1, -0x82
    ctx->pc = 0x31eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967166));
    // 0x31eeb0: 0x2c61001c  sltiu       $at, $v1, 0x1C
    ctx->pc = 0x31eeb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x31eeb4: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x31EEB4u;
    {
        const bool branch_taken_0x31eeb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEB4u;
        // 0x31eeb8: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eeb4) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EEBCu;
    // 0x31eebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31eec0: 0x24a5ca00  addiu       $a1, $a1, -0x3600
    ctx->pc = 0x31eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953472));
    // 0x31eec4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31eec8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31eecc: 0x600008  jr          $v1
    ctx->pc = 0x31EECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31EED8u: goto label_31eed8;
            case 0x31EEE8u: goto label_31eee8;
            case 0x31EEF8u: goto label_31eef8;
            case 0x31EF08u: goto label_31ef08;
            case 0x31EF18u: goto label_31ef18;
            case 0x31EF28u: goto label_31ef28;
            case 0x31EF38u: goto label_31ef38;
            case 0x31EF48u: goto label_31ef48;
            case 0x31EF58u: goto label_31ef58;
            case 0x31EF68u: goto label_31ef68;
            case 0x31EF78u: goto label_31ef78;
            case 0x31EF88u: goto label_31ef88;
            case 0x31EF98u: goto label_31ef98;
            case 0x31EFA8u: goto label_31efa8;
            case 0x31EFB8u: goto label_31efb8;
            case 0x31EFC8u: goto label_31efc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EECCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31EED4u;
    // 0x31eed4: 0x0  nop
    ctx->pc = 0x31eed4u;
    // NOP
label_31eed8:
    // 0x31eed8: 0xc0c795c  jal         func_31E570
    ctx->pc = 0x31EED8u;
    SET_GPR_U32(ctx, 31, 0x31EEE0u);
    ctx->pc = 0x31E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E570u, 0x31EED8u, 0x31EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEE0u;
label_31eee0:
    // 0x31eee0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x31EEE0u;
    {
        const bool branch_taken_0x31eee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eee0) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EEE8u;
label_31eee8:
    // 0x31eee8: 0xc0c79c8  jal         func_31E720
    ctx->pc = 0x31EEE8u;
    SET_GPR_U32(ctx, 31, 0x31EEF0u);
    ctx->pc = 0x31E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E720u, 0x31EEE8u, 0x31EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEF0u;
label_31eef0:
    // 0x31eef0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x31EEF0u;
    {
        const bool branch_taken_0x31eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eef0) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EEF8u;
label_31eef8:
    // 0x31eef8: 0xc0c795c  jal         func_31E570
    ctx->pc = 0x31EEF8u;
    SET_GPR_U32(ctx, 31, 0x31EF00u);
    ctx->pc = 0x31E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E570u, 0x31EEF8u, 0x31EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF00u;
label_31ef00:
    // 0x31ef00: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x31EF00u;
    {
        const bool branch_taken_0x31ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef00) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF08u;
label_31ef08:
    // 0x31ef08: 0xc0c795c  jal         func_31E570
    ctx->pc = 0x31EF08u;
    SET_GPR_U32(ctx, 31, 0x31EF10u);
    ctx->pc = 0x31E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E570u, 0x31EF08u, 0x31EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF10u;
label_31ef10:
    // 0x31ef10: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x31EF10u;
    {
        const bool branch_taken_0x31ef10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef10) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF18u;
label_31ef18:
    // 0x31ef18: 0xc0c795c  jal         func_31E570
    ctx->pc = 0x31EF18u;
    SET_GPR_U32(ctx, 31, 0x31EF20u);
    ctx->pc = 0x31E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E570u, 0x31EF18u, 0x31EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF20u;
label_31ef20:
    // 0x31ef20: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x31EF20u;
    {
        const bool branch_taken_0x31ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef20) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF28u;
label_31ef28:
    // 0x31ef28: 0xc0c795c  jal         func_31E570
    ctx->pc = 0x31EF28u;
    SET_GPR_U32(ctx, 31, 0x31EF30u);
    ctx->pc = 0x31E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E570u, 0x31EF28u, 0x31EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF30u;
label_31ef30:
    // 0x31ef30: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31EF30u;
    {
        const bool branch_taken_0x31ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef30) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF38u;
label_31ef38:
    // 0x31ef38: 0xc0c795c  jal         func_31E570
    ctx->pc = 0x31EF38u;
    SET_GPR_U32(ctx, 31, 0x31EF40u);
    ctx->pc = 0x31E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E570u, 0x31EF38u, 0x31EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF40u;
label_31ef40:
    // 0x31ef40: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x31EF40u;
    {
        const bool branch_taken_0x31ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef40) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF48u;
label_31ef48:
    // 0x31ef48: 0xc0a0a94  jal         func_282A50
    ctx->pc = 0x31EF48u;
    SET_GPR_U32(ctx, 31, 0x31EF50u);
    ctx->pc = 0x282A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282A50u, 0x31EF48u, 0x31EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF50u;
label_31ef50:
    // 0x31ef50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31EF50u;
    {
        const bool branch_taken_0x31ef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef50) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF58u;
label_31ef58:
    // 0x31ef58: 0xc0c7a50  jal         func_31E940
    ctx->pc = 0x31EF58u;
    SET_GPR_U32(ctx, 31, 0x31EF60u);
    ctx->pc = 0x31EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF58u;
    // 0x31ef5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E940u, 0x31EF58u, 0x31EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF60u;
label_31ef60:
    // 0x31ef60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31EF60u;
    {
        const bool branch_taken_0x31ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef60) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF68u;
label_31ef68:
    // 0x31ef68: 0xc0c7a50  jal         func_31E940
    ctx->pc = 0x31EF68u;
    SET_GPR_U32(ctx, 31, 0x31EF70u);
    ctx->pc = 0x31EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF68u;
    // 0x31ef6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E940u, 0x31EF68u, 0x31EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF70u;
label_31ef70:
    // 0x31ef70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31EF70u;
    {
        const bool branch_taken_0x31ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef70) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF78u;
label_31ef78:
    // 0x31ef78: 0xc0c7a50  jal         func_31E940
    ctx->pc = 0x31EF78u;
    SET_GPR_U32(ctx, 31, 0x31EF80u);
    ctx->pc = 0x31EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF78u;
    // 0x31ef7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E940u, 0x31EF78u, 0x31EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF80u;
label_31ef80:
    // 0x31ef80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31EF80u;
    {
        const bool branch_taken_0x31ef80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef80) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF88u;
label_31ef88:
    // 0x31ef88: 0xc0a0180  jal         func_280600
    ctx->pc = 0x31EF88u;
    SET_GPR_U32(ctx, 31, 0x31EF90u);
    ctx->pc = 0x280600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280600u, 0x31EF88u, 0x31EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF90u;
label_31ef90:
    // 0x31ef90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31EF90u;
    {
        const bool branch_taken_0x31ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef90) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EF98u;
label_31ef98:
    // 0x31ef98: 0xc0a0278  jal         func_2809E0
    ctx->pc = 0x31EF98u;
    SET_GPR_U32(ctx, 31, 0x31EFA0u);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x31EF98u, 0x31EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFA0u;
label_31efa0:
    // 0x31efa0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31EFA0u;
    {
        const bool branch_taken_0x31efa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31efa0) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EFA8u;
label_31efa8:
    // 0x31efa8: 0xc0a05ac  jal         func_2816B0
    ctx->pc = 0x31EFA8u;
    SET_GPR_U32(ctx, 31, 0x31EFB0u);
    ctx->pc = 0x2816B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2816B0u, 0x31EFA8u, 0x31EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFB0u;
label_31efb0:
    // 0x31efb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31EFB0u;
    {
        const bool branch_taken_0x31efb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31efb0) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EFB8u;
label_31efb8:
    // 0x31efb8: 0xc0a0590  jal         func_281640
    ctx->pc = 0x31EFB8u;
    SET_GPR_U32(ctx, 31, 0x31EFC0u);
    ctx->pc = 0x281640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281640u, 0x31EFB8u, 0x31EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFC0u;
label_31efc0:
    // 0x31efc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EFC0u;
    {
        const bool branch_taken_0x31efc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31efc0) {
            ctx->pc = 0x31EFD0u;
            goto label_31efd0;
        }
    }
    ctx->pc = 0x31EFC8u;
label_31efc8:
    // 0x31efc8: 0xc0a0384  jal         func_280E10
    ctx->pc = 0x31EFC8u;
    SET_GPR_U32(ctx, 31, 0x31EFD0u);
    ctx->pc = 0x280E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E10u, 0x31EFC8u, 0x31EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFD0u;
label_31efd0:
    // 0x31efd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31efd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31efd4: 0x3e00008  jr          $ra
    ctx->pc = 0x31EFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFD4u;
        // 0x31efd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EFDCu;
}
