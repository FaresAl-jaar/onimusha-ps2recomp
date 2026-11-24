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

// Function: sub_003D7BB0
// Address: 0x3d7bb0 - 0x3d7e10
void sub_003D7BB0_0x3d7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7BB0_0x3d7bb0");
#endif

    switch (ctx->pc) {
        case 0x3d7bc4u: goto label_3d7bc4;
        case 0x3d7bdcu: goto label_3d7bdc;
        case 0x3d7c64u: goto label_3d7c64;
        case 0x3d7c98u: goto label_3d7c98;
        case 0x3d7ca8u: goto label_3d7ca8;
        case 0x3d7cd4u: goto label_3d7cd4;
        case 0x3d7cf4u: goto label_3d7cf4;
        case 0x3d7d14u: goto label_3d7d14;
        case 0x3d7d34u: goto label_3d7d34;
        case 0x3d7d54u: goto label_3d7d54;
        case 0x3d7d74u: goto label_3d7d74;
        case 0x3d7d94u: goto label_3d7d94;
        case 0x3d7db4u: goto label_3d7db4;
        case 0x3d7dd4u: goto label_3d7dd4;
        case 0x3d7de0u: goto label_3d7de0;
        default: break;
    }

    ctx->pc = 0x3d7bb0u;

    // 0x3d7bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d7bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7bbc: 0xc0f5eb0  jal         func_3D7AC0
    ctx->pc = 0x3D7BBCu;
    SET_GPR_U32(ctx, 31, 0x3D7BC4u);
    ctx->pc = 0x3D7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7BBCu;
    // 0x3d7bc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7AC0u, 0x3D7BBCu, 0x3D7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7BC4u;
label_3d7bc4:
    // 0x3d7bc4: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x3d7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3d7bc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d7bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d7bcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7BCCu;
    {
        const bool branch_taken_0x3d7bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BCCu;
        // 0x3d7bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bcc) {
            ctx->pc = 0x3D7BE0u;
            goto label_3d7be0;
        }
    }
    ctx->pc = 0x3D7BD4u;
    // 0x3d7bd4: 0xc0f5ec4  jal         func_3D7B10
    ctx->pc = 0x3D7BD4u;
    SET_GPR_U32(ctx, 31, 0x3D7BDCu);
    ctx->pc = 0x3D7B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7B10u, 0x3D7BD4u, 0x3D7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7BDCu;
label_3d7bdc:
    // 0x3d7bdc: 0x0  nop
    ctx->pc = 0x3d7bdcu;
    // NOP
