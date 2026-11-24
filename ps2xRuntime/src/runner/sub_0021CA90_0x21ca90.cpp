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

// Function: sub_0021CA90
// Address: 0x21ca90 - 0x21cc0c
void sub_0021CA90_0x21ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA90_0x21ca90");
#endif

    switch (ctx->pc) {
        case 0x21cab0u: goto label_21cab0;
        case 0x21cac0u: goto label_21cac0;
        case 0x21caecu: goto label_21caec;
        case 0x21cb00u: goto label_21cb00;
        case 0x21cb24u: goto label_21cb24;
        case 0x21cb38u: goto label_21cb38;
        case 0x21cb4cu: goto label_21cb4c;
        case 0x21cb5cu: goto label_21cb5c;
        case 0x21cb70u: goto label_21cb70;
        case 0x21cb84u: goto label_21cb84;
        case 0x21cb9cu: goto label_21cb9c;
        case 0x21cbb4u: goto label_21cbb4;
        case 0x21cbc8u: goto label_21cbc8;
        case 0x21cbf4u: goto label_21cbf4;
        default: break;
    }

    ctx->pc = 0x21ca90u;

    // 0x21ca90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ca94: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x21ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x21ca98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ca9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ca9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21caa0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21caa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21caa8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CAA8u;
    SET_GPR_U32(ctx, 31, 0x21CAB0u);
    ctx->pc = 0x21CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAA8u;
    // 0x21caac: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CAA8u, 0x21CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAB0u;
label_21cab0:
    // 0x21cab0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x21CAB0u;
    {
        const bool branch_taken_0x21cab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB0u;
        // 0x21cab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cab0) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CAB8u;
    // 0x21cab8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CAB8u;
    SET_GPR_U32(ctx, 31, 0x21CAC0u);
    ctx->pc = 0x21CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAB8u;
    // 0x21cabc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CAB8u, 0x21CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAC0u;
label_21cac0:
    // 0x21cac0: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x21CAC0u;
    {
        const bool branch_taken_0x21cac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cac0) {
            ctx->pc = 0x21CAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CAC0u;
            // 0x21cac4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CBFCu;
            goto label_21cbfc;
        }
    }
    ctx->pc = 0x21CAC8u;
    // 0x21cac8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x21cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21cacc: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x21CACCu;
    {
        const bool branch_taken_0x21cacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CACCu;
        // 0x21cad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cacc) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CAD4u;
    // 0x21cad4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x21cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21cad8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cadc: 0x54830047  bnel        $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x21CADCu;
    {
        const bool branch_taken_0x21cadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21cadc) {
            ctx->pc = 0x21CAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CADCu;
            // 0x21cae0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CBFCu;
            goto label_21cbfc;
        }
    }
    ctx->pc = 0x21CAE4u;
    // 0x21cae4: 0xc08733c  jal         func_21CCF0
    ctx->pc = 0x21CAE4u;
    SET_GPR_U32(ctx, 31, 0x21CAECu);
    ctx->pc = 0x21CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAE4u;
    // 0x21cae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCF0u, 0x21CAE4u, 0x21CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAECu;
label_21caec:
    // 0x21caec: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x21CAECu;
    {
        const bool branch_taken_0x21caec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21caec) {
            ctx->pc = 0x21CAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CAECu;
            // 0x21caf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CAF4u;
    // 0x21caf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21caf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21caf8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CAF8u;
    SET_GPR_U32(ctx, 31, 0x21CB00u);
    ctx->pc = 0x21CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAF8u;
    // 0x21cafc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CAF8u, 0x21CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB00u;
label_21cb00:
    // 0x21cb00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cb04: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CB04u;
    {
        const bool branch_taken_0x21cb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB04u;
        // 0x21cb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb04) {
            ctx->pc = 0x21CB1Cu;
            goto label_21cb1c;
        }
    }
    ctx->pc = 0x21CB0Cu;
    // 0x21cb0c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x21cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21cb10: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x21CB10u;
    {
        const bool branch_taken_0x21cb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB10u;
        // 0x21cb14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb10) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CB18u;
    // 0x21cb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21cb1c:
    // 0x21cb1c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CB1Cu;
    SET_GPR_U32(ctx, 31, 0x21CB24u);
    ctx->pc = 0x21CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB1Cu;
    // 0x21cb20: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CB1Cu, 0x21CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB24u;
label_21cb24:
    // 0x21cb24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cb28: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21CB28u;
    {
        const bool branch_taken_0x21cb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB28u;
        // 0x21cb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb28) {
            ctx->pc = 0x21CB44u;
            goto label_21cb44;
        }
    }
    ctx->pc = 0x21CB30u;
    // 0x21cb30: 0xc08409c  jal         func_210270
    ctx->pc = 0x21CB30u;
    SET_GPR_U32(ctx, 31, 0x21CB38u);
    ctx->pc = 0x21CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB30u;
    // 0x21cb34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210270u, 0x21CB30u, 0x21CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB38u;
