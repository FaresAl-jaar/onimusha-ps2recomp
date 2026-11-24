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

// Function: sub_001E6AE0
// Address: 0x1e6ae0 - 0x1e6bd0
void sub_001E6AE0_0x1e6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6AE0_0x1e6ae0");
#endif

    switch (ctx->pc) {
        case 0x1e6ae0u: goto label_1e6ae0;
        case 0x1e6ae4u: goto label_1e6ae4;
        case 0x1e6ae8u: goto label_1e6ae8;
        case 0x1e6aecu: goto label_1e6aec;
        case 0x1e6af0u: goto label_1e6af0;
        case 0x1e6af4u: goto label_1e6af4;
        case 0x1e6af8u: goto label_1e6af8;
        case 0x1e6afcu: goto label_1e6afc;
        case 0x1e6b00u: goto label_1e6b00;
        case 0x1e6b04u: goto label_1e6b04;
        case 0x1e6b08u: goto label_1e6b08;
        case 0x1e6b0cu: goto label_1e6b0c;
        case 0x1e6b10u: goto label_1e6b10;
        case 0x1e6b14u: goto label_1e6b14;
        case 0x1e6b18u: goto label_1e6b18;
        case 0x1e6b1cu: goto label_1e6b1c;
        case 0x1e6b20u: goto label_1e6b20;
        case 0x1e6b24u: goto label_1e6b24;
        case 0x1e6b28u: goto label_1e6b28;
        case 0x1e6b2cu: goto label_1e6b2c;
        case 0x1e6b30u: goto label_1e6b30;
        case 0x1e6b34u: goto label_1e6b34;
        case 0x1e6b38u: goto label_1e6b38;
        case 0x1e6b3cu: goto label_1e6b3c;
        case 0x1e6b40u: goto label_1e6b40;
        case 0x1e6b44u: goto label_1e6b44;
        case 0x1e6b48u: goto label_1e6b48;
        case 0x1e6b4cu: goto label_1e6b4c;
        case 0x1e6b50u: goto label_1e6b50;
        case 0x1e6b54u: goto label_1e6b54;
        case 0x1e6b58u: goto label_1e6b58;
        case 0x1e6b5cu: goto label_1e6b5c;
        case 0x1e6b60u: goto label_1e6b60;
        case 0x1e6b64u: goto label_1e6b64;
        case 0x1e6b68u: goto label_1e6b68;
        case 0x1e6b6cu: goto label_1e6b6c;
        case 0x1e6b70u: goto label_1e6b70;
        case 0x1e6b74u: goto label_1e6b74;
        case 0x1e6b78u: goto label_1e6b78;
        case 0x1e6b7cu: goto label_1e6b7c;
        case 0x1e6b80u: goto label_1e6b80;
        case 0x1e6b84u: goto label_1e6b84;
        case 0x1e6b88u: goto label_1e6b88;
        case 0x1e6b8cu: goto label_1e6b8c;
        case 0x1e6b90u: goto label_1e6b90;
        case 0x1e6b94u: goto label_1e6b94;
        case 0x1e6b98u: goto label_1e6b98;
        case 0x1e6b9cu: goto label_1e6b9c;
        case 0x1e6ba0u: goto label_1e6ba0;
        case 0x1e6ba4u: goto label_1e6ba4;
        case 0x1e6ba8u: goto label_1e6ba8;
        case 0x1e6bacu: goto label_1e6bac;
        case 0x1e6bb0u: goto label_1e6bb0;
        case 0x1e6bb4u: goto label_1e6bb4;
        case 0x1e6bb8u: goto label_1e6bb8;
        case 0x1e6bbcu: goto label_1e6bbc;
        case 0x1e6bc0u: goto label_1e6bc0;
        case 0x1e6bc4u: goto label_1e6bc4;
        case 0x1e6bc8u: goto label_1e6bc8;
        case 0x1e6bccu: goto label_1e6bcc;
        default: break;
    }

    ctx->pc = 0x1e6ae0u;

