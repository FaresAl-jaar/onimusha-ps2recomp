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

// Function: sub_00273230
// Address: 0x273230 - 0x273298
void sub_00273230_0x273230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273230_0x273230");
#endif

    ctx->pc = 0x273230u;

    // 0x273230: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x273230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273234: 0x3c034335  lui         $v1, 0x4335
    ctx->pc = 0x273234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17205 << 16));
    // 0x273238: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x273238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27323c: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x27323cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x273240: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x273240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x273244: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x273244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x273248: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x273248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27324c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27324cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273250: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x273250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x273254: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x273254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x273258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x273258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27325c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27325Cu;
    {
        const bool branch_taken_0x27325c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27325c) {
            ctx->pc = 0x273274u;
            goto label_273274;
        }
    }
    ctx->pc = 0x273264u;
    // 0x273264: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273268: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x273268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x27326c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27326Cu;
    {
        const bool branch_taken_0x27326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27326Cu;
        // 0x273270: 0xa78488d0  sh          $a0, -0x7730($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936784), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27326c) {
            ctx->pc = 0x273290u;
            goto label_273290;
        }
    }
    ctx->pc = 0x273274u;
label_273274:
    // 0x273274: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x273274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273278: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x273278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27327c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27327cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273280: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x273280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x273284: 0x0  nop
    ctx->pc = 0x273284u;
    // NOP
    // 0x273288: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27328c: 0xa78488d0  sh          $a0, -0x7730($gp)
    ctx->pc = 0x27328cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936784), (uint16_t)GPR_U32(ctx, 4));
label_273290:
    // 0x273290: 0x3e00008  jr          $ra
    ctx->pc = 0x273290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273298u;
}
