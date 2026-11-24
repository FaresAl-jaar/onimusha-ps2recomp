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

// Function: sub_00100B90
// Address: 0x100b90 - 0x100d34
void sub_00100B90_0x100b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100B90_0x100b90");
#endif

    switch (ctx->pc) {
        case 0x100bb8u: goto label_100bb8;
        case 0x100bccu: goto label_100bcc;
        case 0x100bdcu: goto label_100bdc;
        case 0x100bf0u: goto label_100bf0;
        case 0x100c10u: goto label_100c10;
        case 0x100c68u: goto label_100c68;
        case 0x100c78u: goto label_100c78;
        case 0x100c88u: goto label_100c88;
        case 0x100d18u: goto label_100d18;
        default: break;
    }

    ctx->pc = 0x100b90u;

    // 0x100b90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x100b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x100b94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x100b9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100ba4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100bac: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x100bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x100bb0: 0xc040804  jal         func_102010
    ctx->pc = 0x100BB0u;
    SET_GPR_U32(ctx, 31, 0x100BB8u);
    ctx->pc = 0x100BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BB0u;
    // 0x100bb4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102010u, 0x100BB0u, 0x100BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BB8u;
label_100bb8:
    // 0x100bb8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x100bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x100bbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100BBCu;
    {
        const bool branch_taken_0x100bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100bbc) {
            ctx->pc = 0x100BD0u;
            goto label_100bd0;
        }
    }
    ctx->pc = 0x100BC4u;
    // 0x100bc4: 0xc040224  jal         func_100890
    ctx->pc = 0x100BC4u;
    SET_GPR_U32(ctx, 31, 0x100BCCu);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x100BC4u, 0x100BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BCCu;
label_100bcc:
    // 0x100bcc: 0x0  nop
    ctx->pc = 0x100bccu;
    // NOP
label_100bd0:
    // 0x100bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100bd4: 0xc0408d0  jal         func_102340
    ctx->pc = 0x100BD4u;
    SET_GPR_U32(ctx, 31, 0x100BDCu);
    ctx->pc = 0x100BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BD4u;
    // 0x100bd8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102340u, 0x100BD4u, 0x100BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BDCu;
label_100bdc:
    // 0x100bdc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100be0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100BE0u;
    {
        const bool branch_taken_0x100be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE0u;
        // 0x100be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100be0) {
            ctx->pc = 0x100BF8u;
            goto label_100bf8;
        }
    }
    ctx->pc = 0x100BE8u;
    // 0x100be8: 0xc0404bc  jal         func_1012F0
    ctx->pc = 0x100BE8u;
    SET_GPR_U32(ctx, 31, 0x100BF0u);
    ctx->pc = 0x100BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BE8u;
    // 0x100bec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012F0u, 0x100BE8u, 0x100BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BF0u;
label_100bf0:
    // 0x100bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100BF0u;
    {
        const bool branch_taken_0x100bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BF0u;
        // 0x100bf4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bf0) {
            ctx->pc = 0x100C00u;
            goto label_100c00;
        }
    }
    ctx->pc = 0x100BF8u;
label_100bf8:
    // 0x100bf8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x100bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x100bfc: 0x0  nop
    ctx->pc = 0x100bfcu;
    // NOP
label_100c00:
    // 0x100c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c04: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x100c08: 0xc040350  jal         func_100D40
    ctx->pc = 0x100C08u;
    SET_GPR_U32(ctx, 31, 0x100C10u);
    ctx->pc = 0x100C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C08u;
    // 0x100c0c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100D40u, 0x100C08u, 0x100C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C10u;
label_100c10:
    // 0x100c10: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x100c10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x100c14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c18: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x100c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x100c1c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x100c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x100c20: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x100c20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x100c24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x100c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x100c28: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x100c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x100c2c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x100c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x100c30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x100c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x100c34: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x100c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x100c38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100c3c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x100c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x100c40: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x100c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x100c44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100C44u;
    {
        const bool branch_taken_0x100c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C44u;
        // 0x100c48: 0x26240005  addiu       $a0, $s1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c44) {
            ctx->pc = 0x100C54u;
            goto label_100c54;
        }
    }
    ctx->pc = 0x100C4Cu;
    // 0x100c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100C4Cu;
    {
        const bool branch_taken_0x100c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C4Cu;
        // 0x100c50: 0x27b00074  addiu       $s0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c4c) {
            ctx->pc = 0x100C5Cu;
            goto label_100c5c;
        }
    }
    ctx->pc = 0x100C54u;
label_100c54:
    // 0x100c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c58: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x100c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_100c5c:
    // 0x100c5c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x100c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x100c60: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x100C60u;
    SET_GPR_U32(ctx, 31, 0x100C68u);
    ctx->pc = 0x100C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C60u;
    // 0x100c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x100C60u, 0x100C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C68u;
label_100c68:
    // 0x100c68: 0x27b30078  addiu       $s3, $sp, 0x78
    ctx->pc = 0x100c68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x100c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c70: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x100C70u;
    SET_GPR_U32(ctx, 31, 0x100C78u);
    ctx->pc = 0x100C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C70u;
    // 0x100c74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x100C70u, 0x100C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C78u;
label_100c78:
    // 0x100c78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x100c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c80: 0xc04051c  jal         func_101470
    ctx->pc = 0x100C80u;
    SET_GPR_U32(ctx, 31, 0x100C88u);
    ctx->pc = 0x100C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C80u;
    // 0x100c84: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101470u, 0x100C80u, 0x100C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C88u;
label_100c88:
    // 0x100c88: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x100c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x100c8c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x100c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x100c90: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x100c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x100c94: 0xdfa60068  ld          $a2, 0x68($sp)
    ctx->pc = 0x100c94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x100c98: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x100c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x100c9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x100c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x100ca0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x100ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x100ca4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x100ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100ca8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x100ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x100cac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x100cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x100cb0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x100cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x100cb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x100cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100cb8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100cbc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x100CBCu;
    {
        const bool branch_taken_0x100cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CBCu;
        // 0x100cc0: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cbc) {
            ctx->pc = 0x100CE8u;
            goto label_100ce8;
        }
    }
    ctx->pc = 0x100CC4u;
    // 0x100cc4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x100cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x100cc8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x100cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x100ccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100cd0: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x100cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x100cd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x100cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x100cd8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x100cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x100cdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x100CDCu;
    {
        const bool branch_taken_0x100cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CDCu;
        // 0x100ce0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cdc) {
            ctx->pc = 0x100D00u;
            goto label_100d00;
        }
    }
    ctx->pc = 0x100CE4u;
    // 0x100ce4: 0x0  nop
    ctx->pc = 0x100ce4u;
    // NOP
label_100ce8:
    // 0x100ce8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x100ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x100cec: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x100cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x100cf0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x100cf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x100cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100cf8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x100cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x100cfc: 0x0  nop
    ctx->pc = 0x100cfcu;
    // NOP
label_100d00:
    // 0x100d00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100d04: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x100d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100d08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x100d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x100d10: 0xc040878  jal         func_1021E0
    ctx->pc = 0x100D10u;
    SET_GPR_U32(ctx, 31, 0x100D18u);
    ctx->pc = 0x100D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D10u;
    // 0x100d14: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1021E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1021E0u, 0x100D10u, 0x100D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D18u;
label_100d18:
    // 0x100d18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100d1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100d20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x100D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D2Cu;
        // 0x100d30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100D34u;
}
