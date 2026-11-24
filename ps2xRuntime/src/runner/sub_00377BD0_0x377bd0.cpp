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

// Function: sub_00377BD0
// Address: 0x377bd0 - 0x377c74
void sub_00377BD0_0x377bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377BD0_0x377bd0");
#endif

    switch (ctx->pc) {
        case 0x377c10u: goto label_377c10;
        case 0x377c28u: goto label_377c28;
        default: break;
    }

    ctx->pc = 0x377bd0u;

    // 0x377bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377bd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x377bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x377bd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x377bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x377bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x377bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377be0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x377be0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x377be4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x377be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x377be8: 0x8f838c18  lw          $v1, -0x73E8($gp)
    ctx->pc = 0x377be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x377bec: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x377BECu;
    {
        const bool branch_taken_0x377bec = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x377BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BECu;
        // 0x377bf0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377bec) {
            ctx->pc = 0x377C58u;
            goto label_377c58;
        }
    }
    ctx->pc = 0x377BF4u;
    // 0x377bf4: 0x93838c1c  lbu         $v1, -0x73E4($gp)
    ctx->pc = 0x377bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937628)));
    // 0x377bf8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x377BF8u;
    {
        const bool branch_taken_0x377bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377bf8) {
            ctx->pc = 0x377C58u;
            goto label_377c58;
        }
    }
    ctx->pc = 0x377C00u;
    // 0x377c00: 0x8f918c10  lw          $s1, -0x73F0($gp)
    ctx->pc = 0x377c00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937616)));
    // 0x377c04: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x377C04u;
    {
        const bool branch_taken_0x377c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x377c04) {
            ctx->pc = 0x377C48u;
            goto label_377c48;
        }
    }
    ctx->pc = 0x377C0Cu;
    // 0x377c0c: 0x0  nop
    ctx->pc = 0x377c0cu;
    // NOP
label_377c10:
    // 0x377c10: 0x8e3005bc  lw          $s0, 0x5BC($s1)
    ctx->pc = 0x377c10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    // 0x377c14: 0xc7948c20  lwc1        $f20, -0x73E0($gp)
    ctx->pc = 0x377c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377c18: 0x3c050092  lui         $a1, 0x92
    ctx->pc = 0x377c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)146 << 16));
    // 0x377c1c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x377c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x377c20: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x377C20u;
    SET_GPR_U32(ctx, 31, 0x377C28u);
    ctx->pc = 0x377C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C20u;
    // 0x377c24: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x377C20u, 0x377C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C28u;
label_377c28:
    // 0x377c28: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x377c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x377c2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x377c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377c30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x377C30u;
    {
        const bool branch_taken_0x377c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x377C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C30u;
        // 0x377c34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377c30) {
            ctx->pc = 0x377C40u;
            goto label_377c40;
        }
    }
    ctx->pc = 0x377C38u;
    // 0x377c38: 0xa223053a  sb          $v1, 0x53A($s1)
    ctx->pc = 0x377c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 3));
    // 0x377c3c: 0x0  nop
    ctx->pc = 0x377c3cu;
    // NOP
label_377c40:
    // 0x377c40: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x377C40u;
    {
        const bool branch_taken_0x377c40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x377C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C40u;
        // 0x377c44: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377c40) {
            ctx->pc = 0x377C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377c10;
        }
    }
    ctx->pc = 0x377C48u;
label_377c48:
    // 0x377c48: 0xc7808c20  lwc1        $f0, -0x73E0($gp)
    ctx->pc = 0x377c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377c4c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x377c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x377c50: 0xe7808c20  swc1        $f0, -0x73E0($gp)
    ctx->pc = 0x377c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937632), bits); }
    // 0x377c54: 0x0  nop
    ctx->pc = 0x377c54u;
    // NOP
label_377c58:
    // 0x377c58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x377c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377c5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x377c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377c60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x377c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x377c64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377c68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x377c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x377C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C6Cu;
        // 0x377c70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377C74u;
}
