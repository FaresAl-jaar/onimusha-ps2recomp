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

// Function: sub_00230B28
// Address: 0x230b28 - 0x230cb4
void sub_00230B28_0x230b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230B28_0x230b28");
#endif

    switch (ctx->pc) {
        case 0x230b28u: goto label_230b28;
        case 0x230b2cu: goto label_230b2c;
        case 0x230b30u: goto label_230b30;
        case 0x230b34u: goto label_230b34;
        case 0x230b38u: goto label_230b38;
        case 0x230b3cu: goto label_230b3c;
        case 0x230b40u: goto label_230b40;
        case 0x230b44u: goto label_230b44;
        case 0x230b48u: goto label_230b48;
        case 0x230b4cu: goto label_230b4c;
        case 0x230b50u: goto label_230b50;
        case 0x230b54u: goto label_230b54;
        case 0x230b58u: goto label_230b58;
        case 0x230b5cu: goto label_230b5c;
        case 0x230b60u: goto label_230b60;
        case 0x230b64u: goto label_230b64;
        case 0x230b68u: goto label_230b68;
        case 0x230b6cu: goto label_230b6c;
        case 0x230b70u: goto label_230b70;
        case 0x230b74u: goto label_230b74;
        case 0x230b78u: goto label_230b78;
        case 0x230b7cu: goto label_230b7c;
        case 0x230b80u: goto label_230b80;
        case 0x230b84u: goto label_230b84;
        case 0x230b88u: goto label_230b88;
        case 0x230b8cu: goto label_230b8c;
        case 0x230b90u: goto label_230b90;
        case 0x230b94u: goto label_230b94;
        case 0x230b98u: goto label_230b98;
        case 0x230b9cu: goto label_230b9c;
        case 0x230ba0u: goto label_230ba0;
        case 0x230ba4u: goto label_230ba4;
        case 0x230ba8u: goto label_230ba8;
        case 0x230bacu: goto label_230bac;
        case 0x230bb0u: goto label_230bb0;
        case 0x230bb4u: goto label_230bb4;
        case 0x230bb8u: goto label_230bb8;
        case 0x230bbcu: goto label_230bbc;
        case 0x230bc0u: goto label_230bc0;
        case 0x230bc4u: goto label_230bc4;
        case 0x230bc8u: goto label_230bc8;
        case 0x230bccu: goto label_230bcc;
        case 0x230bd0u: goto label_230bd0;
        case 0x230bd4u: goto label_230bd4;
        case 0x230bd8u: goto label_230bd8;
        case 0x230bdcu: goto label_230bdc;
        case 0x230be0u: goto label_230be0;
        case 0x230be4u: goto label_230be4;
        case 0x230be8u: goto label_230be8;
        case 0x230becu: goto label_230bec;
        case 0x230bf0u: goto label_230bf0;
        case 0x230bf4u: goto label_230bf4;
        case 0x230bf8u: goto label_230bf8;
        case 0x230bfcu: goto label_230bfc;
        case 0x230c00u: goto label_230c00;
        case 0x230c04u: goto label_230c04;
        case 0x230c08u: goto label_230c08;
        case 0x230c0cu: goto label_230c0c;
        case 0x230c10u: goto label_230c10;
        case 0x230c14u: goto label_230c14;
        case 0x230c18u: goto label_230c18;
        case 0x230c1cu: goto label_230c1c;
        case 0x230c20u: goto label_230c20;
        case 0x230c24u: goto label_230c24;
        case 0x230c28u: goto label_230c28;
        case 0x230c2cu: goto label_230c2c;
        case 0x230c30u: goto label_230c30;
        case 0x230c34u: goto label_230c34;
        case 0x230c38u: goto label_230c38;
        case 0x230c3cu: goto label_230c3c;
        case 0x230c40u: goto label_230c40;
        case 0x230c44u: goto label_230c44;
        case 0x230c48u: goto label_230c48;
        case 0x230c4cu: goto label_230c4c;
        case 0x230c50u: goto label_230c50;
        case 0x230c54u: goto label_230c54;
        case 0x230c58u: goto label_230c58;
        case 0x230c5cu: goto label_230c5c;
        case 0x230c60u: goto label_230c60;
        case 0x230c64u: goto label_230c64;
        case 0x230c68u: goto label_230c68;
        case 0x230c6cu: goto label_230c6c;
        case 0x230c70u: goto label_230c70;
        case 0x230c74u: goto label_230c74;
        case 0x230c78u: goto label_230c78;
        case 0x230c7cu: goto label_230c7c;
        case 0x230c80u: goto label_230c80;
        case 0x230c84u: goto label_230c84;
        case 0x230c88u: goto label_230c88;
        case 0x230c8cu: goto label_230c8c;
        case 0x230c90u: goto label_230c90;
        case 0x230c94u: goto label_230c94;
        case 0x230c98u: goto label_230c98;
        case 0x230c9cu: goto label_230c9c;
        case 0x230ca0u: goto label_230ca0;
        case 0x230ca4u: goto label_230ca4;
        case 0x230ca8u: goto label_230ca8;
        case 0x230cacu: goto label_230cac;
        case 0x230cb0u: goto label_230cb0;
        default: break;
    }

    ctx->pc = 0x230b28u;

