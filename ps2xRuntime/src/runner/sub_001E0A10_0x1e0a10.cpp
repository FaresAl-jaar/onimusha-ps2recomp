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

// Function: sub_001E0A10
// Address: 0x1e0a10 - 0x1e0b58
void sub_001E0A10_0x1e0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0A10_0x1e0a10");
#endif

    switch (ctx->pc) {
        case 0x1e0a10u: goto label_1e0a10;
        case 0x1e0a14u: goto label_1e0a14;
        case 0x1e0a18u: goto label_1e0a18;
        case 0x1e0a1cu: goto label_1e0a1c;
        case 0x1e0a20u: goto label_1e0a20;
        case 0x1e0a24u: goto label_1e0a24;
        case 0x1e0a28u: goto label_1e0a28;
        case 0x1e0a2cu: goto label_1e0a2c;
        case 0x1e0a30u: goto label_1e0a30;
        case 0x1e0a34u: goto label_1e0a34;
        case 0x1e0a38u: goto label_1e0a38;
        case 0x1e0a3cu: goto label_1e0a3c;
        case 0x1e0a40u: goto label_1e0a40;
        case 0x1e0a44u: goto label_1e0a44;
        case 0x1e0a48u: goto label_1e0a48;
        case 0x1e0a4cu: goto label_1e0a4c;
        case 0x1e0a50u: goto label_1e0a50;
        case 0x1e0a54u: goto label_1e0a54;
        case 0x1e0a58u: goto label_1e0a58;
        case 0x1e0a5cu: goto label_1e0a5c;
        case 0x1e0a60u: goto label_1e0a60;
        case 0x1e0a64u: goto label_1e0a64;
        case 0x1e0a68u: goto label_1e0a68;
        case 0x1e0a6cu: goto label_1e0a6c;
        case 0x1e0a70u: goto label_1e0a70;
        case 0x1e0a74u: goto label_1e0a74;
        case 0x1e0a78u: goto label_1e0a78;
        case 0x1e0a7cu: goto label_1e0a7c;
        case 0x1e0a80u: goto label_1e0a80;
        case 0x1e0a84u: goto label_1e0a84;
        case 0x1e0a88u: goto label_1e0a88;
        case 0x1e0a8cu: goto label_1e0a8c;
        case 0x1e0a90u: goto label_1e0a90;
        case 0x1e0a94u: goto label_1e0a94;
        case 0x1e0a98u: goto label_1e0a98;
        case 0x1e0a9cu: goto label_1e0a9c;
        case 0x1e0aa0u: goto label_1e0aa0;
        case 0x1e0aa4u: goto label_1e0aa4;
        case 0x1e0aa8u: goto label_1e0aa8;
        case 0x1e0aacu: goto label_1e0aac;
        case 0x1e0ab0u: goto label_1e0ab0;
        case 0x1e0ab4u: goto label_1e0ab4;
        case 0x1e0ab8u: goto label_1e0ab8;
        case 0x1e0abcu: goto label_1e0abc;
        case 0x1e0ac0u: goto label_1e0ac0;
        case 0x1e0ac4u: goto label_1e0ac4;
        case 0x1e0ac8u: goto label_1e0ac8;
        case 0x1e0accu: goto label_1e0acc;
        case 0x1e0ad0u: goto label_1e0ad0;
        case 0x1e0ad4u: goto label_1e0ad4;
        case 0x1e0ad8u: goto label_1e0ad8;
        case 0x1e0adcu: goto label_1e0adc;
        case 0x1e0ae0u: goto label_1e0ae0;
        case 0x1e0ae4u: goto label_1e0ae4;
        case 0x1e0ae8u: goto label_1e0ae8;
        case 0x1e0aecu: goto label_1e0aec;
        case 0x1e0af0u: goto label_1e0af0;
        case 0x1e0af4u: goto label_1e0af4;
        case 0x1e0af8u: goto label_1e0af8;
        case 0x1e0afcu: goto label_1e0afc;
        case 0x1e0b00u: goto label_1e0b00;
        case 0x1e0b04u: goto label_1e0b04;
        case 0x1e0b08u: goto label_1e0b08;
        case 0x1e0b0cu: goto label_1e0b0c;
        case 0x1e0b10u: goto label_1e0b10;
        case 0x1e0b14u: goto label_1e0b14;
        case 0x1e0b18u: goto label_1e0b18;
        case 0x1e0b1cu: goto label_1e0b1c;
        case 0x1e0b20u: goto label_1e0b20;
        case 0x1e0b24u: goto label_1e0b24;
        case 0x1e0b28u: goto label_1e0b28;
        case 0x1e0b2cu: goto label_1e0b2c;
        case 0x1e0b30u: goto label_1e0b30;
        case 0x1e0b34u: goto label_1e0b34;
        case 0x1e0b38u: goto label_1e0b38;
        case 0x1e0b3cu: goto label_1e0b3c;
        case 0x1e0b40u: goto label_1e0b40;
        case 0x1e0b44u: goto label_1e0b44;
        case 0x1e0b48u: goto label_1e0b48;
        case 0x1e0b4cu: goto label_1e0b4c;
        case 0x1e0b50u: goto label_1e0b50;
        case 0x1e0b54u: goto label_1e0b54;
        default: break;
    }

    ctx->pc = 0x1e0a10u;

