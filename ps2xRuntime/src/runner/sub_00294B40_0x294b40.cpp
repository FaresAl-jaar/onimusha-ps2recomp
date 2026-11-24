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

// Function: sub_00294B40
// Address: 0x294b40 - 0x294c98
void sub_00294B40_0x294b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B40_0x294b40");
#endif

    switch (ctx->pc) {
        case 0x294b40u: goto label_294b40;
        case 0x294b44u: goto label_294b44;
        case 0x294b48u: goto label_294b48;
        case 0x294b4cu: goto label_294b4c;
        case 0x294b50u: goto label_294b50;
        case 0x294b54u: goto label_294b54;
        case 0x294b58u: goto label_294b58;
        case 0x294b5cu: goto label_294b5c;
        case 0x294b60u: goto label_294b60;
        case 0x294b64u: goto label_294b64;
        case 0x294b68u: goto label_294b68;
        case 0x294b6cu: goto label_294b6c;
        case 0x294b70u: goto label_294b70;
        case 0x294b74u: goto label_294b74;
        case 0x294b78u: goto label_294b78;
        case 0x294b7cu: goto label_294b7c;
        case 0x294b80u: goto label_294b80;
        case 0x294b84u: goto label_294b84;
        case 0x294b88u: goto label_294b88;
        case 0x294b8cu: goto label_294b8c;
        case 0x294b90u: goto label_294b90;
        case 0x294b94u: goto label_294b94;
        case 0x294b98u: goto label_294b98;
        case 0x294b9cu: goto label_294b9c;
        case 0x294ba0u: goto label_294ba0;
        case 0x294ba4u: goto label_294ba4;
        case 0x294ba8u: goto label_294ba8;
        case 0x294bacu: goto label_294bac;
        case 0x294bb0u: goto label_294bb0;
        case 0x294bb4u: goto label_294bb4;
        case 0x294bb8u: goto label_294bb8;
        case 0x294bbcu: goto label_294bbc;
        case 0x294bc0u: goto label_294bc0;
        case 0x294bc4u: goto label_294bc4;
        case 0x294bc8u: goto label_294bc8;
        case 0x294bccu: goto label_294bcc;
        case 0x294bd0u: goto label_294bd0;
        case 0x294bd4u: goto label_294bd4;
        case 0x294bd8u: goto label_294bd8;
        case 0x294bdcu: goto label_294bdc;
        case 0x294be0u: goto label_294be0;
        case 0x294be4u: goto label_294be4;
        case 0x294be8u: goto label_294be8;
        case 0x294becu: goto label_294bec;
        case 0x294bf0u: goto label_294bf0;
        case 0x294bf4u: goto label_294bf4;
        case 0x294bf8u: goto label_294bf8;
        case 0x294bfcu: goto label_294bfc;
        case 0x294c00u: goto label_294c00;
        case 0x294c04u: goto label_294c04;
        case 0x294c08u: goto label_294c08;
        case 0x294c0cu: goto label_294c0c;
        case 0x294c10u: goto label_294c10;
        case 0x294c14u: goto label_294c14;
        case 0x294c18u: goto label_294c18;
        case 0x294c1cu: goto label_294c1c;
        case 0x294c20u: goto label_294c20;
        case 0x294c24u: goto label_294c24;
        case 0x294c28u: goto label_294c28;
        case 0x294c2cu: goto label_294c2c;
        case 0x294c30u: goto label_294c30;
        case 0x294c34u: goto label_294c34;
        case 0x294c38u: goto label_294c38;
        case 0x294c3cu: goto label_294c3c;
        case 0x294c40u: goto label_294c40;
        case 0x294c44u: goto label_294c44;
        case 0x294c48u: goto label_294c48;
        case 0x294c4cu: goto label_294c4c;
        case 0x294c50u: goto label_294c50;
        case 0x294c54u: goto label_294c54;
        case 0x294c58u: goto label_294c58;
        case 0x294c5cu: goto label_294c5c;
        case 0x294c60u: goto label_294c60;
        case 0x294c64u: goto label_294c64;
        case 0x294c68u: goto label_294c68;
        case 0x294c6cu: goto label_294c6c;
        case 0x294c70u: goto label_294c70;
        case 0x294c74u: goto label_294c74;
        case 0x294c78u: goto label_294c78;
        case 0x294c7cu: goto label_294c7c;
        case 0x294c80u: goto label_294c80;
        case 0x294c84u: goto label_294c84;
        case 0x294c88u: goto label_294c88;
        case 0x294c8cu: goto label_294c8c;
        case 0x294c90u: goto label_294c90;
        case 0x294c94u: goto label_294c94;
        default: break;
    }

    ctx->pc = 0x294b40u;

