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

// Function: sub_0038B4F0
// Address: 0x38b4f0 - 0x38b578
void sub_0038B4F0_0x38b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B4F0_0x38b4f0");
#endif

    switch (ctx->pc) {
        case 0x38b534u: goto label_38b534;
        case 0x38b548u: goto label_38b548;
        default: break;
    }

    ctx->pc = 0x38b4f0u;

    // 0x38b4f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38b4f4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x38b4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x38b4f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38b4fc: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x38b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x38b500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38b504: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38b504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x38b508: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38b508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b50c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x38b50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x38b510: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38b510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38b514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38b514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b51c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38B51Cu;
    {
        const bool branch_taken_0x38b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B51Cu;
        // 0x38b520: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b51c) {
            ctx->pc = 0x38B560u;
            goto label_38b560;
        }
    }
    ctx->pc = 0x38B524u;
    // 0x38b524: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x38b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x38b528: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x38b528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x38b52c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x38B52Cu;
    SET_GPR_U32(ctx, 31, 0x38B534u);
    ctx->pc = 0x38B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B52Cu;
    // 0x38b530: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x38B52Cu, 0x38B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B534u;
label_38b534:
    // 0x38b534: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x38b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38b538: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38b538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38b53c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38b53cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b540: 0xc07cd48  jal         func_1F3520
    ctx->pc = 0x38B540u;
    SET_GPR_U32(ctx, 31, 0x38B548u);
    ctx->pc = 0x38B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B540u;
    // 0x38b544: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3520u, 0x38B540u, 0x38B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B548u;
label_38b548:
    // 0x38b548: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x38b548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x38b54c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x38b54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b550: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x38B550u;
    {
        const bool branch_taken_0x38b550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b550) {
            ctx->pc = 0x38B560u;
            goto label_38b560;
        }
    }
    ctx->pc = 0x38B558u;
    // 0x38b558: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38b558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b55c: 0x0  nop
    ctx->pc = 0x38b55cu;
    // NOP
label_38b560:
    // 0x38b560: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x38b560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x38b564: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b568: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38b56c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38b56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b570: 0x3e00008  jr          $ra
    ctx->pc = 0x38B570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B570u;
        // 0x38b574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B578u;
}
