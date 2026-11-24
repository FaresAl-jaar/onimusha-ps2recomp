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

// Function: sub_00396DF0
// Address: 0x396df0 - 0x396e60
void sub_00396DF0_0x396df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396DF0_0x396df0");
#endif

    switch (ctx->pc) {
        case 0x396e04u: goto label_396e04;
        default: break;
    }

    ctx->pc = 0x396df0u;

    // 0x396df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x396dfc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x396DFCu;
    SET_GPR_U32(ctx, 31, 0x396E04u);
    ctx->pc = 0x396E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396DFCu;
    // 0x396e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x396DFCu, 0x396E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E04u;
label_396e04:
    // 0x396e04: 0xae002b20  sw          $zero, 0x2B20($s0)
    ctx->pc = 0x396e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 0));
    // 0x396e08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x396e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x396e0c: 0xa2002b2d  sb          $zero, 0x2B2D($s0)
    ctx->pc = 0x396e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 0));
    // 0x396e10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x396e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396e14: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x396e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x396e18: 0xa2002b32  sb          $zero, 0x2B32($s0)
    ctx->pc = 0x396e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11058), (uint8_t)GPR_U32(ctx, 0));
    // 0x396e1c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x396e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x396e20: 0xa2042b33  sb          $a0, 0x2B33($s0)
    ctx->pc = 0x396e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11059), (uint8_t)GPR_U32(ctx, 4));
    // 0x396e24: 0xa2002b34  sb          $zero, 0x2B34($s0)
    ctx->pc = 0x396e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11060), (uint8_t)GPR_U32(ctx, 0));
    // 0x396e28: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x396e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x396e2c: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x396e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x396e30: 0x94a400c6  lhu         $a0, 0xC6($a1)
    ctx->pc = 0x396e30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 198)));
    // 0x396e34: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x396e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x396e38: 0xa4a400c6  sh          $a0, 0xC6($a1)
    ctx->pc = 0x396e38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 198), (uint16_t)GPR_U32(ctx, 4));
    // 0x396e3c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x396e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x396e40: 0xae0306c0  sw          $v1, 0x6C0($s0)
    ctx->pc = 0x396e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 3));
    // 0x396e44: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x396e44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x396e48: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x396e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x396e4c: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x396e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x396e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396e58: 0x3e00008  jr          $ra
    ctx->pc = 0x396E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E58u;
        // 0x396e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396E60u;
}