label_230b28:
    // 0x230b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_230b2c:
    // 0x230b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_230b30:
    // 0x230b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_230b34:
    // 0x230b34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x230b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_230b38:
    // 0x230b38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x230b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_230b3c:
    // 0x230b3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x230b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_230b40:
    // 0x230b40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x230b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_230b44:
    // 0x230b44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x230b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_230b48:
    // 0x230b48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230b4c:
    // 0x230b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230b50:
    // 0x230b50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x230b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_230b54:
    // 0x230b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_230b58:
    // 0x230b58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_230b5c:
    // 0x230b5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x230b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_230b60:
    // 0x230b60: 0xc08bbbc  jal         func_22EEF0
label_230b64:
    if (ctx->pc == 0x230B64u) {
        ctx->pc = 0x230B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B60u;
        // 0x230b64: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B68u;
        goto label_230b68;
    }
    ctx->pc = 0x230B60u;
    SET_GPR_U32(ctx, 31, 0x230B68u);
    ctx->pc = 0x230B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B60u;
    // 0x230b64: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230B60u, 0x230B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B68u;
label_230b68:
    // 0x230b68: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_230b6c:
    if (ctx->pc == 0x230B6Cu) {
        ctx->pc = 0x230B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B68u;
        // 0x230b6c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B70u;
        goto label_230b70;
    }
    ctx->pc = 0x230B68u;
    {
        const bool branch_taken_0x230b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x230B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B68u;
        // 0x230b6c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b68) {
            ctx->pc = 0x230B78u;
            goto label_230b78;
        }
    }
    ctx->pc = 0x230B70u;
label_230b70:
    // 0x230b70: 0x10000009  b           . + 4 + (0x9 << 2)
label_230b74:
    if (ctx->pc == 0x230B74u) {
        ctx->pc = 0x230B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B70u;
        // 0x230b74: 0x2484a690  addiu       $a0, $a0, -0x5970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B78u;
        goto label_230b78;
    }
    ctx->pc = 0x230B70u;
    {
        const bool branch_taken_0x230b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B70u;
        // 0x230b74: 0x2484a690  addiu       $a0, $a0, -0x5970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b70) {
            ctx->pc = 0x230B98u;
            goto label_230b98;
        }
    }
    ctx->pc = 0x230B78u;
label_230b78:
    // 0x230b78: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_230b7c:
    if (ctx->pc == 0x230B7Cu) {
        ctx->pc = 0x230B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B78u;
        // 0x230b7c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B80u;
        goto label_230b80;
    }
    ctx->pc = 0x230B78u;
    {
        const bool branch_taken_0x230b78 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x230B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B78u;
        // 0x230b7c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b78) {
            ctx->pc = 0x230B88u;
            goto label_230b88;
        }
    }
    ctx->pc = 0x230B80u;
label_230b80:
    // 0x230b80: 0x10000005  b           . + 4 + (0x5 << 2)
