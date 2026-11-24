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

// Function: sub_00239C00
// Address: 0x239c00 - 0x239cc0
void sub_00239C00_0x239c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239C00_0x239c00");
#endif

    switch (ctx->pc) {
        case 0x239c00u: goto label_239c00;
        case 0x239c04u: goto label_239c04;
        case 0x239c08u: goto label_239c08;
        case 0x239c0cu: goto label_239c0c;
        case 0x239c10u: goto label_239c10;
        case 0x239c14u: goto label_239c14;
        case 0x239c18u: goto label_239c18;
        case 0x239c1cu: goto label_239c1c;
        case 0x239c20u: goto label_239c20;
        case 0x239c24u: goto label_239c24;
        case 0x239c28u: goto label_239c28;
        case 0x239c2cu: goto label_239c2c;
        case 0x239c30u: goto label_239c30;
        case 0x239c34u: goto label_239c34;
        case 0x239c38u: goto label_239c38;
        case 0x239c3cu: goto label_239c3c;
        case 0x239c40u: goto label_239c40;
        case 0x239c44u: goto label_239c44;
        case 0x239c48u: goto label_239c48;
        case 0x239c4cu: goto label_239c4c;
        case 0x239c50u: goto label_239c50;
        case 0x239c54u: goto label_239c54;
        case 0x239c58u: goto label_239c58;
        case 0x239c5cu: goto label_239c5c;
        case 0x239c60u: goto label_239c60;
        case 0x239c64u: goto label_239c64;
        case 0x239c68u: goto label_239c68;
        case 0x239c6cu: goto label_239c6c;
        case 0x239c70u: goto label_239c70;
        case 0x239c74u: goto label_239c74;
        case 0x239c78u: goto label_239c78;
        case 0x239c7cu: goto label_239c7c;
        case 0x239c80u: goto label_239c80;
        case 0x239c84u: goto label_239c84;
        case 0x239c88u: goto label_239c88;
        case 0x239c8cu: goto label_239c8c;
        case 0x239c90u: goto label_239c90;
        case 0x239c94u: goto label_239c94;
        case 0x239c98u: goto label_239c98;
        case 0x239c9cu: goto label_239c9c;
        case 0x239ca0u: goto label_239ca0;
        case 0x239ca4u: goto label_239ca4;
        case 0x239ca8u: goto label_239ca8;
        case 0x239cacu: goto label_239cac;
        case 0x239cb0u: goto label_239cb0;
        case 0x239cb4u: goto label_239cb4;
        case 0x239cb8u: goto label_239cb8;
        case 0x239cbcu: goto label_239cbc;
        default: break;
    }

    ctx->pc = 0x239c00u;

label_239c00:
    // 0x239c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_239c04:
    // 0x239c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239c08:
    // 0x239c08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239c0c:
    // 0x239c0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239c10:
    // 0x239c10: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_239c14:
    if (ctx->pc == 0x239C14u) {
        ctx->pc = 0x239C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C10u;
        // 0x239c14: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C18u;
        goto label_239c18;
    }
    ctx->pc = 0x239C10u;
    {
        const bool branch_taken_0x239c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x239C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C10u;
        // 0x239c14: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c10) {
            ctx->pc = 0x239C38u;
            goto label_239c38;
        }
    }
    ctx->pc = 0x239C18u;
label_239c18:
    // 0x239c18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x239c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_239c1c:
    // 0x239c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239c20:
    // 0x239c20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239c24:
    // 0x239c24: 0x2484b080  addiu       $a0, $a0, -0x4F80
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946944));
label_239c28:
    // 0x239c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239c2c:
    // 0x239c2c: 0x808baa4  j           func_22EA90
label_239c30:
    if (ctx->pc == 0x239C30u) {
        ctx->pc = 0x239C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C2Cu;
        // 0x239c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C34u;
        goto label_239c34;
    }
    ctx->pc = 0x239C2Cu;
    ctx->pc = 0x239C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C2Cu;
    // 0x239c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x239C34u;
label_239c34:
    // 0x239c34: 0x0  nop
    ctx->pc = 0x239c34u;
    // NOP
label_239c38:
    // 0x239c38: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x239c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_239c3c:
    // 0x239c3c: 0x24518f9c  addiu       $s1, $v0, -0x7064
    ctx->pc = 0x239c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938524));
label_239c40:
    // 0x239c40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x239c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239c44:
    // 0x239c44: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_239c48:
    if (ctx->pc == 0x239C48u) {
        ctx->pc = 0x239C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C44u;
        // 0x239c48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C4Cu;
        goto label_239c4c;
    }
    ctx->pc = 0x239C44u;
    {
        const bool branch_taken_0x239c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239c44) {
            ctx->pc = 0x239C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239C44u;
            // 0x239c48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239C64u;
            goto label_239c64;
        }
    }
    ctx->pc = 0x239C4Cu;
