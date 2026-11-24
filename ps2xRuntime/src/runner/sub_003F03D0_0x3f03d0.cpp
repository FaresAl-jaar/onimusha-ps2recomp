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

// Function: sub_003F03D0
// Address: 0x3f03d0 - 0x3f0430
void sub_003F03D0_0x3f03d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F03D0_0x3f03d0");
#endif

    switch (ctx->pc) {
        case 0x3f0424u: goto label_3f0424;
        default: break;
    }

    ctx->pc = 0x3f03d0u;

    // 0x3f03d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f03d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f03d4: 0xa4c3c  dsll32      $t1, $t2, 16
    ctx->pc = 0x3f03d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 16));
    // 0x3f03d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f03d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f03dc: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x3f03dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3f03e0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f03e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f03e4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x3f03e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3f03e8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f03ec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f03f0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f03f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f03f4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x3f03f4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x3f03f8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f03f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f03fc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3f03fcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3f0400: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f0400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0408: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3f0408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f040c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3f040cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3f0410: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x3f0410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x3f0414: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3f0418: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f0418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3f041c: 0xc0d1c28  jal         func_3470A0
    ctx->pc = 0x3F041Cu;
    SET_GPR_U32(ctx, 31, 0x3F0424u);
    ctx->pc = 0x3F0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F041Cu;
    // 0x3f0420: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3470A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3470A0u, 0x3F041Cu, 0x3F0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0424u;
label_3f0424:
    // 0x3f0424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f0424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f0428: 0x3e00008  jr          $ra
    ctx->pc = 0x3F0428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0428u;
        // 0x3f042c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F0430u;
}
