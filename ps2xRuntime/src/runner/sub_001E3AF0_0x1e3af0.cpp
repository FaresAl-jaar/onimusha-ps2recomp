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

// Function: sub_001E3AF0
// Address: 0x1e3af0 - 0x1e3df0
void sub_001E3AF0_0x1e3af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3AF0_0x1e3af0");
#endif

    switch (ctx->pc) {
        case 0x1e3b60u: goto label_1e3b60;
        case 0x1e3b78u: goto label_1e3b78;
        case 0x1e3b94u: goto label_1e3b94;
        case 0x1e3bb4u: goto label_1e3bb4;
        case 0x1e3bd8u: goto label_1e3bd8;
        case 0x1e3c00u: goto label_1e3c00;
        case 0x1e3c2cu: goto label_1e3c2c;
        case 0x1e3c5cu: goto label_1e3c5c;
        case 0x1e3c8cu: goto label_1e3c8c;
        case 0x1e3d28u: goto label_1e3d28;
        case 0x1e3d48u: goto label_1e3d48;
        case 0x1e3d8cu: goto label_1e3d8c;
        case 0x1e3d98u: goto label_1e3d98;
        case 0x1e3db8u: goto label_1e3db8;
        default: break;
    }

    ctx->pc = 0x1e3af0u;

    // 0x1e3af0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1e3af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1e3af4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e3af8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e3af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e3afc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e3afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e3b00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e3b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e3b04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e3b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e3b08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e3b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e3b0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e3b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e3b10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e3b10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e3b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e3b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3b24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e3b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b28: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x1e3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x1e3b2c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e3b2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3b30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3B30u;
    {
        const bool branch_taken_0x1e3b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B30u;
        // 0x1e3b34: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b30) {
            ctx->pc = 0x1E3B40u;
            goto label_1e3b40;
        }
    }
    ctx->pc = 0x1E3B38u;
    // 0x1e3b38: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1E3B38u;
    {
        const bool branch_taken_0x1e3b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B38u;
        // 0x1e3b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b38) {
            ctx->pc = 0x1E3DC0u;
            goto label_1e3dc0;
        }
    }
    ctx->pc = 0x1E3B40u;
label_1e3b40:
    // 0x1e3b40: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1e3b44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3B44u;
    {
        const bool branch_taken_0x1e3b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b44) {
            ctx->pc = 0x1E3B58u;
            goto label_1e3b58;
        }
    }
    ctx->pc = 0x1E3B4Cu;
    // 0x1e3b4c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1e3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1e3b50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3B50u;
    {
        const bool branch_taken_0x1e3b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B50u;
        // 0x1e3b54: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b50) {
            ctx->pc = 0x1E3B68u;
            goto label_1e3b68;
        }
    }
    ctx->pc = 0x1E3B58u;
label_1e3b58:
    // 0x1e3b58: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E3B58u;
    SET_GPR_U32(ctx, 31, 0x1E3B60u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E3B58u, 0x1E3B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B60u;
label_1e3b60:
    // 0x1e3b60: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1e3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1e3b64: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1e3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1e3b68:
    // 0x1e3b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b6c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e3b70: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E3B70u;
    SET_GPR_U32(ctx, 31, 0x1E3B78u);
    ctx->pc = 0x1E3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B70u;
    // 0x1e3b74: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E3B70u, 0x1E3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B78u;
label_1e3b78:
    // 0x1e3b78: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e3b7c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e3b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e3b80: 0x90450008  lbu         $a1, 0x8($v0)
    ctx->pc = 0x1e3b80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e3b84: 0x90460009  lbu         $a2, 0x9($v0)
    ctx->pc = 0x1e3b84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1e3b88: 0x90480023  lbu         $t0, 0x23($v0)
    ctx->pc = 0x1e3b88u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x1e3b8c: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1E3B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E3B94u);
    ctx->pc = 0x1E3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B8Cu;
    // 0x1e3b90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1E3B8Cu, 0x1E3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B94u;
label_1e3b94:
    // 0x1e3b94: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e3b98: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e3b9c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1e3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e3ba0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e3ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e3ba4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e3ba8: 0x90650022  lbu         $a1, 0x22($v1)
    ctx->pc = 0x1e3ba8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x1e3bac: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1E3BACu;
    SET_GPR_U32(ctx, 31, 0x1E3BB4u);
    ctx->pc = 0x1E3BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BACu;
    // 0x1e3bb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1E3BACu, 0x1E3BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BB4u;
