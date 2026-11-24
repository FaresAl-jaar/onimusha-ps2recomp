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

// Function: sub_00375020
// Address: 0x375020 - 0x375348
void sub_00375020_0x375020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375020_0x375020");
#endif

    switch (ctx->pc) {
        case 0x37507cu: goto label_37507c;
        case 0x3750d0u: goto label_3750d0;
        case 0x3750d8u: goto label_3750d8;
        case 0x3750e8u: goto label_3750e8;
        case 0x3750f8u: goto label_3750f8;
        case 0x375108u: goto label_375108;
        case 0x375118u: goto label_375118;
        case 0x375128u: goto label_375128;
        case 0x37513cu: goto label_37513c;
        case 0x375154u: goto label_375154;
        case 0x375168u: goto label_375168;
        case 0x375178u: goto label_375178;
        case 0x375188u: goto label_375188;
        case 0x375198u: goto label_375198;
        case 0x3751a8u: goto label_3751a8;
        case 0x3751b8u: goto label_3751b8;
        case 0x3751c8u: goto label_3751c8;
        case 0x3751d8u: goto label_3751d8;
        case 0x3751e8u: goto label_3751e8;
        case 0x375228u: goto label_375228;
        case 0x375238u: goto label_375238;
        case 0x375250u: goto label_375250;
        case 0x375268u: goto label_375268;
        case 0x37527cu: goto label_37527c;
        case 0x375294u: goto label_375294;
        case 0x3752acu: goto label_3752ac;
        case 0x3752c4u: goto label_3752c4;
        case 0x3752dcu: goto label_3752dc;
        case 0x3752f4u: goto label_3752f4;
        case 0x37530cu: goto label_37530c;
        case 0x375324u: goto label_375324;
        case 0x375338u: goto label_375338;
        default: break;
    }

    ctx->pc = 0x375020u;

    // 0x375020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37502c: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x37502cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x375030: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x375030u;
    {
        const bool branch_taken_0x375030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375030u;
        // 0x375034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375030) {
            ctx->pc = 0x375068u;
            goto label_375068;
        }
    }
    ctx->pc = 0x375038u;
    // 0x375038: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x375038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x37503c: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x37503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x375040: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x375040u;
    {
        const bool branch_taken_0x375040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x375040) {
            ctx->pc = 0x375068u;
            goto label_375068;
        }
    }
    ctx->pc = 0x375048u;
    // 0x375048: 0x92022b60  lbu         $v0, 0x2B60($s0)
    ctx->pc = 0x375048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x37504c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37504Cu;
    {
        const bool branch_taken_0x37504c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37504c) {
            ctx->pc = 0x375060u;
            goto label_375060;
        }
    }
    ctx->pc = 0x375054u;
    // 0x375054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x375054u;
    {
        const bool branch_taken_0x375054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375054u;
        // 0x375058: 0xa2002b61  sb          $zero, 0x2B61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11105), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375054) {
            ctx->pc = 0x375068u;
            goto label_375068;
        }
    }
    ctx->pc = 0x37505Cu;
    // 0x37505c: 0x0  nop
    ctx->pc = 0x37505cu;
    // NOP
label_375060:
    // 0x375060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x375060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375064: 0xa2022b61  sb          $v0, 0x2B61($s0)
    ctx->pc = 0x375064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11105), (uint8_t)GPR_U32(ctx, 2));
label_375068:
    // 0x375068: 0x92032b61  lbu         $v1, 0x2B61($s0)
    ctx->pc = 0x375068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11105)));
    // 0x37506c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37506Cu;
    {
        const bool branch_taken_0x37506c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x375070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37506Cu;
        // 0x375070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37506c) {
            ctx->pc = 0x375088u;
            goto label_375088;
        }
    }
    ctx->pc = 0x375074u;
    // 0x375074: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x375074u;
    SET_GPR_U32(ctx, 31, 0x37507Cu);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x375074u, 0x37507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37507Cu;
label_37507c:
    // 0x37507c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x37507Cu;
    {
        const bool branch_taken_0x37507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37507c) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375084u;
    // 0x375084: 0x0  nop
    ctx->pc = 0x375084u;
    // NOP
