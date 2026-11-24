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

// Function: sub_001CF8C0
// Address: 0x1cf8c0 - 0x1cf914
void sub_001CF8C0_0x1cf8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF8C0_0x1cf8c0");
#endif

    switch (ctx->pc) {
        case 0x1cf908u: goto label_1cf908;
        default: break;
    }

    ctx->pc = 0x1cf8c0u;

    // 0x1cf8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf8c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1cf8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf8cc: 0x2442fd18  addiu       $v0, $v0, -0x2E8
    ctx->pc = 0x1cf8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966552));
    // 0x1cf8d0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1cf8d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x40FD18u));
    // 0x1cf8d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf8d4u;
    { uint32_t bits = FAST_READ32(0x40FD20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf8d8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cf8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cf8dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf8e0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf8e4: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1cf8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1cf8e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf8ec: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1cf8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1cf8f0: 0xac23fcdc  sw          $v1, -0x324($at)
    ctx->pc = 0x1cf8f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x40FCDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCDCu, _value); } while (0);
    // 0x1cf8f4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf8f8: 0xac22fce0  sw          $v0, -0x320($at)
    ctx->pc = 0x1cf8f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCE0u, _value); } while (0);
    // 0x1cf8fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cf8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf900: 0xc07404c  jal         func_1D0130
    ctx->pc = 0x1CF900u;
    SET_GPR_U32(ctx, 31, 0x1CF908u);
    ctx->pc = 0x1CF904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF900u;
    // 0x1cf904: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0130u, 0x1CF900u, 0x1CF908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF908u;
label_1cf908:
    // 0x1cf908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF90Cu;
        // 0x1cf910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF914u;
}