label_1e3bb4:
    // 0x1e3bb4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1e3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e3bb8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1e3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1e3bbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3bc0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1e3bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1e3bc4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e3bc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1e3bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e3bcc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e3bd0: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x1E3BD0u;
    SET_GPR_U32(ctx, 31, 0x1E3BD8u);
    ctx->pc = 0x1E3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BD0u;
    // 0x1e3bd4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x1E3BD0u, 0x1E3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BD8u;
label_1e3bd8:
    // 0x1e3bd8: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e3bdc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e3be0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e3be0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e3be4: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x1E3BE4u;
    {
        const bool branch_taken_0x1e3be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BE4u;
        // 0x1e3be8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3be4) {
            ctx->pc = 0x1E3D40u;
            goto label_1e3d40;
        }
    }
    ctx->pc = 0x1E3BECu;
    // 0x1e3bec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e3bf0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1e3bf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3bf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3bf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e3bf8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1e3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1e3bfc: 0x0  nop
    ctx->pc = 0x1e3bfcu;
    // NOP
label_1e3c00:
    // 0x1e3c00: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x1e3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e3c04: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e3c08: 0x7e9821  addu        $s3, $v1, $fp
    ctx->pc = 0x1e3c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1e3c0c: 0x86630044  lh          $v1, 0x44($s3)
    ctx->pc = 0x1e3c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1e3c10: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E3C10u;
    {
        const bool branch_taken_0x1e3c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3c10) {
            ctx->pc = 0x1E3D28u;
            goto label_1e3d28;
        }
    }
    ctx->pc = 0x1E3C18u;
    // 0x1e3c18: 0x92660048  lbu         $a2, 0x48($s3)
    ctx->pc = 0x1e3c18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1e3c1c: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1E3C1Cu;
    {
        const bool branch_taken_0x1e3c1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C1Cu;
        // 0x1e3c20: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c1c) {
            ctx->pc = 0x1E3C50u;
            goto label_1e3c50;
        }
    }
    ctx->pc = 0x1E3C24u;
    // 0x1e3c24: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x1E3C24u;
    SET_GPR_U32(ctx, 31, 0x1E3C2Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1E3C24u, 0x1E3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C2Cu;
label_1e3c2c:
    // 0x1e3c2c: 0x94520004  lhu         $s2, 0x4($v0)
    ctx->pc = 0x1e3c2cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e3c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c34: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e3c38: 0x94510006  lhu         $s1, 0x6($v0)
    ctx->pc = 0x1e3c38u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e3c3c: 0x243b021  addu        $s6, $s2, $v1
    ctx->pc = 0x1e3c3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e3c40: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1e3c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1e3c44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3C44u;
    {
        const bool branch_taken_0x1e3c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C44u;
        // 0x1e3c48: 0x222b821  addu        $s7, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c44) {
            ctx->pc = 0x1E3C80u;
            goto label_1e3c80;
        }
    }
    ctx->pc = 0x1E3C4Cu;
    // 0x1e3c4c: 0x0  nop
    ctx->pc = 0x1e3c4cu;
    // NOP
label_1e3c50:
    // 0x1e3c50: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1e3c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1e3c54: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x1E3C54u;
    SET_GPR_U32(ctx, 31, 0x1E3C5Cu);
    ctx->pc = 0x1E3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C54u;
    // 0x1e3c58: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x1E3C54u, 0x1E3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C5Cu;
label_1e3c5c:
    // 0x1e3c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c60: 0x8fb200e0  lw          $s2, 0xE0($sp)
    ctx->pc = 0x1e3c60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e3c64: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1e3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1e3c68: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e3c68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3c6c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1e3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3c70: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1e3c70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3c74: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1e3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e3c78: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1e3c78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3c7c: 0x0  nop
    ctx->pc = 0x1e3c7cu;
    // NOP
label_1e3c80:
    // 0x1e3c80: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1e3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e3c84: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x1E3C84u;
    SET_GPR_U32(ctx, 31, 0x1E3C8Cu);
    ctx->pc = 0x1E3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C84u;
    // 0x1e3c88: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x1E3C84u, 0x1E3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C8Cu;
