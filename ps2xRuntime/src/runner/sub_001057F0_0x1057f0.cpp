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

// Function: sub_001057F0
// Address: 0x1057f0 - 0x1058b0
void sub_001057F0_0x1057f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001057F0_0x1057f0");
#endif

    switch (ctx->pc) {
        case 0x105828u: goto label_105828;
        case 0x105834u: goto label_105834;
        case 0x105844u: goto label_105844;
        case 0x105850u: goto label_105850;
        case 0x105860u: goto label_105860;
        case 0x10586cu: goto label_10586c;
        case 0x105894u: goto label_105894;
        default: break;
    }

    ctx->pc = 0x1057f0u;

    // 0x1057f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1057f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1057f4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1057f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1057f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1057f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1057fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1057fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x105800: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x105800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x105804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105808: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x105808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10580c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x105810: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x105810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105814: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x105814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105818: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x105818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10581c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x105820: 0xc0414dc  jal         func_105370
    ctx->pc = 0x105820u;
    SET_GPR_U32(ctx, 31, 0x105828u);
    ctx->pc = 0x105824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105820u;
    // 0x105824: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x105820u, 0x105828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105828u;
label_105828:
    // 0x105828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10582c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x10582Cu;
    SET_GPR_U32(ctx, 31, 0x105834u);
    ctx->pc = 0x105830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10582Cu;
    // 0x105830: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x10582Cu, 0x105834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105834u;
label_105834:
    // 0x105834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105838: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x105838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10583c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x10583Cu;
    SET_GPR_U32(ctx, 31, 0x105844u);
    ctx->pc = 0x105840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10583Cu;
    // 0x105840: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x10583Cu, 0x105844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105844u;
label_105844:
    // 0x105844: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x105844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x105848: 0xc041472  jal         func_1051C8
    ctx->pc = 0x105848u;
    SET_GPR_U32(ctx, 31, 0x105850u);
    ctx->pc = 0x10584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105848u;
    // 0x10584c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x105848u, 0x105850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105850u;
label_105850:
    // 0x105850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x105850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105854: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x105854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x105858: 0xc0414dc  jal         func_105370
    ctx->pc = 0x105858u;
    SET_GPR_U32(ctx, 31, 0x105860u);
    ctx->pc = 0x10585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105858u;
    // 0x10585c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x105858u, 0x105860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105860u;
label_105860:
    // 0x105860: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x105860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x105864: 0xc041472  jal         func_1051C8
    ctx->pc = 0x105864u;
    SET_GPR_U32(ctx, 31, 0x10586Cu);
    ctx->pc = 0x105868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105864u;
    // 0x105868: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x105864u, 0x10586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10586Cu;
label_10586c:
    // 0x10586c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10586cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x105874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x105878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x105878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10587c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10587cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105880: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x105880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x105884: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x105884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x105888: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x105888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x10588c: 0xc041482  jal         func_105208
    ctx->pc = 0x10588Cu;
    SET_GPR_U32(ctx, 31, 0x105894u);
    ctx->pc = 0x105890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10588Cu;
    // 0x105890: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105208u, 0x10588Cu, 0x105894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105894u;
label_105894:
    // 0x105894: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x105894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105898: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10589c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10589cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1058a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1058a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1058a4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1058a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1058a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1058A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058A8u;
        // 0x1058ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1058A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1058B0u;
}
