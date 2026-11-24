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

// Function: sub_00239B30
// Address: 0x239b30 - 0x239bd0
void sub_00239B30_0x239b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239B30_0x239b30");
#endif

    switch (ctx->pc) {
        case 0x239b30u: goto label_239b30;
        case 0x239b34u: goto label_239b34;
        case 0x239b38u: goto label_239b38;
        case 0x239b3cu: goto label_239b3c;
        case 0x239b40u: goto label_239b40;
        case 0x239b44u: goto label_239b44;
        case 0x239b48u: goto label_239b48;
        case 0x239b4cu: goto label_239b4c;
        case 0x239b50u: goto label_239b50;
        case 0x239b54u: goto label_239b54;
        case 0x239b58u: goto label_239b58;
        case 0x239b5cu: goto label_239b5c;
        case 0x239b60u: goto label_239b60;
        case 0x239b64u: goto label_239b64;
        case 0x239b68u: goto label_239b68;
        case 0x239b6cu: goto label_239b6c;
        case 0x239b70u: goto label_239b70;
        case 0x239b74u: goto label_239b74;
        case 0x239b78u: goto label_239b78;
        case 0x239b7cu: goto label_239b7c;
        case 0x239b80u: goto label_239b80;
        case 0x239b84u: goto label_239b84;
        case 0x239b88u: goto label_239b88;
        case 0x239b8cu: goto label_239b8c;
        case 0x239b90u: goto label_239b90;
        case 0x239b94u: goto label_239b94;
        case 0x239b98u: goto label_239b98;
        case 0x239b9cu: goto label_239b9c;
        case 0x239ba0u: goto label_239ba0;
        case 0x239ba4u: goto label_239ba4;
        case 0x239ba8u: goto label_239ba8;
        case 0x239bacu: goto label_239bac;
        case 0x239bb0u: goto label_239bb0;
        case 0x239bb4u: goto label_239bb4;
        case 0x239bb8u: goto label_239bb8;
        case 0x239bbcu: goto label_239bbc;
        case 0x239bc0u: goto label_239bc0;
        case 0x239bc4u: goto label_239bc4;
        case 0x239bc8u: goto label_239bc8;
        case 0x239bccu: goto label_239bcc;
        default: break;
    }

    ctx->pc = 0x239b30u;

label_239b30:
    // 0x239b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_239b34:
    // 0x239b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239b38:
    // 0x239b38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x239b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_239b3c:
    // 0x239b3c: 0xc08b528  jal         func_22D4A0
label_239b40:
    if (ctx->pc == 0x239B40u) {
        ctx->pc = 0x239B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B3Cu;
        // 0x239b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B44u;
        goto label_239b44;
    }
    ctx->pc = 0x239B3Cu;
    SET_GPR_U32(ctx, 31, 0x239B44u);
    ctx->pc = 0x239B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B3Cu;
    // 0x239b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x239B3Cu, 0x239B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B44u;
label_239b44:
    // 0x239b44: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x239b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239b48:
    // 0x239b48: 0xc08d552  jal         func_235548
label_239b4c:
    if (ctx->pc == 0x239B4Cu) {
        ctx->pc = 0x239B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B48u;
        // 0x239b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B50u;
        goto label_239b50;
    }
    ctx->pc = 0x239B48u;
    SET_GPR_U32(ctx, 31, 0x239B50u);
    ctx->pc = 0x239B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B48u;
    // 0x239b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235548u, 0x239B48u, 0x239B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B50u;
label_239b50:
    // 0x239b50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x239b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239b54:
    // 0x239b54: 0xc08d558  jal         func_235560
label_239b58:
    if (ctx->pc == 0x239B58u) {
        ctx->pc = 0x239B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B54u;
        // 0x239b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B5Cu;
        goto label_239b5c;
    }
    ctx->pc = 0x239B54u;
    SET_GPR_U32(ctx, 31, 0x239B5Cu);
    ctx->pc = 0x239B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B54u;
    // 0x239b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235560u, 0x239B54u, 0x239B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B5Cu;
label_239b5c:
    // 0x239b5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x239b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239b60:
    // 0x239b60: 0xc093cb8  jal         func_24F2E0