label_3d7be0:
    // 0x3d7be0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3d7be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3d7be4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3d7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3d7be8: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3D7BE8u;
    {
        const bool branch_taken_0x3d7be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BE8u;
        // 0x3d7bec: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7be8) {
            ctx->pc = 0x3D7DC0u;
            goto label_3d7dc0;
        }
    }
    ctx->pc = 0x3D7BF0u;
    // 0x3d7bf0: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x3D7BF0u;
    {
        const bool branch_taken_0x3d7bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7bf0) {
            ctx->pc = 0x3D7DA0u;
            goto label_3d7da0;
        }
    }
    ctx->pc = 0x3D7BF8u;
    // 0x3d7bf8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x3d7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3d7bfc: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3D7BFCu;
    {
        const bool branch_taken_0x3d7bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BFCu;
        // 0x3d7c00: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bfc) {
            ctx->pc = 0x3D7D80u;
            goto label_3d7d80;
        }
    }
    ctx->pc = 0x3D7C04u;
    // 0x3d7c04: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3D7C04u;
    {
        const bool branch_taken_0x3d7c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7c04) {
            ctx->pc = 0x3D7D60u;
            goto label_3d7d60;
        }
    }
    ctx->pc = 0x3D7C0Cu;
    // 0x3d7c0c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x3d7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3d7c10: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3D7C10u;
    {
        const bool branch_taken_0x3d7c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C10u;
        // 0x3d7c14: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c10) {
            ctx->pc = 0x3D7D40u;
            goto label_3d7d40;
        }
    }
    ctx->pc = 0x3D7C18u;
    // 0x3d7c18: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3D7C18u;
    {
        const bool branch_taken_0x3d7c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7c18) {
            ctx->pc = 0x3D7D20u;
            goto label_3d7d20;
        }
    }
    ctx->pc = 0x3D7C20u;
    // 0x3d7c20: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3d7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3d7c24: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3D7C24u;
    {
        const bool branch_taken_0x3d7c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C24u;
        // 0x3d7c28: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c24) {
            ctx->pc = 0x3D7D00u;
            goto label_3d7d00;
        }
    }
    ctx->pc = 0x3D7C2Cu;
    // 0x3d7c2c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D7C2Cu;
    {
        const bool branch_taken_0x3d7c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7c2c) {
            ctx->pc = 0x3D7CE0u;
            goto label_3d7ce0;
        }
    }
    ctx->pc = 0x3D7C34u;
    // 0x3d7c34: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3d7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d7c38: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D7C38u;
    {
        const bool branch_taken_0x3d7c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C38u;
        // 0x3d7c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c38) {
            ctx->pc = 0x3D7CC0u;
            goto label_3d7cc0;
        }
    }
    ctx->pc = 0x3D7C40u;
    // 0x3d7c40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7C40u;
    {
        const bool branch_taken_0x3d7c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7c40) {
            ctx->pc = 0x3D7C50u;
            goto label_3d7c50;
        }
    }
    ctx->pc = 0x3D7C48u;
    // 0x3d7c48: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3D7C48u;
    {
        const bool branch_taken_0x3d7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c48) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7C50u;
label_3d7c50:
    // 0x3d7c50: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7c58: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7c5c: 0xc09759c  jal         func_25D670
    ctx->pc = 0x3D7C5Cu;
    SET_GPR_U32(ctx, 31, 0x3D7C64u);
    ctx->pc = 0x3D7C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7C5Cu;
    // 0x3d7c60: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x3D7C5Cu, 0x3D7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7C64u;
label_3d7c64:
    // 0x3d7c64: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D7C64u;
    {
        const bool branch_taken_0x3d7c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c64) {
            ctx->pc = 0x3D7CB0u;
            goto label_3d7cb0;
        }
    }
    ctx->pc = 0x3D7C6Cu;
    // 0x3d7c6c: 0x92032b32  lbu         $v1, 0x2B32($s0)
    ctx->pc = 0x3d7c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11058)));
    // 0x3d7c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7c74: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D7C74u;
    {
        const bool branch_taken_0x3d7c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d7c74) {
            ctx->pc = 0x3D7CA0u;
            goto label_3d7ca0;
        }
    }
    ctx->pc = 0x3D7C7Cu;
    // 0x3d7c7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7C7Cu;
    {
        const bool branch_taken_0x3d7c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c7c) {
            ctx->pc = 0x3D7C90u;
            goto label_3d7c90;
        }
    }
    ctx->pc = 0x3D7C84u;
    // 0x3d7c84: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3D7C84u;
    {
        const bool branch_taken_0x3d7c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c84) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7C8Cu;
    // 0x3d7c8c: 0x0  nop
    ctx->pc = 0x3d7c8cu;
    // NOP
label_3d7c90:
    // 0x3d7c90: 0xc0f5d80  jal         func_3D7600
    ctx->pc = 0x3D7C90u;
    SET_GPR_U32(ctx, 31, 0x3D7C98u);
    ctx->pc = 0x3D7C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7C90u;
    // 0x3d7c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7600u, 0x3D7C90u, 0x3D7C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7C98u;
label_3d7c98:
    // 0x3d7c98: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3D7C98u;
    {
        const bool branch_taken_0x3d7c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c98) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7CA0u;