label_1e6ae0:
    // 0x1e6ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6ae4:
    // 0x1e6ae4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e6ae8:
    // 0x1e6ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e6aec:
    // 0x1e6aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6af0:
    // 0x1e6af0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6af0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6af4:
    // 0x1e6af4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6af8:
    if (ctx->pc == 0x1E6AF8u) {
        ctx->pc = 0x1E6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AF4u;
        // 0x1e6af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6AFCu;
        goto label_1e6afc;
    }
    ctx->pc = 0x1E6AF4u;
    {
        const bool branch_taken_0x1e6af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AF4u;
        // 0x1e6af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6af4) {
            ctx->pc = 0x1E6B08u;
            goto label_1e6b08;
        }
    }
    ctx->pc = 0x1E6AFCu;
label_1e6afc:
    // 0x1e6afc: 0x10000030  b           . + 4 + (0x30 << 2)
label_1e6b00:
    if (ctx->pc == 0x1E6B00u) {
        ctx->pc = 0x1E6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AFCu;
        // 0x1e6b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B04u;
        goto label_1e6b04;
    }
    ctx->pc = 0x1E6AFCu;
    {
        const bool branch_taken_0x1e6afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AFCu;
        // 0x1e6b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6afc) {
            ctx->pc = 0x1E6BC0u;
            goto label_1e6bc0;
        }
    }
    ctx->pc = 0x1E6B04u;
label_1e6b04:
    // 0x1e6b04: 0x0  nop
    ctx->pc = 0x1e6b04u;
    // NOP
label_1e6b08:
    // 0x1e6b08: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e6b08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e6b0c:
    // 0x1e6b0c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e6b10:
    // 0x1e6b10: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e6b10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e6b14:
    // 0x1e6b14: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e6b14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6b18:
    // 0x1e6b18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e6b1c:
    // 0x1e6b1c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e6b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e6b20:
    // 0x1e6b20: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e6b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e6b24:
    // 0x1e6b24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e6b28:
    if (ctx->pc == 0x1E6B28u) {
        ctx->pc = 0x1E6B2Cu;
        goto label_1e6b2c;
    }
    ctx->pc = 0x1E6B24u;
    {
        const bool branch_taken_0x1e6b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6b24) {
            ctx->pc = 0x1E6B48u;
            goto label_1e6b48;
        }
    }
    ctx->pc = 0x1E6B2Cu;
label_1e6b2c:
    // 0x1e6b2c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e6b2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6b30:
    // 0x1e6b30: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e6b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e6b34:
    // 0x1e6b34: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e6b38:
    if (ctx->pc == 0x1E6B38u) {
        ctx->pc = 0x1E6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B34u;
        // 0x1e6b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B3Cu;
        goto label_1e6b3c;
    }
    ctx->pc = 0x1E6B34u;
    {
        const bool branch_taken_0x1e6b34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B34u;
        // 0x1e6b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b34) {
            ctx->pc = 0x1E6B70u;
            goto label_1e6b70;
        }
    }
    ctx->pc = 0x1E6B3Cu;
label_1e6b3c:
    // 0x1e6b3c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e6b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e6b40:
    // 0x1e6b40: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e6b44:
    if (ctx->pc == 0x1E6B44u) {
        ctx->pc = 0x1E6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B40u;
        // 0x1e6b44: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B48u;
        goto label_1e6b48;
    }
    ctx->pc = 0x1E6B40u;
    {
        const bool branch_taken_0x1e6b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B40u;
        // 0x1e6b44: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b40) {
            ctx->pc = 0x1E6B70u;
            goto label_1e6b70;
        }
    }
    ctx->pc = 0x1E6B48u;
label_1e6b48:
    // 0x1e6b48: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e6b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6b4c:
    // 0x1e6b4c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e6b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6b50:
    // 0x1e6b50: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e6b54:
    if (ctx->pc == 0x1E6B54u) {
        ctx->pc = 0x1E6B58u;
        goto label_1e6b58;
    }
    ctx->pc = 0x1E6B50u;
    {
        const bool branch_taken_0x1e6b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b50) {
            ctx->pc = 0x1E6B70u;
            goto label_1e6b70;
        }
    }
    ctx->pc = 0x1E6B58u;
