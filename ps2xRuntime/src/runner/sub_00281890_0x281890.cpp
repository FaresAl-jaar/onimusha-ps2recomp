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

// Function: sub_00281890
// Address: 0x281890 - 0x281910
void sub_00281890_0x281890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281890_0x281890");
#endif

    switch (ctx->pc) {
        case 0x2818e0u: goto label_2818e0;
        case 0x2818f0u: goto label_2818f0;
        case 0x281904u: goto label_281904;
        default: break;
    }

    ctx->pc = 0x281890u;

    // 0x281890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281894: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x281894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x281898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28189c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2818a0: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x2818a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2818a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2818a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2818a8: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2818a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2818ac: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2818acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x2818b0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2818b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2818b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2818b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2818b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2818b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2818bc: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x2818bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2818c0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2818c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2818c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2818c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2818c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2818c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2818cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2818ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2818d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2818d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2818d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2818d8: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2818D8u;
    SET_GPR_U32(ctx, 31, 0x2818E0u);
    ctx->pc = 0x2818DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818D8u;
    // 0x2818dc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2818D8u, 0x2818E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818E0u;
label_2818e0:
    // 0x2818e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2818e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2818e4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2818e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2818e8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2818E8u;
    SET_GPR_U32(ctx, 31, 0x2818F0u);
    ctx->pc = 0x2818ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818E8u;
    // 0x2818ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2818E8u, 0x2818F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818F0u;
label_2818f0:
    // 0x2818f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2818f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2818f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2818f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2818f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2818fc: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x2818FCu;
    SET_GPR_U32(ctx, 31, 0x281904u);
    ctx->pc = 0x281900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818FCu;
    // 0x281900: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x2818FCu, 0x281904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281904u;
label_281904:
    // 0x281904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281908: 0x3e00008  jr          $ra
    ctx->pc = 0x281908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281908u;
        // 0x28190c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281910u;
}
