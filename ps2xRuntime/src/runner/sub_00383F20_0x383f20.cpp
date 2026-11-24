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

// Function: sub_00383F20
// Address: 0x383f20 - 0x383f9c
void sub_00383F20_0x383f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383F20_0x383f20");
#endif

    switch (ctx->pc) {
        case 0x383f6cu: goto label_383f6c;
        case 0x383f90u: goto label_383f90;
        default: break;
    }

    ctx->pc = 0x383f20u;

    // 0x383f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383f24: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x383f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x383f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383f2c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x383f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x383f30: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x383f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x383f34: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x383f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x383f38: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x383f38u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x383f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x383f40u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x383f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x383f48u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383f4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x383f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f50: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x383f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x383f54: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x383f54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x383f58: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x383f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x383f5c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x383f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x383f60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x383f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x383f64: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x383F64u;
    SET_GPR_U32(ctx, 31, 0x383F6Cu);
    ctx->pc = 0x383F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F64u;
    // 0x383f68: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x383F64u, 0x383F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F6Cu;
label_383f6c:
    // 0x383f6c: 0x240619e7  addiu       $a2, $zero, 0x19E7
    ctx->pc = 0x383f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6631));
    // 0x383f70: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x383f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x383f74: 0xac2640b4  sw          $a2, 0x40B4($at)
    ctx->pc = 0x383f74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x383f78: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x383f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x383f7c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x383f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x383f80: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x383f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x383f84: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x383f84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x383f88: 0xc0ce400  jal         func_339000
    ctx->pc = 0x383F88u;
    SET_GPR_U32(ctx, 31, 0x383F90u);
    ctx->pc = 0x383F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F88u;
    // 0x383f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x383F88u, 0x383F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F90u;
label_383f90:
    // 0x383f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383f94: 0x3e00008  jr          $ra
    ctx->pc = 0x383F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F94u;
        // 0x383f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383F9Cu;
}
