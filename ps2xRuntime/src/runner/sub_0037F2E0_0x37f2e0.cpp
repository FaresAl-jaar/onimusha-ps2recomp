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

// Function: sub_0037F2E0
// Address: 0x37f2e0 - 0x37f3a4
void sub_0037F2E0_0x37f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F2E0_0x37f2e0");
#endif

    ctx->pc = 0x37f2e0u;

    // 0x37f2e0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x37f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x37f2e4: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x37f2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x37f2e8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x37f2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x37f2ec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x37f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x37f2f0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x37f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f2f4: 0x90880002  lbu         $t0, 0x2($a0)
    ctx->pc = 0x37f2f4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x37f2f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x37f2fc: 0x24e70b8c  addiu       $a3, $a3, 0xB8C
    ctx->pc = 0x37f2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2956));
    // 0x37f300: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x37f300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37f304: 0x24a50b94  addiu       $a1, $a1, 0xB94
    ctx->pc = 0x37f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2964));
    // 0x37f308: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x37f308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x37f30c: 0x3466cccc  ori         $a2, $v1, 0xCCCC
    ctx->pc = 0x37f30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
    // 0x37f310: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x37f310u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x37f314: 0x240302aa  addiu       $v1, $zero, 0x2AA
    ctx->pc = 0x37f314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
    // 0x37f318: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37f318u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f31c: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x37f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x37f320: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x37f320u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x37f324: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x37f324u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37f328: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x37f328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x37f32c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x37f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x37f330: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x37f330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37f334: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x37f334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x37f338: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x37f338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x37f33c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x37f33cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x37f340: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x37f340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x37f344: 0xe4812b64  swc1        $f1, 0x2B64($a0)
    ctx->pc = 0x37f344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11108), bits); }
    // 0x37f348: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x37f348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x37f34c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x37f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f350: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x37f350u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x37f354: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37f354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37f358: 0xe4802b68  swc1        $f0, 0x2B68($a0)
    ctx->pc = 0x37f358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11112), bits); }
    // 0x37f35c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x37f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f360: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x37f360u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x37f364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37f364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37f368: 0xe4802b6c  swc1        $f0, 0x2B6C($a0)
    ctx->pc = 0x37f368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11116), bits); }
    // 0x37f36c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x37f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f370: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x37f370u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37f374: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x37f374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f378: 0x0  nop
    ctx->pc = 0x37f378u;
    // NOP
    // 0x37f37c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x37f37cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x37f380: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37f384: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x37f384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x37f388: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37f388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37f38c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37f390: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x37f390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37f394: 0x0  nop
    ctx->pc = 0x37f394u;
    // NOP
    // 0x37f398: 0xa4852b74  sh          $a1, 0x2B74($a0)
    ctx->pc = 0x37f398u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11124), (uint16_t)GPR_U32(ctx, 5));
    // 0x37f39c: 0x3e00008  jr          $ra
    ctx->pc = 0x37F39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F39Cu;
        // 0x37f3a0: 0xa4832b76  sh          $v1, 0x2B76($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11126), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F3A4u;
}
