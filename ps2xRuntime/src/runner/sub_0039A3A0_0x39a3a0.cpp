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

// Function: sub_0039A3A0
// Address: 0x39a3a0 - 0x39a3f0
void sub_0039A3A0_0x39a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A3A0_0x39a3a0");
#endif

    ctx->pc = 0x39a3a0u;

    // 0x39a3a0: 0x94832b20  lhu         $v1, 0x2B20($a0)
    ctx->pc = 0x39a3a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x39a3a4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x39a3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x39a3a8: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x39A3A8u;
    {
        const bool branch_taken_0x39a3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x39A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3A8u;
        // 0x39a3ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3a8) {
            ctx->pc = 0x39A3E8u;
            goto label_39a3e8;
        }
    }
    ctx->pc = 0x39A3B0u;
    // 0x39a3b0: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x39a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x39a3b4: 0xa0852b22  sb          $a1, 0x2B22($a0)
    ctx->pc = 0x39a3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11042), (uint8_t)GPR_U32(ctx, 5));
    // 0x39a3b8: 0xa0852b23  sb          $a1, 0x2B23($a0)
    ctx->pc = 0x39a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11043), (uint8_t)GPR_U32(ctx, 5));
    // 0x39a3bc: 0x94852b20  lhu         $a1, 0x2B20($a0)
    ctx->pc = 0x39a3bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x39a3c0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39A3C0u;
    {
        const bool branch_taken_0x39a3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3C0u;
        // 0x39a3c4: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3c0) {
            ctx->pc = 0x39A3E8u;
            goto label_39a3e8;
        }
    }
    ctx->pc = 0x39A3C8u;
    // 0x39a3c8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A3C8u;
    {
        const bool branch_taken_0x39a3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a3c8) {
            ctx->pc = 0x39A3E8u;
            goto label_39a3e8;
        }
    }
    ctx->pc = 0x39A3D0u;
    // 0x39a3d0: 0x90832b49  lbu         $v1, 0x2B49($a0)
    ctx->pc = 0x39a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11081)));
    // 0x39a3d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A3D4u;
    {
        const bool branch_taken_0x39a3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a3d4) {
            ctx->pc = 0x39A3E8u;
            goto label_39a3e8;
        }
    }
    ctx->pc = 0x39A3DCu;
    // 0x39a3dc: 0xa4862b20  sh          $a2, 0x2B20($a0)
    ctx->pc = 0x39a3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11040), (uint16_t)GPR_U32(ctx, 6));
    // 0x39a3e0: 0xa0800821  sb          $zero, 0x821($a0)
    ctx->pc = 0x39a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 0));
    // 0x39a3e4: 0x0  nop
    ctx->pc = 0x39a3e4u;
    // NOP
label_39a3e8:
    // 0x39a3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x39A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A3F0u;
}