label_230b84:
    if (ctx->pc == 0x230B84u) {
        ctx->pc = 0x230B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B80u;
        // 0x230b84: 0x2484a6b8  addiu       $a0, $a0, -0x5948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B88u;
        goto label_230b88;
    }
    ctx->pc = 0x230B80u;
    {
        const bool branch_taken_0x230b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B80u;
        // 0x230b84: 0x2484a6b8  addiu       $a0, $a0, -0x5948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b80) {
            ctx->pc = 0x230B98u;
            goto label_230b98;
        }
    }
    ctx->pc = 0x230B88u;
label_230b88:
    // 0x230b88: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_230b8c:
    if (ctx->pc == 0x230B8Cu) {
        ctx->pc = 0x230B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B88u;
        // 0x230b8c: 0x82040001  lb          $a0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B90u;
        goto label_230b90;
    }
    ctx->pc = 0x230B88u;
    {
        const bool branch_taken_0x230b88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x230b88) {
            ctx->pc = 0x230B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230B88u;
            // 0x230b8c: 0x82040001  lb          $a0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230BA8u;
            goto label_230ba8;
        }
    }
    ctx->pc = 0x230B90u;
label_230b90:
    // 0x230b90: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_230b94:
    // 0x230b94: 0x2484a6e8  addiu       $a0, $a0, -0x5918
    ctx->pc = 0x230b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944488));
label_230b98:
    // 0x230b98: 0xc08baa4  jal         func_22EA90
label_230b9c:
    if (ctx->pc == 0x230B9Cu) {
        ctx->pc = 0x230BA0u;
        goto label_230ba0;
    }
    ctx->pc = 0x230B98u;
    SET_GPR_U32(ctx, 31, 0x230BA0u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230B98u, 0x230BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BA0u;
label_230ba0:
    // 0x230ba0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_230ba4:
    if (ctx->pc == 0x230BA4u) {
        ctx->pc = 0x230BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BA0u;
        // 0x230ba4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BA8u;
        goto label_230ba8;
    }
    ctx->pc = 0x230BA0u;
    {
        const bool branch_taken_0x230ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BA0u;
        // 0x230ba4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ba0) {
            ctx->pc = 0x230C94u;
            goto label_230c94;
        }
    }
    ctx->pc = 0x230BA8u;
label_230ba8:
    // 0x230ba8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230bac:
    // 0x230bac: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_230bb0:
    if (ctx->pc == 0x230BB0u) {
        ctx->pc = 0x230BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BACu;
        // 0x230bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BB4u;
        goto label_230bb4;
    }
    ctx->pc = 0x230BACu;
    {
        const bool branch_taken_0x230bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x230BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BACu;
        // 0x230bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bac) {
            ctx->pc = 0x230C94u;
            goto label_230c94;
        }
    }
    ctx->pc = 0x230BB4u;
label_230bb4:
    // 0x230bb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x230bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_230bb8:
    // 0x230bb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_230bbc:
    if (ctx->pc == 0x230BBCu) {
        ctx->pc = 0x230BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BB8u;
        // 0x230bbc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BC0u;
        goto label_230bc0;
    }
    ctx->pc = 0x230BB8u;
    {
        const bool branch_taken_0x230bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BB8u;
        // 0x230bbc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bb8) {
            ctx->pc = 0x230BD0u;
            goto label_230bd0;
        }
    }
    ctx->pc = 0x230BC0u;
label_230bc0:
    // 0x230bc0: 0xc08baa4  jal         func_22EA90
label_230bc4:
    if (ctx->pc == 0x230BC4u) {
        ctx->pc = 0x230BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BC0u;
        // 0x230bc4: 0x2484a710  addiu       $a0, $a0, -0x58F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BC8u;
        goto label_230bc8;
    }
    ctx->pc = 0x230BC0u;
    SET_GPR_U32(ctx, 31, 0x230BC8u);
    ctx->pc = 0x230BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BC0u;
    // 0x230bc4: 0x2484a710  addiu       $a0, $a0, -0x58F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230BC0u, 0x230BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BC8u;
label_230bc8:
    // 0x230bc8: 0x10000032  b           . + 4 + (0x32 << 2)
