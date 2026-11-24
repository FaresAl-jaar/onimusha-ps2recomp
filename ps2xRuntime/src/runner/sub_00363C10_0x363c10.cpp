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

// Function: sub_00363C10
// Address: 0x363c10 - 0x363cd0
void sub_00363C10_0x363c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363C10_0x363c10");
#endif

    switch (ctx->pc) {
        case 0x363c10u: goto label_363c10;
        case 0x363c14u: goto label_363c14;
        case 0x363c18u: goto label_363c18;
        case 0x363c1cu: goto label_363c1c;
        case 0x363c20u: goto label_363c20;
        case 0x363c24u: goto label_363c24;
        case 0x363c28u: goto label_363c28;
        case 0x363c2cu: goto label_363c2c;
        case 0x363c30u: goto label_363c30;
        case 0x363c34u: goto label_363c34;
        case 0x363c38u: goto label_363c38;
        case 0x363c3cu: goto label_363c3c;
        case 0x363c40u: goto label_363c40;
        case 0x363c44u: goto label_363c44;
        case 0x363c48u: goto label_363c48;
        case 0x363c4cu: goto label_363c4c;
        case 0x363c50u: goto label_363c50;
        case 0x363c54u: goto label_363c54;
        case 0x363c58u: goto label_363c58;
        case 0x363c5cu: goto label_363c5c;
        case 0x363c60u: goto label_363c60;
        case 0x363c64u: goto label_363c64;
        case 0x363c68u: goto label_363c68;
        case 0x363c6cu: goto label_363c6c;
        case 0x363c70u: goto label_363c70;
        case 0x363c74u: goto label_363c74;
        case 0x363c78u: goto label_363c78;
        case 0x363c7cu: goto label_363c7c;
        case 0x363c80u: goto label_363c80;
        case 0x363c84u: goto label_363c84;
        case 0x363c88u: goto label_363c88;
        case 0x363c8cu: goto label_363c8c;
        case 0x363c90u: goto label_363c90;
        case 0x363c94u: goto label_363c94;
        case 0x363c98u: goto label_363c98;
        case 0x363c9cu: goto label_363c9c;
        case 0x363ca0u: goto label_363ca0;
        case 0x363ca4u: goto label_363ca4;
        case 0x363ca8u: goto label_363ca8;
        case 0x363cacu: goto label_363cac;
        case 0x363cb0u: goto label_363cb0;
        case 0x363cb4u: goto label_363cb4;
        case 0x363cb8u: goto label_363cb8;
        case 0x363cbcu: goto label_363cbc;
        case 0x363cc0u: goto label_363cc0;
        case 0x363cc4u: goto label_363cc4;
        case 0x363cc8u: goto label_363cc8;
        case 0x363cccu: goto label_363ccc;
        default: break;
    }

    ctx->pc = 0x363c10u;

label_363c10:
    // 0x363c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x363c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_363c14:
    // 0x363c14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x363c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_363c18:
    // 0x363c18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x363c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_363c1c:
    // 0x363c1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x363c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_363c20:
    // 0x363c20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x363c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_363c24:
    // 0x363c24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x363c24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363c28:
    // 0x363c28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x363c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_363c2c:
    // 0x363c2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_363c30:
    // 0x363c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_363c34:
    // 0x363c34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_363c38:
    // 0x363c38: 0x8f838bc8  lw          $v1, -0x7438($gp)
    ctx->pc = 0x363c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
label_363c3c:
    // 0x363c3c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x363c3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_363c40:
    // 0x363c40: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_363c44:
    if (ctx->pc == 0x363C44u) {
        ctx->pc = 0x363C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C40u;
        // 0x363c44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363C48u;
        goto label_363c48;
    }
    ctx->pc = 0x363C40u;
    {
        const bool branch_taken_0x363c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x363C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C40u;
        // 0x363c44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c40) {
            ctx->pc = 0x363CA8u;
            goto label_363ca8;
        }
    }
    ctx->pc = 0x363C48u;
label_363c48:
    // 0x363c48: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x363c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_363c4c:
    // 0x363c4c: 0x3c130092  lui         $s3, 0x92
    ctx->pc = 0x363c4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)146 << 16));
label_363c50:
    // 0x363c50: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x363c50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_363c54:
    // 0x363c54: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x363c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_363c58:
    // 0x363c58: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x363c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_363c5c:
    // 0x363c5c: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x363c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_363c60:
    // 0x363c60: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x363c60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_363c64:
    // 0x363c64: 0x2673c290  addiu       $s3, $s3, -0x3D70
    ctx->pc = 0x363c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951568));
label_363c68:
    // 0x363c68: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x363c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_363c6c:
    // 0x363c6c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x363c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_363c70:
    // 0x363c70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_363c74:
    if (ctx->pc == 0x363C74u) {
        ctx->pc = 0x363C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C70u;
        // 0x363c74: 0x3286ffff  andi        $a2, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x363C78u;
        goto label_363c78;
    }
    ctx->pc = 0x363C70u;
    {
        const bool branch_taken_0x363c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C70u;
        // 0x363c74: 0x3286ffff  andi        $a2, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c70) {
            ctx->pc = 0x363C90u;
            goto label_363c90;
        }
    }
    ctx->pc = 0x363C78u;
label_363c78:
    // 0x363c78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x363c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_363c7c:
    // 0x363c7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x363c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_363c80:
    // 0x363c80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x363c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363c84:
    // 0x363c84: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x363c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_363c88:
    // 0x363c88: 0x60f809  jalr        $v1
label_363c8c:
    if (ctx->pc == 0x363C8Cu) {
        ctx->pc = 0x363C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C88u;
        // 0x363c8c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363C90u;
        goto label_363c90;
    }
    ctx->pc = 0x363C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x363C90u);
        ctx->pc = 0x363C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C88u;
        // 0x363c8c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363C88u, 0x363C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363C90u;
label_363c90:
    // 0x363c90: 0x8f838bc8  lw          $v1, -0x7438($gp)
    ctx->pc = 0x363c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
label_363c94:
    // 0x363c94: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x363c94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_363c98:
    // 0x363c98: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x363c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_363c9c:
    // 0x363c9c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_363ca0:
    if (ctx->pc == 0x363CA0u) {
        ctx->pc = 0x363CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C9Cu;
        // 0x363ca0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363CA4u;
        goto label_363ca4;
    }
    ctx->pc = 0x363C9Cu;
    {
        const bool branch_taken_0x363c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x363CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C9Cu;
        // 0x363ca0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c9c) {
            ctx->pc = 0x363C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363c68;
        }
    }
    ctx->pc = 0x363CA4u;
label_363ca4:
    // 0x363ca4: 0x0  nop
    ctx->pc = 0x363ca4u;
    // NOP
label_363ca8:
    // 0x363ca8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x363ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_363cac:
    // 0x363cac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x363cacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_363cb0:
    // 0x363cb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x363cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_363cb4:
    // 0x363cb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_363cb8:
    // 0x363cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_363cbc:
    // 0x363cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_363cc0:
    // 0x363cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_363cc4:
    // 0x363cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_363cc8:
    // 0x363cc8: 0x3e00008  jr          $ra
label_363ccc:
    if (ctx->pc == 0x363CCCu) {
        ctx->pc = 0x363CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CC8u;
        // 0x363ccc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363CD0u;
        goto label_fallthrough_0x363cc8;
    }
    ctx->pc = 0x363CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CC8u;
        // 0x363ccc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x363cc8:
    ctx->pc = 0x363CD0u;
}
