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

// Function: sub_002B2E40
// Address: 0x2b2e40 - 0x2b2f44
void sub_002B2E40_0x2b2e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2E40_0x2b2e40");
#endif

    switch (ctx->pc) {
        case 0x2b2e60u: goto label_2b2e60;
        case 0x2b2e90u: goto label_2b2e90;
        case 0x2b2ea8u: goto label_2b2ea8;
        case 0x2b2ed0u: goto label_2b2ed0;
        default: break;
    }

    ctx->pc = 0x2b2e40u;

    // 0x2b2e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b2e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b2e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2e4c: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x2b2e4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b2e50: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2E50u;
    {
        const bool branch_taken_0x2b2e50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E50u;
        // 0x2b2e54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e50) {
            ctx->pc = 0x2B2E68u;
            goto label_2b2e68;
        }
    }
    ctx->pc = 0x2B2E58u;
    // 0x2b2e58: 0xc0acb6c  jal         func_2B2DB0
    ctx->pc = 0x2B2E58u;
    SET_GPR_U32(ctx, 31, 0x2B2E60u);
    ctx->pc = 0x2B2DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2DB0u, 0x2B2E58u, 0x2B2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E60u;
label_2b2e60:
    // 0x2b2e60: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2B2E60u;
    {
        const bool branch_taken_0x2b2e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E60u;
        // 0x2b2e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e60) {
            ctx->pc = 0x2B2F30u;
            goto label_2b2f30;
        }
    }
    ctx->pc = 0x2B2E68u;
label_2b2e68:
    // 0x2b2e68: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2b2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2b2e6c: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x2b2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
    // 0x2b2e70: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2e74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2b2e74u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4F20u));
    // 0x2b2e78: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2b2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b2e7c: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2e80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e88: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B2E88u;
    SET_GPR_U32(ctx, 31, 0x2B2E90u);
    ctx->pc = 0x2B2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E88u;
    // 0x2b2e8c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B2E88u, 0x2B2E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E90u;
label_2b2e90:
    // 0x2b2e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e94: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B2E94u;
    {
        const bool branch_taken_0x2b2e94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E94u;
        // 0x2b2e98: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e94) {
            ctx->pc = 0x2B2ED0u;
            goto label_2b2ed0;
        }
    }
    ctx->pc = 0x2B2E9Cu;
    // 0x2b2e9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2ea0: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B2EA0u;
    SET_GPR_U32(ctx, 31, 0x2B2EA8u);
    ctx->pc = 0x2B2EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EA0u;
    // 0x2b2ea4: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B2EA0u, 0x2B2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EA8u;
label_2b2ea8:
    // 0x2b2ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2eac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2EACu;
    {
        const bool branch_taken_0x2b2eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2eac) {
            ctx->pc = 0x2B2EC0u;
            goto label_2b2ec0;
        }
    }
    ctx->pc = 0x2B2EB4u;
    // 0x2b2eb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B2EB4u;
    {
        const bool branch_taken_0x2b2eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EB4u;
        // 0x2b2eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2eb4) {
            ctx->pc = 0x2B2F30u;
            goto label_2b2f30;
        }
    }
    ctx->pc = 0x2B2EBCu;
    // 0x2b2ebc: 0x0  nop
    ctx->pc = 0x2b2ebcu;
    // NOP
label_2b2ec0:
    // 0x2b2ec0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2ec4: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2ec8: 0xc0ac958  jal         func_2B2560
    ctx->pc = 0x2B2EC8u;
    SET_GPR_U32(ctx, 31, 0x2B2ED0u);
    ctx->pc = 0x2B2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EC8u;
    // 0x2b2ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2560u, 0x2B2EC8u, 0x2B2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2ED0u;
label_2b2ed0:
    // 0x2b2ed0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b2ed4: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x2b2ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2ed8: 0x111e00  sll         $v1, $s1, 24
    ctx->pc = 0x2b2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x2b2edc: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x2b2edcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b2ee0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2b2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2b2ee4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2b2ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2b2ee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b2ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2eec: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2b2eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b2ef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b2ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ef4: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x2b2ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x2b2ef8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2b2ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2efc: 0xa204002d  sb          $a0, 0x2D($s0)
    ctx->pc = 0x2b2efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2f00: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2f04: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2b2f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2b2f08: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x2b2f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x2b2f0c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2b2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b2f10: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2b2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2b2f14: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x2b2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x2b2f18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2b2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b2f1c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2b2f20: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x2b2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x2b2f24: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2b2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b2f28: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b2f2c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x2b2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_2b2f30:
    // 0x2b2f30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b2f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F3Cu;
        // 0x2b2f40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F44u;
}
