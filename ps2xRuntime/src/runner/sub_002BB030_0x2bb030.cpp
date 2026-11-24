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

// Function: sub_002BB030
// Address: 0x2bb030 - 0x2bb0e4
void sub_002BB030_0x2bb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB030_0x2bb030");
#endif

    switch (ctx->pc) {
        case 0x2bb060u: goto label_2bb060;
        default: break;
    }

    ctx->pc = 0x2bb030u;

    // 0x2bb030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb034: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bb034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bb038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bb03c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bb040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb048: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb04c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bb04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb050: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2bb050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2bb054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb058: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2BB058u;
    SET_GPR_U32(ctx, 31, 0x2BB060u);
    ctx->pc = 0x2BB05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB058u;
    // 0x2bb05c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2BB058u, 0x2BB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB060u;
label_2bb060:
    // 0x2bb060: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bb060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb064: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2bb064u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2bb068: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2bb068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb06c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2bb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2bb070: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2bb070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2bb074: 0x2484f38c  addiu       $a0, $a0, -0xC74
    ctx->pc = 0x2bb074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964108));
    // 0x2bb078: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bb078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb07c: 0x0  nop
    ctx->pc = 0x2bb07cu;
    // NOP
    // 0x2bb080: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2bb080u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2bb084: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2bb084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bb088: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x2bb088u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2bb08c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2bb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bb090: 0x46000084  c1          0x84
    ctx->pc = 0x2bb090u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bb094: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2bb094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bb098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bb098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb09c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2bb09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2bb0a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2bb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2bb0a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2bb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2bb0a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bb0ac: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2bb0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb0b0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2bb0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb0b4: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x2bb0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2bb0b8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bb0b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bb0bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bb0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb0c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB0C0u;
    {
        const bool branch_taken_0x2bb0c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb0c0) {
            ctx->pc = 0x2BB0CCu;
            goto label_2bb0cc;
        }
    }
    ctx->pc = 0x2BB0C8u;
    // 0x2bb0c8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2bb0c8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2bb0cc:
    // 0x2bb0cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bb0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb0d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0DCu;
        // 0x2bb0e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB0E4u;
}
