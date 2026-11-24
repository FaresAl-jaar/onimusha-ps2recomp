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

// Function: sub_00190500
// Address: 0x190500 - 0x190558
void sub_00190500_0x190500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190500_0x190500");
#endif

    ctx->pc = 0x190500u;

    // 0x190500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190504: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190508: 0xaf83870c  sw          $v1, -0x78F4($gp)
    ctx->pc = 0x190508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
    // 0x19050c: 0xe42c30b4  swc1        $f12, 0x30B4($at)
    ctx->pc = 0x19050cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8430B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430B4u, _value); } while (0); }
    // 0x190510: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x190514: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19051c: 0xe42c30c4  swc1        $f12, 0x30C4($at)
    ctx->pc = 0x19051cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8430C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430C4u, _value); } while (0); }
    // 0x190520: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x190520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x190524: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x190528: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x190528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x19052c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19052cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190530: 0x0  nop
    ctx->pc = 0x190530u;
    // NOP
    // 0x190534: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190534u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x190538: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19053c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19053cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x190540: 0x0  nop
    ctx->pc = 0x190540u;
    // NOP
    // 0x190544: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x190544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x190548: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x190548u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19054c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x19054cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x190550: 0x3e00008  jr          $ra
    ctx->pc = 0x190550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190550u;
        // 0x190554: 0xa783885c  sh          $v1, -0x77A4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190558u;
}
