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

// Function: sub_0024BC48
// Address: 0x24bc48 - 0x24bcdc
void sub_0024BC48_0x24bc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BC48_0x24bc48");
#endif

    switch (ctx->pc) {
        case 0x24bc60u: goto label_24bc60;
        case 0x24bc80u: goto label_24bc80;
        case 0x24bcbcu: goto label_24bcbc;
        default: break;
    }

    ctx->pc = 0x24bc48u;

    // 0x24bc48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bc4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BC4Cu;
    {
        const bool branch_taken_0x24bc4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC4Cu;
        // 0x24bc50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc4c) {
            ctx->pc = 0x24BC68u;
            goto label_24bc68;
        }
    }
    ctx->pc = 0x24BC54u;
    // 0x24bc54: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24bc58: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BC58u;
    SET_GPR_U32(ctx, 31, 0x24BC60u);
    ctx->pc = 0x24BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC58u;
    // 0x24bc5c: 0x2484d9d0  addiu       $a0, $a0, -0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BC58u, 0x24BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC60u;
label_24bc60:
    // 0x24bc60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24BC60u;
    {
        const bool branch_taken_0x24bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC60u;
        // 0x24bc64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc60) {
            ctx->pc = 0x24BCD0u;
            goto label_24bcd0;
        }
    }
    ctx->pc = 0x24BC68u;
label_24bc68:
    // 0x24bc68: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x24bc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x24bc6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24bc70: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x24BC70u;
    {
        const bool branch_taken_0x24bc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x24BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC70u;
        // 0x24bc74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc70) {
            ctx->pc = 0x24BCA4u;
            goto label_24bca4;
        }
    }
    ctx->pc = 0x24BC78u;
    // 0x24bc78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24bc7c: 0x0  nop
    ctx->pc = 0x24bc7cu;
    // NOP
label_24bc80:
    // 0x24bc80: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x24bc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24bc84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BC84u;
    {
        const bool branch_taken_0x24bc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC84u;
        // 0x24bc88: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc84) {
            ctx->pc = 0x24BCA4u;
            goto label_24bca4;
        }
    }
    ctx->pc = 0x24BC8Cu;
    // 0x24bc8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24bc90: 0x0  nop
    ctx->pc = 0x24bc90u;
    // NOP
    // 0x24bc94: 0x0  nop
    ctx->pc = 0x24bc94u;
    // NOP
    // 0x24bc98: 0x0  nop
    ctx->pc = 0x24bc98u;
    // NOP
    // 0x24bc9c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24BC9Cu;
    {
        const bool branch_taken_0x24bc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24bc9c) {
            ctx->pc = 0x24BCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BC9Cu;
            // 0x24bca0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bc80;
        }
    }
    ctx->pc = 0x24BCA4u;
label_24bca4:
    // 0x24bca4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24bca8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BCA8u;
    {
        const bool branch_taken_0x24bca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bca8) {
            ctx->pc = 0x24BCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BCA8u;
            // 0x24bcac: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BCC8u;
            goto label_24bcc8;
        }
    }
    ctx->pc = 0x24BCB0u;
    // 0x24bcb0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24bcb4: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BCB4u;
    SET_GPR_U32(ctx, 31, 0x24BCBCu);
    ctx->pc = 0x24BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCB4u;
    // 0x24bcb8: 0x2484da00  addiu       $a0, $a0, -0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BCB4u, 0x24BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCBCu;
label_24bcbc:
    // 0x24bcbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24BCBCu;
    {
        const bool branch_taken_0x24bcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCBCu;
        // 0x24bcc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcbc) {
            ctx->pc = 0x24BCD0u;
            goto label_24bcd0;
        }
    }
    ctx->pc = 0x24BCC4u;
    // 0x24bcc4: 0x0  nop
    ctx->pc = 0x24bcc4u;
    // NOP
label_24bcc8:
    // 0x24bcc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24bccc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x24bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_24bcd0:
    // 0x24bcd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x24BCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCD4u;
        // 0x24bcd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BCDCu;
}
