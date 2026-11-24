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

// Function: sub_003BE390
// Address: 0x3be390 - 0x3be424
void sub_003BE390_0x3be390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE390_0x3be390");
#endif

    switch (ctx->pc) {
        case 0x3be3acu: goto label_3be3ac;
        case 0x3be3b8u: goto label_3be3b8;
        case 0x3be3c4u: goto label_3be3c4;
        case 0x3be3d0u: goto label_3be3d0;
        case 0x3be414u: goto label_3be414;
        default: break;
    }

    ctx->pc = 0x3be390u;

    // 0x3be390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3be390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3be394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3be394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3be398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3be39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3be39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3be3a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3be3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be3a4: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE3A4u;
    SET_GPR_U32(ctx, 31, 0x3BE3ACu);
    ctx->pc = 0x3BE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE3A4u;
    // 0x3be3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE3A4u, 0x3BE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE3ACu;
label_3be3ac:
    // 0x3be3ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3be3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3be3b0: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE3B0u;
    SET_GPR_U32(ctx, 31, 0x3BE3B8u);
    ctx->pc = 0x3BE3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE3B0u;
    // 0x3be3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE3B0u, 0x3BE3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE3B8u;
label_3be3b8:
    // 0x3be3b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3be3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3be3bc: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE3BCu;
    SET_GPR_U32(ctx, 31, 0x3BE3C4u);
    ctx->pc = 0x3BE3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE3BCu;
    // 0x3be3c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE3BCu, 0x3BE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE3C4u;
label_3be3c4:
    // 0x3be3c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3be3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3be3c8: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE3C8u;
    SET_GPR_U32(ctx, 31, 0x3BE3D0u);
    ctx->pc = 0x3BE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE3C8u;
    // 0x3be3cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE3C8u, 0x3BE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE3D0u;
label_3be3d0:
    // 0x3be3d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3be3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3be3d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3be3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3be3d8: 0x2442e120  addiu       $v0, $v0, -0x1EE0
    ctx->pc = 0x3be3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959392));
    // 0x3be3dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3be3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3be3e0: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3be3e0u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x65E120u));
    // 0x3be3e4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3be3e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3be3e8: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x3be3e8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65E130u));
    // 0x3be3ec: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x3be3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x3be3f0: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x3be3f0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E140u));
    // 0x3be3f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3be3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3be3f8: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x3be3f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E150u));
    // 0x3be3fc: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x3be3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x3be400: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x3be400u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x3be404: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x3be404u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x3be408: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x3be408u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x3be40c: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x3BE40Cu;
    SET_GPR_U32(ctx, 31, 0x3BE414u);
    ctx->pc = 0x3BE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE40Cu;
    // 0x3be410: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF70u, 0x3BE40Cu, 0x3BE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE414u;
label_3be414:
    // 0x3be414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3be414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3be418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3be418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be41c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE41Cu;
        // 0x3be420: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE424u;
}