label_239c4c:
    // 0x239c4c: 0xc08d6f0  jal         func_235BC0
label_239c50:
    if (ctx->pc == 0x239C50u) {
        ctx->pc = 0x239C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C4Cu;
        // 0x239c50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C54u;
        goto label_239c54;
    }
    ctx->pc = 0x239C4Cu;
    SET_GPR_U32(ctx, 31, 0x239C54u);
    ctx->pc = 0x239C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C4Cu;
    // 0x239c50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BC0u, 0x239C4Cu, 0x239C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C54u;
label_239c54:
    // 0x239c54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x239c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239c58:
    // 0x239c58: 0x40f809  jalr        $v0
label_239c5c:
    if (ctx->pc == 0x239C5Cu) {
        ctx->pc = 0x239C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C58u;
        // 0x239c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C60u;
        goto label_239c60;
    }
    ctx->pc = 0x239C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239C60u);
        ctx->pc = 0x239C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C58u;
        // 0x239c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239C58u, 0x239C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239C60u;
label_239c60:
    // 0x239c60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x239c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_239c64:
    // 0x239c64: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_239c68:
    if (ctx->pc == 0x239C68u) {
        ctx->pc = 0x239C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C64u;
        // 0x239c68: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C6Cu;
        goto label_239c6c;
    }
    ctx->pc = 0x239C64u;
    {
        const bool branch_taken_0x239c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239c64) {
            ctx->pc = 0x239C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239C64u;
            // 0x239c68: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239C78u;
            goto label_239c78;
        }
    }
    ctx->pc = 0x239C6Cu;
label_239c6c:
    // 0x239c6c: 0xc08dd46  jal         func_237518
label_239c70:
    if (ctx->pc == 0x239C70u) {
        ctx->pc = 0x239C74u;
        goto label_239c74;
    }
    ctx->pc = 0x239C6Cu;
    SET_GPR_U32(ctx, 31, 0x239C74u);
    ctx->pc = 0x237518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237518u, 0x239C6Cu, 0x239C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C74u;
label_239c74:
    // 0x239c74: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x239c74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_239c78:
    // 0x239c78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x239c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_239c7c:
    // 0x239c7c: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_239c80:
    if (ctx->pc == 0x239C80u) {
        ctx->pc = 0x239C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C7Cu;
        // 0x239c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C84u;
        goto label_239c84;
    }
    ctx->pc = 0x239C7Cu;
    {
        const bool branch_taken_0x239c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239c7c) {
            ctx->pc = 0x239C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239C7Cu;
            // 0x239c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239CACu;
            goto label_239cac;
        }
    }
    ctx->pc = 0x239C84u;
label_239c84:
    // 0x239c84: 0xc092dee  jal         func_24B7B8
label_239c88:
    if (ctx->pc == 0x239C88u) {
        ctx->pc = 0x239C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C84u;
        // 0x239c88: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C8Cu;
        goto label_239c8c;
    }
    ctx->pc = 0x239C84u;
    SET_GPR_U32(ctx, 31, 0x239C8Cu);
    ctx->pc = 0x239C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C84u;
    // 0x239c88: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x239C84u, 0x239C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C8Cu;
label_239c8c:
    // 0x239c8c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x239c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_239c90:
    // 0x239c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_239c94:
    if (ctx->pc == 0x239C94u) {
        ctx->pc = 0x239C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C90u;
        // 0x239c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C98u;
        goto label_239c98;
    }
    ctx->pc = 0x239C90u;
    {
        const bool branch_taken_0x239c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C90u;
        // 0x239c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c90) {
            ctx->pc = 0x239CA8u;
            goto label_239ca8;
        }
    }
    ctx->pc = 0x239C98u;
label_239c98:
    // 0x239c98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x239c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_239c9c:
    // 0x239c9c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x239c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_239ca0:
    // 0x239ca0: 0x60f809  jalr        $v1
label_239ca4:
    if (ctx->pc == 0x239CA4u) {
        ctx->pc = 0x239CA8u;
        goto label_239ca8;
    }
    ctx->pc = 0x239CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x239CA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239CA0u, 0x239CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239CA8u;
label_239ca8:
    // 0x239ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239cac:
    // 0x239cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239cb0:
    // 0x239cb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239cb4:
    // 0x239cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239cb8:
    // 0x239cb8: 0x808e6cc  j           func_239B30
label_239cbc:
    if (ctx->pc == 0x239CBCu) {
        ctx->pc = 0x239CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CB8u;
        // 0x239cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CC0u;
        goto label_fallthrough_0x239cb8;
    }
    ctx->pc = 0x239CB8u;
    ctx->pc = 0x239CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CB8u;
    // 0x239cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B30u;
    sub_00239B30_0x239b30(rdram, ctx, runtime); return;
label_fallthrough_0x239cb8:
    ctx->pc = 0x239CC0u;
}
