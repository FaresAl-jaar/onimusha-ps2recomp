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

// Function: sub_00274BC0
// Address: 0x274bc0 - 0x274cc8
void sub_00274BC0_0x274bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274BC0_0x274bc0");
#endif

    switch (ctx->pc) {
        case 0x274bc0u: goto label_274bc0;
        case 0x274bc4u: goto label_274bc4;
        case 0x274bc8u: goto label_274bc8;
        case 0x274bccu: goto label_274bcc;
        case 0x274bd0u: goto label_274bd0;
        case 0x274bd4u: goto label_274bd4;
        case 0x274bd8u: goto label_274bd8;
        case 0x274bdcu: goto label_274bdc;
        case 0x274be0u: goto label_274be0;
        case 0x274be4u: goto label_274be4;
        case 0x274be8u: goto label_274be8;
        case 0x274becu: goto label_274bec;
        case 0x274bf0u: goto label_274bf0;
        case 0x274bf4u: goto label_274bf4;
        case 0x274bf8u: goto label_274bf8;
        case 0x274bfcu: goto label_274bfc;
        case 0x274c00u: goto label_274c00;
        case 0x274c04u: goto label_274c04;
        case 0x274c08u: goto label_274c08;
        case 0x274c0cu: goto label_274c0c;
        case 0x274c10u: goto label_274c10;
        case 0x274c14u: goto label_274c14;
        case 0x274c18u: goto label_274c18;
        case 0x274c1cu: goto label_274c1c;
        case 0x274c20u: goto label_274c20;
        case 0x274c24u: goto label_274c24;
        case 0x274c28u: goto label_274c28;
        case 0x274c2cu: goto label_274c2c;
        case 0x274c30u: goto label_274c30;
        case 0x274c34u: goto label_274c34;
        case 0x274c38u: goto label_274c38;
        case 0x274c3cu: goto label_274c3c;
        case 0x274c40u: goto label_274c40;
        case 0x274c44u: goto label_274c44;
        case 0x274c48u: goto label_274c48;
        case 0x274c4cu: goto label_274c4c;
        case 0x274c50u: goto label_274c50;
        case 0x274c54u: goto label_274c54;
        case 0x274c58u: goto label_274c58;
        case 0x274c5cu: goto label_274c5c;
        case 0x274c60u: goto label_274c60;
        case 0x274c64u: goto label_274c64;
        case 0x274c68u: goto label_274c68;
        case 0x274c6cu: goto label_274c6c;
        case 0x274c70u: goto label_274c70;
        case 0x274c74u: goto label_274c74;
        case 0x274c78u: goto label_274c78;
        case 0x274c7cu: goto label_274c7c;
        case 0x274c80u: goto label_274c80;
        case 0x274c84u: goto label_274c84;
        case 0x274c88u: goto label_274c88;
        case 0x274c8cu: goto label_274c8c;
        case 0x274c90u: goto label_274c90;
        case 0x274c94u: goto label_274c94;
        case 0x274c98u: goto label_274c98;
        case 0x274c9cu: goto label_274c9c;
        case 0x274ca0u: goto label_274ca0;
        case 0x274ca4u: goto label_274ca4;
        case 0x274ca8u: goto label_274ca8;
        case 0x274cacu: goto label_274cac;
        case 0x274cb0u: goto label_274cb0;
        case 0x274cb4u: goto label_274cb4;
        case 0x274cb8u: goto label_274cb8;
        case 0x274cbcu: goto label_274cbc;
        case 0x274cc0u: goto label_274cc0;
        case 0x274cc4u: goto label_274cc4;
        default: break;
    }

    ctx->pc = 0x274bc0u;

label_274bc0:
    // 0x274bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x274bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_274bc4:
    // 0x274bc4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x274bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_274bc8:
    // 0x274bc8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x274bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_274bcc:
    // 0x274bcc: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x274bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_274bd0:
    // 0x274bd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x274bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_274bd4:
    // 0x274bd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x274bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_274bd8:
    // 0x274bd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_274bdc:
    // 0x274bdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x274bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_274be0:
    // 0x274be0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_274be4:
    // 0x274be4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_274be8:
    // 0x274be8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x274be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_274bec:
    // 0x274bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_274bf0:
    // 0x274bf0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x274bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_274bf4:
    // 0x274bf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_274bf8:
    if (ctx->pc == 0x274BF8u) {
        ctx->pc = 0x274BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF4u;
        // 0x274bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274BFCu;
        goto label_274bfc;
    }
    ctx->pc = 0x274BF4u;
    {
        const bool branch_taken_0x274bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF4u;
        // 0x274bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bf4) {
            ctx->pc = 0x274C08u;
            goto label_274c08;
        }
    }
    ctx->pc = 0x274BFCu;
label_274bfc:
    // 0x274bfc: 0x10000028  b           . + 4 + (0x28 << 2)
label_274c00:
    if (ctx->pc == 0x274C00u) {
        ctx->pc = 0x274C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BFCu;
        // 0x274c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C04u;
        goto label_274c04;
    }
    ctx->pc = 0x274BFCu;
    {
        const bool branch_taken_0x274bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BFCu;
        // 0x274c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bfc) {
            ctx->pc = 0x274CA0u;
            goto label_274ca0;
        }
    }
    ctx->pc = 0x274C04u;
label_274c04:
    // 0x274c04: 0x0  nop
    ctx->pc = 0x274c04u;
    // NOP
