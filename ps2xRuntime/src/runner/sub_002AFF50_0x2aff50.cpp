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

// Function: sub_002AFF50
// Address: 0x2aff50 - 0x2affdc
void sub_002AFF50_0x2aff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFF50_0x2aff50");
#endif

    switch (ctx->pc) {
        case 0x2aff6cu: goto label_2aff6c;
        case 0x2aff90u: goto label_2aff90;
        case 0x2aff98u: goto label_2aff98;
        case 0x2affb8u: goto label_2affb8;
        default: break;
    }

    ctx->pc = 0x2aff50u;

    // 0x2aff50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aff54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aff58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aff5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aff5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff60: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aff60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aff64: 0xc0ac01c  jal         func_2B0070
    ctx->pc = 0x2AFF64u;
    SET_GPR_U32(ctx, 31, 0x2AFF6Cu);
    ctx->pc = 0x2AFF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF64u;
    // 0x2aff68: 0x24845a10  addiu       $a0, $a0, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0070u, 0x2AFF64u, 0x2AFF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF6Cu;
label_2aff6c:
    // 0x2aff6c: 0x8f838984  lw          $v1, -0x767C($gp)
    ctx->pc = 0x2aff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
    // 0x2aff70: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x2aff70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x2aff74: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2aff74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2aff78: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x2aff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x2aff7c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2aff7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2aff80: 0x24845a10  addiu       $a0, $a0, 0x5A10
    ctx->pc = 0x2aff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    // 0x2aff84: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x2aff84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2aff88: 0xc0ac06c  jal         func_2B01B0
    ctx->pc = 0x2AFF88u;
    SET_GPR_U32(ctx, 31, 0x2AFF90u);
    ctx->pc = 0x2AFF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF88u;
    // 0x2aff8c: 0x612821  addu        $a1, $v1, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B01B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B01B0u, 0x2AFF88u, 0x2AFF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF90u;
label_2aff90:
    // 0x2aff90: 0xc0abb6c  jal         func_2AEDB0
    ctx->pc = 0x2AFF90u;
    SET_GPR_U32(ctx, 31, 0x2AFF98u);
    ctx->pc = 0x2AFF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF90u;
    // 0x2aff94: 0x260400c8  addiu       $a0, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEDB0u, 0x2AFF90u, 0x2AFF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF98u;
label_2aff98:
    // 0x2aff98: 0x8f828990  lw          $v0, -0x7670($gp)
    ctx->pc = 0x2aff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x2aff9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFF9Cu;
    {
        const bool branch_taken_0x2aff9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF9Cu;
        // 0x2affa0: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff9c) {
            ctx->pc = 0x2AFFB8u;
            goto label_2affb8;
        }
    }
    ctx->pc = 0x2AFFA4u;
    // 0x2affa4: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x2affa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x2affa8: 0x24845a10  addiu       $a0, $a0, 0x5A10
    ctx->pc = 0x2affa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    // 0x2affac: 0x3445fcc0  ori         $a1, $v0, 0xFCC0
    ctx->pc = 0x2affacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64704);
    // 0x2affb0: 0xc0ac050  jal         func_2B0140
    ctx->pc = 0x2AFFB0u;
    SET_GPR_U32(ctx, 31, 0x2AFFB8u);
    ctx->pc = 0x2AFFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFB0u;
    // 0x2affb4: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0140u, 0x2AFFB0u, 0x2AFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFB8u;
label_2affb8:
    // 0x2affb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2affb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2affbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2affbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2affc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2affc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2affc4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2affc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2affc8: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2affc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2affcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2affccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2affd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2affd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2affd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFD4u;
        // 0x2affd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFFDCu;
}
