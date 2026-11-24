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

// Function: sub_003B2180
// Address: 0x3b2180 - 0x3b220c
void sub_003B2180_0x3b2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2180_0x3b2180");
#endif

    switch (ctx->pc) {
        case 0x3b21b0u: goto label_3b21b0;
        case 0x3b21c0u: goto label_3b21c0;
        case 0x3b21c8u: goto label_3b21c8;
        case 0x3b21f0u: goto label_3b21f0;
        default: break;
    }

    ctx->pc = 0x3b2180u;

    // 0x3b2180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b2180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b2184: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b2188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b2188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b218c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b2190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b2190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2194: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b2194u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b2198: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b2198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b219c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b219cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b21a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b21a4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3b21a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3b21a8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B21A8u;
    SET_GPR_U32(ctx, 31, 0x3B21B0u);
    ctx->pc = 0x3B21ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21A8u;
    // 0x3b21ac: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B21A8u, 0x3B21B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21B0u;
label_3b21b0:
    // 0x3b21b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b21b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b21b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b21b8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3B21B8u;
    SET_GPR_U32(ctx, 31, 0x3B21C0u);
    ctx->pc = 0x3B21BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21B8u;
    // 0x3b21bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3B21B8u, 0x3B21C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21C0u;
label_3b21c0:
    // 0x3b21c0: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3B21C0u;
    SET_GPR_U32(ctx, 31, 0x3B21C8u);
    ctx->pc = 0x3B21C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21C0u;
    // 0x3b21c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3B21C0u, 0x3B21C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21C8u;
label_3b21c8:
    // 0x3b21c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3b21c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b21cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3B21CCu;
    {
        const bool branch_taken_0x3b21cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b21cc) {
            ctx->pc = 0x3B21E0u;
            goto label_3b21e0;
        }
    }
    ctx->pc = 0x3B21D4u;
    // 0x3b21d4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3b21d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b21d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B21D8u;
    {
        const bool branch_taken_0x3b21d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21D8u;
        // 0x3b21dc: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b21d8) {
            ctx->pc = 0x3B21F0u;
            goto label_3b21f0;
        }
    }
    ctx->pc = 0x3B21E0u;
label_3b21e0:
    // 0x3b21e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b21e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b21e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b21e8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3B21E8u;
    SET_GPR_U32(ctx, 31, 0x3B21F0u);
    ctx->pc = 0x3B21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21E8u;
    // 0x3b21ec: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3B21E8u, 0x3B21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21F0u;
label_3b21f0:
    // 0x3b21f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b21f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b21f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b21f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b21f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b21f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b21fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b21fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2200: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b2204: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2204u;
        // 0x3b2208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B220Cu;
}
