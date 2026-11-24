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

// Function: sub_00293310
// Address: 0x293310 - 0x293458
void sub_00293310_0x293310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293310_0x293310");
#endif

    switch (ctx->pc) {
        case 0x2933f0u: goto label_2933f0;
        case 0x293404u: goto label_293404;
        case 0x293414u: goto label_293414;
        case 0x293440u: goto label_293440;
        default: break;
    }

    ctx->pc = 0x293310u;

    // 0x293310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x293310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x293314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29331c: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x29331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x293320: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x293320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x293324: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x293324u;
    {
        const bool branch_taken_0x293324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293324u;
        // 0x293328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293324) {
            ctx->pc = 0x293448u;
            goto label_293448;
        }
    }
    ctx->pc = 0x29332Cu;
    // 0x29332c: 0x96030786  lhu         $v1, 0x786($s0)
    ctx->pc = 0x29332cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1926)));
    // 0x293330: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x293330u;
    {
        const bool branch_taken_0x293330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293330) {
            ctx->pc = 0x293448u;
            goto label_293448;
        }
    }
    ctx->pc = 0x293338u;
    // 0x293338: 0x92032ab7  lbu         $v1, 0x2AB7($s0)
    ctx->pc = 0x293338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10935)));
    // 0x29333c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x29333Cu;
    {
        const bool branch_taken_0x29333c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29333c) {
            ctx->pc = 0x2933B0u;
            goto label_2933b0;
        }
    }
    ctx->pc = 0x293344u;
    // 0x293344: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x293344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293348: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x293348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x29334c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x29334cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293350: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x293350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x293354: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x293354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x293358: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x293358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x29335c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29335cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x293360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x293360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293368: 0x0  nop
    ctx->pc = 0x293368u;
    // NOP
    // 0x29336c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29336cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x293370: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x293370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293374: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x293374u;
    {
        const bool branch_taken_0x293374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x293374) {
            ctx->pc = 0x29338Cu;
            goto label_29338c;
        }
    }
    ctx->pc = 0x29337Cu;
    // 0x29337c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29337cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x293380: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x293380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x293384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x293384u;
    {
        const bool branch_taken_0x293384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293384u;
        // 0x293388: 0xa2032ab7  sb          $v1, 0x2AB7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10935), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293384) {
            ctx->pc = 0x2933A8u;
            goto label_2933a8;
        }
    }
    ctx->pc = 0x29338Cu;
label_29338c:
    // 0x29338c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29338cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293390: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x293394: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x293394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x293398: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x293398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29339c: 0x0  nop
    ctx->pc = 0x29339cu;
    // NOP
    // 0x2933a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2933a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2933a4: 0xa2032ab7  sb          $v1, 0x2AB7($s0)
    ctx->pc = 0x2933a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10935), (uint8_t)GPR_U32(ctx, 3));
label_2933a8:
    // 0x2933a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2933A8u;
    {
        const bool branch_taken_0x2933a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2933a8) {
            ctx->pc = 0x2933B8u;
            goto label_2933b8;
        }
    }
    ctx->pc = 0x2933B0u;
label_2933b0:
    // 0x2933b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2933B0u;
    {
        const bool branch_taken_0x2933b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2933b0) {
            ctx->pc = 0x293448u;
            goto label_293448;
        }
    }
    ctx->pc = 0x2933B8u;
label_2933b8:
    // 0x2933b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2933b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2933bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2933BCu;
    {
        const bool branch_taken_0x2933bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2933bc) {
            ctx->pc = 0x2933D8u;
            goto label_2933d8;
        }
    }
    ctx->pc = 0x2933C4u;
    // 0x2933c4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2933c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2933c8: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2933c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2933cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2933CCu;
    {
        const bool branch_taken_0x2933cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933CCu;
        // 0x2933d0: 0x7e022ae0  sq          $v0, 0x2AE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 10976), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933cc) {
            ctx->pc = 0x2933E0u;
            goto label_2933e0;
        }
    }
    ctx->pc = 0x2933D4u;
    // 0x2933d4: 0x0  nop
    ctx->pc = 0x2933d4u;
    // NOP
label_2933d8:
    // 0x2933d8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x2933d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2933dc: 0x7e022ae0  sq          $v0, 0x2AE0($s0)
    ctx->pc = 0x2933dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 10976), GPR_VEC(ctx, 2));
label_2933e0:
    // 0x2933e0: 0x26042ad0  addiu       $a0, $s0, 0x2AD0
    ctx->pc = 0x2933e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10960));
    // 0x2933e4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2933e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2933e8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2933E8u;
    SET_GPR_U32(ctx, 31, 0x2933F0u);
    ctx->pc = 0x2933ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933E8u;
    // 0x2933ec: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2933E8u, 0x2933F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933F0u;
label_2933f0:
    // 0x2933f0: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2933f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2933f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2933f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2933f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2933f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2933fc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2933FCu;
    SET_GPR_U32(ctx, 31, 0x293404u);
    ctx->pc = 0x293400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933FCu;
    // 0x293400: 0x26052ad0  addiu       $a1, $s0, 0x2AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2933FCu, 0x293404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293404u;
label_293404:
    // 0x293404: 0x26042ac0  addiu       $a0, $s0, 0x2AC0
    ctx->pc = 0x293404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10944));
    // 0x293408: 0x26052ae0  addiu       $a1, $s0, 0x2AE0
    ctx->pc = 0x293408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10976));
    // 0x29340c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x29340Cu;
    SET_GPR_U32(ctx, 31, 0x293414u);
    ctx->pc = 0x293410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29340Cu;
    // 0x293410: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x29340Cu, 0x293414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293414u;
label_293414:
    // 0x293414: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x293414u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x293418: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x29341c: 0x24424960  addiu       $v0, $v0, 0x4960
    ctx->pc = 0x29341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18784));
    // 0x293420: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x293420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x293424: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x293424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293428: 0x7e032ae0  sq          $v1, 0x2AE0($s0)
    ctx->pc = 0x293428u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 10976), GPR_VEC(ctx, 3));
    // 0x29342c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29342cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4960u));
    // 0x293430: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x293430u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x293434: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x293434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x293438: 0xc0a9254  jal         func_2A4950
    ctx->pc = 0x293438u;
    SET_GPR_U32(ctx, 31, 0x293440u);
    ctx->pc = 0x29343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293438u;
    // 0x29343c: 0x26062ac0  addiu       $a2, $s0, 0x2AC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 10944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4950u, 0x293438u, 0x293440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293440u;
label_293440:
    // 0x293440: 0xae0008d8  sw          $zero, 0x8D8($s0)
    ctx->pc = 0x293440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 0));
    // 0x293444: 0x0  nop
    ctx->pc = 0x293444u;
    // NOP
label_293448:
    // 0x293448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29344c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29344cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293450: 0x3e00008  jr          $ra
    ctx->pc = 0x293450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293450u;
        // 0x293454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293458u;
}