label_294b40:
    // 0x294b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_294b44:
    // 0x294b44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_294b48:
    // 0x294b48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x294b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_294b4c:
    // 0x294b4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_294b50:
    // 0x294b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_294b54:
    // 0x294b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294b58:
    // 0x294b58: 0xc040274  jal         func_1009D0
label_294b5c:
    if (ctx->pc == 0x294B5Cu) {
        ctx->pc = 0x294B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B58u;
        // 0x294b5c: 0x260406a0  addiu       $a0, $s0, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294B60u;
        goto label_294b60;
    }
    ctx->pc = 0x294B58u;
    SET_GPR_U32(ctx, 31, 0x294B60u);
    ctx->pc = 0x294B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B58u;
    // 0x294b5c: 0x260406a0  addiu       $a0, $s0, 0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x294B58u, 0x294B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B60u;
label_294b60:
    // 0x294b60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_294b64:
    if (ctx->pc == 0x294B64u) {
        ctx->pc = 0x294B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B60u;
        // 0x294b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294B68u;
        goto label_294b68;
    }
    ctx->pc = 0x294B60u;
    {
        const bool branch_taken_0x294b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B60u;
        // 0x294b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b60) {
            ctx->pc = 0x294B70u;
            goto label_294b70;
        }
    }
    ctx->pc = 0x294B68u;
label_294b68:
    // 0x294b68: 0xc040250  jal         func_100940
label_294b6c:
    if (ctx->pc == 0x294B6Cu) {
        ctx->pc = 0x294B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B68u;
        // 0x294b6c: 0x261906a0  addiu       $t9, $s0, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294B70u;
        goto label_294b70;
    }
    ctx->pc = 0x294B68u;
    SET_GPR_U32(ctx, 31, 0x294B70u);
    ctx->pc = 0x294B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B68u;
    // 0x294b6c: 0x261906a0  addiu       $t9, $s0, 0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x294B68u, 0x294B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B70u;
label_294b70:
    // 0x294b70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x294b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_294b74:
    // 0x294b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_294b78:
    // 0x294b78: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_294b7c:
    if (ctx->pc == 0x294B7Cu) {
        ctx->pc = 0x294B80u;
        goto label_294b80;
    }
    ctx->pc = 0x294B78u;
    {
        const bool branch_taken_0x294b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x294b78) {
            ctx->pc = 0x294BB0u;
            goto label_294bb0;
        }
    }
    ctx->pc = 0x294B80u;
label_294b80:
    // 0x294b80: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
label_294b84:
    // 0x294b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x294b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_294b88:
    // 0x294b88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x294b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_294b8c:
    // 0x294b8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_294b90:
    if (ctx->pc == 0x294B90u) {
        ctx->pc = 0x294B94u;
        goto label_294b94;
    }
    ctx->pc = 0x294B8Cu;
    {
        const bool branch_taken_0x294b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294b8c) {
            ctx->pc = 0x294BA0u;
            goto label_294ba0;
        }
    }
    ctx->pc = 0x294B94u;
label_294b94:
    // 0x294b94: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x294b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
label_294b98:
    // 0x294b98: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x294b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
label_294b9c:
    // 0x294b9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x294b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_294ba0:
    // 0x294ba0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_294ba4:
    if (ctx->pc == 0x294BA4u) {
        ctx->pc = 0x294BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BA0u;
        // 0x294ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294BA8u;
        goto label_294ba8;
    }
    ctx->pc = 0x294BA0u;
    {
        const bool branch_taken_0x294ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BA0u;
        // 0x294ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ba0) {
            ctx->pc = 0x294BB0u;
            goto label_294bb0;
        }
    }
    ctx->pc = 0x294BA8u;
label_294ba8:
    // 0x294ba8: 0xc0ae51c  jal         func_2B9470
