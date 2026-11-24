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

// Function: sub_003E1270
// Address: 0x3e1270 - 0x3e12d8
void sub_003E1270_0x3e1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1270_0x3e1270");
#endif

    ctx->pc = 0x3e1270u;

    // 0x3e1270: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3e1270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3e1274: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e1274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e1278: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x3e1278u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3e127c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x3e127cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x3e1280: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e1280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1284: 0x460c181a  mula.s      $f3, $f12
    ctx->pc = 0x3e1284u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[12]));
    // 0x3e1288: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x3e1288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x3e128c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e128cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1290: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x3e1290u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3e1294: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3e1294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x3e1298: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x3e1298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x3e129c: 0x460d189d  msub.s      $f2, $f3, $f13
    ctx->pc = 0x3e129cu;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[13]));
    // 0x3e12a0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3e12a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x3e12a4: 0x46027000  add.s       $f0, $f14, $f2
    ctx->pc = 0x3e12a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x3e12a8: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x3e12a8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3e12ac: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x3e12acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x3e12b0: 0xe48f000c  swc1        $f15, 0xC($a0)
    ctx->pc = 0x3e12b0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3e12b4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3e12b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3e12b8: 0x460e181d  msub.s      $f0, $f3, $f14
    ctx->pc = 0x3e12b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[14]));
    // 0x3e12bc: 0x460f0001  sub.s       $f0, $f0, $f15
    ctx->pc = 0x3e12bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x3e12c0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x3e12c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3e12c4: 0xe48e001c  swc1        $f14, 0x1C($a0)
    ctx->pc = 0x3e12c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3e12c8: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x3e12c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3e12cc: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x3e12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x3e12d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E12D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12D0u;
        // 0x3e12d4: 0xac860028  sw          $a2, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E12D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E12D8u;
}
