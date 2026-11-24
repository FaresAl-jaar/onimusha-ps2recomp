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

// Function: sub_00277BF0
// Address: 0x277bf0 - 0x277ce8
void sub_00277BF0_0x277bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277BF0_0x277bf0");
#endif

    switch (ctx->pc) {
        case 0x277c3cu: goto label_277c3c;
        case 0x277cc0u: goto label_277cc0;
        default: break;
    }

    ctx->pc = 0x277bf0u;

    // 0x277bf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x277bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x277bf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x277bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x277bf8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x277bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x277bfc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x277bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x277c00: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x277c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x277c04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x277c04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c08: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x277c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x277c0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x277c0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x277c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x277c14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x277c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x277c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x277c1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277c24: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x277c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c28: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x277c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x277c2c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x277c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c30: 0x94560000  lhu         $s6, 0x0($v0)
    ctx->pc = 0x277c30u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277c34: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x277C34u;
    SET_GPR_U32(ctx, 31, 0x277C3Cu);
    ctx->pc = 0x277C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C34u;
    // 0x277c38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x277C34u, 0x277C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C3Cu;
label_277c3c:
    // 0x277c3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x277c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x277c40: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x277c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x277c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x277c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x277c48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x277c48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x277c4c: 0x0  nop
    ctx->pc = 0x277c4cu;
    // NOP
    // 0x277c50: 0x0  nop
    ctx->pc = 0x277c50u;
    // NOP
    // 0x277c54: 0x1012  mflo        $v0
    ctx->pc = 0x277c54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x277c58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x277c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277c5c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x277c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x277c60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x277C60u;
    {
        const bool branch_taken_0x277c60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x277c60) {
            ctx->pc = 0x277C70u;
            goto label_277c70;
        }
    }
    ctx->pc = 0x277C68u;
    // 0x277c68: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x277c68u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x277c6c: 0x0  nop
    ctx->pc = 0x277c6cu;
    // NOP
label_277c70:
    // 0x277c70: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x277c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277c74: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x277C74u;
    {
        const bool branch_taken_0x277c74 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x277c74) {
            ctx->pc = 0x277C80u;
            goto label_277c80;
        }
    }
    ctx->pc = 0x277C7Cu;
    // 0x277c7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x277c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277c80:
    // 0x277c80: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x277c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x277c84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x277c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x277c88: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x277c88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x277c8c: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x277c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x277c90: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x277c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x277c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277c98: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x277c98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277c9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ca0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x277ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ca4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x277ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ca8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x277ca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cac: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x277cacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277cb0: 0x24e75b60  addiu       $a3, $a3, 0x5B60
    ctx->pc = 0x277cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23392));
    // 0x277cb4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x277cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x277cb8: 0xc09de7c  jal         func_2779F0
    ctx->pc = 0x277CB8u;
    SET_GPR_U32(ctx, 31, 0x277CC0u);
    ctx->pc = 0x277CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CB8u;
    // 0x277cbc: 0x25085bb0  addiu       $t0, $t0, 0x5BB0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779F0u, 0x277CB8u, 0x277CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CC0u;
label_277cc0:
    // 0x277cc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x277cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x277cc4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x277cc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277cc8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x277cc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277ccc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x277cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277cd0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x277cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277cd4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x277cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277cd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x277cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277cdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x277CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CE0u;
        // 0x277ce4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277CE8u;
}