label_274c08:
    // 0x274c08: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x274c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_274c0c:
    // 0x274c0c: 0xc09d2b8  jal         func_274AE0
label_274c10:
    if (ctx->pc == 0x274C10u) {
        ctx->pc = 0x274C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C0Cu;
        // 0x274c10: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C14u;
        goto label_274c14;
    }
    ctx->pc = 0x274C0Cu;
    SET_GPR_U32(ctx, 31, 0x274C14u);
    ctx->pc = 0x274C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C0Cu;
    // 0x274c10: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274AE0u, 0x274C0Cu, 0x274C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C14u;
label_274c14:
    // 0x274c14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x274c14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274c18:
    // 0x274c18: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x274c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_274c1c:
    // 0x274c1c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x274c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274c20:
    // 0x274c20: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_274c24:
    if (ctx->pc == 0x274C24u) {
        ctx->pc = 0x274C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C20u;
        // 0x274c24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C28u;
        goto label_274c28;
    }
    ctx->pc = 0x274C20u;
    {
        const bool branch_taken_0x274c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C20u;
        // 0x274c24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c20) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274C28u;
label_274c28:
    // 0x274c28: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x274c28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_274c2c:
    // 0x274c2c: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x274c2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_274c30:
    // 0x274c30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x274c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274c34:
    // 0x274c34: 0x0  nop
    ctx->pc = 0x274c34u;
    // NOP
label_274c38:
    // 0x274c38: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x274c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_274c3c:
    // 0x274c3c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x274c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_274c40:
    // 0x274c40: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x274c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_274c44:
    // 0x274c44: 0x1452000e  bne         $v0, $s2, . + 4 + (0xE << 2)
label_274c48:
    if (ctx->pc == 0x274C48u) {
        ctx->pc = 0x274C4Cu;
        goto label_274c4c;
    }
    ctx->pc = 0x274C44u;
    {
        const bool branch_taken_0x274c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x274c44) {
            ctx->pc = 0x274C80u;
            goto label_274c80;
        }
    }
    ctx->pc = 0x274C4Cu;
label_274c4c:
    // 0x274c4c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x274c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_274c50:
    // 0x274c50: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x274c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_274c54:
    // 0x274c54: 0x24425a70  addiu       $v0, $v0, 0x5A70
    ctx->pc = 0x274c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23152));
label_274c58:
    // 0x274c58: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x274c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_274c5c:
    // 0x274c5c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x274c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_274c60:
    // 0x274c60: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x274c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_274c64:
    // 0x274c64: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_274c68:
    if (ctx->pc == 0x274C68u) {
        ctx->pc = 0x274C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C64u;
        // 0x274c68: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C6Cu;
        goto label_274c6c;
    }
    ctx->pc = 0x274C64u;
    {
        const bool branch_taken_0x274c64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x274C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C64u;
        // 0x274c68: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c64) {
            ctx->pc = 0x274C80u;
            goto label_274c80;
        }
    }
    ctx->pc = 0x274C6Cu;
label_274c6c:
    // 0x274c6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_274c70:
    // 0x274c70: 0x40f809  jalr        $v0
label_274c74:
    if (ctx->pc == 0x274C74u) {
        ctx->pc = 0x274C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C70u;
        // 0x274c74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C78u;
        goto label_274c78;
    }
    ctx->pc = 0x274C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274C78u);
        ctx->pc = 0x274C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C70u;
        // 0x274c74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274C70u, 0x274C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274C78u;
label_274c78:
    // 0x274c78: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x274c78u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_274c7c:
    // 0x274c7c: 0x0  nop
    ctx->pc = 0x274c7cu;
    // NOP
label_274c80:
    // 0x274c80: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x274c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_274c84:
    // 0x274c84: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x274c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_274c88:
    // 0x274c88: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x274c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274c8c:
    // 0x274c8c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_274c90:
    if (ctx->pc == 0x274C90u) {
        ctx->pc = 0x274C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C8Cu;
        // 0x274c90: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C94u;
        goto label_274c94;
    }
    ctx->pc = 0x274C8Cu;
    {
        const bool branch_taken_0x274c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C8Cu;
        // 0x274c90: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c8c) {
            ctx->pc = 0x274C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274c38;
        }
    }
    ctx->pc = 0x274C94u;
label_274c94:
    // 0x274c94: 0x0  nop
    ctx->pc = 0x274c94u;
    // NOP
label_274c98:
    // 0x274c98: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x274c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_274c9c:
    // 0x274c9c: 0x0  nop
    ctx->pc = 0x274c9cu;
    // NOP
label_274ca0:
    // 0x274ca0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x274ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_274ca4:
    // 0x274ca4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x274ca4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_274ca8:
    // 0x274ca8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x274ca8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_274cac:
    // 0x274cac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274cb0:
    // 0x274cb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274cb4:
    // 0x274cb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274cb8:
    // 0x274cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_274cbc:
    // 0x274cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_274cc0:
    // 0x274cc0: 0x3e00008  jr          $ra
label_274cc4:
    if (ctx->pc == 0x274CC4u) {
        ctx->pc = 0x274CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CC0u;
        // 0x274cc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274CC8u;
        goto label_fallthrough_0x274cc0;
    }
    ctx->pc = 0x274CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CC0u;
        // 0x274cc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x274cc0:
    ctx->pc = 0x274CC8u;
}