label_3d7ca0:
    // 0x3d7ca0: 0xc0f5e08  jal         func_3D7820
    ctx->pc = 0x3D7CA0u;
    SET_GPR_U32(ctx, 31, 0x3D7CA8u);
    ctx->pc = 0x3D7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7CA0u;
    // 0x3d7ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7820u, 0x3D7CA0u, 0x3D7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7CA8u;
label_3d7ca8:
    // 0x3d7ca8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3D7CA8u;
    {
        const bool branch_taken_0x3d7ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7ca8) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7CB0u;
label_3d7cb0:
    // 0x3d7cb0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3d7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3d7cb4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3d7cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3d7cb8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3D7CB8u;
    {
        const bool branch_taken_0x3d7cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CB8u;
        // 0x3d7cbc: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7cb8) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7CC0u;
label_3d7cc0:
    // 0x3d7cc0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7cc8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3d7cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3d7ccc: 0xc0f59ac  jal         func_3D66B0
    ctx->pc = 0x3D7CCCu;
    SET_GPR_U32(ctx, 31, 0x3D7CD4u);
    ctx->pc = 0x3D7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7CCCu;
    // 0x3d7cd0: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D66B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D66B0u, 0x3D7CCCu, 0x3D7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7CD4u;
label_3d7cd4:
    // 0x3d7cd4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3D7CD4u;
    {
        const bool branch_taken_0x3d7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7cd4) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7CDCu;
    // 0x3d7cdc: 0x0  nop
    ctx->pc = 0x3d7cdcu;
    // NOP
label_3d7ce0:
    // 0x3d7ce0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7ce8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3d7ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3d7cec: 0xc0f59d8  jal         func_3D6760
    ctx->pc = 0x3D7CECu;
    SET_GPR_U32(ctx, 31, 0x3D7CF4u);
    ctx->pc = 0x3D7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7CECu;
    // 0x3d7cf0: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6760u, 0x3D7CECu, 0x3D7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7CF4u;
label_3d7cf4:
    // 0x3d7cf4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3D7CF4u;
    {
        const bool branch_taken_0x3d7cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7cf4) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7CFCu;
    // 0x3d7cfc: 0x0  nop
    ctx->pc = 0x3d7cfcu;
    // NOP
label_3d7d00:
    // 0x3d7d00: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7d08: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7d0c: 0xc0f5a10  jal         func_3D6840
    ctx->pc = 0x3D7D0Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D14u);
    ctx->pc = 0x3D7D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D0Cu;
    // 0x3d7d10: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6840u, 0x3D7D0Cu, 0x3D7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D14u;
label_3d7d14:
    // 0x3d7d14: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3D7D14u;
    {
        const bool branch_taken_0x3d7d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d14) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7D1Cu;
    // 0x3d7d1c: 0x0  nop
    ctx->pc = 0x3d7d1cu;
    // NOP
label_3d7d20:
    // 0x3d7d20: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7d20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7d28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7d2c: 0xc0f5a98  jal         func_3D6A60
    ctx->pc = 0x3D7D2Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D34u);
    ctx->pc = 0x3D7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D2Cu;
    // 0x3d7d30: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6A60u, 0x3D7D2Cu, 0x3D7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D34u;
label_3d7d34:
    // 0x3d7d34: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3D7D34u;
    {
        const bool branch_taken_0x3d7d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d34) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7D3Cu;
    // 0x3d7d3c: 0x0  nop
    ctx->pc = 0x3d7d3cu;
    // NOP
label_3d7d40:
    // 0x3d7d40: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7d48: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7d4c: 0xc0f5b28  jal         func_3D6CA0
    ctx->pc = 0x3D7D4Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D54u);
    ctx->pc = 0x3D7D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D4Cu;
    // 0x3d7d50: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6CA0u, 0x3D7D4Cu, 0x3D7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D54u;
label_3d7d54:
    // 0x3d7d54: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3D7D54u;
    {
        const bool branch_taken_0x3d7d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d54) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7D5Cu;
    // 0x3d7d5c: 0x0  nop
    ctx->pc = 0x3d7d5cu;
    // NOP