label_294bac:
    if (ctx->pc == 0x294BACu) {
        ctx->pc = 0x294BB0u;
        goto label_294bb0;
    }
    ctx->pc = 0x294BA8u;
    SET_GPR_U32(ctx, 31, 0x294BB0u);
    ctx->pc = 0x2B9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9470u, 0x294BA8u, 0x294BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BB0u;
label_294bb0:
    // 0x294bb0: 0xc068ff4  jal         func_1A3FD0
label_294bb4:
    if (ctx->pc == 0x294BB4u) {
        ctx->pc = 0x294BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BB0u;
        // 0x294bb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294BB8u;
        goto label_294bb8;
    }
    ctx->pc = 0x294BB0u;
    SET_GPR_U32(ctx, 31, 0x294BB8u);
    ctx->pc = 0x294BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294BB0u;
    // 0x294bb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3FD0u, 0x294BB0u, 0x294BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BB8u;
label_294bb8:
    // 0x294bb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_294bbc:
    if (ctx->pc == 0x294BBCu) {
        ctx->pc = 0x294BC0u;
        goto label_294bc0;
    }
    ctx->pc = 0x294BB8u;
    {
        const bool branch_taken_0x294bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294bb8) {
            ctx->pc = 0x294BC8u;
            goto label_294bc8;
        }
    }
    ctx->pc = 0x294BC0u;
label_294bc0:
    // 0x294bc0: 0xc068fe4  jal         func_1A3F90
label_294bc4:
    if (ctx->pc == 0x294BC4u) {
        ctx->pc = 0x294BC8u;
        goto label_294bc8;
    }
    ctx->pc = 0x294BC0u;
    SET_GPR_U32(ctx, 31, 0x294BC8u);
    ctx->pc = 0x1A3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F90u, 0x294BC0u, 0x294BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BC8u;
label_294bc8:
    // 0x294bc8: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x294bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
label_294bcc:
    // 0x294bcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x294bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_294bd0:
    // 0x294bd0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_294bd4:
    if (ctx->pc == 0x294BD4u) {
        ctx->pc = 0x294BD8u;
        goto label_294bd8;
    }
    ctx->pc = 0x294BD0u;
    {
        const bool branch_taken_0x294bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x294bd0) {
            ctx->pc = 0x294C08u;
            goto label_294c08;
        }
    }
    ctx->pc = 0x294BD8u;
label_294bd8:
    // 0x294bd8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x294bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_294bdc:
    // 0x294bdc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x294bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_294be0:
    // 0x294be0: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x294be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_294be4:
    // 0x294be4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x294be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_294be8:
    // 0x294be8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x294be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_294bec:
    // 0x294bec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x294becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_294bf0:
    // 0x294bf0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x294bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_294bf4:
    // 0x294bf4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x294bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_294bf8:
    // 0x294bf8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x294bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_294bfc:
    // 0x294bfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x294bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_294c00:
    // 0x294c00: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x294c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_294c04:
    // 0x294c04: 0x0  nop
    ctx->pc = 0x294c04u;
    // NOP
label_294c08:
    // 0x294c08: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x294c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_294c0c:
    // 0x294c0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_294c10:
    if (ctx->pc == 0x294C10u) {
        ctx->pc = 0x294C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C0Cu;
        // 0x294c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C14u;
        goto label_294c14;
    }
    ctx->pc = 0x294C0Cu;
    {
        const bool branch_taken_0x294c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C0Cu;
        // 0x294c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c0c) {
            ctx->pc = 0x294C20u;
            goto label_294c20;
        }
    }
    ctx->pc = 0x294C14u;
label_294c14:
    // 0x294c14: 0xc0a72d8  jal         func_29CB60
label_294c18:
    if (ctx->pc == 0x294C18u) {
        ctx->pc = 0x294C1Cu;
        goto label_294c1c;
    }
    ctx->pc = 0x294C14u;
    SET_GPR_U32(ctx, 31, 0x294C1Cu);
    ctx->pc = 0x29CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB60u, 0x294C14u, 0x294C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C1Cu;
label_294c1c:
    // 0x294c1c: 0x0  nop
    ctx->pc = 0x294c1cu;
    // NOP
