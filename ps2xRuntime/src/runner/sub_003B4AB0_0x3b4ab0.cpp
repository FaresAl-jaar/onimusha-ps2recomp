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

// Function: sub_003B4AB0
// Address: 0x3b4ab0 - 0x3b4bbc
void sub_003B4AB0_0x3b4ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4AB0_0x3b4ab0");
#endif

    switch (ctx->pc) {
        case 0x3b4ac0u: goto label_3b4ac0;
        case 0x3b4ac8u: goto label_3b4ac8;
        case 0x3b4b14u: goto label_3b4b14;
        case 0x3b4b30u: goto label_3b4b30;
        case 0x3b4b50u: goto label_3b4b50;
        default: break;
    }

    ctx->pc = 0x3b4ab0u;

    // 0x3b4ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b4ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4ab8: 0xc0d9018  jal         func_364060
    ctx->pc = 0x3B4AB8u;
    SET_GPR_U32(ctx, 31, 0x3B4AC0u);
    ctx->pc = 0x364060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364060u, 0x3B4AB8u, 0x3B4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4AC0u;
label_3b4ac0:
    // 0x3b4ac0: 0xc09c450  jal         func_271140
    ctx->pc = 0x3B4AC0u;
    SET_GPR_U32(ctx, 31, 0x3B4AC8u);
    ctx->pc = 0x3B4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4AC0u;
    // 0x3b4ac4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271140u, 0x3B4AC0u, 0x3B4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4AC8u;
label_3b4ac8:
    // 0x3b4ac8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4AC8u;
    {
        const bool branch_taken_0x3b4ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4ac8) {
            ctx->pc = 0x3B4AD8u;
            goto label_3b4ad8;
        }
    }
    ctx->pc = 0x3B4AD0u;
    // 0x3b4ad0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3B4AD0u;
    {
        const bool branch_taken_0x3b4ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AD0u;
        // 0x3b4ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ad0) {
            ctx->pc = 0x3B4BB0u;
            goto label_3b4bb0;
        }
    }
    ctx->pc = 0x3B4AD8u;
label_3b4ad8:
    // 0x3b4ad8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4adc: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x3b4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3b4ae0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3b4ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3b4ae4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4AE4u;
    {
        const bool branch_taken_0x3b4ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AE4u;
        // 0x3b4ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ae4) {
            ctx->pc = 0x3B4AF8u;
            goto label_3b4af8;
        }
    }
    ctx->pc = 0x3B4AECu;
    // 0x3b4aec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3B4AECu;
    {
        const bool branch_taken_0x3b4aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4aec) {
            ctx->pc = 0x3B4BB0u;
            goto label_3b4bb0;
        }
    }
    ctx->pc = 0x3B4AF4u;
    // 0x3b4af4: 0x0  nop
    ctx->pc = 0x3b4af4u;
    // NOP
label_3b4af8:
    // 0x3b4af8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3b4af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3b4afc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3b4afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3b4b00: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3b4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b4b04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b4b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b4b0c: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x3B4B0Cu;
    SET_GPR_U32(ctx, 31, 0x3B4B14u);
    ctx->pc = 0x3B4B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B0Cu;
    // 0x3b4b10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x3B4B0Cu, 0x3B4B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B14u;
label_3b4b14:
    // 0x3b4b14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b4b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b4b18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4B18u;
    {
        const bool branch_taken_0x3b4b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b18) {
            ctx->pc = 0x3B4B28u;
            goto label_3b4b28;
        }
    }
    ctx->pc = 0x3B4B20u;
    // 0x3b4b20: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B4B20u;
    {
        const bool branch_taken_0x3b4b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B20u;
        // 0x3b4b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b20) {
            ctx->pc = 0x3B4BB0u;
            goto label_3b4bb0;
        }
    }
    ctx->pc = 0x3B4B28u;
label_3b4b28:
    // 0x3b4b28: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x3B4B28u;
    SET_GPR_U32(ctx, 31, 0x3B4B30u);
    ctx->pc = 0x3B4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B28u;
    // 0x3b4b2c: 0x8f848060  lw          $a0, -0x7FA0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x3B4B28u, 0x3B4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B30u;
label_3b4b30:
    // 0x3b4b30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b4b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b4b34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4B34u;
    {
        const bool branch_taken_0x3b4b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b34) {
            ctx->pc = 0x3B4B48u;
            goto label_3b4b48;
        }
    }
    ctx->pc = 0x3B4B3Cu;
    // 0x3b4b3c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3B4B3Cu;
    {
        const bool branch_taken_0x3b4b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B3Cu;
        // 0x3b4b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b3c) {
            ctx->pc = 0x3B4BB0u;
            goto label_3b4bb0;
        }
    }
    ctx->pc = 0x3B4B44u;
    // 0x3b4b44: 0x0  nop
    ctx->pc = 0x3b4b44u;
    // NOP
label_3b4b48:
    // 0x3b4b48: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x3B4B48u;
    SET_GPR_U32(ctx, 31, 0x3B4B50u);
    ctx->pc = 0x3B4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B48u;
    // 0x3b4b4c: 0x8f848064  lw          $a0, -0x7F9C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x3B4B48u, 0x3B4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B50u;
label_3b4b50:
    // 0x3b4b50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b4b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b4b54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4B54u;
    {
        const bool branch_taken_0x3b4b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b54) {
            ctx->pc = 0x3B4B68u;
            goto label_3b4b68;
        }
    }
    ctx->pc = 0x3B4B5Cu;
    // 0x3b4b5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B4B5Cu;
    {
        const bool branch_taken_0x3b4b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B5Cu;
        // 0x3b4b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b5c) {
            ctx->pc = 0x3B4BB0u;
            goto label_3b4bb0;
        }
    }
    ctx->pc = 0x3B4B64u;
    // 0x3b4b64: 0x0  nop
    ctx->pc = 0x3b4b64u;
    // NOP
label_3b4b68:
    // 0x3b4b68: 0x8f838064  lw          $v1, -0x7F9C($gp)
    ctx->pc = 0x3b4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x3b4b6c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B4B6Cu;
    {
        const bool branch_taken_0x3b4b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b6c) {
            ctx->pc = 0x3B4BA8u;
            goto label_3b4ba8;
        }
    }
    ctx->pc = 0x3B4B74u;
    // 0x3b4b74: 0x8c6429c0  lw          $a0, 0x29C0($v1)
    ctx->pc = 0x3b4b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10688)));
    // 0x3b4b78: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3b4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3b4b7c: 0x8c6329c8  lw          $v1, 0x29C8($v1)
    ctx->pc = 0x3b4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10696)));
    // 0x3b4b80: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x3b4b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3b4b84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b4b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b4b88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b4b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b4b8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3b4b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3b4b90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b4b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b4b94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4B94u;
    {
        const bool branch_taken_0x3b4b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B94u;
        // 0x3b4b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b94) {
            ctx->pc = 0x3B4BA8u;
            goto label_3b4ba8;
        }
    }
    ctx->pc = 0x3B4B9Cu;
    // 0x3b4b9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4B9Cu;
    {
        const bool branch_taken_0x3b4b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b9c) {
            ctx->pc = 0x3B4BB0u;
            goto label_3b4bb0;
        }
    }
    ctx->pc = 0x3B4BA4u;
    // 0x3b4ba4: 0x0  nop
    ctx->pc = 0x3b4ba4u;
    // NOP
label_3b4ba8:
    // 0x3b4ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4bac: 0x0  nop
    ctx->pc = 0x3b4bacu;
    // NOP
label_3b4bb0:
    // 0x3b4bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BB4u;
        // 0x3b4bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4BBCu;
}
