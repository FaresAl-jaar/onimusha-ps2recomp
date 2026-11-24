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

// Function: sub_003DC3F0
// Address: 0x3dc3f0 - 0x3dc468
void sub_003DC3F0_0x3dc3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC3F0_0x3dc3f0");
#endif

    switch (ctx->pc) {
        case 0x3dc444u: goto label_3dc444;
        case 0x3dc458u: goto label_3dc458;
        default: break;
    }

    ctx->pc = 0x3dc3f0u;

    // 0x3dc3f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dc3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dc3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dc3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dc3f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3dc3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dc3fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dc400: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3dc400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3dc404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc408: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dc408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dc40c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x3dc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x3dc410: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3dc410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dc414: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3dc414u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dc418: 0x26032b90  addiu       $v1, $s0, 0x2B90
    ctx->pc = 0x3dc418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11152));
    // 0x3dc41c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dc41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3dc420: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3dc420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dc424: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x3dc424u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x3dc428: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3dc428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dc42c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3dc42cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dc430: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dc430u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3dc434: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3dc434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3dc438: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3dc438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3dc43c: 0xc04d7e0  jal         func_135F80
    ctx->pc = 0x3DC43Cu;
    SET_GPR_U32(ctx, 31, 0x3DC444u);
    ctx->pc = 0x3DC440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC43Cu;
    // 0x3dc440: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F80u, 0x3DC43Cu, 0x3DC444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC444u;
label_3dc444:
    // 0x3dc444: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x3dc444u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3dc448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dc448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc44c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3dc44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dc450: 0xc0bc89c  jal         func_2F2270
    ctx->pc = 0x3DC450u;
    SET_GPR_U32(ctx, 31, 0x3DC458u);
    ctx->pc = 0x3DC454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC450u;
    // 0x3dc454: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2270u, 0x3DC450u, 0x3DC458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC458u;
label_3dc458:
    // 0x3dc458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dc458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc460: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC460u;
        // 0x3dc464: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC468u;
}
