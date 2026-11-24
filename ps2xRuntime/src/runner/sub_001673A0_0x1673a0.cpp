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

// Function: sub_001673A0
// Address: 0x1673a0 - 0x167450
void sub_001673A0_0x1673a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001673A0_0x1673a0");
#endif

    switch (ctx->pc) {
        case 0x1673d8u: goto label_1673d8;
        default: break;
    }

    ctx->pc = 0x1673a0u;

    // 0x1673a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1673a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1673a8: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x1673a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1673ac: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x1673acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1673b0: 0x8c8521a0  lw          $a1, 0x21A0($a0)
    ctx->pc = 0x1673b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8608)));
    // 0x1673b4: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x1673b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1673b8: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x1673b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1673bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673c0: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x1673c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1673c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1673c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1673c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1673cc: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x1673ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1673d0: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x1673d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1673d4: 0x0  nop
    ctx->pc = 0x1673d4u;
    // NOP
label_1673d8:
    // 0x1673d8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1673d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1673dc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1673dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1673e0: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x1673e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1673e4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1673e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1673e8: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x1673e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x1673ec: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x1673ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x1673f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1673f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1673f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1673f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1673f8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1673f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x1673fc: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x1673fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x167400: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x167400u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x167404: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x167404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x167408: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x167408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x16740c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16740cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167410: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x167410u;
    {
        const bool branch_taken_0x167410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167410u;
        // 0x167414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167410) {
            ctx->pc = 0x16741Cu;
            goto label_16741c;
        }
    }
    ctx->pc = 0x167418u;
    // 0x167418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x167418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16741c:
    // 0x16741c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x167420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167420u;
    {
        const bool branch_taken_0x167420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167420) {
            ctx->pc = 0x167430u;
            goto label_167430;
        }
    }
    ctx->pc = 0x167428u;
    // 0x167428: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x167428u;
    {
        const bool branch_taken_0x167428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167428u;
        // 0x16742c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167428) {
            ctx->pc = 0x167448u;
            goto label_167448;
        }
    }
    ctx->pc = 0x167430u;
label_167430:
    // 0x167430: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x167430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x167434: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x167434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x167438: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16743c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16743Cu;
    {
        const bool branch_taken_0x16743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16743Cu;
        // 0x167440: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16743c) {
            ctx->pc = 0x1673D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1673d8;
        }
    }
    ctx->pc = 0x167444u;
    // 0x167444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x167444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167448:
    // 0x167448: 0x3e00008  jr          $ra
    ctx->pc = 0x167448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167450u;
}