label_1e3c8c:
    // 0x1e3c8c: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x1e3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1e3c90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e3c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3c98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e3c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c9c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e3c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ca0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1e3ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e3ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3ca8: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x1e3ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e3cac: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x1e3cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3cb0: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1e3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1e3cb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3cb8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e3cbc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1e3cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e3cc0: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e3cc4: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x1e3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1e3cc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e3ccc: 0x860c000a  lh          $t4, 0xA($s0)
    ctx->pc = 0x1e3cccu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1e3cd0: 0xc6710040  lwc1        $f17, 0x40($s3)
    ctx->pc = 0x1e3cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e3cd4: 0x860d0008  lh          $t5, 0x8($s0)
    ctx->pc = 0x1e3cd4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e3cd8: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e3cdc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x1e3cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e3ce0: 0x860b0000  lh          $t3, 0x0($s0)
    ctx->pc = 0x1e3ce0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e3ce4: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x1e3ce4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3ce8: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x1e3ce8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e3cec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e3cf0: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1e3cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e3cf4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1e3cf4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e3cf8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e3cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e3cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d00: 0x0  nop
    ctx->pc = 0x1e3d00u;
    // NOP
    // 0x1e3d04: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x1e3d04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e3d08: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1e3d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1e3d0c: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1e3d0cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d14: 0x0  nop
    ctx->pc = 0x1e3d14u;
    // NOP
    // 0x1e3d18: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1e3d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1e3d1c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x1e3d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x1e3d20: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x1E3D20u;
    SET_GPR_U32(ctx, 31, 0x1E3D28u);
    ctx->pc = 0x1E3D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D20u;
    // 0x1e3d24: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x1E3D20u, 0x1E3D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D28u;
label_1e3d28:
    // 0x1e3d28: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e3d2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e3d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e3d30: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e3d34: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e3d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e3d38: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1E3D38u;
    {
        const bool branch_taken_0x1e3d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D38u;
        // 0x1e3d3c: 0x27de0060  addiu       $fp, $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d38) {
            ctx->pc = 0x1E3C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3c00;
        }
    }
    ctx->pc = 0x1E3D40u;
label_1e3d40:
    // 0x1e3d40: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x1E3D40u;
    SET_GPR_U32(ctx, 31, 0x1E3D48u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x1E3D40u, 0x1E3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D48u;
label_1e3d48:
    // 0x1e3d48: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e3d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e3d4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3d50: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1e3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1e3d54: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1e3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e3d58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e3d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3d60: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1e3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1e3d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3D64u;
    {
        const bool branch_taken_0x1e3d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D64u;
        // 0x1e3d68: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d64) {
            ctx->pc = 0x1E3D78u;
            goto label_1e3d78;
        }
    }
    ctx->pc = 0x1E3D6Cu;
    // 0x1e3d6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E3D6Cu;
    {
        const bool branch_taken_0x1e3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D6Cu;
        // 0x1e3d70: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d6c) {
            ctx->pc = 0x1E3DC0u;
            goto label_1e3dc0;
        }
    }
    ctx->pc = 0x1E3D74u;
    // 0x1e3d74: 0x0  nop
    ctx->pc = 0x1e3d74u;
    // NOP
label_1e3d78:
    // 0x1e3d78: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e3d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e3d7c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e3d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e3d80: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e3d84: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E3D84u;
    SET_GPR_U32(ctx, 31, 0x1E3D8Cu);
    ctx->pc = 0x1E3D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D84u;
    // 0x1e3d88: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E3D84u, 0x1E3D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D8Cu;
label_1e3d8c:
    // 0x1e3d8c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1e3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e3d90: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E3D90u;
    SET_GPR_U32(ctx, 31, 0x1E3D98u);
    ctx->pc = 0x1E3D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D90u;
    // 0x1e3d94: 0x8fa400d8  lw          $a0, 0xD8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E3D90u, 0x1E3D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D98u;
label_1e3d98:
    // 0x1e3d98: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1e3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e3d9c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e3da0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e3da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3da4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1e3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1e3da8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1e3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1e3dac: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1e3dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e3db0: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E3DB0u;
    SET_GPR_U32(ctx, 31, 0x1E3DB8u);
    ctx->pc = 0x1E3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DB0u;
    // 0x1e3db4: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E3DB0u, 0x1E3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3DB8u;
label_1e3db8:
    // 0x1e3db8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e3db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3dbc: 0x0  nop
    ctx->pc = 0x1e3dbcu;
    // NOP
label_1e3dc0:
    // 0x1e3dc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e3dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e3dc4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e3dc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3dc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e3dc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3dcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e3dccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3dd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e3dd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3dd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e3dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3dd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3dd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3ddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DE8u;
        // 0x1e3dec: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3DF0u;
}
