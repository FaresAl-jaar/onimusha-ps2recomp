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

// Function: sub_003C0500
// Address: 0x3c0500 - 0x3c0548
void sub_003C0500_0x3c0500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0500_0x3c0500");
#endif

    switch (ctx->pc) {
        case 0x3c052cu: goto label_3c052c;
        default: break;
    }

    ctx->pc = 0x3c0500u;

    // 0x3c0500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c0504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c0504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c0508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c050c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3c050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3c0510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c0510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c0514: 0x9082000a  lbu         $v0, 0xA($a0)
    ctx->pc = 0x3c0514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x3c0518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c0518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c051c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3c051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3c0520: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3c0520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c0524: 0xc049590  jal         func_125640
    ctx->pc = 0x3C0524u;
    SET_GPR_U32(ctx, 31, 0x3C052Cu);
    ctx->pc = 0x3C0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0524u;
    // 0x3c0528: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C0524u, 0x3C052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C052Cu;
label_3c052c:
    // 0x3c052c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3c052cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0530: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c0530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c0534: 0xa203000b  sb          $v1, 0xB($s0)
    ctx->pc = 0x3c0534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c0538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c0538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c053c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c053cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c0540: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0540u;
        // 0x3c0544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0548u;
}
