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

// Function: sub_00228B40
// Address: 0x228b40 - 0x228c5c
void sub_00228B40_0x228b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228B40_0x228b40");
#endif

    switch (ctx->pc) {
        case 0x228b40u: goto label_228b40;
        case 0x228b44u: goto label_228b44;
        case 0x228b48u: goto label_228b48;
        case 0x228b4cu: goto label_228b4c;
        case 0x228b50u: goto label_228b50;
        case 0x228b54u: goto label_228b54;
        case 0x228b58u: goto label_228b58;
        case 0x228b5cu: goto label_228b5c;
        case 0x228b60u: goto label_228b60;
        case 0x228b64u: goto label_228b64;
        case 0x228b68u: goto label_228b68;
        case 0x228b6cu: goto label_228b6c;
        case 0x228b70u: goto label_228b70;
        case 0x228b74u: goto label_228b74;
        case 0x228b78u: goto label_228b78;
        case 0x228b7cu: goto label_228b7c;
        case 0x228b80u: goto label_228b80;
        case 0x228b84u: goto label_228b84;
        case 0x228b88u: goto label_228b88;
        case 0x228b8cu: goto label_228b8c;
        case 0x228b90u: goto label_228b90;
        case 0x228b94u: goto label_228b94;
        case 0x228b98u: goto label_228b98;
        case 0x228b9cu: goto label_228b9c;
        case 0x228ba0u: goto label_228ba0;
        case 0x228ba4u: goto label_228ba4;
        case 0x228ba8u: goto label_228ba8;
        case 0x228bacu: goto label_228bac;
        case 0x228bb0u: goto label_228bb0;
        case 0x228bb4u: goto label_228bb4;
        case 0x228bb8u: goto label_228bb8;
        case 0x228bbcu: goto label_228bbc;
        case 0x228bc0u: goto label_228bc0;
        case 0x228bc4u: goto label_228bc4;
        case 0x228bc8u: goto label_228bc8;
        case 0x228bccu: goto label_228bcc;
        case 0x228bd0u: goto label_228bd0;
        case 0x228bd4u: goto label_228bd4;
        case 0x228bd8u: goto label_228bd8;
        case 0x228bdcu: goto label_228bdc;
        case 0x228be0u: goto label_228be0;
        case 0x228be4u: goto label_228be4;
        case 0x228be8u: goto label_228be8;
        case 0x228becu: goto label_228bec;
        case 0x228bf0u: goto label_228bf0;
        case 0x228bf4u: goto label_228bf4;
        case 0x228bf8u: goto label_228bf8;
        case 0x228bfcu: goto label_228bfc;
        case 0x228c00u: goto label_228c00;
        case 0x228c04u: goto label_228c04;
        case 0x228c08u: goto label_228c08;
        case 0x228c0cu: goto label_228c0c;
        case 0x228c10u: goto label_228c10;
        case 0x228c14u: goto label_228c14;
        case 0x228c18u: goto label_228c18;
        case 0x228c1cu: goto label_228c1c;
        case 0x228c20u: goto label_228c20;
        case 0x228c24u: goto label_228c24;
        case 0x228c28u: goto label_228c28;
        case 0x228c2cu: goto label_228c2c;
        case 0x228c30u: goto label_228c30;
        case 0x228c34u: goto label_228c34;
        case 0x228c38u: goto label_228c38;
        case 0x228c3cu: goto label_228c3c;
        case 0x228c40u: goto label_228c40;
        case 0x228c44u: goto label_228c44;
        case 0x228c48u: goto label_228c48;
        case 0x228c4cu: goto label_228c4c;
        case 0x228c50u: goto label_228c50;
        case 0x228c54u: goto label_228c54;
        case 0x228c58u: goto label_228c58;
        default: break;
    }

    ctx->pc = 0x228b40u;

