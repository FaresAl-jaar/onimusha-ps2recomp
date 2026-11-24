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

// Function: sub_003D8B20
// Address: 0x3d8b20 - 0x3d8ba8
void sub_003D8B20_0x3d8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8B20_0x3d8b20");
#endif

    switch (ctx->pc) {
        case 0x3d8b34u: goto label_3d8b34;
        case 0x3d8b44u: goto label_3d8b44;
        default: break;
    }

    ctx->pc = 0x3d8b20u;

    // 0x3d8b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d8b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d8b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d8b2c: 0xc0f6e44  jal         func_3DB910
    ctx->pc = 0x3D8B2Cu;
    SET_GPR_U32(ctx, 31, 0x3D8B34u);
    ctx->pc = 0x3D8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8B2Cu;
    // 0x3d8b30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB910u, 0x3D8B2Cu, 0x3D8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B34u;
label_3d8b34:
    // 0x3d8b34: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3d8b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3d8b38: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3d8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3d8b3c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3D8B3Cu;
    SET_GPR_U32(ctx, 31, 0x3D8B44u);
    ctx->pc = 0x3D8B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8B3Cu;
    // 0x3d8b40: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3D8B3Cu, 0x3D8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B44u;
label_3d8b44:
    // 0x3d8b44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D8B44u;
    {
        const bool branch_taken_0x3d8b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8b44) {
            ctx->pc = 0x3D8B90u;
            goto label_3d8b90;
        }
    }
    ctx->pc = 0x3D8B4Cu;
    // 0x3d8b4c: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x3d8b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d8b50: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x3d8b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d8b54: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3d8b58: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3d8b58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3d8b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d8b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d8b60: 0x0  nop
    ctx->pc = 0x3d8b60u;
    // NOP
    // 0x3d8b64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d8b64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d8b68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8B68u;
    {
        const bool branch_taken_0x3d8b68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d8b68) {
            ctx->pc = 0x3D8B88u;
            goto label_3d8b88;
        }
    }
    ctx->pc = 0x3D8B70u;
    // 0x3d8b70: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x3d8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x3d8b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d8b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d8b78: 0x0  nop
    ctx->pc = 0x3d8b78u;
    // NOP
    // 0x3d8b7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d8b7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d8b80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8B80u;
    {
        const bool branch_taken_0x3d8b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d8b80) {
            ctx->pc = 0x3D8B90u;
            goto label_3d8b90;
        }
    }
    ctx->pc = 0x3D8B88u;
label_3d8b88:
    // 0x3d8b88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8B88u;
    {
        const bool branch_taken_0x3d8b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B88u;
        // 0x3d8b8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8b88) {
            ctx->pc = 0x3D8B98u;
            goto label_3d8b98;
        }
    }
    ctx->pc = 0x3D8B90u;
label_3d8b90:
    // 0x3d8b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8b94: 0x0  nop
    ctx->pc = 0x3d8b94u;
    // NOP
label_3d8b98:
    // 0x3d8b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8BA0u;
        // 0x3d8ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8BA8u;
}
