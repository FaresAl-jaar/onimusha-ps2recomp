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

// Function: sub_003F2B90
// Address: 0x3f2b90 - 0x3f2c7c
void sub_003F2B90_0x3f2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2B90_0x3f2b90");
#endif

    switch (ctx->pc) {
        case 0x3f2c44u: goto label_3f2c44;
        default: break;
    }

    ctx->pc = 0x3f2b90u;

    // 0x3f2b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f2b94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f2b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f2b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2b9c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f2ba0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f2ba4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f2ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f2ba8: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3F2BA8u;
    {
        const bool branch_taken_0x3f2ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2BA8u;
        // 0x3f2bac: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ba8) {
            ctx->pc = 0x3F2C70u;
            goto label_3f2c70;
        }
    }
    ctx->pc = 0x3F2BB0u;
    // 0x3f2bb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f2bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f2bb4: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3F2BB4u;
    {
        const bool branch_taken_0x3f2bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2bb4) {
            ctx->pc = 0x3F2C70u;
            goto label_3f2c70;
        }
    }
    ctx->pc = 0x3F2BBCu;
    // 0x3f2bbc: 0x8f858d34  lw          $a1, -0x72CC($gp)
    ctx->pc = 0x3f2bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2bc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f2bc4: 0x80a40390  lb          $a0, 0x390($a1)
    ctx->pc = 0x3f2bc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x3f2bc8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3F2BC8u;
    {
        const bool branch_taken_0x3f2bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2BC8u;
        // 0x3f2bcc: 0x24a60390  addiu       $a2, $a1, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2bc8) {
            ctx->pc = 0x3F2C00u;
            goto label_3f2c00;
        }
    }
    ctx->pc = 0x3F2BD0u;
    // 0x3f2bd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2bd4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F2BD4u;
    {
        const bool branch_taken_0x3f2bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2BD4u;
        // 0x3f2bd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2bd4) {
            ctx->pc = 0x3F2C00u;
            goto label_3f2c00;
        }
    }
    ctx->pc = 0x3F2BDCu;
    // 0x3f2bdc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2BDCu;
    {
        const bool branch_taken_0x3f2bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f2bdc) {
            ctx->pc = 0x3F2C00u;
            goto label_3f2c00;
        }
    }
    ctx->pc = 0x3F2BE4u;
    // 0x3f2be4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2be8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2BE8u;
    {
        const bool branch_taken_0x3f2be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f2be8) {
            ctx->pc = 0x3F2C00u;
            goto label_3f2c00;
        }
    }
    ctx->pc = 0x3F2BF0u;
    // 0x3f2bf0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F2BF0u;
    {
        const bool branch_taken_0x3f2bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2bf0) {
            ctx->pc = 0x3F2C70u;
            goto label_3f2c70;
        }
    }
    ctx->pc = 0x3F2BF8u;
    // 0x3f2bf8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3F2BF8u;
    {
        const bool branch_taken_0x3f2bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2bf8) {
            ctx->pc = 0x3F2C70u;
            goto label_3f2c70;
        }
    }
    ctx->pc = 0x3F2C00u;
label_3f2c00:
    // 0x3f2c00: 0x80a40391  lb          $a0, 0x391($a1)
    ctx->pc = 0x3f2c00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 913)));
    // 0x3f2c04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f2c08: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F2C08u;
    {
        const bool branch_taken_0x3f2c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C08u;
        // 0x3f2c0c: 0x24a70391  addiu       $a3, $a1, 0x391 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 913));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c08) {
            ctx->pc = 0x3F2C68u;
            goto label_3f2c68;
        }
    }
    ctx->pc = 0x3F2C10u;
    // 0x3f2c10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2c14: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2C14u;
    {
        const bool branch_taken_0x3f2c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f2c14) {
            ctx->pc = 0x3F2C38u;
            goto label_3f2c38;
        }
    }
    ctx->pc = 0x3F2C1Cu;
    // 0x3f2c1c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2C1Cu;
    {
        const bool branch_taken_0x3f2c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2c1c) {
            ctx->pc = 0x3F2C30u;
            goto label_3f2c30;
        }
    }
    ctx->pc = 0x3F2C24u;
    // 0x3f2c24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F2C24u;
    {
        const bool branch_taken_0x3f2c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2c24) {
            ctx->pc = 0x3F2C70u;
            goto label_3f2c70;
        }
    }
    ctx->pc = 0x3F2C2Cu;
    // 0x3f2c2c: 0x0  nop
    ctx->pc = 0x3f2c2cu;
    // NOP
label_3f2c30:
    // 0x3f2c30: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f2c34: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f2c34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f2c38:
    // 0x3f2c38: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2c3c: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F2C3Cu;
    SET_GPR_U32(ctx, 31, 0x3F2C44u);
    ctx->pc = 0x3F2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2C3Cu;
    // 0x3f2c40: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F2C3Cu, 0x3F2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2C44u;
label_3f2c44:
    // 0x3f2c44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f2c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f2c48: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F2C48u;
    {
        const bool branch_taken_0x3f2c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2c48) {
            ctx->pc = 0x3F2C70u;
            goto label_3f2c70;
        }
    }
    ctx->pc = 0x3F2C50u;
    // 0x3f2c50: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x3f2c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2c54: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x3f2c54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x3f2c58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f2c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2C5Cu;
    {
        const bool branch_taken_0x3f2c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C5Cu;
        // 0x3f2c60: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c5c) {
            ctx->pc = 0x3F2C70u;
            goto label_3f2c70;
        }
    }
    ctx->pc = 0x3F2C64u;
    // 0x3f2c64: 0x0  nop
    ctx->pc = 0x3f2c64u;
    // NOP
label_3f2c68:
    // 0x3f2c68: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f2c68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2c6c: 0x0  nop
    ctx->pc = 0x3f2c6cu;
    // NOP
label_3f2c70:
    // 0x3f2c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2c74: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C74u;
        // 0x3f2c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2C7Cu;
}
