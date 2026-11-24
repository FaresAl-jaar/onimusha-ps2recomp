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

// Function: sub_003F1B60
// Address: 0x3f1b60 - 0x3f1c3c
void sub_003F1B60_0x3f1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1B60_0x3f1b60");
#endif

    switch (ctx->pc) {
        case 0x3f1c04u: goto label_3f1c04;
        default: break;
    }

    ctx->pc = 0x3f1b60u;

    // 0x3f1b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f1b64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f1b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f1b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f1b6c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f1b70: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f1b74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f1b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f1b78: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F1B78u;
    {
        const bool branch_taken_0x3f1b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B78u;
        // 0x3f1b7c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b78) {
            ctx->pc = 0x3F1C30u;
            goto label_3f1c30;
        }
    }
    ctx->pc = 0x3F1B80u;
    // 0x3f1b80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f1b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f1b84: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F1B84u;
    {
        const bool branch_taken_0x3f1b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1b84) {
            ctx->pc = 0x3F1C30u;
            goto label_3f1c30;
        }
    }
    ctx->pc = 0x3F1B8Cu;
    // 0x3f1b8c: 0x8f858d2c  lw          $a1, -0x72D4($gp)
    ctx->pc = 0x3f1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1b90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f1b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1b94: 0x80a401d0  lb          $a0, 0x1D0($a1)
    ctx->pc = 0x3f1b94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x3f1b98: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F1B98u;
    {
        const bool branch_taken_0x3f1b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B98u;
        // 0x3f1b9c: 0x24a601d0  addiu       $a2, $a1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1b98) {
            ctx->pc = 0x3F1BC0u;
            goto label_3f1bc0;
        }
    }
    ctx->pc = 0x3F1BA0u;
    // 0x3f1ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1ba4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F1BA4u;
    {
        const bool branch_taken_0x3f1ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f1ba4) {
            ctx->pc = 0x3F1BC0u;
            goto label_3f1bc0;
        }
    }
    ctx->pc = 0x3F1BACu;
    // 0x3f1bac: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F1BACu;
    {
        const bool branch_taken_0x3f1bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1bac) {
            ctx->pc = 0x3F1C30u;
            goto label_3f1c30;
        }
    }
    ctx->pc = 0x3F1BB4u;
    // 0x3f1bb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3F1BB4u;
    {
        const bool branch_taken_0x3f1bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1bb4) {
            ctx->pc = 0x3F1C30u;
            goto label_3f1c30;
        }
    }
    ctx->pc = 0x3F1BBCu;
    // 0x3f1bbc: 0x0  nop
    ctx->pc = 0x3f1bbcu;
    // NOP
label_3f1bc0:
    // 0x3f1bc0: 0x80a401d1  lb          $a0, 0x1D1($a1)
    ctx->pc = 0x3f1bc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 465)));
    // 0x3f1bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1bc8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F1BC8u;
    {
        const bool branch_taken_0x3f1bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1BC8u;
        // 0x3f1bcc: 0x24a701d1  addiu       $a3, $a1, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1bc8) {
            ctx->pc = 0x3F1C28u;
            goto label_3f1c28;
        }
    }
    ctx->pc = 0x3F1BD0u;
    // 0x3f1bd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1bd4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1BD4u;
    {
        const bool branch_taken_0x3f1bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f1bd4) {
            ctx->pc = 0x3F1BF8u;
            goto label_3f1bf8;
        }
    }
    ctx->pc = 0x3F1BDCu;
    // 0x3f1bdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1BDCu;
    {
        const bool branch_taken_0x3f1bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1bdc) {
            ctx->pc = 0x3F1BF0u;
            goto label_3f1bf0;
        }
    }
    ctx->pc = 0x3F1BE4u;
    // 0x3f1be4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F1BE4u;
    {
        const bool branch_taken_0x3f1be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1be4) {
            ctx->pc = 0x3F1C30u;
            goto label_3f1c30;
        }
    }
    ctx->pc = 0x3F1BECu;
    // 0x3f1bec: 0x0  nop
    ctx->pc = 0x3f1becu;
    // NOP
label_3f1bf0:
    // 0x3f1bf0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f1bf4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f1bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f1bf8:
    // 0x3f1bf8: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1bfc: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F1BFCu;
    SET_GPR_U32(ctx, 31, 0x3F1C04u);
    ctx->pc = 0x3F1C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1BFCu;
    // 0x3f1c00: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F1BFCu, 0x3F1C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1C04u;
label_3f1c04:
    // 0x3f1c04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f1c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f1c08: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F1C08u;
    {
        const bool branch_taken_0x3f1c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1c08) {
            ctx->pc = 0x3F1C30u;
            goto label_3f1c30;
        }
    }
    ctx->pc = 0x3F1C10u;
    // 0x3f1c10: 0x8f848d2c  lw          $a0, -0x72D4($gp)
    ctx->pc = 0x3f1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1c14: 0x808301d1  lb          $v1, 0x1D1($a0)
    ctx->pc = 0x3f1c14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 465)));
    // 0x3f1c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f1c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f1c1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1C1Cu;
    {
        const bool branch_taken_0x3f1c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C1Cu;
        // 0x3f1c20: 0xa08301d1  sb          $v1, 0x1D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 465), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1c1c) {
            ctx->pc = 0x3F1C30u;
            goto label_3f1c30;
        }
    }
    ctx->pc = 0x3F1C24u;
    // 0x3f1c24: 0x0  nop
    ctx->pc = 0x3f1c24u;
    // NOP
label_3f1c28:
    // 0x3f1c28: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f1c28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f1c2c: 0x0  nop
    ctx->pc = 0x3f1c2cu;
    // NOP
label_3f1c30:
    // 0x3f1c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1c34: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C34u;
        // 0x3f1c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1C3Cu;
}
