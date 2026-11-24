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

// Function: sub_003F6B20
// Address: 0x3f6b20 - 0x3f6c1c
void sub_003F6B20_0x3f6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6B20_0x3f6b20");
#endif

    switch (ctx->pc) {
        case 0x3f6b40u: goto label_3f6b40;
        case 0x3f6b4cu: goto label_3f6b4c;
        case 0x3f6b60u: goto label_3f6b60;
        case 0x3f6ba4u: goto label_3f6ba4;
        case 0x3f6c0cu: goto label_3f6c0c;
        default: break;
    }

    ctx->pc = 0x3f6b20u;

    // 0x3f6b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6b24: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3f6b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f6b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f6b2c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3f6b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6b30: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3f6b30u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f6b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6b38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3f6b38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6b3c: 0x27a9001c  addiu       $t1, $sp, 0x1C
    ctx->pc = 0x3f6b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_3f6b40:
    // 0x3f6b40: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x3f6b40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f6b44: 0xc0fda64  jal         func_3F6990
    ctx->pc = 0x3F6B44u;
    SET_GPR_U32(ctx, 31, 0x3F6B4Cu);
    ctx->pc = 0x3F6B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6B44u;
    // 0x3f6b48: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6990u, 0x3F6B44u, 0x3F6B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6B4Cu;
label_3f6b4c:
    // 0x3f6b4c: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x3f6b4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3f6b50: 0x2563c  dsll32      $t2, $v0, 24
    ctx->pc = 0x3f6b50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3f6b54: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x3f6b54u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x3f6b58: 0xc0fda64  jal         func_3F6990
    ctx->pc = 0x3F6B58u;
    SET_GPR_U32(ctx, 31, 0x3F6B60u);
    ctx->pc = 0x3F6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6B58u;
    // 0x3f6b5c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6990u, 0x3F6B58u, 0x3F6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6B60u;
label_3f6b60:
    // 0x3f6b60: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3f6b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3f6b64: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x3f6b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3f6b68: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3f6b68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3f6b6c: 0x1621804  sllv        $v1, $v0, $t3
    ctx->pc = 0x3f6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 11) & 0x1F));
    // 0x3f6b70: 0xa1043  sra         $v0, $t2, 1
    ctx->pc = 0x3f6b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
    // 0x3f6b74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f6b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f6b78: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f6b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f6b7c: 0x1831825  or          $v1, $t4, $v1
    ctx->pc = 0x3f6b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x3f6b80: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3f6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f6b84: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x3f6b84u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f6b88: 0x1621004  sllv        $v0, $v0, $t3
    ctx->pc = 0x3f6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 11) & 0x1F));
    // 0x3f6b8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f6b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f6b90: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x3f6b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3f6b94: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3f6b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3f6b98: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3f6b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f6b9c: 0xc0fda78  jal         func_3F69E0
    ctx->pc = 0x3F6B9Cu;
    SET_GPR_U32(ctx, 31, 0x3F6BA4u);
    ctx->pc = 0x3F6BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6B9Cu;
    // 0x3f6ba0: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F69E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F69E0u, 0x3F6B9Cu, 0x3F6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6BA4u;
label_3f6ba4:
    // 0x3f6ba4: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3f6ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6ba8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3f6ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3f6bac: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x3f6bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3f6bb0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3F6BB0u;
    {
        const bool branch_taken_0x3f6bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BB0u;
        // 0x3f6bb4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bb0) {
            ctx->pc = 0x3F6B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6b40;
        }
    }
    ctx->pc = 0x3F6BB8u;
    // 0x3f6bb8: 0x93a4001c  lbu         $a0, 0x1C($sp)
    ctx->pc = 0x3f6bb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3f6bbc: 0x318200ff  andi        $v0, $t4, 0xFF
    ctx->pc = 0x3f6bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x3f6bc0: 0x93a3001e  lbu         $v1, 0x1E($sp)
    ctx->pc = 0x3f6bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
    // 0x3f6bc4: 0x93a7001d  lbu         $a3, 0x1D($sp)
    ctx->pc = 0x3f6bc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
    // 0x3f6bc8: 0x93a5001f  lbu         $a1, 0x1F($sp)
    ctx->pc = 0x3f6bc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x3f6bcc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3f6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3f6bd0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3f6bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3f6bd4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3f6bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3f6bd8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6BD8u;
    {
        const bool branch_taken_0x3f6bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BD8u;
        // 0x3f6bdc: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bd8) {
            ctx->pc = 0x3F6BE8u;
            goto label_3f6be8;
        }
    }
    ctx->pc = 0x3F6BE0u;
    // 0x3f6be0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F6BE0u;
    {
        const bool branch_taken_0x3f6be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BE0u;
        // 0x3f6be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6be0) {
            ctx->pc = 0x3F6C10u;
            goto label_3f6c10;
        }
    }
    ctx->pc = 0x3F6BE8u;
label_3f6be8:
    // 0x3f6be8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3f6be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3f6bec: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3f6becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3f6bf0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6BF0u;
    {
        const bool branch_taken_0x3f6bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BF0u;
        // 0x3f6bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bf0) {
            ctx->pc = 0x3F6C00u;
            goto label_3f6c00;
        }
    }
    ctx->pc = 0x3F6BF8u;
    // 0x3f6bf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F6BF8u;
    {
        const bool branch_taken_0x3f6bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6bf8) {
            ctx->pc = 0x3F6C10u;
            goto label_3f6c10;
        }
    }
    ctx->pc = 0x3F6C00u;
label_3f6c00:
    // 0x3f6c00: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3f6c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c04: 0xc0fda8c  jal         func_3F6A30
    ctx->pc = 0x3F6C04u;
    SET_GPR_U32(ctx, 31, 0x3F6C0Cu);
    ctx->pc = 0x3F6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C04u;
    // 0x3f6c08: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6A30u, 0x3F6C04u, 0x3F6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C0Cu;
label_3f6c0c:
    // 0x3f6c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f6c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6c10:
    // 0x3f6c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6c14: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C14u;
        // 0x3f6c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6C1Cu;
}
