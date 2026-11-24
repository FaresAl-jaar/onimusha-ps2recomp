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

// Function: sub_00367FC0
// Address: 0x367fc0 - 0x3680d0
void sub_00367FC0_0x367fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367FC0_0x367fc0");
#endif

    switch (ctx->pc) {
        case 0x368010u: goto label_368010;
        case 0x368024u: goto label_368024;
        case 0x368034u: goto label_368034;
        case 0x368060u: goto label_368060;
        case 0x368070u: goto label_368070;
        case 0x368084u: goto label_368084;
        case 0x368094u: goto label_368094;
        case 0x3680acu: goto label_3680ac;
        case 0x3680c0u: goto label_3680c0;
        default: break;
    }

    ctx->pc = 0x367fc0u;

    // 0x367fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367fc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x367fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367fd0: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x367fd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x367fd4: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x367FD4u;
    {
        const bool branch_taken_0x367fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x367FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FD4u;
        // 0x367fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367fd4) {
            ctx->pc = 0x368078u;
            goto label_368078;
        }
    }
    ctx->pc = 0x367FDCu;
    // 0x367fdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367fe0: 0x10a7000d  beq         $a1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x367FE0u;
    {
        const bool branch_taken_0x367fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x367fe0) {
            ctx->pc = 0x368018u;
            goto label_368018;
        }
    }
    ctx->pc = 0x367FE8u;
    // 0x367fe8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x367FE8u;
    {
        const bool branch_taken_0x367fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x367fe8) {
            ctx->pc = 0x367FF8u;
            goto label_367ff8;
        }
    }
    ctx->pc = 0x367FF0u;
    // 0x367ff0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x367FF0u;
    {
        const bool branch_taken_0x367ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367ff0) {
            ctx->pc = 0x3680C0u;
            goto label_3680c0;
        }
    }
    ctx->pc = 0x367FF8u;
label_367ff8:
    // 0x367ff8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x367ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x367ffc: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x367ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x368000: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x368000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x368004: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x368004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x368008: 0xc0dc810  jal         func_372040
    ctx->pc = 0x368008u;
    SET_GPR_U32(ctx, 31, 0x368010u);
    ctx->pc = 0x36800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368008u;
    // 0x36800c: 0x3445002c  ori         $a1, $v0, 0x2C (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x368008u, 0x368010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368010u;
label_368010:
    // 0x368010: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x368010u;
    {
        const bool branch_taken_0x368010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368010) {
            ctx->pc = 0x3680C0u;
            goto label_3680c0;
        }
    }
    ctx->pc = 0x368018u;
label_368018:
    // 0x368018: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x368018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36801c: 0xc095150  jal         func_254540
    ctx->pc = 0x36801Cu;
    SET_GPR_U32(ctx, 31, 0x368024u);
    ctx->pc = 0x368020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36801Cu;
    // 0x368020: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36801Cu, 0x368024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368024u;
label_368024:
    // 0x368024: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x368024u;
    {
        const bool branch_taken_0x368024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368024u;
        // 0x368028: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368024) {
            ctx->pc = 0x3680C0u;
            goto label_3680c0;
        }
    }
    ctx->pc = 0x36802Cu;
    // 0x36802c: 0xc095154  jal         func_254550
    ctx->pc = 0x36802Cu;
    SET_GPR_U32(ctx, 31, 0x368034u);
    ctx->pc = 0x368030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36802Cu;
    // 0x368030: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x36802Cu, 0x368034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368034u;
label_368034:
    // 0x368034: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x368034u;
    {
        const bool branch_taken_0x368034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368034) {
            ctx->pc = 0x368068u;
            goto label_368068;
        }
    }
    ctx->pc = 0x36803Cu;
    // 0x36803c: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x36803cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x368040: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x368040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x368044: 0x3445002d  ori         $a1, $v0, 0x2D
    ctx->pc = 0x368044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45);
    // 0x368048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36804c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36804cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x368050: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x368050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368054: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x368054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x368058: 0xc0dc810  jal         func_372040
    ctx->pc = 0x368058u;
    SET_GPR_U32(ctx, 31, 0x368060u);
    ctx->pc = 0x36805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368058u;
    // 0x36805c: 0xa2020020  sb          $v0, 0x20($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x368058u, 0x368060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368060u;
label_368060:
    // 0x368060: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x368060u;
    {
        const bool branch_taken_0x368060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368060) {
            ctx->pc = 0x3680C0u;
            goto label_3680c0;
        }
    }
    ctx->pc = 0x368068u;
label_368068:
    // 0x368068: 0xc0dba94  jal         func_36EA50
    ctx->pc = 0x368068u;
    SET_GPR_U32(ctx, 31, 0x368070u);
    ctx->pc = 0x36806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368068u;
    // 0x36806c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EA50u, 0x368068u, 0x368070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368070u;
label_368070:
    // 0x368070: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x368070u;
    {
        const bool branch_taken_0x368070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368070) {
            ctx->pc = 0x3680C0u;
            goto label_3680c0;
        }
    }
    ctx->pc = 0x368078u;
label_368078:
    // 0x368078: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x368078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36807c: 0xc095150  jal         func_254540
    ctx->pc = 0x36807Cu;
    SET_GPR_U32(ctx, 31, 0x368084u);
    ctx->pc = 0x368080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36807Cu;
    // 0x368080: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36807Cu, 0x368084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368084u;
label_368084:
    // 0x368084: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x368084u;
    {
        const bool branch_taken_0x368084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368084u;
        // 0x368088: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368084) {
            ctx->pc = 0x3680C0u;
            goto label_3680c0;
        }
    }
    ctx->pc = 0x36808Cu;
    // 0x36808c: 0xc095154  jal         func_254550
    ctx->pc = 0x36808Cu;
    SET_GPR_U32(ctx, 31, 0x368094u);
    ctx->pc = 0x368090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36808Cu;
    // 0x368090: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x36808Cu, 0x368094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368094u;
label_368094:
    // 0x368094: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x368094u;
    {
        const bool branch_taken_0x368094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368094) {
            ctx->pc = 0x3680B8u;
            goto label_3680b8;
        }
    }
    ctx->pc = 0x36809Cu;
    // 0x36809c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x36809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3680a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3680a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3680a4: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x3680A4u;
    SET_GPR_U32(ctx, 31, 0x3680ACu);
    ctx->pc = 0x3680A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680A4u;
    // 0x3680a8: 0xa202001d  sb          $v0, 0x1D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x3680A4u, 0x3680ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680ACu;
label_3680ac:
    // 0x3680ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3680ACu;
    {
        const bool branch_taken_0x3680ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3680ac) {
            ctx->pc = 0x3680C0u;
            goto label_3680c0;
        }
    }
    ctx->pc = 0x3680B4u;
    // 0x3680b4: 0x0  nop
    ctx->pc = 0x3680b4u;
    // NOP
label_3680b8:
    // 0x3680b8: 0xc0dba94  jal         func_36EA50
    ctx->pc = 0x3680B8u;
    SET_GPR_U32(ctx, 31, 0x3680C0u);
    ctx->pc = 0x3680BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3680B8u;
    // 0x3680bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EA50u, 0x3680B8u, 0x3680C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680C0u;
label_3680c0:
    // 0x3680c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3680c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3680c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3680c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3680c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3680C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3680CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3680C8u;
        // 0x3680cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3680C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3680D0u;
}