label_1e0a10:
    // 0x1e0a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0a14:
    // 0x1e0a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0a18:
    // 0x1e0a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0a1c:
    // 0x1e0a1c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e0a20:
    // 0x1e0a20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e0a24:
    if (ctx->pc == 0x1E0A24u) {
        ctx->pc = 0x1E0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A20u;
        // 0x1e0a24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A28u;
        goto label_1e0a28;
    }
    ctx->pc = 0x1E0A20u;
    {
        const bool branch_taken_0x1e0a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A20u;
        // 0x1e0a24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a20) {
            ctx->pc = 0x1E0A30u;
            goto label_1e0a30;
        }
    }
    ctx->pc = 0x1E0A28u;
label_1e0a28:
    // 0x1e0a28: 0x10000047  b           . + 4 + (0x47 << 2)
label_1e0a2c:
    if (ctx->pc == 0x1E0A2Cu) {
        ctx->pc = 0x1E0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A28u;
        // 0x1e0a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A30u;
        goto label_1e0a30;
    }
    ctx->pc = 0x1E0A28u;
    {
        const bool branch_taken_0x1e0a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A28u;
        // 0x1e0a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a28) {
            ctx->pc = 0x1E0B48u;
            goto label_1e0b48;
        }
    }
    ctx->pc = 0x1E0A30u;
label_1e0a30:
    // 0x1e0a30: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e0a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e0a34:
    // 0x1e0a34: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e0a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e0a38:
    // 0x1e0a38: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e0a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e0a3c:
    // 0x1e0a3c: 0x320f809  jalr        $t9
label_1e0a40:
    if (ctx->pc == 0x1E0A40u) {
        ctx->pc = 0x1E0A44u;
        goto label_1e0a44;
    }
    ctx->pc = 0x1E0A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0A44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A3Cu, 0x1E0A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0A44u;
label_1e0a44:
    // 0x1e0a44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e0a48:
    if (ctx->pc == 0x1E0A48u) {
        ctx->pc = 0x1E0A4Cu;
        goto label_1e0a4c;
    }
    ctx->pc = 0x1E0A44u;
    {
        const bool branch_taken_0x1e0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a44) {
            ctx->pc = 0x1E0A68u;
            goto label_1e0a68;
        }
    }
    ctx->pc = 0x1E0A4Cu;
label_1e0a4c:
    // 0x1e0a4c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e0a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0a50:
    // 0x1e0a50: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0a54:
    // 0x1e0a54: 0x320f809  jalr        $t9
label_1e0a58:
    if (ctx->pc == 0x1E0A58u) {
        ctx->pc = 0x1E0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A54u;
        // 0x1e0a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A5Cu;
        goto label_1e0a5c;
    }
    ctx->pc = 0x1E0A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0A5Cu);
        ctx->pc = 0x1E0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A54u;
        // 0x1e0a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A54u, 0x1E0A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0A5Cu;
