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

// Function: sub_003E7DD0
// Address: 0x3e7dd0 - 0x3e7e84
void sub_003E7DD0_0x3e7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7DD0_0x3e7dd0");
#endif

    switch (ctx->pc) {
        case 0x3e7e0cu: goto label_3e7e0c;
        case 0x3e7e68u: goto label_3e7e68;
        default: break;
    }

    ctx->pc = 0x3e7dd0u;

    // 0x3e7dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e7dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e7dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e7dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7dd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e7dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e7ddc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3e7ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3e7de0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e7de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e7de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e7de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e7dec: 0x3c110092  lui         $s1, 0x92
    ctx->pc = 0x3e7decu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)146 << 16));
    // 0x3e7df0: 0x80820084  lb          $v0, 0x84($a0)
    ctx->pc = 0x3e7df0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x3e7df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e7df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7df8: 0x26313468  addiu       $s1, $s1, 0x3468
    ctx->pc = 0x3e7df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 13416));
    // 0x3e7dfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e7e00: 0x80520014  lb          $s2, 0x14($v0)
    ctx->pc = 0x3e7e00u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3e7e04: 0xc049590  jal         func_125640
    ctx->pc = 0x3E7E04u;
    SET_GPR_U32(ctx, 31, 0x3E7E0Cu);
    ctx->pc = 0x3E7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E04u;
    // 0x3e7e08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E7E04u, 0x3E7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E0Cu;
label_3e7e0c:
    // 0x3e7e0c: 0x82030090  lb          $v1, 0x90($s0)
    ctx->pc = 0x3e7e0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3e7e10: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e7e14: 0x2442f9f0  addiu       $v0, $v0, -0x610
    ctx->pc = 0x3e7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x3e7e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e7e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7e1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7e20: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x3e7e20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e24: 0x82030092  lb          $v1, 0x92($s0)
    ctx->pc = 0x3e7e24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x3e7e28: 0xa3a30041  sb          $v1, 0x41($sp)
    ctx->pc = 0x3e7e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e2c: 0x82030094  lb          $v1, 0x94($s0)
    ctx->pc = 0x3e7e2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x3e7e30: 0xa3a30042  sb          $v1, 0x42($sp)
    ctx->pc = 0x3e7e30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e34: 0x82030096  lb          $v1, 0x96($s0)
    ctx->pc = 0x3e7e34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x3e7e38: 0xa3a30043  sb          $v1, 0x43($sp)
    ctx->pc = 0x3e7e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e3c: 0x82030098  lb          $v1, 0x98($s0)
    ctx->pc = 0x3e7e3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3e7e40: 0xa3a30044  sb          $v1, 0x44($sp)
    ctx->pc = 0x3e7e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e44: 0x8203009a  lb          $v1, 0x9A($s0)
    ctx->pc = 0x3e7e44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
    // 0x3e7e48: 0xa3a30045  sb          $v1, 0x45($sp)
    ctx->pc = 0x3e7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 69), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e4c: 0x8203009c  lb          $v1, 0x9C($s0)
    ctx->pc = 0x3e7e4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x3e7e50: 0xa3a30046  sb          $v1, 0x46($sp)
    ctx->pc = 0x3e7e50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e54: 0x8203009e  lb          $v1, 0x9E($s0)
    ctx->pc = 0x3e7e54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x3e7e58: 0xa3a30047  sb          $v1, 0x47($sp)
    ctx->pc = 0x3e7e58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7e5c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3e7e5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e7e60: 0xc0f8c50  jal         func_3E3140
    ctx->pc = 0x3E7E60u;
    SET_GPR_U32(ctx, 31, 0x3E7E68u);
    ctx->pc = 0x3E7E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E60u;
    // 0x3e7e64: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3140u, 0x3E7E60u, 0x3E7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E68u;
label_3e7e68:
    // 0x3e7e68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e7e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e7e6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e7e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e7e70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e7e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E7Cu;
        // 0x3e7e80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7E84u;
}
