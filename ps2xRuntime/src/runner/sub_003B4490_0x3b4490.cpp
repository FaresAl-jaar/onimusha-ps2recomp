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

// Function: sub_003B4490
// Address: 0x3b4490 - 0x3b4504
void sub_003B4490_0x3b4490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4490_0x3b4490");
#endif

    ctx->pc = 0x3b4490u;

    // 0x3b4490: 0x8c8700d4  lw          $a3, 0xD4($a0)
    ctx->pc = 0x3b4490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x3b4494: 0x3c0640c0  lui         $a2, 0x40C0
    ctx->pc = 0x3b4494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16576 << 16));
    // 0x3b4498: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b4498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b449c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b44a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b44a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b44a4: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x3b44a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b44a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b44ac: 0xac8700d8  sw          $a3, 0xD8($a0)
    ctx->pc = 0x3b44acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 7));
    // 0x3b44b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b44b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b44b4: 0xac8500d4  sw          $a1, 0xD4($a0)
    ctx->pc = 0x3b44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 5));
    // 0x3b44b8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b44b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b44bc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b44bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b44c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b44c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b44c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b44c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b44c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B44C8u;
    {
        const bool branch_taken_0x3b44c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b44c8) {
            ctx->pc = 0x3B44E0u;
            goto label_3b44e0;
        }
    }
    ctx->pc = 0x3B44D0u;
    // 0x3b44d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b44d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b44d4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3b44d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b44d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B44D8u;
    {
        const bool branch_taken_0x3b44d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44D8u;
        // 0x3b44dc: 0xa08500dc  sb          $a1, 0xDC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 220), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b44d8) {
            ctx->pc = 0x3B44FCu;
            goto label_3b44fc;
        }
    }
    ctx->pc = 0x3B44E0u;
label_3b44e0:
    // 0x3b44e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b44e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b44e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b44e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b44e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b44ec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3b44ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3b44f0: 0x0  nop
    ctx->pc = 0x3b44f0u;
    // NOP
    // 0x3b44f4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3b44f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3b44f8: 0xa08500dc  sb          $a1, 0xDC($a0)
    ctx->pc = 0x3b44f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 220), (uint8_t)GPR_U32(ctx, 5));
label_3b44fc:
    // 0x3b44fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B44FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B44FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4504u;
}