label_1e0a5c:
    // 0x1e0a5c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1e0a60:
    if (ctx->pc == 0x1E0A60u) {
        ctx->pc = 0x1E0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A5Cu;
        // 0x1e0a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A64u;
        goto label_1e0a64;
    }
    ctx->pc = 0x1E0A5Cu;
    {
        const bool branch_taken_0x1e0a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A5Cu;
        // 0x1e0a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a5c) {
            ctx->pc = 0x1E0B48u;
            goto label_1e0b48;
        }
    }
    ctx->pc = 0x1E0A64u;
label_1e0a64:
    // 0x1e0a64: 0x0  nop
    ctx->pc = 0x1e0a64u;
    // NOP
label_1e0a68:
    // 0x1e0a68: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e0a6c:
    // 0x1e0a6c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1e0a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1e0a70:
    // 0x1e0a70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e0a74:
    if (ctx->pc == 0x1E0A74u) {
        ctx->pc = 0x1E0A78u;
        goto label_1e0a78;
    }
    ctx->pc = 0x1E0A70u;
    {
        const bool branch_taken_0x1e0a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a70) {
            ctx->pc = 0x1E0A80u;
            goto label_1e0a80;
        }
    }
    ctx->pc = 0x1E0A78u;
label_1e0a78:
    // 0x1e0a78: 0x10000033  b           . + 4 + (0x33 << 2)
label_1e0a7c:
    if (ctx->pc == 0x1E0A7Cu) {
        ctx->pc = 0x1E0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A78u;
        // 0x1e0a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A80u;
        goto label_1e0a80;
    }
    ctx->pc = 0x1E0A78u;
    {
        const bool branch_taken_0x1e0a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A78u;
        // 0x1e0a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a78) {
            ctx->pc = 0x1E0B48u;
            goto label_1e0b48;
        }
    }
    ctx->pc = 0x1E0A80u;
label_1e0a80:
    // 0x1e0a80: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0a84:
    // 0x1e0a84: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1e0a84u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e0a88:
    // 0x1e0a88: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e0a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e0a8c:
    // 0x1e0a8c: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e0a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e0a90:
    // 0x1e0a90: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0a90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e0a94:
    // 0x1e0a94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e0a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e0a98:
    // 0x1e0a98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e0a9c:
    // 0x1e0a9c: 0x84a70008  lh          $a3, 0x8($a1)
    ctx->pc = 0x1e0a9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1e0aa0:
    // 0x1e0aa0: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x1e0aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1e0aa4:
    // 0x1e0aa4: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1e0aa4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e0aa8:
    // 0x1e0aa8: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1e0aa8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1e0aac:
    // 0x1e0aac: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1e0aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1e0ab0:
    // 0x1e0ab0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e0ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e0ab4:
    // 0x1e0ab4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0ab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0ab8:
    // 0x1e0ab8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e0abc:
    // 0x1e0abc: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1e0abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e0ac0:
    // 0x1e0ac0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e0ac4:
    // 0x1e0ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0ac8:
    if (ctx->pc == 0x1E0AC8u) {
        ctx->pc = 0x1E0ACCu;
        goto label_1e0acc;
    }
    ctx->pc = 0x1E0AC4u;
    {
        const bool branch_taken_0x1e0ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ac4) {
            ctx->pc = 0x1E0AD8u;
            goto label_1e0ad8;
        }
    }
    ctx->pc = 0x1E0ACCu;
label_1e0acc:
    // 0x1e0acc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1e0ad0:
    if (ctx->pc == 0x1E0AD0u) {
        ctx->pc = 0x1E0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ACCu;
        // 0x1e0ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0AD4u;
        goto label_1e0ad4;
    }
    ctx->pc = 0x1E0ACCu;
    {
        const bool branch_taken_0x1e0acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ACCu;
        // 0x1e0ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0acc) {
            ctx->pc = 0x1E0B48u;
            goto label_1e0b48;
        }
    }
    ctx->pc = 0x1E0AD4u;
label_1e0ad4:
    // 0x1e0ad4: 0x0  nop
    ctx->pc = 0x1e0ad4u;
    // NOP