label_294c20:
    // 0x294c20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x294c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294c24:
    // 0x294c24: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x294c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_294c28:
    // 0x294c28: 0x8e250858  lw          $a1, 0x858($s1)
    ctx->pc = 0x294c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_294c2c:
    // 0x294c2c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_294c30:
    if (ctx->pc == 0x294C30u) {
        ctx->pc = 0x294C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C2Cu;
        // 0x294c30: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C34u;
        goto label_294c34;
    }
    ctx->pc = 0x294C2Cu;
    {
        const bool branch_taken_0x294c2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C2Cu;
        // 0x294c30: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c2c) {
            ctx->pc = 0x294C40u;
            goto label_294c40;
        }
    }
    ctx->pc = 0x294C34u;
label_294c34:
    // 0x294c34: 0xc0a739c  jal         func_29CE70
label_294c38:
    if (ctx->pc == 0x294C38u) {
        ctx->pc = 0x294C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C34u;
        // 0x294c38: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C3Cu;
        goto label_294c3c;
    }
    ctx->pc = 0x294C34u;
    SET_GPR_U32(ctx, 31, 0x294C3Cu);
    ctx->pc = 0x294C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C34u;
    // 0x294c38: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x294C34u, 0x294C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C3Cu;
label_294c3c:
    // 0x294c3c: 0x0  nop
    ctx->pc = 0x294c3cu;
    // NOP
label_294c40:
    // 0x294c40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294c44:
    // 0x294c44: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x294c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_294c48:
    // 0x294c48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_294c4c:
    if (ctx->pc == 0x294C4Cu) {
        ctx->pc = 0x294C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C48u;
        // 0x294c4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C50u;
        goto label_294c50;
    }
    ctx->pc = 0x294C48u;
    {
        const bool branch_taken_0x294c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C48u;
        // 0x294c4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c48) {
            ctx->pc = 0x294C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294c28;
        }
    }
    ctx->pc = 0x294C50u;
label_294c50:
    // 0x294c50: 0xc09d9b4  jal         func_2766D0
label_294c54:
    if (ctx->pc == 0x294C54u) {
        ctx->pc = 0x294C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C50u;
        // 0x294c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C58u;
        goto label_294c58;
    }
    ctx->pc = 0x294C50u;
    SET_GPR_U32(ctx, 31, 0x294C58u);
    ctx->pc = 0x294C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C50u;
    // 0x294c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766D0u, 0x294C50u, 0x294C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C58u;
label_294c58:
    // 0x294c58: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x294c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_294c5c:
    // 0x294c5c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x294c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_294c60:
    // 0x294c60: 0x320f809  jalr        $t9
label_294c64:
    if (ctx->pc == 0x294C64u) {
        ctx->pc = 0x294C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C60u;
        // 0x294c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C68u;
        goto label_294c68;
    }
    ctx->pc = 0x294C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294C68u);
        ctx->pc = 0x294C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C60u;
        // 0x294c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C60u, 0x294C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294C68u;
label_294c68:
    // 0x294c68: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x294c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_294c6c:
    // 0x294c6c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x294c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_294c70:
    // 0x294c70: 0x320f809  jalr        $t9
label_294c74:
    if (ctx->pc == 0x294C74u) {
        ctx->pc = 0x294C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C70u;
        // 0x294c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C78u;
        goto label_294c78;
    }
    ctx->pc = 0x294C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294C78u);
        ctx->pc = 0x294C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C70u;
        // 0x294c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C70u, 0x294C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294C78u;
label_294c78:
    // 0x294c78: 0xc09d6d4  jal         func_275B50
label_294c7c:
    if (ctx->pc == 0x294C7Cu) {
        ctx->pc = 0x294C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C78u;
        // 0x294c7c: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C80u;
        goto label_294c80;
    }
    ctx->pc = 0x294C78u;
    SET_GPR_U32(ctx, 31, 0x294C80u);
    ctx->pc = 0x294C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C78u;
    // 0x294c7c: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275B50u, 0x294C78u, 0x294C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C80u;
label_294c80:
    // 0x294c80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_294c84:
    // 0x294c84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_294c88:
    // 0x294c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_294c8c:
    // 0x294c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_294c90:
    // 0x294c90: 0x3e00008  jr          $ra
label_294c94:
    if (ctx->pc == 0x294C94u) {
        ctx->pc = 0x294C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C90u;
        // 0x294c94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C98u;
        goto label_fallthrough_0x294c90;
    }
    ctx->pc = 0x294C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C90u;
        // 0x294c94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x294c90:
    ctx->pc = 0x294C98u;
}