label_239b64:
    if (ctx->pc == 0x239B64u) {
        ctx->pc = 0x239B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B60u;
        // 0x239b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B68u;
        goto label_239b68;
    }
    ctx->pc = 0x239B60u;
    SET_GPR_U32(ctx, 31, 0x239B68u);
    ctx->pc = 0x239B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B60u;
    // 0x239b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F2E0u, 0x239B60u, 0x239B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B68u;
label_239b68:
    // 0x239b68: 0xc08d6f0  jal         func_235BC0
label_239b6c:
    if (ctx->pc == 0x239B6Cu) {
        ctx->pc = 0x239B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B68u;
        // 0x239b6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B70u;
        goto label_239b70;
    }
    ctx->pc = 0x239B68u;
    SET_GPR_U32(ctx, 31, 0x239B70u);
    ctx->pc = 0x239B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B68u;
    // 0x239b6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BC0u, 0x239B68u, 0x239B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B70u;
label_239b70:
    // 0x239b70: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x239b70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_239b74:
    // 0x239b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x239b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_239b78:
    // 0x239b78: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_239b7c:
    if (ctx->pc == 0x239B7Cu) {
        ctx->pc = 0x239B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B78u;
        // 0x239b7c: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B80u;
        goto label_239b80;
    }
    ctx->pc = 0x239B78u;
    {
        const bool branch_taken_0x239b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239b78) {
            ctx->pc = 0x239B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239B78u;
            // 0x239b7c: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BA4u;
            goto label_239ba4;
        }
    }
    ctx->pc = 0x239B80u;
label_239b80:
    // 0x239b80: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_239b84:
    // 0x239b84: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_239b88:
    if (ctx->pc == 0x239B88u) {
        ctx->pc = 0x239B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B84u;
        // 0x239b88: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239B8Cu;
        goto label_239b8c;
    }
    ctx->pc = 0x239B84u;
    {
        const bool branch_taken_0x239b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b84) {
            ctx->pc = 0x239B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239B84u;
            // 0x239b88: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BA4u;
            goto label_239ba4;
        }
    }
    ctx->pc = 0x239B8Cu;
label_239b8c:
    // 0x239b8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x239b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239b90:
    // 0x239b90: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x239b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_239b94:
    // 0x239b94: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x239b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_239b98:
    // 0x239b98: 0x40f809  jalr        $v0
label_239b9c:
    if (ctx->pc == 0x239B9Cu) {
        ctx->pc = 0x239BA0u;
        goto label_239ba0;
    }
    ctx->pc = 0x239B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239BA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239B98u, 0x239BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239BA0u;
label_239ba0:
    // 0x239ba0: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x239ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_239ba4:
    // 0x239ba4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_239ba8:
    if (ctx->pc == 0x239BA8u) {
        ctx->pc = 0x239BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BA4u;
        // 0x239ba8: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239BACu;
        goto label_239bac;
    }
    ctx->pc = 0x239BA4u;
    {
        const bool branch_taken_0x239ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239ba4) {
            ctx->pc = 0x239BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239BA4u;
            // 0x239ba8: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BB8u;
            goto label_239bb8;
        }
    }
    ctx->pc = 0x239BACu;
label_239bac:
    // 0x239bac: 0xc08a5b2  jal         func_2296C8
label_239bb0:
    if (ctx->pc == 0x239BB0u) {
        ctx->pc = 0x239BB4u;
        goto label_239bb4;
    }
    ctx->pc = 0x239BACu;
    SET_GPR_U32(ctx, 31, 0x239BB4u);
    ctx->pc = 0x2296C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2296C8u, 0x239BACu, 0x239BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BB4u;
label_239bb4:
    // 0x239bb4: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x239bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_239bb8:
    // 0x239bb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x239bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_239bbc:
    // 0x239bbc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x239bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_239bc0:
    // 0x239bc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x239bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239bc4:
    // 0x239bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239bc8:
    // 0x239bc8: 0x808b52e  j           func_22D4B8
label_239bcc:
    if (ctx->pc == 0x239BCCu) {
        ctx->pc = 0x239BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BC8u;
        // 0x239bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239BD0u;
        goto label_fallthrough_0x239bc8;
    }
    ctx->pc = 0x239BC8u;
    ctx->pc = 0x239BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BC8u;
    // 0x239bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
label_fallthrough_0x239bc8:
    ctx->pc = 0x239BD0u;
}
