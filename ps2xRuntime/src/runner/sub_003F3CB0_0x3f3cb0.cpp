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

// Function: sub_003F3CB0
// Address: 0x3f3cb0 - 0x3f3d8c
void sub_003F3CB0_0x3f3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3CB0_0x3f3cb0");
#endif

    switch (ctx->pc) {
        case 0x3f3d54u: goto label_3f3d54;
        default: break;
    }

    ctx->pc = 0x3f3cb0u;

    // 0x3f3cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f3cb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f3cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f3cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f3cbc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f3cc0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f3cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f3cc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f3cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f3cc8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F3CC8u;
    {
        const bool branch_taken_0x3f3cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3CC8u;
        // 0x3f3ccc: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3cc8) {
            ctx->pc = 0x3F3D80u;
            goto label_3f3d80;
        }
    }
    ctx->pc = 0x3F3CD0u;
    // 0x3f3cd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f3cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f3cd4: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F3CD4u;
    {
        const bool branch_taken_0x3f3cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3cd4) {
            ctx->pc = 0x3F3D80u;
            goto label_3f3d80;
        }
    }
    ctx->pc = 0x3F3CDCu;
    // 0x3f3cdc: 0x8f858d40  lw          $a1, -0x72C0($gp)
    ctx->pc = 0x3f3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3ce0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f3ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3ce4: 0x80a401d0  lb          $a0, 0x1D0($a1)
    ctx->pc = 0x3f3ce4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x3f3ce8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F3CE8u;
    {
        const bool branch_taken_0x3f3ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3CE8u;
        // 0x3f3cec: 0x24a601d0  addiu       $a2, $a1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ce8) {
            ctx->pc = 0x3F3D10u;
            goto label_3f3d10;
        }
    }
    ctx->pc = 0x3F3CF0u;
    // 0x3f3cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3cf4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3CF4u;
    {
        const bool branch_taken_0x3f3cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3cf4) {
            ctx->pc = 0x3F3D10u;
            goto label_3f3d10;
        }
    }
    ctx->pc = 0x3F3CFCu;
    // 0x3f3cfc: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F3CFCu;
    {
        const bool branch_taken_0x3f3cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3cfc) {
            ctx->pc = 0x3F3D80u;
            goto label_3f3d80;
        }
    }
    ctx->pc = 0x3F3D04u;
    // 0x3f3d04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3F3D04u;
    {
        const bool branch_taken_0x3f3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d04) {
            ctx->pc = 0x3F3D80u;
            goto label_3f3d80;
        }
    }
    ctx->pc = 0x3F3D0Cu;
    // 0x3f3d0c: 0x0  nop
    ctx->pc = 0x3f3d0cu;
    // NOP
label_3f3d10:
    // 0x3f3d10: 0x80a401d1  lb          $a0, 0x1D1($a1)
    ctx->pc = 0x3f3d10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 465)));
    // 0x3f3d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3d18: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F3D18u;
    {
        const bool branch_taken_0x3f3d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D18u;
        // 0x3f3d1c: 0x24a701d1  addiu       $a3, $a1, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3d18) {
            ctx->pc = 0x3F3D78u;
            goto label_3f3d78;
        }
    }
    ctx->pc = 0x3F3D20u;
    // 0x3f3d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3d24: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3D24u;
    {
        const bool branch_taken_0x3f3d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3d24) {
            ctx->pc = 0x3F3D48u;
            goto label_3f3d48;
        }
    }
    ctx->pc = 0x3F3D2Cu;
    // 0x3f3d2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F3D2Cu;
    {
        const bool branch_taken_0x3f3d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d2c) {
            ctx->pc = 0x3F3D40u;
            goto label_3f3d40;
        }
    }
    ctx->pc = 0x3F3D34u;
    // 0x3f3d34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F3D34u;
    {
        const bool branch_taken_0x3f3d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d34) {
            ctx->pc = 0x3F3D80u;
            goto label_3f3d80;
        }
    }
    ctx->pc = 0x3F3D3Cu;
    // 0x3f3d3c: 0x0  nop
    ctx->pc = 0x3f3d3cu;
    // NOP
label_3f3d40:
    // 0x3f3d40: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f3d44: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f3d44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f3d48:
    // 0x3f3d48: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3d4c: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F3D4Cu;
    SET_GPR_U32(ctx, 31, 0x3F3D54u);
    ctx->pc = 0x3F3D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3D4Cu;
    // 0x3f3d50: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F3D4Cu, 0x3F3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3D54u;
label_3f3d54:
    // 0x3f3d54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f3d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f3d58: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F3D58u;
    {
        const bool branch_taken_0x3f3d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3d58) {
            ctx->pc = 0x3F3D80u;
            goto label_3f3d80;
        }
    }
    ctx->pc = 0x3F3D60u;
    // 0x3f3d60: 0x8f848d40  lw          $a0, -0x72C0($gp)
    ctx->pc = 0x3f3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3d64: 0x808301d1  lb          $v1, 0x1D1($a0)
    ctx->pc = 0x3f3d64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 465)));
    // 0x3f3d68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f3d6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F3D6Cu;
    {
        const bool branch_taken_0x3f3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D6Cu;
        // 0x3f3d70: 0xa08301d1  sb          $v1, 0x1D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 465), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3d6c) {
            ctx->pc = 0x3F3D80u;
            goto label_3f3d80;
        }
    }
    ctx->pc = 0x3F3D74u;
    // 0x3f3d74: 0x0  nop
    ctx->pc = 0x3f3d74u;
    // NOP
label_3f3d78:
    // 0x3f3d78: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f3d78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f3d7c: 0x0  nop
    ctx->pc = 0x3f3d7cu;
    // NOP
label_3f3d80:
    // 0x3f3d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3d84: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3D84u;
        // 0x3f3d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3D8Cu;
}
