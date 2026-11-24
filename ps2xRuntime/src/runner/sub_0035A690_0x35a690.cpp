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

// Function: sub_0035A690
// Address: 0x35a690 - 0x35a78c
void sub_0035A690_0x35a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A690_0x35a690");
#endif

    switch (ctx->pc) {
        case 0x35a720u: goto label_35a720;
        case 0x35a734u: goto label_35a734;
        case 0x35a73cu: goto label_35a73c;
        default: break;
    }

    ctx->pc = 0x35a690u;

    // 0x35a690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35a694: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x35a694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x35a698: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35a69c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35a69cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35a6a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x35a6a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x35a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35a6a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35a6ac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x35a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a6b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35a6b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35a6b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35a6bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35a6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35a6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35a6c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a6c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35a6c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35a6cc: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x35a6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35a6d0: 0x8c8400c8  lw          $a0, 0xC8($a0)
    ctx->pc = 0x35a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x35a6d4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x35a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x35a6d8: 0x8483052e  lh          $v1, 0x52E($a0)
    ctx->pc = 0x35a6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1326)));
    // 0x35a6dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A6DCu;
    {
        const bool branch_taken_0x35a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A6DCu;
        // 0x35a6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a6dc) {
            ctx->pc = 0x35A6F0u;
            goto label_35a6f0;
        }
    }
    ctx->pc = 0x35A6E4u;
    // 0x35a6e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A6E4u;
    {
        const bool branch_taken_0x35a6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a6e4) {
            ctx->pc = 0x35A700u;
            goto label_35a700;
        }
    }
    ctx->pc = 0x35A6ECu;
    // 0x35a6ec: 0x0  nop
    ctx->pc = 0x35a6ecu;
    // NOP
label_35a6f0:
    // 0x35a6f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35a6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a6f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x35A6F4u;
    {
        const bool branch_taken_0x35a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a6f4) {
            ctx->pc = 0x35A768u;
            goto label_35a768;
        }
    }
    ctx->pc = 0x35A6FCu;
    // 0x35a6fc: 0x0  nop
    ctx->pc = 0x35a6fcu;
    // NOP
label_35a700:
    // 0x35a700: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x35a700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35a704: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x35a704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35a708: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x35a708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35a70c: 0x24930140  addiu       $s3, $a0, 0x140
    ctx->pc = 0x35a70cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x35a710: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x35A710u;
    {
        const bool branch_taken_0x35a710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A710u;
        // 0x35a714: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a710) {
            ctx->pc = 0x35A760u;
            goto label_35a760;
        }
    }
    ctx->pc = 0x35A718u;
    // 0x35a718: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x35a718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a71c: 0x0  nop
    ctx->pc = 0x35a71cu;
    // NOP
label_35a720:
    // 0x35a720: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x35a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35a724: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35a724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35a728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a72c: 0xc076664  jal         func_1D9990
    ctx->pc = 0x35A72Cu;
    SET_GPR_U32(ctx, 31, 0x35A734u);
    ctx->pc = 0x35A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A72Cu;
    // 0x35a730: 0x2622821  addu        $a1, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x35A72Cu, 0x35A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A734u;
label_35a734:
    // 0x35a734: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x35A734u;
    SET_GPR_U32(ctx, 31, 0x35A73Cu);
    ctx->pc = 0x35A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A734u;
    // 0x35a738: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x35A734u, 0x35A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A73Cu;
label_35a73c:
    // 0x35a73c: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x35a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x35a740: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x35a740u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x35a744: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35a744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35a748: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x35a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35a74c: 0x8442052e  lh          $v0, 0x52E($v0)
    ctx->pc = 0x35a74cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1326)));
    // 0x35a750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35a754: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x35a754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35a758: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x35A758u;
    {
        const bool branch_taken_0x35a758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A758u;
        // 0x35a75c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a758) {
            ctx->pc = 0x35A720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a720;
        }
    }
    ctx->pc = 0x35A760u;
label_35a760:
    // 0x35a760: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x35a760u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x35a764: 0x0  nop
    ctx->pc = 0x35a764u;
    // NOP
label_35a768:
    // 0x35a768: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35a768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35a76c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35a76cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35a770: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a774: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35a774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35a778: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35a778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a77c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35a77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a780: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35a780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a784: 0x3e00008  jr          $ra
    ctx->pc = 0x35A784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A784u;
        // 0x35a788: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A78Cu;
}
