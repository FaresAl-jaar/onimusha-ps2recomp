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

// Function: sub_0025A790
// Address: 0x25a790 - 0x25a800
void sub_0025A790_0x25a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A790_0x25a790");
#endif

    switch (ctx->pc) {
        case 0x25a7bcu: goto label_25a7bc;
        case 0x25a7ccu: goto label_25a7cc;
        case 0x25a7dcu: goto label_25a7dc;
        default: break;
    }

    ctx->pc = 0x25a790u;

    // 0x25a790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a794: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x25a794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x25a798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a7a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a7a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a7a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a7acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a7b0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25a7b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25a7b4: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x25A7B4u;
    SET_GPR_U32(ctx, 31, 0x25A7BCu);
    ctx->pc = 0x25A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7B4u;
    // 0x25a7b8: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x25A7B4u, 0x25A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7BCu;
label_25a7bc:
    // 0x25a7bc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x25a7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x25a7c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25a7c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25a7c4: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x25A7C4u;
    SET_GPR_U32(ctx, 31, 0x25A7CCu);
    ctx->pc = 0x25A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7C4u;
    // 0x25a7c8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x25A7C4u, 0x25A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7CCu;
label_25a7cc:
    // 0x25a7cc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x25a7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x25a7d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25a7d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25a7d4: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x25A7D4u;
    SET_GPR_U32(ctx, 31, 0x25A7DCu);
    ctx->pc = 0x25A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7D4u;
    // 0x25a7d8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x25A7D4u, 0x25A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7DCu;
label_25a7dc:
    // 0x25a7dc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x25a7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x25a7e0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x25a7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x25a7e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x25a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x25a7e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a7ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a7f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a7f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7F8u;
        // 0x25a7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A800u;
}