label_375088:
    // 0x375088: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x375088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37508c: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x37508Cu;
    {
        const bool branch_taken_0x37508c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37508c) {
            ctx->pc = 0x3751F0u;
            goto label_3751f0;
        }
    }
    ctx->pc = 0x375094u;
    // 0x375094: 0xa2002b60  sb          $zero, 0x2B60($s0)
    ctx->pc = 0x375094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    // 0x375098: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x375098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x37509c: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x37509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x3750a0: 0x2c41001c  sltiu       $at, $v0, 0x1C
    ctx->pc = 0x3750a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x3750a4: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x3750A4u;
    {
        const bool branch_taken_0x3750a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3750A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750A4u;
        // 0x3750a8: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3750a4) {
            ctx->pc = 0x3751E0u;
            goto label_3751e0;
        }
    }
    ctx->pc = 0x3750ACu;
    // 0x3750ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3750acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3750b0: 0x24631ad0  addiu       $v1, $v1, 0x1AD0
    ctx->pc = 0x3750b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6864));
    // 0x3750b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3750b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3750b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3750b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3750bc: 0x400008  jr          $v0
    ctx->pc = 0x3750BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3750C8u: goto label_3750c8;
            case 0x3750D0u: goto label_3750d0;
            case 0x3750E0u: goto label_3750e0;
            case 0x3750F0u: goto label_3750f0;
            case 0x375100u: goto label_375100;
            case 0x375110u: goto label_375110;
            case 0x375120u: goto label_375120;
            case 0x375130u: goto label_375130;
            case 0x375148u: goto label_375148;
            case 0x375160u: goto label_375160;
            case 0x375170u: goto label_375170;
            case 0x375180u: goto label_375180;
            case 0x375190u: goto label_375190;
            case 0x3751A0u: goto label_3751a0;
            case 0x3751B0u: goto label_3751b0;
            case 0x3751C0u: goto label_3751c0;
            case 0x3751D0u: goto label_3751d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3750BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3750C4u;
    // 0x3750c4: 0x0  nop
    ctx->pc = 0x3750c4u;
    // NOP
label_3750c8:
    // 0x3750c8: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x3750C8u;
    SET_GPR_U32(ctx, 31, 0x3750D0u);
    ctx->pc = 0x3750CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750C8u;
    // 0x3750cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x3750C8u, 0x3750D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750D0u;
label_3750d0:
    // 0x3750d0: 0xc0a08fc  jal         func_2823F0
    ctx->pc = 0x3750D0u;
    SET_GPR_U32(ctx, 31, 0x3750D8u);
    ctx->pc = 0x3750D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750D0u;
    // 0x3750d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2823F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2823F0u, 0x3750D0u, 0x3750D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750D8u;