label_21cb38:
    // 0x21cb38: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x21CB38u;
    {
        const bool branch_taken_0x21cb38 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x21CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB38u;
        // 0x21cb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb38) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CB40u;
    // 0x21cb40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21cb44:
    // 0x21cb44: 0xc088902  jal         func_222408
    ctx->pc = 0x21CB44u;
    SET_GPR_U32(ctx, 31, 0x21CB4Cu);
    ctx->pc = 0x21CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB44u;
    // 0x21cb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x21CB44u, 0x21CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB4Cu;
label_21cb4c:
    // 0x21cb4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CB4Cu;
    {
        const bool branch_taken_0x21cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB4Cu;
        // 0x21cb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb4c) {
            ctx->pc = 0x21CB64u;
            goto label_21cb64;
        }
    }
    ctx->pc = 0x21CB54u;
    // 0x21cb54: 0xc08409c  jal         func_210270
    ctx->pc = 0x21CB54u;
    SET_GPR_U32(ctx, 31, 0x21CB5Cu);
    ctx->pc = 0x21CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB54u;
    // 0x21cb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210270u, 0x21CB54u, 0x21CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB5Cu;
label_21cb5c:
    // 0x21cb5c: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21CB5Cu;
    {
        const bool branch_taken_0x21cb5c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x21CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB5Cu;
        // 0x21cb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb5c) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CB64u;
label_21cb64:
    // 0x21cb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb68: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CB68u;
    SET_GPR_U32(ctx, 31, 0x21CB70u);
    ctx->pc = 0x21CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB68u;
    // 0x21cb6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CB68u, 0x21CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB70u;
label_21cb70:
    // 0x21cb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cb74: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21CB74u;
    {
        const bool branch_taken_0x21cb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21cb74) {
            ctx->pc = 0x21CB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB74u;
            // 0x21cb78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB90u;
            goto label_21cb90;
        }
    }
    ctx->pc = 0x21CB7Cu;
    // 0x21cb7c: 0xc087364  jal         func_21CD90
    ctx->pc = 0x21CB7Cu;
    SET_GPR_U32(ctx, 31, 0x21CB84u);
    ctx->pc = 0x21CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB7Cu;
    // 0x21cb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD90u, 0x21CB7Cu, 0x21CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB84u;
label_21cb84:
    // 0x21cb84: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21CB84u;
    {
        const bool branch_taken_0x21cb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB84u;
        // 0x21cb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb84) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CB8Cu;
    // 0x21cb8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21cb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21cb90:
    // 0x21cb90: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x21cb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21cb94: 0xc088228  jal         func_2208A0
    ctx->pc = 0x21CB94u;
    SET_GPR_U32(ctx, 31, 0x21CB9Cu);
    ctx->pc = 0x21CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB94u;
    // 0x21cb98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208A0u, 0x21CB94u, 0x21CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB9Cu;
label_21cb9c:
    // 0x21cb9c: 0x26030d30  addiu       $v1, $s0, 0xD30
    ctx->pc = 0x21cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x21cba0: 0x8c710288  lw          $s1, 0x288($v1)
    ctx->pc = 0x21cba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x21cba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cba8: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x21cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x21cbac: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CBACu;
    SET_GPR_U32(ctx, 31, 0x21CBB4u);
    ctx->pc = 0x21CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBACu;
    // 0x21cbb0: 0x8c700284  lw          $s0, 0x284($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CBACu, 0x21CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBB4u;
label_21cbb4:
    // 0x21cbb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21cbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbb8: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x21cbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x21cbbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbc0: 0xc080568  jal         func_2015A0
    ctx->pc = 0x21CBC0u;
    SET_GPR_U32(ctx, 31, 0x21CBC8u);
    ctx->pc = 0x21CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBC0u;
    // 0x21cbc4: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x21CBC0u, 0x21CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBC8u;
label_21cbc8:
    // 0x21cbc8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cbcc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CBCCu;
    {
        const bool branch_taken_0x21cbcc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBCCu;
        // 0x21cbd0: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbcc) {
            ctx->pc = 0x21CBDCu;
            goto label_21cbdc;
        }
    }
    ctx->pc = 0x21CBD4u;
    // 0x21cbd4: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CBD4u;
    {
        const bool branch_taken_0x21cbd4 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x21CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBD4u;
        // 0x21cbd8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbd4) {
            ctx->pc = 0x21CBE8u;
            goto label_21cbe8;
        }
    }
    ctx->pc = 0x21CBDCu;
label_21cbdc:
    // 0x21cbdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21CBDCu;
    {
        const bool branch_taken_0x21cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBDCu;
        // 0x21cbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbdc) {
            ctx->pc = 0x21CBF8u;
            goto label_21cbf8;
        }
    }
    ctx->pc = 0x21CBE4u;
    // 0x21cbe4: 0x0  nop
    ctx->pc = 0x21cbe4u;
    // NOP
label_21cbe8:
    // 0x21cbe8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21cbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbec: 0xc088326  jal         func_220C98
    ctx->pc = 0x21CBECu;
    SET_GPR_U32(ctx, 31, 0x21CBF4u);
    ctx->pc = 0x21CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBECu;
    // 0x21cbf0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220C98u, 0x21CBECu, 0x21CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBF4u;
label_21cbf4:
    // 0x21cbf4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21cbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21cbf8:
    // 0x21cbf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21cbf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21cbfc:
    // 0x21cbfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21cbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cc00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21cc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cc04: 0x3e00008  jr          $ra
    ctx->pc = 0x21CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC04u;
        // 0x21cc08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CC0Cu;
}
