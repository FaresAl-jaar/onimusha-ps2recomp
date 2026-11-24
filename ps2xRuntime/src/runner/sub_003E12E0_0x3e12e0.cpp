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

// Function: sub_003E12E0
// Address: 0x3e12e0 - 0x3e1360
void sub_003E12E0_0x3e12e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E12E0_0x3e12e0");
#endif

    ctx->pc = 0x3e12e0u;

    // 0x3e12e0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3e12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e12e4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3e12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3e12e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3e12e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e12ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E12ECu;
    {
        const bool branch_taken_0x3e12ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e12ec) {
            ctx->pc = 0x3E1300u;
            goto label_3e1300;
        }
    }
    ctx->pc = 0x3E12F4u;
    // 0x3e12f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3E12F4u;
    {
        const bool branch_taken_0x3e12f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12F4u;
        // 0x3e12f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12f4) {
            ctx->pc = 0x3E1358u;
            goto label_3e1358;
        }
    }
    ctx->pc = 0x3E12FCu;
    // 0x3e12fc: 0x0  nop
    ctx->pc = 0x3e12fcu;
    // NOP
label_3e1300:
    // 0x3e1300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1304: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3e1304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e1308: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3e1308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3e130c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1310: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3e1310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3e1314: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x3e1314u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x3e1318: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x3e1318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e131c: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x3e131cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3e1320: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3e1320u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3e1324: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x3e1324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e1328: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3e1328u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3e132c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3e132cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3e1330: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x3e1330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1334: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x3e1334u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x3e1338: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3e1338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e133c: 0x4605085c  madd.s      $f1, $f1, $f5
    ctx->pc = 0x3e133cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x3e1340: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3e1340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3e1344: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3e1344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3e1348: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x3e1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3e134c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e1350: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x3e1350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x3e1354: 0x0  nop
    ctx->pc = 0x3e1354u;
    // NOP
label_3e1358:
    // 0x3e1358: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1360u;
}
