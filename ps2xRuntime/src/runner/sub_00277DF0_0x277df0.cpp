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

// Function: sub_00277DF0
// Address: 0x277df0 - 0x277eec
void sub_00277DF0_0x277df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277DF0_0x277df0");
#endif

    switch (ctx->pc) {
        case 0x277e3cu: goto label_277e3c;
        case 0x277ec4u: goto label_277ec4;
        default: break;
    }

    ctx->pc = 0x277df0u;

    // 0x277df0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x277df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x277df4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x277df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x277df8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x277df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x277dfc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x277dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x277e00: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x277e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x277e04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x277e04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e08: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x277e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x277e0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x277e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x277e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x277e14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x277e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x277e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x277e1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277e24: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x277e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e28: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x277e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x277e2c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x277e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e30: 0x9456000a  lhu         $s6, 0xA($v0)
    ctx->pc = 0x277e30u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x277e34: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x277E34u;
    SET_GPR_U32(ctx, 31, 0x277E3Cu);
    ctx->pc = 0x277E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E34u;
    // 0x277e38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x277E34u, 0x277E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E3Cu;
label_277e3c:
    // 0x277e3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x277e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x277e40: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x277e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x277e44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x277e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x277e48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x277e48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x277e4c: 0x0  nop
    ctx->pc = 0x277e4cu;
    // NOP
    // 0x277e50: 0x0  nop
    ctx->pc = 0x277e50u;
    // NOP
    // 0x277e54: 0x1012  mflo        $v0
    ctx->pc = 0x277e54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x277e58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x277e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277e5c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x277e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x277e60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x277E60u;
    {
        const bool branch_taken_0x277e60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x277e60) {
            ctx->pc = 0x277E70u;
            goto label_277e70;
        }
    }
    ctx->pc = 0x277E68u;
    // 0x277e68: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x277e68u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x277e6c: 0x0  nop
    ctx->pc = 0x277e6cu;
    // NOP
label_277e70:
    // 0x277e70: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x277e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277e74: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x277E74u;
    {
        const bool branch_taken_0x277e74 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x277e74) {
            ctx->pc = 0x277E80u;
            goto label_277e80;
        }
    }
    ctx->pc = 0x277E7Cu;
    // 0x277e7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x277e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277e80:
    // 0x277e80: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x277e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x277e84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x277e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x277e88: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x277e88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x277e8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x277e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277e90: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x277e90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x277e94: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x277e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x277e98: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x277e98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277ea0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x277ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ea4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x277ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ea8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x277ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277eac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x277eacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277eb0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x277eb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277eb4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x277eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x277eb8: 0x24e75ec0  addiu       $a3, $a3, 0x5EC0
    ctx->pc = 0x277eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24256));
    // 0x277ebc: 0xc09de7c  jal         func_2779F0
    ctx->pc = 0x277EBCu;
    SET_GPR_U32(ctx, 31, 0x277EC4u);
    ctx->pc = 0x277EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EBCu;
    // 0x277ec0: 0x25085f10  addiu       $t0, $t0, 0x5F10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779F0u, 0x277EBCu, 0x277EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EC4u;
label_277ec4:
    // 0x277ec4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x277ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x277ec8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x277ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277ecc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x277eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277ed0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x277ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277ed4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x277ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277ed8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x277ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277edc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x277edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277ee0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x277EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EE4u;
        // 0x277ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277EECu;
}
