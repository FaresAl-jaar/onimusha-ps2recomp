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

// Function: sub_00276290
// Address: 0x276290 - 0x276310
void sub_00276290_0x276290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276290_0x276290");
#endif

    switch (ctx->pc) {
        case 0x276300u: goto label_276300;
        default: break;
    }

    ctx->pc = 0x276290u;

    // 0x276290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276294: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x276294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x276298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27629c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x27629cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2762a0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2762a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2762a4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2762a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2762a8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2762a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2762ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2762acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2762b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2762b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2762b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2762b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2762b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2762b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2762bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2762bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2762c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2762c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2762c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2762C4u;
    {
        const bool branch_taken_0x2762c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2762c4) {
            ctx->pc = 0x2762DCu;
            goto label_2762dc;
        }
    }
    ctx->pc = 0x2762CCu;
    // 0x2762cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2762ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2762d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2762d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2762d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2762D4u;
    {
        const bool branch_taken_0x2762d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762D4u;
        // 0x2762d8: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762d4) {
            ctx->pc = 0x2762F8u;
            goto label_2762f8;
        }
    }
    ctx->pc = 0x2762DCu;
label_2762dc:
    // 0x2762dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2762dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2762e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2762e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2762e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2762e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2762e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2762e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2762ec: 0x0  nop
    ctx->pc = 0x2762ecu;
    // NOP
    // 0x2762f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2762f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2762f4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2762f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2762f8:
    // 0x2762f8: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x2762F8u;
    SET_GPR_U32(ctx, 31, 0x276300u);
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x2762F8u, 0x276300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276300u;
label_276300:
    // 0x276300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276308: 0x3e00008  jr          $ra
    ctx->pc = 0x276308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276308u;
        // 0x27630c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276310u;
}
