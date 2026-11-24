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

// Function: sub_00370E40
// Address: 0x370e40 - 0x370f34
void sub_00370E40_0x370e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370E40_0x370e40");
#endif

    switch (ctx->pc) {
        case 0x370e90u: goto label_370e90;
        case 0x370eccu: goto label_370ecc;
        case 0x370ef0u: goto label_370ef0;
        default: break;
    }

    ctx->pc = 0x370e40u;

    // 0x370e40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x370e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x370e44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x370e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x370e48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x370e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x370e4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x370e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x370e50: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x370e50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x370e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x370e58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x370e58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x370e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x370e60: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x370e60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x370e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x370e68: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x370e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x370e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x370e70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x370e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e74: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x370e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370e7c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x370e7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x370e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370e84: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x370E84u;
    {
        const bool branch_taken_0x370e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x370E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E84u;
        // 0x370e88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e84) {
            ctx->pc = 0x370F08u;
            goto label_370f08;
        }
    }
    ctx->pc = 0x370E8Cu;
    // 0x370e8c: 0x0  nop
    ctx->pc = 0x370e8cu;
    // NOP
label_370e90:
    // 0x370e90: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x370e90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x370e94: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x370e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x370e98: 0x24426940  addiu       $v0, $v0, 0x6940
    ctx->pc = 0x370e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26944));
    // 0x370e9c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x370e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x370ea0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x370ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x370ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x370ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x370ea8: 0x16370009  bne         $s1, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x370EA8u;
    {
        const bool branch_taken_0x370ea8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        ctx->pc = 0x370EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370EA8u;
        // 0x370eac: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ea8) {
            ctx->pc = 0x370ED0u;
            goto label_370ed0;
        }
    }
    ctx->pc = 0x370EB0u;
    // 0x370eb0: 0x8ec90034  lw          $t1, 0x34($s6)
    ctx->pc = 0x370eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x370eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370eb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370ebc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x370ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ec0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x370ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ec4: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x370EC4u;
    SET_GPR_U32(ctx, 31, 0x370ECCu);
    ctx->pc = 0x370EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EC4u;
    // 0x370ec8: 0x3408fff5  ori         $t0, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x370EC4u, 0x370ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370ECCu;
label_370ecc:
    // 0x370ecc: 0x0  nop
    ctx->pc = 0x370eccu;
    // NOP
label_370ed0:
    // 0x370ed0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x370ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x370ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370edc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x370edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ee0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x370ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ee4: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x370ee4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x370ee8: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x370EE8u;
    SET_GPR_U32(ctx, 31, 0x370EF0u);
    ctx->pc = 0x370EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EE8u;
    // 0x370eec: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x370EE8u, 0x370EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EF0u;
label_370ef0:
    // 0x370ef0: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x370ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x370ef4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x370ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x370ef8: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x370ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x370efc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x370efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x370f00: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x370F00u;
    {
        const bool branch_taken_0x370f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F00u;
        // 0x370f04: 0x284a021  addu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f00) {
            ctx->pc = 0x370E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370e90;
        }
    }
    ctx->pc = 0x370F08u;
label_370f08:
    // 0x370f08: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x370f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x370f0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x370f0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x370f10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x370f10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x370f14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x370f14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x370f18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x370f18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370f1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x370f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x370f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x370F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F2Cu;
        // 0x370f30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F34u;
}