label_1e0ad8:
    // 0x1e0ad8: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1e0ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1e0adc:
    // 0x1e0adc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e0ae0:
    // 0x1e0ae0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e0ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1e0ae4:
    // 0x1e0ae4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e0ae8:
    if (ctx->pc == 0x1E0AE8u) {
        ctx->pc = 0x1E0AECu;
        goto label_1e0aec;
    }
    ctx->pc = 0x1E0AE4u;
    {
        const bool branch_taken_0x1e0ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ae4) {
            ctx->pc = 0x1E0AF8u;
            goto label_1e0af8;
        }
    }
    ctx->pc = 0x1E0AECu;
label_1e0aec:
    // 0x1e0aec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0af0:
    // 0x1e0af0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0af4:
    // 0x1e0af4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1e0af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1e0af8:
    // 0x1e0af8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0afc:
    // 0x1e0afc: 0x8446000a  lh          $a2, 0xA($v0)
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1e0b00:
    // 0x1e0b00: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x1e0b00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e0b04:
    // 0x1e0b04: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_1e0b08:
    if (ctx->pc == 0x1E0B08u) {
        ctx->pc = 0x1E0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B04u;
        // 0x1e0b08: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B0Cu;
        goto label_1e0b0c;
    }
    ctx->pc = 0x1E0B04u;
    {
        const bool branch_taken_0x1e0b04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B04u;
        // 0x1e0b08: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b04) {
            ctx->pc = 0x1E0B18u;
            goto label_1e0b18;
        }
    }
    ctx->pc = 0x1E0B0Cu;
label_1e0b0c:
    // 0x1e0b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0b10:
    // 0x1e0b10: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e0b14:
    if (ctx->pc == 0x1E0B14u) {
        ctx->pc = 0x1E0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B10u;
        // 0x1e0b14: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B18u;
        goto label_1e0b18;
    }
    ctx->pc = 0x1E0B10u;
    {
        const bool branch_taken_0x1e0b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B10u;
        // 0x1e0b14: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b10) {
            ctx->pc = 0x1E0B28u;
            goto label_1e0b28;
        }
    }
    ctx->pc = 0x1E0B18u;
label_1e0b18:
    // 0x1e0b18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e0b1c:
    // 0x1e0b1c: 0xc0767d4  jal         func_1D9F50
label_1e0b20:
    if (ctx->pc == 0x1E0B20u) {
        ctx->pc = 0x1E0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B1Cu;
        // 0x1e0b20: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B24u;
        goto label_1e0b24;
    }
    ctx->pc = 0x1E0B1Cu;
    SET_GPR_U32(ctx, 31, 0x1E0B24u);
    ctx->pc = 0x1E0B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B1Cu;
    // 0x1e0b20: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1E0B1Cu, 0x1E0B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B24u;
label_1e0b24:
    // 0x1e0b24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0b28:
    // 0x1e0b28: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x1e0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e0b2c:
    // 0x1e0b2c: 0xc44e000c  lwc1        $f14, 0xC($v0)
    ctx->pc = 0x1e0b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1e0b30:
    // 0x1e0b30: 0xc0767dc  jal         func_1D9F70
label_1e0b34:
    if (ctx->pc == 0x1E0B34u) {
        ctx->pc = 0x1E0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B30u;
        // 0x1e0b34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B38u;
        goto label_1e0b38;
    }
    ctx->pc = 0x1E0B30u;
    SET_GPR_U32(ctx, 31, 0x1E0B38u);
    ctx->pc = 0x1E0B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B30u;
    // 0x1e0b34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x1E0B30u, 0x1E0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B38u;
label_1e0b38:
    // 0x1e0b38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0b3c:
    // 0x1e0b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0b40:
    // 0x1e0b40: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e0b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e0b44:
    // 0x1e0b44: 0x0  nop
    ctx->pc = 0x1e0b44u;
    // NOP
label_1e0b48:
    // 0x1e0b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0b4c:
    // 0x1e0b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0b50:
    // 0x1e0b50: 0x3e00008  jr          $ra
label_1e0b54:
    if (ctx->pc == 0x1E0B54u) {
        ctx->pc = 0x1E0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B50u;
        // 0x1e0b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B58u;
        goto label_fallthrough_0x1e0b50;
    }
    ctx->pc = 0x1E0B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B50u;
        // 0x1e0b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0b50:
    ctx->pc = 0x1E0B58u;
}