label_1e6b58:
    // 0x1e6b58: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e6b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e6b5c:
    // 0x1e6b5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e6b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6b60:
    // 0x1e6b60: 0x320f809  jalr        $t9
label_1e6b64:
    if (ctx->pc == 0x1E6B64u) {
        ctx->pc = 0x1E6B68u;
        goto label_1e6b68;
    }
    ctx->pc = 0x1E6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6B68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6B60u, 0x1E6B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6B68u;
label_1e6b68:
    // 0x1e6b68: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e6b6c:
    if (ctx->pc == 0x1E6B6Cu) {
        ctx->pc = 0x1E6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B68u;
        // 0x1e6b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B70u;
        goto label_1e6b70;
    }
    ctx->pc = 0x1E6B68u;
    {
        const bool branch_taken_0x1e6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B68u;
        // 0x1e6b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b68) {
            ctx->pc = 0x1E6BC0u;
            goto label_1e6bc0;
        }
    }
    ctx->pc = 0x1E6B70u;
label_1e6b70:
    // 0x1e6b70: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e6b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e6b74:
    // 0x1e6b74: 0xc076800  jal         func_1DA000
label_1e6b78:
    if (ctx->pc == 0x1E6B78u) {
        ctx->pc = 0x1E6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B74u;
        // 0x1e6b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B7Cu;
        goto label_1e6b7c;
    }
    ctx->pc = 0x1E6B74u;
    SET_GPR_U32(ctx, 31, 0x1E6B7Cu);
    ctx->pc = 0x1E6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B74u;
    // 0x1e6b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E6B74u, 0x1E6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B7Cu;
label_1e6b7c:
    // 0x1e6b7c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e6b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e6b80:
    // 0x1e6b80: 0xc076800  jal         func_1DA000
label_1e6b84:
    if (ctx->pc == 0x1E6B84u) {
        ctx->pc = 0x1E6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B80u;
        // 0x1e6b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B88u;
        goto label_1e6b88;
    }
    ctx->pc = 0x1E6B80u;
    SET_GPR_U32(ctx, 31, 0x1E6B88u);
    ctx->pc = 0x1E6B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B80u;
    // 0x1e6b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E6B80u, 0x1E6B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B88u;
label_1e6b88:
    // 0x1e6b88: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e6b8c:
    // 0x1e6b8c: 0xc076800  jal         func_1DA000
label_1e6b90:
    if (ctx->pc == 0x1E6B90u) {
        ctx->pc = 0x1E6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B8Cu;
        // 0x1e6b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B94u;
        goto label_1e6b94;
    }
    ctx->pc = 0x1E6B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B94u);
    ctx->pc = 0x1E6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B8Cu;
    // 0x1e6b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E6B8Cu, 0x1E6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B94u;
label_1e6b94:
    // 0x1e6b94: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1e6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e6b98:
    // 0x1e6b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6b9c:
    // 0x1e6b9c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e6b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e6ba0:
    // 0x1e6ba0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1e6ba4:
    // 0x1e6ba4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e6ba8:
    // 0x1e6ba8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e6ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e6bac:
    // 0x1e6bac: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1e6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1e6bb0:
    // 0x1e6bb0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1e6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e6bb4:
    // 0x1e6bb4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e6bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e6bb8:
    // 0x1e6bb8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1e6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1e6bbc:
    // 0x1e6bbc: 0x0  nop
    ctx->pc = 0x1e6bbcu;
    // NOP
label_1e6bc0:
    // 0x1e6bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6bc4:
    // 0x1e6bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6bc8:
    // 0x1e6bc8: 0x3e00008  jr          $ra
label_1e6bcc:
    if (ctx->pc == 0x1E6BCCu) {
        ctx->pc = 0x1E6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BC8u;
        // 0x1e6bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6BD0u;
        goto label_fallthrough_0x1e6bc8;
    }
    ctx->pc = 0x1E6BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BC8u;
        // 0x1e6bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6bc8:
    ctx->pc = 0x1E6BD0u;
}
