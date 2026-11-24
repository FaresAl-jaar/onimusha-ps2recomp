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

// Function: sub_001A1920
// Address: 0x1a1920 - 0x1a1970
void sub_001A1920_0x1a1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1920_0x1a1920");
#endif

    ctx->pc = 0x1a1920u;

    // 0x1a1920: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1a1920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1a1924: 0x3465cbe4  ori         $a1, $v1, 0xCBE4
    ctx->pc = 0x1a1924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1a1928: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1a1928u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a192c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1a192cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1a1930: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a1930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a1934: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x1a1934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1a1938: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x1a1938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1a193c: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x1a193cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x1a1940: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x1a1940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1a1944: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1a1944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a1948: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x1a1948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1a194c: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x1a194cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x1a1950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a1950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1954: 0x0  nop
    ctx->pc = 0x1a1954u;
    // NOP
    // 0x1a1958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a195c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1a195cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a1960: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1a1960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1a1964: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1a1964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1a1968: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1968u;
        // 0x1a196c: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1970u;
}
