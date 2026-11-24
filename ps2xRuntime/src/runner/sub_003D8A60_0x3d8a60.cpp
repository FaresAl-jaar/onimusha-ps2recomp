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

// Function: sub_003D8A60
// Address: 0x3d8a60 - 0x3d8aec
void sub_003D8A60_0x3d8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8A60_0x3d8a60");
#endif

    switch (ctx->pc) {
        case 0x3d8a78u: goto label_3d8a78;
        case 0x3d8a88u: goto label_3d8a88;
        case 0x3d8ab4u: goto label_3d8ab4;
        default: break;
    }

    ctx->pc = 0x3d8a60u;

    // 0x3d8a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d8a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d8a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d8a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d8a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d8a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8a70: 0xc0f6e44  jal         func_3DB910
    ctx->pc = 0x3D8A70u;
    SET_GPR_U32(ctx, 31, 0x3D8A78u);
    ctx->pc = 0x3D8A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8A70u;
    // 0x3d8a74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB910u, 0x3D8A70u, 0x3D8A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8A78u;
label_3d8a78:
    // 0x3d8a78: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3d8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3d8a7c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3d8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3d8a80: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3D8A80u;
    SET_GPR_U32(ctx, 31, 0x3D8A88u);
    ctx->pc = 0x3D8A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8A80u;
    // 0x3d8a84: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3D8A80u, 0x3D8A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8A88u;
label_3d8a88:
    // 0x3d8a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d8a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8a8c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D8A8Cu;
    {
        const bool branch_taken_0x3d8a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8a8c) {
            ctx->pc = 0x3D8AD0u;
            goto label_3d8ad0;
        }
    }
    ctx->pc = 0x3D8A94u;
    // 0x3d8a94: 0x8e232bdc  lw          $v1, 0x2BDC($s1)
    ctx->pc = 0x3d8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11228)));
    // 0x3d8a98: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x3d8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x3d8a9c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x3d8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x3d8aa0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d8aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d8aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d8aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d8aa8: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x3d8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3d8aac: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3D8AACu;
    SET_GPR_U32(ctx, 31, 0x3D8AB4u);
    ctx->pc = 0x3D8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8AACu;
    // 0x3d8ab0: 0x24660040  addiu       $a2, $v1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3D8AACu, 0x3D8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8AB4u;
label_3d8ab4:
    // 0x3d8ab4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3d8ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d8ab8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3d8ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d8abc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d8abcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d8ac0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8AC0u;
    {
        const bool branch_taken_0x3d8ac0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AC0u;
        // 0x3d8ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ac0) {
            ctx->pc = 0x3D8AD0u;
            goto label_3d8ad0;
        }
    }
    ctx->pc = 0x3D8AC8u;
    // 0x3d8ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8AC8u;
    {
        const bool branch_taken_0x3d8ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8ac8) {
            ctx->pc = 0x3D8AD8u;
            goto label_3d8ad8;
        }
    }
    ctx->pc = 0x3D8AD0u;
label_3d8ad0:
    // 0x3d8ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8ad4: 0x0  nop
    ctx->pc = 0x3d8ad4u;
    // NOP
label_3d8ad8:
    // 0x3d8ad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8AE4u;
        // 0x3d8ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8AECu;
}