label_230bcc:
    if (ctx->pc == 0x230BCCu) {
        ctx->pc = 0x230BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BC8u;
        // 0x230bcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BD0u;
        goto label_230bd0;
    }
    ctx->pc = 0x230BC8u;
    {
        const bool branch_taken_0x230bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BC8u;
        // 0x230bcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bc8) {
            ctx->pc = 0x230C94u;
            goto label_230c94;
        }
    }
    ctx->pc = 0x230BD0u;
label_230bd0:
    // 0x230bd0: 0x1492c0  sll         $s2, $s4, 11
    ctx->pc = 0x230bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
label_230bd4:
    // 0x230bd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x230bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_230bd8:
    // 0x230bd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_230bdc:
    // 0x230bdc: 0xc09422c  jal         func_2508B0
label_230be0:
    if (ctx->pc == 0x230BE0u) {
        ctx->pc = 0x230BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BDCu;
        // 0x230be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BE4u;
        goto label_230be4;
    }
    ctx->pc = 0x230BDCu;
    SET_GPR_U32(ctx, 31, 0x230BE4u);
    ctx->pc = 0x230BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BDCu;
    // 0x230be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x230BDCu, 0x230BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BE4u;
label_230be4:
    // 0x230be4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230be8:
    // 0x230be8: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_230bec:
    if (ctx->pc == 0x230BECu) {
        ctx->pc = 0x230BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BE8u;
        // 0x230bec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BF0u;
        goto label_230bf0;
    }
    ctx->pc = 0x230BE8u;
    {
        const bool branch_taken_0x230be8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BE8u;
        // 0x230bec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230be8) {
            ctx->pc = 0x230C94u;
            goto label_230c94;
        }
    }
    ctx->pc = 0x230BF0u;
label_230bf0:
    // 0x230bf0: 0xc08b528  jal         func_22D4A0
label_230bf4:
    if (ctx->pc == 0x230BF4u) {
        ctx->pc = 0x230BF8u;
        goto label_230bf8;
    }
    ctx->pc = 0x230BF0u;
    SET_GPR_U32(ctx, 31, 0x230BF8u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x230BF0u, 0x230BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BF8u;
label_230bf8:
    // 0x230bf8: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x230bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
label_230bfc:
    // 0x230bfc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x230bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_230c00:
    // 0x230c00: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x230c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_230c04:
    // 0x230c04: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x230c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_230c08:
    // 0x230c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230c0c:
    // 0x230c0c: 0x8c82ccb8  lw          $v0, -0x3348($a0)
    ctx->pc = 0x230c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954168)));
label_230c10:
    // 0x230c10: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_230c14:
    if (ctx->pc == 0x230C14u) {
        ctx->pc = 0x230C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C10u;
        // 0x230c14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C18u;
        goto label_230c18;
    }
    ctx->pc = 0x230C10u;
    {
        const bool branch_taken_0x230c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x230C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C10u;
        // 0x230c14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c10) {
            ctx->pc = 0x230C20u;
            goto label_230c20;
        }
    }
    ctx->pc = 0x230C18u;
label_230c18:
    // 0x230c18: 0xc08bb4c  jal         func_22ED30
label_230c1c:
    if (ctx->pc == 0x230C1Cu) {
        ctx->pc = 0x230C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C18u;
        // 0x230c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C20u;
        goto label_230c20;
    }
    ctx->pc = 0x230C18u;
    SET_GPR_U32(ctx, 31, 0x230C20u);
    ctx->pc = 0x230C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C18u;
    // 0x230c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED30u, 0x230C18u, 0x230C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C20u;
label_230c20:
    // 0x230c20: 0xc08b52e  jal         func_22D4B8
