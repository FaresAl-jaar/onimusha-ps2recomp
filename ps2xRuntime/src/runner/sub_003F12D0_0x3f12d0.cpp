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

// Function: sub_003F12D0
// Address: 0x3f12d0 - 0x3f1354
void sub_003F12D0_0x3f12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F12D0_0x3f12d0");
#endif

    ctx->pc = 0x3f12d0u;

    // 0x3f12d0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3f12d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f12d4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3f12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x3f12d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3f12d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f12dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3f12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3f12e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f12e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f12e4: 0x0  nop
    ctx->pc = 0x3f12e4u;
    // NOP
    // 0x3f12e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f12e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3f12ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f12ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f12f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F12F0u;
    {
        const bool branch_taken_0x3f12f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f12f0) {
            ctx->pc = 0x3F1308u;
            goto label_3f1308;
        }
    }
    ctx->pc = 0x3F12F8u;
    // 0x3f12f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f12f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f12fc: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f12fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f1300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1300u;
    {
        const bool branch_taken_0x3f1300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1300u;
        // 0x3f1304: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1300) {
            ctx->pc = 0x3F1324u;
            goto label_3f1324;
        }
    }
    ctx->pc = 0x3F1308u;
label_3f1308:
    // 0x3f1308: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f1308u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f130c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3f130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3f1310: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1314: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f1314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f1318: 0x0  nop
    ctx->pc = 0x3f1318u;
    // NOP
    // 0x3f131c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3f131cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3f1320: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f1320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f1324:
    // 0x3f1324: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x3f1324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x3f1328: 0xa4832ad0  sh          $v1, 0x2AD0($a0)
    ctx->pc = 0x3f1328u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10960), (uint16_t)GPR_U32(ctx, 3));
    // 0x3f132c: 0x82c3c  dsll32      $a1, $t0, 16
    ctx->pc = 0x3f132cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3f1330: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x3f1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x3f1334: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3f1334u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3f1338: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f1338u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3f133c: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x3f133cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x3f1340: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x3f1340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x3f1344: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x3f1344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x3f1348: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x3f1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x3f134c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F134Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F134Cu;
        // 0x3f1350: 0xac65001c  sw          $a1, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F134Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1354u;
}
