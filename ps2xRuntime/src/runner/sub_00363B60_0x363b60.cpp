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

// Function: sub_00363B60
// Address: 0x363b60 - 0x363c08
void sub_00363B60_0x363b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363B60_0x363b60");
#endif

    switch (ctx->pc) {
        case 0x363b60u: goto label_363b60;
        case 0x363b64u: goto label_363b64;
        case 0x363b68u: goto label_363b68;
        case 0x363b6cu: goto label_363b6c;
        case 0x363b70u: goto label_363b70;
        case 0x363b74u: goto label_363b74;
        case 0x363b78u: goto label_363b78;
        case 0x363b7cu: goto label_363b7c;
        case 0x363b80u: goto label_363b80;
        case 0x363b84u: goto label_363b84;
        case 0x363b88u: goto label_363b88;
        case 0x363b8cu: goto label_363b8c;
        case 0x363b90u: goto label_363b90;
        case 0x363b94u: goto label_363b94;
        case 0x363b98u: goto label_363b98;
        case 0x363b9cu: goto label_363b9c;
        case 0x363ba0u: goto label_363ba0;
        case 0x363ba4u: goto label_363ba4;
        case 0x363ba8u: goto label_363ba8;
        case 0x363bacu: goto label_363bac;
        case 0x363bb0u: goto label_363bb0;
        case 0x363bb4u: goto label_363bb4;
        case 0x363bb8u: goto label_363bb8;
        case 0x363bbcu: goto label_363bbc;
        case 0x363bc0u: goto label_363bc0;
        case 0x363bc4u: goto label_363bc4;
        case 0x363bc8u: goto label_363bc8;
        case 0x363bccu: goto label_363bcc;
        case 0x363bd0u: goto label_363bd0;
        case 0x363bd4u: goto label_363bd4;
        case 0x363bd8u: goto label_363bd8;
        case 0x363bdcu: goto label_363bdc;
        case 0x363be0u: goto label_363be0;
        case 0x363be4u: goto label_363be4;
        case 0x363be8u: goto label_363be8;
        case 0x363becu: goto label_363bec;
        case 0x363bf0u: goto label_363bf0;
        case 0x363bf4u: goto label_363bf4;
        case 0x363bf8u: goto label_363bf8;
        case 0x363bfcu: goto label_363bfc;
        case 0x363c00u: goto label_363c00;
        case 0x363c04u: goto label_363c04;
        default: break;
    }

    ctx->pc = 0x363b60u;

label_363b60:
    // 0x363b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x363b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_363b64:
    // 0x363b64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x363b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_363b68:
    // 0x363b68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x363b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_363b6c:
    // 0x363b6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x363b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_363b70:
    // 0x363b70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x363b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363b74:
    // 0x363b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_363b78:
    // 0x363b78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x363b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_363b7c:
    // 0x363b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_363b80:
    // 0x363b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_363b84:
    // 0x363b84: 0x8f838bc8  lw          $v1, -0x7438($gp)
    ctx->pc = 0x363b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
label_363b88:
    // 0x363b88: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x363b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_363b8c:
    // 0x363b8c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_363b90:
    if (ctx->pc == 0x363B90u) {
        ctx->pc = 0x363B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B8Cu;
        // 0x363b90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363B94u;
        goto label_363b94;
    }
    ctx->pc = 0x363B8Cu;
    {
        const bool branch_taken_0x363b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x363B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B8Cu;
        // 0x363b90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363b8c) {
            ctx->pc = 0x363BE8u;
            goto label_363be8;
        }
    }
    ctx->pc = 0x363B94u;
label_363b94:
    // 0x363b94: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x363b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_363b98:
    // 0x363b98: 0x3c110092  lui         $s1, 0x92
    ctx->pc = 0x363b98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)146 << 16));
label_363b9c:
    // 0x363b9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x363b9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_363ba0:
    // 0x363ba0: 0x2631c290  addiu       $s1, $s1, -0x3D70
    ctx->pc = 0x363ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951568));
label_363ba4:
    // 0x363ba4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x363ba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_363ba8:
    // 0x363ba8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x363ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_363bac:
    // 0x363bac: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x363bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_363bb0:
    // 0x363bb0: 0x16630007  bne         $s3, $v1, . + 4 + (0x7 << 2)
label_363bb4:
    if (ctx->pc == 0x363BB4u) {
        ctx->pc = 0x363BB8u;
        goto label_363bb8;
    }
    ctx->pc = 0x363BB0u;
    {
        const bool branch_taken_0x363bb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x363bb0) {
            ctx->pc = 0x363BD0u;
            goto label_363bd0;
        }
    }
    ctx->pc = 0x363BB8u;
label_363bb8:
    // 0x363bb8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x363bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_363bbc:
    // 0x363bbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_363bc0:
    if (ctx->pc == 0x363BC0u) {
        ctx->pc = 0x363BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BBCu;
        // 0x363bc0: 0x3246ffff  andi        $a2, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x363BC4u;
        goto label_363bc4;
    }
    ctx->pc = 0x363BBCu;
    {
        const bool branch_taken_0x363bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BBCu;
        // 0x363bc0: 0x3246ffff  andi        $a2, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363bbc) {
            ctx->pc = 0x363BD0u;
            goto label_363bd0;
        }
    }
    ctx->pc = 0x363BC4u;
label_363bc4:
    // 0x363bc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x363bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_363bc8:
    // 0x363bc8: 0x60f809  jalr        $v1
label_363bcc:
    if (ctx->pc == 0x363BCCu) {
        ctx->pc = 0x363BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BC8u;
        // 0x363bcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363BD0u;
        goto label_363bd0;
    }
    ctx->pc = 0x363BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x363BD0u);
        ctx->pc = 0x363BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BC8u;
        // 0x363bcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363BC8u, 0x363BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363BD0u;
label_363bd0:
    // 0x363bd0: 0x8f838bc8  lw          $v1, -0x7438($gp)
    ctx->pc = 0x363bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
label_363bd4:
    // 0x363bd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x363bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_363bd8:
    // 0x363bd8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x363bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_363bdc:
    // 0x363bdc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_363be0:
    if (ctx->pc == 0x363BE0u) {
        ctx->pc = 0x363BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BDCu;
        // 0x363be0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363BE4u;
        goto label_363be4;
    }
    ctx->pc = 0x363BDCu;
    {
        const bool branch_taken_0x363bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x363BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BDCu;
        // 0x363be0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363bdc) {
            ctx->pc = 0x363BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363ba8;
        }
    }
    ctx->pc = 0x363BE4u;
label_363be4:
    // 0x363be4: 0x0  nop
    ctx->pc = 0x363be4u;
    // NOP
label_363be8:
    // 0x363be8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x363be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_363bec:
    // 0x363bec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_363bf0:
    // 0x363bf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_363bf4:
    // 0x363bf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_363bf8:
    // 0x363bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_363bfc:
    // 0x363bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_363c00:
    // 0x363c00: 0x3e00008  jr          $ra
label_363c04:
    if (ctx->pc == 0x363C04u) {
        ctx->pc = 0x363C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C00u;
        // 0x363c04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363C08u;
        goto label_fallthrough_0x363c00;
    }
    ctx->pc = 0x363C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C00u;
        // 0x363c04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x363c00:
    ctx->pc = 0x363C08u;
}
