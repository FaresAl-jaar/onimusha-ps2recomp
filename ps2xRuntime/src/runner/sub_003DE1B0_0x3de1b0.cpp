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

// Function: sub_003DE1B0
// Address: 0x3de1b0 - 0x3de228
void sub_003DE1B0_0x3de1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE1B0_0x3de1b0");
#endif

    switch (ctx->pc) {
        case 0x3de1c4u: goto label_3de1c4;
        case 0x3de1f8u: goto label_3de1f8;
        default: break;
    }

    ctx->pc = 0x3de1b0u;

    // 0x3de1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3de1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3de1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3de1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3de1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3de1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3de1bc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3DE1BCu;
    SET_GPR_U32(ctx, 31, 0x3DE1C4u);
    ctx->pc = 0x3DE1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE1BCu;
    // 0x3de1c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3DE1BCu, 0x3DE1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE1C4u;
label_3de1c4:
    // 0x3de1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3de1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3de1c8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3de1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3de1cc: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x3de1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3de1d0: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3de1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3de1d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3de1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3de1d8: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3de1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3de1dc: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3de1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3de1e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3de1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3de1e4: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x3de1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    // 0x3de1e8: 0xa2002b20  sb          $zero, 0x2B20($s0)
    ctx->pc = 0x3de1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 0));
    // 0x3de1ec: 0xa6000828  sh          $zero, 0x828($s0)
    ctx->pc = 0x3de1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 0));
    // 0x3de1f0: 0xc0b3490  jal         func_2CD240
    ctx->pc = 0x3DE1F0u;
    SET_GPR_U32(ctx, 31, 0x3DE1F8u);
    ctx->pc = 0x3DE1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE1F0u;
    // 0x3de1f4: 0x920407d8  lbu         $a0, 0x7D8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD240u, 0x3DE1F0u, 0x3DE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE1F8u;
label_3de1f8:
    // 0x3de1f8: 0xa602082a  sh          $v0, 0x82A($s0)
    ctx->pc = 0x3de1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 2));
    // 0x3de1fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3de1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3de200: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3de200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3de204: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3de204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3de208: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3de208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3de20c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x3de20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x3de210: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3de210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3de214: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x3de214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x3de218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3de218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3de21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de220: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE220u;
        // 0x3de224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE228u;
}