label_3d7d60:
    // 0x3d7d60: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7d68: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7d6c: 0xc0f5b88  jal         func_3D6E20
    ctx->pc = 0x3D7D6Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D74u);
    ctx->pc = 0x3D7D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D6Cu;
    // 0x3d7d70: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6E20u, 0x3D7D6Cu, 0x3D7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D74u;
label_3d7d74:
    // 0x3d7d74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3D7D74u;
    {
        const bool branch_taken_0x3d7d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d74) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7D7Cu;
    // 0x3d7d7c: 0x0  nop
    ctx->pc = 0x3d7d7cu;
    // NOP
label_3d7d80:
    // 0x3d7d80: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7d88: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7d8c: 0xc0f5c34  jal         func_3D70D0
    ctx->pc = 0x3D7D8Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D94u);
    ctx->pc = 0x3D7D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D8Cu;
    // 0x3d7d90: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D70D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D70D0u, 0x3D7D8Cu, 0x3D7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D94u;
label_3d7d94:
    // 0x3d7d94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3D7D94u;
    {
        const bool branch_taken_0x3d7d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d94) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7D9Cu;
    // 0x3d7d9c: 0x0  nop
    ctx->pc = 0x3d7d9cu;
    // NOP
label_3d7da0:
    // 0x3d7da0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7da8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7dac: 0xc0f5c70  jal         func_3D71C0
    ctx->pc = 0x3D7DACu;
    SET_GPR_U32(ctx, 31, 0x3D7DB4u);
    ctx->pc = 0x3D7DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DACu;
    // 0x3d7db0: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D71C0u, 0x3D7DACu, 0x3D7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DB4u;
label_3d7db4:
    // 0x3d7db4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D7DB4u;
    {
        const bool branch_taken_0x3d7db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7db4) {
            ctx->pc = 0x3D7DD8u;
            goto label_3d7dd8;
        }
    }
    ctx->pc = 0x3D7DBCu;
    // 0x3d7dbc: 0x0  nop
    ctx->pc = 0x3d7dbcu;
    // NOP
label_3d7dc0:
    // 0x3d7dc0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d7dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d7dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7dc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d7dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d7dcc: 0xc0f5d40  jal         func_3D7500
    ctx->pc = 0x3D7DCCu;
    SET_GPR_U32(ctx, 31, 0x3D7DD4u);
    ctx->pc = 0x3D7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DCCu;
    // 0x3d7dd0: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7500u, 0x3D7DCCu, 0x3D7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DD4u;
label_3d7dd4:
    // 0x3d7dd4: 0x0  nop
    ctx->pc = 0x3d7dd4u;
    // NOP
label_3d7dd8:
    // 0x3d7dd8: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3D7DD8u;
    SET_GPR_U32(ctx, 31, 0x3D7DE0u);
    ctx->pc = 0x3D7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DD8u;
    // 0x3d7ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3D7DD8u, 0x3D7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DE0u;
label_3d7de0:
    // 0x3d7de0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3d7de0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3d7de4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3d7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3d7de8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7DE8u;
    {
        const bool branch_taken_0x3d7de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d7de8) {
            ctx->pc = 0x3D7DF8u;
            goto label_3d7df8;
        }
    }
    ctx->pc = 0x3D7DF0u;
    // 0x3d7df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7DF0u;
    {
        const bool branch_taken_0x3d7df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7df0) {
            ctx->pc = 0x3D7E00u;
            goto label_3d7e00;
        }
    }
    ctx->pc = 0x3D7DF8u;
label_3d7df8:
    // 0x3d7df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7dfc: 0xa2032b07  sb          $v1, 0x2B07($s0)
    ctx->pc = 0x3d7dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 3));
label_3d7e00:
    // 0x3d7e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7e08: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E08u;
        // 0x3d7e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7E10u;
}