label_228b40:
    // 0x228b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_228b44:
    // 0x228b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228b48:
    // 0x228b48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x228b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_228b4c:
    // 0x228b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228b50:
    // 0x228b50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_228b54:
    // 0x228b54: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x228b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_228b58:
    // 0x228b58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x228b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_228b5c:
    // 0x228b5c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x228b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228b60:
    // 0x228b60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x228b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_228b64:
    // 0x228b64: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x228b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_228b68:
    // 0x228b68: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x228b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_228b6c:
    // 0x228b6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228b70:
    // 0x228b70: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x228b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_228b74:
    // 0x228b74: 0x40f809  jalr        $v0
label_228b78:
    if (ctx->pc == 0x228B78u) {
        ctx->pc = 0x228B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B74u;
        // 0x228b78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228B7Cu;
        goto label_228b7c;
    }
    ctx->pc = 0x228B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228B7Cu);
        ctx->pc = 0x228B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B74u;
        // 0x228b78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228B74u, 0x228B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228B7Cu;
label_228b7c:
    // 0x228b7c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x228b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_228b80:
    // 0x228b80: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_228b84:
    // 0x228b84: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x228b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228b88:
    // 0x228b88: 0xc049522  jal         func_125488
label_228b8c:
    if (ctx->pc == 0x228B8Cu) {
        ctx->pc = 0x228B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B88u;
        // 0x228b8c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228B90u;
        goto label_228b90;
    }
    ctx->pc = 0x228B88u;
    SET_GPR_U32(ctx, 31, 0x228B90u);
    ctx->pc = 0x228B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228B88u;
    // 0x228b8c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x228B88u, 0x228B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B90u;
label_228b90:
    // 0x228b90: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x228b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_228b94:
    // 0x228b94: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x228b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228b98:
    // 0x228b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228b9c:
    // 0x228b9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228ba0:
    // 0x228ba0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x228ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228ba4:
    // 0x228ba4: 0x2278823  subu        $s1, $s1, $a3
    ctx->pc = 0x228ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_228ba8:
    // 0x228ba8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x228ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_228bac:
    // 0x228bac: 0x40f809  jalr        $v0
label_228bb0:
    if (ctx->pc == 0x228BB0u) {
        ctx->pc = 0x228BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BACu;
        // 0x228bb0: 0xf29021  addu        $s2, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228BB4u;
        goto label_228bb4;
    }
    ctx->pc = 0x228BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228BB4u);
        ctx->pc = 0x228BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BACu;
        // 0x228bb0: 0xf29021  addu        $s2, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228BACu, 0x228BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228BB4u;
label_228bb4:
    // 0x228bb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228bb8:
    // 0x228bb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x228bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_228bbc:
    // 0x228bbc: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
label_228bc0:
    if (ctx->pc == 0x228BC0u) {
        ctx->pc = 0x228BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BBCu;
        // 0x228bc0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228BC4u;
        goto label_228bc4;
    }
    ctx->pc = 0x228BBCu;
    {
        const bool branch_taken_0x228bbc = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x228BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BBCu;
        // 0x228bc0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228bbc) {
            ctx->pc = 0x228C10u;
            goto label_228c10;
        }
    }
    ctx->pc = 0x228BC4u;
label_228bc4:
    // 0x228bc4: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x228bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_228bc8:
    // 0x228bc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x228bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_228bcc:
    // 0x228bcc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x228bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_228bd0:
    // 0x228bd0: 0x60f809  jalr        $v1
label_228bd4:
    if (ctx->pc == 0x228BD4u) {
        ctx->pc = 0x228BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BD0u;
        // 0x228bd4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228BD8u;
        goto label_228bd8;
    }
    ctx->pc = 0x228BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x228BD8u);
        ctx->pc = 0x228BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BD0u;
        // 0x228bd4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228BD0u, 0x228BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228BD8u;
label_228bd8:
    // 0x228bd8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x228bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_228bdc:
    // 0x228bdc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x228bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_228be0:
    // 0x228be0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x228be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228be4:
    // 0x228be4: 0xc049522  jal         func_125488
label_228be8:
    if (ctx->pc == 0x228BE8u) {
        ctx->pc = 0x228BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BE4u;
        // 0x228be8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228BECu;
        goto label_228bec;
    }
    ctx->pc = 0x228BE4u;
    SET_GPR_U32(ctx, 31, 0x228BECu);
    ctx->pc = 0x228BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228BE4u;
    // 0x228be8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x228BE4u, 0x228BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BECu;
