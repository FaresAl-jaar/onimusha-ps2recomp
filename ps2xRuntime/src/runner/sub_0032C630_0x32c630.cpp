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

// Function: sub_0032C630
// Address: 0x32c630 - 0x32c75c
void sub_0032C630_0x32c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C630_0x32c630");
#endif

    switch (ctx->pc) {
        case 0x32c658u: goto label_32c658;
        case 0x32c684u: goto label_32c684;
        case 0x32c69cu: goto label_32c69c;
        case 0x32c6b0u: goto label_32c6b0;
        case 0x32c6e4u: goto label_32c6e4;
        case 0x32c728u: goto label_32c728;
        case 0x32c748u: goto label_32c748;
        default: break;
    }

    ctx->pc = 0x32c630u;

    // 0x32c630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32c63c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32c640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c644: 0x90910004  lbu         $s1, 0x4($a0)
    ctx->pc = 0x32c644u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c648: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32C648u;
    {
        const bool branch_taken_0x32c648 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C648u;
        // 0x32c64c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c648) {
            ctx->pc = 0x32C670u;
            goto label_32c670;
        }
    }
    ctx->pc = 0x32C650u;
    // 0x32c650: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x32C650u;
    SET_GPR_U32(ctx, 31, 0x32C658u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x32C650u, 0x32C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C658u;
label_32c658:
    // 0x32c658: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x32c658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x32c65c: 0x34219000  ori         $at, $at, 0x9000
    ctx->pc = 0x32c65cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36864);
    // 0x32c660: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x32c660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x32c664: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x32C664u;
    {
        const bool branch_taken_0x32c664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c664) {
            ctx->pc = 0x32C670u;
            goto label_32c670;
        }
    }
    ctx->pc = 0x32C66Cu;
    // 0x32c66c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x32c66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32c670:
    // 0x32c670: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x32c670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x32c674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32c674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c678: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x32c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x32c67c: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x32C67Cu;
    SET_GPR_U32(ctx, 31, 0x32C684u);
    ctx->pc = 0x32C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C67Cu;
    // 0x32c680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x32C67Cu, 0x32C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C684u;
label_32c684:
    // 0x32c684: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32c684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32c688: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x32c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x32c68c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x32c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x32c690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c694: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x32C694u;
    SET_GPR_U32(ctx, 31, 0x32C69Cu);
    ctx->pc = 0x32C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C694u;
    // 0x32c698: 0x34461012  ori         $a2, $v0, 0x1012 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x32C694u, 0x32C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C69Cu;
label_32c69c:
    // 0x32c69c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32c6a0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x32c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x32c6a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32c6a8: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x32C6A8u;
    SET_GPR_U32(ctx, 31, 0x32C6B0u);
    ctx->pc = 0x32C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6A8u;
    // 0x32c6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x32C6A8u, 0x32C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6B0u;
label_32c6b0:
    // 0x32c6b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c6b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32c6b8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32c6bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32c6c0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32c6c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6c8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32c6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32c6cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32c6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32c6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32c6d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32c6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6dc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32C6DCu;
    SET_GPR_U32(ctx, 31, 0x32C6E4u);
    ctx->pc = 0x32C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6DCu;
    // 0x32c6e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32C6DCu, 0x32C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6E4u;
label_32c6e4:
    // 0x32c6e4: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x32c6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c6e8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x32c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x32c6ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32C6ECu;
    {
        const bool branch_taken_0x32c6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c6ec) {
            ctx->pc = 0x32C708u;
            goto label_32c708;
        }
    }
    ctx->pc = 0x32C6F4u;
    // 0x32c6f4: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x32c6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c6f8: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x32c6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c6fc: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x32c6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c700: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x32c700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c704: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x32c704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
label_32c708:
    // 0x32c708: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x32c708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c70c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c714: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x32c714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32c718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c71c: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x32c71cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x32c720: 0xc0cb954  jal         func_32E550
    ctx->pc = 0x32C720u;
    SET_GPR_U32(ctx, 31, 0x32C728u);
    ctx->pc = 0x32C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C720u;
    // 0x32c724: 0xa2000011  sb          $zero, 0x11($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E550u, 0x32C720u, 0x32C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C728u;
label_32c728:
    // 0x32c728: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32c728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32c72c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x32c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32c730: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x32c730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x32c734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32c738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32c73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c740: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x32C740u;
    SET_GPR_U32(ctx, 31, 0x32C748u);
    ctx->pc = 0x32C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C740u;
    // 0x32c744: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x32C740u, 0x32C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C748u;
label_32c748:
    // 0x32c748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32c748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c74c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32c74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c750: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c754: 0x3e00008  jr          $ra
    ctx->pc = 0x32C754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C754u;
        // 0x32c758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C75Cu;
}