label_230c24:
    if (ctx->pc == 0x230C24u) {
        ctx->pc = 0x230C28u;
        goto label_230c28;
    }
    ctx->pc = 0x230C20u;
    SET_GPR_U32(ctx, 31, 0x230C28u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x230C20u, 0x230C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C28u;
label_230c28:
    // 0x230c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230c2c:
    // 0x230c2c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x230c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_230c30:
    // 0x230c30: 0xc08c21e  jal         func_230878
label_230c34:
    if (ctx->pc == 0x230C34u) {
        ctx->pc = 0x230C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C30u;
        // 0x230c34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C38u;
        goto label_230c38;
    }
    ctx->pc = 0x230C30u;
    SET_GPR_U32(ctx, 31, 0x230C38u);
    ctx->pc = 0x230C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C30u;
    // 0x230c34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230878u, 0x230C30u, 0x230C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C38u;
label_230c38:
    // 0x230c38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230c3c:
    // 0x230c3c: 0x5e20000e  bgtzl       $s1, . + 4 + (0xE << 2)
label_230c40:
    if (ctx->pc == 0x230C40u) {
        ctx->pc = 0x230C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C3Cu;
        // 0x230c40: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C44u;
        goto label_230c44;
    }
    ctx->pc = 0x230C3Cu;
    {
        const bool branch_taken_0x230c3c = (GPR_S64(ctx, 17) > 0);
        if (branch_taken_0x230c3c) {
            ctx->pc = 0x230C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C3Cu;
            // 0x230c40: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C78u;
            goto label_230c78;
        }
    }
    ctx->pc = 0x230C44u;
label_230c44:
    // 0x230c44: 0xc08b528  jal         func_22D4A0
label_230c48:
    if (ctx->pc == 0x230C48u) {
        ctx->pc = 0x230C4Cu;
        goto label_230c4c;
    }
    ctx->pc = 0x230C44u;
    SET_GPR_U32(ctx, 31, 0x230C4Cu);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x230C44u, 0x230C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C4Cu;
label_230c4c:
    // 0x230c4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x230c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_230c50:
    // 0x230c50: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_230c54:
    if (ctx->pc == 0x230C54u) {
        ctx->pc = 0x230C58u;
        goto label_230c58;
    }
    ctx->pc = 0x230C50u;
    {
        const bool branch_taken_0x230c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x230c50) {
            ctx->pc = 0x230C6Cu;
            goto label_230c6c;
        }
    }
    ctx->pc = 0x230C58u;
label_230c58:
    // 0x230c58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x230c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230c5c:
    // 0x230c5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x230c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_230c60:
    // 0x230c60: 0x40f809  jalr        $v0
label_230c64:
    if (ctx->pc == 0x230C64u) {
        ctx->pc = 0x230C68u;
        goto label_230c68;
    }
    ctx->pc = 0x230C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230C68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C60u, 0x230C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230C68u;
label_230c68:
    // 0x230c68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x230c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_230c6c:
    // 0x230c6c: 0xc08b52e  jal         func_22D4B8
label_230c70:
    if (ctx->pc == 0x230C70u) {
        ctx->pc = 0x230C74u;
        goto label_230c74;
    }
    ctx->pc = 0x230C6Cu;
    SET_GPR_U32(ctx, 31, 0x230C74u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x230C6Cu, 0x230C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C74u;
label_230c74:
    // 0x230c74: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x230c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_230c78:
    // 0x230c78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230c7c:
    // 0x230c7c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x230c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_230c80:
    // 0x230c80: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x230c80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_230c84:
    // 0x230c84: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x230c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_230c88:
    // 0x230c88: 0xc08bbbc  jal         func_22EEF0
label_230c8c:
    if (ctx->pc == 0x230C8Cu) {
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C90u;
        goto label_230c90;
    }
    ctx->pc = 0x230C88u;
    SET_GPR_U32(ctx, 31, 0x230C90u);
    ctx->pc = 0x230C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C88u;
    // 0x230c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230C88u, 0x230C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C90u;
label_230c90:
    // 0x230c90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x230c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230c94:
    // 0x230c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230c98:
    // 0x230c98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_230c9c:
    // 0x230c9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_230ca0:
    // 0x230ca0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x230ca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_230ca4:
    // 0x230ca4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x230ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_230ca8:
    // 0x230ca8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x230ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_230cac:
    // 0x230cac: 0x3e00008  jr          $ra
label_230cb0:
    if (ctx->pc == 0x230CB0u) {
        ctx->pc = 0x230CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CACu;
        // 0x230cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CB4u;
        goto label_fallthrough_0x230cac;
    }
    ctx->pc = 0x230CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CACu;
        // 0x230cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x230cac:
    ctx->pc = 0x230CB4u;
}