label_228bec:
    // 0x228bec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x228becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_228bf0:
    // 0x228bf0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x228bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228bf4:
    // 0x228bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228bf8:
    // 0x228bf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228bfc:
    // 0x228bfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x228bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228c00:
    // 0x228c00: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x228c00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_228c04:
    // 0x228c04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x228c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_228c08:
    // 0x228c08: 0x40f809  jalr        $v0
label_228c0c:
    if (ctx->pc == 0x228C0Cu) {
        ctx->pc = 0x228C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C08u;
        // 0x228c0c: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C10u;
        goto label_228c10;
    }
    ctx->pc = 0x228C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228C10u);
        ctx->pc = 0x228C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C08u;
        // 0x228c0c: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228C08u, 0x228C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228C10u;
label_228c10:
    // 0x228c10: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_228c14:
    if (ctx->pc == 0x228C14u) {
        ctx->pc = 0x228C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C10u;
        // 0x228c14: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C18u;
        goto label_228c18;
    }
    ctx->pc = 0x228C10u;
    {
        const bool branch_taken_0x228c10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C10u;
        // 0x228c14: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c10) {
            ctx->pc = 0x228C28u;
            goto label_228c28;
        }
    }
    ctx->pc = 0x228C18u;
label_228c18:
    // 0x228c18: 0xc08a0d4  jal         func_228350
label_228c1c:
    if (ctx->pc == 0x228C1Cu) {
        ctx->pc = 0x228C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C18u;
        // 0x228c1c: 0x248497c0  addiu       $a0, $a0, -0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C20u;
        goto label_228c20;
    }
    ctx->pc = 0x228C18u;
    SET_GPR_U32(ctx, 31, 0x228C20u);
    ctx->pc = 0x228C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C18u;
    // 0x228c1c: 0x248497c0  addiu       $a0, $a0, -0x6840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228350u, 0x228C18u, 0x228C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C20u;
label_228c20:
    // 0x228c20: 0x10000008  b           . + 4 + (0x8 << 2)
label_228c24:
    if (ctx->pc == 0x228C24u) {
        ctx->pc = 0x228C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C20u;
        // 0x228c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C28u;
        goto label_228c28;
    }
    ctx->pc = 0x228C20u;
    {
        const bool branch_taken_0x228c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C20u;
        // 0x228c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c20) {
            ctx->pc = 0x228C44u;
            goto label_228c44;
        }
    }
    ctx->pc = 0x228C28u;
label_228c28:
    // 0x228c28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x228c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_228c2c:
    // 0x228c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228c30:
    // 0x228c30: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x228c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_228c34:
    // 0x228c34: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x228c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_228c38:
    // 0x228c38: 0xc049590  jal         func_125640
label_228c3c:
    if (ctx->pc == 0x228C3Cu) {
        ctx->pc = 0x228C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C38u;
        // 0x228c3c: 0xd23023  subu        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C40u;
        goto label_228c40;
    }
    ctx->pc = 0x228C38u;
    SET_GPR_U32(ctx, 31, 0x228C40u);
    ctx->pc = 0x228C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C38u;
    // 0x228c3c: 0xd23023  subu        $a2, $a2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x228C38u, 0x228C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C40u;
label_228c40:
    // 0x228c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228c44:
    // 0x228c44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x228c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_228c48:
    // 0x228c48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x228c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_228c4c:
    // 0x228c4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228c4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_228c50:
    // 0x228c50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x228c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_228c54:
    // 0x228c54: 0x3e00008  jr          $ra
label_228c58:
    if (ctx->pc == 0x228C58u) {
        ctx->pc = 0x228C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C54u;
        // 0x228c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C5Cu;
        goto label_fallthrough_0x228c54;
    }
    ctx->pc = 0x228C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C54u;
        // 0x228c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228c54:
    ctx->pc = 0x228C5Cu;
}