label_3750d8:
    // 0x3750d8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x3750D8u;
    {
        const bool branch_taken_0x3750d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3750d8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3750E0u;
label_3750e0:
    // 0x3750e0: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x3750E0u;
    SET_GPR_U32(ctx, 31, 0x3750E8u);
    ctx->pc = 0x3750E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750E0u;
    // 0x3750e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x3750E0u, 0x3750E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750E8u;
label_3750e8:
    // 0x3750e8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3750E8u;
    {
        const bool branch_taken_0x3750e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3750e8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3750F0u;
label_3750f0:
    // 0x3750f0: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x3750F0u;
    SET_GPR_U32(ctx, 31, 0x3750F8u);
    ctx->pc = 0x3750F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750F0u;
    // 0x3750f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x3750F0u, 0x3750F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750F8u;
label_3750f8:
    // 0x3750f8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x3750F8u;
    {
        const bool branch_taken_0x3750f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3750f8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375100u;
label_375100:
    // 0x375100: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x375100u;
    SET_GPR_U32(ctx, 31, 0x375108u);
    ctx->pc = 0x375104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375100u;
    // 0x375104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x375100u, 0x375108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375108u;
label_375108:
    // 0x375108: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x375108u;
    {
        const bool branch_taken_0x375108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375108) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375110u;
label_375110:
    // 0x375110: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x375110u;
    SET_GPR_U32(ctx, 31, 0x375118u);
    ctx->pc = 0x375114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375110u;
    // 0x375114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x375110u, 0x375118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375118u;
label_375118:
    // 0x375118: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x375118u;
    {
        const bool branch_taken_0x375118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375118) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375120u;
label_375120:
    // 0x375120: 0xc0a0a94  jal         func_282A50
    ctx->pc = 0x375120u;
    SET_GPR_U32(ctx, 31, 0x375128u);
    ctx->pc = 0x375124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375120u;
    // 0x375124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282A50u, 0x375120u, 0x375128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375128u;
label_375128:
    // 0x375128: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x375128u;
    {
        const bool branch_taken_0x375128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375128) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375130u;
label_375130:
    // 0x375130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375134: 0xc0dd584  jal         func_375610
    ctx->pc = 0x375134u;
    SET_GPR_U32(ctx, 31, 0x37513Cu);
    ctx->pc = 0x375138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375134u;
    // 0x375138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375610u, 0x375134u, 0x37513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37513Cu;
label_37513c:
    // 0x37513c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x37513Cu;
    {
        const bool branch_taken_0x37513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37513c) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375144u;
    // 0x375144: 0x0  nop
    ctx->pc = 0x375144u;
    // NOP
label_375148:
    // 0x375148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37514c: 0xc0dd584  jal         func_375610
    ctx->pc = 0x37514Cu;
    SET_GPR_U32(ctx, 31, 0x375154u);
    ctx->pc = 0x375150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37514Cu;
    // 0x375150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375610u, 0x37514Cu, 0x375154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375154u;
label_375154:
    // 0x375154: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x375154u;
    {
        const bool branch_taken_0x375154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375154) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x37515Cu;
    // 0x37515c: 0x0  nop
    ctx->pc = 0x37515cu;
    // NOP
label_375160:
    // 0x375160: 0xc0dd500  jal         func_375400
    ctx->pc = 0x375160u;
    SET_GPR_U32(ctx, 31, 0x375168u);
    ctx->pc = 0x375164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375160u;
    // 0x375164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375400u, 0x375160u, 0x375168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375168u;
label_375168:
    // 0x375168: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x375168u;
    {
        const bool branch_taken_0x375168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375168) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375170u;
label_375170:
    // 0x375170: 0xc0a0e6c  jal         func_2839B0
    ctx->pc = 0x375170u;
    SET_GPR_U32(ctx, 31, 0x375178u);
    ctx->pc = 0x375174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375170u;
    // 0x375174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2839B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839B0u, 0x375170u, 0x375178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375178u;
label_375178:
    // 0x375178: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x375178u;
    {
        const bool branch_taken_0x375178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375178) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375180u;
label_375180:
    // 0x375180: 0xc0a0e6c  jal         func_2839B0
    ctx->pc = 0x375180u;
    SET_GPR_U32(ctx, 31, 0x375188u);
    ctx->pc = 0x375184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375180u;
    // 0x375184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2839B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839B0u, 0x375180u, 0x375188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375188u;
label_375188:
    // 0x375188: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x375188u;
    {
        const bool branch_taken_0x375188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375188) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375190u;
label_375190:
    // 0x375190: 0xc0a0180  jal         func_280600
    ctx->pc = 0x375190u;
    SET_GPR_U32(ctx, 31, 0x375198u);
    ctx->pc = 0x375194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375190u;
    // 0x375194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280600u, 0x375190u, 0x375198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375198u;
label_375198:
    // 0x375198: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x375198u;
    {
        const bool branch_taken_0x375198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375198) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3751A0u;
label_3751a0:
    // 0x3751a0: 0xc0a0278  jal         func_2809E0
    ctx->pc = 0x3751A0u;
    SET_GPR_U32(ctx, 31, 0x3751A8u);
    ctx->pc = 0x3751A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3751A0u;
    // 0x3751a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x3751A0u, 0x3751A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3751A8u;
label_3751a8:
    // 0x3751a8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3751A8u;
    {
        const bool branch_taken_0x3751a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3751a8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3751B0u;
label_3751b0:
    // 0x3751b0: 0xc0a05ac  jal         func_2816B0
    ctx->pc = 0x3751B0u;
    SET_GPR_U32(ctx, 31, 0x3751B8u);
    ctx->pc = 0x3751B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3751B0u;
    // 0x3751b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2816B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2816B0u, 0x3751B0u, 0x3751B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3751B8u;
label_3751b8:
    // 0x3751b8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3751B8u;
    {
        const bool branch_taken_0x3751b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3751b8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3751C0u;
label_3751c0:
    // 0x3751c0: 0xc0a0590  jal         func_281640
    ctx->pc = 0x3751C0u;
    SET_GPR_U32(ctx, 31, 0x3751C8u);
    ctx->pc = 0x3751C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3751C0u;
    // 0x3751c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281640u, 0x3751C0u, 0x3751C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3751C8u;
label_3751c8:
    // 0x3751c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3751C8u;
    {
        const bool branch_taken_0x3751c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3751c8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3751D0u;
label_3751d0:
    // 0x3751d0: 0xc0a0384  jal         func_280E10
    ctx->pc = 0x3751D0u;
    SET_GPR_U32(ctx, 31, 0x3751D8u);
    ctx->pc = 0x3751D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3751D0u;
    // 0x3751d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E10u, 0x3751D0u, 0x3751D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3751D8u;
label_3751d8:
    // 0x3751d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3751D8u;
    {
        const bool branch_taken_0x3751d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3751d8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3751E0u;
label_3751e0:
    // 0x3751e0: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3751E0u;
    SET_GPR_U32(ctx, 31, 0x3751E8u);
    ctx->pc = 0x3751E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3751E0u;
    // 0x3751e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3751E0u, 0x3751E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3751E8u;
label_3751e8:
    // 0x3751e8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3751E8u;
    {
        const bool branch_taken_0x3751e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3751e8) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3751F0u;
label_3751f0:
    // 0x3751f0: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x3751f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3751f4: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x3751f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x3751f8: 0x2c41001c  sltiu       $at, $v0, 0x1C
    ctx->pc = 0x3751f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x3751fc: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x3751FCu;
    {
        const bool branch_taken_0x3751fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x375200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751FCu;
        // 0x375200: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751fc) {
            ctx->pc = 0x375330u;
            goto label_375330;
        }
    }
    ctx->pc = 0x375204u;
    // 0x375204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x375204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x375208: 0x24631a60  addiu       $v1, $v1, 0x1A60
    ctx->pc = 0x375208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6752));
    // 0x37520c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x375210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x375210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x375214: 0x400008  jr          $v0
    ctx->pc = 0x375214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375220u: goto label_375220;
            case 0x375230u: goto label_375230;
            case 0x375240u: goto label_375240;
            case 0x375258u: goto label_375258;
            case 0x375270u: goto label_375270;
            case 0x375288u: goto label_375288;
            case 0x3752A0u: goto label_3752a0;
            case 0x3752B8u: goto label_3752b8;
            case 0x3752D0u: goto label_3752d0;
            case 0x3752E8u: goto label_3752e8;
            case 0x375300u: goto label_375300;
            case 0x375318u: goto label_375318;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375214u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37521Cu;
    // 0x37521c: 0x0  nop
    ctx->pc = 0x37521cu;
    // NOP
label_375220:
    // 0x375220: 0xc0dd4d4  jal         func_375350
    ctx->pc = 0x375220u;
    SET_GPR_U32(ctx, 31, 0x375228u);
    ctx->pc = 0x375224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375220u;
    // 0x375224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375350u, 0x375220u, 0x375228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375228u;
label_375228:
    // 0x375228: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x375228u;
    {
        const bool branch_taken_0x375228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375228) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375230u;
label_375230:
    // 0x375230: 0xc0dd6cc  jal         func_375B30
    ctx->pc = 0x375230u;
    SET_GPR_U32(ctx, 31, 0x375238u);
    ctx->pc = 0x375234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375230u;
    // 0x375234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375B30u, 0x375230u, 0x375238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375238u;
label_375238:
    // 0x375238: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x375238u;
    {
        const bool branch_taken_0x375238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375238) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375240u;
label_375240:
    // 0x375240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x375244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375248: 0xc0dd584  jal         func_375610
    ctx->pc = 0x375248u;
    SET_GPR_U32(ctx, 31, 0x375250u);
    ctx->pc = 0x37524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375248u;
    // 0x37524c: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375610u, 0x375248u, 0x375250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375250u;
label_375250:
    // 0x375250: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x375250u;
    {
        const bool branch_taken_0x375250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375250) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375258u;
label_375258:
    // 0x375258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37525c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37525cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375260: 0xc0dd584  jal         func_375610
    ctx->pc = 0x375260u;
    SET_GPR_U32(ctx, 31, 0x375268u);
    ctx->pc = 0x375264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375260u;
    // 0x375264: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375610u, 0x375260u, 0x375268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375268u;
label_375268:
    // 0x375268: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x375268u;
    {
        const bool branch_taken_0x375268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375268) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375270u;
label_375270:
    // 0x375270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375274: 0xc0dd500  jal         func_375400
    ctx->pc = 0x375274u;
    SET_GPR_U32(ctx, 31, 0x37527Cu);
    ctx->pc = 0x375278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375274u;
    // 0x375278: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375400u, 0x375274u, 0x37527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37527Cu;
label_37527c:
    // 0x37527c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x37527Cu;
    {
        const bool branch_taken_0x37527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37527c) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375284u;
    // 0x375284: 0x0  nop
    ctx->pc = 0x375284u;
    // NOP
label_375288:
    // 0x375288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37528c: 0xc0a0e6c  jal         func_2839B0
    ctx->pc = 0x37528Cu;
    SET_GPR_U32(ctx, 31, 0x375294u);
    ctx->pc = 0x375290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37528Cu;
    // 0x375290: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2839B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839B0u, 0x37528Cu, 0x375294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375294u;
label_375294:
    // 0x375294: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x375294u;
    {
        const bool branch_taken_0x375294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375294) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x37529Cu;
    // 0x37529c: 0x0  nop
    ctx->pc = 0x37529cu;
    // NOP
label_3752a0:
    // 0x3752a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3752a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752a4: 0xc0a0e6c  jal         func_2839B0
    ctx->pc = 0x3752A4u;
    SET_GPR_U32(ctx, 31, 0x3752ACu);
    ctx->pc = 0x3752A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752A4u;
    // 0x3752a8: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2839B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839B0u, 0x3752A4u, 0x3752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752ACu;
label_3752ac:
    // 0x3752ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3752ACu;
    {
        const bool branch_taken_0x3752ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3752ac) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3752B4u;
    // 0x3752b4: 0x0  nop
    ctx->pc = 0x3752b4u;
    // NOP
label_3752b8:
    // 0x3752b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3752b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752bc: 0xc0a0180  jal         func_280600
    ctx->pc = 0x3752BCu;
    SET_GPR_U32(ctx, 31, 0x3752C4u);
    ctx->pc = 0x3752C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752BCu;
    // 0x3752c0: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280600u, 0x3752BCu, 0x3752C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752C4u;
label_3752c4:
    // 0x3752c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3752C4u;
    {
        const bool branch_taken_0x3752c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3752c4) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3752CCu;
    // 0x3752cc: 0x0  nop
    ctx->pc = 0x3752ccu;
    // NOP
label_3752d0:
    // 0x3752d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3752d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752d4: 0xc0a0278  jal         func_2809E0
    ctx->pc = 0x3752D4u;
    SET_GPR_U32(ctx, 31, 0x3752DCu);
    ctx->pc = 0x3752D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752D4u;
    // 0x3752d8: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x3752D4u, 0x3752DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752DCu;
label_3752dc:
    // 0x3752dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3752DCu;
    {
        const bool branch_taken_0x3752dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3752dc) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3752E4u;
    // 0x3752e4: 0x0  nop
    ctx->pc = 0x3752e4u;
    // NOP
label_3752e8:
    // 0x3752e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3752e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3752ec: 0xc0a05ac  jal         func_2816B0
    ctx->pc = 0x3752ECu;
    SET_GPR_U32(ctx, 31, 0x3752F4u);
    ctx->pc = 0x3752F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752ECu;
    // 0x3752f0: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2816B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2816B0u, 0x3752ECu, 0x3752F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752F4u;
label_3752f4:
    // 0x3752f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3752F4u;
    {
        const bool branch_taken_0x3752f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3752f4) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x3752FCu;
    // 0x3752fc: 0x0  nop
    ctx->pc = 0x3752fcu;
    // NOP
label_375300:
    // 0x375300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375304: 0xc0a0590  jal         func_281640
    ctx->pc = 0x375304u;
    SET_GPR_U32(ctx, 31, 0x37530Cu);
    ctx->pc = 0x375308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375304u;
    // 0x375308: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281640u, 0x375304u, 0x37530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37530Cu;
label_37530c:
    // 0x37530c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37530Cu;
    {
        const bool branch_taken_0x37530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37530c) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x375314u;
    // 0x375314: 0x0  nop
    ctx->pc = 0x375314u;
    // NOP
label_375318:
    // 0x375318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37531c: 0xc0a0384  jal         func_280E10
    ctx->pc = 0x37531Cu;
    SET_GPR_U32(ctx, 31, 0x375324u);
    ctx->pc = 0x375320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37531Cu;
    // 0x375320: 0xa2002b60  sb          $zero, 0x2B60($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E10u, 0x37531Cu, 0x375324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375324u;
label_375324:
    // 0x375324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x375324u;
    {
        const bool branch_taken_0x375324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375324) {
            ctx->pc = 0x375338u;
            goto label_375338;
        }
    }
    ctx->pc = 0x37532Cu;
    // 0x37532c: 0x0  nop
    ctx->pc = 0x37532cu;
    // NOP
label_375330:
    // 0x375330: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x375330u;
    SET_GPR_U32(ctx, 31, 0x375338u);
    ctx->pc = 0x375334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375330u;
    // 0x375334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x375330u, 0x375338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375338u;
label_375338:
    // 0x375338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37533c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37533cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375340: 0x3e00008  jr          $ra
    ctx->pc = 0x375340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375340u;
        // 0x375344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375348u;
}
