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

// Function: sub_0037E3C0
// Address: 0x37e3c0 - 0x37e420
void sub_0037E3C0_0x37e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E3C0_0x37e3c0");
#endif

    switch (ctx->pc) {
        case 0x37e3d8u: goto label_37e3d8;
        case 0x37e400u: goto label_37e400;
        case 0x37e410u: goto label_37e410;
        default: break;
    }

    ctx->pc = 0x37e3c0u;

    // 0x37e3c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37e3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37e3c8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x37e3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37e3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37e3d0: 0xc0df908  jal         func_37E420
    ctx->pc = 0x37E3D0u;
    SET_GPR_U32(ctx, 31, 0x37E3D8u);
    ctx->pc = 0x37E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E3D0u;
    // 0x37e3d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E420u, 0x37E3D0u, 0x37E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E3D8u;
label_37e3d8:
    // 0x37e3d8: 0x8e032b80  lw          $v1, 0x2B80($s0)
    ctx->pc = 0x37e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37e3dc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x37e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37e3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e3e4: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x37e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x37e3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e3ec: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x37e3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e3f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37e3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37e3f4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x37e3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x37e3f8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x37E3F8u;
    SET_GPR_U32(ctx, 31, 0x37E400u);
    ctx->pc = 0x37E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E3F8u;
    // 0x37e3fc: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x37E3F8u, 0x37E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E400u;
label_37e400:
    // 0x37e400: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x37e400u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37e404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37e404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e408: 0xc0aa158  jal         func_2A8560
    ctx->pc = 0x37E408u;
    SET_GPR_U32(ctx, 31, 0x37E410u);
    ctx->pc = 0x37E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E408u;
    // 0x37e40c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8560u, 0x37E408u, 0x37E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E410u;
label_37e410:
    // 0x37e410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37e410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37e414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e418: 0x3e00008  jr          $ra
    ctx->pc = 0x37E418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E418u;
        // 0x37e41c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E420u;
}
