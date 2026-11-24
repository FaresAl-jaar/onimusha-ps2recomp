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

// Function: sub_002B2F50
// Address: 0x2b2f50 - 0x2b3054
void sub_002B2F50_0x2b2f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2F50_0x2b2f50");
#endif

    switch (ctx->pc) {
        case 0x2b2f70u: goto label_2b2f70;
        case 0x2b2fa0u: goto label_2b2fa0;
        case 0x2b2fb8u: goto label_2b2fb8;
        case 0x2b2fe0u: goto label_2b2fe0;
        default: break;
    }

    ctx->pc = 0x2b2f50u;

    // 0x2b2f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b2f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b2f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2f5c: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x2b2f5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b2f60: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2F60u;
    {
        const bool branch_taken_0x2b2f60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F60u;
        // 0x2b2f64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f60) {
            ctx->pc = 0x2B2F78u;
            goto label_2b2f78;
        }
    }
    ctx->pc = 0x2B2F68u;
    // 0x2b2f68: 0xc0acb6c  jal         func_2B2DB0
    ctx->pc = 0x2B2F68u;
    SET_GPR_U32(ctx, 31, 0x2B2F70u);
    ctx->pc = 0x2B2DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2DB0u, 0x2B2F68u, 0x2B2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F70u;
label_2b2f70:
    // 0x2b2f70: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2B2F70u;
    {
        const bool branch_taken_0x2b2f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F70u;
        // 0x2b2f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f70) {
            ctx->pc = 0x2B3040u;
            goto label_2b3040;
        }
    }
    ctx->pc = 0x2B2F78u;
label_2b2f78:
    // 0x2b2f78: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2b2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2b2f7c: 0x24424f30  addiu       $v0, $v0, 0x4F30
    ctx->pc = 0x2b2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20272));
    // 0x2b2f80: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2f84: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2b2f84u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4F30u));
    // 0x2b2f88: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2b2f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b2f8c: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2f90: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2f94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f98: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B2F98u;
    SET_GPR_U32(ctx, 31, 0x2B2FA0u);
    ctx->pc = 0x2B2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2F98u;
    // 0x2b2f9c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B2F98u, 0x2B2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FA0u;
label_2b2fa0:
    // 0x2b2fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2fa4: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B2FA4u;
    {
        const bool branch_taken_0x2b2fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA4u;
        // 0x2b2fa8: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fa4) {
            ctx->pc = 0x2B2FE0u;
            goto label_2b2fe0;
        }
    }
    ctx->pc = 0x2B2FACu;
    // 0x2b2fac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2fb0: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B2FB0u;
    SET_GPR_U32(ctx, 31, 0x2B2FB8u);
    ctx->pc = 0x2B2FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FB0u;
    // 0x2b2fb4: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B2FB0u, 0x2B2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FB8u;
label_2b2fb8:
    // 0x2b2fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2fbc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2FBCu;
    {
        const bool branch_taken_0x2b2fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fbc) {
            ctx->pc = 0x2B2FD0u;
            goto label_2b2fd0;
        }
    }
    ctx->pc = 0x2B2FC4u;
    // 0x2b2fc4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B2FC4u;
    {
        const bool branch_taken_0x2b2fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FC4u;
        // 0x2b2fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fc4) {
            ctx->pc = 0x2B3040u;
            goto label_2b3040;
        }
    }
    ctx->pc = 0x2B2FCCu;
    // 0x2b2fcc: 0x0  nop
    ctx->pc = 0x2b2fccu;
    // NOP
label_2b2fd0:
    // 0x2b2fd0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2fd4: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2fd8: 0xc0ac958  jal         func_2B2560
    ctx->pc = 0x2B2FD8u;
    SET_GPR_U32(ctx, 31, 0x2B2FE0u);
    ctx->pc = 0x2B2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FD8u;
    // 0x2b2fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2560u, 0x2B2FD8u, 0x2B2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FE0u;
label_2b2fe0:
    // 0x2b2fe0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b2fe4: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x2b2fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2fe8: 0x111e00  sll         $v1, $s1, 24
    ctx->pc = 0x2b2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x2b2fec: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x2b2fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b2ff0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2b2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2b2ff4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2b2ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2b2ff8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2ffc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2b2ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b3000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b3000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3004: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x2b3004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x2b3008: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2b3008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b300c: 0xa204002d  sb          $a0, 0x2D($s0)
    ctx->pc = 0x2b300cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3010: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b3010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3014: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2b3014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2b3018: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x2b3018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x2b301c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2b301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b3020: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2b3020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2b3024: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x2b3024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x2b3028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2b3028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b302c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2b3030: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x2b3030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x2b3034: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2b3034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b3038: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b3038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b303c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x2b303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_2b3040:
    // 0x2b3040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b3040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b3044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b3048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b304c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B304Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B304Cu;
        // 0x2b3050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B304Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3054u;
}
